from pathlib import Path

import numpy as np
import pytest
import tensorflow as tf
from tensorflow.keras.layers import Conv1D, Conv2D

import hls4ml

test_root_path = Path(__file__).parent

padds_options = ['same', 'valid']
chans_options = ['channels_last']
io_type_options = ['io_parallel', 'io_stream']
strides1d_options = [(1,), (2,)]
strides2d_options = [(1, 1), (2, 2)]
strategy_options = ['Latency', 'Resource']


@pytest.mark.parametrize('chans', chans_options)
@pytest.mark.parametrize('padds', padds_options)
@pytest.mark.parametrize('strides', strides1d_options)
@pytest.mark.parametrize(
    'backend, io_type, strategy, conv_impl',
    [
        ('Quartus', 'io_parallel', 'resource', 'LineBuffer'),
        ('Vivado', 'io_parallel', 'resource', 'LineBuffer'),
        ('Vitis', 'io_parallel', 'resource', 'LineBuffer'),
        ('Vivado', 'io_parallel', 'latency', 'LineBuffer'),
        ('Vitis', 'io_parallel', 'latency', 'LineBuffer'),
        ('Vivado', 'io_parallel', 'latency', 'Pointwise'),
        ('Vitis', 'io_parallel', 'latency', 'Pointwise'),
        ('Vivado', 'io_stream', 'latency', 'LineBuffer'),
        ('Vivado', 'io_stream', 'resource', 'LineBuffer'),
        ('Vitis', 'io_stream', 'latency', 'LineBuffer'),
        ('Vitis', 'io_stream', 'resource', 'LineBuffer'),
    ],
)
def test_pointwiseconv1d(chans, padds, strides, backend, io_type, strategy, conv_impl):
    model = tf.keras.models.Sequential()
    input_shape = (28, 3)
    model.add(
        Conv1D(
            filters=32,
            kernel_size=(1,),
            strides=strides,
            padding=padds,
            input_shape=input_shape,
            kernel_initializer='normal',
            use_bias=False,
            data_format=chans,
            name='pointwise1d',
        )
    )
    model.compile(optimizer='adam', loss='mse')

    X_input = np.random.rand(100, *input_shape)
    keras_prediction = model.predict(X_input)

    default_precision = 'ac_fixed<32,16,true>' if backend == 'Quartus' else 'ap_fixed<32,16>'
    config = hls4ml.utils.config_from_keras_model(model, default_precision=default_precision, granularity='name')
    config['Model']['Strategy'] = strategy
    config['LayerName']['pointwise1d']['ConvImplementation'] = conv_impl

    output_dir = str(
        test_root_path
        / f'hls4mlprj_pointwise1d_{chans}_strides_{strides[0]}_{padds}_padding_{backend}_{io_type}_{strategy}_{conv_impl}'
    )
    hls_model = hls4ml.converters.convert_from_keras_model(
        model, hls_config=config, output_dir=output_dir, io_type=io_type, backend=backend
    )
    hls_model.compile()
    hls_prediction = hls_model.predict(X_input).reshape(keras_prediction.shape)

    assert 'Pointwise' in list(hls_model.graph.values())[1].class_name
    np.testing.assert_allclose(hls_prediction, keras_prediction, rtol=0, atol=0.001)


@pytest.mark.parametrize('chans', chans_options)
@pytest.mark.parametrize('padds', padds_options)
@pytest.mark.parametrize('strides', strides2d_options)
@pytest.mark.parametrize(
    'backend, io_type, strategy',
    [
        ('Quartus', 'io_parallel', 'resource'),
        ('Vivado', 'io_parallel', 'resource'),
        ('Vivado', 'io_parallel', 'latency'),
        ('Vivado', 'io_stream', 'latency'),
        ('Vivado', 'io_stream', 'resource'),
    ],
)
def test_pointwiseconv2d(chans, padds, strides, backend, io_type, strategy):
    model = tf.keras.models.Sequential()
    input_shape = (28, 28, 3)
    model.add(
        Conv2D(
            filters=32,
            kernel_size=(1, 1),
            strides=strides,
            padding=padds,
            input_shape=input_shape,
            kernel_initializer='normal',
            use_bias=False,
            data_format=chans,
            name='pointwise2d',
        )
    )

    model.compile(optimizer='adam', loss='mse')
    X_input = np.random.rand(100, *input_shape)
    keras_prediction = model.predict(X_input)

    default_precision = 'ac_fixed<32, 9, true>' if backend == 'Quartus' else 'ap_fixed<32, 9>'

    config = hls4ml.utils.config_from_keras_model(model, default_precision=default_precision)
    config['Model']['Strategy'] = strategy
    stride_cfg = str(strides).replace(', ', '_').replace('(', '').replace(')', '')
    output_dir = str(
        test_root_path / f'hls4mlprj_pointwise2d_{chans}_strides_{stride_cfg}_{padds}_padding_{backend}_{io_type}_{strategy}'
    )

    hls_model = hls4ml.converters.convert_from_keras_model(
        model, hls_config=config, output_dir=output_dir, io_type=io_type, backend=backend
    )
    hls_model.compile()
    hls_prediction = hls_model.predict(X_input).reshape(keras_prediction.shape)

    assert 'Pointwise' in list(hls_model.graph.values())[1].class_name
    np.testing.assert_allclose(hls_prediction, keras_prediction, rtol=0, atol=0.001)


@pytest.mark.parametrize('strategy', ['Latency', 'Resource'])
def test_pointwise_config(strategy):
    model = tf.keras.models.Sequential()
    input_shape = (8, 8, 3)
    model.add(
        Conv2D(
            filters=8,
            kernel_size=(1, 1),
            input_shape=input_shape,
            kernel_initializer='normal',
            use_bias=False,
            name='conv2d_1x1',
        )
    )

    model.compile(optimizer='adam', loss='mse')

    config = hls4ml.utils.config_from_keras_model(model, granularity='name')
    config['Model']['Strategy'] = strategy
    config['LayerName']['conv2d_1x1']['Strategy'] = strategy  # Will fail if the strategy is not lowercase
    output_dir = str(test_root_path / f'hls4mlprj_pointwise2d_config_{strategy}')

    hls_model = hls4ml.converters.convert_from_keras_model(model, hls_config=config, output_dir=output_dir)
    # Model will fail to compile if strategy was set incorrectly
    hls_model.compile()

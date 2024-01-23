//Numpy array shape [32, 32]
//Min -1.000000000000
//Max 1.000000000000
//Number of zeros 0

#ifndef W21_H_
#define W21_H_

#ifndef __SYNTHESIS__
phi3_weight_t w21[1024];
#else
phi3_weight_t w21[1024] = {0.820312, 0.062500, 0.382812, 0.101562, -0.093750, 0.539062, -0.617188, 0.484375, 0.257812, 0.820312, 0.500000, 0.312500, 0.195312, -0.046875, 0.242188, -0.242188, 0.976562, -0.304688, 0.875000, -0.054688, 0.976562, 0.164062, 0.023438, 0.812500, 0.539062, -0.687500, -0.953125, 0.546875, 0.031250, 0.664062, -0.359375, -0.500000, -0.015625, 0.023438, -0.093750, 0.140625, 0.031250, -0.148438, 0.156250, -0.750000, -0.195312, 0.640625, -0.289062, -0.304688, 0.210938, -0.242188, -0.171875, -0.257812, 0.460938, -0.320312, -0.226562, -0.250000, -0.054688, -0.109375, 0.117188, 0.125000, 0.156250, -0.054688, 0.046875, -0.039062, 0.242188, -0.171875, -0.078125, -0.109375, 0.054688, 0.039062, 0.218750, 0.062500, -0.359375, -0.304688, -0.437500, -0.203125, -0.187500, 0.265625, -0.476562, -0.218750, -0.085938, 0.109375, 0.000000, 0.179688, 0.531250, -0.117188, -0.195312, -0.164062, 0.320312, -0.085938, -0.281250, -0.359375, 0.187500, 0.164062, -0.210938, 0.101562, 0.062500, 0.289062, -0.078125, 0.195312, 0.976562, -0.078125, 0.710938, 0.265625, -0.460938, -0.914062, -0.015625, -0.617188, -0.531250, 0.578125, 0.250000, 0.132812, 0.984375, -0.375000, 0.429688, 0.054688, -0.992188, 0.031250, -0.968750, -0.789062, -0.007812, -0.976562, 0.515625, 0.578125, 0.382812, 0.976562, 0.023438, 0.898438, -0.562500, 0.617188, 0.890625, -0.148438, 0.070312, 0.070312, 0.210938, -0.304688, 0.625000, 0.140625, -0.593750, -0.984375, 0.132812, 0.328125, -0.421875, -0.156250, -0.250000, 0.710938, 0.992188, -0.203125, -0.218750, -0.140625, 0.085938, 0.390625, 0.054688, -0.718750, -0.375000, 0.531250, 0.882812, 0.921875, 0.945312, 0.992188, 0.445312, -0.492188, -0.976562, -0.992188, 0.039062, -0.625000, -0.046875, -0.179688, 0.992188, -0.828125, -0.656250, -0.406250, -0.359375, -0.312500, 0.187500, -0.078125, 0.281250, -0.062500, -0.117188, 0.304688, -0.804688, -0.101562, -0.773438, -0.984375, -0.367188, 0.187500, 0.835938, -0.515625, 0.234375, -0.992188, -0.960938, 0.031250, 0.164062, 0.101562, -0.992188, -0.992188, -0.742188, -0.093750, -1.000000, -0.335938, -0.890625, -0.984375, -0.273438, -0.250000, -0.406250, 0.914062, -0.093750, -0.679688, -0.445312, -0.679688, 0.835938, -0.070312, 0.960938, -0.289062, 0.101562, -0.093750, -0.671875, -0.234375, 0.179688, 0.554688, 0.890625, 0.726562, 0.992188, -1.000000, -0.242188, 0.789062, 0.015625, 0.679688, 0.187500, -0.007812, -0.585938, -0.437500, -0.953125, 0.140625, 0.265625, 0.601562, -0.976562, -0.968750, -0.046875, -0.539062, -0.367188, -0.976562, -0.984375, 0.023438, 0.843750, -0.312500, 0.742188, 0.742188, 0.960938, 0.968750, -0.695312, -0.812500, 0.375000, 0.140625, 0.187500, -1.000000, -0.992188, -0.062500, -0.742188, 0.812500, 0.757812, -0.093750, 0.468750, -0.281250, -0.171875, 0.546875, -0.843750, -0.359375, 0.062500, 0.750000, 0.117188, 0.179688, 0.500000, 0.078125, 0.281250, 0.265625, 0.484375, 0.257812, 0.679688, -0.195312, -0.937500, -0.398438, -0.523438, 0.085938, 0.562500, -0.445312, 0.156250, 0.632812, -0.179688, 0.367188, -0.984375, 0.390625, 0.710938, -0.171875, 0.398438, -0.437500, -0.468750, 0.781250, -0.140625, -0.117188, 0.085938, 0.679688, 0.226562, 0.507812, -0.132812, 0.054688, 0.125000, -0.046875, 0.429688, -0.195312, 0.117188, -0.015625, -0.875000, -0.476562, -0.523438, 0.992188, 0.226562, -1.000000, 0.460938, 0.664062, 0.125000, 0.515625, -0.171875, -0.273438, -0.796875, -0.203125, -0.007812, 0.015625, 0.023438, 0.664062, 0.226562, -0.187500, 0.585938, -0.992188, -0.281250, -0.039062, -0.929688, 0.757812, -0.695312, -0.304688, 0.406250, 0.171875, -0.960938, -0.679688, -0.906250, 0.250000, 0.085938, 0.000000, -0.281250, -0.750000, -0.070312, -0.984375, 0.015625, -0.789062, 0.500000, -0.250000, 0.156250, -0.023438, -0.093750, 0.085938, -0.546875, 0.460938, -0.117188, 0.562500, 0.007812, 0.140625, 0.117188, -0.085938, 0.031250, 0.156250, -0.046875, 0.531250, 0.281250, -0.421875, 0.484375, -0.031250, 0.328125, 0.109375, -0.679688, 0.179688, 0.242188, 0.179688, -0.179688, -0.578125, -0.093750, 0.000000, -0.203125, -0.281250, 0.632812, -0.093750, -0.960938, -0.289062, -0.960938, 0.390625, -0.648438, 0.757812, -0.968750, -0.648438, 0.531250, -0.906250, -0.750000, -0.210938, -0.367188, -0.179688, -0.046875, -0.203125, 0.054688, 0.093750, 0.351562, 0.703125, -0.054688, 0.265625, 0.367188, 0.320312, 0.726562, 0.039062, 0.398438, -0.593750, -0.367188, 0.093750, -0.218750, 0.164062, 0.890625, 0.187500, 0.054688, 0.445312, -0.984375, 0.062500, 0.648438, 0.460938, -0.578125, -0.203125, 0.281250, 0.390625, 0.710938, 0.046875, 0.671875, -0.140625, 0.429688, 0.523438, -0.296875, -0.257812, -0.109375, 0.671875, -0.250000, -0.484375, 0.218750, 0.976562, -0.070312, 0.203125, 0.445312, -0.062500, 0.273438, -0.335938, 0.453125, -0.414062, -0.359375, 0.242188, -0.210938, 0.273438, 0.320312, 0.890625, 0.367188, 0.679688, 0.984375, 0.226562, -0.546875, -0.382812, 0.851562, -0.320312, -0.304688, 0.484375, 0.015625, -0.968750, 0.648438, -0.140625, 0.109375, -0.046875, 0.218750, 0.382812, 0.109375, 0.460938, 0.320312, 0.968750, -0.992188, -0.265625, -0.984375, -0.210938, -0.976562, 0.000000, 0.398438, 0.445312, 0.828125, -0.460938, -0.843750, -0.835938, 0.023438, -0.078125, 0.976562, 0.140625, 0.992188, -0.273438, 0.109375, 0.210938, 0.984375, 0.984375, 0.960938, -1.000000, 0.367188, -0.500000, 0.531250, -0.992188, -0.250000, 0.992188, 0.937500, 0.429688, -0.562500, -0.125000, -0.234375, 0.093750, -0.968750, -0.812500, -0.835938, -0.859375, -0.945312, 0.296875, -0.023438, -0.390625, -0.875000, -0.617188, -1.000000, -0.437500, 0.000000, -0.359375, -0.023438, 0.257812, -0.984375, -0.851562, 0.992188, 0.695312, 0.351562, 0.992188, -0.929688, 0.992188, -0.992188, -0.546875, 0.570312, -0.921875, -0.101562, -0.218750, -0.992188, -0.335938, 0.242188, -0.945312, -0.585938, -0.804688, 0.343750, 0.101562, 0.382812, 0.062500, 0.843750, -0.320312, 0.578125, 0.257812, -0.976562, -0.156250, -0.343750, -0.421875, -0.234375, 0.804688, -0.203125, 0.273438, -0.132812, 0.539062, -0.242188, 0.023438, -0.093750, -0.101562, -0.984375, 0.367188, 0.039062, -0.226562, 0.351562, -0.281250, 0.000000, -0.984375, 0.000000, -0.468750, 0.101562, -0.531250, 0.453125, -0.265625, 0.382812, -0.523438, 0.164062, -0.132812, -0.523438, -0.421875, -0.359375, -0.578125, -0.968750, -0.085938, 0.031250, -0.148438, 0.320312, 0.070312, -1.000000, 0.062500, -0.226562, -0.187500, -0.804688, 0.148438, 0.203125, 0.031250, 0.109375, -0.226562, 0.632812, -0.117188, -0.132812, 0.484375, -0.281250, 0.328125, -0.156250, 0.281250, 0.570312, -0.398438, 0.562500, -0.117188, -0.140625, -0.320312, 0.164062, -0.210938, -1.000000, -0.984375, 0.054688, 0.406250, 0.195312, 0.445312, -0.781250, 0.242188, -0.125000, 0.218750, -0.335938, 0.226562, -0.109375, -0.421875, -0.765625, 0.015625, -0.609375, -0.929688, -0.882812, -0.953125, -0.187500, 0.382812, 0.906250, -0.367188, -0.875000, 0.101562, 0.273438, -0.445312, -1.000000, -0.054688, -0.625000, 0.742188, 0.265625, -0.468750, 0.437500, 0.414062, -0.257812, 0.085938, -0.960938, -0.390625, -0.359375, -0.882812, -0.046875, 0.539062, -0.382812, -0.515625, 0.140625, -0.117188, 0.015625, 0.859375, 0.242188, 0.304688, -0.695312, -0.882812, -0.937500, 0.375000, 0.789062, -0.117188, 0.304688, 0.203125, 0.000000, 0.125000, 0.835938, 0.710938, 0.156250, 0.789062, 0.867188, 0.414062, 0.328125, -0.953125, 0.648438, -0.984375, 0.609375, 0.070312, -0.046875, 0.578125, 0.234375, -0.226562, 0.703125, -0.109375, 0.343750, 0.445312, -0.218750, 0.250000, 0.640625, 0.773438, 0.640625, 0.289062, 0.835938, 0.250000, 0.703125, -0.109375, 0.250000, -0.054688, 0.687500, 0.820312, 0.156250, -0.992188, -0.031250, 0.421875, 0.289062, -0.992188, 0.632812, 0.992188, -0.148438, 0.617188, 0.851562, -0.218750, 0.179688, -0.476562, 0.289062, 0.085938, 0.125000, -0.117188, 0.992188, 0.406250, 0.273438, -0.445312, -0.914062, 0.601562, -0.796875, 0.312500, 0.304688, -0.343750, -0.257812, -0.226562, -0.546875, -0.328125, 0.203125, 0.906250, 0.218750, -0.718750, -0.828125, -0.312500, -0.148438, 0.117188, 0.382812, 0.570312, 0.476562, 0.734375, -0.968750, -0.351562, -0.968750, -0.062500, -0.437500, -0.687500, -0.031250, -0.484375, -0.890625, 0.273438, 0.335938, -0.171875, -0.937500, -0.125000, -0.468750, -0.101562, -0.867188, -0.054688, -0.593750, 0.046875, 0.117188, -0.992188, 0.828125, 0.062500, -0.304688, 0.507812, -0.921875, 0.421875, -1.000000, -0.976562, -0.429688, -0.039062, -0.250000, 0.320312, -0.187500, 0.296875, 0.062500, -0.117188, 0.351562, -0.132812, 0.000000, -0.226562, -0.132812, 0.312500, 0.234375, -0.015625, 0.164062, 0.265625, -0.406250, -0.093750, -0.125000, -0.171875, -0.250000, -0.117188, 0.117188, 0.179688, -0.078125, -0.257812, 0.148438, 0.335938, -0.054688, -0.382812, 0.000000, 0.125000, 0.460938, 0.273438, -0.125000, -0.445312, 0.984375, -0.523438, -0.843750, 0.687500, 0.265625, -0.226562, -0.265625, 0.078125, 0.429688, 0.085938, 0.453125, -0.210938, 0.046875, -0.125000, 0.257812, 0.890625, -0.960938, 0.734375, -0.625000, 0.320312, -0.351562, -0.882812, 0.046875, 0.101562, 0.750000, 0.296875, -0.875000, -0.210938, -0.804688, 0.062500, 0.210938, -0.195312, 0.781250, 0.179688, 0.703125, -0.601562, 0.507812, 0.578125, -0.242188, 0.593750, 0.312500, -0.250000, 0.976562, -0.484375, 0.507812, -0.132812, 0.679688, 0.960938, -0.078125, -0.187500, 0.296875, -1.000000, 0.171875, -0.992188, 0.617188, -0.054688, -0.070312, 0.382812, 0.398438, 0.070312, 0.906250, -0.109375, 0.375000, -0.359375, -0.585938, -0.218750, 0.382812, 0.265625, -0.203125, 0.695312, -0.203125, 0.507812, 0.398438, 0.320312, -0.195312, -0.351562, -0.203125, -0.539062, 0.671875, 0.125000, 0.343750, -0.148438, 0.179688, -0.296875, 0.093750, 0.070312, -0.031250, 0.828125, 0.984375, 0.015625, -0.078125, -0.218750, -0.484375, -0.367188, 0.367188, -0.414062, 0.070312, 0.210938, 0.515625, -0.289062, -0.593750, -0.820312, -0.273438, -0.945312, -0.960938, -0.437500, -0.757812, -0.203125, -0.992188, -0.257812, -0.062500, -0.117188, 0.648438, -0.375000, 0.320312, -0.484375, -0.531250, 0.992188, 0.179688, -0.984375, -0.101562, -0.929688, 0.281250, 0.101562, 0.820312, -0.054688, -0.078125, 0.164062, 0.507812, 0.046875, -0.500000, 0.062500, 0.445312, 0.546875, 0.156250, 0.906250, 0.578125, 0.242188, 0.429688, -0.031250, 0.226562, 0.226562, 0.156250, 0.429688, -0.976562, 0.171875, -0.968750, 0.656250, 0.601562, -0.992188, 0.992188, 0.687500, 0.414062, 0.390625, 0.062500, -0.281250, 0.226562, 0.046875, 0.304688, -0.367188, 0.523438, 0.000000, -0.304688, 0.109375, -0.242188, 0.437500, -0.335938, 0.023438, 0.281250, 0.296875, 0.382812, -0.203125, 0.085938, 0.039062, -0.632812, -0.070312, -0.242188, -0.289062, -0.460938, 0.375000, 0.164062, 0.398438, -0.375000, 0.312500, 0.078125, 0.187500, 0.218750, -0.015625};
#endif

#endif
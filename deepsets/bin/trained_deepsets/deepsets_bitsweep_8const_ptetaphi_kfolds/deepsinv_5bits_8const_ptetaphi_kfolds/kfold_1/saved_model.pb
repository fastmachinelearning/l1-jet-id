иШ(
чЖ
D
AddV2
x"T
y"T
z"T"
Ttype:
2	
^
AssignVariableOp
resource
value"dtype"
dtypetype"
validate_shapebool( 
~
BiasAdd

value"T	
bias"T
output"T" 
Ttype:
2	"-
data_formatstringNHWC:
NHWCNCHW
N
Cast	
x"SrcT	
y"DstT"
SrcTtype"
DstTtype"
Truncatebool( 
8
Const
output"dtype"
valuetensor"
dtypetype
^
Fill
dims"
index_type

value"T
output"T"	
Ttype"

index_typetype0:
2	
.
Identity

input"T
output"T"	
Ttype
?
	LessEqual
x"T
y"T
z
"
Ttype:
2	
q
MatMul
a"T
b"T
product"T"
transpose_abool( "
transpose_bbool( "
Ttype:

2	
>
Maximum
x"T
y"T
z"T"
Ttype:
2	

Mean

input"T
reduction_indices"Tidx
output"T"
	keep_dimsbool( " 
Ttype:
2	"
Tidxtype0:
2	

MergeV2Checkpoints
checkpoint_prefixes
destination_prefix"
delete_old_dirsbool("
allow_missing_filesbool( 
>
Minimum
x"T
y"T
z"T"
Ttype:
2	
?
Mul
x"T
y"T
z"T"
Ttype:
2	
0
Neg
x"T
y"T"
Ttype:
2
	

NoOp
M
Pack
values"T*N
output"T"
Nint(0"	
Ttype"
axisint 
C
Placeholder
output"dtype"
dtypetype"
shapeshape:
8
Pow
x"T
y"T
z"T"
Ttype:
2
	
@
ReadVariableOp
resource
value"dtype"
dtypetype
@
RealDiv
x"T
y"T
z"T"
Ttype:
2	
E
Relu
features"T
activations"T"
Ttype:
2	
[
Reshape
tensor"T
shape"Tshape
output"T"	
Ttype"
Tshapetype0:
2	
o
	RestoreV2

prefix
tensor_names
shape_and_slices
tensors2dtypes"
dtypes
list(type)(0
2
Round
x"T
y"T"
Ttype:
2
	
l
SaveV2

prefix
tensor_names
shape_and_slices
tensors2dtypes"
dtypes
list(type)(0
?
Select
	condition

t"T
e"T
output"T"	
Ttype
A
SelectV2
	condition

t"T
e"T
output"T"	
Ttype
P
Shape

input"T
output"out_type"	
Ttype"
out_typetype0:
2	
H
ShardedFilename
basename	
shard

num_shards
filename
С
StatefulPartitionedCall
args2Tin
output2Tout"
Tin
list(type)("
Tout
list(type)("	
ffunc"
configstring "
config_protostring "
executor_typestring Ј
@
StaticRegexFullMatch	
input

output
"
patternstring
2
StopGradient

input"T
output"T"	
Ttype
N

StringJoin
inputs*N

output"
Nint(0"
	separatorstring 
<
Sub
x"T
y"T
z"T"
Ttype:
2	
P
	Transpose
x"T
perm"Tperm
y"T"	
Ttype"
Tpermtype0:
2	
P
Unpack

value"T
output"T*num"
numint("	
Ttype"
axisint 

VarHandleOp
resource"
	containerstring "
shared_namestring "
dtypetype"
shapeshape"#
allowed_deviceslist(string)
 "serve*2.11.02v2.11.0-rc2-17-gd5b57ca93e58Ы%
^
countVarHandleOp*
_output_shapes
: *
dtype0*
shape: *
shared_namecount
W
count/Read/ReadVariableOpReadVariableOpcount*
_output_shapes
: *
dtype0
^
totalVarHandleOp*
_output_shapes
: *
dtype0*
shape: *
shared_nametotal
W
total/Read/ReadVariableOpReadVariableOptotal*
_output_shapes
: *
dtype0
b
count_1VarHandleOp*
_output_shapes
: *
dtype0*
shape: *
shared_name	count_1
[
count_1/Read/ReadVariableOpReadVariableOpcount_1*
_output_shapes
: *
dtype0
b
total_1VarHandleOp*
_output_shapes
: *
dtype0*
shape: *
shared_name	total_1
[
total_1/Read/ReadVariableOpReadVariableOptotal_1*
_output_shapes
: *
dtype0

Adam/v/q_dense_4/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape:*&
shared_nameAdam/v/q_dense_4/bias
{
)Adam/v/q_dense_4/bias/Read/ReadVariableOpReadVariableOpAdam/v/q_dense_4/bias*
_output_shapes
:*
dtype0

Adam/m/q_dense_4/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape:*&
shared_nameAdam/m/q_dense_4/bias
{
)Adam/m/q_dense_4/bias/Read/ReadVariableOpReadVariableOpAdam/m/q_dense_4/bias*
_output_shapes
:*
dtype0

Adam/v/q_dense_4/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
: *(
shared_nameAdam/v/q_dense_4/kernel

+Adam/v/q_dense_4/kernel/Read/ReadVariableOpReadVariableOpAdam/v/q_dense_4/kernel*
_output_shapes

: *
dtype0

Adam/m/q_dense_4/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
: *(
shared_nameAdam/m/q_dense_4/kernel

+Adam/m/q_dense_4/kernel/Read/ReadVariableOpReadVariableOpAdam/m/q_dense_4/kernel*
_output_shapes

: *
dtype0

Adam/v/q_dense_3/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: *&
shared_nameAdam/v/q_dense_3/bias
{
)Adam/v/q_dense_3/bias/Read/ReadVariableOpReadVariableOpAdam/v/q_dense_3/bias*
_output_shapes
: *
dtype0

Adam/m/q_dense_3/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: *&
shared_nameAdam/m/q_dense_3/bias
{
)Adam/m/q_dense_3/bias/Read/ReadVariableOpReadVariableOpAdam/m/q_dense_3/bias*
_output_shapes
: *
dtype0

Adam/v/q_dense_3/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *(
shared_nameAdam/v/q_dense_3/kernel

+Adam/v/q_dense_3/kernel/Read/ReadVariableOpReadVariableOpAdam/v/q_dense_3/kernel*
_output_shapes

:  *
dtype0

Adam/m/q_dense_3/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *(
shared_nameAdam/m/q_dense_3/kernel

+Adam/m/q_dense_3/kernel/Read/ReadVariableOpReadVariableOpAdam/m/q_dense_3/kernel*
_output_shapes

:  *
dtype0

Adam/v/q_dense_2/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: *&
shared_nameAdam/v/q_dense_2/bias
{
)Adam/v/q_dense_2/bias/Read/ReadVariableOpReadVariableOpAdam/v/q_dense_2/bias*
_output_shapes
: *
dtype0

Adam/m/q_dense_2/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: *&
shared_nameAdam/m/q_dense_2/bias
{
)Adam/m/q_dense_2/bias/Read/ReadVariableOpReadVariableOpAdam/m/q_dense_2/bias*
_output_shapes
: *
dtype0

Adam/v/q_dense_2/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *(
shared_nameAdam/v/q_dense_2/kernel

+Adam/v/q_dense_2/kernel/Read/ReadVariableOpReadVariableOpAdam/v/q_dense_2/kernel*
_output_shapes

:  *
dtype0

Adam/m/q_dense_2/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *(
shared_nameAdam/m/q_dense_2/kernel

+Adam/m/q_dense_2/kernel/Read/ReadVariableOpReadVariableOpAdam/m/q_dense_2/kernel*
_output_shapes

:  *
dtype0

Adam/v/q_dense_1/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: *&
shared_nameAdam/v/q_dense_1/bias
{
)Adam/v/q_dense_1/bias/Read/ReadVariableOpReadVariableOpAdam/v/q_dense_1/bias*
_output_shapes
: *
dtype0

Adam/m/q_dense_1/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: *&
shared_nameAdam/m/q_dense_1/bias
{
)Adam/m/q_dense_1/bias/Read/ReadVariableOpReadVariableOpAdam/m/q_dense_1/bias*
_output_shapes
: *
dtype0

Adam/v/q_dense_1/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *(
shared_nameAdam/v/q_dense_1/kernel

+Adam/v/q_dense_1/kernel/Read/ReadVariableOpReadVariableOpAdam/v/q_dense_1/kernel*
_output_shapes

:  *
dtype0

Adam/m/q_dense_1/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *(
shared_nameAdam/m/q_dense_1/kernel

+Adam/m/q_dense_1/kernel/Read/ReadVariableOpReadVariableOpAdam/m/q_dense_1/kernel*
_output_shapes

:  *
dtype0
~
Adam/v/q_dense/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: *$
shared_nameAdam/v/q_dense/bias
w
'Adam/v/q_dense/bias/Read/ReadVariableOpReadVariableOpAdam/v/q_dense/bias*
_output_shapes
: *
dtype0
~
Adam/m/q_dense/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: *$
shared_nameAdam/m/q_dense/bias
w
'Adam/m/q_dense/bias/Read/ReadVariableOpReadVariableOpAdam/m/q_dense/bias*
_output_shapes
: *
dtype0

Adam/v/q_dense/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
: *&
shared_nameAdam/v/q_dense/kernel

)Adam/v/q_dense/kernel/Read/ReadVariableOpReadVariableOpAdam/v/q_dense/kernel*
_output_shapes

: *
dtype0

Adam/m/q_dense/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
: *&
shared_nameAdam/m/q_dense/kernel

)Adam/m/q_dense/kernel/Read/ReadVariableOpReadVariableOpAdam/m/q_dense/kernel*
_output_shapes

: *
dtype0
n
learning_rateVarHandleOp*
_output_shapes
: *
dtype0*
shape: *
shared_namelearning_rate
g
!learning_rate/Read/ReadVariableOpReadVariableOplearning_rate*
_output_shapes
: *
dtype0
f
	iterationVarHandleOp*
_output_shapes
: *
dtype0	*
shape: *
shared_name	iteration
_
iteration/Read/ReadVariableOpReadVariableOp	iteration*
_output_shapes
: *
dtype0	
t
q_dense_4/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape:*
shared_nameq_dense_4/bias
m
"q_dense_4/bias/Read/ReadVariableOpReadVariableOpq_dense_4/bias*
_output_shapes
:*
dtype0
|
q_dense_4/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
: *!
shared_nameq_dense_4/kernel
u
$q_dense_4/kernel/Read/ReadVariableOpReadVariableOpq_dense_4/kernel*
_output_shapes

: *
dtype0
t
q_dense_3/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: *
shared_nameq_dense_3/bias
m
"q_dense_3/bias/Read/ReadVariableOpReadVariableOpq_dense_3/bias*
_output_shapes
: *
dtype0
|
q_dense_3/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *!
shared_nameq_dense_3/kernel
u
$q_dense_3/kernel/Read/ReadVariableOpReadVariableOpq_dense_3/kernel*
_output_shapes

:  *
dtype0
t
q_dense_2/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: *
shared_nameq_dense_2/bias
m
"q_dense_2/bias/Read/ReadVariableOpReadVariableOpq_dense_2/bias*
_output_shapes
: *
dtype0
|
q_dense_2/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *!
shared_nameq_dense_2/kernel
u
$q_dense_2/kernel/Read/ReadVariableOpReadVariableOpq_dense_2/kernel*
_output_shapes

:  *
dtype0
t
q_dense_1/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: *
shared_nameq_dense_1/bias
m
"q_dense_1/bias/Read/ReadVariableOpReadVariableOpq_dense_1/bias*
_output_shapes
: *
dtype0
|
q_dense_1/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *!
shared_nameq_dense_1/kernel
u
$q_dense_1/kernel/Read/ReadVariableOpReadVariableOpq_dense_1/kernel*
_output_shapes

:  *
dtype0
p
q_dense/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: *
shared_nameq_dense/bias
i
 q_dense/bias/Read/ReadVariableOpReadVariableOpq_dense/bias*
_output_shapes
: *
dtype0
x
q_dense/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
: *
shared_nameq_dense/kernel
q
"q_dense/kernel/Read/ReadVariableOpReadVariableOpq_dense/kernel*
_output_shapes

: *
dtype0

serving_default_input_1Placeholder*+
_output_shapes
:џџџџџџџџџ*
dtype0* 
shape:џџџџџџџџџ
ё
StatefulPartitionedCallStatefulPartitionedCallserving_default_input_1q_dense/kernelq_dense/biasq_dense_1/kernelq_dense_1/biasq_dense_2/kernelq_dense_2/biasq_dense_3/kernelq_dense_3/biasq_dense_4/kernelq_dense_4/bias*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:џџџџџџџџџ*,
_read_only_resource_inputs

	
*2
config_proto" 

CPU

GPU2 *0J 8 *-
f(R&
$__inference_signature_wrapper_458903

NoOpNoOp
З`
ConstConst"/device:CPU:0*
_output_shapes
: *
dtype0*ђ_
valueш_Bх_ Bо_
о
	variables
trainable_variables
regularization_losses
	keras_api
__call__
*&call_and_return_all_conditional_losses
_default_save_signature
phi
	rho

	optimizer

signatures*
J
0
1
2
3
4
5
6
7
8
9*
J
0
1
2
3
4
5
6
7
8
9*
* 
А
non_trainable_variables

layers
metrics
layer_regularization_losses
layer_metrics
	variables
trainable_variables
regularization_losses
__call__
_default_save_signature
*&call_and_return_all_conditional_losses
&"call_and_return_conditional_losses*
6
trace_0
trace_1
trace_2
trace_3* 
6
trace_0
 trace_1
!trace_2
"trace_3* 
* 
Ќ
#layer_with_weights-0
#layer-0
$layer-1
%layer_with_weights-1
%layer-2
&layer-3
'layer_with_weights-2
'layer-4
(layer-5
)	variables
*trainable_variables
+regularization_losses
,	keras_api
-__call__
*.&call_and_return_all_conditional_losses*
ы
/layer_with_weights-0
/layer-0
0layer-1
1layer_with_weights-1
1layer-2
2	variables
3trainable_variables
4regularization_losses
5	keras_api
6__call__
*7&call_and_return_all_conditional_losses*

8
_variables
9_iterations
:_learning_rate
;_index_dict
<
_momentums
=_velocities
>_update_step_xla*

?serving_default* 
NH
VARIABLE_VALUEq_dense/kernel&variables/0/.ATTRIBUTES/VARIABLE_VALUE*
LF
VARIABLE_VALUEq_dense/bias&variables/1/.ATTRIBUTES/VARIABLE_VALUE*
PJ
VARIABLE_VALUEq_dense_1/kernel&variables/2/.ATTRIBUTES/VARIABLE_VALUE*
NH
VARIABLE_VALUEq_dense_1/bias&variables/3/.ATTRIBUTES/VARIABLE_VALUE*
PJ
VARIABLE_VALUEq_dense_2/kernel&variables/4/.ATTRIBUTES/VARIABLE_VALUE*
NH
VARIABLE_VALUEq_dense_2/bias&variables/5/.ATTRIBUTES/VARIABLE_VALUE*
PJ
VARIABLE_VALUEq_dense_3/kernel&variables/6/.ATTRIBUTES/VARIABLE_VALUE*
NH
VARIABLE_VALUEq_dense_3/bias&variables/7/.ATTRIBUTES/VARIABLE_VALUE*
PJ
VARIABLE_VALUEq_dense_4/kernel&variables/8/.ATTRIBUTES/VARIABLE_VALUE*
NH
VARIABLE_VALUEq_dense_4/bias&variables/9/.ATTRIBUTES/VARIABLE_VALUE*
* 

0
	1*

@0
A1*
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
ђ
B	variables
Ctrainable_variables
Dregularization_losses
E	keras_api
F__call__
*G&call_and_return_all_conditional_losses
Hkernel_quantizer_internal
Ibias_quantizer_internal
J
quantizers

kernel
bias*

K	variables
Ltrainable_variables
Mregularization_losses
N	keras_api
O__call__
*P&call_and_return_all_conditional_losses
Q	quantizer* 
ђ
R	variables
Strainable_variables
Tregularization_losses
U	keras_api
V__call__
*W&call_and_return_all_conditional_losses
Xkernel_quantizer_internal
Ybias_quantizer_internal
Z
quantizers

kernel
bias*

[	variables
\trainable_variables
]regularization_losses
^	keras_api
___call__
*`&call_and_return_all_conditional_losses
a	quantizer* 
ђ
b	variables
ctrainable_variables
dregularization_losses
e	keras_api
f__call__
*g&call_and_return_all_conditional_losses
hkernel_quantizer_internal
ibias_quantizer_internal
j
quantizers

kernel
bias*

k	variables
ltrainable_variables
mregularization_losses
n	keras_api
o__call__
*p&call_and_return_all_conditional_losses
q	quantizer* 
.
0
1
2
3
4
5*
.
0
1
2
3
4
5*
* 

rnon_trainable_variables

slayers
tmetrics
ulayer_regularization_losses
vlayer_metrics
)	variables
*trainable_variables
+regularization_losses
-__call__
*.&call_and_return_all_conditional_losses
&."call_and_return_conditional_losses*
6
wtrace_0
xtrace_1
ytrace_2
ztrace_3* 
6
{trace_0
|trace_1
}trace_2
~trace_3* 
њ
	variables
trainable_variables
regularization_losses
	keras_api
__call__
+&call_and_return_all_conditional_losses
kernel_quantizer_internal
bias_quantizer_internal

quantizers

kernel
bias*
Є
	variables
trainable_variables
regularization_losses
	keras_api
__call__
+&call_and_return_all_conditional_losses
	quantizer* 
ћ
	variables
trainable_variables
regularization_losses
	keras_api
__call__
+&call_and_return_all_conditional_losses
kernel_quantizer_internal
bias_quantizer_internal

quantizers

kernel
bias*
 
0
1
2
3*
 
0
1
2
3*
* 

non_trainable_variables
layers
metrics
 layer_regularization_losses
layer_metrics
2	variables
3trainable_variables
4regularization_losses
6__call__
*7&call_and_return_all_conditional_losses
&7"call_and_return_conditional_losses*
:
trace_0
trace_1
trace_2
 trace_3* 
:
Ёtrace_0
Ђtrace_1
Ѓtrace_2
Єtrace_3* 
Ж
90
Ѕ1
І2
Ї3
Ј4
Љ5
Њ6
Ћ7
Ќ8
­9
Ў10
Џ11
А12
Б13
В14
Г15
Д16
Е17
Ж18
З19
И20*
SM
VARIABLE_VALUE	iteration0optimizer/_iterations/.ATTRIBUTES/VARIABLE_VALUE*
ZT
VARIABLE_VALUElearning_rate3optimizer/_learning_rate/.ATTRIBUTES/VARIABLE_VALUE*
* 
T
Ѕ0
Ї1
Љ2
Ћ3
­4
Џ5
Б6
Г7
Е8
З9*
T
І0
Ј1
Њ2
Ќ3
Ў4
А5
В6
Д7
Ж8
И9*

Йtrace_0
Кtrace_1
Лtrace_2
Мtrace_3
Нtrace_4
Оtrace_5
Пtrace_6
Рtrace_7
Сtrace_8
Тtrace_9* 
* 
<
У	variables
Ф	keras_api

Хtotal

Цcount*
M
Ч	variables
Ш	keras_api

Щtotal

Ъcount
Ы
_fn_kwargs*

0
1*

0
1*
* 

Ьnon_trainable_variables
Эlayers
Юmetrics
 Яlayer_regularization_losses
аlayer_metrics
B	variables
Ctrainable_variables
Dregularization_losses
F__call__
*G&call_and_return_all_conditional_losses
&G"call_and_return_conditional_losses*

бtrace_0* 

вtrace_0* 
* 
* 

H0
I1* 
* 
* 
* 

гnon_trainable_variables
дlayers
еmetrics
 жlayer_regularization_losses
зlayer_metrics
K	variables
Ltrainable_variables
Mregularization_losses
O__call__
*P&call_and_return_all_conditional_losses
&P"call_and_return_conditional_losses* 

иtrace_0* 

йtrace_0* 
* 

0
1*

0
1*
* 

кnon_trainable_variables
лlayers
мmetrics
 нlayer_regularization_losses
оlayer_metrics
R	variables
Strainable_variables
Tregularization_losses
V__call__
*W&call_and_return_all_conditional_losses
&W"call_and_return_conditional_losses*

пtrace_0* 

рtrace_0* 
* 
* 

X0
Y1* 
* 
* 
* 

сnon_trainable_variables
тlayers
уmetrics
 фlayer_regularization_losses
хlayer_metrics
[	variables
\trainable_variables
]regularization_losses
___call__
*`&call_and_return_all_conditional_losses
&`"call_and_return_conditional_losses* 

цtrace_0* 

чtrace_0* 
* 

0
1*

0
1*
* 

шnon_trainable_variables
щlayers
ъmetrics
 ыlayer_regularization_losses
ьlayer_metrics
b	variables
ctrainable_variables
dregularization_losses
f__call__
*g&call_and_return_all_conditional_losses
&g"call_and_return_conditional_losses*

эtrace_0* 

юtrace_0* 
* 
* 

h0
i1* 
* 
* 
* 

яnon_trainable_variables
№layers
ёmetrics
 ђlayer_regularization_losses
ѓlayer_metrics
k	variables
ltrainable_variables
mregularization_losses
o__call__
*p&call_and_return_all_conditional_losses
&p"call_and_return_conditional_losses* 

єtrace_0* 

ѕtrace_0* 
* 
* 
.
#0
$1
%2
&3
'4
(5*
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 

0
1*

0
1*
* 

іnon_trainable_variables
їlayers
јmetrics
 љlayer_regularization_losses
њlayer_metrics
	variables
trainable_variables
regularization_losses
__call__
+&call_and_return_all_conditional_losses
'"call_and_return_conditional_losses*

ћtrace_0* 

ќtrace_0* 
* 
* 

0
1* 
* 
* 
* 

§non_trainable_variables
ўlayers
џmetrics
 layer_regularization_losses
layer_metrics
	variables
trainable_variables
regularization_losses
__call__
+&call_and_return_all_conditional_losses
'"call_and_return_conditional_losses* 

trace_0* 

trace_0* 
* 

0
1*

0
1*
* 

non_trainable_variables
layers
metrics
 layer_regularization_losses
layer_metrics
	variables
trainable_variables
regularization_losses
__call__
+&call_and_return_all_conditional_losses
'"call_and_return_conditional_losses*

trace_0* 

trace_0* 
* 
* 

0
1* 
* 

/0
01
12*
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
`Z
VARIABLE_VALUEAdam/m/q_dense/kernel1optimizer/_variables/1/.ATTRIBUTES/VARIABLE_VALUE*
`Z
VARIABLE_VALUEAdam/v/q_dense/kernel1optimizer/_variables/2/.ATTRIBUTES/VARIABLE_VALUE*
^X
VARIABLE_VALUEAdam/m/q_dense/bias1optimizer/_variables/3/.ATTRIBUTES/VARIABLE_VALUE*
^X
VARIABLE_VALUEAdam/v/q_dense/bias1optimizer/_variables/4/.ATTRIBUTES/VARIABLE_VALUE*
b\
VARIABLE_VALUEAdam/m/q_dense_1/kernel1optimizer/_variables/5/.ATTRIBUTES/VARIABLE_VALUE*
b\
VARIABLE_VALUEAdam/v/q_dense_1/kernel1optimizer/_variables/6/.ATTRIBUTES/VARIABLE_VALUE*
`Z
VARIABLE_VALUEAdam/m/q_dense_1/bias1optimizer/_variables/7/.ATTRIBUTES/VARIABLE_VALUE*
`Z
VARIABLE_VALUEAdam/v/q_dense_1/bias1optimizer/_variables/8/.ATTRIBUTES/VARIABLE_VALUE*
b\
VARIABLE_VALUEAdam/m/q_dense_2/kernel1optimizer/_variables/9/.ATTRIBUTES/VARIABLE_VALUE*
c]
VARIABLE_VALUEAdam/v/q_dense_2/kernel2optimizer/_variables/10/.ATTRIBUTES/VARIABLE_VALUE*
a[
VARIABLE_VALUEAdam/m/q_dense_2/bias2optimizer/_variables/11/.ATTRIBUTES/VARIABLE_VALUE*
a[
VARIABLE_VALUEAdam/v/q_dense_2/bias2optimizer/_variables/12/.ATTRIBUTES/VARIABLE_VALUE*
c]
VARIABLE_VALUEAdam/m/q_dense_3/kernel2optimizer/_variables/13/.ATTRIBUTES/VARIABLE_VALUE*
c]
VARIABLE_VALUEAdam/v/q_dense_3/kernel2optimizer/_variables/14/.ATTRIBUTES/VARIABLE_VALUE*
a[
VARIABLE_VALUEAdam/m/q_dense_3/bias2optimizer/_variables/15/.ATTRIBUTES/VARIABLE_VALUE*
a[
VARIABLE_VALUEAdam/v/q_dense_3/bias2optimizer/_variables/16/.ATTRIBUTES/VARIABLE_VALUE*
c]
VARIABLE_VALUEAdam/m/q_dense_4/kernel2optimizer/_variables/17/.ATTRIBUTES/VARIABLE_VALUE*
c]
VARIABLE_VALUEAdam/v/q_dense_4/kernel2optimizer/_variables/18/.ATTRIBUTES/VARIABLE_VALUE*
a[
VARIABLE_VALUEAdam/m/q_dense_4/bias2optimizer/_variables/19/.ATTRIBUTES/VARIABLE_VALUE*
a[
VARIABLE_VALUEAdam/v/q_dense_4/bias2optimizer/_variables/20/.ATTRIBUTES/VARIABLE_VALUE*
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 

Х0
Ц1*

У	variables*
UO
VARIABLE_VALUEtotal_14keras_api/metrics/0/total/.ATTRIBUTES/VARIABLE_VALUE*
UO
VARIABLE_VALUEcount_14keras_api/metrics/0/count/.ATTRIBUTES/VARIABLE_VALUE*

Щ0
Ъ1*

Ч	variables*
SM
VARIABLE_VALUEtotal4keras_api/metrics/1/total/.ATTRIBUTES/VARIABLE_VALUE*
SM
VARIABLE_VALUEcount4keras_api/metrics/1/count/.ATTRIBUTES/VARIABLE_VALUE*
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
* 
O
saver_filenamePlaceholder*
_output_shapes
: *
dtype0*
shape: 
Ь
StatefulPartitionedCall_1StatefulPartitionedCallsaver_filename"q_dense/kernel/Read/ReadVariableOp q_dense/bias/Read/ReadVariableOp$q_dense_1/kernel/Read/ReadVariableOp"q_dense_1/bias/Read/ReadVariableOp$q_dense_2/kernel/Read/ReadVariableOp"q_dense_2/bias/Read/ReadVariableOp$q_dense_3/kernel/Read/ReadVariableOp"q_dense_3/bias/Read/ReadVariableOp$q_dense_4/kernel/Read/ReadVariableOp"q_dense_4/bias/Read/ReadVariableOpiteration/Read/ReadVariableOp!learning_rate/Read/ReadVariableOp)Adam/m/q_dense/kernel/Read/ReadVariableOp)Adam/v/q_dense/kernel/Read/ReadVariableOp'Adam/m/q_dense/bias/Read/ReadVariableOp'Adam/v/q_dense/bias/Read/ReadVariableOp+Adam/m/q_dense_1/kernel/Read/ReadVariableOp+Adam/v/q_dense_1/kernel/Read/ReadVariableOp)Adam/m/q_dense_1/bias/Read/ReadVariableOp)Adam/v/q_dense_1/bias/Read/ReadVariableOp+Adam/m/q_dense_2/kernel/Read/ReadVariableOp+Adam/v/q_dense_2/kernel/Read/ReadVariableOp)Adam/m/q_dense_2/bias/Read/ReadVariableOp)Adam/v/q_dense_2/bias/Read/ReadVariableOp+Adam/m/q_dense_3/kernel/Read/ReadVariableOp+Adam/v/q_dense_3/kernel/Read/ReadVariableOp)Adam/m/q_dense_3/bias/Read/ReadVariableOp)Adam/v/q_dense_3/bias/Read/ReadVariableOp+Adam/m/q_dense_4/kernel/Read/ReadVariableOp+Adam/v/q_dense_4/kernel/Read/ReadVariableOp)Adam/m/q_dense_4/bias/Read/ReadVariableOp)Adam/v/q_dense_4/bias/Read/ReadVariableOptotal_1/Read/ReadVariableOpcount_1/Read/ReadVariableOptotal/Read/ReadVariableOpcount/Read/ReadVariableOpConst*1
Tin*
(2&	*
Tout
2*
_collective_manager_ids
 *
_output_shapes
: * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8 *(
f#R!
__inference__traced_save_462078
ї
StatefulPartitionedCall_2StatefulPartitionedCallsaver_filenameq_dense/kernelq_dense/biasq_dense_1/kernelq_dense_1/biasq_dense_2/kernelq_dense_2/biasq_dense_3/kernelq_dense_3/biasq_dense_4/kernelq_dense_4/bias	iterationlearning_rateAdam/m/q_dense/kernelAdam/v/q_dense/kernelAdam/m/q_dense/biasAdam/v/q_dense/biasAdam/m/q_dense_1/kernelAdam/v/q_dense_1/kernelAdam/m/q_dense_1/biasAdam/v/q_dense_1/biasAdam/m/q_dense_2/kernelAdam/v/q_dense_2/kernelAdam/m/q_dense_2/biasAdam/v/q_dense_2/biasAdam/m/q_dense_3/kernelAdam/v/q_dense_3/kernelAdam/m/q_dense_3/biasAdam/v/q_dense_3/biasAdam/m/q_dense_4/kernelAdam/v/q_dense_4/kernelAdam/m/q_dense_4/biasAdam/v/q_dense_4/biastotal_1count_1totalcount*0
Tin)
'2%*
Tout
2*
_collective_manager_ids
 *
_output_shapes
: * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8 *+
f&R$
"__inference__traced_restore_462196О$
Ў
K
/__inference_q_activation_3_layer_call_fn_461821

inputs
identityК
PartitionedCallPartitionedCallinputs*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:џџџџџџџџџ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8 *S
fNRL
J__inference_q_activation_3_layer_call_and_return_conditional_losses_458462`
IdentityIdentityPartitionedCall:output:0*
T0*'
_output_shapes
:џџџџџџџџџ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*&
_input_shapes
:џџџџџџџџџ :O K
'
_output_shapes
:џџџџџџџџџ 
 
_user_specified_nameinputs
ќ 
f
J__inference_q_activation_3_layer_call_and_return_conditional_losses_461870

inputs
identityG
Pow/xConst*
_output_shapes
: *
dtype0*
value	B :G
Pow/yConst*
_output_shapes
: *
dtype0*
value	B :K
PowPowPow/x:output:0Pow/y:output:0*
T0*
_output_shapes
: E
CastCastPow:z:0*

DstT0*

SrcT0*
_output_shapes
: I
Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :I
Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Q
Pow_1PowPow_1/x:output:0Pow_1/y:output:0*
T0*
_output_shapes
: I
Cast_1Cast	Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: J
ConstConst*
_output_shapes
: *
dtype0*
valueB
 *   @J
Cast_2/xConst*
_output_shapes
: *
dtype0*
value	B : Q
Cast_2CastCast_2/x:output:0*

DstT0*

SrcT0*
_output_shapes
: J
sub/yConst*
_output_shapes
: *
dtype0*
valueB
 *   AG
subSub
Cast_2:y:0sub/y:output:0*
T0*
_output_shapes
: F
Pow_2PowConst:output:0sub:z:0*
T0*
_output_shapes
: D
sub_1Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: [
	LessEqual	LessEqualinputs	sub_1:z:0*
T0*'
_output_shapes
:џџџџџџџџџ F
ReluReluinputs*
T0*'
_output_shapes
:џџџџџџџџџ E
ones_like/ShapeShapeinputs*
T0*
_output_shapes
:T
ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  ?w
	ones_likeFillones_like/Shape:output:0ones_like/Const:output:0*
T0*'
_output_shapes
:џџџџџџџџџ D
sub_2Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: [
mulMulones_like:output:0	sub_2:z:0*
T0*'
_output_shapes
:џџџџџџџџџ r
SelectV2SelectV2LessEqual:z:0Relu:activations:0mul:z:0*
T0*'
_output_shapes
:џџџџџџџџџ P
mul_1MulinputsCast:y:0*
T0*'
_output_shapes
:џџџџџџџџџ [
truedivRealDiv	mul_1:z:0
Cast_1:y:0*
T0*'
_output_shapes
:џџџџџџџџџ I
NegNegtruediv:z:0*
T0*'
_output_shapes
:џџџџџџџџџ M
RoundRoundtruediv:z:0*
T0*'
_output_shapes
:џџџџџџџџџ R
addAddV2Neg:y:0	Round:y:0*
T0*'
_output_shapes
:џџџџџџџџџ W
StopGradientStopGradientadd:z:0*
T0*'
_output_shapes
:џџџџџџџџџ d
add_1AddV2truediv:z:0StopGradient:output:0*
T0*'
_output_shapes
:џџџџџџџџџ [
	truediv_1RealDiv	add_1:z:0Cast:y:0*
T0*'
_output_shapes
:џџџџџџџџџ P
truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?U
	truediv_2RealDivtruediv_2/x:output:0Cast:y:0*
T0*
_output_shapes
: L
sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?N
sub_3Subsub_3/x:output:0truediv_2:z:0*
T0*
_output_shapes
: l
clip_by_value/MinimumMinimumtruediv_1:z:0	sub_3:z:0*
T0*'
_output_shapes
:џџџџџџџџџ T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*'
_output_shapes
:џџџџџџџџџ ]
mul_2Mul
Cast_1:y:0clip_by_value:z:0*
T0*'
_output_shapes
:џџџџџџџџџ Q
Neg_1NegSelectV2:output:0*
T0*'
_output_shapes
:џџџџџџџџџ V
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*'
_output_shapes
:џџџџџџџџџ L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?[
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*'
_output_shapes
:џџџџџџџџџ [
StopGradient_1StopGradient	mul_3:z:0*
T0*'
_output_shapes
:џџџџџџџџџ l
add_3AddV2SelectV2:output:0StopGradient_1:output:0*
T0*'
_output_shapes
:џџџџџџџџџ Q
IdentityIdentity	add_3:z:0*
T0*'
_output_shapes
:џџџџџџџџџ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*&
_input_shapes
:џџџџџџџџџ :O K
'
_output_shapes
:џџџџџџџџџ 
 
_user_specified_nameinputs
ђ

P__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_459510

inputs<
*sequential_q_dense_readvariableop_resource: :
,sequential_q_dense_readvariableop_3_resource: >
,sequential_q_dense_1_readvariableop_resource:  <
.sequential_q_dense_1_readvariableop_3_resource: >
,sequential_q_dense_2_readvariableop_resource:  <
.sequential_q_dense_2_readvariableop_3_resource: @
.sequential_1_q_dense_3_readvariableop_resource:  >
0sequential_1_q_dense_3_readvariableop_3_resource: @
.sequential_1_q_dense_4_readvariableop_resource: >
0sequential_1_q_dense_4_readvariableop_3_resource:
identityЂ!sequential/q_dense/ReadVariableOpЂ#sequential/q_dense/ReadVariableOp_1Ђ#sequential/q_dense/ReadVariableOp_2Ђ#sequential/q_dense/ReadVariableOp_3Ђ#sequential/q_dense/ReadVariableOp_4Ђ#sequential/q_dense/ReadVariableOp_5Ђ#sequential/q_dense_1/ReadVariableOpЂ%sequential/q_dense_1/ReadVariableOp_1Ђ%sequential/q_dense_1/ReadVariableOp_2Ђ%sequential/q_dense_1/ReadVariableOp_3Ђ%sequential/q_dense_1/ReadVariableOp_4Ђ%sequential/q_dense_1/ReadVariableOp_5Ђ#sequential/q_dense_2/ReadVariableOpЂ%sequential/q_dense_2/ReadVariableOp_1Ђ%sequential/q_dense_2/ReadVariableOp_2Ђ%sequential/q_dense_2/ReadVariableOp_3Ђ%sequential/q_dense_2/ReadVariableOp_4Ђ%sequential/q_dense_2/ReadVariableOp_5Ђ%sequential_1/q_dense_3/ReadVariableOpЂ'sequential_1/q_dense_3/ReadVariableOp_1Ђ'sequential_1/q_dense_3/ReadVariableOp_2Ђ'sequential_1/q_dense_3/ReadVariableOp_3Ђ'sequential_1/q_dense_3/ReadVariableOp_4Ђ'sequential_1/q_dense_3/ReadVariableOp_5Ђ%sequential_1/q_dense_4/ReadVariableOpЂ'sequential_1/q_dense_4/ReadVariableOp_1Ђ'sequential_1/q_dense_4/ReadVariableOp_2Ђ'sequential_1/q_dense_4/ReadVariableOp_3Ђ'sequential_1/q_dense_4/ReadVariableOp_4Ђ'sequential_1/q_dense_4/ReadVariableOp_5Z
sequential/q_dense/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :Z
sequential/q_dense/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : 
sequential/q_dense/PowPow!sequential/q_dense/Pow/x:output:0!sequential/q_dense/Pow/y:output:0*
T0*
_output_shapes
: k
sequential/q_dense/CastCastsequential/q_dense/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: 
!sequential/q_dense/ReadVariableOpReadVariableOp*sequential_q_dense_readvariableop_resource*
_output_shapes

: *
dtype0]
sequential/q_dense/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A
sequential/q_dense/mulMul)sequential/q_dense/ReadVariableOp:value:0!sequential/q_dense/mul/y:output:0*
T0*
_output_shapes

: 
sequential/q_dense/truedivRealDivsequential/q_dense/mul:z:0sequential/q_dense/Cast:y:0*
T0*
_output_shapes

: f
sequential/q_dense/NegNegsequential/q_dense/truediv:z:0*
T0*
_output_shapes

: j
sequential/q_dense/RoundRoundsequential/q_dense/truediv:z:0*
T0*
_output_shapes

: 
sequential/q_dense/addAddV2sequential/q_dense/Neg:y:0sequential/q_dense/Round:y:0*
T0*
_output_shapes

: t
sequential/q_dense/StopGradientStopGradientsequential/q_dense/add:z:0*
T0*
_output_shapes

: 
sequential/q_dense/add_1AddV2sequential/q_dense/truediv:z:0(sequential/q_dense/StopGradient:output:0*
T0*
_output_shapes

: o
*sequential/q_dense/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAЏ
(sequential/q_dense/clip_by_value/MinimumMinimumsequential/q_dense/add_1:z:03sequential/q_dense/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: g
"sequential/q_dense/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  СЏ
 sequential/q_dense/clip_by_valueMaximum,sequential/q_dense/clip_by_value/Minimum:z:0+sequential/q_dense/clip_by_value/y:output:0*
T0*
_output_shapes

: 
sequential/q_dense/mul_1Mulsequential/q_dense/Cast:y:0$sequential/q_dense/clip_by_value:z:0*
T0*
_output_shapes

: c
sequential/q_dense/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A
sequential/q_dense/truediv_1RealDivsequential/q_dense/mul_1:z:0'sequential/q_dense/truediv_1/y:output:0*
T0*
_output_shapes

: _
sequential/q_dense/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential/q_dense/mul_2Mul#sequential/q_dense/mul_2/x:output:0 sequential/q_dense/truediv_1:z:0*
T0*
_output_shapes

: 
#sequential/q_dense/ReadVariableOp_1ReadVariableOp*sequential_q_dense_readvariableop_resource*
_output_shapes

: *
dtype0u
sequential/q_dense/Neg_1Neg+sequential/q_dense/ReadVariableOp_1:value:0*
T0*
_output_shapes

: 
sequential/q_dense/add_2AddV2sequential/q_dense/Neg_1:y:0sequential/q_dense/mul_2:z:0*
T0*
_output_shapes

: _
sequential/q_dense/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential/q_dense/mul_3Mul#sequential/q_dense/mul_3/x:output:0sequential/q_dense/add_2:z:0*
T0*
_output_shapes

: x
!sequential/q_dense/StopGradient_1StopGradientsequential/q_dense/mul_3:z:0*
T0*
_output_shapes

: 
#sequential/q_dense/ReadVariableOp_2ReadVariableOp*sequential_q_dense_readvariableop_resource*
_output_shapes

: *
dtype0Ѓ
sequential/q_dense/add_3AddV2+sequential/q_dense/ReadVariableOp_2:value:0*sequential/q_dense/StopGradient_1:output:0*
T0*
_output_shapes

: N
sequential/q_dense/ShapeShapeinputs*
T0*
_output_shapes
:w
sequential/q_dense/unstackUnpack!sequential/q_dense/Shape:output:0*
T0*
_output_shapes
: : : *	
numk
sequential/q_dense/Shape_1Const*
_output_shapes
:*
dtype0*
valueB"       y
sequential/q_dense/unstack_1Unpack#sequential/q_dense/Shape_1:output:0*
T0*
_output_shapes
: : *	
numq
 sequential/q_dense/Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB"џџџџ   
sequential/q_dense/ReshapeReshapeinputs)sequential/q_dense/Reshape/shape:output:0*
T0*'
_output_shapes
:џџџџџџџџџr
!sequential/q_dense/transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       
sequential/q_dense/transpose	Transposesequential/q_dense/add_3:z:0*sequential/q_dense/transpose/perm:output:0*
T0*
_output_shapes

: s
"sequential/q_dense/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"   џџџџ
sequential/q_dense/Reshape_1Reshape sequential/q_dense/transpose:y:0+sequential/q_dense/Reshape_1/shape:output:0*
T0*
_output_shapes

: Ё
sequential/q_dense/MatMulMatMul#sequential/q_dense/Reshape:output:0%sequential/q_dense/Reshape_1:output:0*
T0*'
_output_shapes
:џџџџџџџџџ f
$sequential/q_dense/Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :f
$sequential/q_dense/Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : л
"sequential/q_dense/Reshape_2/shapePack#sequential/q_dense/unstack:output:0-sequential/q_dense/Reshape_2/shape/1:output:0-sequential/q_dense/Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:Џ
sequential/q_dense/Reshape_2Reshape#sequential/q_dense/MatMul:product:0+sequential/q_dense/Reshape_2/shape:output:0*
T0*+
_output_shapes
:џџџџџџџџџ \
sequential/q_dense/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :\
sequential/q_dense/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : 
sequential/q_dense/Pow_1Pow#sequential/q_dense/Pow_1/x:output:0#sequential/q_dense/Pow_1/y:output:0*
T0*
_output_shapes
: o
sequential/q_dense/Cast_1Castsequential/q_dense/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: 
#sequential/q_dense/ReadVariableOp_3ReadVariableOp,sequential_q_dense_readvariableop_3_resource*
_output_shapes
: *
dtype0_
sequential/q_dense/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A
sequential/q_dense/mul_4Mul+sequential/q_dense/ReadVariableOp_3:value:0#sequential/q_dense/mul_4/y:output:0*
T0*
_output_shapes
: 
sequential/q_dense/truediv_2RealDivsequential/q_dense/mul_4:z:0sequential/q_dense/Cast_1:y:0*
T0*
_output_shapes
: f
sequential/q_dense/Neg_2Neg sequential/q_dense/truediv_2:z:0*
T0*
_output_shapes
: j
sequential/q_dense/Round_1Round sequential/q_dense/truediv_2:z:0*
T0*
_output_shapes
: 
sequential/q_dense/add_4AddV2sequential/q_dense/Neg_2:y:0sequential/q_dense/Round_1:y:0*
T0*
_output_shapes
: t
!sequential/q_dense/StopGradient_2StopGradientsequential/q_dense/add_4:z:0*
T0*
_output_shapes
: 
sequential/q_dense/add_5AddV2 sequential/q_dense/truediv_2:z:0*sequential/q_dense/StopGradient_2:output:0*
T0*
_output_shapes
: q
,sequential/q_dense/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAЏ
*sequential/q_dense/clip_by_value_1/MinimumMinimumsequential/q_dense/add_5:z:05sequential/q_dense/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: i
$sequential/q_dense/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  СБ
"sequential/q_dense/clip_by_value_1Maximum.sequential/q_dense/clip_by_value_1/Minimum:z:0-sequential/q_dense/clip_by_value_1/y:output:0*
T0*
_output_shapes
: 
sequential/q_dense/mul_5Mulsequential/q_dense/Cast_1:y:0&sequential/q_dense/clip_by_value_1:z:0*
T0*
_output_shapes
: c
sequential/q_dense/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A
sequential/q_dense/truediv_3RealDivsequential/q_dense/mul_5:z:0'sequential/q_dense/truediv_3/y:output:0*
T0*
_output_shapes
: _
sequential/q_dense/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential/q_dense/mul_6Mul#sequential/q_dense/mul_6/x:output:0 sequential/q_dense/truediv_3:z:0*
T0*
_output_shapes
: 
#sequential/q_dense/ReadVariableOp_4ReadVariableOp,sequential_q_dense_readvariableop_3_resource*
_output_shapes
: *
dtype0q
sequential/q_dense/Neg_3Neg+sequential/q_dense/ReadVariableOp_4:value:0*
T0*
_output_shapes
: 
sequential/q_dense/add_6AddV2sequential/q_dense/Neg_3:y:0sequential/q_dense/mul_6:z:0*
T0*
_output_shapes
: _
sequential/q_dense/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential/q_dense/mul_7Mul#sequential/q_dense/mul_7/x:output:0sequential/q_dense/add_6:z:0*
T0*
_output_shapes
: t
!sequential/q_dense/StopGradient_3StopGradientsequential/q_dense/mul_7:z:0*
T0*
_output_shapes
: 
#sequential/q_dense/ReadVariableOp_5ReadVariableOp,sequential_q_dense_readvariableop_3_resource*
_output_shapes
: *
dtype0
sequential/q_dense/add_7AddV2+sequential/q_dense/ReadVariableOp_5:value:0*sequential/q_dense/StopGradient_3:output:0*
T0*
_output_shapes
:  
sequential/q_dense/BiasAddBiasAdd%sequential/q_dense/Reshape_2:output:0sequential/q_dense/add_7:z:0*
T0*+
_output_shapes
:џџџџџџџџџ _
sequential/q_activation/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :_
sequential/q_activation/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :
sequential/q_activation/PowPow&sequential/q_activation/Pow/x:output:0&sequential/q_activation/Pow/y:output:0*
T0*
_output_shapes
: u
sequential/q_activation/CastCastsequential/q_activation/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: a
sequential/q_activation/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :a
sequential/q_activation/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : 
sequential/q_activation/Pow_1Pow(sequential/q_activation/Pow_1/x:output:0(sequential/q_activation/Pow_1/y:output:0*
T0*
_output_shapes
: y
sequential/q_activation/Cast_1Cast!sequential/q_activation/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: b
sequential/q_activation/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *   @b
 sequential/q_activation/Cast_2/xConst*
_output_shapes
: *
dtype0*
value	B : 
sequential/q_activation/Cast_2Cast)sequential/q_activation/Cast_2/x:output:0*

DstT0*

SrcT0*
_output_shapes
: b
sequential/q_activation/sub/yConst*
_output_shapes
: *
dtype0*
valueB
 *   A
sequential/q_activation/subSub"sequential/q_activation/Cast_2:y:0&sequential/q_activation/sub/y:output:0*
T0*
_output_shapes
: 
sequential/q_activation/Pow_2Pow&sequential/q_activation/Const:output:0sequential/q_activation/sub:z:0*
T0*
_output_shapes
: 
sequential/q_activation/sub_1Sub"sequential/q_activation/Cast_1:y:0!sequential/q_activation/Pow_2:z:0*
T0*
_output_shapes
: Ќ
!sequential/q_activation/LessEqual	LessEqual#sequential/q_dense/BiasAdd:output:0!sequential/q_activation/sub_1:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
sequential/q_activation/ReluRelu#sequential/q_dense/BiasAdd:output:0*
T0*+
_output_shapes
:џџџџџџџџџ z
'sequential/q_activation/ones_like/ShapeShape#sequential/q_dense/BiasAdd:output:0*
T0*
_output_shapes
:l
'sequential/q_activation/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  ?У
!sequential/q_activation/ones_likeFill0sequential/q_activation/ones_like/Shape:output:00sequential/q_activation/ones_like/Const:output:0*
T0*+
_output_shapes
:џџџџџџџџџ 
sequential/q_activation/sub_2Sub"sequential/q_activation/Cast_1:y:0!sequential/q_activation/Pow_2:z:0*
T0*
_output_shapes
: Ї
sequential/q_activation/mulMul*sequential/q_activation/ones_like:output:0!sequential/q_activation/sub_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ ж
 sequential/q_activation/SelectV2SelectV2%sequential/q_activation/LessEqual:z:0*sequential/q_activation/Relu:activations:0sequential/q_activation/mul:z:0*
T0*+
_output_shapes
:џџџџџџџџџ Ё
sequential/q_activation/mul_1Mul#sequential/q_dense/BiasAdd:output:0 sequential/q_activation/Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ Ї
sequential/q_activation/truedivRealDiv!sequential/q_activation/mul_1:z:0"sequential/q_activation/Cast_1:y:0*
T0*+
_output_shapes
:џџџџџџџџџ }
sequential/q_activation/NegNeg#sequential/q_activation/truediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
sequential/q_activation/RoundRound#sequential/q_activation/truediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
sequential/q_activation/addAddV2sequential/q_activation/Neg:y:0!sequential/q_activation/Round:y:0*
T0*+
_output_shapes
:џџџџџџџџџ 
$sequential/q_activation/StopGradientStopGradientsequential/q_activation/add:z:0*
T0*+
_output_shapes
:џџџџџџџџџ А
sequential/q_activation/add_1AddV2#sequential/q_activation/truediv:z:0-sequential/q_activation/StopGradient:output:0*
T0*+
_output_shapes
:џџџџџџџџџ Ї
!sequential/q_activation/truediv_1RealDiv!sequential/q_activation/add_1:z:0 sequential/q_activation/Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ h
#sequential/q_activation/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
!sequential/q_activation/truediv_2RealDiv,sequential/q_activation/truediv_2/x:output:0 sequential/q_activation/Cast:y:0*
T0*
_output_shapes
: d
sequential/q_activation/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential/q_activation/sub_3Sub(sequential/q_activation/sub_3/x:output:0%sequential/q_activation/truediv_2:z:0*
T0*
_output_shapes
: И
-sequential/q_activation/clip_by_value/MinimumMinimum%sequential/q_activation/truediv_1:z:0!sequential/q_activation/sub_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ l
'sequential/q_activation/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    Ы
%sequential/q_activation/clip_by_valueMaximum1sequential/q_activation/clip_by_value/Minimum:z:00sequential/q_activation/clip_by_value/y:output:0*
T0*+
_output_shapes
:џџџџџџџџџ Љ
sequential/q_activation/mul_2Mul"sequential/q_activation/Cast_1:y:0)sequential/q_activation/clip_by_value:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
sequential/q_activation/Neg_1Neg)sequential/q_activation/SelectV2:output:0*
T0*+
_output_shapes
:џџџџџџџџџ Ђ
sequential/q_activation/add_2AddV2!sequential/q_activation/Neg_1:y:0!sequential/q_activation/mul_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ d
sequential/q_activation/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?Ї
sequential/q_activation/mul_3Mul(sequential/q_activation/mul_3/x:output:0!sequential/q_activation/add_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
&sequential/q_activation/StopGradient_1StopGradient!sequential/q_activation/mul_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ И
sequential/q_activation/add_3AddV2)sequential/q_activation/SelectV2:output:0/sequential/q_activation/StopGradient_1:output:0*
T0*+
_output_shapes
:џџџџџџџџџ \
sequential/q_dense_1/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :\
sequential/q_dense_1/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : 
sequential/q_dense_1/PowPow#sequential/q_dense_1/Pow/x:output:0#sequential/q_dense_1/Pow/y:output:0*
T0*
_output_shapes
: o
sequential/q_dense_1/CastCastsequential/q_dense_1/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: 
#sequential/q_dense_1/ReadVariableOpReadVariableOp,sequential_q_dense_1_readvariableop_resource*
_output_shapes

:  *
dtype0_
sequential/q_dense_1/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A
sequential/q_dense_1/mulMul+sequential/q_dense_1/ReadVariableOp:value:0#sequential/q_dense_1/mul/y:output:0*
T0*
_output_shapes

:  
sequential/q_dense_1/truedivRealDivsequential/q_dense_1/mul:z:0sequential/q_dense_1/Cast:y:0*
T0*
_output_shapes

:  j
sequential/q_dense_1/NegNeg sequential/q_dense_1/truediv:z:0*
T0*
_output_shapes

:  n
sequential/q_dense_1/RoundRound sequential/q_dense_1/truediv:z:0*
T0*
_output_shapes

:  
sequential/q_dense_1/addAddV2sequential/q_dense_1/Neg:y:0sequential/q_dense_1/Round:y:0*
T0*
_output_shapes

:  x
!sequential/q_dense_1/StopGradientStopGradientsequential/q_dense_1/add:z:0*
T0*
_output_shapes

:  
sequential/q_dense_1/add_1AddV2 sequential/q_dense_1/truediv:z:0*sequential/q_dense_1/StopGradient:output:0*
T0*
_output_shapes

:  q
,sequential/q_dense_1/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAЕ
*sequential/q_dense_1/clip_by_value/MinimumMinimumsequential/q_dense_1/add_1:z:05sequential/q_dense_1/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  i
$sequential/q_dense_1/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  СЕ
"sequential/q_dense_1/clip_by_valueMaximum.sequential/q_dense_1/clip_by_value/Minimum:z:0-sequential/q_dense_1/clip_by_value/y:output:0*
T0*
_output_shapes

:  
sequential/q_dense_1/mul_1Mulsequential/q_dense_1/Cast:y:0&sequential/q_dense_1/clip_by_value:z:0*
T0*
_output_shapes

:  e
 sequential/q_dense_1/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A
sequential/q_dense_1/truediv_1RealDivsequential/q_dense_1/mul_1:z:0)sequential/q_dense_1/truediv_1/y:output:0*
T0*
_output_shapes

:  a
sequential/q_dense_1/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential/q_dense_1/mul_2Mul%sequential/q_dense_1/mul_2/x:output:0"sequential/q_dense_1/truediv_1:z:0*
T0*
_output_shapes

:  
%sequential/q_dense_1/ReadVariableOp_1ReadVariableOp,sequential_q_dense_1_readvariableop_resource*
_output_shapes

:  *
dtype0y
sequential/q_dense_1/Neg_1Neg-sequential/q_dense_1/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  
sequential/q_dense_1/add_2AddV2sequential/q_dense_1/Neg_1:y:0sequential/q_dense_1/mul_2:z:0*
T0*
_output_shapes

:  a
sequential/q_dense_1/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential/q_dense_1/mul_3Mul%sequential/q_dense_1/mul_3/x:output:0sequential/q_dense_1/add_2:z:0*
T0*
_output_shapes

:  |
#sequential/q_dense_1/StopGradient_1StopGradientsequential/q_dense_1/mul_3:z:0*
T0*
_output_shapes

:  
%sequential/q_dense_1/ReadVariableOp_2ReadVariableOp,sequential_q_dense_1_readvariableop_resource*
_output_shapes

:  *
dtype0Љ
sequential/q_dense_1/add_3AddV2-sequential/q_dense_1/ReadVariableOp_2:value:0,sequential/q_dense_1/StopGradient_1:output:0*
T0*
_output_shapes

:  k
sequential/q_dense_1/ShapeShape!sequential/q_activation/add_3:z:0*
T0*
_output_shapes
:{
sequential/q_dense_1/unstackUnpack#sequential/q_dense_1/Shape:output:0*
T0*
_output_shapes
: : : *	
numm
sequential/q_dense_1/Shape_1Const*
_output_shapes
:*
dtype0*
valueB"        }
sequential/q_dense_1/unstack_1Unpack%sequential/q_dense_1/Shape_1:output:0*
T0*
_output_shapes
: : *	
nums
"sequential/q_dense_1/Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB"џџџџ    Љ
sequential/q_dense_1/ReshapeReshape!sequential/q_activation/add_3:z:0+sequential/q_dense_1/Reshape/shape:output:0*
T0*'
_output_shapes
:џџџџџџџџџ t
#sequential/q_dense_1/transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       Ђ
sequential/q_dense_1/transpose	Transposesequential/q_dense_1/add_3:z:0,sequential/q_dense_1/transpose/perm:output:0*
T0*
_output_shapes

:  u
$sequential/q_dense_1/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"    џџџџЅ
sequential/q_dense_1/Reshape_1Reshape"sequential/q_dense_1/transpose:y:0-sequential/q_dense_1/Reshape_1/shape:output:0*
T0*
_output_shapes

:  Ї
sequential/q_dense_1/MatMulMatMul%sequential/q_dense_1/Reshape:output:0'sequential/q_dense_1/Reshape_1:output:0*
T0*'
_output_shapes
:џџџџџџџџџ h
&sequential/q_dense_1/Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :h
&sequential/q_dense_1/Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : у
$sequential/q_dense_1/Reshape_2/shapePack%sequential/q_dense_1/unstack:output:0/sequential/q_dense_1/Reshape_2/shape/1:output:0/sequential/q_dense_1/Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:Е
sequential/q_dense_1/Reshape_2Reshape%sequential/q_dense_1/MatMul:product:0-sequential/q_dense_1/Reshape_2/shape:output:0*
T0*+
_output_shapes
:џџџџџџџџџ ^
sequential/q_dense_1/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :^
sequential/q_dense_1/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : 
sequential/q_dense_1/Pow_1Pow%sequential/q_dense_1/Pow_1/x:output:0%sequential/q_dense_1/Pow_1/y:output:0*
T0*
_output_shapes
: s
sequential/q_dense_1/Cast_1Castsequential/q_dense_1/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: 
%sequential/q_dense_1/ReadVariableOp_3ReadVariableOp.sequential_q_dense_1_readvariableop_3_resource*
_output_shapes
: *
dtype0a
sequential/q_dense_1/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A
sequential/q_dense_1/mul_4Mul-sequential/q_dense_1/ReadVariableOp_3:value:0%sequential/q_dense_1/mul_4/y:output:0*
T0*
_output_shapes
: 
sequential/q_dense_1/truediv_2RealDivsequential/q_dense_1/mul_4:z:0sequential/q_dense_1/Cast_1:y:0*
T0*
_output_shapes
: j
sequential/q_dense_1/Neg_2Neg"sequential/q_dense_1/truediv_2:z:0*
T0*
_output_shapes
: n
sequential/q_dense_1/Round_1Round"sequential/q_dense_1/truediv_2:z:0*
T0*
_output_shapes
: 
sequential/q_dense_1/add_4AddV2sequential/q_dense_1/Neg_2:y:0 sequential/q_dense_1/Round_1:y:0*
T0*
_output_shapes
: x
#sequential/q_dense_1/StopGradient_2StopGradientsequential/q_dense_1/add_4:z:0*
T0*
_output_shapes
: 
sequential/q_dense_1/add_5AddV2"sequential/q_dense_1/truediv_2:z:0,sequential/q_dense_1/StopGradient_2:output:0*
T0*
_output_shapes
: s
.sequential/q_dense_1/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAЕ
,sequential/q_dense_1/clip_by_value_1/MinimumMinimumsequential/q_dense_1/add_5:z:07sequential/q_dense_1/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: k
&sequential/q_dense_1/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  СЗ
$sequential/q_dense_1/clip_by_value_1Maximum0sequential/q_dense_1/clip_by_value_1/Minimum:z:0/sequential/q_dense_1/clip_by_value_1/y:output:0*
T0*
_output_shapes
: 
sequential/q_dense_1/mul_5Mulsequential/q_dense_1/Cast_1:y:0(sequential/q_dense_1/clip_by_value_1:z:0*
T0*
_output_shapes
: e
 sequential/q_dense_1/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A
sequential/q_dense_1/truediv_3RealDivsequential/q_dense_1/mul_5:z:0)sequential/q_dense_1/truediv_3/y:output:0*
T0*
_output_shapes
: a
sequential/q_dense_1/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential/q_dense_1/mul_6Mul%sequential/q_dense_1/mul_6/x:output:0"sequential/q_dense_1/truediv_3:z:0*
T0*
_output_shapes
: 
%sequential/q_dense_1/ReadVariableOp_4ReadVariableOp.sequential_q_dense_1_readvariableop_3_resource*
_output_shapes
: *
dtype0u
sequential/q_dense_1/Neg_3Neg-sequential/q_dense_1/ReadVariableOp_4:value:0*
T0*
_output_shapes
: 
sequential/q_dense_1/add_6AddV2sequential/q_dense_1/Neg_3:y:0sequential/q_dense_1/mul_6:z:0*
T0*
_output_shapes
: a
sequential/q_dense_1/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential/q_dense_1/mul_7Mul%sequential/q_dense_1/mul_7/x:output:0sequential/q_dense_1/add_6:z:0*
T0*
_output_shapes
: x
#sequential/q_dense_1/StopGradient_3StopGradientsequential/q_dense_1/mul_7:z:0*
T0*
_output_shapes
: 
%sequential/q_dense_1/ReadVariableOp_5ReadVariableOp.sequential_q_dense_1_readvariableop_3_resource*
_output_shapes
: *
dtype0Ѕ
sequential/q_dense_1/add_7AddV2-sequential/q_dense_1/ReadVariableOp_5:value:0,sequential/q_dense_1/StopGradient_3:output:0*
T0*
_output_shapes
: І
sequential/q_dense_1/BiasAddBiasAdd'sequential/q_dense_1/Reshape_2:output:0sequential/q_dense_1/add_7:z:0*
T0*+
_output_shapes
:џџџџџџџџџ a
sequential/q_activation_1/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :a
sequential/q_activation_1/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :
sequential/q_activation_1/PowPow(sequential/q_activation_1/Pow/x:output:0(sequential/q_activation_1/Pow/y:output:0*
T0*
_output_shapes
: y
sequential/q_activation_1/CastCast!sequential/q_activation_1/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: c
!sequential/q_activation_1/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :c
!sequential/q_activation_1/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : 
sequential/q_activation_1/Pow_1Pow*sequential/q_activation_1/Pow_1/x:output:0*sequential/q_activation_1/Pow_1/y:output:0*
T0*
_output_shapes
: }
 sequential/q_activation_1/Cast_1Cast#sequential/q_activation_1/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: d
sequential/q_activation_1/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *   @d
"sequential/q_activation_1/Cast_2/xConst*
_output_shapes
: *
dtype0*
value	B : 
 sequential/q_activation_1/Cast_2Cast+sequential/q_activation_1/Cast_2/x:output:0*

DstT0*

SrcT0*
_output_shapes
: d
sequential/q_activation_1/sub/yConst*
_output_shapes
: *
dtype0*
valueB
 *   A
sequential/q_activation_1/subSub$sequential/q_activation_1/Cast_2:y:0(sequential/q_activation_1/sub/y:output:0*
T0*
_output_shapes
: 
sequential/q_activation_1/Pow_2Pow(sequential/q_activation_1/Const:output:0!sequential/q_activation_1/sub:z:0*
T0*
_output_shapes
: 
sequential/q_activation_1/sub_1Sub$sequential/q_activation_1/Cast_1:y:0#sequential/q_activation_1/Pow_2:z:0*
T0*
_output_shapes
: В
#sequential/q_activation_1/LessEqual	LessEqual%sequential/q_dense_1/BiasAdd:output:0#sequential/q_activation_1/sub_1:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
sequential/q_activation_1/ReluRelu%sequential/q_dense_1/BiasAdd:output:0*
T0*+
_output_shapes
:џџџџџџџџџ ~
)sequential/q_activation_1/ones_like/ShapeShape%sequential/q_dense_1/BiasAdd:output:0*
T0*
_output_shapes
:n
)sequential/q_activation_1/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  ?Щ
#sequential/q_activation_1/ones_likeFill2sequential/q_activation_1/ones_like/Shape:output:02sequential/q_activation_1/ones_like/Const:output:0*
T0*+
_output_shapes
:џџџџџџџџџ 
sequential/q_activation_1/sub_2Sub$sequential/q_activation_1/Cast_1:y:0#sequential/q_activation_1/Pow_2:z:0*
T0*
_output_shapes
: ­
sequential/q_activation_1/mulMul,sequential/q_activation_1/ones_like:output:0#sequential/q_activation_1/sub_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ о
"sequential/q_activation_1/SelectV2SelectV2'sequential/q_activation_1/LessEqual:z:0,sequential/q_activation_1/Relu:activations:0!sequential/q_activation_1/mul:z:0*
T0*+
_output_shapes
:џџџџџџџџџ Ї
sequential/q_activation_1/mul_1Mul%sequential/q_dense_1/BiasAdd:output:0"sequential/q_activation_1/Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ ­
!sequential/q_activation_1/truedivRealDiv#sequential/q_activation_1/mul_1:z:0$sequential/q_activation_1/Cast_1:y:0*
T0*+
_output_shapes
:џџџџџџџџџ 
sequential/q_activation_1/NegNeg%sequential/q_activation_1/truediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
sequential/q_activation_1/RoundRound%sequential/q_activation_1/truediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ Є
sequential/q_activation_1/addAddV2!sequential/q_activation_1/Neg:y:0#sequential/q_activation_1/Round:y:0*
T0*+
_output_shapes
:џџџџџџџџџ 
&sequential/q_activation_1/StopGradientStopGradient!sequential/q_activation_1/add:z:0*
T0*+
_output_shapes
:џџџџџџџџџ Ж
sequential/q_activation_1/add_1AddV2%sequential/q_activation_1/truediv:z:0/sequential/q_activation_1/StopGradient:output:0*
T0*+
_output_shapes
:џџџџџџџџџ ­
#sequential/q_activation_1/truediv_1RealDiv#sequential/q_activation_1/add_1:z:0"sequential/q_activation_1/Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ j
%sequential/q_activation_1/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?Ѓ
#sequential/q_activation_1/truediv_2RealDiv.sequential/q_activation_1/truediv_2/x:output:0"sequential/q_activation_1/Cast:y:0*
T0*
_output_shapes
: f
!sequential/q_activation_1/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential/q_activation_1/sub_3Sub*sequential/q_activation_1/sub_3/x:output:0'sequential/q_activation_1/truediv_2:z:0*
T0*
_output_shapes
: О
/sequential/q_activation_1/clip_by_value/MinimumMinimum'sequential/q_activation_1/truediv_1:z:0#sequential/q_activation_1/sub_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ n
)sequential/q_activation_1/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    б
'sequential/q_activation_1/clip_by_valueMaximum3sequential/q_activation_1/clip_by_value/Minimum:z:02sequential/q_activation_1/clip_by_value/y:output:0*
T0*+
_output_shapes
:џџџџџџџџџ Џ
sequential/q_activation_1/mul_2Mul$sequential/q_activation_1/Cast_1:y:0+sequential/q_activation_1/clip_by_value:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
sequential/q_activation_1/Neg_1Neg+sequential/q_activation_1/SelectV2:output:0*
T0*+
_output_shapes
:џџџџџџџџџ Ј
sequential/q_activation_1/add_2AddV2#sequential/q_activation_1/Neg_1:y:0#sequential/q_activation_1/mul_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ f
!sequential/q_activation_1/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?­
sequential/q_activation_1/mul_3Mul*sequential/q_activation_1/mul_3/x:output:0#sequential/q_activation_1/add_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
(sequential/q_activation_1/StopGradient_1StopGradient#sequential/q_activation_1/mul_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ О
sequential/q_activation_1/add_3AddV2+sequential/q_activation_1/SelectV2:output:01sequential/q_activation_1/StopGradient_1:output:0*
T0*+
_output_shapes
:џџџџџџџџџ \
sequential/q_dense_2/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :\
sequential/q_dense_2/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : 
sequential/q_dense_2/PowPow#sequential/q_dense_2/Pow/x:output:0#sequential/q_dense_2/Pow/y:output:0*
T0*
_output_shapes
: o
sequential/q_dense_2/CastCastsequential/q_dense_2/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: 
#sequential/q_dense_2/ReadVariableOpReadVariableOp,sequential_q_dense_2_readvariableop_resource*
_output_shapes

:  *
dtype0_
sequential/q_dense_2/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A
sequential/q_dense_2/mulMul+sequential/q_dense_2/ReadVariableOp:value:0#sequential/q_dense_2/mul/y:output:0*
T0*
_output_shapes

:  
sequential/q_dense_2/truedivRealDivsequential/q_dense_2/mul:z:0sequential/q_dense_2/Cast:y:0*
T0*
_output_shapes

:  j
sequential/q_dense_2/NegNeg sequential/q_dense_2/truediv:z:0*
T0*
_output_shapes

:  n
sequential/q_dense_2/RoundRound sequential/q_dense_2/truediv:z:0*
T0*
_output_shapes

:  
sequential/q_dense_2/addAddV2sequential/q_dense_2/Neg:y:0sequential/q_dense_2/Round:y:0*
T0*
_output_shapes

:  x
!sequential/q_dense_2/StopGradientStopGradientsequential/q_dense_2/add:z:0*
T0*
_output_shapes

:  
sequential/q_dense_2/add_1AddV2 sequential/q_dense_2/truediv:z:0*sequential/q_dense_2/StopGradient:output:0*
T0*
_output_shapes

:  q
,sequential/q_dense_2/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAЕ
*sequential/q_dense_2/clip_by_value/MinimumMinimumsequential/q_dense_2/add_1:z:05sequential/q_dense_2/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  i
$sequential/q_dense_2/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  СЕ
"sequential/q_dense_2/clip_by_valueMaximum.sequential/q_dense_2/clip_by_value/Minimum:z:0-sequential/q_dense_2/clip_by_value/y:output:0*
T0*
_output_shapes

:  
sequential/q_dense_2/mul_1Mulsequential/q_dense_2/Cast:y:0&sequential/q_dense_2/clip_by_value:z:0*
T0*
_output_shapes

:  e
 sequential/q_dense_2/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A
sequential/q_dense_2/truediv_1RealDivsequential/q_dense_2/mul_1:z:0)sequential/q_dense_2/truediv_1/y:output:0*
T0*
_output_shapes

:  a
sequential/q_dense_2/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential/q_dense_2/mul_2Mul%sequential/q_dense_2/mul_2/x:output:0"sequential/q_dense_2/truediv_1:z:0*
T0*
_output_shapes

:  
%sequential/q_dense_2/ReadVariableOp_1ReadVariableOp,sequential_q_dense_2_readvariableop_resource*
_output_shapes

:  *
dtype0y
sequential/q_dense_2/Neg_1Neg-sequential/q_dense_2/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  
sequential/q_dense_2/add_2AddV2sequential/q_dense_2/Neg_1:y:0sequential/q_dense_2/mul_2:z:0*
T0*
_output_shapes

:  a
sequential/q_dense_2/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential/q_dense_2/mul_3Mul%sequential/q_dense_2/mul_3/x:output:0sequential/q_dense_2/add_2:z:0*
T0*
_output_shapes

:  |
#sequential/q_dense_2/StopGradient_1StopGradientsequential/q_dense_2/mul_3:z:0*
T0*
_output_shapes

:  
%sequential/q_dense_2/ReadVariableOp_2ReadVariableOp,sequential_q_dense_2_readvariableop_resource*
_output_shapes

:  *
dtype0Љ
sequential/q_dense_2/add_3AddV2-sequential/q_dense_2/ReadVariableOp_2:value:0,sequential/q_dense_2/StopGradient_1:output:0*
T0*
_output_shapes

:  m
sequential/q_dense_2/ShapeShape#sequential/q_activation_1/add_3:z:0*
T0*
_output_shapes
:{
sequential/q_dense_2/unstackUnpack#sequential/q_dense_2/Shape:output:0*
T0*
_output_shapes
: : : *	
numm
sequential/q_dense_2/Shape_1Const*
_output_shapes
:*
dtype0*
valueB"        }
sequential/q_dense_2/unstack_1Unpack%sequential/q_dense_2/Shape_1:output:0*
T0*
_output_shapes
: : *	
nums
"sequential/q_dense_2/Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB"џџџџ    Ћ
sequential/q_dense_2/ReshapeReshape#sequential/q_activation_1/add_3:z:0+sequential/q_dense_2/Reshape/shape:output:0*
T0*'
_output_shapes
:џџџџџџџџџ t
#sequential/q_dense_2/transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       Ђ
sequential/q_dense_2/transpose	Transposesequential/q_dense_2/add_3:z:0,sequential/q_dense_2/transpose/perm:output:0*
T0*
_output_shapes

:  u
$sequential/q_dense_2/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"    џџџџЅ
sequential/q_dense_2/Reshape_1Reshape"sequential/q_dense_2/transpose:y:0-sequential/q_dense_2/Reshape_1/shape:output:0*
T0*
_output_shapes

:  Ї
sequential/q_dense_2/MatMulMatMul%sequential/q_dense_2/Reshape:output:0'sequential/q_dense_2/Reshape_1:output:0*
T0*'
_output_shapes
:џџџџџџџџџ h
&sequential/q_dense_2/Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :h
&sequential/q_dense_2/Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : у
$sequential/q_dense_2/Reshape_2/shapePack%sequential/q_dense_2/unstack:output:0/sequential/q_dense_2/Reshape_2/shape/1:output:0/sequential/q_dense_2/Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:Е
sequential/q_dense_2/Reshape_2Reshape%sequential/q_dense_2/MatMul:product:0-sequential/q_dense_2/Reshape_2/shape:output:0*
T0*+
_output_shapes
:џџџџџџџџџ ^
sequential/q_dense_2/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :^
sequential/q_dense_2/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : 
sequential/q_dense_2/Pow_1Pow%sequential/q_dense_2/Pow_1/x:output:0%sequential/q_dense_2/Pow_1/y:output:0*
T0*
_output_shapes
: s
sequential/q_dense_2/Cast_1Castsequential/q_dense_2/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: 
%sequential/q_dense_2/ReadVariableOp_3ReadVariableOp.sequential_q_dense_2_readvariableop_3_resource*
_output_shapes
: *
dtype0a
sequential/q_dense_2/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A
sequential/q_dense_2/mul_4Mul-sequential/q_dense_2/ReadVariableOp_3:value:0%sequential/q_dense_2/mul_4/y:output:0*
T0*
_output_shapes
: 
sequential/q_dense_2/truediv_2RealDivsequential/q_dense_2/mul_4:z:0sequential/q_dense_2/Cast_1:y:0*
T0*
_output_shapes
: j
sequential/q_dense_2/Neg_2Neg"sequential/q_dense_2/truediv_2:z:0*
T0*
_output_shapes
: n
sequential/q_dense_2/Round_1Round"sequential/q_dense_2/truediv_2:z:0*
T0*
_output_shapes
: 
sequential/q_dense_2/add_4AddV2sequential/q_dense_2/Neg_2:y:0 sequential/q_dense_2/Round_1:y:0*
T0*
_output_shapes
: x
#sequential/q_dense_2/StopGradient_2StopGradientsequential/q_dense_2/add_4:z:0*
T0*
_output_shapes
: 
sequential/q_dense_2/add_5AddV2"sequential/q_dense_2/truediv_2:z:0,sequential/q_dense_2/StopGradient_2:output:0*
T0*
_output_shapes
: s
.sequential/q_dense_2/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAЕ
,sequential/q_dense_2/clip_by_value_1/MinimumMinimumsequential/q_dense_2/add_5:z:07sequential/q_dense_2/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: k
&sequential/q_dense_2/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  СЗ
$sequential/q_dense_2/clip_by_value_1Maximum0sequential/q_dense_2/clip_by_value_1/Minimum:z:0/sequential/q_dense_2/clip_by_value_1/y:output:0*
T0*
_output_shapes
: 
sequential/q_dense_2/mul_5Mulsequential/q_dense_2/Cast_1:y:0(sequential/q_dense_2/clip_by_value_1:z:0*
T0*
_output_shapes
: e
 sequential/q_dense_2/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A
sequential/q_dense_2/truediv_3RealDivsequential/q_dense_2/mul_5:z:0)sequential/q_dense_2/truediv_3/y:output:0*
T0*
_output_shapes
: a
sequential/q_dense_2/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential/q_dense_2/mul_6Mul%sequential/q_dense_2/mul_6/x:output:0"sequential/q_dense_2/truediv_3:z:0*
T0*
_output_shapes
: 
%sequential/q_dense_2/ReadVariableOp_4ReadVariableOp.sequential_q_dense_2_readvariableop_3_resource*
_output_shapes
: *
dtype0u
sequential/q_dense_2/Neg_3Neg-sequential/q_dense_2/ReadVariableOp_4:value:0*
T0*
_output_shapes
: 
sequential/q_dense_2/add_6AddV2sequential/q_dense_2/Neg_3:y:0sequential/q_dense_2/mul_6:z:0*
T0*
_output_shapes
: a
sequential/q_dense_2/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential/q_dense_2/mul_7Mul%sequential/q_dense_2/mul_7/x:output:0sequential/q_dense_2/add_6:z:0*
T0*
_output_shapes
: x
#sequential/q_dense_2/StopGradient_3StopGradientsequential/q_dense_2/mul_7:z:0*
T0*
_output_shapes
: 
%sequential/q_dense_2/ReadVariableOp_5ReadVariableOp.sequential_q_dense_2_readvariableop_3_resource*
_output_shapes
: *
dtype0Ѕ
sequential/q_dense_2/add_7AddV2-sequential/q_dense_2/ReadVariableOp_5:value:0,sequential/q_dense_2/StopGradient_3:output:0*
T0*
_output_shapes
: І
sequential/q_dense_2/BiasAddBiasAdd'sequential/q_dense_2/Reshape_2:output:0sequential/q_dense_2/add_7:z:0*
T0*+
_output_shapes
:џџџџџџџџџ a
sequential/q_activation_2/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :a
sequential/q_activation_2/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :
sequential/q_activation_2/PowPow(sequential/q_activation_2/Pow/x:output:0(sequential/q_activation_2/Pow/y:output:0*
T0*
_output_shapes
: y
sequential/q_activation_2/CastCast!sequential/q_activation_2/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: c
!sequential/q_activation_2/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :c
!sequential/q_activation_2/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : 
sequential/q_activation_2/Pow_1Pow*sequential/q_activation_2/Pow_1/x:output:0*sequential/q_activation_2/Pow_1/y:output:0*
T0*
_output_shapes
: }
 sequential/q_activation_2/Cast_1Cast#sequential/q_activation_2/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: d
sequential/q_activation_2/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *   @d
"sequential/q_activation_2/Cast_2/xConst*
_output_shapes
: *
dtype0*
value	B : 
 sequential/q_activation_2/Cast_2Cast+sequential/q_activation_2/Cast_2/x:output:0*

DstT0*

SrcT0*
_output_shapes
: d
sequential/q_activation_2/sub/yConst*
_output_shapes
: *
dtype0*
valueB
 *   A
sequential/q_activation_2/subSub$sequential/q_activation_2/Cast_2:y:0(sequential/q_activation_2/sub/y:output:0*
T0*
_output_shapes
: 
sequential/q_activation_2/Pow_2Pow(sequential/q_activation_2/Const:output:0!sequential/q_activation_2/sub:z:0*
T0*
_output_shapes
: 
sequential/q_activation_2/sub_1Sub$sequential/q_activation_2/Cast_1:y:0#sequential/q_activation_2/Pow_2:z:0*
T0*
_output_shapes
: В
#sequential/q_activation_2/LessEqual	LessEqual%sequential/q_dense_2/BiasAdd:output:0#sequential/q_activation_2/sub_1:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
sequential/q_activation_2/ReluRelu%sequential/q_dense_2/BiasAdd:output:0*
T0*+
_output_shapes
:џџџџџџџџџ ~
)sequential/q_activation_2/ones_like/ShapeShape%sequential/q_dense_2/BiasAdd:output:0*
T0*
_output_shapes
:n
)sequential/q_activation_2/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  ?Щ
#sequential/q_activation_2/ones_likeFill2sequential/q_activation_2/ones_like/Shape:output:02sequential/q_activation_2/ones_like/Const:output:0*
T0*+
_output_shapes
:џџџџџџџџџ 
sequential/q_activation_2/sub_2Sub$sequential/q_activation_2/Cast_1:y:0#sequential/q_activation_2/Pow_2:z:0*
T0*
_output_shapes
: ­
sequential/q_activation_2/mulMul,sequential/q_activation_2/ones_like:output:0#sequential/q_activation_2/sub_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ о
"sequential/q_activation_2/SelectV2SelectV2'sequential/q_activation_2/LessEqual:z:0,sequential/q_activation_2/Relu:activations:0!sequential/q_activation_2/mul:z:0*
T0*+
_output_shapes
:џџџџџџџџџ Ї
sequential/q_activation_2/mul_1Mul%sequential/q_dense_2/BiasAdd:output:0"sequential/q_activation_2/Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ ­
!sequential/q_activation_2/truedivRealDiv#sequential/q_activation_2/mul_1:z:0$sequential/q_activation_2/Cast_1:y:0*
T0*+
_output_shapes
:џџџџџџџџџ 
sequential/q_activation_2/NegNeg%sequential/q_activation_2/truediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
sequential/q_activation_2/RoundRound%sequential/q_activation_2/truediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ Є
sequential/q_activation_2/addAddV2!sequential/q_activation_2/Neg:y:0#sequential/q_activation_2/Round:y:0*
T0*+
_output_shapes
:џџџџџџџџџ 
&sequential/q_activation_2/StopGradientStopGradient!sequential/q_activation_2/add:z:0*
T0*+
_output_shapes
:џџџџџџџџџ Ж
sequential/q_activation_2/add_1AddV2%sequential/q_activation_2/truediv:z:0/sequential/q_activation_2/StopGradient:output:0*
T0*+
_output_shapes
:џџџџџџџџџ ­
#sequential/q_activation_2/truediv_1RealDiv#sequential/q_activation_2/add_1:z:0"sequential/q_activation_2/Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ j
%sequential/q_activation_2/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?Ѓ
#sequential/q_activation_2/truediv_2RealDiv.sequential/q_activation_2/truediv_2/x:output:0"sequential/q_activation_2/Cast:y:0*
T0*
_output_shapes
: f
!sequential/q_activation_2/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential/q_activation_2/sub_3Sub*sequential/q_activation_2/sub_3/x:output:0'sequential/q_activation_2/truediv_2:z:0*
T0*
_output_shapes
: О
/sequential/q_activation_2/clip_by_value/MinimumMinimum'sequential/q_activation_2/truediv_1:z:0#sequential/q_activation_2/sub_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ n
)sequential/q_activation_2/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    б
'sequential/q_activation_2/clip_by_valueMaximum3sequential/q_activation_2/clip_by_value/Minimum:z:02sequential/q_activation_2/clip_by_value/y:output:0*
T0*+
_output_shapes
:џџџџџџџџџ Џ
sequential/q_activation_2/mul_2Mul$sequential/q_activation_2/Cast_1:y:0+sequential/q_activation_2/clip_by_value:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
sequential/q_activation_2/Neg_1Neg+sequential/q_activation_2/SelectV2:output:0*
T0*+
_output_shapes
:џџџџџџџџџ Ј
sequential/q_activation_2/add_2AddV2#sequential/q_activation_2/Neg_1:y:0#sequential/q_activation_2/mul_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ f
!sequential/q_activation_2/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?­
sequential/q_activation_2/mul_3Mul*sequential/q_activation_2/mul_3/x:output:0#sequential/q_activation_2/add_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
(sequential/q_activation_2/StopGradient_1StopGradient#sequential/q_activation_2/mul_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ О
sequential/q_activation_2/add_3AddV2+sequential/q_activation_2/SelectV2:output:01sequential/q_activation_2/StopGradient_1:output:0*
T0*+
_output_shapes
:џџџџџџџџџ X
Mean/reduction_indicesConst*
_output_shapes
: *
dtype0*
value	B :
MeanMean#sequential/q_activation_2/add_3:z:0Mean/reduction_indices:output:0*
T0*'
_output_shapes
:џџџџџџџџџ ^
sequential_1/q_dense_3/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :^
sequential_1/q_dense_3/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : 
sequential_1/q_dense_3/PowPow%sequential_1/q_dense_3/Pow/x:output:0%sequential_1/q_dense_3/Pow/y:output:0*
T0*
_output_shapes
: s
sequential_1/q_dense_3/CastCastsequential_1/q_dense_3/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: 
%sequential_1/q_dense_3/ReadVariableOpReadVariableOp.sequential_1_q_dense_3_readvariableop_resource*
_output_shapes

:  *
dtype0a
sequential_1/q_dense_3/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A 
sequential_1/q_dense_3/mulMul-sequential_1/q_dense_3/ReadVariableOp:value:0%sequential_1/q_dense_3/mul/y:output:0*
T0*
_output_shapes

:  
sequential_1/q_dense_3/truedivRealDivsequential_1/q_dense_3/mul:z:0sequential_1/q_dense_3/Cast:y:0*
T0*
_output_shapes

:  n
sequential_1/q_dense_3/NegNeg"sequential_1/q_dense_3/truediv:z:0*
T0*
_output_shapes

:  r
sequential_1/q_dense_3/RoundRound"sequential_1/q_dense_3/truediv:z:0*
T0*
_output_shapes

:  
sequential_1/q_dense_3/addAddV2sequential_1/q_dense_3/Neg:y:0 sequential_1/q_dense_3/Round:y:0*
T0*
_output_shapes

:  |
#sequential_1/q_dense_3/StopGradientStopGradientsequential_1/q_dense_3/add:z:0*
T0*
_output_shapes

:   
sequential_1/q_dense_3/add_1AddV2"sequential_1/q_dense_3/truediv:z:0,sequential_1/q_dense_3/StopGradient:output:0*
T0*
_output_shapes

:  s
.sequential_1/q_dense_3/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAЛ
,sequential_1/q_dense_3/clip_by_value/MinimumMinimum sequential_1/q_dense_3/add_1:z:07sequential_1/q_dense_3/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  k
&sequential_1/q_dense_3/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  СЛ
$sequential_1/q_dense_3/clip_by_valueMaximum0sequential_1/q_dense_3/clip_by_value/Minimum:z:0/sequential_1/q_dense_3/clip_by_value/y:output:0*
T0*
_output_shapes

:  
sequential_1/q_dense_3/mul_1Mulsequential_1/q_dense_3/Cast:y:0(sequential_1/q_dense_3/clip_by_value:z:0*
T0*
_output_shapes

:  g
"sequential_1/q_dense_3/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  AЃ
 sequential_1/q_dense_3/truediv_1RealDiv sequential_1/q_dense_3/mul_1:z:0+sequential_1/q_dense_3/truediv_1/y:output:0*
T0*
_output_shapes

:  c
sequential_1/q_dense_3/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential_1/q_dense_3/mul_2Mul'sequential_1/q_dense_3/mul_2/x:output:0$sequential_1/q_dense_3/truediv_1:z:0*
T0*
_output_shapes

:  
'sequential_1/q_dense_3/ReadVariableOp_1ReadVariableOp.sequential_1_q_dense_3_readvariableop_resource*
_output_shapes

:  *
dtype0}
sequential_1/q_dense_3/Neg_1Neg/sequential_1/q_dense_3/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  
sequential_1/q_dense_3/add_2AddV2 sequential_1/q_dense_3/Neg_1:y:0 sequential_1/q_dense_3/mul_2:z:0*
T0*
_output_shapes

:  c
sequential_1/q_dense_3/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential_1/q_dense_3/mul_3Mul'sequential_1/q_dense_3/mul_3/x:output:0 sequential_1/q_dense_3/add_2:z:0*
T0*
_output_shapes

:  
%sequential_1/q_dense_3/StopGradient_1StopGradient sequential_1/q_dense_3/mul_3:z:0*
T0*
_output_shapes

:  
'sequential_1/q_dense_3/ReadVariableOp_2ReadVariableOp.sequential_1_q_dense_3_readvariableop_resource*
_output_shapes

:  *
dtype0Џ
sequential_1/q_dense_3/add_3AddV2/sequential_1/q_dense_3/ReadVariableOp_2:value:0.sequential_1/q_dense_3/StopGradient_1:output:0*
T0*
_output_shapes

:  
sequential_1/q_dense_3/MatMulMatMulMean:output:0 sequential_1/q_dense_3/add_3:z:0*
T0*'
_output_shapes
:џџџџџџџџџ `
sequential_1/q_dense_3/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :`
sequential_1/q_dense_3/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : 
sequential_1/q_dense_3/Pow_1Pow'sequential_1/q_dense_3/Pow_1/x:output:0'sequential_1/q_dense_3/Pow_1/y:output:0*
T0*
_output_shapes
: w
sequential_1/q_dense_3/Cast_1Cast sequential_1/q_dense_3/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: 
'sequential_1/q_dense_3/ReadVariableOp_3ReadVariableOp0sequential_1_q_dense_3_readvariableop_3_resource*
_output_shapes
: *
dtype0c
sequential_1/q_dense_3/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  AЂ
sequential_1/q_dense_3/mul_4Mul/sequential_1/q_dense_3/ReadVariableOp_3:value:0'sequential_1/q_dense_3/mul_4/y:output:0*
T0*
_output_shapes
: 
 sequential_1/q_dense_3/truediv_2RealDiv sequential_1/q_dense_3/mul_4:z:0!sequential_1/q_dense_3/Cast_1:y:0*
T0*
_output_shapes
: n
sequential_1/q_dense_3/Neg_2Neg$sequential_1/q_dense_3/truediv_2:z:0*
T0*
_output_shapes
: r
sequential_1/q_dense_3/Round_1Round$sequential_1/q_dense_3/truediv_2:z:0*
T0*
_output_shapes
: 
sequential_1/q_dense_3/add_4AddV2 sequential_1/q_dense_3/Neg_2:y:0"sequential_1/q_dense_3/Round_1:y:0*
T0*
_output_shapes
: |
%sequential_1/q_dense_3/StopGradient_2StopGradient sequential_1/q_dense_3/add_4:z:0*
T0*
_output_shapes
:  
sequential_1/q_dense_3/add_5AddV2$sequential_1/q_dense_3/truediv_2:z:0.sequential_1/q_dense_3/StopGradient_2:output:0*
T0*
_output_shapes
: u
0sequential_1/q_dense_3/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAЛ
.sequential_1/q_dense_3/clip_by_value_1/MinimumMinimum sequential_1/q_dense_3/add_5:z:09sequential_1/q_dense_3/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: m
(sequential_1/q_dense_3/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  СН
&sequential_1/q_dense_3/clip_by_value_1Maximum2sequential_1/q_dense_3/clip_by_value_1/Minimum:z:01sequential_1/q_dense_3/clip_by_value_1/y:output:0*
T0*
_output_shapes
: 
sequential_1/q_dense_3/mul_5Mul!sequential_1/q_dense_3/Cast_1:y:0*sequential_1/q_dense_3/clip_by_value_1:z:0*
T0*
_output_shapes
: g
"sequential_1/q_dense_3/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A
 sequential_1/q_dense_3/truediv_3RealDiv sequential_1/q_dense_3/mul_5:z:0+sequential_1/q_dense_3/truediv_3/y:output:0*
T0*
_output_shapes
: c
sequential_1/q_dense_3/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential_1/q_dense_3/mul_6Mul'sequential_1/q_dense_3/mul_6/x:output:0$sequential_1/q_dense_3/truediv_3:z:0*
T0*
_output_shapes
: 
'sequential_1/q_dense_3/ReadVariableOp_4ReadVariableOp0sequential_1_q_dense_3_readvariableop_3_resource*
_output_shapes
: *
dtype0y
sequential_1/q_dense_3/Neg_3Neg/sequential_1/q_dense_3/ReadVariableOp_4:value:0*
T0*
_output_shapes
: 
sequential_1/q_dense_3/add_6AddV2 sequential_1/q_dense_3/Neg_3:y:0 sequential_1/q_dense_3/mul_6:z:0*
T0*
_output_shapes
: c
sequential_1/q_dense_3/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential_1/q_dense_3/mul_7Mul'sequential_1/q_dense_3/mul_7/x:output:0 sequential_1/q_dense_3/add_6:z:0*
T0*
_output_shapes
: |
%sequential_1/q_dense_3/StopGradient_3StopGradient sequential_1/q_dense_3/mul_7:z:0*
T0*
_output_shapes
: 
'sequential_1/q_dense_3/ReadVariableOp_5ReadVariableOp0sequential_1_q_dense_3_readvariableop_3_resource*
_output_shapes
: *
dtype0Ћ
sequential_1/q_dense_3/add_7AddV2/sequential_1/q_dense_3/ReadVariableOp_5:value:0.sequential_1/q_dense_3/StopGradient_3:output:0*
T0*
_output_shapes
: І
sequential_1/q_dense_3/BiasAddBiasAdd'sequential_1/q_dense_3/MatMul:product:0 sequential_1/q_dense_3/add_7:z:0*
T0*'
_output_shapes
:џџџџџџџџџ c
!sequential_1/q_activation_3/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :c
!sequential_1/q_activation_3/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :
sequential_1/q_activation_3/PowPow*sequential_1/q_activation_3/Pow/x:output:0*sequential_1/q_activation_3/Pow/y:output:0*
T0*
_output_shapes
: }
 sequential_1/q_activation_3/CastCast#sequential_1/q_activation_3/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: e
#sequential_1/q_activation_3/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :e
#sequential_1/q_activation_3/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Ѕ
!sequential_1/q_activation_3/Pow_1Pow,sequential_1/q_activation_3/Pow_1/x:output:0,sequential_1/q_activation_3/Pow_1/y:output:0*
T0*
_output_shapes
: 
"sequential_1/q_activation_3/Cast_1Cast%sequential_1/q_activation_3/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: f
!sequential_1/q_activation_3/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *   @f
$sequential_1/q_activation_3/Cast_2/xConst*
_output_shapes
: *
dtype0*
value	B : 
"sequential_1/q_activation_3/Cast_2Cast-sequential_1/q_activation_3/Cast_2/x:output:0*

DstT0*

SrcT0*
_output_shapes
: f
!sequential_1/q_activation_3/sub/yConst*
_output_shapes
: *
dtype0*
valueB
 *   A
sequential_1/q_activation_3/subSub&sequential_1/q_activation_3/Cast_2:y:0*sequential_1/q_activation_3/sub/y:output:0*
T0*
_output_shapes
: 
!sequential_1/q_activation_3/Pow_2Pow*sequential_1/q_activation_3/Const:output:0#sequential_1/q_activation_3/sub:z:0*
T0*
_output_shapes
: 
!sequential_1/q_activation_3/sub_1Sub&sequential_1/q_activation_3/Cast_1:y:0%sequential_1/q_activation_3/Pow_2:z:0*
T0*
_output_shapes
: Д
%sequential_1/q_activation_3/LessEqual	LessEqual'sequential_1/q_dense_3/BiasAdd:output:0%sequential_1/q_activation_3/sub_1:z:0*
T0*'
_output_shapes
:џџџџџџџџџ 
 sequential_1/q_activation_3/ReluRelu'sequential_1/q_dense_3/BiasAdd:output:0*
T0*'
_output_shapes
:џџџџџџџџџ 
+sequential_1/q_activation_3/ones_like/ShapeShape'sequential_1/q_dense_3/BiasAdd:output:0*
T0*
_output_shapes
:p
+sequential_1/q_activation_3/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  ?Ы
%sequential_1/q_activation_3/ones_likeFill4sequential_1/q_activation_3/ones_like/Shape:output:04sequential_1/q_activation_3/ones_like/Const:output:0*
T0*'
_output_shapes
:џџџџџџџџџ 
!sequential_1/q_activation_3/sub_2Sub&sequential_1/q_activation_3/Cast_1:y:0%sequential_1/q_activation_3/Pow_2:z:0*
T0*
_output_shapes
: Џ
sequential_1/q_activation_3/mulMul.sequential_1/q_activation_3/ones_like:output:0%sequential_1/q_activation_3/sub_2:z:0*
T0*'
_output_shapes
:џџџџџџџџџ т
$sequential_1/q_activation_3/SelectV2SelectV2)sequential_1/q_activation_3/LessEqual:z:0.sequential_1/q_activation_3/Relu:activations:0#sequential_1/q_activation_3/mul:z:0*
T0*'
_output_shapes
:џџџџџџџџџ Љ
!sequential_1/q_activation_3/mul_1Mul'sequential_1/q_dense_3/BiasAdd:output:0$sequential_1/q_activation_3/Cast:y:0*
T0*'
_output_shapes
:џџџџџџџџџ Џ
#sequential_1/q_activation_3/truedivRealDiv%sequential_1/q_activation_3/mul_1:z:0&sequential_1/q_activation_3/Cast_1:y:0*
T0*'
_output_shapes
:џџџџџџџџџ 
sequential_1/q_activation_3/NegNeg'sequential_1/q_activation_3/truediv:z:0*
T0*'
_output_shapes
:џџџџџџџџџ 
!sequential_1/q_activation_3/RoundRound'sequential_1/q_activation_3/truediv:z:0*
T0*'
_output_shapes
:џџџџџџџџџ І
sequential_1/q_activation_3/addAddV2#sequential_1/q_activation_3/Neg:y:0%sequential_1/q_activation_3/Round:y:0*
T0*'
_output_shapes
:џџџџџџџџџ 
(sequential_1/q_activation_3/StopGradientStopGradient#sequential_1/q_activation_3/add:z:0*
T0*'
_output_shapes
:џџџџџџџџџ И
!sequential_1/q_activation_3/add_1AddV2'sequential_1/q_activation_3/truediv:z:01sequential_1/q_activation_3/StopGradient:output:0*
T0*'
_output_shapes
:џџџџџџџџџ Џ
%sequential_1/q_activation_3/truediv_1RealDiv%sequential_1/q_activation_3/add_1:z:0$sequential_1/q_activation_3/Cast:y:0*
T0*'
_output_shapes
:џџџџџџџџџ l
'sequential_1/q_activation_3/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?Љ
%sequential_1/q_activation_3/truediv_2RealDiv0sequential_1/q_activation_3/truediv_2/x:output:0$sequential_1/q_activation_3/Cast:y:0*
T0*
_output_shapes
: h
#sequential_1/q_activation_3/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?Ђ
!sequential_1/q_activation_3/sub_3Sub,sequential_1/q_activation_3/sub_3/x:output:0)sequential_1/q_activation_3/truediv_2:z:0*
T0*
_output_shapes
: Р
1sequential_1/q_activation_3/clip_by_value/MinimumMinimum)sequential_1/q_activation_3/truediv_1:z:0%sequential_1/q_activation_3/sub_3:z:0*
T0*'
_output_shapes
:џџџџџџџџџ p
+sequential_1/q_activation_3/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    г
)sequential_1/q_activation_3/clip_by_valueMaximum5sequential_1/q_activation_3/clip_by_value/Minimum:z:04sequential_1/q_activation_3/clip_by_value/y:output:0*
T0*'
_output_shapes
:џџџџџџџџџ Б
!sequential_1/q_activation_3/mul_2Mul&sequential_1/q_activation_3/Cast_1:y:0-sequential_1/q_activation_3/clip_by_value:z:0*
T0*'
_output_shapes
:џџџџџџџџџ 
!sequential_1/q_activation_3/Neg_1Neg-sequential_1/q_activation_3/SelectV2:output:0*
T0*'
_output_shapes
:џџџџџџџџџ Њ
!sequential_1/q_activation_3/add_2AddV2%sequential_1/q_activation_3/Neg_1:y:0%sequential_1/q_activation_3/mul_2:z:0*
T0*'
_output_shapes
:џџџџџџџџџ h
#sequential_1/q_activation_3/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?Џ
!sequential_1/q_activation_3/mul_3Mul,sequential_1/q_activation_3/mul_3/x:output:0%sequential_1/q_activation_3/add_2:z:0*
T0*'
_output_shapes
:џџџџџџџџџ 
*sequential_1/q_activation_3/StopGradient_1StopGradient%sequential_1/q_activation_3/mul_3:z:0*
T0*'
_output_shapes
:џџџџџџџџџ Р
!sequential_1/q_activation_3/add_3AddV2-sequential_1/q_activation_3/SelectV2:output:03sequential_1/q_activation_3/StopGradient_1:output:0*
T0*'
_output_shapes
:џџџџџџџџџ ^
sequential_1/q_dense_4/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :^
sequential_1/q_dense_4/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : 
sequential_1/q_dense_4/PowPow%sequential_1/q_dense_4/Pow/x:output:0%sequential_1/q_dense_4/Pow/y:output:0*
T0*
_output_shapes
: s
sequential_1/q_dense_4/CastCastsequential_1/q_dense_4/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: 
%sequential_1/q_dense_4/ReadVariableOpReadVariableOp.sequential_1_q_dense_4_readvariableop_resource*
_output_shapes

: *
dtype0a
sequential_1/q_dense_4/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A 
sequential_1/q_dense_4/mulMul-sequential_1/q_dense_4/ReadVariableOp:value:0%sequential_1/q_dense_4/mul/y:output:0*
T0*
_output_shapes

: 
sequential_1/q_dense_4/truedivRealDivsequential_1/q_dense_4/mul:z:0sequential_1/q_dense_4/Cast:y:0*
T0*
_output_shapes

: n
sequential_1/q_dense_4/NegNeg"sequential_1/q_dense_4/truediv:z:0*
T0*
_output_shapes

: r
sequential_1/q_dense_4/RoundRound"sequential_1/q_dense_4/truediv:z:0*
T0*
_output_shapes

: 
sequential_1/q_dense_4/addAddV2sequential_1/q_dense_4/Neg:y:0 sequential_1/q_dense_4/Round:y:0*
T0*
_output_shapes

: |
#sequential_1/q_dense_4/StopGradientStopGradientsequential_1/q_dense_4/add:z:0*
T0*
_output_shapes

:  
sequential_1/q_dense_4/add_1AddV2"sequential_1/q_dense_4/truediv:z:0,sequential_1/q_dense_4/StopGradient:output:0*
T0*
_output_shapes

: s
.sequential_1/q_dense_4/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAЛ
,sequential_1/q_dense_4/clip_by_value/MinimumMinimum sequential_1/q_dense_4/add_1:z:07sequential_1/q_dense_4/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: k
&sequential_1/q_dense_4/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  СЛ
$sequential_1/q_dense_4/clip_by_valueMaximum0sequential_1/q_dense_4/clip_by_value/Minimum:z:0/sequential_1/q_dense_4/clip_by_value/y:output:0*
T0*
_output_shapes

: 
sequential_1/q_dense_4/mul_1Mulsequential_1/q_dense_4/Cast:y:0(sequential_1/q_dense_4/clip_by_value:z:0*
T0*
_output_shapes

: g
"sequential_1/q_dense_4/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  AЃ
 sequential_1/q_dense_4/truediv_1RealDiv sequential_1/q_dense_4/mul_1:z:0+sequential_1/q_dense_4/truediv_1/y:output:0*
T0*
_output_shapes

: c
sequential_1/q_dense_4/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential_1/q_dense_4/mul_2Mul'sequential_1/q_dense_4/mul_2/x:output:0$sequential_1/q_dense_4/truediv_1:z:0*
T0*
_output_shapes

: 
'sequential_1/q_dense_4/ReadVariableOp_1ReadVariableOp.sequential_1_q_dense_4_readvariableop_resource*
_output_shapes

: *
dtype0}
sequential_1/q_dense_4/Neg_1Neg/sequential_1/q_dense_4/ReadVariableOp_1:value:0*
T0*
_output_shapes

: 
sequential_1/q_dense_4/add_2AddV2 sequential_1/q_dense_4/Neg_1:y:0 sequential_1/q_dense_4/mul_2:z:0*
T0*
_output_shapes

: c
sequential_1/q_dense_4/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential_1/q_dense_4/mul_3Mul'sequential_1/q_dense_4/mul_3/x:output:0 sequential_1/q_dense_4/add_2:z:0*
T0*
_output_shapes

: 
%sequential_1/q_dense_4/StopGradient_1StopGradient sequential_1/q_dense_4/mul_3:z:0*
T0*
_output_shapes

: 
'sequential_1/q_dense_4/ReadVariableOp_2ReadVariableOp.sequential_1_q_dense_4_readvariableop_resource*
_output_shapes

: *
dtype0Џ
sequential_1/q_dense_4/add_3AddV2/sequential_1/q_dense_4/ReadVariableOp_2:value:0.sequential_1/q_dense_4/StopGradient_1:output:0*
T0*
_output_shapes

: Ђ
sequential_1/q_dense_4/MatMulMatMul%sequential_1/q_activation_3/add_3:z:0 sequential_1/q_dense_4/add_3:z:0*
T0*'
_output_shapes
:џџџџџџџџџ`
sequential_1/q_dense_4/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :`
sequential_1/q_dense_4/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : 
sequential_1/q_dense_4/Pow_1Pow'sequential_1/q_dense_4/Pow_1/x:output:0'sequential_1/q_dense_4/Pow_1/y:output:0*
T0*
_output_shapes
: w
sequential_1/q_dense_4/Cast_1Cast sequential_1/q_dense_4/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: 
'sequential_1/q_dense_4/ReadVariableOp_3ReadVariableOp0sequential_1_q_dense_4_readvariableop_3_resource*
_output_shapes
:*
dtype0c
sequential_1/q_dense_4/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  AЂ
sequential_1/q_dense_4/mul_4Mul/sequential_1/q_dense_4/ReadVariableOp_3:value:0'sequential_1/q_dense_4/mul_4/y:output:0*
T0*
_output_shapes
:
 sequential_1/q_dense_4/truediv_2RealDiv sequential_1/q_dense_4/mul_4:z:0!sequential_1/q_dense_4/Cast_1:y:0*
T0*
_output_shapes
:n
sequential_1/q_dense_4/Neg_2Neg$sequential_1/q_dense_4/truediv_2:z:0*
T0*
_output_shapes
:r
sequential_1/q_dense_4/Round_1Round$sequential_1/q_dense_4/truediv_2:z:0*
T0*
_output_shapes
:
sequential_1/q_dense_4/add_4AddV2 sequential_1/q_dense_4/Neg_2:y:0"sequential_1/q_dense_4/Round_1:y:0*
T0*
_output_shapes
:|
%sequential_1/q_dense_4/StopGradient_2StopGradient sequential_1/q_dense_4/add_4:z:0*
T0*
_output_shapes
: 
sequential_1/q_dense_4/add_5AddV2$sequential_1/q_dense_4/truediv_2:z:0.sequential_1/q_dense_4/StopGradient_2:output:0*
T0*
_output_shapes
:u
0sequential_1/q_dense_4/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAЛ
.sequential_1/q_dense_4/clip_by_value_1/MinimumMinimum sequential_1/q_dense_4/add_5:z:09sequential_1/q_dense_4/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
:m
(sequential_1/q_dense_4/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  СН
&sequential_1/q_dense_4/clip_by_value_1Maximum2sequential_1/q_dense_4/clip_by_value_1/Minimum:z:01sequential_1/q_dense_4/clip_by_value_1/y:output:0*
T0*
_output_shapes
:
sequential_1/q_dense_4/mul_5Mul!sequential_1/q_dense_4/Cast_1:y:0*sequential_1/q_dense_4/clip_by_value_1:z:0*
T0*
_output_shapes
:g
"sequential_1/q_dense_4/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A
 sequential_1/q_dense_4/truediv_3RealDiv sequential_1/q_dense_4/mul_5:z:0+sequential_1/q_dense_4/truediv_3/y:output:0*
T0*
_output_shapes
:c
sequential_1/q_dense_4/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential_1/q_dense_4/mul_6Mul'sequential_1/q_dense_4/mul_6/x:output:0$sequential_1/q_dense_4/truediv_3:z:0*
T0*
_output_shapes
:
'sequential_1/q_dense_4/ReadVariableOp_4ReadVariableOp0sequential_1_q_dense_4_readvariableop_3_resource*
_output_shapes
:*
dtype0y
sequential_1/q_dense_4/Neg_3Neg/sequential_1/q_dense_4/ReadVariableOp_4:value:0*
T0*
_output_shapes
:
sequential_1/q_dense_4/add_6AddV2 sequential_1/q_dense_4/Neg_3:y:0 sequential_1/q_dense_4/mul_6:z:0*
T0*
_output_shapes
:c
sequential_1/q_dense_4/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential_1/q_dense_4/mul_7Mul'sequential_1/q_dense_4/mul_7/x:output:0 sequential_1/q_dense_4/add_6:z:0*
T0*
_output_shapes
:|
%sequential_1/q_dense_4/StopGradient_3StopGradient sequential_1/q_dense_4/mul_7:z:0*
T0*
_output_shapes
:
'sequential_1/q_dense_4/ReadVariableOp_5ReadVariableOp0sequential_1_q_dense_4_readvariableop_3_resource*
_output_shapes
:*
dtype0Ћ
sequential_1/q_dense_4/add_7AddV2/sequential_1/q_dense_4/ReadVariableOp_5:value:0.sequential_1/q_dense_4/StopGradient_3:output:0*
T0*
_output_shapes
:І
sequential_1/q_dense_4/BiasAddBiasAdd'sequential_1/q_dense_4/MatMul:product:0 sequential_1/q_dense_4/add_7:z:0*
T0*'
_output_shapes
:џџџџџџџџџv
IdentityIdentity'sequential_1/q_dense_4/BiasAdd:output:0^NoOp*
T0*'
_output_shapes
:џџџџџџџџџј	
NoOpNoOp"^sequential/q_dense/ReadVariableOp$^sequential/q_dense/ReadVariableOp_1$^sequential/q_dense/ReadVariableOp_2$^sequential/q_dense/ReadVariableOp_3$^sequential/q_dense/ReadVariableOp_4$^sequential/q_dense/ReadVariableOp_5$^sequential/q_dense_1/ReadVariableOp&^sequential/q_dense_1/ReadVariableOp_1&^sequential/q_dense_1/ReadVariableOp_2&^sequential/q_dense_1/ReadVariableOp_3&^sequential/q_dense_1/ReadVariableOp_4&^sequential/q_dense_1/ReadVariableOp_5$^sequential/q_dense_2/ReadVariableOp&^sequential/q_dense_2/ReadVariableOp_1&^sequential/q_dense_2/ReadVariableOp_2&^sequential/q_dense_2/ReadVariableOp_3&^sequential/q_dense_2/ReadVariableOp_4&^sequential/q_dense_2/ReadVariableOp_5&^sequential_1/q_dense_3/ReadVariableOp(^sequential_1/q_dense_3/ReadVariableOp_1(^sequential_1/q_dense_3/ReadVariableOp_2(^sequential_1/q_dense_3/ReadVariableOp_3(^sequential_1/q_dense_3/ReadVariableOp_4(^sequential_1/q_dense_3/ReadVariableOp_5&^sequential_1/q_dense_4/ReadVariableOp(^sequential_1/q_dense_4/ReadVariableOp_1(^sequential_1/q_dense_4/ReadVariableOp_2(^sequential_1/q_dense_4/ReadVariableOp_3(^sequential_1/q_dense_4/ReadVariableOp_4(^sequential_1/q_dense_4/ReadVariableOp_5*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:џџџџџџџџџ: : : : : : : : : : 2F
!sequential/q_dense/ReadVariableOp!sequential/q_dense/ReadVariableOp2J
#sequential/q_dense/ReadVariableOp_1#sequential/q_dense/ReadVariableOp_12J
#sequential/q_dense/ReadVariableOp_2#sequential/q_dense/ReadVariableOp_22J
#sequential/q_dense/ReadVariableOp_3#sequential/q_dense/ReadVariableOp_32J
#sequential/q_dense/ReadVariableOp_4#sequential/q_dense/ReadVariableOp_42J
#sequential/q_dense/ReadVariableOp_5#sequential/q_dense/ReadVariableOp_52J
#sequential/q_dense_1/ReadVariableOp#sequential/q_dense_1/ReadVariableOp2N
%sequential/q_dense_1/ReadVariableOp_1%sequential/q_dense_1/ReadVariableOp_12N
%sequential/q_dense_1/ReadVariableOp_2%sequential/q_dense_1/ReadVariableOp_22N
%sequential/q_dense_1/ReadVariableOp_3%sequential/q_dense_1/ReadVariableOp_32N
%sequential/q_dense_1/ReadVariableOp_4%sequential/q_dense_1/ReadVariableOp_42N
%sequential/q_dense_1/ReadVariableOp_5%sequential/q_dense_1/ReadVariableOp_52J
#sequential/q_dense_2/ReadVariableOp#sequential/q_dense_2/ReadVariableOp2N
%sequential/q_dense_2/ReadVariableOp_1%sequential/q_dense_2/ReadVariableOp_12N
%sequential/q_dense_2/ReadVariableOp_2%sequential/q_dense_2/ReadVariableOp_22N
%sequential/q_dense_2/ReadVariableOp_3%sequential/q_dense_2/ReadVariableOp_32N
%sequential/q_dense_2/ReadVariableOp_4%sequential/q_dense_2/ReadVariableOp_42N
%sequential/q_dense_2/ReadVariableOp_5%sequential/q_dense_2/ReadVariableOp_52N
%sequential_1/q_dense_3/ReadVariableOp%sequential_1/q_dense_3/ReadVariableOp2R
'sequential_1/q_dense_3/ReadVariableOp_1'sequential_1/q_dense_3/ReadVariableOp_12R
'sequential_1/q_dense_3/ReadVariableOp_2'sequential_1/q_dense_3/ReadVariableOp_22R
'sequential_1/q_dense_3/ReadVariableOp_3'sequential_1/q_dense_3/ReadVariableOp_32R
'sequential_1/q_dense_3/ReadVariableOp_4'sequential_1/q_dense_3/ReadVariableOp_42R
'sequential_1/q_dense_3/ReadVariableOp_5'sequential_1/q_dense_3/ReadVariableOp_52N
%sequential_1/q_dense_4/ReadVariableOp%sequential_1/q_dense_4/ReadVariableOp2R
'sequential_1/q_dense_4/ReadVariableOp_1'sequential_1/q_dense_4/ReadVariableOp_12R
'sequential_1/q_dense_4/ReadVariableOp_2'sequential_1/q_dense_4/ReadVariableOp_22R
'sequential_1/q_dense_4/ReadVariableOp_3'sequential_1/q_dense_4/ReadVariableOp_32R
'sequential_1/q_dense_4/ReadVariableOp_4'sequential_1/q_dense_4/ReadVariableOp_42R
'sequential_1/q_dense_4/ReadVariableOp_5'sequential_1/q_dense_4/ReadVariableOp_5:S O
+
_output_shapes
:џџџџџџџџџ
 
_user_specified_nameinputs
ч<
І
C__inference_q_dense_layer_call_and_return_conditional_losses_457810

inputs)
readvariableop_resource: '
readvariableop_3_resource: 
identityЂReadVariableOpЂReadVariableOp_1ЂReadVariableOp_2ЂReadVariableOp_3ЂReadVariableOp_4ЂReadVariableOp_5G
Pow/xConst*
_output_shapes
: *
dtype0*
value	B :G
Pow/yConst*
_output_shapes
: *
dtype0*
value	B : K
PowPowPow/x:output:0Pow/y:output:0*
T0*
_output_shapes
: E
CastCastPow:z:0*

DstT0*

SrcT0*
_output_shapes
: f
ReadVariableOpReadVariableOpreadvariableop_resource*
_output_shapes

: *
dtype0J
mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A[
mulMulReadVariableOp:value:0mul/y:output:0*
T0*
_output_shapes

: N
truedivRealDivmul:z:0Cast:y:0*
T0*
_output_shapes

: @
NegNegtruediv:z:0*
T0*
_output_shapes

: D
RoundRoundtruediv:z:0*
T0*
_output_shapes

: I
addAddV2Neg:y:0	Round:y:0*
T0*
_output_shapes

: N
StopGradientStopGradientadd:z:0*
T0*
_output_shapes

: [
add_1AddV2truediv:z:0StopGradient:output:0*
T0*
_output_shapes

: \
clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Сv
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*
_output_shapes

: R
mul_1MulCast:y:0clip_by_value:z:0*
T0*
_output_shapes

: P
truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A^
	truediv_1RealDiv	mul_1:z:0truediv_1/y:output:0*
T0*
_output_shapes

: L
mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?V
mul_2Mulmul_2/x:output:0truediv_1:z:0*
T0*
_output_shapes

: h
ReadVariableOp_1ReadVariableOpreadvariableop_resource*
_output_shapes

: *
dtype0O
Neg_1NegReadVariableOp_1:value:0*
T0*
_output_shapes

: M
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*
_output_shapes

: L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?R
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*
_output_shapes

: R
StopGradient_1StopGradient	mul_3:z:0*
T0*
_output_shapes

: h
ReadVariableOp_2ReadVariableOpreadvariableop_resource*
_output_shapes

: *
dtype0j
add_3AddV2ReadVariableOp_2:value:0StopGradient_1:output:0*
T0*
_output_shapes

: ;
ShapeShapeinputs*
T0*
_output_shapes
:Q
unstackUnpackShape:output:0*
T0*
_output_shapes
: : : *	
numX
Shape_1Const*
_output_shapes
:*
dtype0*
valueB"       S
	unstack_1UnpackShape_1:output:0*
T0*
_output_shapes
: : *	
num^
Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB"џџџџ   d
ReshapeReshapeinputsReshape/shape:output:0*
T0*'
_output_shapes
:џџџџџџџџџ_
transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       c
	transpose	Transpose	add_3:z:0transpose/perm:output:0*
T0*
_output_shapes

: `
Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"   џџџџf
	Reshape_1Reshapetranspose:y:0Reshape_1/shape:output:0*
T0*
_output_shapes

: h
MatMulMatMulReshape:output:0Reshape_1:output:0*
T0*'
_output_shapes
:џџџџџџџџџ S
Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :S
Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : 
Reshape_2/shapePackunstack:output:0Reshape_2/shape/1:output:0Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:v
	Reshape_2ReshapeMatMul:product:0Reshape_2/shape:output:0*
T0*+
_output_shapes
:џџџџџџџџџ I
Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :I
Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Q
Pow_1PowPow_1/x:output:0Pow_1/y:output:0*
T0*
_output_shapes
: I
Cast_1Cast	Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: f
ReadVariableOp_3ReadVariableOpreadvariableop_3_resource*
_output_shapes
: *
dtype0L
mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A]
mul_4MulReadVariableOp_3:value:0mul_4/y:output:0*
T0*
_output_shapes
: P
	truediv_2RealDiv	mul_4:z:0
Cast_1:y:0*
T0*
_output_shapes
: @
Neg_2Negtruediv_2:z:0*
T0*
_output_shapes
: D
Round_1Roundtruediv_2:z:0*
T0*
_output_shapes
: K
add_4AddV2	Neg_2:y:0Round_1:y:0*
T0*
_output_shapes
: N
StopGradient_2StopGradient	add_4:z:0*
T0*
_output_shapes
: [
add_5AddV2truediv_2:z:0StopGradient_2:output:0*
T0*
_output_shapes
: ^
clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Сx
clip_by_value_1Maximumclip_by_value_1/Minimum:z:0clip_by_value_1/y:output:0*
T0*
_output_shapes
: R
mul_5Mul
Cast_1:y:0clip_by_value_1:z:0*
T0*
_output_shapes
: P
truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  AZ
	truediv_3RealDiv	mul_5:z:0truediv_3/y:output:0*
T0*
_output_shapes
: L
mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?R
mul_6Mulmul_6/x:output:0truediv_3:z:0*
T0*
_output_shapes
: f
ReadVariableOp_4ReadVariableOpreadvariableop_3_resource*
_output_shapes
: *
dtype0K
Neg_3NegReadVariableOp_4:value:0*
T0*
_output_shapes
: I
add_6AddV2	Neg_3:y:0	mul_6:z:0*
T0*
_output_shapes
: L
mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?N
mul_7Mulmul_7/x:output:0	add_6:z:0*
T0*
_output_shapes
: N
StopGradient_3StopGradient	mul_7:z:0*
T0*
_output_shapes
: f
ReadVariableOp_5ReadVariableOpreadvariableop_3_resource*
_output_shapes
: *
dtype0f
add_7AddV2ReadVariableOp_5:value:0StopGradient_3:output:0*
T0*
_output_shapes
: g
BiasAddBiasAddReshape_2:output:0	add_7:z:0*
T0*+
_output_shapes
:џџџџџџџџџ c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:џџџџџџџџџ Ж
NoOpNoOp^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:џџџџџџџџџ: : 2 
ReadVariableOpReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_5:S O
+
_output_shapes
:џџџџџџџџџ
 
_user_specified_nameinputs
ќ 
f
J__inference_q_activation_3_layer_call_and_return_conditional_losses_458462

inputs
identityG
Pow/xConst*
_output_shapes
: *
dtype0*
value	B :G
Pow/yConst*
_output_shapes
: *
dtype0*
value	B :K
PowPowPow/x:output:0Pow/y:output:0*
T0*
_output_shapes
: E
CastCastPow:z:0*

DstT0*

SrcT0*
_output_shapes
: I
Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :I
Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Q
Pow_1PowPow_1/x:output:0Pow_1/y:output:0*
T0*
_output_shapes
: I
Cast_1Cast	Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: J
ConstConst*
_output_shapes
: *
dtype0*
valueB
 *   @J
Cast_2/xConst*
_output_shapes
: *
dtype0*
value	B : Q
Cast_2CastCast_2/x:output:0*

DstT0*

SrcT0*
_output_shapes
: J
sub/yConst*
_output_shapes
: *
dtype0*
valueB
 *   AG
subSub
Cast_2:y:0sub/y:output:0*
T0*
_output_shapes
: F
Pow_2PowConst:output:0sub:z:0*
T0*
_output_shapes
: D
sub_1Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: [
	LessEqual	LessEqualinputs	sub_1:z:0*
T0*'
_output_shapes
:џџџџџџџџџ F
ReluReluinputs*
T0*'
_output_shapes
:џџџџџџџџџ E
ones_like/ShapeShapeinputs*
T0*
_output_shapes
:T
ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  ?w
	ones_likeFillones_like/Shape:output:0ones_like/Const:output:0*
T0*'
_output_shapes
:џџџџџџџџџ D
sub_2Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: [
mulMulones_like:output:0	sub_2:z:0*
T0*'
_output_shapes
:џџџџџџџџџ r
SelectV2SelectV2LessEqual:z:0Relu:activations:0mul:z:0*
T0*'
_output_shapes
:џџџџџџџџџ P
mul_1MulinputsCast:y:0*
T0*'
_output_shapes
:џџџџџџџџџ [
truedivRealDiv	mul_1:z:0
Cast_1:y:0*
T0*'
_output_shapes
:џџџџџџџџџ I
NegNegtruediv:z:0*
T0*'
_output_shapes
:џџџџџџџџџ M
RoundRoundtruediv:z:0*
T0*'
_output_shapes
:џџџџџџџџџ R
addAddV2Neg:y:0	Round:y:0*
T0*'
_output_shapes
:џџџџџџџџџ W
StopGradientStopGradientadd:z:0*
T0*'
_output_shapes
:џџџџџџџџџ d
add_1AddV2truediv:z:0StopGradient:output:0*
T0*'
_output_shapes
:џџџџџџџџџ [
	truediv_1RealDiv	add_1:z:0Cast:y:0*
T0*'
_output_shapes
:џџџџџџџџџ P
truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?U
	truediv_2RealDivtruediv_2/x:output:0Cast:y:0*
T0*
_output_shapes
: L
sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?N
sub_3Subsub_3/x:output:0truediv_2:z:0*
T0*
_output_shapes
: l
clip_by_value/MinimumMinimumtruediv_1:z:0	sub_3:z:0*
T0*'
_output_shapes
:џџџџџџџџџ T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*'
_output_shapes
:џџџџџџџџџ ]
mul_2Mul
Cast_1:y:0clip_by_value:z:0*
T0*'
_output_shapes
:џџџџџџџџџ Q
Neg_1NegSelectV2:output:0*
T0*'
_output_shapes
:џџџџџџџџџ V
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*'
_output_shapes
:џџџџџџџџџ L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?[
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*'
_output_shapes
:џџџџџџџџџ [
StopGradient_1StopGradient	mul_3:z:0*
T0*'
_output_shapes
:џџџџџџџџџ l
add_3AddV2SelectV2:output:0StopGradient_1:output:0*
T0*'
_output_shapes
:џџџџџџџџџ Q
IdentityIdentity	add_3:z:0*
T0*'
_output_shapes
:џџџџџџџџџ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*&
_input_shapes
:џџџџџџџџџ :O K
'
_output_shapes
:џџџџџџџџџ 
 
_user_specified_nameinputs
Ф
Р
H__inference_sequential_1_layer_call_and_return_conditional_losses_458645
q_dense_3_input"
q_dense_3_458633:  
q_dense_3_458635: "
q_dense_4_458639: 
q_dense_4_458641:
identityЂ!q_dense_3/StatefulPartitionedCallЂ!q_dense_4/StatefulPartitionedCall
!q_dense_3/StatefulPartitionedCallStatefulPartitionedCallq_dense_3_inputq_dense_3_458633q_dense_3_458635*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:џџџџџџџџџ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8 *N
fIRG
E__inference_q_dense_3_layer_call_and_return_conditional_losses_458407э
q_activation_3/PartitionedCallPartitionedCall*q_dense_3/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:џџџџџџџџџ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8 *S
fNRL
J__inference_q_activation_3_layer_call_and_return_conditional_losses_458462
!q_dense_4/StatefulPartitionedCallStatefulPartitionedCall'q_activation_3/PartitionedCall:output:0q_dense_4_458639q_dense_4_458641*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:џџџџџџџџџ*$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8 *N
fIRG
E__inference_q_dense_4_layer_call_and_return_conditional_losses_458532y
IdentityIdentity*q_dense_4/StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:џџџџџџџџџ
NoOpNoOp"^q_dense_3/StatefulPartitionedCall"^q_dense_4/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:џџџџџџџџџ : : : : 2F
!q_dense_3/StatefulPartitionedCall!q_dense_3/StatefulPartitionedCall2F
!q_dense_4/StatefulPartitionedCall!q_dense_4/StatefulPartitionedCall:X T
'
_output_shapes
:џџџџџџџџџ 
)
_user_specified_nameq_dense_3_input
щ<
Ј
E__inference_q_dense_1_layer_call_and_return_conditional_losses_461537

inputs)
readvariableop_resource:  '
readvariableop_3_resource: 
identityЂReadVariableOpЂReadVariableOp_1ЂReadVariableOp_2ЂReadVariableOp_3ЂReadVariableOp_4ЂReadVariableOp_5G
Pow/xConst*
_output_shapes
: *
dtype0*
value	B :G
Pow/yConst*
_output_shapes
: *
dtype0*
value	B : K
PowPowPow/x:output:0Pow/y:output:0*
T0*
_output_shapes
: E
CastCastPow:z:0*

DstT0*

SrcT0*
_output_shapes
: f
ReadVariableOpReadVariableOpreadvariableop_resource*
_output_shapes

:  *
dtype0J
mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A[
mulMulReadVariableOp:value:0mul/y:output:0*
T0*
_output_shapes

:  N
truedivRealDivmul:z:0Cast:y:0*
T0*
_output_shapes

:  @
NegNegtruediv:z:0*
T0*
_output_shapes

:  D
RoundRoundtruediv:z:0*
T0*
_output_shapes

:  I
addAddV2Neg:y:0	Round:y:0*
T0*
_output_shapes

:  N
StopGradientStopGradientadd:z:0*
T0*
_output_shapes

:  [
add_1AddV2truediv:z:0StopGradient:output:0*
T0*
_output_shapes

:  \
clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Сv
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*
_output_shapes

:  R
mul_1MulCast:y:0clip_by_value:z:0*
T0*
_output_shapes

:  P
truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A^
	truediv_1RealDiv	mul_1:z:0truediv_1/y:output:0*
T0*
_output_shapes

:  L
mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?V
mul_2Mulmul_2/x:output:0truediv_1:z:0*
T0*
_output_shapes

:  h
ReadVariableOp_1ReadVariableOpreadvariableop_resource*
_output_shapes

:  *
dtype0O
Neg_1NegReadVariableOp_1:value:0*
T0*
_output_shapes

:  M
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*
_output_shapes

:  L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?R
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*
_output_shapes

:  R
StopGradient_1StopGradient	mul_3:z:0*
T0*
_output_shapes

:  h
ReadVariableOp_2ReadVariableOpreadvariableop_resource*
_output_shapes

:  *
dtype0j
add_3AddV2ReadVariableOp_2:value:0StopGradient_1:output:0*
T0*
_output_shapes

:  ;
ShapeShapeinputs*
T0*
_output_shapes
:Q
unstackUnpackShape:output:0*
T0*
_output_shapes
: : : *	
numX
Shape_1Const*
_output_shapes
:*
dtype0*
valueB"        S
	unstack_1UnpackShape_1:output:0*
T0*
_output_shapes
: : *	
num^
Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB"џџџџ    d
ReshapeReshapeinputsReshape/shape:output:0*
T0*'
_output_shapes
:џџџџџџџџџ _
transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       c
	transpose	Transpose	add_3:z:0transpose/perm:output:0*
T0*
_output_shapes

:  `
Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"    џџџџf
	Reshape_1Reshapetranspose:y:0Reshape_1/shape:output:0*
T0*
_output_shapes

:  h
MatMulMatMulReshape:output:0Reshape_1:output:0*
T0*'
_output_shapes
:џџџџџџџџџ S
Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :S
Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : 
Reshape_2/shapePackunstack:output:0Reshape_2/shape/1:output:0Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:v
	Reshape_2ReshapeMatMul:product:0Reshape_2/shape:output:0*
T0*+
_output_shapes
:џџџџџџџџџ I
Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :I
Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Q
Pow_1PowPow_1/x:output:0Pow_1/y:output:0*
T0*
_output_shapes
: I
Cast_1Cast	Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: f
ReadVariableOp_3ReadVariableOpreadvariableop_3_resource*
_output_shapes
: *
dtype0L
mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A]
mul_4MulReadVariableOp_3:value:0mul_4/y:output:0*
T0*
_output_shapes
: P
	truediv_2RealDiv	mul_4:z:0
Cast_1:y:0*
T0*
_output_shapes
: @
Neg_2Negtruediv_2:z:0*
T0*
_output_shapes
: D
Round_1Roundtruediv_2:z:0*
T0*
_output_shapes
: K
add_4AddV2	Neg_2:y:0Round_1:y:0*
T0*
_output_shapes
: N
StopGradient_2StopGradient	add_4:z:0*
T0*
_output_shapes
: [
add_5AddV2truediv_2:z:0StopGradient_2:output:0*
T0*
_output_shapes
: ^
clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Сx
clip_by_value_1Maximumclip_by_value_1/Minimum:z:0clip_by_value_1/y:output:0*
T0*
_output_shapes
: R
mul_5Mul
Cast_1:y:0clip_by_value_1:z:0*
T0*
_output_shapes
: P
truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  AZ
	truediv_3RealDiv	mul_5:z:0truediv_3/y:output:0*
T0*
_output_shapes
: L
mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?R
mul_6Mulmul_6/x:output:0truediv_3:z:0*
T0*
_output_shapes
: f
ReadVariableOp_4ReadVariableOpreadvariableop_3_resource*
_output_shapes
: *
dtype0K
Neg_3NegReadVariableOp_4:value:0*
T0*
_output_shapes
: I
add_6AddV2	Neg_3:y:0	mul_6:z:0*
T0*
_output_shapes
: L
mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?N
mul_7Mulmul_7/x:output:0	add_6:z:0*
T0*
_output_shapes
: N
StopGradient_3StopGradient	mul_7:z:0*
T0*
_output_shapes
: f
ReadVariableOp_5ReadVariableOpreadvariableop_3_resource*
_output_shapes
: *
dtype0f
add_7AddV2ReadVariableOp_5:value:0StopGradient_3:output:0*
T0*
_output_shapes
: g
BiasAddBiasAddReshape_2:output:0	add_7:z:0*
T0*+
_output_shapes
:џџџџџџџџџ c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:џџџџџџџџџ Ж
NoOpNoOp^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:џџџџџџџџџ : : 2 
ReadVariableOpReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_5:S O
+
_output_shapes
:џџџџџџџџџ 
 
_user_specified_nameinputs
Ќ
K
#__inference__update_step_xla_460077
gradient
variable: *
_XlaMustCompile(*(
_construction_contextkEagerRuntime*
_input_shapes

: : *
	_noinline(:D @

_output_shapes
: 
"
_user_specified_name
gradient:($
"
_user_specified_name
variable
е

(__inference_q_dense_layer_call_fn_461304

inputs
unknown: 
	unknown_0: 
identityЂStatefulPartitionedCallс
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8 *L
fGRE
C__inference_q_dense_layer_call_and_return_conditional_losses_457810s
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:џџџџџџџџџ `
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:џџџџџџџџџ: : 22
StatefulPartitionedCallStatefulPartitionedCall:S O
+
_output_shapes
:џџџџџџџџџ
 
_user_specified_nameinputs
ћ1
Ј
E__inference_q_dense_3_layer_call_and_return_conditional_losses_458407

inputs)
readvariableop_resource:  '
readvariableop_3_resource: 
identityЂReadVariableOpЂReadVariableOp_1ЂReadVariableOp_2ЂReadVariableOp_3ЂReadVariableOp_4ЂReadVariableOp_5G
Pow/xConst*
_output_shapes
: *
dtype0*
value	B :G
Pow/yConst*
_output_shapes
: *
dtype0*
value	B : K
PowPowPow/x:output:0Pow/y:output:0*
T0*
_output_shapes
: E
CastCastPow:z:0*

DstT0*

SrcT0*
_output_shapes
: f
ReadVariableOpReadVariableOpreadvariableop_resource*
_output_shapes

:  *
dtype0J
mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A[
mulMulReadVariableOp:value:0mul/y:output:0*
T0*
_output_shapes

:  N
truedivRealDivmul:z:0Cast:y:0*
T0*
_output_shapes

:  @
NegNegtruediv:z:0*
T0*
_output_shapes

:  D
RoundRoundtruediv:z:0*
T0*
_output_shapes

:  I
addAddV2Neg:y:0	Round:y:0*
T0*
_output_shapes

:  N
StopGradientStopGradientadd:z:0*
T0*
_output_shapes

:  [
add_1AddV2truediv:z:0StopGradient:output:0*
T0*
_output_shapes

:  \
clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Сv
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*
_output_shapes

:  R
mul_1MulCast:y:0clip_by_value:z:0*
T0*
_output_shapes

:  P
truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A^
	truediv_1RealDiv	mul_1:z:0truediv_1/y:output:0*
T0*
_output_shapes

:  L
mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?V
mul_2Mulmul_2/x:output:0truediv_1:z:0*
T0*
_output_shapes

:  h
ReadVariableOp_1ReadVariableOpreadvariableop_resource*
_output_shapes

:  *
dtype0O
Neg_1NegReadVariableOp_1:value:0*
T0*
_output_shapes

:  M
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*
_output_shapes

:  L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?R
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*
_output_shapes

:  R
StopGradient_1StopGradient	mul_3:z:0*
T0*
_output_shapes

:  h
ReadVariableOp_2ReadVariableOpreadvariableop_resource*
_output_shapes

:  *
dtype0j
add_3AddV2ReadVariableOp_2:value:0StopGradient_1:output:0*
T0*
_output_shapes

:  U
MatMulMatMulinputs	add_3:z:0*
T0*'
_output_shapes
:џџџџџџџџџ I
Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :I
Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Q
Pow_1PowPow_1/x:output:0Pow_1/y:output:0*
T0*
_output_shapes
: I
Cast_1Cast	Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: f
ReadVariableOp_3ReadVariableOpreadvariableop_3_resource*
_output_shapes
: *
dtype0L
mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A]
mul_4MulReadVariableOp_3:value:0mul_4/y:output:0*
T0*
_output_shapes
: P
	truediv_2RealDiv	mul_4:z:0
Cast_1:y:0*
T0*
_output_shapes
: @
Neg_2Negtruediv_2:z:0*
T0*
_output_shapes
: D
Round_1Roundtruediv_2:z:0*
T0*
_output_shapes
: K
add_4AddV2	Neg_2:y:0Round_1:y:0*
T0*
_output_shapes
: N
StopGradient_2StopGradient	add_4:z:0*
T0*
_output_shapes
: [
add_5AddV2truediv_2:z:0StopGradient_2:output:0*
T0*
_output_shapes
: ^
clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Сx
clip_by_value_1Maximumclip_by_value_1/Minimum:z:0clip_by_value_1/y:output:0*
T0*
_output_shapes
: R
mul_5Mul
Cast_1:y:0clip_by_value_1:z:0*
T0*
_output_shapes
: P
truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  AZ
	truediv_3RealDiv	mul_5:z:0truediv_3/y:output:0*
T0*
_output_shapes
: L
mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?R
mul_6Mulmul_6/x:output:0truediv_3:z:0*
T0*
_output_shapes
: f
ReadVariableOp_4ReadVariableOpreadvariableop_3_resource*
_output_shapes
: *
dtype0K
Neg_3NegReadVariableOp_4:value:0*
T0*
_output_shapes
: I
add_6AddV2	Neg_3:y:0	mul_6:z:0*
T0*
_output_shapes
: L
mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?N
mul_7Mulmul_7/x:output:0	add_6:z:0*
T0*
_output_shapes
: N
StopGradient_3StopGradient	mul_7:z:0*
T0*
_output_shapes
: f
ReadVariableOp_5ReadVariableOpreadvariableop_3_resource*
_output_shapes
: *
dtype0f
add_7AddV2ReadVariableOp_5:value:0StopGradient_3:output:0*
T0*
_output_shapes
: a
BiasAddBiasAddMatMul:product:0	add_7:z:0*
T0*'
_output_shapes
:џџџџџџџџџ _
IdentityIdentityBiasAdd:output:0^NoOp*
T0*'
_output_shapes
:џџџџџџџџџ Ж
NoOpNoOp^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:џџџџџџџџџ : : 2 
ReadVariableOpReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_5:O K
'
_output_shapes
:џџџџџџџџџ 
 
_user_specified_nameinputs
ЈG

__inference__traced_save_462078
file_prefix-
)savev2_q_dense_kernel_read_readvariableop+
'savev2_q_dense_bias_read_readvariableop/
+savev2_q_dense_1_kernel_read_readvariableop-
)savev2_q_dense_1_bias_read_readvariableop/
+savev2_q_dense_2_kernel_read_readvariableop-
)savev2_q_dense_2_bias_read_readvariableop/
+savev2_q_dense_3_kernel_read_readvariableop-
)savev2_q_dense_3_bias_read_readvariableop/
+savev2_q_dense_4_kernel_read_readvariableop-
)savev2_q_dense_4_bias_read_readvariableop(
$savev2_iteration_read_readvariableop	,
(savev2_learning_rate_read_readvariableop4
0savev2_adam_m_q_dense_kernel_read_readvariableop4
0savev2_adam_v_q_dense_kernel_read_readvariableop2
.savev2_adam_m_q_dense_bias_read_readvariableop2
.savev2_adam_v_q_dense_bias_read_readvariableop6
2savev2_adam_m_q_dense_1_kernel_read_readvariableop6
2savev2_adam_v_q_dense_1_kernel_read_readvariableop4
0savev2_adam_m_q_dense_1_bias_read_readvariableop4
0savev2_adam_v_q_dense_1_bias_read_readvariableop6
2savev2_adam_m_q_dense_2_kernel_read_readvariableop6
2savev2_adam_v_q_dense_2_kernel_read_readvariableop4
0savev2_adam_m_q_dense_2_bias_read_readvariableop4
0savev2_adam_v_q_dense_2_bias_read_readvariableop6
2savev2_adam_m_q_dense_3_kernel_read_readvariableop6
2savev2_adam_v_q_dense_3_kernel_read_readvariableop4
0savev2_adam_m_q_dense_3_bias_read_readvariableop4
0savev2_adam_v_q_dense_3_bias_read_readvariableop6
2savev2_adam_m_q_dense_4_kernel_read_readvariableop6
2savev2_adam_v_q_dense_4_kernel_read_readvariableop4
0savev2_adam_m_q_dense_4_bias_read_readvariableop4
0savev2_adam_v_q_dense_4_bias_read_readvariableop&
"savev2_total_1_read_readvariableop&
"savev2_count_1_read_readvariableop$
 savev2_total_read_readvariableop$
 savev2_count_read_readvariableop
savev2_const

identity_1ЂMergeV2Checkpointsw
StaticRegexFullMatchStaticRegexFullMatchfile_prefix"/device:CPU:**
_output_shapes
: *
pattern
^s3://.*Z
ConstConst"/device:CPU:**
_output_shapes
: *
dtype0*
valueB B.parta
Const_1Const"/device:CPU:**
_output_shapes
: *
dtype0*
valueB B
_temp/part
SelectSelectStaticRegexFullMatch:output:0Const:output:0Const_1:output:0"/device:CPU:**
T0*
_output_shapes
: f

StringJoin
StringJoinfile_prefixSelect:output:0"/device:CPU:**
N*
_output_shapes
: L

num_shardsConst*
_output_shapes
: *
dtype0*
value	B :f
ShardedFilename/shardConst"/device:CPU:0*
_output_shapes
: *
dtype0*
value	B : 
ShardedFilenameShardedFilenameStringJoin:output:0ShardedFilename/shard:output:0num_shards:output:0"/device:CPU:0*
_output_shapes
: р
SaveV2/tensor_namesConst"/device:CPU:0*
_output_shapes
:%*
dtype0*
valueџBќ%B&variables/0/.ATTRIBUTES/VARIABLE_VALUEB&variables/1/.ATTRIBUTES/VARIABLE_VALUEB&variables/2/.ATTRIBUTES/VARIABLE_VALUEB&variables/3/.ATTRIBUTES/VARIABLE_VALUEB&variables/4/.ATTRIBUTES/VARIABLE_VALUEB&variables/5/.ATTRIBUTES/VARIABLE_VALUEB&variables/6/.ATTRIBUTES/VARIABLE_VALUEB&variables/7/.ATTRIBUTES/VARIABLE_VALUEB&variables/8/.ATTRIBUTES/VARIABLE_VALUEB&variables/9/.ATTRIBUTES/VARIABLE_VALUEB0optimizer/_iterations/.ATTRIBUTES/VARIABLE_VALUEB3optimizer/_learning_rate/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/1/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/2/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/3/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/4/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/5/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/6/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/7/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/8/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/9/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/10/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/11/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/12/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/13/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/14/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/15/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/16/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/17/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/18/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/19/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/20/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/0/total/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/0/count/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/1/total/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/1/count/.ATTRIBUTES/VARIABLE_VALUEB_CHECKPOINTABLE_OBJECT_GRAPHЗ
SaveV2/shape_and_slicesConst"/device:CPU:0*
_output_shapes
:%*
dtype0*]
valueTBR%B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B 
SaveV2SaveV2ShardedFilename:filename:0SaveV2/tensor_names:output:0 SaveV2/shape_and_slices:output:0)savev2_q_dense_kernel_read_readvariableop'savev2_q_dense_bias_read_readvariableop+savev2_q_dense_1_kernel_read_readvariableop)savev2_q_dense_1_bias_read_readvariableop+savev2_q_dense_2_kernel_read_readvariableop)savev2_q_dense_2_bias_read_readvariableop+savev2_q_dense_3_kernel_read_readvariableop)savev2_q_dense_3_bias_read_readvariableop+savev2_q_dense_4_kernel_read_readvariableop)savev2_q_dense_4_bias_read_readvariableop$savev2_iteration_read_readvariableop(savev2_learning_rate_read_readvariableop0savev2_adam_m_q_dense_kernel_read_readvariableop0savev2_adam_v_q_dense_kernel_read_readvariableop.savev2_adam_m_q_dense_bias_read_readvariableop.savev2_adam_v_q_dense_bias_read_readvariableop2savev2_adam_m_q_dense_1_kernel_read_readvariableop2savev2_adam_v_q_dense_1_kernel_read_readvariableop0savev2_adam_m_q_dense_1_bias_read_readvariableop0savev2_adam_v_q_dense_1_bias_read_readvariableop2savev2_adam_m_q_dense_2_kernel_read_readvariableop2savev2_adam_v_q_dense_2_kernel_read_readvariableop0savev2_adam_m_q_dense_2_bias_read_readvariableop0savev2_adam_v_q_dense_2_bias_read_readvariableop2savev2_adam_m_q_dense_3_kernel_read_readvariableop2savev2_adam_v_q_dense_3_kernel_read_readvariableop0savev2_adam_m_q_dense_3_bias_read_readvariableop0savev2_adam_v_q_dense_3_bias_read_readvariableop2savev2_adam_m_q_dense_4_kernel_read_readvariableop2savev2_adam_v_q_dense_4_kernel_read_readvariableop0savev2_adam_m_q_dense_4_bias_read_readvariableop0savev2_adam_v_q_dense_4_bias_read_readvariableop"savev2_total_1_read_readvariableop"savev2_count_1_read_readvariableop savev2_total_read_readvariableop savev2_count_read_readvariableopsavev2_const"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *3
dtypes)
'2%	
&MergeV2Checkpoints/checkpoint_prefixesPackShardedFilename:filename:0^SaveV2"/device:CPU:0*
N*
T0*
_output_shapes
:Г
MergeV2CheckpointsMergeV2Checkpoints/MergeV2Checkpoints/checkpoint_prefixes:output:0file_prefix"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 f
IdentityIdentityfile_prefix^MergeV2Checkpoints"/device:CPU:0*
T0*
_output_shapes
: Q

Identity_1IdentityIdentity:output:0^NoOp*
T0*
_output_shapes
: [
NoOpNoOp^MergeV2Checkpoints*"
_acd_function_control_output(*
_output_shapes
 "!

identity_1Identity_1:output:0*
_input_shapes
: : : :  : :  : :  : : :: : : : : : :  :  : : :  :  : : :  :  : : : : ::: : : : : 2(
MergeV2CheckpointsMergeV2Checkpoints:C ?

_output_shapes
: 
%
_user_specified_namefile_prefix:$ 

_output_shapes

: : 

_output_shapes
: :$ 

_output_shapes

:  : 

_output_shapes
: :$ 

_output_shapes

:  : 

_output_shapes
: :$ 

_output_shapes

:  : 

_output_shapes
: :$	 

_output_shapes

: : 


_output_shapes
::

_output_shapes
: :

_output_shapes
: :$ 

_output_shapes

: :$ 

_output_shapes

: : 

_output_shapes
: : 

_output_shapes
: :$ 

_output_shapes

:  :$ 

_output_shapes

:  : 

_output_shapes
: : 

_output_shapes
: :$ 

_output_shapes

:  :$ 

_output_shapes

:  : 

_output_shapes
: : 

_output_shapes
: :$ 

_output_shapes

:  :$ 

_output_shapes

:  : 

_output_shapes
: : 

_output_shapes
: :$ 

_output_shapes

: :$ 

_output_shapes

: : 

_output_shapes
::  

_output_shapes
::!

_output_shapes
: :"

_output_shapes
: :#

_output_shapes
: :$

_output_shapes
: :%

_output_shapes
: 
кШ
Е
!__inference__wrapped_model_457718
input_1Q
?deepsetsinvquantised_sequential_q_dense_readvariableop_resource: O
Adeepsetsinvquantised_sequential_q_dense_readvariableop_3_resource: S
Adeepsetsinvquantised_sequential_q_dense_1_readvariableop_resource:  Q
Cdeepsetsinvquantised_sequential_q_dense_1_readvariableop_3_resource: S
Adeepsetsinvquantised_sequential_q_dense_2_readvariableop_resource:  Q
Cdeepsetsinvquantised_sequential_q_dense_2_readvariableop_3_resource: U
Cdeepsetsinvquantised_sequential_1_q_dense_3_readvariableop_resource:  S
Edeepsetsinvquantised_sequential_1_q_dense_3_readvariableop_3_resource: U
Cdeepsetsinvquantised_sequential_1_q_dense_4_readvariableop_resource: S
Edeepsetsinvquantised_sequential_1_q_dense_4_readvariableop_3_resource:
identityЂ6DeepSetsInvQuantised/sequential/q_dense/ReadVariableOpЂ8DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_1Ђ8DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_2Ђ8DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_3Ђ8DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_4Ђ8DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_5Ђ8DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOpЂ:DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_1Ђ:DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_2Ђ:DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_3Ђ:DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_4Ђ:DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_5Ђ8DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOpЂ:DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_1Ђ:DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_2Ђ:DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_3Ђ:DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_4Ђ:DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_5Ђ:DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOpЂ<DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_1Ђ<DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_2Ђ<DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_3Ђ<DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_4Ђ<DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_5Ђ:DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOpЂ<DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_1Ђ<DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_2Ђ<DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_3Ђ<DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_4Ђ<DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_5o
-DeepSetsInvQuantised/sequential/q_dense/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :o
-DeepSetsInvQuantised/sequential/q_dense/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : У
+DeepSetsInvQuantised/sequential/q_dense/PowPow6DeepSetsInvQuantised/sequential/q_dense/Pow/x:output:06DeepSetsInvQuantised/sequential/q_dense/Pow/y:output:0*
T0*
_output_shapes
: 
,DeepSetsInvQuantised/sequential/q_dense/CastCast/DeepSetsInvQuantised/sequential/q_dense/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: Ж
6DeepSetsInvQuantised/sequential/q_dense/ReadVariableOpReadVariableOp?deepsetsinvquantised_sequential_q_dense_readvariableop_resource*
_output_shapes

: *
dtype0r
-DeepSetsInvQuantised/sequential/q_dense/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Aг
+DeepSetsInvQuantised/sequential/q_dense/mulMul>DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp:value:06DeepSetsInvQuantised/sequential/q_dense/mul/y:output:0*
T0*
_output_shapes

: Ц
/DeepSetsInvQuantised/sequential/q_dense/truedivRealDiv/DeepSetsInvQuantised/sequential/q_dense/mul:z:00DeepSetsInvQuantised/sequential/q_dense/Cast:y:0*
T0*
_output_shapes

: 
+DeepSetsInvQuantised/sequential/q_dense/NegNeg3DeepSetsInvQuantised/sequential/q_dense/truediv:z:0*
T0*
_output_shapes

: 
-DeepSetsInvQuantised/sequential/q_dense/RoundRound3DeepSetsInvQuantised/sequential/q_dense/truediv:z:0*
T0*
_output_shapes

: С
+DeepSetsInvQuantised/sequential/q_dense/addAddV2/DeepSetsInvQuantised/sequential/q_dense/Neg:y:01DeepSetsInvQuantised/sequential/q_dense/Round:y:0*
T0*
_output_shapes

: 
4DeepSetsInvQuantised/sequential/q_dense/StopGradientStopGradient/DeepSetsInvQuantised/sequential/q_dense/add:z:0*
T0*
_output_shapes

: г
-DeepSetsInvQuantised/sequential/q_dense/add_1AddV23DeepSetsInvQuantised/sequential/q_dense/truediv:z:0=DeepSetsInvQuantised/sequential/q_dense/StopGradient:output:0*
T0*
_output_shapes

: 
?DeepSetsInvQuantised/sequential/q_dense/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAю
=DeepSetsInvQuantised/sequential/q_dense/clip_by_value/MinimumMinimum1DeepSetsInvQuantised/sequential/q_dense/add_1:z:0HDeepSetsInvQuantised/sequential/q_dense/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: |
7DeepSetsInvQuantised/sequential/q_dense/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Сю
5DeepSetsInvQuantised/sequential/q_dense/clip_by_valueMaximumADeepSetsInvQuantised/sequential/q_dense/clip_by_value/Minimum:z:0@DeepSetsInvQuantised/sequential/q_dense/clip_by_value/y:output:0*
T0*
_output_shapes

: Ъ
-DeepSetsInvQuantised/sequential/q_dense/mul_1Mul0DeepSetsInvQuantised/sequential/q_dense/Cast:y:09DeepSetsInvQuantised/sequential/q_dense/clip_by_value:z:0*
T0*
_output_shapes

: x
3DeepSetsInvQuantised/sequential/q_dense/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Aж
1DeepSetsInvQuantised/sequential/q_dense/truediv_1RealDiv1DeepSetsInvQuantised/sequential/q_dense/mul_1:z:0<DeepSetsInvQuantised/sequential/q_dense/truediv_1/y:output:0*
T0*
_output_shapes

: t
/DeepSetsInvQuantised/sequential/q_dense/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?Ю
-DeepSetsInvQuantised/sequential/q_dense/mul_2Mul8DeepSetsInvQuantised/sequential/q_dense/mul_2/x:output:05DeepSetsInvQuantised/sequential/q_dense/truediv_1:z:0*
T0*
_output_shapes

: И
8DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_1ReadVariableOp?deepsetsinvquantised_sequential_q_dense_readvariableop_resource*
_output_shapes

: *
dtype0
-DeepSetsInvQuantised/sequential/q_dense/Neg_1Neg@DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_1:value:0*
T0*
_output_shapes

: Х
-DeepSetsInvQuantised/sequential/q_dense/add_2AddV21DeepSetsInvQuantised/sequential/q_dense/Neg_1:y:01DeepSetsInvQuantised/sequential/q_dense/mul_2:z:0*
T0*
_output_shapes

: t
/DeepSetsInvQuantised/sequential/q_dense/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?Ъ
-DeepSetsInvQuantised/sequential/q_dense/mul_3Mul8DeepSetsInvQuantised/sequential/q_dense/mul_3/x:output:01DeepSetsInvQuantised/sequential/q_dense/add_2:z:0*
T0*
_output_shapes

: Ђ
6DeepSetsInvQuantised/sequential/q_dense/StopGradient_1StopGradient1DeepSetsInvQuantised/sequential/q_dense/mul_3:z:0*
T0*
_output_shapes

: И
8DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_2ReadVariableOp?deepsetsinvquantised_sequential_q_dense_readvariableop_resource*
_output_shapes

: *
dtype0т
-DeepSetsInvQuantised/sequential/q_dense/add_3AddV2@DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_2:value:0?DeepSetsInvQuantised/sequential/q_dense/StopGradient_1:output:0*
T0*
_output_shapes

: d
-DeepSetsInvQuantised/sequential/q_dense/ShapeShapeinput_1*
T0*
_output_shapes
:Ё
/DeepSetsInvQuantised/sequential/q_dense/unstackUnpack6DeepSetsInvQuantised/sequential/q_dense/Shape:output:0*
T0*
_output_shapes
: : : *	
num
/DeepSetsInvQuantised/sequential/q_dense/Shape_1Const*
_output_shapes
:*
dtype0*
valueB"       Ѓ
1DeepSetsInvQuantised/sequential/q_dense/unstack_1Unpack8DeepSetsInvQuantised/sequential/q_dense/Shape_1:output:0*
T0*
_output_shapes
: : *	
num
5DeepSetsInvQuantised/sequential/q_dense/Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB"џџџџ   Е
/DeepSetsInvQuantised/sequential/q_dense/ReshapeReshapeinput_1>DeepSetsInvQuantised/sequential/q_dense/Reshape/shape:output:0*
T0*'
_output_shapes
:џџџџџџџџџ
6DeepSetsInvQuantised/sequential/q_dense/transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       л
1DeepSetsInvQuantised/sequential/q_dense/transpose	Transpose1DeepSetsInvQuantised/sequential/q_dense/add_3:z:0?DeepSetsInvQuantised/sequential/q_dense/transpose/perm:output:0*
T0*
_output_shapes

: 
7DeepSetsInvQuantised/sequential/q_dense/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"   џџџџо
1DeepSetsInvQuantised/sequential/q_dense/Reshape_1Reshape5DeepSetsInvQuantised/sequential/q_dense/transpose:y:0@DeepSetsInvQuantised/sequential/q_dense/Reshape_1/shape:output:0*
T0*
_output_shapes

: р
.DeepSetsInvQuantised/sequential/q_dense/MatMulMatMul8DeepSetsInvQuantised/sequential/q_dense/Reshape:output:0:DeepSetsInvQuantised/sequential/q_dense/Reshape_1:output:0*
T0*'
_output_shapes
:џџџџџџџџџ {
9DeepSetsInvQuantised/sequential/q_dense/Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :{
9DeepSetsInvQuantised/sequential/q_dense/Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : Џ
7DeepSetsInvQuantised/sequential/q_dense/Reshape_2/shapePack8DeepSetsInvQuantised/sequential/q_dense/unstack:output:0BDeepSetsInvQuantised/sequential/q_dense/Reshape_2/shape/1:output:0BDeepSetsInvQuantised/sequential/q_dense/Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:ю
1DeepSetsInvQuantised/sequential/q_dense/Reshape_2Reshape8DeepSetsInvQuantised/sequential/q_dense/MatMul:product:0@DeepSetsInvQuantised/sequential/q_dense/Reshape_2/shape:output:0*
T0*+
_output_shapes
:џџџџџџџџџ q
/DeepSetsInvQuantised/sequential/q_dense/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :q
/DeepSetsInvQuantised/sequential/q_dense/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Щ
-DeepSetsInvQuantised/sequential/q_dense/Pow_1Pow8DeepSetsInvQuantised/sequential/q_dense/Pow_1/x:output:08DeepSetsInvQuantised/sequential/q_dense/Pow_1/y:output:0*
T0*
_output_shapes
: 
.DeepSetsInvQuantised/sequential/q_dense/Cast_1Cast1DeepSetsInvQuantised/sequential/q_dense/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: Ж
8DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_3ReadVariableOpAdeepsetsinvquantised_sequential_q_dense_readvariableop_3_resource*
_output_shapes
: *
dtype0t
/DeepSetsInvQuantised/sequential/q_dense/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Aе
-DeepSetsInvQuantised/sequential/q_dense/mul_4Mul@DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_3:value:08DeepSetsInvQuantised/sequential/q_dense/mul_4/y:output:0*
T0*
_output_shapes
: Ш
1DeepSetsInvQuantised/sequential/q_dense/truediv_2RealDiv1DeepSetsInvQuantised/sequential/q_dense/mul_4:z:02DeepSetsInvQuantised/sequential/q_dense/Cast_1:y:0*
T0*
_output_shapes
: 
-DeepSetsInvQuantised/sequential/q_dense/Neg_2Neg5DeepSetsInvQuantised/sequential/q_dense/truediv_2:z:0*
T0*
_output_shapes
: 
/DeepSetsInvQuantised/sequential/q_dense/Round_1Round5DeepSetsInvQuantised/sequential/q_dense/truediv_2:z:0*
T0*
_output_shapes
: У
-DeepSetsInvQuantised/sequential/q_dense/add_4AddV21DeepSetsInvQuantised/sequential/q_dense/Neg_2:y:03DeepSetsInvQuantised/sequential/q_dense/Round_1:y:0*
T0*
_output_shapes
: 
6DeepSetsInvQuantised/sequential/q_dense/StopGradient_2StopGradient1DeepSetsInvQuantised/sequential/q_dense/add_4:z:0*
T0*
_output_shapes
: г
-DeepSetsInvQuantised/sequential/q_dense/add_5AddV25DeepSetsInvQuantised/sequential/q_dense/truediv_2:z:0?DeepSetsInvQuantised/sequential/q_dense/StopGradient_2:output:0*
T0*
_output_shapes
: 
ADeepSetsInvQuantised/sequential/q_dense/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAю
?DeepSetsInvQuantised/sequential/q_dense/clip_by_value_1/MinimumMinimum1DeepSetsInvQuantised/sequential/q_dense/add_5:z:0JDeepSetsInvQuantised/sequential/q_dense/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: ~
9DeepSetsInvQuantised/sequential/q_dense/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  С№
7DeepSetsInvQuantised/sequential/q_dense/clip_by_value_1MaximumCDeepSetsInvQuantised/sequential/q_dense/clip_by_value_1/Minimum:z:0BDeepSetsInvQuantised/sequential/q_dense/clip_by_value_1/y:output:0*
T0*
_output_shapes
: Ъ
-DeepSetsInvQuantised/sequential/q_dense/mul_5Mul2DeepSetsInvQuantised/sequential/q_dense/Cast_1:y:0;DeepSetsInvQuantised/sequential/q_dense/clip_by_value_1:z:0*
T0*
_output_shapes
: x
3DeepSetsInvQuantised/sequential/q_dense/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Aв
1DeepSetsInvQuantised/sequential/q_dense/truediv_3RealDiv1DeepSetsInvQuantised/sequential/q_dense/mul_5:z:0<DeepSetsInvQuantised/sequential/q_dense/truediv_3/y:output:0*
T0*
_output_shapes
: t
/DeepSetsInvQuantised/sequential/q_dense/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?Ъ
-DeepSetsInvQuantised/sequential/q_dense/mul_6Mul8DeepSetsInvQuantised/sequential/q_dense/mul_6/x:output:05DeepSetsInvQuantised/sequential/q_dense/truediv_3:z:0*
T0*
_output_shapes
: Ж
8DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_4ReadVariableOpAdeepsetsinvquantised_sequential_q_dense_readvariableop_3_resource*
_output_shapes
: *
dtype0
-DeepSetsInvQuantised/sequential/q_dense/Neg_3Neg@DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_4:value:0*
T0*
_output_shapes
: С
-DeepSetsInvQuantised/sequential/q_dense/add_6AddV21DeepSetsInvQuantised/sequential/q_dense/Neg_3:y:01DeepSetsInvQuantised/sequential/q_dense/mul_6:z:0*
T0*
_output_shapes
: t
/DeepSetsInvQuantised/sequential/q_dense/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?Ц
-DeepSetsInvQuantised/sequential/q_dense/mul_7Mul8DeepSetsInvQuantised/sequential/q_dense/mul_7/x:output:01DeepSetsInvQuantised/sequential/q_dense/add_6:z:0*
T0*
_output_shapes
: 
6DeepSetsInvQuantised/sequential/q_dense/StopGradient_3StopGradient1DeepSetsInvQuantised/sequential/q_dense/mul_7:z:0*
T0*
_output_shapes
: Ж
8DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_5ReadVariableOpAdeepsetsinvquantised_sequential_q_dense_readvariableop_3_resource*
_output_shapes
: *
dtype0о
-DeepSetsInvQuantised/sequential/q_dense/add_7AddV2@DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_5:value:0?DeepSetsInvQuantised/sequential/q_dense/StopGradient_3:output:0*
T0*
_output_shapes
: п
/DeepSetsInvQuantised/sequential/q_dense/BiasAddBiasAdd:DeepSetsInvQuantised/sequential/q_dense/Reshape_2:output:01DeepSetsInvQuantised/sequential/q_dense/add_7:z:0*
T0*+
_output_shapes
:џџџџџџџџџ t
2DeepSetsInvQuantised/sequential/q_activation/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :t
2DeepSetsInvQuantised/sequential/q_activation/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :в
0DeepSetsInvQuantised/sequential/q_activation/PowPow;DeepSetsInvQuantised/sequential/q_activation/Pow/x:output:0;DeepSetsInvQuantised/sequential/q_activation/Pow/y:output:0*
T0*
_output_shapes
: 
1DeepSetsInvQuantised/sequential/q_activation/CastCast4DeepSetsInvQuantised/sequential/q_activation/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: v
4DeepSetsInvQuantised/sequential/q_activation/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :v
4DeepSetsInvQuantised/sequential/q_activation/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : и
2DeepSetsInvQuantised/sequential/q_activation/Pow_1Pow=DeepSetsInvQuantised/sequential/q_activation/Pow_1/x:output:0=DeepSetsInvQuantised/sequential/q_activation/Pow_1/y:output:0*
T0*
_output_shapes
: Ѓ
3DeepSetsInvQuantised/sequential/q_activation/Cast_1Cast6DeepSetsInvQuantised/sequential/q_activation/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: w
2DeepSetsInvQuantised/sequential/q_activation/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *   @w
5DeepSetsInvQuantised/sequential/q_activation/Cast_2/xConst*
_output_shapes
: *
dtype0*
value	B : Ћ
3DeepSetsInvQuantised/sequential/q_activation/Cast_2Cast>DeepSetsInvQuantised/sequential/q_activation/Cast_2/x:output:0*

DstT0*

SrcT0*
_output_shapes
: w
2DeepSetsInvQuantised/sequential/q_activation/sub/yConst*
_output_shapes
: *
dtype0*
valueB
 *   AЮ
0DeepSetsInvQuantised/sequential/q_activation/subSub7DeepSetsInvQuantised/sequential/q_activation/Cast_2:y:0;DeepSetsInvQuantised/sequential/q_activation/sub/y:output:0*
T0*
_output_shapes
: Э
2DeepSetsInvQuantised/sequential/q_activation/Pow_2Pow;DeepSetsInvQuantised/sequential/q_activation/Const:output:04DeepSetsInvQuantised/sequential/q_activation/sub:z:0*
T0*
_output_shapes
: Ы
2DeepSetsInvQuantised/sequential/q_activation/sub_1Sub7DeepSetsInvQuantised/sequential/q_activation/Cast_1:y:06DeepSetsInvQuantised/sequential/q_activation/Pow_2:z:0*
T0*
_output_shapes
: ы
6DeepSetsInvQuantised/sequential/q_activation/LessEqual	LessEqual8DeepSetsInvQuantised/sequential/q_dense/BiasAdd:output:06DeepSetsInvQuantised/sequential/q_activation/sub_1:z:0*
T0*+
_output_shapes
:џџџџџџџџџ Љ
1DeepSetsInvQuantised/sequential/q_activation/ReluRelu8DeepSetsInvQuantised/sequential/q_dense/BiasAdd:output:0*
T0*+
_output_shapes
:џџџџџџџџџ Є
<DeepSetsInvQuantised/sequential/q_activation/ones_like/ShapeShape8DeepSetsInvQuantised/sequential/q_dense/BiasAdd:output:0*
T0*
_output_shapes
:
<DeepSetsInvQuantised/sequential/q_activation/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
6DeepSetsInvQuantised/sequential/q_activation/ones_likeFillEDeepSetsInvQuantised/sequential/q_activation/ones_like/Shape:output:0EDeepSetsInvQuantised/sequential/q_activation/ones_like/Const:output:0*
T0*+
_output_shapes
:џџџџџџџџџ Ы
2DeepSetsInvQuantised/sequential/q_activation/sub_2Sub7DeepSetsInvQuantised/sequential/q_activation/Cast_1:y:06DeepSetsInvQuantised/sequential/q_activation/Pow_2:z:0*
T0*
_output_shapes
: ц
0DeepSetsInvQuantised/sequential/q_activation/mulMul?DeepSetsInvQuantised/sequential/q_activation/ones_like:output:06DeepSetsInvQuantised/sequential/q_activation/sub_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ Њ
5DeepSetsInvQuantised/sequential/q_activation/SelectV2SelectV2:DeepSetsInvQuantised/sequential/q_activation/LessEqual:z:0?DeepSetsInvQuantised/sequential/q_activation/Relu:activations:04DeepSetsInvQuantised/sequential/q_activation/mul:z:0*
T0*+
_output_shapes
:џџџџџџџџџ р
2DeepSetsInvQuantised/sequential/q_activation/mul_1Mul8DeepSetsInvQuantised/sequential/q_dense/BiasAdd:output:05DeepSetsInvQuantised/sequential/q_activation/Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ ц
4DeepSetsInvQuantised/sequential/q_activation/truedivRealDiv6DeepSetsInvQuantised/sequential/q_activation/mul_1:z:07DeepSetsInvQuantised/sequential/q_activation/Cast_1:y:0*
T0*+
_output_shapes
:џџџџџџџџџ Ї
0DeepSetsInvQuantised/sequential/q_activation/NegNeg8DeepSetsInvQuantised/sequential/q_activation/truediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ Ћ
2DeepSetsInvQuantised/sequential/q_activation/RoundRound8DeepSetsInvQuantised/sequential/q_activation/truediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ н
0DeepSetsInvQuantised/sequential/q_activation/addAddV24DeepSetsInvQuantised/sequential/q_activation/Neg:y:06DeepSetsInvQuantised/sequential/q_activation/Round:y:0*
T0*+
_output_shapes
:џџџџџџџџџ Е
9DeepSetsInvQuantised/sequential/q_activation/StopGradientStopGradient4DeepSetsInvQuantised/sequential/q_activation/add:z:0*
T0*+
_output_shapes
:џџџџџџџџџ я
2DeepSetsInvQuantised/sequential/q_activation/add_1AddV28DeepSetsInvQuantised/sequential/q_activation/truediv:z:0BDeepSetsInvQuantised/sequential/q_activation/StopGradient:output:0*
T0*+
_output_shapes
:џџџџџџџџџ ц
6DeepSetsInvQuantised/sequential/q_activation/truediv_1RealDiv6DeepSetsInvQuantised/sequential/q_activation/add_1:z:05DeepSetsInvQuantised/sequential/q_activation/Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ }
8DeepSetsInvQuantised/sequential/q_activation/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?м
6DeepSetsInvQuantised/sequential/q_activation/truediv_2RealDivADeepSetsInvQuantised/sequential/q_activation/truediv_2/x:output:05DeepSetsInvQuantised/sequential/q_activation/Cast:y:0*
T0*
_output_shapes
: y
4DeepSetsInvQuantised/sequential/q_activation/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?е
2DeepSetsInvQuantised/sequential/q_activation/sub_3Sub=DeepSetsInvQuantised/sequential/q_activation/sub_3/x:output:0:DeepSetsInvQuantised/sequential/q_activation/truediv_2:z:0*
T0*
_output_shapes
: ї
BDeepSetsInvQuantised/sequential/q_activation/clip_by_value/MinimumMinimum:DeepSetsInvQuantised/sequential/q_activation/truediv_1:z:06DeepSetsInvQuantised/sequential/q_activation/sub_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
<DeepSetsInvQuantised/sequential/q_activation/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    
:DeepSetsInvQuantised/sequential/q_activation/clip_by_valueMaximumFDeepSetsInvQuantised/sequential/q_activation/clip_by_value/Minimum:z:0EDeepSetsInvQuantised/sequential/q_activation/clip_by_value/y:output:0*
T0*+
_output_shapes
:џџџџџџџџџ ш
2DeepSetsInvQuantised/sequential/q_activation/mul_2Mul7DeepSetsInvQuantised/sequential/q_activation/Cast_1:y:0>DeepSetsInvQuantised/sequential/q_activation/clip_by_value:z:0*
T0*+
_output_shapes
:џџџџџџџџџ Џ
2DeepSetsInvQuantised/sequential/q_activation/Neg_1Neg>DeepSetsInvQuantised/sequential/q_activation/SelectV2:output:0*
T0*+
_output_shapes
:џџџџџџџџџ с
2DeepSetsInvQuantised/sequential/q_activation/add_2AddV26DeepSetsInvQuantised/sequential/q_activation/Neg_1:y:06DeepSetsInvQuantised/sequential/q_activation/mul_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ y
4DeepSetsInvQuantised/sequential/q_activation/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?ц
2DeepSetsInvQuantised/sequential/q_activation/mul_3Mul=DeepSetsInvQuantised/sequential/q_activation/mul_3/x:output:06DeepSetsInvQuantised/sequential/q_activation/add_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ Й
;DeepSetsInvQuantised/sequential/q_activation/StopGradient_1StopGradient6DeepSetsInvQuantised/sequential/q_activation/mul_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ ї
2DeepSetsInvQuantised/sequential/q_activation/add_3AddV2>DeepSetsInvQuantised/sequential/q_activation/SelectV2:output:0DDeepSetsInvQuantised/sequential/q_activation/StopGradient_1:output:0*
T0*+
_output_shapes
:џџџџџџџџџ q
/DeepSetsInvQuantised/sequential/q_dense_1/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :q
/DeepSetsInvQuantised/sequential/q_dense_1/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : Щ
-DeepSetsInvQuantised/sequential/q_dense_1/PowPow8DeepSetsInvQuantised/sequential/q_dense_1/Pow/x:output:08DeepSetsInvQuantised/sequential/q_dense_1/Pow/y:output:0*
T0*
_output_shapes
: 
.DeepSetsInvQuantised/sequential/q_dense_1/CastCast1DeepSetsInvQuantised/sequential/q_dense_1/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: К
8DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOpReadVariableOpAdeepsetsinvquantised_sequential_q_dense_1_readvariableop_resource*
_output_shapes

:  *
dtype0t
/DeepSetsInvQuantised/sequential/q_dense_1/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Aй
-DeepSetsInvQuantised/sequential/q_dense_1/mulMul@DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp:value:08DeepSetsInvQuantised/sequential/q_dense_1/mul/y:output:0*
T0*
_output_shapes

:  Ь
1DeepSetsInvQuantised/sequential/q_dense_1/truedivRealDiv1DeepSetsInvQuantised/sequential/q_dense_1/mul:z:02DeepSetsInvQuantised/sequential/q_dense_1/Cast:y:0*
T0*
_output_shapes

:  
-DeepSetsInvQuantised/sequential/q_dense_1/NegNeg5DeepSetsInvQuantised/sequential/q_dense_1/truediv:z:0*
T0*
_output_shapes

:  
/DeepSetsInvQuantised/sequential/q_dense_1/RoundRound5DeepSetsInvQuantised/sequential/q_dense_1/truediv:z:0*
T0*
_output_shapes

:  Ч
-DeepSetsInvQuantised/sequential/q_dense_1/addAddV21DeepSetsInvQuantised/sequential/q_dense_1/Neg:y:03DeepSetsInvQuantised/sequential/q_dense_1/Round:y:0*
T0*
_output_shapes

:  Ђ
6DeepSetsInvQuantised/sequential/q_dense_1/StopGradientStopGradient1DeepSetsInvQuantised/sequential/q_dense_1/add:z:0*
T0*
_output_shapes

:  й
/DeepSetsInvQuantised/sequential/q_dense_1/add_1AddV25DeepSetsInvQuantised/sequential/q_dense_1/truediv:z:0?DeepSetsInvQuantised/sequential/q_dense_1/StopGradient:output:0*
T0*
_output_shapes

:  
ADeepSetsInvQuantised/sequential/q_dense_1/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAє
?DeepSetsInvQuantised/sequential/q_dense_1/clip_by_value/MinimumMinimum3DeepSetsInvQuantised/sequential/q_dense_1/add_1:z:0JDeepSetsInvQuantised/sequential/q_dense_1/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  ~
9DeepSetsInvQuantised/sequential/q_dense_1/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Сє
7DeepSetsInvQuantised/sequential/q_dense_1/clip_by_valueMaximumCDeepSetsInvQuantised/sequential/q_dense_1/clip_by_value/Minimum:z:0BDeepSetsInvQuantised/sequential/q_dense_1/clip_by_value/y:output:0*
T0*
_output_shapes

:  а
/DeepSetsInvQuantised/sequential/q_dense_1/mul_1Mul2DeepSetsInvQuantised/sequential/q_dense_1/Cast:y:0;DeepSetsInvQuantised/sequential/q_dense_1/clip_by_value:z:0*
T0*
_output_shapes

:  z
5DeepSetsInvQuantised/sequential/q_dense_1/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Aм
3DeepSetsInvQuantised/sequential/q_dense_1/truediv_1RealDiv3DeepSetsInvQuantised/sequential/q_dense_1/mul_1:z:0>DeepSetsInvQuantised/sequential/q_dense_1/truediv_1/y:output:0*
T0*
_output_shapes

:  v
1DeepSetsInvQuantised/sequential/q_dense_1/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?д
/DeepSetsInvQuantised/sequential/q_dense_1/mul_2Mul:DeepSetsInvQuantised/sequential/q_dense_1/mul_2/x:output:07DeepSetsInvQuantised/sequential/q_dense_1/truediv_1:z:0*
T0*
_output_shapes

:  М
:DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_1ReadVariableOpAdeepsetsinvquantised_sequential_q_dense_1_readvariableop_resource*
_output_shapes

:  *
dtype0Ѓ
/DeepSetsInvQuantised/sequential/q_dense_1/Neg_1NegBDeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  Ы
/DeepSetsInvQuantised/sequential/q_dense_1/add_2AddV23DeepSetsInvQuantised/sequential/q_dense_1/Neg_1:y:03DeepSetsInvQuantised/sequential/q_dense_1/mul_2:z:0*
T0*
_output_shapes

:  v
1DeepSetsInvQuantised/sequential/q_dense_1/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?а
/DeepSetsInvQuantised/sequential/q_dense_1/mul_3Mul:DeepSetsInvQuantised/sequential/q_dense_1/mul_3/x:output:03DeepSetsInvQuantised/sequential/q_dense_1/add_2:z:0*
T0*
_output_shapes

:  І
8DeepSetsInvQuantised/sequential/q_dense_1/StopGradient_1StopGradient3DeepSetsInvQuantised/sequential/q_dense_1/mul_3:z:0*
T0*
_output_shapes

:  М
:DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_2ReadVariableOpAdeepsetsinvquantised_sequential_q_dense_1_readvariableop_resource*
_output_shapes

:  *
dtype0ш
/DeepSetsInvQuantised/sequential/q_dense_1/add_3AddV2BDeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_2:value:0ADeepSetsInvQuantised/sequential/q_dense_1/StopGradient_1:output:0*
T0*
_output_shapes

:  
/DeepSetsInvQuantised/sequential/q_dense_1/ShapeShape6DeepSetsInvQuantised/sequential/q_activation/add_3:z:0*
T0*
_output_shapes
:Ѕ
1DeepSetsInvQuantised/sequential/q_dense_1/unstackUnpack8DeepSetsInvQuantised/sequential/q_dense_1/Shape:output:0*
T0*
_output_shapes
: : : *	
num
1DeepSetsInvQuantised/sequential/q_dense_1/Shape_1Const*
_output_shapes
:*
dtype0*
valueB"        Ї
3DeepSetsInvQuantised/sequential/q_dense_1/unstack_1Unpack:DeepSetsInvQuantised/sequential/q_dense_1/Shape_1:output:0*
T0*
_output_shapes
: : *	
num
7DeepSetsInvQuantised/sequential/q_dense_1/Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB"џџџџ    ш
1DeepSetsInvQuantised/sequential/q_dense_1/ReshapeReshape6DeepSetsInvQuantised/sequential/q_activation/add_3:z:0@DeepSetsInvQuantised/sequential/q_dense_1/Reshape/shape:output:0*
T0*'
_output_shapes
:џџџџџџџџџ 
8DeepSetsInvQuantised/sequential/q_dense_1/transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       с
3DeepSetsInvQuantised/sequential/q_dense_1/transpose	Transpose3DeepSetsInvQuantised/sequential/q_dense_1/add_3:z:0ADeepSetsInvQuantised/sequential/q_dense_1/transpose/perm:output:0*
T0*
_output_shapes

:  
9DeepSetsInvQuantised/sequential/q_dense_1/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"    џџџџф
3DeepSetsInvQuantised/sequential/q_dense_1/Reshape_1Reshape7DeepSetsInvQuantised/sequential/q_dense_1/transpose:y:0BDeepSetsInvQuantised/sequential/q_dense_1/Reshape_1/shape:output:0*
T0*
_output_shapes

:  ц
0DeepSetsInvQuantised/sequential/q_dense_1/MatMulMatMul:DeepSetsInvQuantised/sequential/q_dense_1/Reshape:output:0<DeepSetsInvQuantised/sequential/q_dense_1/Reshape_1:output:0*
T0*'
_output_shapes
:џџџџџџџџџ }
;DeepSetsInvQuantised/sequential/q_dense_1/Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :}
;DeepSetsInvQuantised/sequential/q_dense_1/Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : З
9DeepSetsInvQuantised/sequential/q_dense_1/Reshape_2/shapePack:DeepSetsInvQuantised/sequential/q_dense_1/unstack:output:0DDeepSetsInvQuantised/sequential/q_dense_1/Reshape_2/shape/1:output:0DDeepSetsInvQuantised/sequential/q_dense_1/Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:є
3DeepSetsInvQuantised/sequential/q_dense_1/Reshape_2Reshape:DeepSetsInvQuantised/sequential/q_dense_1/MatMul:product:0BDeepSetsInvQuantised/sequential/q_dense_1/Reshape_2/shape:output:0*
T0*+
_output_shapes
:џџџџџџџџџ s
1DeepSetsInvQuantised/sequential/q_dense_1/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :s
1DeepSetsInvQuantised/sequential/q_dense_1/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Я
/DeepSetsInvQuantised/sequential/q_dense_1/Pow_1Pow:DeepSetsInvQuantised/sequential/q_dense_1/Pow_1/x:output:0:DeepSetsInvQuantised/sequential/q_dense_1/Pow_1/y:output:0*
T0*
_output_shapes
: 
0DeepSetsInvQuantised/sequential/q_dense_1/Cast_1Cast3DeepSetsInvQuantised/sequential/q_dense_1/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: К
:DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_3ReadVariableOpCdeepsetsinvquantised_sequential_q_dense_1_readvariableop_3_resource*
_output_shapes
: *
dtype0v
1DeepSetsInvQuantised/sequential/q_dense_1/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Aл
/DeepSetsInvQuantised/sequential/q_dense_1/mul_4MulBDeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_3:value:0:DeepSetsInvQuantised/sequential/q_dense_1/mul_4/y:output:0*
T0*
_output_shapes
: Ю
3DeepSetsInvQuantised/sequential/q_dense_1/truediv_2RealDiv3DeepSetsInvQuantised/sequential/q_dense_1/mul_4:z:04DeepSetsInvQuantised/sequential/q_dense_1/Cast_1:y:0*
T0*
_output_shapes
: 
/DeepSetsInvQuantised/sequential/q_dense_1/Neg_2Neg7DeepSetsInvQuantised/sequential/q_dense_1/truediv_2:z:0*
T0*
_output_shapes
: 
1DeepSetsInvQuantised/sequential/q_dense_1/Round_1Round7DeepSetsInvQuantised/sequential/q_dense_1/truediv_2:z:0*
T0*
_output_shapes
: Щ
/DeepSetsInvQuantised/sequential/q_dense_1/add_4AddV23DeepSetsInvQuantised/sequential/q_dense_1/Neg_2:y:05DeepSetsInvQuantised/sequential/q_dense_1/Round_1:y:0*
T0*
_output_shapes
: Ђ
8DeepSetsInvQuantised/sequential/q_dense_1/StopGradient_2StopGradient3DeepSetsInvQuantised/sequential/q_dense_1/add_4:z:0*
T0*
_output_shapes
: й
/DeepSetsInvQuantised/sequential/q_dense_1/add_5AddV27DeepSetsInvQuantised/sequential/q_dense_1/truediv_2:z:0ADeepSetsInvQuantised/sequential/q_dense_1/StopGradient_2:output:0*
T0*
_output_shapes
: 
CDeepSetsInvQuantised/sequential/q_dense_1/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAє
ADeepSetsInvQuantised/sequential/q_dense_1/clip_by_value_1/MinimumMinimum3DeepSetsInvQuantised/sequential/q_dense_1/add_5:z:0LDeepSetsInvQuantised/sequential/q_dense_1/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: 
;DeepSetsInvQuantised/sequential/q_dense_1/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Сі
9DeepSetsInvQuantised/sequential/q_dense_1/clip_by_value_1MaximumEDeepSetsInvQuantised/sequential/q_dense_1/clip_by_value_1/Minimum:z:0DDeepSetsInvQuantised/sequential/q_dense_1/clip_by_value_1/y:output:0*
T0*
_output_shapes
: а
/DeepSetsInvQuantised/sequential/q_dense_1/mul_5Mul4DeepSetsInvQuantised/sequential/q_dense_1/Cast_1:y:0=DeepSetsInvQuantised/sequential/q_dense_1/clip_by_value_1:z:0*
T0*
_output_shapes
: z
5DeepSetsInvQuantised/sequential/q_dense_1/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Aи
3DeepSetsInvQuantised/sequential/q_dense_1/truediv_3RealDiv3DeepSetsInvQuantised/sequential/q_dense_1/mul_5:z:0>DeepSetsInvQuantised/sequential/q_dense_1/truediv_3/y:output:0*
T0*
_output_shapes
: v
1DeepSetsInvQuantised/sequential/q_dense_1/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?а
/DeepSetsInvQuantised/sequential/q_dense_1/mul_6Mul:DeepSetsInvQuantised/sequential/q_dense_1/mul_6/x:output:07DeepSetsInvQuantised/sequential/q_dense_1/truediv_3:z:0*
T0*
_output_shapes
: К
:DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_4ReadVariableOpCdeepsetsinvquantised_sequential_q_dense_1_readvariableop_3_resource*
_output_shapes
: *
dtype0
/DeepSetsInvQuantised/sequential/q_dense_1/Neg_3NegBDeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_4:value:0*
T0*
_output_shapes
: Ч
/DeepSetsInvQuantised/sequential/q_dense_1/add_6AddV23DeepSetsInvQuantised/sequential/q_dense_1/Neg_3:y:03DeepSetsInvQuantised/sequential/q_dense_1/mul_6:z:0*
T0*
_output_shapes
: v
1DeepSetsInvQuantised/sequential/q_dense_1/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?Ь
/DeepSetsInvQuantised/sequential/q_dense_1/mul_7Mul:DeepSetsInvQuantised/sequential/q_dense_1/mul_7/x:output:03DeepSetsInvQuantised/sequential/q_dense_1/add_6:z:0*
T0*
_output_shapes
: Ђ
8DeepSetsInvQuantised/sequential/q_dense_1/StopGradient_3StopGradient3DeepSetsInvQuantised/sequential/q_dense_1/mul_7:z:0*
T0*
_output_shapes
: К
:DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_5ReadVariableOpCdeepsetsinvquantised_sequential_q_dense_1_readvariableop_3_resource*
_output_shapes
: *
dtype0ф
/DeepSetsInvQuantised/sequential/q_dense_1/add_7AddV2BDeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_5:value:0ADeepSetsInvQuantised/sequential/q_dense_1/StopGradient_3:output:0*
T0*
_output_shapes
: х
1DeepSetsInvQuantised/sequential/q_dense_1/BiasAddBiasAdd<DeepSetsInvQuantised/sequential/q_dense_1/Reshape_2:output:03DeepSetsInvQuantised/sequential/q_dense_1/add_7:z:0*
T0*+
_output_shapes
:џџџџџџџџџ v
4DeepSetsInvQuantised/sequential/q_activation_1/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :v
4DeepSetsInvQuantised/sequential/q_activation_1/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :и
2DeepSetsInvQuantised/sequential/q_activation_1/PowPow=DeepSetsInvQuantised/sequential/q_activation_1/Pow/x:output:0=DeepSetsInvQuantised/sequential/q_activation_1/Pow/y:output:0*
T0*
_output_shapes
: Ѓ
3DeepSetsInvQuantised/sequential/q_activation_1/CastCast6DeepSetsInvQuantised/sequential/q_activation_1/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: x
6DeepSetsInvQuantised/sequential/q_activation_1/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :x
6DeepSetsInvQuantised/sequential/q_activation_1/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : о
4DeepSetsInvQuantised/sequential/q_activation_1/Pow_1Pow?DeepSetsInvQuantised/sequential/q_activation_1/Pow_1/x:output:0?DeepSetsInvQuantised/sequential/q_activation_1/Pow_1/y:output:0*
T0*
_output_shapes
: Ї
5DeepSetsInvQuantised/sequential/q_activation_1/Cast_1Cast8DeepSetsInvQuantised/sequential/q_activation_1/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: y
4DeepSetsInvQuantised/sequential/q_activation_1/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *   @y
7DeepSetsInvQuantised/sequential/q_activation_1/Cast_2/xConst*
_output_shapes
: *
dtype0*
value	B : Џ
5DeepSetsInvQuantised/sequential/q_activation_1/Cast_2Cast@DeepSetsInvQuantised/sequential/q_activation_1/Cast_2/x:output:0*

DstT0*

SrcT0*
_output_shapes
: y
4DeepSetsInvQuantised/sequential/q_activation_1/sub/yConst*
_output_shapes
: *
dtype0*
valueB
 *   Aд
2DeepSetsInvQuantised/sequential/q_activation_1/subSub9DeepSetsInvQuantised/sequential/q_activation_1/Cast_2:y:0=DeepSetsInvQuantised/sequential/q_activation_1/sub/y:output:0*
T0*
_output_shapes
: г
4DeepSetsInvQuantised/sequential/q_activation_1/Pow_2Pow=DeepSetsInvQuantised/sequential/q_activation_1/Const:output:06DeepSetsInvQuantised/sequential/q_activation_1/sub:z:0*
T0*
_output_shapes
: б
4DeepSetsInvQuantised/sequential/q_activation_1/sub_1Sub9DeepSetsInvQuantised/sequential/q_activation_1/Cast_1:y:08DeepSetsInvQuantised/sequential/q_activation_1/Pow_2:z:0*
T0*
_output_shapes
: ё
8DeepSetsInvQuantised/sequential/q_activation_1/LessEqual	LessEqual:DeepSetsInvQuantised/sequential/q_dense_1/BiasAdd:output:08DeepSetsInvQuantised/sequential/q_activation_1/sub_1:z:0*
T0*+
_output_shapes
:џџџџџџџџџ ­
3DeepSetsInvQuantised/sequential/q_activation_1/ReluRelu:DeepSetsInvQuantised/sequential/q_dense_1/BiasAdd:output:0*
T0*+
_output_shapes
:џџџџџџџџџ Ј
>DeepSetsInvQuantised/sequential/q_activation_1/ones_like/ShapeShape:DeepSetsInvQuantised/sequential/q_dense_1/BiasAdd:output:0*
T0*
_output_shapes
:
>DeepSetsInvQuantised/sequential/q_activation_1/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
8DeepSetsInvQuantised/sequential/q_activation_1/ones_likeFillGDeepSetsInvQuantised/sequential/q_activation_1/ones_like/Shape:output:0GDeepSetsInvQuantised/sequential/q_activation_1/ones_like/Const:output:0*
T0*+
_output_shapes
:џџџџџџџџџ б
4DeepSetsInvQuantised/sequential/q_activation_1/sub_2Sub9DeepSetsInvQuantised/sequential/q_activation_1/Cast_1:y:08DeepSetsInvQuantised/sequential/q_activation_1/Pow_2:z:0*
T0*
_output_shapes
: ь
2DeepSetsInvQuantised/sequential/q_activation_1/mulMulADeepSetsInvQuantised/sequential/q_activation_1/ones_like:output:08DeepSetsInvQuantised/sequential/q_activation_1/sub_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ В
7DeepSetsInvQuantised/sequential/q_activation_1/SelectV2SelectV2<DeepSetsInvQuantised/sequential/q_activation_1/LessEqual:z:0ADeepSetsInvQuantised/sequential/q_activation_1/Relu:activations:06DeepSetsInvQuantised/sequential/q_activation_1/mul:z:0*
T0*+
_output_shapes
:џџџџџџџџџ ц
4DeepSetsInvQuantised/sequential/q_activation_1/mul_1Mul:DeepSetsInvQuantised/sequential/q_dense_1/BiasAdd:output:07DeepSetsInvQuantised/sequential/q_activation_1/Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ ь
6DeepSetsInvQuantised/sequential/q_activation_1/truedivRealDiv8DeepSetsInvQuantised/sequential/q_activation_1/mul_1:z:09DeepSetsInvQuantised/sequential/q_activation_1/Cast_1:y:0*
T0*+
_output_shapes
:џџџџџџџџџ Ћ
2DeepSetsInvQuantised/sequential/q_activation_1/NegNeg:DeepSetsInvQuantised/sequential/q_activation_1/truediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ Џ
4DeepSetsInvQuantised/sequential/q_activation_1/RoundRound:DeepSetsInvQuantised/sequential/q_activation_1/truediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ у
2DeepSetsInvQuantised/sequential/q_activation_1/addAddV26DeepSetsInvQuantised/sequential/q_activation_1/Neg:y:08DeepSetsInvQuantised/sequential/q_activation_1/Round:y:0*
T0*+
_output_shapes
:џџџџџџџџџ Й
;DeepSetsInvQuantised/sequential/q_activation_1/StopGradientStopGradient6DeepSetsInvQuantised/sequential/q_activation_1/add:z:0*
T0*+
_output_shapes
:џџџџџџџџџ ѕ
4DeepSetsInvQuantised/sequential/q_activation_1/add_1AddV2:DeepSetsInvQuantised/sequential/q_activation_1/truediv:z:0DDeepSetsInvQuantised/sequential/q_activation_1/StopGradient:output:0*
T0*+
_output_shapes
:џџџџџџџџџ ь
8DeepSetsInvQuantised/sequential/q_activation_1/truediv_1RealDiv8DeepSetsInvQuantised/sequential/q_activation_1/add_1:z:07DeepSetsInvQuantised/sequential/q_activation_1/Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ 
:DeepSetsInvQuantised/sequential/q_activation_1/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?т
8DeepSetsInvQuantised/sequential/q_activation_1/truediv_2RealDivCDeepSetsInvQuantised/sequential/q_activation_1/truediv_2/x:output:07DeepSetsInvQuantised/sequential/q_activation_1/Cast:y:0*
T0*
_output_shapes
: {
6DeepSetsInvQuantised/sequential/q_activation_1/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?л
4DeepSetsInvQuantised/sequential/q_activation_1/sub_3Sub?DeepSetsInvQuantised/sequential/q_activation_1/sub_3/x:output:0<DeepSetsInvQuantised/sequential/q_activation_1/truediv_2:z:0*
T0*
_output_shapes
: §
DDeepSetsInvQuantised/sequential/q_activation_1/clip_by_value/MinimumMinimum<DeepSetsInvQuantised/sequential/q_activation_1/truediv_1:z:08DeepSetsInvQuantised/sequential/q_activation_1/sub_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
>DeepSetsInvQuantised/sequential/q_activation_1/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    
<DeepSetsInvQuantised/sequential/q_activation_1/clip_by_valueMaximumHDeepSetsInvQuantised/sequential/q_activation_1/clip_by_value/Minimum:z:0GDeepSetsInvQuantised/sequential/q_activation_1/clip_by_value/y:output:0*
T0*+
_output_shapes
:џџџџџџџџџ ю
4DeepSetsInvQuantised/sequential/q_activation_1/mul_2Mul9DeepSetsInvQuantised/sequential/q_activation_1/Cast_1:y:0@DeepSetsInvQuantised/sequential/q_activation_1/clip_by_value:z:0*
T0*+
_output_shapes
:џџџџџџџџџ Г
4DeepSetsInvQuantised/sequential/q_activation_1/Neg_1Neg@DeepSetsInvQuantised/sequential/q_activation_1/SelectV2:output:0*
T0*+
_output_shapes
:џџџџџџџџџ ч
4DeepSetsInvQuantised/sequential/q_activation_1/add_2AddV28DeepSetsInvQuantised/sequential/q_activation_1/Neg_1:y:08DeepSetsInvQuantised/sequential/q_activation_1/mul_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ {
6DeepSetsInvQuantised/sequential/q_activation_1/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?ь
4DeepSetsInvQuantised/sequential/q_activation_1/mul_3Mul?DeepSetsInvQuantised/sequential/q_activation_1/mul_3/x:output:08DeepSetsInvQuantised/sequential/q_activation_1/add_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ Н
=DeepSetsInvQuantised/sequential/q_activation_1/StopGradient_1StopGradient8DeepSetsInvQuantised/sequential/q_activation_1/mul_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ §
4DeepSetsInvQuantised/sequential/q_activation_1/add_3AddV2@DeepSetsInvQuantised/sequential/q_activation_1/SelectV2:output:0FDeepSetsInvQuantised/sequential/q_activation_1/StopGradient_1:output:0*
T0*+
_output_shapes
:џџџџџџџџџ q
/DeepSetsInvQuantised/sequential/q_dense_2/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :q
/DeepSetsInvQuantised/sequential/q_dense_2/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : Щ
-DeepSetsInvQuantised/sequential/q_dense_2/PowPow8DeepSetsInvQuantised/sequential/q_dense_2/Pow/x:output:08DeepSetsInvQuantised/sequential/q_dense_2/Pow/y:output:0*
T0*
_output_shapes
: 
.DeepSetsInvQuantised/sequential/q_dense_2/CastCast1DeepSetsInvQuantised/sequential/q_dense_2/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: К
8DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOpReadVariableOpAdeepsetsinvquantised_sequential_q_dense_2_readvariableop_resource*
_output_shapes

:  *
dtype0t
/DeepSetsInvQuantised/sequential/q_dense_2/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Aй
-DeepSetsInvQuantised/sequential/q_dense_2/mulMul@DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp:value:08DeepSetsInvQuantised/sequential/q_dense_2/mul/y:output:0*
T0*
_output_shapes

:  Ь
1DeepSetsInvQuantised/sequential/q_dense_2/truedivRealDiv1DeepSetsInvQuantised/sequential/q_dense_2/mul:z:02DeepSetsInvQuantised/sequential/q_dense_2/Cast:y:0*
T0*
_output_shapes

:  
-DeepSetsInvQuantised/sequential/q_dense_2/NegNeg5DeepSetsInvQuantised/sequential/q_dense_2/truediv:z:0*
T0*
_output_shapes

:  
/DeepSetsInvQuantised/sequential/q_dense_2/RoundRound5DeepSetsInvQuantised/sequential/q_dense_2/truediv:z:0*
T0*
_output_shapes

:  Ч
-DeepSetsInvQuantised/sequential/q_dense_2/addAddV21DeepSetsInvQuantised/sequential/q_dense_2/Neg:y:03DeepSetsInvQuantised/sequential/q_dense_2/Round:y:0*
T0*
_output_shapes

:  Ђ
6DeepSetsInvQuantised/sequential/q_dense_2/StopGradientStopGradient1DeepSetsInvQuantised/sequential/q_dense_2/add:z:0*
T0*
_output_shapes

:  й
/DeepSetsInvQuantised/sequential/q_dense_2/add_1AddV25DeepSetsInvQuantised/sequential/q_dense_2/truediv:z:0?DeepSetsInvQuantised/sequential/q_dense_2/StopGradient:output:0*
T0*
_output_shapes

:  
ADeepSetsInvQuantised/sequential/q_dense_2/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAє
?DeepSetsInvQuantised/sequential/q_dense_2/clip_by_value/MinimumMinimum3DeepSetsInvQuantised/sequential/q_dense_2/add_1:z:0JDeepSetsInvQuantised/sequential/q_dense_2/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  ~
9DeepSetsInvQuantised/sequential/q_dense_2/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Сє
7DeepSetsInvQuantised/sequential/q_dense_2/clip_by_valueMaximumCDeepSetsInvQuantised/sequential/q_dense_2/clip_by_value/Minimum:z:0BDeepSetsInvQuantised/sequential/q_dense_2/clip_by_value/y:output:0*
T0*
_output_shapes

:  а
/DeepSetsInvQuantised/sequential/q_dense_2/mul_1Mul2DeepSetsInvQuantised/sequential/q_dense_2/Cast:y:0;DeepSetsInvQuantised/sequential/q_dense_2/clip_by_value:z:0*
T0*
_output_shapes

:  z
5DeepSetsInvQuantised/sequential/q_dense_2/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Aм
3DeepSetsInvQuantised/sequential/q_dense_2/truediv_1RealDiv3DeepSetsInvQuantised/sequential/q_dense_2/mul_1:z:0>DeepSetsInvQuantised/sequential/q_dense_2/truediv_1/y:output:0*
T0*
_output_shapes

:  v
1DeepSetsInvQuantised/sequential/q_dense_2/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?д
/DeepSetsInvQuantised/sequential/q_dense_2/mul_2Mul:DeepSetsInvQuantised/sequential/q_dense_2/mul_2/x:output:07DeepSetsInvQuantised/sequential/q_dense_2/truediv_1:z:0*
T0*
_output_shapes

:  М
:DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_1ReadVariableOpAdeepsetsinvquantised_sequential_q_dense_2_readvariableop_resource*
_output_shapes

:  *
dtype0Ѓ
/DeepSetsInvQuantised/sequential/q_dense_2/Neg_1NegBDeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  Ы
/DeepSetsInvQuantised/sequential/q_dense_2/add_2AddV23DeepSetsInvQuantised/sequential/q_dense_2/Neg_1:y:03DeepSetsInvQuantised/sequential/q_dense_2/mul_2:z:0*
T0*
_output_shapes

:  v
1DeepSetsInvQuantised/sequential/q_dense_2/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?а
/DeepSetsInvQuantised/sequential/q_dense_2/mul_3Mul:DeepSetsInvQuantised/sequential/q_dense_2/mul_3/x:output:03DeepSetsInvQuantised/sequential/q_dense_2/add_2:z:0*
T0*
_output_shapes

:  І
8DeepSetsInvQuantised/sequential/q_dense_2/StopGradient_1StopGradient3DeepSetsInvQuantised/sequential/q_dense_2/mul_3:z:0*
T0*
_output_shapes

:  М
:DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_2ReadVariableOpAdeepsetsinvquantised_sequential_q_dense_2_readvariableop_resource*
_output_shapes

:  *
dtype0ш
/DeepSetsInvQuantised/sequential/q_dense_2/add_3AddV2BDeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_2:value:0ADeepSetsInvQuantised/sequential/q_dense_2/StopGradient_1:output:0*
T0*
_output_shapes

:  
/DeepSetsInvQuantised/sequential/q_dense_2/ShapeShape8DeepSetsInvQuantised/sequential/q_activation_1/add_3:z:0*
T0*
_output_shapes
:Ѕ
1DeepSetsInvQuantised/sequential/q_dense_2/unstackUnpack8DeepSetsInvQuantised/sequential/q_dense_2/Shape:output:0*
T0*
_output_shapes
: : : *	
num
1DeepSetsInvQuantised/sequential/q_dense_2/Shape_1Const*
_output_shapes
:*
dtype0*
valueB"        Ї
3DeepSetsInvQuantised/sequential/q_dense_2/unstack_1Unpack:DeepSetsInvQuantised/sequential/q_dense_2/Shape_1:output:0*
T0*
_output_shapes
: : *	
num
7DeepSetsInvQuantised/sequential/q_dense_2/Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB"џџџџ    ъ
1DeepSetsInvQuantised/sequential/q_dense_2/ReshapeReshape8DeepSetsInvQuantised/sequential/q_activation_1/add_3:z:0@DeepSetsInvQuantised/sequential/q_dense_2/Reshape/shape:output:0*
T0*'
_output_shapes
:џџџџџџџџџ 
8DeepSetsInvQuantised/sequential/q_dense_2/transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       с
3DeepSetsInvQuantised/sequential/q_dense_2/transpose	Transpose3DeepSetsInvQuantised/sequential/q_dense_2/add_3:z:0ADeepSetsInvQuantised/sequential/q_dense_2/transpose/perm:output:0*
T0*
_output_shapes

:  
9DeepSetsInvQuantised/sequential/q_dense_2/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"    џџџџф
3DeepSetsInvQuantised/sequential/q_dense_2/Reshape_1Reshape7DeepSetsInvQuantised/sequential/q_dense_2/transpose:y:0BDeepSetsInvQuantised/sequential/q_dense_2/Reshape_1/shape:output:0*
T0*
_output_shapes

:  ц
0DeepSetsInvQuantised/sequential/q_dense_2/MatMulMatMul:DeepSetsInvQuantised/sequential/q_dense_2/Reshape:output:0<DeepSetsInvQuantised/sequential/q_dense_2/Reshape_1:output:0*
T0*'
_output_shapes
:џџџџџџџџџ }
;DeepSetsInvQuantised/sequential/q_dense_2/Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :}
;DeepSetsInvQuantised/sequential/q_dense_2/Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : З
9DeepSetsInvQuantised/sequential/q_dense_2/Reshape_2/shapePack:DeepSetsInvQuantised/sequential/q_dense_2/unstack:output:0DDeepSetsInvQuantised/sequential/q_dense_2/Reshape_2/shape/1:output:0DDeepSetsInvQuantised/sequential/q_dense_2/Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:є
3DeepSetsInvQuantised/sequential/q_dense_2/Reshape_2Reshape:DeepSetsInvQuantised/sequential/q_dense_2/MatMul:product:0BDeepSetsInvQuantised/sequential/q_dense_2/Reshape_2/shape:output:0*
T0*+
_output_shapes
:џџџџџџџџџ s
1DeepSetsInvQuantised/sequential/q_dense_2/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :s
1DeepSetsInvQuantised/sequential/q_dense_2/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Я
/DeepSetsInvQuantised/sequential/q_dense_2/Pow_1Pow:DeepSetsInvQuantised/sequential/q_dense_2/Pow_1/x:output:0:DeepSetsInvQuantised/sequential/q_dense_2/Pow_1/y:output:0*
T0*
_output_shapes
: 
0DeepSetsInvQuantised/sequential/q_dense_2/Cast_1Cast3DeepSetsInvQuantised/sequential/q_dense_2/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: К
:DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_3ReadVariableOpCdeepsetsinvquantised_sequential_q_dense_2_readvariableop_3_resource*
_output_shapes
: *
dtype0v
1DeepSetsInvQuantised/sequential/q_dense_2/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Aл
/DeepSetsInvQuantised/sequential/q_dense_2/mul_4MulBDeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_3:value:0:DeepSetsInvQuantised/sequential/q_dense_2/mul_4/y:output:0*
T0*
_output_shapes
: Ю
3DeepSetsInvQuantised/sequential/q_dense_2/truediv_2RealDiv3DeepSetsInvQuantised/sequential/q_dense_2/mul_4:z:04DeepSetsInvQuantised/sequential/q_dense_2/Cast_1:y:0*
T0*
_output_shapes
: 
/DeepSetsInvQuantised/sequential/q_dense_2/Neg_2Neg7DeepSetsInvQuantised/sequential/q_dense_2/truediv_2:z:0*
T0*
_output_shapes
: 
1DeepSetsInvQuantised/sequential/q_dense_2/Round_1Round7DeepSetsInvQuantised/sequential/q_dense_2/truediv_2:z:0*
T0*
_output_shapes
: Щ
/DeepSetsInvQuantised/sequential/q_dense_2/add_4AddV23DeepSetsInvQuantised/sequential/q_dense_2/Neg_2:y:05DeepSetsInvQuantised/sequential/q_dense_2/Round_1:y:0*
T0*
_output_shapes
: Ђ
8DeepSetsInvQuantised/sequential/q_dense_2/StopGradient_2StopGradient3DeepSetsInvQuantised/sequential/q_dense_2/add_4:z:0*
T0*
_output_shapes
: й
/DeepSetsInvQuantised/sequential/q_dense_2/add_5AddV27DeepSetsInvQuantised/sequential/q_dense_2/truediv_2:z:0ADeepSetsInvQuantised/sequential/q_dense_2/StopGradient_2:output:0*
T0*
_output_shapes
: 
CDeepSetsInvQuantised/sequential/q_dense_2/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAє
ADeepSetsInvQuantised/sequential/q_dense_2/clip_by_value_1/MinimumMinimum3DeepSetsInvQuantised/sequential/q_dense_2/add_5:z:0LDeepSetsInvQuantised/sequential/q_dense_2/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: 
;DeepSetsInvQuantised/sequential/q_dense_2/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Сі
9DeepSetsInvQuantised/sequential/q_dense_2/clip_by_value_1MaximumEDeepSetsInvQuantised/sequential/q_dense_2/clip_by_value_1/Minimum:z:0DDeepSetsInvQuantised/sequential/q_dense_2/clip_by_value_1/y:output:0*
T0*
_output_shapes
: а
/DeepSetsInvQuantised/sequential/q_dense_2/mul_5Mul4DeepSetsInvQuantised/sequential/q_dense_2/Cast_1:y:0=DeepSetsInvQuantised/sequential/q_dense_2/clip_by_value_1:z:0*
T0*
_output_shapes
: z
5DeepSetsInvQuantised/sequential/q_dense_2/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Aи
3DeepSetsInvQuantised/sequential/q_dense_2/truediv_3RealDiv3DeepSetsInvQuantised/sequential/q_dense_2/mul_5:z:0>DeepSetsInvQuantised/sequential/q_dense_2/truediv_3/y:output:0*
T0*
_output_shapes
: v
1DeepSetsInvQuantised/sequential/q_dense_2/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?а
/DeepSetsInvQuantised/sequential/q_dense_2/mul_6Mul:DeepSetsInvQuantised/sequential/q_dense_2/mul_6/x:output:07DeepSetsInvQuantised/sequential/q_dense_2/truediv_3:z:0*
T0*
_output_shapes
: К
:DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_4ReadVariableOpCdeepsetsinvquantised_sequential_q_dense_2_readvariableop_3_resource*
_output_shapes
: *
dtype0
/DeepSetsInvQuantised/sequential/q_dense_2/Neg_3NegBDeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_4:value:0*
T0*
_output_shapes
: Ч
/DeepSetsInvQuantised/sequential/q_dense_2/add_6AddV23DeepSetsInvQuantised/sequential/q_dense_2/Neg_3:y:03DeepSetsInvQuantised/sequential/q_dense_2/mul_6:z:0*
T0*
_output_shapes
: v
1DeepSetsInvQuantised/sequential/q_dense_2/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?Ь
/DeepSetsInvQuantised/sequential/q_dense_2/mul_7Mul:DeepSetsInvQuantised/sequential/q_dense_2/mul_7/x:output:03DeepSetsInvQuantised/sequential/q_dense_2/add_6:z:0*
T0*
_output_shapes
: Ђ
8DeepSetsInvQuantised/sequential/q_dense_2/StopGradient_3StopGradient3DeepSetsInvQuantised/sequential/q_dense_2/mul_7:z:0*
T0*
_output_shapes
: К
:DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_5ReadVariableOpCdeepsetsinvquantised_sequential_q_dense_2_readvariableop_3_resource*
_output_shapes
: *
dtype0ф
/DeepSetsInvQuantised/sequential/q_dense_2/add_7AddV2BDeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_5:value:0ADeepSetsInvQuantised/sequential/q_dense_2/StopGradient_3:output:0*
T0*
_output_shapes
: х
1DeepSetsInvQuantised/sequential/q_dense_2/BiasAddBiasAdd<DeepSetsInvQuantised/sequential/q_dense_2/Reshape_2:output:03DeepSetsInvQuantised/sequential/q_dense_2/add_7:z:0*
T0*+
_output_shapes
:џџџџџџџџџ v
4DeepSetsInvQuantised/sequential/q_activation_2/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :v
4DeepSetsInvQuantised/sequential/q_activation_2/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :и
2DeepSetsInvQuantised/sequential/q_activation_2/PowPow=DeepSetsInvQuantised/sequential/q_activation_2/Pow/x:output:0=DeepSetsInvQuantised/sequential/q_activation_2/Pow/y:output:0*
T0*
_output_shapes
: Ѓ
3DeepSetsInvQuantised/sequential/q_activation_2/CastCast6DeepSetsInvQuantised/sequential/q_activation_2/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: x
6DeepSetsInvQuantised/sequential/q_activation_2/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :x
6DeepSetsInvQuantised/sequential/q_activation_2/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : о
4DeepSetsInvQuantised/sequential/q_activation_2/Pow_1Pow?DeepSetsInvQuantised/sequential/q_activation_2/Pow_1/x:output:0?DeepSetsInvQuantised/sequential/q_activation_2/Pow_1/y:output:0*
T0*
_output_shapes
: Ї
5DeepSetsInvQuantised/sequential/q_activation_2/Cast_1Cast8DeepSetsInvQuantised/sequential/q_activation_2/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: y
4DeepSetsInvQuantised/sequential/q_activation_2/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *   @y
7DeepSetsInvQuantised/sequential/q_activation_2/Cast_2/xConst*
_output_shapes
: *
dtype0*
value	B : Џ
5DeepSetsInvQuantised/sequential/q_activation_2/Cast_2Cast@DeepSetsInvQuantised/sequential/q_activation_2/Cast_2/x:output:0*

DstT0*

SrcT0*
_output_shapes
: y
4DeepSetsInvQuantised/sequential/q_activation_2/sub/yConst*
_output_shapes
: *
dtype0*
valueB
 *   Aд
2DeepSetsInvQuantised/sequential/q_activation_2/subSub9DeepSetsInvQuantised/sequential/q_activation_2/Cast_2:y:0=DeepSetsInvQuantised/sequential/q_activation_2/sub/y:output:0*
T0*
_output_shapes
: г
4DeepSetsInvQuantised/sequential/q_activation_2/Pow_2Pow=DeepSetsInvQuantised/sequential/q_activation_2/Const:output:06DeepSetsInvQuantised/sequential/q_activation_2/sub:z:0*
T0*
_output_shapes
: б
4DeepSetsInvQuantised/sequential/q_activation_2/sub_1Sub9DeepSetsInvQuantised/sequential/q_activation_2/Cast_1:y:08DeepSetsInvQuantised/sequential/q_activation_2/Pow_2:z:0*
T0*
_output_shapes
: ё
8DeepSetsInvQuantised/sequential/q_activation_2/LessEqual	LessEqual:DeepSetsInvQuantised/sequential/q_dense_2/BiasAdd:output:08DeepSetsInvQuantised/sequential/q_activation_2/sub_1:z:0*
T0*+
_output_shapes
:џџџџџџџџџ ­
3DeepSetsInvQuantised/sequential/q_activation_2/ReluRelu:DeepSetsInvQuantised/sequential/q_dense_2/BiasAdd:output:0*
T0*+
_output_shapes
:џџџџџџџџџ Ј
>DeepSetsInvQuantised/sequential/q_activation_2/ones_like/ShapeShape:DeepSetsInvQuantised/sequential/q_dense_2/BiasAdd:output:0*
T0*
_output_shapes
:
>DeepSetsInvQuantised/sequential/q_activation_2/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
8DeepSetsInvQuantised/sequential/q_activation_2/ones_likeFillGDeepSetsInvQuantised/sequential/q_activation_2/ones_like/Shape:output:0GDeepSetsInvQuantised/sequential/q_activation_2/ones_like/Const:output:0*
T0*+
_output_shapes
:џџџџџџџџџ б
4DeepSetsInvQuantised/sequential/q_activation_2/sub_2Sub9DeepSetsInvQuantised/sequential/q_activation_2/Cast_1:y:08DeepSetsInvQuantised/sequential/q_activation_2/Pow_2:z:0*
T0*
_output_shapes
: ь
2DeepSetsInvQuantised/sequential/q_activation_2/mulMulADeepSetsInvQuantised/sequential/q_activation_2/ones_like:output:08DeepSetsInvQuantised/sequential/q_activation_2/sub_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ В
7DeepSetsInvQuantised/sequential/q_activation_2/SelectV2SelectV2<DeepSetsInvQuantised/sequential/q_activation_2/LessEqual:z:0ADeepSetsInvQuantised/sequential/q_activation_2/Relu:activations:06DeepSetsInvQuantised/sequential/q_activation_2/mul:z:0*
T0*+
_output_shapes
:џџџџџџџџџ ц
4DeepSetsInvQuantised/sequential/q_activation_2/mul_1Mul:DeepSetsInvQuantised/sequential/q_dense_2/BiasAdd:output:07DeepSetsInvQuantised/sequential/q_activation_2/Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ ь
6DeepSetsInvQuantised/sequential/q_activation_2/truedivRealDiv8DeepSetsInvQuantised/sequential/q_activation_2/mul_1:z:09DeepSetsInvQuantised/sequential/q_activation_2/Cast_1:y:0*
T0*+
_output_shapes
:џџџџџџџџџ Ћ
2DeepSetsInvQuantised/sequential/q_activation_2/NegNeg:DeepSetsInvQuantised/sequential/q_activation_2/truediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ Џ
4DeepSetsInvQuantised/sequential/q_activation_2/RoundRound:DeepSetsInvQuantised/sequential/q_activation_2/truediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ у
2DeepSetsInvQuantised/sequential/q_activation_2/addAddV26DeepSetsInvQuantised/sequential/q_activation_2/Neg:y:08DeepSetsInvQuantised/sequential/q_activation_2/Round:y:0*
T0*+
_output_shapes
:џџџџџџџџџ Й
;DeepSetsInvQuantised/sequential/q_activation_2/StopGradientStopGradient6DeepSetsInvQuantised/sequential/q_activation_2/add:z:0*
T0*+
_output_shapes
:џџџџџџџџџ ѕ
4DeepSetsInvQuantised/sequential/q_activation_2/add_1AddV2:DeepSetsInvQuantised/sequential/q_activation_2/truediv:z:0DDeepSetsInvQuantised/sequential/q_activation_2/StopGradient:output:0*
T0*+
_output_shapes
:џџџџџџџџџ ь
8DeepSetsInvQuantised/sequential/q_activation_2/truediv_1RealDiv8DeepSetsInvQuantised/sequential/q_activation_2/add_1:z:07DeepSetsInvQuantised/sequential/q_activation_2/Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ 
:DeepSetsInvQuantised/sequential/q_activation_2/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?т
8DeepSetsInvQuantised/sequential/q_activation_2/truediv_2RealDivCDeepSetsInvQuantised/sequential/q_activation_2/truediv_2/x:output:07DeepSetsInvQuantised/sequential/q_activation_2/Cast:y:0*
T0*
_output_shapes
: {
6DeepSetsInvQuantised/sequential/q_activation_2/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?л
4DeepSetsInvQuantised/sequential/q_activation_2/sub_3Sub?DeepSetsInvQuantised/sequential/q_activation_2/sub_3/x:output:0<DeepSetsInvQuantised/sequential/q_activation_2/truediv_2:z:0*
T0*
_output_shapes
: §
DDeepSetsInvQuantised/sequential/q_activation_2/clip_by_value/MinimumMinimum<DeepSetsInvQuantised/sequential/q_activation_2/truediv_1:z:08DeepSetsInvQuantised/sequential/q_activation_2/sub_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
>DeepSetsInvQuantised/sequential/q_activation_2/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    
<DeepSetsInvQuantised/sequential/q_activation_2/clip_by_valueMaximumHDeepSetsInvQuantised/sequential/q_activation_2/clip_by_value/Minimum:z:0GDeepSetsInvQuantised/sequential/q_activation_2/clip_by_value/y:output:0*
T0*+
_output_shapes
:џџџџџџџџџ ю
4DeepSetsInvQuantised/sequential/q_activation_2/mul_2Mul9DeepSetsInvQuantised/sequential/q_activation_2/Cast_1:y:0@DeepSetsInvQuantised/sequential/q_activation_2/clip_by_value:z:0*
T0*+
_output_shapes
:џџџџџџџџџ Г
4DeepSetsInvQuantised/sequential/q_activation_2/Neg_1Neg@DeepSetsInvQuantised/sequential/q_activation_2/SelectV2:output:0*
T0*+
_output_shapes
:џџџџџџџџџ ч
4DeepSetsInvQuantised/sequential/q_activation_2/add_2AddV28DeepSetsInvQuantised/sequential/q_activation_2/Neg_1:y:08DeepSetsInvQuantised/sequential/q_activation_2/mul_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ {
6DeepSetsInvQuantised/sequential/q_activation_2/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?ь
4DeepSetsInvQuantised/sequential/q_activation_2/mul_3Mul?DeepSetsInvQuantised/sequential/q_activation_2/mul_3/x:output:08DeepSetsInvQuantised/sequential/q_activation_2/add_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ Н
=DeepSetsInvQuantised/sequential/q_activation_2/StopGradient_1StopGradient8DeepSetsInvQuantised/sequential/q_activation_2/mul_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ §
4DeepSetsInvQuantised/sequential/q_activation_2/add_3AddV2@DeepSetsInvQuantised/sequential/q_activation_2/SelectV2:output:0FDeepSetsInvQuantised/sequential/q_activation_2/StopGradient_1:output:0*
T0*+
_output_shapes
:џџџџџџџџџ m
+DeepSetsInvQuantised/Mean/reduction_indicesConst*
_output_shapes
: *
dtype0*
value	B :У
DeepSetsInvQuantised/MeanMean8DeepSetsInvQuantised/sequential/q_activation_2/add_3:z:04DeepSetsInvQuantised/Mean/reduction_indices:output:0*
T0*'
_output_shapes
:џџџџџџџџџ s
1DeepSetsInvQuantised/sequential_1/q_dense_3/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :s
1DeepSetsInvQuantised/sequential_1/q_dense_3/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : Я
/DeepSetsInvQuantised/sequential_1/q_dense_3/PowPow:DeepSetsInvQuantised/sequential_1/q_dense_3/Pow/x:output:0:DeepSetsInvQuantised/sequential_1/q_dense_3/Pow/y:output:0*
T0*
_output_shapes
: 
0DeepSetsInvQuantised/sequential_1/q_dense_3/CastCast3DeepSetsInvQuantised/sequential_1/q_dense_3/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: О
:DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOpReadVariableOpCdeepsetsinvquantised_sequential_1_q_dense_3_readvariableop_resource*
_output_shapes

:  *
dtype0v
1DeepSetsInvQuantised/sequential_1/q_dense_3/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Aп
/DeepSetsInvQuantised/sequential_1/q_dense_3/mulMulBDeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp:value:0:DeepSetsInvQuantised/sequential_1/q_dense_3/mul/y:output:0*
T0*
_output_shapes

:  в
3DeepSetsInvQuantised/sequential_1/q_dense_3/truedivRealDiv3DeepSetsInvQuantised/sequential_1/q_dense_3/mul:z:04DeepSetsInvQuantised/sequential_1/q_dense_3/Cast:y:0*
T0*
_output_shapes

:  
/DeepSetsInvQuantised/sequential_1/q_dense_3/NegNeg7DeepSetsInvQuantised/sequential_1/q_dense_3/truediv:z:0*
T0*
_output_shapes

:  
1DeepSetsInvQuantised/sequential_1/q_dense_3/RoundRound7DeepSetsInvQuantised/sequential_1/q_dense_3/truediv:z:0*
T0*
_output_shapes

:  Э
/DeepSetsInvQuantised/sequential_1/q_dense_3/addAddV23DeepSetsInvQuantised/sequential_1/q_dense_3/Neg:y:05DeepSetsInvQuantised/sequential_1/q_dense_3/Round:y:0*
T0*
_output_shapes

:  І
8DeepSetsInvQuantised/sequential_1/q_dense_3/StopGradientStopGradient3DeepSetsInvQuantised/sequential_1/q_dense_3/add:z:0*
T0*
_output_shapes

:  п
1DeepSetsInvQuantised/sequential_1/q_dense_3/add_1AddV27DeepSetsInvQuantised/sequential_1/q_dense_3/truediv:z:0ADeepSetsInvQuantised/sequential_1/q_dense_3/StopGradient:output:0*
T0*
_output_shapes

:  
CDeepSetsInvQuantised/sequential_1/q_dense_3/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAњ
ADeepSetsInvQuantised/sequential_1/q_dense_3/clip_by_value/MinimumMinimum5DeepSetsInvQuantised/sequential_1/q_dense_3/add_1:z:0LDeepSetsInvQuantised/sequential_1/q_dense_3/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  
;DeepSetsInvQuantised/sequential_1/q_dense_3/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Сњ
9DeepSetsInvQuantised/sequential_1/q_dense_3/clip_by_valueMaximumEDeepSetsInvQuantised/sequential_1/q_dense_3/clip_by_value/Minimum:z:0DDeepSetsInvQuantised/sequential_1/q_dense_3/clip_by_value/y:output:0*
T0*
_output_shapes

:  ж
1DeepSetsInvQuantised/sequential_1/q_dense_3/mul_1Mul4DeepSetsInvQuantised/sequential_1/q_dense_3/Cast:y:0=DeepSetsInvQuantised/sequential_1/q_dense_3/clip_by_value:z:0*
T0*
_output_shapes

:  |
7DeepSetsInvQuantised/sequential_1/q_dense_3/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Aт
5DeepSetsInvQuantised/sequential_1/q_dense_3/truediv_1RealDiv5DeepSetsInvQuantised/sequential_1/q_dense_3/mul_1:z:0@DeepSetsInvQuantised/sequential_1/q_dense_3/truediv_1/y:output:0*
T0*
_output_shapes

:  x
3DeepSetsInvQuantised/sequential_1/q_dense_3/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?к
1DeepSetsInvQuantised/sequential_1/q_dense_3/mul_2Mul<DeepSetsInvQuantised/sequential_1/q_dense_3/mul_2/x:output:09DeepSetsInvQuantised/sequential_1/q_dense_3/truediv_1:z:0*
T0*
_output_shapes

:  Р
<DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_1ReadVariableOpCdeepsetsinvquantised_sequential_1_q_dense_3_readvariableop_resource*
_output_shapes

:  *
dtype0Ї
1DeepSetsInvQuantised/sequential_1/q_dense_3/Neg_1NegDDeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  б
1DeepSetsInvQuantised/sequential_1/q_dense_3/add_2AddV25DeepSetsInvQuantised/sequential_1/q_dense_3/Neg_1:y:05DeepSetsInvQuantised/sequential_1/q_dense_3/mul_2:z:0*
T0*
_output_shapes

:  x
3DeepSetsInvQuantised/sequential_1/q_dense_3/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?ж
1DeepSetsInvQuantised/sequential_1/q_dense_3/mul_3Mul<DeepSetsInvQuantised/sequential_1/q_dense_3/mul_3/x:output:05DeepSetsInvQuantised/sequential_1/q_dense_3/add_2:z:0*
T0*
_output_shapes

:  Њ
:DeepSetsInvQuantised/sequential_1/q_dense_3/StopGradient_1StopGradient5DeepSetsInvQuantised/sequential_1/q_dense_3/mul_3:z:0*
T0*
_output_shapes

:  Р
<DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_2ReadVariableOpCdeepsetsinvquantised_sequential_1_q_dense_3_readvariableop_resource*
_output_shapes

:  *
dtype0ю
1DeepSetsInvQuantised/sequential_1/q_dense_3/add_3AddV2DDeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_2:value:0CDeepSetsInvQuantised/sequential_1/q_dense_3/StopGradient_1:output:0*
T0*
_output_shapes

:  Щ
2DeepSetsInvQuantised/sequential_1/q_dense_3/MatMulMatMul"DeepSetsInvQuantised/Mean:output:05DeepSetsInvQuantised/sequential_1/q_dense_3/add_3:z:0*
T0*'
_output_shapes
:џџџџџџџџџ u
3DeepSetsInvQuantised/sequential_1/q_dense_3/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :u
3DeepSetsInvQuantised/sequential_1/q_dense_3/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : е
1DeepSetsInvQuantised/sequential_1/q_dense_3/Pow_1Pow<DeepSetsInvQuantised/sequential_1/q_dense_3/Pow_1/x:output:0<DeepSetsInvQuantised/sequential_1/q_dense_3/Pow_1/y:output:0*
T0*
_output_shapes
: Ё
2DeepSetsInvQuantised/sequential_1/q_dense_3/Cast_1Cast5DeepSetsInvQuantised/sequential_1/q_dense_3/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: О
<DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_3ReadVariableOpEdeepsetsinvquantised_sequential_1_q_dense_3_readvariableop_3_resource*
_output_shapes
: *
dtype0x
3DeepSetsInvQuantised/sequential_1/q_dense_3/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Aс
1DeepSetsInvQuantised/sequential_1/q_dense_3/mul_4MulDDeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_3:value:0<DeepSetsInvQuantised/sequential_1/q_dense_3/mul_4/y:output:0*
T0*
_output_shapes
: д
5DeepSetsInvQuantised/sequential_1/q_dense_3/truediv_2RealDiv5DeepSetsInvQuantised/sequential_1/q_dense_3/mul_4:z:06DeepSetsInvQuantised/sequential_1/q_dense_3/Cast_1:y:0*
T0*
_output_shapes
: 
1DeepSetsInvQuantised/sequential_1/q_dense_3/Neg_2Neg9DeepSetsInvQuantised/sequential_1/q_dense_3/truediv_2:z:0*
T0*
_output_shapes
: 
3DeepSetsInvQuantised/sequential_1/q_dense_3/Round_1Round9DeepSetsInvQuantised/sequential_1/q_dense_3/truediv_2:z:0*
T0*
_output_shapes
: Я
1DeepSetsInvQuantised/sequential_1/q_dense_3/add_4AddV25DeepSetsInvQuantised/sequential_1/q_dense_3/Neg_2:y:07DeepSetsInvQuantised/sequential_1/q_dense_3/Round_1:y:0*
T0*
_output_shapes
: І
:DeepSetsInvQuantised/sequential_1/q_dense_3/StopGradient_2StopGradient5DeepSetsInvQuantised/sequential_1/q_dense_3/add_4:z:0*
T0*
_output_shapes
: п
1DeepSetsInvQuantised/sequential_1/q_dense_3/add_5AddV29DeepSetsInvQuantised/sequential_1/q_dense_3/truediv_2:z:0CDeepSetsInvQuantised/sequential_1/q_dense_3/StopGradient_2:output:0*
T0*
_output_shapes
: 
EDeepSetsInvQuantised/sequential_1/q_dense_3/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAњ
CDeepSetsInvQuantised/sequential_1/q_dense_3/clip_by_value_1/MinimumMinimum5DeepSetsInvQuantised/sequential_1/q_dense_3/add_5:z:0NDeepSetsInvQuantised/sequential_1/q_dense_3/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: 
=DeepSetsInvQuantised/sequential_1/q_dense_3/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Сќ
;DeepSetsInvQuantised/sequential_1/q_dense_3/clip_by_value_1MaximumGDeepSetsInvQuantised/sequential_1/q_dense_3/clip_by_value_1/Minimum:z:0FDeepSetsInvQuantised/sequential_1/q_dense_3/clip_by_value_1/y:output:0*
T0*
_output_shapes
: ж
1DeepSetsInvQuantised/sequential_1/q_dense_3/mul_5Mul6DeepSetsInvQuantised/sequential_1/q_dense_3/Cast_1:y:0?DeepSetsInvQuantised/sequential_1/q_dense_3/clip_by_value_1:z:0*
T0*
_output_shapes
: |
7DeepSetsInvQuantised/sequential_1/q_dense_3/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Aо
5DeepSetsInvQuantised/sequential_1/q_dense_3/truediv_3RealDiv5DeepSetsInvQuantised/sequential_1/q_dense_3/mul_5:z:0@DeepSetsInvQuantised/sequential_1/q_dense_3/truediv_3/y:output:0*
T0*
_output_shapes
: x
3DeepSetsInvQuantised/sequential_1/q_dense_3/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?ж
1DeepSetsInvQuantised/sequential_1/q_dense_3/mul_6Mul<DeepSetsInvQuantised/sequential_1/q_dense_3/mul_6/x:output:09DeepSetsInvQuantised/sequential_1/q_dense_3/truediv_3:z:0*
T0*
_output_shapes
: О
<DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_4ReadVariableOpEdeepsetsinvquantised_sequential_1_q_dense_3_readvariableop_3_resource*
_output_shapes
: *
dtype0Ѓ
1DeepSetsInvQuantised/sequential_1/q_dense_3/Neg_3NegDDeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_4:value:0*
T0*
_output_shapes
: Э
1DeepSetsInvQuantised/sequential_1/q_dense_3/add_6AddV25DeepSetsInvQuantised/sequential_1/q_dense_3/Neg_3:y:05DeepSetsInvQuantised/sequential_1/q_dense_3/mul_6:z:0*
T0*
_output_shapes
: x
3DeepSetsInvQuantised/sequential_1/q_dense_3/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?в
1DeepSetsInvQuantised/sequential_1/q_dense_3/mul_7Mul<DeepSetsInvQuantised/sequential_1/q_dense_3/mul_7/x:output:05DeepSetsInvQuantised/sequential_1/q_dense_3/add_6:z:0*
T0*
_output_shapes
: І
:DeepSetsInvQuantised/sequential_1/q_dense_3/StopGradient_3StopGradient5DeepSetsInvQuantised/sequential_1/q_dense_3/mul_7:z:0*
T0*
_output_shapes
: О
<DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_5ReadVariableOpEdeepsetsinvquantised_sequential_1_q_dense_3_readvariableop_3_resource*
_output_shapes
: *
dtype0ъ
1DeepSetsInvQuantised/sequential_1/q_dense_3/add_7AddV2DDeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_5:value:0CDeepSetsInvQuantised/sequential_1/q_dense_3/StopGradient_3:output:0*
T0*
_output_shapes
: х
3DeepSetsInvQuantised/sequential_1/q_dense_3/BiasAddBiasAdd<DeepSetsInvQuantised/sequential_1/q_dense_3/MatMul:product:05DeepSetsInvQuantised/sequential_1/q_dense_3/add_7:z:0*
T0*'
_output_shapes
:џџџџџџџџџ x
6DeepSetsInvQuantised/sequential_1/q_activation_3/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :x
6DeepSetsInvQuantised/sequential_1/q_activation_3/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :о
4DeepSetsInvQuantised/sequential_1/q_activation_3/PowPow?DeepSetsInvQuantised/sequential_1/q_activation_3/Pow/x:output:0?DeepSetsInvQuantised/sequential_1/q_activation_3/Pow/y:output:0*
T0*
_output_shapes
: Ї
5DeepSetsInvQuantised/sequential_1/q_activation_3/CastCast8DeepSetsInvQuantised/sequential_1/q_activation_3/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: z
8DeepSetsInvQuantised/sequential_1/q_activation_3/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :z
8DeepSetsInvQuantised/sequential_1/q_activation_3/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : ф
6DeepSetsInvQuantised/sequential_1/q_activation_3/Pow_1PowADeepSetsInvQuantised/sequential_1/q_activation_3/Pow_1/x:output:0ADeepSetsInvQuantised/sequential_1/q_activation_3/Pow_1/y:output:0*
T0*
_output_shapes
: Ћ
7DeepSetsInvQuantised/sequential_1/q_activation_3/Cast_1Cast:DeepSetsInvQuantised/sequential_1/q_activation_3/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: {
6DeepSetsInvQuantised/sequential_1/q_activation_3/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *   @{
9DeepSetsInvQuantised/sequential_1/q_activation_3/Cast_2/xConst*
_output_shapes
: *
dtype0*
value	B : Г
7DeepSetsInvQuantised/sequential_1/q_activation_3/Cast_2CastBDeepSetsInvQuantised/sequential_1/q_activation_3/Cast_2/x:output:0*

DstT0*

SrcT0*
_output_shapes
: {
6DeepSetsInvQuantised/sequential_1/q_activation_3/sub/yConst*
_output_shapes
: *
dtype0*
valueB
 *   Aк
4DeepSetsInvQuantised/sequential_1/q_activation_3/subSub;DeepSetsInvQuantised/sequential_1/q_activation_3/Cast_2:y:0?DeepSetsInvQuantised/sequential_1/q_activation_3/sub/y:output:0*
T0*
_output_shapes
: й
6DeepSetsInvQuantised/sequential_1/q_activation_3/Pow_2Pow?DeepSetsInvQuantised/sequential_1/q_activation_3/Const:output:08DeepSetsInvQuantised/sequential_1/q_activation_3/sub:z:0*
T0*
_output_shapes
: з
6DeepSetsInvQuantised/sequential_1/q_activation_3/sub_1Sub;DeepSetsInvQuantised/sequential_1/q_activation_3/Cast_1:y:0:DeepSetsInvQuantised/sequential_1/q_activation_3/Pow_2:z:0*
T0*
_output_shapes
: ѓ
:DeepSetsInvQuantised/sequential_1/q_activation_3/LessEqual	LessEqual<DeepSetsInvQuantised/sequential_1/q_dense_3/BiasAdd:output:0:DeepSetsInvQuantised/sequential_1/q_activation_3/sub_1:z:0*
T0*'
_output_shapes
:џџџџџџџџџ ­
5DeepSetsInvQuantised/sequential_1/q_activation_3/ReluRelu<DeepSetsInvQuantised/sequential_1/q_dense_3/BiasAdd:output:0*
T0*'
_output_shapes
:џџџџџџџџџ Ќ
@DeepSetsInvQuantised/sequential_1/q_activation_3/ones_like/ShapeShape<DeepSetsInvQuantised/sequential_1/q_dense_3/BiasAdd:output:0*
T0*
_output_shapes
:
@DeepSetsInvQuantised/sequential_1/q_activation_3/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
:DeepSetsInvQuantised/sequential_1/q_activation_3/ones_likeFillIDeepSetsInvQuantised/sequential_1/q_activation_3/ones_like/Shape:output:0IDeepSetsInvQuantised/sequential_1/q_activation_3/ones_like/Const:output:0*
T0*'
_output_shapes
:џџџџџџџџџ з
6DeepSetsInvQuantised/sequential_1/q_activation_3/sub_2Sub;DeepSetsInvQuantised/sequential_1/q_activation_3/Cast_1:y:0:DeepSetsInvQuantised/sequential_1/q_activation_3/Pow_2:z:0*
T0*
_output_shapes
: ю
4DeepSetsInvQuantised/sequential_1/q_activation_3/mulMulCDeepSetsInvQuantised/sequential_1/q_activation_3/ones_like:output:0:DeepSetsInvQuantised/sequential_1/q_activation_3/sub_2:z:0*
T0*'
_output_shapes
:џџџџџџџџџ Ж
9DeepSetsInvQuantised/sequential_1/q_activation_3/SelectV2SelectV2>DeepSetsInvQuantised/sequential_1/q_activation_3/LessEqual:z:0CDeepSetsInvQuantised/sequential_1/q_activation_3/Relu:activations:08DeepSetsInvQuantised/sequential_1/q_activation_3/mul:z:0*
T0*'
_output_shapes
:џџџџџџџџџ ш
6DeepSetsInvQuantised/sequential_1/q_activation_3/mul_1Mul<DeepSetsInvQuantised/sequential_1/q_dense_3/BiasAdd:output:09DeepSetsInvQuantised/sequential_1/q_activation_3/Cast:y:0*
T0*'
_output_shapes
:џџџџџџџџџ ю
8DeepSetsInvQuantised/sequential_1/q_activation_3/truedivRealDiv:DeepSetsInvQuantised/sequential_1/q_activation_3/mul_1:z:0;DeepSetsInvQuantised/sequential_1/q_activation_3/Cast_1:y:0*
T0*'
_output_shapes
:џџџџџџџџџ Ћ
4DeepSetsInvQuantised/sequential_1/q_activation_3/NegNeg<DeepSetsInvQuantised/sequential_1/q_activation_3/truediv:z:0*
T0*'
_output_shapes
:џџџџџџџџџ Џ
6DeepSetsInvQuantised/sequential_1/q_activation_3/RoundRound<DeepSetsInvQuantised/sequential_1/q_activation_3/truediv:z:0*
T0*'
_output_shapes
:џџџџџџџџџ х
4DeepSetsInvQuantised/sequential_1/q_activation_3/addAddV28DeepSetsInvQuantised/sequential_1/q_activation_3/Neg:y:0:DeepSetsInvQuantised/sequential_1/q_activation_3/Round:y:0*
T0*'
_output_shapes
:џџџџџџџџџ Й
=DeepSetsInvQuantised/sequential_1/q_activation_3/StopGradientStopGradient8DeepSetsInvQuantised/sequential_1/q_activation_3/add:z:0*
T0*'
_output_shapes
:џџџџџџџџџ ї
6DeepSetsInvQuantised/sequential_1/q_activation_3/add_1AddV2<DeepSetsInvQuantised/sequential_1/q_activation_3/truediv:z:0FDeepSetsInvQuantised/sequential_1/q_activation_3/StopGradient:output:0*
T0*'
_output_shapes
:џџџџџџџџџ ю
:DeepSetsInvQuantised/sequential_1/q_activation_3/truediv_1RealDiv:DeepSetsInvQuantised/sequential_1/q_activation_3/add_1:z:09DeepSetsInvQuantised/sequential_1/q_activation_3/Cast:y:0*
T0*'
_output_shapes
:џџџџџџџџџ 
<DeepSetsInvQuantised/sequential_1/q_activation_3/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?ш
:DeepSetsInvQuantised/sequential_1/q_activation_3/truediv_2RealDivEDeepSetsInvQuantised/sequential_1/q_activation_3/truediv_2/x:output:09DeepSetsInvQuantised/sequential_1/q_activation_3/Cast:y:0*
T0*
_output_shapes
: }
8DeepSetsInvQuantised/sequential_1/q_activation_3/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?с
6DeepSetsInvQuantised/sequential_1/q_activation_3/sub_3SubADeepSetsInvQuantised/sequential_1/q_activation_3/sub_3/x:output:0>DeepSetsInvQuantised/sequential_1/q_activation_3/truediv_2:z:0*
T0*
_output_shapes
: џ
FDeepSetsInvQuantised/sequential_1/q_activation_3/clip_by_value/MinimumMinimum>DeepSetsInvQuantised/sequential_1/q_activation_3/truediv_1:z:0:DeepSetsInvQuantised/sequential_1/q_activation_3/sub_3:z:0*
T0*'
_output_shapes
:џџџџџџџџџ 
@DeepSetsInvQuantised/sequential_1/q_activation_3/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    
>DeepSetsInvQuantised/sequential_1/q_activation_3/clip_by_valueMaximumJDeepSetsInvQuantised/sequential_1/q_activation_3/clip_by_value/Minimum:z:0IDeepSetsInvQuantised/sequential_1/q_activation_3/clip_by_value/y:output:0*
T0*'
_output_shapes
:џџџџџџџџџ №
6DeepSetsInvQuantised/sequential_1/q_activation_3/mul_2Mul;DeepSetsInvQuantised/sequential_1/q_activation_3/Cast_1:y:0BDeepSetsInvQuantised/sequential_1/q_activation_3/clip_by_value:z:0*
T0*'
_output_shapes
:џџџџџџџџџ Г
6DeepSetsInvQuantised/sequential_1/q_activation_3/Neg_1NegBDeepSetsInvQuantised/sequential_1/q_activation_3/SelectV2:output:0*
T0*'
_output_shapes
:џџџџџџџџџ щ
6DeepSetsInvQuantised/sequential_1/q_activation_3/add_2AddV2:DeepSetsInvQuantised/sequential_1/q_activation_3/Neg_1:y:0:DeepSetsInvQuantised/sequential_1/q_activation_3/mul_2:z:0*
T0*'
_output_shapes
:џџџџџџџџџ }
8DeepSetsInvQuantised/sequential_1/q_activation_3/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?ю
6DeepSetsInvQuantised/sequential_1/q_activation_3/mul_3MulADeepSetsInvQuantised/sequential_1/q_activation_3/mul_3/x:output:0:DeepSetsInvQuantised/sequential_1/q_activation_3/add_2:z:0*
T0*'
_output_shapes
:џџџџџџџџџ Н
?DeepSetsInvQuantised/sequential_1/q_activation_3/StopGradient_1StopGradient:DeepSetsInvQuantised/sequential_1/q_activation_3/mul_3:z:0*
T0*'
_output_shapes
:џџџџџџџџџ џ
6DeepSetsInvQuantised/sequential_1/q_activation_3/add_3AddV2BDeepSetsInvQuantised/sequential_1/q_activation_3/SelectV2:output:0HDeepSetsInvQuantised/sequential_1/q_activation_3/StopGradient_1:output:0*
T0*'
_output_shapes
:џџџџџџџџџ s
1DeepSetsInvQuantised/sequential_1/q_dense_4/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :s
1DeepSetsInvQuantised/sequential_1/q_dense_4/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : Я
/DeepSetsInvQuantised/sequential_1/q_dense_4/PowPow:DeepSetsInvQuantised/sequential_1/q_dense_4/Pow/x:output:0:DeepSetsInvQuantised/sequential_1/q_dense_4/Pow/y:output:0*
T0*
_output_shapes
: 
0DeepSetsInvQuantised/sequential_1/q_dense_4/CastCast3DeepSetsInvQuantised/sequential_1/q_dense_4/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: О
:DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOpReadVariableOpCdeepsetsinvquantised_sequential_1_q_dense_4_readvariableop_resource*
_output_shapes

: *
dtype0v
1DeepSetsInvQuantised/sequential_1/q_dense_4/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Aп
/DeepSetsInvQuantised/sequential_1/q_dense_4/mulMulBDeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp:value:0:DeepSetsInvQuantised/sequential_1/q_dense_4/mul/y:output:0*
T0*
_output_shapes

: в
3DeepSetsInvQuantised/sequential_1/q_dense_4/truedivRealDiv3DeepSetsInvQuantised/sequential_1/q_dense_4/mul:z:04DeepSetsInvQuantised/sequential_1/q_dense_4/Cast:y:0*
T0*
_output_shapes

: 
/DeepSetsInvQuantised/sequential_1/q_dense_4/NegNeg7DeepSetsInvQuantised/sequential_1/q_dense_4/truediv:z:0*
T0*
_output_shapes

: 
1DeepSetsInvQuantised/sequential_1/q_dense_4/RoundRound7DeepSetsInvQuantised/sequential_1/q_dense_4/truediv:z:0*
T0*
_output_shapes

: Э
/DeepSetsInvQuantised/sequential_1/q_dense_4/addAddV23DeepSetsInvQuantised/sequential_1/q_dense_4/Neg:y:05DeepSetsInvQuantised/sequential_1/q_dense_4/Round:y:0*
T0*
_output_shapes

: І
8DeepSetsInvQuantised/sequential_1/q_dense_4/StopGradientStopGradient3DeepSetsInvQuantised/sequential_1/q_dense_4/add:z:0*
T0*
_output_shapes

: п
1DeepSetsInvQuantised/sequential_1/q_dense_4/add_1AddV27DeepSetsInvQuantised/sequential_1/q_dense_4/truediv:z:0ADeepSetsInvQuantised/sequential_1/q_dense_4/StopGradient:output:0*
T0*
_output_shapes

: 
CDeepSetsInvQuantised/sequential_1/q_dense_4/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAњ
ADeepSetsInvQuantised/sequential_1/q_dense_4/clip_by_value/MinimumMinimum5DeepSetsInvQuantised/sequential_1/q_dense_4/add_1:z:0LDeepSetsInvQuantised/sequential_1/q_dense_4/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: 
;DeepSetsInvQuantised/sequential_1/q_dense_4/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Сњ
9DeepSetsInvQuantised/sequential_1/q_dense_4/clip_by_valueMaximumEDeepSetsInvQuantised/sequential_1/q_dense_4/clip_by_value/Minimum:z:0DDeepSetsInvQuantised/sequential_1/q_dense_4/clip_by_value/y:output:0*
T0*
_output_shapes

: ж
1DeepSetsInvQuantised/sequential_1/q_dense_4/mul_1Mul4DeepSetsInvQuantised/sequential_1/q_dense_4/Cast:y:0=DeepSetsInvQuantised/sequential_1/q_dense_4/clip_by_value:z:0*
T0*
_output_shapes

: |
7DeepSetsInvQuantised/sequential_1/q_dense_4/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Aт
5DeepSetsInvQuantised/sequential_1/q_dense_4/truediv_1RealDiv5DeepSetsInvQuantised/sequential_1/q_dense_4/mul_1:z:0@DeepSetsInvQuantised/sequential_1/q_dense_4/truediv_1/y:output:0*
T0*
_output_shapes

: x
3DeepSetsInvQuantised/sequential_1/q_dense_4/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?к
1DeepSetsInvQuantised/sequential_1/q_dense_4/mul_2Mul<DeepSetsInvQuantised/sequential_1/q_dense_4/mul_2/x:output:09DeepSetsInvQuantised/sequential_1/q_dense_4/truediv_1:z:0*
T0*
_output_shapes

: Р
<DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_1ReadVariableOpCdeepsetsinvquantised_sequential_1_q_dense_4_readvariableop_resource*
_output_shapes

: *
dtype0Ї
1DeepSetsInvQuantised/sequential_1/q_dense_4/Neg_1NegDDeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_1:value:0*
T0*
_output_shapes

: б
1DeepSetsInvQuantised/sequential_1/q_dense_4/add_2AddV25DeepSetsInvQuantised/sequential_1/q_dense_4/Neg_1:y:05DeepSetsInvQuantised/sequential_1/q_dense_4/mul_2:z:0*
T0*
_output_shapes

: x
3DeepSetsInvQuantised/sequential_1/q_dense_4/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?ж
1DeepSetsInvQuantised/sequential_1/q_dense_4/mul_3Mul<DeepSetsInvQuantised/sequential_1/q_dense_4/mul_3/x:output:05DeepSetsInvQuantised/sequential_1/q_dense_4/add_2:z:0*
T0*
_output_shapes

: Њ
:DeepSetsInvQuantised/sequential_1/q_dense_4/StopGradient_1StopGradient5DeepSetsInvQuantised/sequential_1/q_dense_4/mul_3:z:0*
T0*
_output_shapes

: Р
<DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_2ReadVariableOpCdeepsetsinvquantised_sequential_1_q_dense_4_readvariableop_resource*
_output_shapes

: *
dtype0ю
1DeepSetsInvQuantised/sequential_1/q_dense_4/add_3AddV2DDeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_2:value:0CDeepSetsInvQuantised/sequential_1/q_dense_4/StopGradient_1:output:0*
T0*
_output_shapes

: с
2DeepSetsInvQuantised/sequential_1/q_dense_4/MatMulMatMul:DeepSetsInvQuantised/sequential_1/q_activation_3/add_3:z:05DeepSetsInvQuantised/sequential_1/q_dense_4/add_3:z:0*
T0*'
_output_shapes
:џџџџџџџџџu
3DeepSetsInvQuantised/sequential_1/q_dense_4/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :u
3DeepSetsInvQuantised/sequential_1/q_dense_4/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : е
1DeepSetsInvQuantised/sequential_1/q_dense_4/Pow_1Pow<DeepSetsInvQuantised/sequential_1/q_dense_4/Pow_1/x:output:0<DeepSetsInvQuantised/sequential_1/q_dense_4/Pow_1/y:output:0*
T0*
_output_shapes
: Ё
2DeepSetsInvQuantised/sequential_1/q_dense_4/Cast_1Cast5DeepSetsInvQuantised/sequential_1/q_dense_4/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: О
<DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_3ReadVariableOpEdeepsetsinvquantised_sequential_1_q_dense_4_readvariableop_3_resource*
_output_shapes
:*
dtype0x
3DeepSetsInvQuantised/sequential_1/q_dense_4/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Aс
1DeepSetsInvQuantised/sequential_1/q_dense_4/mul_4MulDDeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_3:value:0<DeepSetsInvQuantised/sequential_1/q_dense_4/mul_4/y:output:0*
T0*
_output_shapes
:д
5DeepSetsInvQuantised/sequential_1/q_dense_4/truediv_2RealDiv5DeepSetsInvQuantised/sequential_1/q_dense_4/mul_4:z:06DeepSetsInvQuantised/sequential_1/q_dense_4/Cast_1:y:0*
T0*
_output_shapes
:
1DeepSetsInvQuantised/sequential_1/q_dense_4/Neg_2Neg9DeepSetsInvQuantised/sequential_1/q_dense_4/truediv_2:z:0*
T0*
_output_shapes
:
3DeepSetsInvQuantised/sequential_1/q_dense_4/Round_1Round9DeepSetsInvQuantised/sequential_1/q_dense_4/truediv_2:z:0*
T0*
_output_shapes
:Я
1DeepSetsInvQuantised/sequential_1/q_dense_4/add_4AddV25DeepSetsInvQuantised/sequential_1/q_dense_4/Neg_2:y:07DeepSetsInvQuantised/sequential_1/q_dense_4/Round_1:y:0*
T0*
_output_shapes
:І
:DeepSetsInvQuantised/sequential_1/q_dense_4/StopGradient_2StopGradient5DeepSetsInvQuantised/sequential_1/q_dense_4/add_4:z:0*
T0*
_output_shapes
:п
1DeepSetsInvQuantised/sequential_1/q_dense_4/add_5AddV29DeepSetsInvQuantised/sequential_1/q_dense_4/truediv_2:z:0CDeepSetsInvQuantised/sequential_1/q_dense_4/StopGradient_2:output:0*
T0*
_output_shapes
:
EDeepSetsInvQuantised/sequential_1/q_dense_4/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAњ
CDeepSetsInvQuantised/sequential_1/q_dense_4/clip_by_value_1/MinimumMinimum5DeepSetsInvQuantised/sequential_1/q_dense_4/add_5:z:0NDeepSetsInvQuantised/sequential_1/q_dense_4/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
:
=DeepSetsInvQuantised/sequential_1/q_dense_4/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Сќ
;DeepSetsInvQuantised/sequential_1/q_dense_4/clip_by_value_1MaximumGDeepSetsInvQuantised/sequential_1/q_dense_4/clip_by_value_1/Minimum:z:0FDeepSetsInvQuantised/sequential_1/q_dense_4/clip_by_value_1/y:output:0*
T0*
_output_shapes
:ж
1DeepSetsInvQuantised/sequential_1/q_dense_4/mul_5Mul6DeepSetsInvQuantised/sequential_1/q_dense_4/Cast_1:y:0?DeepSetsInvQuantised/sequential_1/q_dense_4/clip_by_value_1:z:0*
T0*
_output_shapes
:|
7DeepSetsInvQuantised/sequential_1/q_dense_4/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Aо
5DeepSetsInvQuantised/sequential_1/q_dense_4/truediv_3RealDiv5DeepSetsInvQuantised/sequential_1/q_dense_4/mul_5:z:0@DeepSetsInvQuantised/sequential_1/q_dense_4/truediv_3/y:output:0*
T0*
_output_shapes
:x
3DeepSetsInvQuantised/sequential_1/q_dense_4/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?ж
1DeepSetsInvQuantised/sequential_1/q_dense_4/mul_6Mul<DeepSetsInvQuantised/sequential_1/q_dense_4/mul_6/x:output:09DeepSetsInvQuantised/sequential_1/q_dense_4/truediv_3:z:0*
T0*
_output_shapes
:О
<DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_4ReadVariableOpEdeepsetsinvquantised_sequential_1_q_dense_4_readvariableop_3_resource*
_output_shapes
:*
dtype0Ѓ
1DeepSetsInvQuantised/sequential_1/q_dense_4/Neg_3NegDDeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_4:value:0*
T0*
_output_shapes
:Э
1DeepSetsInvQuantised/sequential_1/q_dense_4/add_6AddV25DeepSetsInvQuantised/sequential_1/q_dense_4/Neg_3:y:05DeepSetsInvQuantised/sequential_1/q_dense_4/mul_6:z:0*
T0*
_output_shapes
:x
3DeepSetsInvQuantised/sequential_1/q_dense_4/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?в
1DeepSetsInvQuantised/sequential_1/q_dense_4/mul_7Mul<DeepSetsInvQuantised/sequential_1/q_dense_4/mul_7/x:output:05DeepSetsInvQuantised/sequential_1/q_dense_4/add_6:z:0*
T0*
_output_shapes
:І
:DeepSetsInvQuantised/sequential_1/q_dense_4/StopGradient_3StopGradient5DeepSetsInvQuantised/sequential_1/q_dense_4/mul_7:z:0*
T0*
_output_shapes
:О
<DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_5ReadVariableOpEdeepsetsinvquantised_sequential_1_q_dense_4_readvariableop_3_resource*
_output_shapes
:*
dtype0ъ
1DeepSetsInvQuantised/sequential_1/q_dense_4/add_7AddV2DDeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_5:value:0CDeepSetsInvQuantised/sequential_1/q_dense_4/StopGradient_3:output:0*
T0*
_output_shapes
:х
3DeepSetsInvQuantised/sequential_1/q_dense_4/BiasAddBiasAdd<DeepSetsInvQuantised/sequential_1/q_dense_4/MatMul:product:05DeepSetsInvQuantised/sequential_1/q_dense_4/add_7:z:0*
T0*'
_output_shapes
:џџџџџџџџџ
IdentityIdentity<DeepSetsInvQuantised/sequential_1/q_dense_4/BiasAdd:output:0^NoOp*
T0*'
_output_shapes
:џџџџџџџџџю
NoOpNoOp7^DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp9^DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_19^DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_29^DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_39^DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_49^DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_59^DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp;^DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_1;^DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_2;^DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_3;^DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_4;^DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_59^DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp;^DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_1;^DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_2;^DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_3;^DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_4;^DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_5;^DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp=^DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_1=^DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_2=^DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_3=^DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_4=^DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_5;^DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp=^DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_1=^DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_2=^DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_3=^DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_4=^DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_5*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:џџџџџџџџџ: : : : : : : : : : 2p
6DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp6DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp2t
8DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_18DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_12t
8DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_28DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_22t
8DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_38DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_32t
8DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_48DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_42t
8DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_58DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_52t
8DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp8DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp2x
:DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_1:DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_12x
:DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_2:DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_22x
:DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_3:DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_32x
:DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_4:DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_42x
:DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_5:DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_52t
8DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp8DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp2x
:DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_1:DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_12x
:DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_2:DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_22x
:DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_3:DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_32x
:DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_4:DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_42x
:DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_5:DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_52x
:DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp:DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp2|
<DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_1<DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_12|
<DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_2<DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_22|
<DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_3<DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_32|
<DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_4<DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_42|
<DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_5<DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_52x
:DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp:DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp2|
<DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_1<DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_12|
<DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_2<DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_22|
<DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_3<DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_32|
<DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_4<DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_42|
<DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_5<DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_5:T P
+
_output_shapes
:џџџџџџџџџ
!
_user_specified_name	input_1
З

њ
5__inference_DeepSetsInvQuantised_layer_call_fn_458953

inputs
unknown: 
	unknown_0: 
	unknown_1:  
	unknown_2: 
	unknown_3:  
	unknown_4: 
	unknown_5:  
	unknown_6: 
	unknown_7: 
	unknown_8:
identityЂStatefulPartitionedCallв
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4	unknown_5	unknown_6	unknown_7	unknown_8*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:џџџџџџџџџ*,
_read_only_resource_inputs

	
*2
config_proto" 

CPU

GPU2 *0J 8 *Y
fTRR
P__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_458770o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:џџџџџџџџџ`
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:џџџџџџџџџ: : : : : : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:S O
+
_output_shapes
:џџџџџџџџџ
 
_user_specified_nameinputs
Ќ
K
#__inference__update_step_xla_460097
gradient
variable: *
_XlaMustCompile(*(
_construction_contextkEagerRuntime*
_input_shapes

: : *
	_noinline(:D @

_output_shapes
: 
"
_user_specified_name
gradient:($
"
_user_specified_name
variable
л!
d
H__inference_q_activation_layer_call_and_return_conditional_losses_457865

inputs
identityG
Pow/xConst*
_output_shapes
: *
dtype0*
value	B :G
Pow/yConst*
_output_shapes
: *
dtype0*
value	B :K
PowPowPow/x:output:0Pow/y:output:0*
T0*
_output_shapes
: E
CastCastPow:z:0*

DstT0*

SrcT0*
_output_shapes
: I
Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :I
Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Q
Pow_1PowPow_1/x:output:0Pow_1/y:output:0*
T0*
_output_shapes
: I
Cast_1Cast	Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: J
ConstConst*
_output_shapes
: *
dtype0*
valueB
 *   @J
Cast_2/xConst*
_output_shapes
: *
dtype0*
value	B : Q
Cast_2CastCast_2/x:output:0*

DstT0*

SrcT0*
_output_shapes
: J
sub/yConst*
_output_shapes
: *
dtype0*
valueB
 *   AG
subSub
Cast_2:y:0sub/y:output:0*
T0*
_output_shapes
: F
Pow_2PowConst:output:0sub:z:0*
T0*
_output_shapes
: D
sub_1Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: _
	LessEqual	LessEqualinputs	sub_1:z:0*
T0*+
_output_shapes
:џџџџџџџџџ J
ReluReluinputs*
T0*+
_output_shapes
:џџџџџџџџџ E
ones_like/ShapeShapeinputs*
T0*
_output_shapes
:T
ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  ?{
	ones_likeFillones_like/Shape:output:0ones_like/Const:output:0*
T0*+
_output_shapes
:џџџџџџџџџ D
sub_2Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: _
mulMulones_like:output:0	sub_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ v
SelectV2SelectV2LessEqual:z:0Relu:activations:0mul:z:0*
T0*+
_output_shapes
:џџџџџџџџџ T
mul_1MulinputsCast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ _
truedivRealDiv	mul_1:z:0
Cast_1:y:0*
T0*+
_output_shapes
:џџџџџџџџџ M
NegNegtruediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ Q
RoundRoundtruediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ V
addAddV2Neg:y:0	Round:y:0*
T0*+
_output_shapes
:џџџџџџџџџ [
StopGradientStopGradientadd:z:0*
T0*+
_output_shapes
:џџџџџџџџџ h
add_1AddV2truediv:z:0StopGradient:output:0*
T0*+
_output_shapes
:џџџџџџџџџ _
	truediv_1RealDiv	add_1:z:0Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ P
truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?U
	truediv_2RealDivtruediv_2/x:output:0Cast:y:0*
T0*
_output_shapes
: L
sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?N
sub_3Subsub_3/x:output:0truediv_2:z:0*
T0*
_output_shapes
: p
clip_by_value/MinimumMinimumtruediv_1:z:0	sub_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*+
_output_shapes
:џџџџџџџџџ a
mul_2Mul
Cast_1:y:0clip_by_value:z:0*
T0*+
_output_shapes
:џџџџџџџџџ U
Neg_1NegSelectV2:output:0*
T0*+
_output_shapes
:џџџџџџџџџ Z
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?_
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ _
StopGradient_1StopGradient	mul_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ p
add_3AddV2SelectV2:output:0StopGradient_1:output:0*
T0*+
_output_shapes
:џџџџџџџџџ U
IdentityIdentity	add_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:џџџџџџџџџ :S O
+
_output_shapes
:џџџџџџџџџ 
 
_user_specified_nameinputs
щ<
Ј
E__inference_q_dense_2_layer_call_and_return_conditional_losses_461685

inputs)
readvariableop_resource:  '
readvariableop_3_resource: 
identityЂReadVariableOpЂReadVariableOp_1ЂReadVariableOp_2ЂReadVariableOp_3ЂReadVariableOp_4ЂReadVariableOp_5G
Pow/xConst*
_output_shapes
: *
dtype0*
value	B :G
Pow/yConst*
_output_shapes
: *
dtype0*
value	B : K
PowPowPow/x:output:0Pow/y:output:0*
T0*
_output_shapes
: E
CastCastPow:z:0*

DstT0*

SrcT0*
_output_shapes
: f
ReadVariableOpReadVariableOpreadvariableop_resource*
_output_shapes

:  *
dtype0J
mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A[
mulMulReadVariableOp:value:0mul/y:output:0*
T0*
_output_shapes

:  N
truedivRealDivmul:z:0Cast:y:0*
T0*
_output_shapes

:  @
NegNegtruediv:z:0*
T0*
_output_shapes

:  D
RoundRoundtruediv:z:0*
T0*
_output_shapes

:  I
addAddV2Neg:y:0	Round:y:0*
T0*
_output_shapes

:  N
StopGradientStopGradientadd:z:0*
T0*
_output_shapes

:  [
add_1AddV2truediv:z:0StopGradient:output:0*
T0*
_output_shapes

:  \
clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Сv
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*
_output_shapes

:  R
mul_1MulCast:y:0clip_by_value:z:0*
T0*
_output_shapes

:  P
truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A^
	truediv_1RealDiv	mul_1:z:0truediv_1/y:output:0*
T0*
_output_shapes

:  L
mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?V
mul_2Mulmul_2/x:output:0truediv_1:z:0*
T0*
_output_shapes

:  h
ReadVariableOp_1ReadVariableOpreadvariableop_resource*
_output_shapes

:  *
dtype0O
Neg_1NegReadVariableOp_1:value:0*
T0*
_output_shapes

:  M
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*
_output_shapes

:  L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?R
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*
_output_shapes

:  R
StopGradient_1StopGradient	mul_3:z:0*
T0*
_output_shapes

:  h
ReadVariableOp_2ReadVariableOpreadvariableop_resource*
_output_shapes

:  *
dtype0j
add_3AddV2ReadVariableOp_2:value:0StopGradient_1:output:0*
T0*
_output_shapes

:  ;
ShapeShapeinputs*
T0*
_output_shapes
:Q
unstackUnpackShape:output:0*
T0*
_output_shapes
: : : *	
numX
Shape_1Const*
_output_shapes
:*
dtype0*
valueB"        S
	unstack_1UnpackShape_1:output:0*
T0*
_output_shapes
: : *	
num^
Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB"џџџџ    d
ReshapeReshapeinputsReshape/shape:output:0*
T0*'
_output_shapes
:џџџџџџџџџ _
transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       c
	transpose	Transpose	add_3:z:0transpose/perm:output:0*
T0*
_output_shapes

:  `
Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"    џџџџf
	Reshape_1Reshapetranspose:y:0Reshape_1/shape:output:0*
T0*
_output_shapes

:  h
MatMulMatMulReshape:output:0Reshape_1:output:0*
T0*'
_output_shapes
:џџџџџџџџџ S
Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :S
Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : 
Reshape_2/shapePackunstack:output:0Reshape_2/shape/1:output:0Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:v
	Reshape_2ReshapeMatMul:product:0Reshape_2/shape:output:0*
T0*+
_output_shapes
:џџџџџџџџџ I
Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :I
Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Q
Pow_1PowPow_1/x:output:0Pow_1/y:output:0*
T0*
_output_shapes
: I
Cast_1Cast	Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: f
ReadVariableOp_3ReadVariableOpreadvariableop_3_resource*
_output_shapes
: *
dtype0L
mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A]
mul_4MulReadVariableOp_3:value:0mul_4/y:output:0*
T0*
_output_shapes
: P
	truediv_2RealDiv	mul_4:z:0
Cast_1:y:0*
T0*
_output_shapes
: @
Neg_2Negtruediv_2:z:0*
T0*
_output_shapes
: D
Round_1Roundtruediv_2:z:0*
T0*
_output_shapes
: K
add_4AddV2	Neg_2:y:0Round_1:y:0*
T0*
_output_shapes
: N
StopGradient_2StopGradient	add_4:z:0*
T0*
_output_shapes
: [
add_5AddV2truediv_2:z:0StopGradient_2:output:0*
T0*
_output_shapes
: ^
clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Сx
clip_by_value_1Maximumclip_by_value_1/Minimum:z:0clip_by_value_1/y:output:0*
T0*
_output_shapes
: R
mul_5Mul
Cast_1:y:0clip_by_value_1:z:0*
T0*
_output_shapes
: P
truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  AZ
	truediv_3RealDiv	mul_5:z:0truediv_3/y:output:0*
T0*
_output_shapes
: L
mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?R
mul_6Mulmul_6/x:output:0truediv_3:z:0*
T0*
_output_shapes
: f
ReadVariableOp_4ReadVariableOpreadvariableop_3_resource*
_output_shapes
: *
dtype0K
Neg_3NegReadVariableOp_4:value:0*
T0*
_output_shapes
: I
add_6AddV2	Neg_3:y:0	mul_6:z:0*
T0*
_output_shapes
: L
mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?N
mul_7Mulmul_7/x:output:0	add_6:z:0*
T0*
_output_shapes
: N
StopGradient_3StopGradient	mul_7:z:0*
T0*
_output_shapes
: f
ReadVariableOp_5ReadVariableOpreadvariableop_3_resource*
_output_shapes
: *
dtype0f
add_7AddV2ReadVariableOp_5:value:0StopGradient_3:output:0*
T0*
_output_shapes
: g
BiasAddBiasAddReshape_2:output:0	add_7:z:0*
T0*+
_output_shapes
:џџџџџџџџџ c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:џџџџџџџџџ Ж
NoOpNoOp^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:џџџџџџџџџ : : 2 
ReadVariableOpReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_5:S O
+
_output_shapes
:џџџџџџџџџ 
 
_user_specified_nameinputs
Ќ
K
#__inference__update_step_xla_460107
gradient
variable: *
_XlaMustCompile(*(
_construction_contextkEagerRuntime*
_input_shapes

: : *
	_noinline(:D @

_output_shapes
: 
"
_user_specified_name
gradient:($
"
_user_specified_name
variable
З

њ
5__inference_DeepSetsInvQuantised_layer_call_fn_458928

inputs
unknown: 
	unknown_0: 
	unknown_1:  
	unknown_2: 
	unknown_3:  
	unknown_4: 
	unknown_5:  
	unknown_6: 
	unknown_7: 
	unknown_8:
identityЂStatefulPartitionedCallв
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4	unknown_5	unknown_6	unknown_7	unknown_8*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:џџџџџџџџџ*,
_read_only_resource_inputs

	
*2
config_proto" 

CPU

GPU2 *0J 8 *Y
fTRR
P__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_458692o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:џџџџџџџџџ`
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:џџџџџџџџџ: : : : : : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:S O
+
_output_shapes
:џџџџџџџџџ
 
_user_specified_nameinputs
ўз

F__inference_sequential_layer_call_and_return_conditional_losses_460915

inputs1
q_dense_readvariableop_resource: /
!q_dense_readvariableop_3_resource: 3
!q_dense_1_readvariableop_resource:  1
#q_dense_1_readvariableop_3_resource: 3
!q_dense_2_readvariableop_resource:  1
#q_dense_2_readvariableop_3_resource: 
identityЂq_dense/ReadVariableOpЂq_dense/ReadVariableOp_1Ђq_dense/ReadVariableOp_2Ђq_dense/ReadVariableOp_3Ђq_dense/ReadVariableOp_4Ђq_dense/ReadVariableOp_5Ђq_dense_1/ReadVariableOpЂq_dense_1/ReadVariableOp_1Ђq_dense_1/ReadVariableOp_2Ђq_dense_1/ReadVariableOp_3Ђq_dense_1/ReadVariableOp_4Ђq_dense_1/ReadVariableOp_5Ђq_dense_2/ReadVariableOpЂq_dense_2/ReadVariableOp_1Ђq_dense_2/ReadVariableOp_2Ђq_dense_2/ReadVariableOp_3Ђq_dense_2/ReadVariableOp_4Ђq_dense_2/ReadVariableOp_5O
q_dense/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :O
q_dense/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : c
q_dense/PowPowq_dense/Pow/x:output:0q_dense/Pow/y:output:0*
T0*
_output_shapes
: U
q_dense/CastCastq_dense/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: v
q_dense/ReadVariableOpReadVariableOpq_dense_readvariableop_resource*
_output_shapes

: *
dtype0R
q_dense/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  As
q_dense/mulMulq_dense/ReadVariableOp:value:0q_dense/mul/y:output:0*
T0*
_output_shapes

: f
q_dense/truedivRealDivq_dense/mul:z:0q_dense/Cast:y:0*
T0*
_output_shapes

: P
q_dense/NegNegq_dense/truediv:z:0*
T0*
_output_shapes

: T
q_dense/RoundRoundq_dense/truediv:z:0*
T0*
_output_shapes

: a
q_dense/addAddV2q_dense/Neg:y:0q_dense/Round:y:0*
T0*
_output_shapes

: ^
q_dense/StopGradientStopGradientq_dense/add:z:0*
T0*
_output_shapes

: s
q_dense/add_1AddV2q_dense/truediv:z:0q_dense/StopGradient:output:0*
T0*
_output_shapes

: d
q_dense/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pA
q_dense/clip_by_value/MinimumMinimumq_dense/add_1:z:0(q_dense/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: \
q_dense/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  С
q_dense/clip_by_valueMaximum!q_dense/clip_by_value/Minimum:z:0 q_dense/clip_by_value/y:output:0*
T0*
_output_shapes

: j
q_dense/mul_1Mulq_dense/Cast:y:0q_dense/clip_by_value:z:0*
T0*
_output_shapes

: X
q_dense/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Av
q_dense/truediv_1RealDivq_dense/mul_1:z:0q_dense/truediv_1/y:output:0*
T0*
_output_shapes

: T
q_dense/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?n
q_dense/mul_2Mulq_dense/mul_2/x:output:0q_dense/truediv_1:z:0*
T0*
_output_shapes

: x
q_dense/ReadVariableOp_1ReadVariableOpq_dense_readvariableop_resource*
_output_shapes

: *
dtype0_
q_dense/Neg_1Neg q_dense/ReadVariableOp_1:value:0*
T0*
_output_shapes

: e
q_dense/add_2AddV2q_dense/Neg_1:y:0q_dense/mul_2:z:0*
T0*
_output_shapes

: T
q_dense/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?j
q_dense/mul_3Mulq_dense/mul_3/x:output:0q_dense/add_2:z:0*
T0*
_output_shapes

: b
q_dense/StopGradient_1StopGradientq_dense/mul_3:z:0*
T0*
_output_shapes

: x
q_dense/ReadVariableOp_2ReadVariableOpq_dense_readvariableop_resource*
_output_shapes

: *
dtype0
q_dense/add_3AddV2 q_dense/ReadVariableOp_2:value:0q_dense/StopGradient_1:output:0*
T0*
_output_shapes

: C
q_dense/ShapeShapeinputs*
T0*
_output_shapes
:a
q_dense/unstackUnpackq_dense/Shape:output:0*
T0*
_output_shapes
: : : *	
num`
q_dense/Shape_1Const*
_output_shapes
:*
dtype0*
valueB"       c
q_dense/unstack_1Unpackq_dense/Shape_1:output:0*
T0*
_output_shapes
: : *	
numf
q_dense/Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB"џџџџ   t
q_dense/ReshapeReshapeinputsq_dense/Reshape/shape:output:0*
T0*'
_output_shapes
:џџџџџџџџџg
q_dense/transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       {
q_dense/transpose	Transposeq_dense/add_3:z:0q_dense/transpose/perm:output:0*
T0*
_output_shapes

: h
q_dense/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"   џџџџ~
q_dense/Reshape_1Reshapeq_dense/transpose:y:0 q_dense/Reshape_1/shape:output:0*
T0*
_output_shapes

: 
q_dense/MatMulMatMulq_dense/Reshape:output:0q_dense/Reshape_1:output:0*
T0*'
_output_shapes
:џџџџџџџџџ [
q_dense/Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :[
q_dense/Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : Џ
q_dense/Reshape_2/shapePackq_dense/unstack:output:0"q_dense/Reshape_2/shape/1:output:0"q_dense/Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:
q_dense/Reshape_2Reshapeq_dense/MatMul:product:0 q_dense/Reshape_2/shape:output:0*
T0*+
_output_shapes
:џџџџџџџџџ Q
q_dense/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :Q
q_dense/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : i
q_dense/Pow_1Powq_dense/Pow_1/x:output:0q_dense/Pow_1/y:output:0*
T0*
_output_shapes
: Y
q_dense/Cast_1Castq_dense/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: v
q_dense/ReadVariableOp_3ReadVariableOp!q_dense_readvariableop_3_resource*
_output_shapes
: *
dtype0T
q_dense/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Au
q_dense/mul_4Mul q_dense/ReadVariableOp_3:value:0q_dense/mul_4/y:output:0*
T0*
_output_shapes
: h
q_dense/truediv_2RealDivq_dense/mul_4:z:0q_dense/Cast_1:y:0*
T0*
_output_shapes
: P
q_dense/Neg_2Negq_dense/truediv_2:z:0*
T0*
_output_shapes
: T
q_dense/Round_1Roundq_dense/truediv_2:z:0*
T0*
_output_shapes
: c
q_dense/add_4AddV2q_dense/Neg_2:y:0q_dense/Round_1:y:0*
T0*
_output_shapes
: ^
q_dense/StopGradient_2StopGradientq_dense/add_4:z:0*
T0*
_output_shapes
: s
q_dense/add_5AddV2q_dense/truediv_2:z:0q_dense/StopGradient_2:output:0*
T0*
_output_shapes
: f
!q_dense/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pA
q_dense/clip_by_value_1/MinimumMinimumq_dense/add_5:z:0*q_dense/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: ^
q_dense/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  С
q_dense/clip_by_value_1Maximum#q_dense/clip_by_value_1/Minimum:z:0"q_dense/clip_by_value_1/y:output:0*
T0*
_output_shapes
: j
q_dense/mul_5Mulq_dense/Cast_1:y:0q_dense/clip_by_value_1:z:0*
T0*
_output_shapes
: X
q_dense/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Ar
q_dense/truediv_3RealDivq_dense/mul_5:z:0q_dense/truediv_3/y:output:0*
T0*
_output_shapes
: T
q_dense/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?j
q_dense/mul_6Mulq_dense/mul_6/x:output:0q_dense/truediv_3:z:0*
T0*
_output_shapes
: v
q_dense/ReadVariableOp_4ReadVariableOp!q_dense_readvariableop_3_resource*
_output_shapes
: *
dtype0[
q_dense/Neg_3Neg q_dense/ReadVariableOp_4:value:0*
T0*
_output_shapes
: a
q_dense/add_6AddV2q_dense/Neg_3:y:0q_dense/mul_6:z:0*
T0*
_output_shapes
: T
q_dense/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?f
q_dense/mul_7Mulq_dense/mul_7/x:output:0q_dense/add_6:z:0*
T0*
_output_shapes
: ^
q_dense/StopGradient_3StopGradientq_dense/mul_7:z:0*
T0*
_output_shapes
: v
q_dense/ReadVariableOp_5ReadVariableOp!q_dense_readvariableop_3_resource*
_output_shapes
: *
dtype0~
q_dense/add_7AddV2 q_dense/ReadVariableOp_5:value:0q_dense/StopGradient_3:output:0*
T0*
_output_shapes
: 
q_dense/BiasAddBiasAddq_dense/Reshape_2:output:0q_dense/add_7:z:0*
T0*+
_output_shapes
:џџџџџџџџџ T
q_activation/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :T
q_activation/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :r
q_activation/PowPowq_activation/Pow/x:output:0q_activation/Pow/y:output:0*
T0*
_output_shapes
: _
q_activation/CastCastq_activation/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: V
q_activation/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :V
q_activation/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : x
q_activation/Pow_1Powq_activation/Pow_1/x:output:0q_activation/Pow_1/y:output:0*
T0*
_output_shapes
: c
q_activation/Cast_1Castq_activation/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: W
q_activation/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *   @W
q_activation/Cast_2/xConst*
_output_shapes
: *
dtype0*
value	B : k
q_activation/Cast_2Castq_activation/Cast_2/x:output:0*

DstT0*

SrcT0*
_output_shapes
: W
q_activation/sub/yConst*
_output_shapes
: *
dtype0*
valueB
 *   An
q_activation/subSubq_activation/Cast_2:y:0q_activation/sub/y:output:0*
T0*
_output_shapes
: m
q_activation/Pow_2Powq_activation/Const:output:0q_activation/sub:z:0*
T0*
_output_shapes
: k
q_activation/sub_1Subq_activation/Cast_1:y:0q_activation/Pow_2:z:0*
T0*
_output_shapes
: 
q_activation/LessEqual	LessEqualq_dense/BiasAdd:output:0q_activation/sub_1:z:0*
T0*+
_output_shapes
:џџџџџџџџџ i
q_activation/ReluReluq_dense/BiasAdd:output:0*
T0*+
_output_shapes
:џџџџџџџџџ d
q_activation/ones_like/ShapeShapeq_dense/BiasAdd:output:0*
T0*
_output_shapes
:a
q_activation/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  ?Ђ
q_activation/ones_likeFill%q_activation/ones_like/Shape:output:0%q_activation/ones_like/Const:output:0*
T0*+
_output_shapes
:џџџџџџџџџ k
q_activation/sub_2Subq_activation/Cast_1:y:0q_activation/Pow_2:z:0*
T0*
_output_shapes
: 
q_activation/mulMulq_activation/ones_like:output:0q_activation/sub_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ Њ
q_activation/SelectV2SelectV2q_activation/LessEqual:z:0q_activation/Relu:activations:0q_activation/mul:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation/mul_1Mulq_dense/BiasAdd:output:0q_activation/Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation/truedivRealDivq_activation/mul_1:z:0q_activation/Cast_1:y:0*
T0*+
_output_shapes
:џџџџџџџџџ g
q_activation/NegNegq_activation/truediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ k
q_activation/RoundRoundq_activation/truediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ }
q_activation/addAddV2q_activation/Neg:y:0q_activation/Round:y:0*
T0*+
_output_shapes
:џџџџџџџџџ u
q_activation/StopGradientStopGradientq_activation/add:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation/add_1AddV2q_activation/truediv:z:0"q_activation/StopGradient:output:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation/truediv_1RealDivq_activation/add_1:z:0q_activation/Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ ]
q_activation/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?|
q_activation/truediv_2RealDiv!q_activation/truediv_2/x:output:0q_activation/Cast:y:0*
T0*
_output_shapes
: Y
q_activation/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?u
q_activation/sub_3Subq_activation/sub_3/x:output:0q_activation/truediv_2:z:0*
T0*
_output_shapes
: 
"q_activation/clip_by_value/MinimumMinimumq_activation/truediv_1:z:0q_activation/sub_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ a
q_activation/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    Њ
q_activation/clip_by_valueMaximum&q_activation/clip_by_value/Minimum:z:0%q_activation/clip_by_value/y:output:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation/mul_2Mulq_activation/Cast_1:y:0q_activation/clip_by_value:z:0*
T0*+
_output_shapes
:џџџџџџџџџ o
q_activation/Neg_1Negq_activation/SelectV2:output:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation/add_2AddV2q_activation/Neg_1:y:0q_activation/mul_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ Y
q_activation/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
q_activation/mul_3Mulq_activation/mul_3/x:output:0q_activation/add_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ y
q_activation/StopGradient_1StopGradientq_activation/mul_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation/add_3AddV2q_activation/SelectV2:output:0$q_activation/StopGradient_1:output:0*
T0*+
_output_shapes
:џџџџџџџџџ Q
q_dense_1/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :Q
q_dense_1/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : i
q_dense_1/PowPowq_dense_1/Pow/x:output:0q_dense_1/Pow/y:output:0*
T0*
_output_shapes
: Y
q_dense_1/CastCastq_dense_1/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: z
q_dense_1/ReadVariableOpReadVariableOp!q_dense_1_readvariableop_resource*
_output_shapes

:  *
dtype0T
q_dense_1/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Ay
q_dense_1/mulMul q_dense_1/ReadVariableOp:value:0q_dense_1/mul/y:output:0*
T0*
_output_shapes

:  l
q_dense_1/truedivRealDivq_dense_1/mul:z:0q_dense_1/Cast:y:0*
T0*
_output_shapes

:  T
q_dense_1/NegNegq_dense_1/truediv:z:0*
T0*
_output_shapes

:  X
q_dense_1/RoundRoundq_dense_1/truediv:z:0*
T0*
_output_shapes

:  g
q_dense_1/addAddV2q_dense_1/Neg:y:0q_dense_1/Round:y:0*
T0*
_output_shapes

:  b
q_dense_1/StopGradientStopGradientq_dense_1/add:z:0*
T0*
_output_shapes

:  y
q_dense_1/add_1AddV2q_dense_1/truediv:z:0q_dense_1/StopGradient:output:0*
T0*
_output_shapes

:  f
!q_dense_1/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pA
q_dense_1/clip_by_value/MinimumMinimumq_dense_1/add_1:z:0*q_dense_1/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  ^
q_dense_1/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  С
q_dense_1/clip_by_valueMaximum#q_dense_1/clip_by_value/Minimum:z:0"q_dense_1/clip_by_value/y:output:0*
T0*
_output_shapes

:  p
q_dense_1/mul_1Mulq_dense_1/Cast:y:0q_dense_1/clip_by_value:z:0*
T0*
_output_shapes

:  Z
q_dense_1/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A|
q_dense_1/truediv_1RealDivq_dense_1/mul_1:z:0q_dense_1/truediv_1/y:output:0*
T0*
_output_shapes

:  V
q_dense_1/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?t
q_dense_1/mul_2Mulq_dense_1/mul_2/x:output:0q_dense_1/truediv_1:z:0*
T0*
_output_shapes

:  |
q_dense_1/ReadVariableOp_1ReadVariableOp!q_dense_1_readvariableop_resource*
_output_shapes

:  *
dtype0c
q_dense_1/Neg_1Neg"q_dense_1/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  k
q_dense_1/add_2AddV2q_dense_1/Neg_1:y:0q_dense_1/mul_2:z:0*
T0*
_output_shapes

:  V
q_dense_1/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?p
q_dense_1/mul_3Mulq_dense_1/mul_3/x:output:0q_dense_1/add_2:z:0*
T0*
_output_shapes

:  f
q_dense_1/StopGradient_1StopGradientq_dense_1/mul_3:z:0*
T0*
_output_shapes

:  |
q_dense_1/ReadVariableOp_2ReadVariableOp!q_dense_1_readvariableop_resource*
_output_shapes

:  *
dtype0
q_dense_1/add_3AddV2"q_dense_1/ReadVariableOp_2:value:0!q_dense_1/StopGradient_1:output:0*
T0*
_output_shapes

:  U
q_dense_1/ShapeShapeq_activation/add_3:z:0*
T0*
_output_shapes
:e
q_dense_1/unstackUnpackq_dense_1/Shape:output:0*
T0*
_output_shapes
: : : *	
numb
q_dense_1/Shape_1Const*
_output_shapes
:*
dtype0*
valueB"        g
q_dense_1/unstack_1Unpackq_dense_1/Shape_1:output:0*
T0*
_output_shapes
: : *	
numh
q_dense_1/Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB"џџџџ    
q_dense_1/ReshapeReshapeq_activation/add_3:z:0 q_dense_1/Reshape/shape:output:0*
T0*'
_output_shapes
:џџџџџџџџџ i
q_dense_1/transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       
q_dense_1/transpose	Transposeq_dense_1/add_3:z:0!q_dense_1/transpose/perm:output:0*
T0*
_output_shapes

:  j
q_dense_1/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"    џџџџ
q_dense_1/Reshape_1Reshapeq_dense_1/transpose:y:0"q_dense_1/Reshape_1/shape:output:0*
T0*
_output_shapes

:  
q_dense_1/MatMulMatMulq_dense_1/Reshape:output:0q_dense_1/Reshape_1:output:0*
T0*'
_output_shapes
:џџџџџџџџџ ]
q_dense_1/Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :]
q_dense_1/Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : З
q_dense_1/Reshape_2/shapePackq_dense_1/unstack:output:0$q_dense_1/Reshape_2/shape/1:output:0$q_dense_1/Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:
q_dense_1/Reshape_2Reshapeq_dense_1/MatMul:product:0"q_dense_1/Reshape_2/shape:output:0*
T0*+
_output_shapes
:џџџџџџџџџ S
q_dense_1/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :S
q_dense_1/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : o
q_dense_1/Pow_1Powq_dense_1/Pow_1/x:output:0q_dense_1/Pow_1/y:output:0*
T0*
_output_shapes
: ]
q_dense_1/Cast_1Castq_dense_1/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: z
q_dense_1/ReadVariableOp_3ReadVariableOp#q_dense_1_readvariableop_3_resource*
_output_shapes
: *
dtype0V
q_dense_1/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A{
q_dense_1/mul_4Mul"q_dense_1/ReadVariableOp_3:value:0q_dense_1/mul_4/y:output:0*
T0*
_output_shapes
: n
q_dense_1/truediv_2RealDivq_dense_1/mul_4:z:0q_dense_1/Cast_1:y:0*
T0*
_output_shapes
: T
q_dense_1/Neg_2Negq_dense_1/truediv_2:z:0*
T0*
_output_shapes
: X
q_dense_1/Round_1Roundq_dense_1/truediv_2:z:0*
T0*
_output_shapes
: i
q_dense_1/add_4AddV2q_dense_1/Neg_2:y:0q_dense_1/Round_1:y:0*
T0*
_output_shapes
: b
q_dense_1/StopGradient_2StopGradientq_dense_1/add_4:z:0*
T0*
_output_shapes
: y
q_dense_1/add_5AddV2q_dense_1/truediv_2:z:0!q_dense_1/StopGradient_2:output:0*
T0*
_output_shapes
: h
#q_dense_1/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pA
!q_dense_1/clip_by_value_1/MinimumMinimumq_dense_1/add_5:z:0,q_dense_1/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: `
q_dense_1/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  С
q_dense_1/clip_by_value_1Maximum%q_dense_1/clip_by_value_1/Minimum:z:0$q_dense_1/clip_by_value_1/y:output:0*
T0*
_output_shapes
: p
q_dense_1/mul_5Mulq_dense_1/Cast_1:y:0q_dense_1/clip_by_value_1:z:0*
T0*
_output_shapes
: Z
q_dense_1/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Ax
q_dense_1/truediv_3RealDivq_dense_1/mul_5:z:0q_dense_1/truediv_3/y:output:0*
T0*
_output_shapes
: V
q_dense_1/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?p
q_dense_1/mul_6Mulq_dense_1/mul_6/x:output:0q_dense_1/truediv_3:z:0*
T0*
_output_shapes
: z
q_dense_1/ReadVariableOp_4ReadVariableOp#q_dense_1_readvariableop_3_resource*
_output_shapes
: *
dtype0_
q_dense_1/Neg_3Neg"q_dense_1/ReadVariableOp_4:value:0*
T0*
_output_shapes
: g
q_dense_1/add_6AddV2q_dense_1/Neg_3:y:0q_dense_1/mul_6:z:0*
T0*
_output_shapes
: V
q_dense_1/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?l
q_dense_1/mul_7Mulq_dense_1/mul_7/x:output:0q_dense_1/add_6:z:0*
T0*
_output_shapes
: b
q_dense_1/StopGradient_3StopGradientq_dense_1/mul_7:z:0*
T0*
_output_shapes
: z
q_dense_1/ReadVariableOp_5ReadVariableOp#q_dense_1_readvariableop_3_resource*
_output_shapes
: *
dtype0
q_dense_1/add_7AddV2"q_dense_1/ReadVariableOp_5:value:0!q_dense_1/StopGradient_3:output:0*
T0*
_output_shapes
: 
q_dense_1/BiasAddBiasAddq_dense_1/Reshape_2:output:0q_dense_1/add_7:z:0*
T0*+
_output_shapes
:џџџџџџџџџ V
q_activation_1/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :V
q_activation_1/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :x
q_activation_1/PowPowq_activation_1/Pow/x:output:0q_activation_1/Pow/y:output:0*
T0*
_output_shapes
: c
q_activation_1/CastCastq_activation_1/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: X
q_activation_1/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :X
q_activation_1/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : ~
q_activation_1/Pow_1Powq_activation_1/Pow_1/x:output:0q_activation_1/Pow_1/y:output:0*
T0*
_output_shapes
: g
q_activation_1/Cast_1Castq_activation_1/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: Y
q_activation_1/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *   @Y
q_activation_1/Cast_2/xConst*
_output_shapes
: *
dtype0*
value	B : o
q_activation_1/Cast_2Cast q_activation_1/Cast_2/x:output:0*

DstT0*

SrcT0*
_output_shapes
: Y
q_activation_1/sub/yConst*
_output_shapes
: *
dtype0*
valueB
 *   At
q_activation_1/subSubq_activation_1/Cast_2:y:0q_activation_1/sub/y:output:0*
T0*
_output_shapes
: s
q_activation_1/Pow_2Powq_activation_1/Const:output:0q_activation_1/sub:z:0*
T0*
_output_shapes
: q
q_activation_1/sub_1Subq_activation_1/Cast_1:y:0q_activation_1/Pow_2:z:0*
T0*
_output_shapes
: 
q_activation_1/LessEqual	LessEqualq_dense_1/BiasAdd:output:0q_activation_1/sub_1:z:0*
T0*+
_output_shapes
:џџџџџџџџџ m
q_activation_1/ReluReluq_dense_1/BiasAdd:output:0*
T0*+
_output_shapes
:џџџџџџџџџ h
q_activation_1/ones_like/ShapeShapeq_dense_1/BiasAdd:output:0*
T0*
_output_shapes
:c
q_activation_1/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  ?Ј
q_activation_1/ones_likeFill'q_activation_1/ones_like/Shape:output:0'q_activation_1/ones_like/Const:output:0*
T0*+
_output_shapes
:џџџџџџџџџ q
q_activation_1/sub_2Subq_activation_1/Cast_1:y:0q_activation_1/Pow_2:z:0*
T0*
_output_shapes
: 
q_activation_1/mulMul!q_activation_1/ones_like:output:0q_activation_1/sub_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ В
q_activation_1/SelectV2SelectV2q_activation_1/LessEqual:z:0!q_activation_1/Relu:activations:0q_activation_1/mul:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation_1/mul_1Mulq_dense_1/BiasAdd:output:0q_activation_1/Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation_1/truedivRealDivq_activation_1/mul_1:z:0q_activation_1/Cast_1:y:0*
T0*+
_output_shapes
:џџџџџџџџџ k
q_activation_1/NegNegq_activation_1/truediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ o
q_activation_1/RoundRoundq_activation_1/truediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation_1/addAddV2q_activation_1/Neg:y:0q_activation_1/Round:y:0*
T0*+
_output_shapes
:џџџџџџџџџ y
q_activation_1/StopGradientStopGradientq_activation_1/add:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation_1/add_1AddV2q_activation_1/truediv:z:0$q_activation_1/StopGradient:output:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation_1/truediv_1RealDivq_activation_1/add_1:z:0q_activation_1/Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ _
q_activation_1/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
q_activation_1/truediv_2RealDiv#q_activation_1/truediv_2/x:output:0q_activation_1/Cast:y:0*
T0*
_output_shapes
: [
q_activation_1/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?{
q_activation_1/sub_3Subq_activation_1/sub_3/x:output:0q_activation_1/truediv_2:z:0*
T0*
_output_shapes
: 
$q_activation_1/clip_by_value/MinimumMinimumq_activation_1/truediv_1:z:0q_activation_1/sub_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ c
q_activation_1/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    А
q_activation_1/clip_by_valueMaximum(q_activation_1/clip_by_value/Minimum:z:0'q_activation_1/clip_by_value/y:output:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation_1/mul_2Mulq_activation_1/Cast_1:y:0 q_activation_1/clip_by_value:z:0*
T0*+
_output_shapes
:џџџџџџџџџ s
q_activation_1/Neg_1Neg q_activation_1/SelectV2:output:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation_1/add_2AddV2q_activation_1/Neg_1:y:0q_activation_1/mul_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ [
q_activation_1/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
q_activation_1/mul_3Mulq_activation_1/mul_3/x:output:0q_activation_1/add_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ }
q_activation_1/StopGradient_1StopGradientq_activation_1/mul_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation_1/add_3AddV2 q_activation_1/SelectV2:output:0&q_activation_1/StopGradient_1:output:0*
T0*+
_output_shapes
:џџџџџџџџџ Q
q_dense_2/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :Q
q_dense_2/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : i
q_dense_2/PowPowq_dense_2/Pow/x:output:0q_dense_2/Pow/y:output:0*
T0*
_output_shapes
: Y
q_dense_2/CastCastq_dense_2/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: z
q_dense_2/ReadVariableOpReadVariableOp!q_dense_2_readvariableop_resource*
_output_shapes

:  *
dtype0T
q_dense_2/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Ay
q_dense_2/mulMul q_dense_2/ReadVariableOp:value:0q_dense_2/mul/y:output:0*
T0*
_output_shapes

:  l
q_dense_2/truedivRealDivq_dense_2/mul:z:0q_dense_2/Cast:y:0*
T0*
_output_shapes

:  T
q_dense_2/NegNegq_dense_2/truediv:z:0*
T0*
_output_shapes

:  X
q_dense_2/RoundRoundq_dense_2/truediv:z:0*
T0*
_output_shapes

:  g
q_dense_2/addAddV2q_dense_2/Neg:y:0q_dense_2/Round:y:0*
T0*
_output_shapes

:  b
q_dense_2/StopGradientStopGradientq_dense_2/add:z:0*
T0*
_output_shapes

:  y
q_dense_2/add_1AddV2q_dense_2/truediv:z:0q_dense_2/StopGradient:output:0*
T0*
_output_shapes

:  f
!q_dense_2/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pA
q_dense_2/clip_by_value/MinimumMinimumq_dense_2/add_1:z:0*q_dense_2/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  ^
q_dense_2/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  С
q_dense_2/clip_by_valueMaximum#q_dense_2/clip_by_value/Minimum:z:0"q_dense_2/clip_by_value/y:output:0*
T0*
_output_shapes

:  p
q_dense_2/mul_1Mulq_dense_2/Cast:y:0q_dense_2/clip_by_value:z:0*
T0*
_output_shapes

:  Z
q_dense_2/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A|
q_dense_2/truediv_1RealDivq_dense_2/mul_1:z:0q_dense_2/truediv_1/y:output:0*
T0*
_output_shapes

:  V
q_dense_2/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?t
q_dense_2/mul_2Mulq_dense_2/mul_2/x:output:0q_dense_2/truediv_1:z:0*
T0*
_output_shapes

:  |
q_dense_2/ReadVariableOp_1ReadVariableOp!q_dense_2_readvariableop_resource*
_output_shapes

:  *
dtype0c
q_dense_2/Neg_1Neg"q_dense_2/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  k
q_dense_2/add_2AddV2q_dense_2/Neg_1:y:0q_dense_2/mul_2:z:0*
T0*
_output_shapes

:  V
q_dense_2/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?p
q_dense_2/mul_3Mulq_dense_2/mul_3/x:output:0q_dense_2/add_2:z:0*
T0*
_output_shapes

:  f
q_dense_2/StopGradient_1StopGradientq_dense_2/mul_3:z:0*
T0*
_output_shapes

:  |
q_dense_2/ReadVariableOp_2ReadVariableOp!q_dense_2_readvariableop_resource*
_output_shapes

:  *
dtype0
q_dense_2/add_3AddV2"q_dense_2/ReadVariableOp_2:value:0!q_dense_2/StopGradient_1:output:0*
T0*
_output_shapes

:  W
q_dense_2/ShapeShapeq_activation_1/add_3:z:0*
T0*
_output_shapes
:e
q_dense_2/unstackUnpackq_dense_2/Shape:output:0*
T0*
_output_shapes
: : : *	
numb
q_dense_2/Shape_1Const*
_output_shapes
:*
dtype0*
valueB"        g
q_dense_2/unstack_1Unpackq_dense_2/Shape_1:output:0*
T0*
_output_shapes
: : *	
numh
q_dense_2/Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB"џџџџ    
q_dense_2/ReshapeReshapeq_activation_1/add_3:z:0 q_dense_2/Reshape/shape:output:0*
T0*'
_output_shapes
:џџџџџџџџџ i
q_dense_2/transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       
q_dense_2/transpose	Transposeq_dense_2/add_3:z:0!q_dense_2/transpose/perm:output:0*
T0*
_output_shapes

:  j
q_dense_2/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"    џџџџ
q_dense_2/Reshape_1Reshapeq_dense_2/transpose:y:0"q_dense_2/Reshape_1/shape:output:0*
T0*
_output_shapes

:  
q_dense_2/MatMulMatMulq_dense_2/Reshape:output:0q_dense_2/Reshape_1:output:0*
T0*'
_output_shapes
:џџџџџџџџџ ]
q_dense_2/Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :]
q_dense_2/Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : З
q_dense_2/Reshape_2/shapePackq_dense_2/unstack:output:0$q_dense_2/Reshape_2/shape/1:output:0$q_dense_2/Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:
q_dense_2/Reshape_2Reshapeq_dense_2/MatMul:product:0"q_dense_2/Reshape_2/shape:output:0*
T0*+
_output_shapes
:џџџџџџџџџ S
q_dense_2/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :S
q_dense_2/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : o
q_dense_2/Pow_1Powq_dense_2/Pow_1/x:output:0q_dense_2/Pow_1/y:output:0*
T0*
_output_shapes
: ]
q_dense_2/Cast_1Castq_dense_2/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: z
q_dense_2/ReadVariableOp_3ReadVariableOp#q_dense_2_readvariableop_3_resource*
_output_shapes
: *
dtype0V
q_dense_2/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A{
q_dense_2/mul_4Mul"q_dense_2/ReadVariableOp_3:value:0q_dense_2/mul_4/y:output:0*
T0*
_output_shapes
: n
q_dense_2/truediv_2RealDivq_dense_2/mul_4:z:0q_dense_2/Cast_1:y:0*
T0*
_output_shapes
: T
q_dense_2/Neg_2Negq_dense_2/truediv_2:z:0*
T0*
_output_shapes
: X
q_dense_2/Round_1Roundq_dense_2/truediv_2:z:0*
T0*
_output_shapes
: i
q_dense_2/add_4AddV2q_dense_2/Neg_2:y:0q_dense_2/Round_1:y:0*
T0*
_output_shapes
: b
q_dense_2/StopGradient_2StopGradientq_dense_2/add_4:z:0*
T0*
_output_shapes
: y
q_dense_2/add_5AddV2q_dense_2/truediv_2:z:0!q_dense_2/StopGradient_2:output:0*
T0*
_output_shapes
: h
#q_dense_2/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pA
!q_dense_2/clip_by_value_1/MinimumMinimumq_dense_2/add_5:z:0,q_dense_2/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: `
q_dense_2/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  С
q_dense_2/clip_by_value_1Maximum%q_dense_2/clip_by_value_1/Minimum:z:0$q_dense_2/clip_by_value_1/y:output:0*
T0*
_output_shapes
: p
q_dense_2/mul_5Mulq_dense_2/Cast_1:y:0q_dense_2/clip_by_value_1:z:0*
T0*
_output_shapes
: Z
q_dense_2/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Ax
q_dense_2/truediv_3RealDivq_dense_2/mul_5:z:0q_dense_2/truediv_3/y:output:0*
T0*
_output_shapes
: V
q_dense_2/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?p
q_dense_2/mul_6Mulq_dense_2/mul_6/x:output:0q_dense_2/truediv_3:z:0*
T0*
_output_shapes
: z
q_dense_2/ReadVariableOp_4ReadVariableOp#q_dense_2_readvariableop_3_resource*
_output_shapes
: *
dtype0_
q_dense_2/Neg_3Neg"q_dense_2/ReadVariableOp_4:value:0*
T0*
_output_shapes
: g
q_dense_2/add_6AddV2q_dense_2/Neg_3:y:0q_dense_2/mul_6:z:0*
T0*
_output_shapes
: V
q_dense_2/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?l
q_dense_2/mul_7Mulq_dense_2/mul_7/x:output:0q_dense_2/add_6:z:0*
T0*
_output_shapes
: b
q_dense_2/StopGradient_3StopGradientq_dense_2/mul_7:z:0*
T0*
_output_shapes
: z
q_dense_2/ReadVariableOp_5ReadVariableOp#q_dense_2_readvariableop_3_resource*
_output_shapes
: *
dtype0
q_dense_2/add_7AddV2"q_dense_2/ReadVariableOp_5:value:0!q_dense_2/StopGradient_3:output:0*
T0*
_output_shapes
: 
q_dense_2/BiasAddBiasAddq_dense_2/Reshape_2:output:0q_dense_2/add_7:z:0*
T0*+
_output_shapes
:џџџџџџџџџ V
q_activation_2/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :V
q_activation_2/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :x
q_activation_2/PowPowq_activation_2/Pow/x:output:0q_activation_2/Pow/y:output:0*
T0*
_output_shapes
: c
q_activation_2/CastCastq_activation_2/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: X
q_activation_2/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :X
q_activation_2/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : ~
q_activation_2/Pow_1Powq_activation_2/Pow_1/x:output:0q_activation_2/Pow_1/y:output:0*
T0*
_output_shapes
: g
q_activation_2/Cast_1Castq_activation_2/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: Y
q_activation_2/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *   @Y
q_activation_2/Cast_2/xConst*
_output_shapes
: *
dtype0*
value	B : o
q_activation_2/Cast_2Cast q_activation_2/Cast_2/x:output:0*

DstT0*

SrcT0*
_output_shapes
: Y
q_activation_2/sub/yConst*
_output_shapes
: *
dtype0*
valueB
 *   At
q_activation_2/subSubq_activation_2/Cast_2:y:0q_activation_2/sub/y:output:0*
T0*
_output_shapes
: s
q_activation_2/Pow_2Powq_activation_2/Const:output:0q_activation_2/sub:z:0*
T0*
_output_shapes
: q
q_activation_2/sub_1Subq_activation_2/Cast_1:y:0q_activation_2/Pow_2:z:0*
T0*
_output_shapes
: 
q_activation_2/LessEqual	LessEqualq_dense_2/BiasAdd:output:0q_activation_2/sub_1:z:0*
T0*+
_output_shapes
:џџџџџџџџџ m
q_activation_2/ReluReluq_dense_2/BiasAdd:output:0*
T0*+
_output_shapes
:џџџџџџџџџ h
q_activation_2/ones_like/ShapeShapeq_dense_2/BiasAdd:output:0*
T0*
_output_shapes
:c
q_activation_2/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  ?Ј
q_activation_2/ones_likeFill'q_activation_2/ones_like/Shape:output:0'q_activation_2/ones_like/Const:output:0*
T0*+
_output_shapes
:џџџџџџџџџ q
q_activation_2/sub_2Subq_activation_2/Cast_1:y:0q_activation_2/Pow_2:z:0*
T0*
_output_shapes
: 
q_activation_2/mulMul!q_activation_2/ones_like:output:0q_activation_2/sub_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ В
q_activation_2/SelectV2SelectV2q_activation_2/LessEqual:z:0!q_activation_2/Relu:activations:0q_activation_2/mul:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation_2/mul_1Mulq_dense_2/BiasAdd:output:0q_activation_2/Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation_2/truedivRealDivq_activation_2/mul_1:z:0q_activation_2/Cast_1:y:0*
T0*+
_output_shapes
:џџџџџџџџџ k
q_activation_2/NegNegq_activation_2/truediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ o
q_activation_2/RoundRoundq_activation_2/truediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation_2/addAddV2q_activation_2/Neg:y:0q_activation_2/Round:y:0*
T0*+
_output_shapes
:џџџџџџџџџ y
q_activation_2/StopGradientStopGradientq_activation_2/add:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation_2/add_1AddV2q_activation_2/truediv:z:0$q_activation_2/StopGradient:output:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation_2/truediv_1RealDivq_activation_2/add_1:z:0q_activation_2/Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ _
q_activation_2/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
q_activation_2/truediv_2RealDiv#q_activation_2/truediv_2/x:output:0q_activation_2/Cast:y:0*
T0*
_output_shapes
: [
q_activation_2/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?{
q_activation_2/sub_3Subq_activation_2/sub_3/x:output:0q_activation_2/truediv_2:z:0*
T0*
_output_shapes
: 
$q_activation_2/clip_by_value/MinimumMinimumq_activation_2/truediv_1:z:0q_activation_2/sub_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ c
q_activation_2/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    А
q_activation_2/clip_by_valueMaximum(q_activation_2/clip_by_value/Minimum:z:0'q_activation_2/clip_by_value/y:output:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation_2/mul_2Mulq_activation_2/Cast_1:y:0 q_activation_2/clip_by_value:z:0*
T0*+
_output_shapes
:џџџџџџџџџ s
q_activation_2/Neg_1Neg q_activation_2/SelectV2:output:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation_2/add_2AddV2q_activation_2/Neg_1:y:0q_activation_2/mul_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ [
q_activation_2/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
q_activation_2/mul_3Mulq_activation_2/mul_3/x:output:0q_activation_2/add_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ }
q_activation_2/StopGradient_1StopGradientq_activation_2/mul_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation_2/add_3AddV2 q_activation_2/SelectV2:output:0&q_activation_2/StopGradient_1:output:0*
T0*+
_output_shapes
:џџџџџџџџџ k
IdentityIdentityq_activation_2/add_3:z:0^NoOp*
T0*+
_output_shapes
:џџџџџџџџџ О
NoOpNoOp^q_dense/ReadVariableOp^q_dense/ReadVariableOp_1^q_dense/ReadVariableOp_2^q_dense/ReadVariableOp_3^q_dense/ReadVariableOp_4^q_dense/ReadVariableOp_5^q_dense_1/ReadVariableOp^q_dense_1/ReadVariableOp_1^q_dense_1/ReadVariableOp_2^q_dense_1/ReadVariableOp_3^q_dense_1/ReadVariableOp_4^q_dense_1/ReadVariableOp_5^q_dense_2/ReadVariableOp^q_dense_2/ReadVariableOp_1^q_dense_2/ReadVariableOp_2^q_dense_2/ReadVariableOp_3^q_dense_2/ReadVariableOp_4^q_dense_2/ReadVariableOp_5*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*6
_input_shapes%
#:џџџџџџџџџ: : : : : : 20
q_dense/ReadVariableOpq_dense/ReadVariableOp24
q_dense/ReadVariableOp_1q_dense/ReadVariableOp_124
q_dense/ReadVariableOp_2q_dense/ReadVariableOp_224
q_dense/ReadVariableOp_3q_dense/ReadVariableOp_324
q_dense/ReadVariableOp_4q_dense/ReadVariableOp_424
q_dense/ReadVariableOp_5q_dense/ReadVariableOp_524
q_dense_1/ReadVariableOpq_dense_1/ReadVariableOp28
q_dense_1/ReadVariableOp_1q_dense_1/ReadVariableOp_128
q_dense_1/ReadVariableOp_2q_dense_1/ReadVariableOp_228
q_dense_1/ReadVariableOp_3q_dense_1/ReadVariableOp_328
q_dense_1/ReadVariableOp_4q_dense_1/ReadVariableOp_428
q_dense_1/ReadVariableOp_5q_dense_1/ReadVariableOp_524
q_dense_2/ReadVariableOpq_dense_2/ReadVariableOp28
q_dense_2/ReadVariableOp_1q_dense_2/ReadVariableOp_128
q_dense_2/ReadVariableOp_2q_dense_2/ReadVariableOp_228
q_dense_2/ReadVariableOp_3q_dense_2/ReadVariableOp_328
q_dense_2/ReadVariableOp_4q_dense_2/ReadVariableOp_428
q_dense_2/ReadVariableOp_5q_dense_2/ReadVariableOp_5:S O
+
_output_shapes
:џџџџџџџџџ
 
_user_specified_nameinputs


F__inference_sequential_layer_call_and_return_conditional_losses_458152

inputs 
q_dense_457811: 
q_dense_457813: "
q_dense_1_457953:  
q_dense_1_457955: "
q_dense_2_458095:  
q_dense_2_458097: 
identityЂq_dense/StatefulPartitionedCallЂ!q_dense_1/StatefulPartitionedCallЂ!q_dense_2/StatefulPartitionedCallѕ
q_dense/StatefulPartitionedCallStatefulPartitionedCallinputsq_dense_457811q_dense_457813*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8 *L
fGRE
C__inference_q_dense_layer_call_and_return_conditional_losses_457810ы
q_activation/PartitionedCallPartitionedCall(q_dense/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8 *Q
fLRJ
H__inference_q_activation_layer_call_and_return_conditional_losses_457865
!q_dense_1/StatefulPartitionedCallStatefulPartitionedCall%q_activation/PartitionedCall:output:0q_dense_1_457953q_dense_1_457955*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8 *N
fIRG
E__inference_q_dense_1_layer_call_and_return_conditional_losses_457952ё
q_activation_1/PartitionedCallPartitionedCall*q_dense_1/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8 *S
fNRL
J__inference_q_activation_1_layer_call_and_return_conditional_losses_458007
!q_dense_2/StatefulPartitionedCallStatefulPartitionedCall'q_activation_1/PartitionedCall:output:0q_dense_2_458095q_dense_2_458097*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8 *N
fIRG
E__inference_q_dense_2_layer_call_and_return_conditional_losses_458094ё
q_activation_2/PartitionedCallPartitionedCall*q_dense_2/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8 *S
fNRL
J__inference_q_activation_2_layer_call_and_return_conditional_losses_458149z
IdentityIdentity'q_activation_2/PartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:џџџџџџџџџ А
NoOpNoOp ^q_dense/StatefulPartitionedCall"^q_dense_1/StatefulPartitionedCall"^q_dense_2/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*6
_input_shapes%
#:џџџџџџџџџ: : : : : : 2B
q_dense/StatefulPartitionedCallq_dense/StatefulPartitionedCall2F
!q_dense_1/StatefulPartitionedCall!q_dense_1/StatefulPartitionedCall2F
!q_dense_2/StatefulPartitionedCall!q_dense_2/StatefulPartitionedCall:S O
+
_output_shapes
:џџџџџџџџџ
 
_user_specified_nameinputs
Љ
З
H__inference_sequential_1_layer_call_and_return_conditional_losses_458606

inputs"
q_dense_3_458594:  
q_dense_3_458596: "
q_dense_4_458600: 
q_dense_4_458602:
identityЂ!q_dense_3/StatefulPartitionedCallЂ!q_dense_4/StatefulPartitionedCallљ
!q_dense_3/StatefulPartitionedCallStatefulPartitionedCallinputsq_dense_3_458594q_dense_3_458596*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:џџџџџџџџџ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8 *N
fIRG
E__inference_q_dense_3_layer_call_and_return_conditional_losses_458407э
q_activation_3/PartitionedCallPartitionedCall*q_dense_3/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:џџџџџџџџџ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8 *S
fNRL
J__inference_q_activation_3_layer_call_and_return_conditional_losses_458462
!q_dense_4/StatefulPartitionedCallStatefulPartitionedCall'q_activation_3/PartitionedCall:output:0q_dense_4_458600q_dense_4_458602*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:џџџџџџџџџ*$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8 *N
fIRG
E__inference_q_dense_4_layer_call_and_return_conditional_losses_458532y
IdentityIdentity*q_dense_4/StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:џџџџџџџџџ
NoOpNoOp"^q_dense_3/StatefulPartitionedCall"^q_dense_4/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:џџџџџџџџџ : : : : 2F
!q_dense_3/StatefulPartitionedCall!q_dense_3/StatefulPartitionedCall2F
!q_dense_4/StatefulPartitionedCall!q_dense_4/StatefulPartitionedCall:O K
'
_output_shapes
:џџџџџџџџџ 
 
_user_specified_nameinputs
	

+__inference_sequential_layer_call_fn_460134

inputs
unknown: 
	unknown_0: 
	unknown_1:  
	unknown_2: 
	unknown_3:  
	unknown_4: 
identityЂStatefulPartitionedCall
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4*
Tin
	2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ *(
_read_only_resource_inputs

*2
config_proto" 

CPU

GPU2 *0J 8 *O
fJRH
F__inference_sequential_layer_call_and_return_conditional_losses_458152s
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:џџџџџџџџџ `
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*6
_input_shapes%
#:џџџџџџџџџ: : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:S O
+
_output_shapes
:џџџџџџџџџ
 
_user_specified_nameinputs
й

*__inference_q_dense_1_layer_call_fn_461452

inputs
unknown:  
	unknown_0: 
identityЂStatefulPartitionedCallу
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8 *N
fIRG
E__inference_q_dense_1_layer_call_and_return_conditional_losses_457952s
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:џџџџџџџџџ `
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:џџџџџџџџџ : : 22
StatefulPartitionedCallStatefulPartitionedCall:S O
+
_output_shapes
:џџџџџџџџџ 
 
_user_specified_nameinputs
	

+__inference_sequential_layer_call_fn_458167
q_dense_input
unknown: 
	unknown_0: 
	unknown_1:  
	unknown_2: 
	unknown_3:  
	unknown_4: 
identityЂStatefulPartitionedCall
StatefulPartitionedCallStatefulPartitionedCallq_dense_inputunknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4*
Tin
	2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ *(
_read_only_resource_inputs

*2
config_proto" 

CPU

GPU2 *0J 8 *O
fJRH
F__inference_sequential_layer_call_and_return_conditional_losses_458152s
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:џџџџџџџџџ `
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*6
_input_shapes%
#:џџџџџџџџџ: : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:Z V
+
_output_shapes
:џџџџџџџџџ
'
_user_specified_nameq_dense_input
Ќ
K
#__inference__update_step_xla_460117
gradient
variable:*
_XlaMustCompile(*(
_construction_contextkEagerRuntime*
_input_shapes

:: *
	_noinline(:D @

_output_shapes
:
"
_user_specified_name
gradient:($
"
_user_specified_name
variable
щ<
Ј
E__inference_q_dense_2_layer_call_and_return_conditional_losses_458094

inputs)
readvariableop_resource:  '
readvariableop_3_resource: 
identityЂReadVariableOpЂReadVariableOp_1ЂReadVariableOp_2ЂReadVariableOp_3ЂReadVariableOp_4ЂReadVariableOp_5G
Pow/xConst*
_output_shapes
: *
dtype0*
value	B :G
Pow/yConst*
_output_shapes
: *
dtype0*
value	B : K
PowPowPow/x:output:0Pow/y:output:0*
T0*
_output_shapes
: E
CastCastPow:z:0*

DstT0*

SrcT0*
_output_shapes
: f
ReadVariableOpReadVariableOpreadvariableop_resource*
_output_shapes

:  *
dtype0J
mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A[
mulMulReadVariableOp:value:0mul/y:output:0*
T0*
_output_shapes

:  N
truedivRealDivmul:z:0Cast:y:0*
T0*
_output_shapes

:  @
NegNegtruediv:z:0*
T0*
_output_shapes

:  D
RoundRoundtruediv:z:0*
T0*
_output_shapes

:  I
addAddV2Neg:y:0	Round:y:0*
T0*
_output_shapes

:  N
StopGradientStopGradientadd:z:0*
T0*
_output_shapes

:  [
add_1AddV2truediv:z:0StopGradient:output:0*
T0*
_output_shapes

:  \
clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Сv
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*
_output_shapes

:  R
mul_1MulCast:y:0clip_by_value:z:0*
T0*
_output_shapes

:  P
truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A^
	truediv_1RealDiv	mul_1:z:0truediv_1/y:output:0*
T0*
_output_shapes

:  L
mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?V
mul_2Mulmul_2/x:output:0truediv_1:z:0*
T0*
_output_shapes

:  h
ReadVariableOp_1ReadVariableOpreadvariableop_resource*
_output_shapes

:  *
dtype0O
Neg_1NegReadVariableOp_1:value:0*
T0*
_output_shapes

:  M
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*
_output_shapes

:  L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?R
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*
_output_shapes

:  R
StopGradient_1StopGradient	mul_3:z:0*
T0*
_output_shapes

:  h
ReadVariableOp_2ReadVariableOpreadvariableop_resource*
_output_shapes

:  *
dtype0j
add_3AddV2ReadVariableOp_2:value:0StopGradient_1:output:0*
T0*
_output_shapes

:  ;
ShapeShapeinputs*
T0*
_output_shapes
:Q
unstackUnpackShape:output:0*
T0*
_output_shapes
: : : *	
numX
Shape_1Const*
_output_shapes
:*
dtype0*
valueB"        S
	unstack_1UnpackShape_1:output:0*
T0*
_output_shapes
: : *	
num^
Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB"џџџџ    d
ReshapeReshapeinputsReshape/shape:output:0*
T0*'
_output_shapes
:џџџџџџџџџ _
transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       c
	transpose	Transpose	add_3:z:0transpose/perm:output:0*
T0*
_output_shapes

:  `
Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"    џџџџf
	Reshape_1Reshapetranspose:y:0Reshape_1/shape:output:0*
T0*
_output_shapes

:  h
MatMulMatMulReshape:output:0Reshape_1:output:0*
T0*'
_output_shapes
:џџџџџџџџџ S
Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :S
Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : 
Reshape_2/shapePackunstack:output:0Reshape_2/shape/1:output:0Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:v
	Reshape_2ReshapeMatMul:product:0Reshape_2/shape:output:0*
T0*+
_output_shapes
:џџџџџџџџџ I
Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :I
Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Q
Pow_1PowPow_1/x:output:0Pow_1/y:output:0*
T0*
_output_shapes
: I
Cast_1Cast	Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: f
ReadVariableOp_3ReadVariableOpreadvariableop_3_resource*
_output_shapes
: *
dtype0L
mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A]
mul_4MulReadVariableOp_3:value:0mul_4/y:output:0*
T0*
_output_shapes
: P
	truediv_2RealDiv	mul_4:z:0
Cast_1:y:0*
T0*
_output_shapes
: @
Neg_2Negtruediv_2:z:0*
T0*
_output_shapes
: D
Round_1Roundtruediv_2:z:0*
T0*
_output_shapes
: K
add_4AddV2	Neg_2:y:0Round_1:y:0*
T0*
_output_shapes
: N
StopGradient_2StopGradient	add_4:z:0*
T0*
_output_shapes
: [
add_5AddV2truediv_2:z:0StopGradient_2:output:0*
T0*
_output_shapes
: ^
clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Сx
clip_by_value_1Maximumclip_by_value_1/Minimum:z:0clip_by_value_1/y:output:0*
T0*
_output_shapes
: R
mul_5Mul
Cast_1:y:0clip_by_value_1:z:0*
T0*
_output_shapes
: P
truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  AZ
	truediv_3RealDiv	mul_5:z:0truediv_3/y:output:0*
T0*
_output_shapes
: L
mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?R
mul_6Mulmul_6/x:output:0truediv_3:z:0*
T0*
_output_shapes
: f
ReadVariableOp_4ReadVariableOpreadvariableop_3_resource*
_output_shapes
: *
dtype0K
Neg_3NegReadVariableOp_4:value:0*
T0*
_output_shapes
: I
add_6AddV2	Neg_3:y:0	mul_6:z:0*
T0*
_output_shapes
: L
mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?N
mul_7Mulmul_7/x:output:0	add_6:z:0*
T0*
_output_shapes
: N
StopGradient_3StopGradient	mul_7:z:0*
T0*
_output_shapes
: f
ReadVariableOp_5ReadVariableOpreadvariableop_3_resource*
_output_shapes
: *
dtype0f
add_7AddV2ReadVariableOp_5:value:0StopGradient_3:output:0*
T0*
_output_shapes
: g
BiasAddBiasAddReshape_2:output:0	add_7:z:0*
T0*+
_output_shapes
:џџџџџџџџџ c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:џџџџџџџџџ Ж
NoOpNoOp^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:џџџџџџџџџ : : 2 
ReadVariableOpReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_5:S O
+
_output_shapes
:џџџџџџџџџ 
 
_user_specified_nameinputs
ђ

P__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_460067

inputs<
*sequential_q_dense_readvariableop_resource: :
,sequential_q_dense_readvariableop_3_resource: >
,sequential_q_dense_1_readvariableop_resource:  <
.sequential_q_dense_1_readvariableop_3_resource: >
,sequential_q_dense_2_readvariableop_resource:  <
.sequential_q_dense_2_readvariableop_3_resource: @
.sequential_1_q_dense_3_readvariableop_resource:  >
0sequential_1_q_dense_3_readvariableop_3_resource: @
.sequential_1_q_dense_4_readvariableop_resource: >
0sequential_1_q_dense_4_readvariableop_3_resource:
identityЂ!sequential/q_dense/ReadVariableOpЂ#sequential/q_dense/ReadVariableOp_1Ђ#sequential/q_dense/ReadVariableOp_2Ђ#sequential/q_dense/ReadVariableOp_3Ђ#sequential/q_dense/ReadVariableOp_4Ђ#sequential/q_dense/ReadVariableOp_5Ђ#sequential/q_dense_1/ReadVariableOpЂ%sequential/q_dense_1/ReadVariableOp_1Ђ%sequential/q_dense_1/ReadVariableOp_2Ђ%sequential/q_dense_1/ReadVariableOp_3Ђ%sequential/q_dense_1/ReadVariableOp_4Ђ%sequential/q_dense_1/ReadVariableOp_5Ђ#sequential/q_dense_2/ReadVariableOpЂ%sequential/q_dense_2/ReadVariableOp_1Ђ%sequential/q_dense_2/ReadVariableOp_2Ђ%sequential/q_dense_2/ReadVariableOp_3Ђ%sequential/q_dense_2/ReadVariableOp_4Ђ%sequential/q_dense_2/ReadVariableOp_5Ђ%sequential_1/q_dense_3/ReadVariableOpЂ'sequential_1/q_dense_3/ReadVariableOp_1Ђ'sequential_1/q_dense_3/ReadVariableOp_2Ђ'sequential_1/q_dense_3/ReadVariableOp_3Ђ'sequential_1/q_dense_3/ReadVariableOp_4Ђ'sequential_1/q_dense_3/ReadVariableOp_5Ђ%sequential_1/q_dense_4/ReadVariableOpЂ'sequential_1/q_dense_4/ReadVariableOp_1Ђ'sequential_1/q_dense_4/ReadVariableOp_2Ђ'sequential_1/q_dense_4/ReadVariableOp_3Ђ'sequential_1/q_dense_4/ReadVariableOp_4Ђ'sequential_1/q_dense_4/ReadVariableOp_5Z
sequential/q_dense/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :Z
sequential/q_dense/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : 
sequential/q_dense/PowPow!sequential/q_dense/Pow/x:output:0!sequential/q_dense/Pow/y:output:0*
T0*
_output_shapes
: k
sequential/q_dense/CastCastsequential/q_dense/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: 
!sequential/q_dense/ReadVariableOpReadVariableOp*sequential_q_dense_readvariableop_resource*
_output_shapes

: *
dtype0]
sequential/q_dense/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A
sequential/q_dense/mulMul)sequential/q_dense/ReadVariableOp:value:0!sequential/q_dense/mul/y:output:0*
T0*
_output_shapes

: 
sequential/q_dense/truedivRealDivsequential/q_dense/mul:z:0sequential/q_dense/Cast:y:0*
T0*
_output_shapes

: f
sequential/q_dense/NegNegsequential/q_dense/truediv:z:0*
T0*
_output_shapes

: j
sequential/q_dense/RoundRoundsequential/q_dense/truediv:z:0*
T0*
_output_shapes

: 
sequential/q_dense/addAddV2sequential/q_dense/Neg:y:0sequential/q_dense/Round:y:0*
T0*
_output_shapes

: t
sequential/q_dense/StopGradientStopGradientsequential/q_dense/add:z:0*
T0*
_output_shapes

: 
sequential/q_dense/add_1AddV2sequential/q_dense/truediv:z:0(sequential/q_dense/StopGradient:output:0*
T0*
_output_shapes

: o
*sequential/q_dense/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAЏ
(sequential/q_dense/clip_by_value/MinimumMinimumsequential/q_dense/add_1:z:03sequential/q_dense/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: g
"sequential/q_dense/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  СЏ
 sequential/q_dense/clip_by_valueMaximum,sequential/q_dense/clip_by_value/Minimum:z:0+sequential/q_dense/clip_by_value/y:output:0*
T0*
_output_shapes

: 
sequential/q_dense/mul_1Mulsequential/q_dense/Cast:y:0$sequential/q_dense/clip_by_value:z:0*
T0*
_output_shapes

: c
sequential/q_dense/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A
sequential/q_dense/truediv_1RealDivsequential/q_dense/mul_1:z:0'sequential/q_dense/truediv_1/y:output:0*
T0*
_output_shapes

: _
sequential/q_dense/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential/q_dense/mul_2Mul#sequential/q_dense/mul_2/x:output:0 sequential/q_dense/truediv_1:z:0*
T0*
_output_shapes

: 
#sequential/q_dense/ReadVariableOp_1ReadVariableOp*sequential_q_dense_readvariableop_resource*
_output_shapes

: *
dtype0u
sequential/q_dense/Neg_1Neg+sequential/q_dense/ReadVariableOp_1:value:0*
T0*
_output_shapes

: 
sequential/q_dense/add_2AddV2sequential/q_dense/Neg_1:y:0sequential/q_dense/mul_2:z:0*
T0*
_output_shapes

: _
sequential/q_dense/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential/q_dense/mul_3Mul#sequential/q_dense/mul_3/x:output:0sequential/q_dense/add_2:z:0*
T0*
_output_shapes

: x
!sequential/q_dense/StopGradient_1StopGradientsequential/q_dense/mul_3:z:0*
T0*
_output_shapes

: 
#sequential/q_dense/ReadVariableOp_2ReadVariableOp*sequential_q_dense_readvariableop_resource*
_output_shapes

: *
dtype0Ѓ
sequential/q_dense/add_3AddV2+sequential/q_dense/ReadVariableOp_2:value:0*sequential/q_dense/StopGradient_1:output:0*
T0*
_output_shapes

: N
sequential/q_dense/ShapeShapeinputs*
T0*
_output_shapes
:w
sequential/q_dense/unstackUnpack!sequential/q_dense/Shape:output:0*
T0*
_output_shapes
: : : *	
numk
sequential/q_dense/Shape_1Const*
_output_shapes
:*
dtype0*
valueB"       y
sequential/q_dense/unstack_1Unpack#sequential/q_dense/Shape_1:output:0*
T0*
_output_shapes
: : *	
numq
 sequential/q_dense/Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB"џџџџ   
sequential/q_dense/ReshapeReshapeinputs)sequential/q_dense/Reshape/shape:output:0*
T0*'
_output_shapes
:џџџџџџџџџr
!sequential/q_dense/transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       
sequential/q_dense/transpose	Transposesequential/q_dense/add_3:z:0*sequential/q_dense/transpose/perm:output:0*
T0*
_output_shapes

: s
"sequential/q_dense/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"   џџџџ
sequential/q_dense/Reshape_1Reshape sequential/q_dense/transpose:y:0+sequential/q_dense/Reshape_1/shape:output:0*
T0*
_output_shapes

: Ё
sequential/q_dense/MatMulMatMul#sequential/q_dense/Reshape:output:0%sequential/q_dense/Reshape_1:output:0*
T0*'
_output_shapes
:џџџџџџџџџ f
$sequential/q_dense/Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :f
$sequential/q_dense/Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : л
"sequential/q_dense/Reshape_2/shapePack#sequential/q_dense/unstack:output:0-sequential/q_dense/Reshape_2/shape/1:output:0-sequential/q_dense/Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:Џ
sequential/q_dense/Reshape_2Reshape#sequential/q_dense/MatMul:product:0+sequential/q_dense/Reshape_2/shape:output:0*
T0*+
_output_shapes
:џџџџџџџџџ \
sequential/q_dense/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :\
sequential/q_dense/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : 
sequential/q_dense/Pow_1Pow#sequential/q_dense/Pow_1/x:output:0#sequential/q_dense/Pow_1/y:output:0*
T0*
_output_shapes
: o
sequential/q_dense/Cast_1Castsequential/q_dense/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: 
#sequential/q_dense/ReadVariableOp_3ReadVariableOp,sequential_q_dense_readvariableop_3_resource*
_output_shapes
: *
dtype0_
sequential/q_dense/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A
sequential/q_dense/mul_4Mul+sequential/q_dense/ReadVariableOp_3:value:0#sequential/q_dense/mul_4/y:output:0*
T0*
_output_shapes
: 
sequential/q_dense/truediv_2RealDivsequential/q_dense/mul_4:z:0sequential/q_dense/Cast_1:y:0*
T0*
_output_shapes
: f
sequential/q_dense/Neg_2Neg sequential/q_dense/truediv_2:z:0*
T0*
_output_shapes
: j
sequential/q_dense/Round_1Round sequential/q_dense/truediv_2:z:0*
T0*
_output_shapes
: 
sequential/q_dense/add_4AddV2sequential/q_dense/Neg_2:y:0sequential/q_dense/Round_1:y:0*
T0*
_output_shapes
: t
!sequential/q_dense/StopGradient_2StopGradientsequential/q_dense/add_4:z:0*
T0*
_output_shapes
: 
sequential/q_dense/add_5AddV2 sequential/q_dense/truediv_2:z:0*sequential/q_dense/StopGradient_2:output:0*
T0*
_output_shapes
: q
,sequential/q_dense/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAЏ
*sequential/q_dense/clip_by_value_1/MinimumMinimumsequential/q_dense/add_5:z:05sequential/q_dense/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: i
$sequential/q_dense/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  СБ
"sequential/q_dense/clip_by_value_1Maximum.sequential/q_dense/clip_by_value_1/Minimum:z:0-sequential/q_dense/clip_by_value_1/y:output:0*
T0*
_output_shapes
: 
sequential/q_dense/mul_5Mulsequential/q_dense/Cast_1:y:0&sequential/q_dense/clip_by_value_1:z:0*
T0*
_output_shapes
: c
sequential/q_dense/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A
sequential/q_dense/truediv_3RealDivsequential/q_dense/mul_5:z:0'sequential/q_dense/truediv_3/y:output:0*
T0*
_output_shapes
: _
sequential/q_dense/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential/q_dense/mul_6Mul#sequential/q_dense/mul_6/x:output:0 sequential/q_dense/truediv_3:z:0*
T0*
_output_shapes
: 
#sequential/q_dense/ReadVariableOp_4ReadVariableOp,sequential_q_dense_readvariableop_3_resource*
_output_shapes
: *
dtype0q
sequential/q_dense/Neg_3Neg+sequential/q_dense/ReadVariableOp_4:value:0*
T0*
_output_shapes
: 
sequential/q_dense/add_6AddV2sequential/q_dense/Neg_3:y:0sequential/q_dense/mul_6:z:0*
T0*
_output_shapes
: _
sequential/q_dense/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential/q_dense/mul_7Mul#sequential/q_dense/mul_7/x:output:0sequential/q_dense/add_6:z:0*
T0*
_output_shapes
: t
!sequential/q_dense/StopGradient_3StopGradientsequential/q_dense/mul_7:z:0*
T0*
_output_shapes
: 
#sequential/q_dense/ReadVariableOp_5ReadVariableOp,sequential_q_dense_readvariableop_3_resource*
_output_shapes
: *
dtype0
sequential/q_dense/add_7AddV2+sequential/q_dense/ReadVariableOp_5:value:0*sequential/q_dense/StopGradient_3:output:0*
T0*
_output_shapes
:  
sequential/q_dense/BiasAddBiasAdd%sequential/q_dense/Reshape_2:output:0sequential/q_dense/add_7:z:0*
T0*+
_output_shapes
:џџџџџџџџџ _
sequential/q_activation/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :_
sequential/q_activation/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :
sequential/q_activation/PowPow&sequential/q_activation/Pow/x:output:0&sequential/q_activation/Pow/y:output:0*
T0*
_output_shapes
: u
sequential/q_activation/CastCastsequential/q_activation/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: a
sequential/q_activation/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :a
sequential/q_activation/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : 
sequential/q_activation/Pow_1Pow(sequential/q_activation/Pow_1/x:output:0(sequential/q_activation/Pow_1/y:output:0*
T0*
_output_shapes
: y
sequential/q_activation/Cast_1Cast!sequential/q_activation/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: b
sequential/q_activation/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *   @b
 sequential/q_activation/Cast_2/xConst*
_output_shapes
: *
dtype0*
value	B : 
sequential/q_activation/Cast_2Cast)sequential/q_activation/Cast_2/x:output:0*

DstT0*

SrcT0*
_output_shapes
: b
sequential/q_activation/sub/yConst*
_output_shapes
: *
dtype0*
valueB
 *   A
sequential/q_activation/subSub"sequential/q_activation/Cast_2:y:0&sequential/q_activation/sub/y:output:0*
T0*
_output_shapes
: 
sequential/q_activation/Pow_2Pow&sequential/q_activation/Const:output:0sequential/q_activation/sub:z:0*
T0*
_output_shapes
: 
sequential/q_activation/sub_1Sub"sequential/q_activation/Cast_1:y:0!sequential/q_activation/Pow_2:z:0*
T0*
_output_shapes
: Ќ
!sequential/q_activation/LessEqual	LessEqual#sequential/q_dense/BiasAdd:output:0!sequential/q_activation/sub_1:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
sequential/q_activation/ReluRelu#sequential/q_dense/BiasAdd:output:0*
T0*+
_output_shapes
:џџџџџџџџџ z
'sequential/q_activation/ones_like/ShapeShape#sequential/q_dense/BiasAdd:output:0*
T0*
_output_shapes
:l
'sequential/q_activation/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  ?У
!sequential/q_activation/ones_likeFill0sequential/q_activation/ones_like/Shape:output:00sequential/q_activation/ones_like/Const:output:0*
T0*+
_output_shapes
:џџџџџџџџџ 
sequential/q_activation/sub_2Sub"sequential/q_activation/Cast_1:y:0!sequential/q_activation/Pow_2:z:0*
T0*
_output_shapes
: Ї
sequential/q_activation/mulMul*sequential/q_activation/ones_like:output:0!sequential/q_activation/sub_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ ж
 sequential/q_activation/SelectV2SelectV2%sequential/q_activation/LessEqual:z:0*sequential/q_activation/Relu:activations:0sequential/q_activation/mul:z:0*
T0*+
_output_shapes
:џџџџџџџџџ Ё
sequential/q_activation/mul_1Mul#sequential/q_dense/BiasAdd:output:0 sequential/q_activation/Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ Ї
sequential/q_activation/truedivRealDiv!sequential/q_activation/mul_1:z:0"sequential/q_activation/Cast_1:y:0*
T0*+
_output_shapes
:џџџџџџџџџ }
sequential/q_activation/NegNeg#sequential/q_activation/truediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
sequential/q_activation/RoundRound#sequential/q_activation/truediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
sequential/q_activation/addAddV2sequential/q_activation/Neg:y:0!sequential/q_activation/Round:y:0*
T0*+
_output_shapes
:џџџџџџџџџ 
$sequential/q_activation/StopGradientStopGradientsequential/q_activation/add:z:0*
T0*+
_output_shapes
:џџџџџџџџџ А
sequential/q_activation/add_1AddV2#sequential/q_activation/truediv:z:0-sequential/q_activation/StopGradient:output:0*
T0*+
_output_shapes
:џџџџџџџџџ Ї
!sequential/q_activation/truediv_1RealDiv!sequential/q_activation/add_1:z:0 sequential/q_activation/Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ h
#sequential/q_activation/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
!sequential/q_activation/truediv_2RealDiv,sequential/q_activation/truediv_2/x:output:0 sequential/q_activation/Cast:y:0*
T0*
_output_shapes
: d
sequential/q_activation/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential/q_activation/sub_3Sub(sequential/q_activation/sub_3/x:output:0%sequential/q_activation/truediv_2:z:0*
T0*
_output_shapes
: И
-sequential/q_activation/clip_by_value/MinimumMinimum%sequential/q_activation/truediv_1:z:0!sequential/q_activation/sub_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ l
'sequential/q_activation/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    Ы
%sequential/q_activation/clip_by_valueMaximum1sequential/q_activation/clip_by_value/Minimum:z:00sequential/q_activation/clip_by_value/y:output:0*
T0*+
_output_shapes
:џџџџџџџџџ Љ
sequential/q_activation/mul_2Mul"sequential/q_activation/Cast_1:y:0)sequential/q_activation/clip_by_value:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
sequential/q_activation/Neg_1Neg)sequential/q_activation/SelectV2:output:0*
T0*+
_output_shapes
:џџџџџџџџџ Ђ
sequential/q_activation/add_2AddV2!sequential/q_activation/Neg_1:y:0!sequential/q_activation/mul_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ d
sequential/q_activation/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?Ї
sequential/q_activation/mul_3Mul(sequential/q_activation/mul_3/x:output:0!sequential/q_activation/add_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
&sequential/q_activation/StopGradient_1StopGradient!sequential/q_activation/mul_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ И
sequential/q_activation/add_3AddV2)sequential/q_activation/SelectV2:output:0/sequential/q_activation/StopGradient_1:output:0*
T0*+
_output_shapes
:џџџџџџџџџ \
sequential/q_dense_1/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :\
sequential/q_dense_1/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : 
sequential/q_dense_1/PowPow#sequential/q_dense_1/Pow/x:output:0#sequential/q_dense_1/Pow/y:output:0*
T0*
_output_shapes
: o
sequential/q_dense_1/CastCastsequential/q_dense_1/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: 
#sequential/q_dense_1/ReadVariableOpReadVariableOp,sequential_q_dense_1_readvariableop_resource*
_output_shapes

:  *
dtype0_
sequential/q_dense_1/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A
sequential/q_dense_1/mulMul+sequential/q_dense_1/ReadVariableOp:value:0#sequential/q_dense_1/mul/y:output:0*
T0*
_output_shapes

:  
sequential/q_dense_1/truedivRealDivsequential/q_dense_1/mul:z:0sequential/q_dense_1/Cast:y:0*
T0*
_output_shapes

:  j
sequential/q_dense_1/NegNeg sequential/q_dense_1/truediv:z:0*
T0*
_output_shapes

:  n
sequential/q_dense_1/RoundRound sequential/q_dense_1/truediv:z:0*
T0*
_output_shapes

:  
sequential/q_dense_1/addAddV2sequential/q_dense_1/Neg:y:0sequential/q_dense_1/Round:y:0*
T0*
_output_shapes

:  x
!sequential/q_dense_1/StopGradientStopGradientsequential/q_dense_1/add:z:0*
T0*
_output_shapes

:  
sequential/q_dense_1/add_1AddV2 sequential/q_dense_1/truediv:z:0*sequential/q_dense_1/StopGradient:output:0*
T0*
_output_shapes

:  q
,sequential/q_dense_1/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAЕ
*sequential/q_dense_1/clip_by_value/MinimumMinimumsequential/q_dense_1/add_1:z:05sequential/q_dense_1/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  i
$sequential/q_dense_1/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  СЕ
"sequential/q_dense_1/clip_by_valueMaximum.sequential/q_dense_1/clip_by_value/Minimum:z:0-sequential/q_dense_1/clip_by_value/y:output:0*
T0*
_output_shapes

:  
sequential/q_dense_1/mul_1Mulsequential/q_dense_1/Cast:y:0&sequential/q_dense_1/clip_by_value:z:0*
T0*
_output_shapes

:  e
 sequential/q_dense_1/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A
sequential/q_dense_1/truediv_1RealDivsequential/q_dense_1/mul_1:z:0)sequential/q_dense_1/truediv_1/y:output:0*
T0*
_output_shapes

:  a
sequential/q_dense_1/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential/q_dense_1/mul_2Mul%sequential/q_dense_1/mul_2/x:output:0"sequential/q_dense_1/truediv_1:z:0*
T0*
_output_shapes

:  
%sequential/q_dense_1/ReadVariableOp_1ReadVariableOp,sequential_q_dense_1_readvariableop_resource*
_output_shapes

:  *
dtype0y
sequential/q_dense_1/Neg_1Neg-sequential/q_dense_1/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  
sequential/q_dense_1/add_2AddV2sequential/q_dense_1/Neg_1:y:0sequential/q_dense_1/mul_2:z:0*
T0*
_output_shapes

:  a
sequential/q_dense_1/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential/q_dense_1/mul_3Mul%sequential/q_dense_1/mul_3/x:output:0sequential/q_dense_1/add_2:z:0*
T0*
_output_shapes

:  |
#sequential/q_dense_1/StopGradient_1StopGradientsequential/q_dense_1/mul_3:z:0*
T0*
_output_shapes

:  
%sequential/q_dense_1/ReadVariableOp_2ReadVariableOp,sequential_q_dense_1_readvariableop_resource*
_output_shapes

:  *
dtype0Љ
sequential/q_dense_1/add_3AddV2-sequential/q_dense_1/ReadVariableOp_2:value:0,sequential/q_dense_1/StopGradient_1:output:0*
T0*
_output_shapes

:  k
sequential/q_dense_1/ShapeShape!sequential/q_activation/add_3:z:0*
T0*
_output_shapes
:{
sequential/q_dense_1/unstackUnpack#sequential/q_dense_1/Shape:output:0*
T0*
_output_shapes
: : : *	
numm
sequential/q_dense_1/Shape_1Const*
_output_shapes
:*
dtype0*
valueB"        }
sequential/q_dense_1/unstack_1Unpack%sequential/q_dense_1/Shape_1:output:0*
T0*
_output_shapes
: : *	
nums
"sequential/q_dense_1/Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB"џџџџ    Љ
sequential/q_dense_1/ReshapeReshape!sequential/q_activation/add_3:z:0+sequential/q_dense_1/Reshape/shape:output:0*
T0*'
_output_shapes
:џџџџџџџџџ t
#sequential/q_dense_1/transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       Ђ
sequential/q_dense_1/transpose	Transposesequential/q_dense_1/add_3:z:0,sequential/q_dense_1/transpose/perm:output:0*
T0*
_output_shapes

:  u
$sequential/q_dense_1/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"    џџџџЅ
sequential/q_dense_1/Reshape_1Reshape"sequential/q_dense_1/transpose:y:0-sequential/q_dense_1/Reshape_1/shape:output:0*
T0*
_output_shapes

:  Ї
sequential/q_dense_1/MatMulMatMul%sequential/q_dense_1/Reshape:output:0'sequential/q_dense_1/Reshape_1:output:0*
T0*'
_output_shapes
:џџџџџџџџџ h
&sequential/q_dense_1/Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :h
&sequential/q_dense_1/Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : у
$sequential/q_dense_1/Reshape_2/shapePack%sequential/q_dense_1/unstack:output:0/sequential/q_dense_1/Reshape_2/shape/1:output:0/sequential/q_dense_1/Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:Е
sequential/q_dense_1/Reshape_2Reshape%sequential/q_dense_1/MatMul:product:0-sequential/q_dense_1/Reshape_2/shape:output:0*
T0*+
_output_shapes
:џџџџџџџџџ ^
sequential/q_dense_1/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :^
sequential/q_dense_1/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : 
sequential/q_dense_1/Pow_1Pow%sequential/q_dense_1/Pow_1/x:output:0%sequential/q_dense_1/Pow_1/y:output:0*
T0*
_output_shapes
: s
sequential/q_dense_1/Cast_1Castsequential/q_dense_1/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: 
%sequential/q_dense_1/ReadVariableOp_3ReadVariableOp.sequential_q_dense_1_readvariableop_3_resource*
_output_shapes
: *
dtype0a
sequential/q_dense_1/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A
sequential/q_dense_1/mul_4Mul-sequential/q_dense_1/ReadVariableOp_3:value:0%sequential/q_dense_1/mul_4/y:output:0*
T0*
_output_shapes
: 
sequential/q_dense_1/truediv_2RealDivsequential/q_dense_1/mul_4:z:0sequential/q_dense_1/Cast_1:y:0*
T0*
_output_shapes
: j
sequential/q_dense_1/Neg_2Neg"sequential/q_dense_1/truediv_2:z:0*
T0*
_output_shapes
: n
sequential/q_dense_1/Round_1Round"sequential/q_dense_1/truediv_2:z:0*
T0*
_output_shapes
: 
sequential/q_dense_1/add_4AddV2sequential/q_dense_1/Neg_2:y:0 sequential/q_dense_1/Round_1:y:0*
T0*
_output_shapes
: x
#sequential/q_dense_1/StopGradient_2StopGradientsequential/q_dense_1/add_4:z:0*
T0*
_output_shapes
: 
sequential/q_dense_1/add_5AddV2"sequential/q_dense_1/truediv_2:z:0,sequential/q_dense_1/StopGradient_2:output:0*
T0*
_output_shapes
: s
.sequential/q_dense_1/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAЕ
,sequential/q_dense_1/clip_by_value_1/MinimumMinimumsequential/q_dense_1/add_5:z:07sequential/q_dense_1/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: k
&sequential/q_dense_1/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  СЗ
$sequential/q_dense_1/clip_by_value_1Maximum0sequential/q_dense_1/clip_by_value_1/Minimum:z:0/sequential/q_dense_1/clip_by_value_1/y:output:0*
T0*
_output_shapes
: 
sequential/q_dense_1/mul_5Mulsequential/q_dense_1/Cast_1:y:0(sequential/q_dense_1/clip_by_value_1:z:0*
T0*
_output_shapes
: e
 sequential/q_dense_1/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A
sequential/q_dense_1/truediv_3RealDivsequential/q_dense_1/mul_5:z:0)sequential/q_dense_1/truediv_3/y:output:0*
T0*
_output_shapes
: a
sequential/q_dense_1/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential/q_dense_1/mul_6Mul%sequential/q_dense_1/mul_6/x:output:0"sequential/q_dense_1/truediv_3:z:0*
T0*
_output_shapes
: 
%sequential/q_dense_1/ReadVariableOp_4ReadVariableOp.sequential_q_dense_1_readvariableop_3_resource*
_output_shapes
: *
dtype0u
sequential/q_dense_1/Neg_3Neg-sequential/q_dense_1/ReadVariableOp_4:value:0*
T0*
_output_shapes
: 
sequential/q_dense_1/add_6AddV2sequential/q_dense_1/Neg_3:y:0sequential/q_dense_1/mul_6:z:0*
T0*
_output_shapes
: a
sequential/q_dense_1/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential/q_dense_1/mul_7Mul%sequential/q_dense_1/mul_7/x:output:0sequential/q_dense_1/add_6:z:0*
T0*
_output_shapes
: x
#sequential/q_dense_1/StopGradient_3StopGradientsequential/q_dense_1/mul_7:z:0*
T0*
_output_shapes
: 
%sequential/q_dense_1/ReadVariableOp_5ReadVariableOp.sequential_q_dense_1_readvariableop_3_resource*
_output_shapes
: *
dtype0Ѕ
sequential/q_dense_1/add_7AddV2-sequential/q_dense_1/ReadVariableOp_5:value:0,sequential/q_dense_1/StopGradient_3:output:0*
T0*
_output_shapes
: І
sequential/q_dense_1/BiasAddBiasAdd'sequential/q_dense_1/Reshape_2:output:0sequential/q_dense_1/add_7:z:0*
T0*+
_output_shapes
:џџџџџџџџџ a
sequential/q_activation_1/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :a
sequential/q_activation_1/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :
sequential/q_activation_1/PowPow(sequential/q_activation_1/Pow/x:output:0(sequential/q_activation_1/Pow/y:output:0*
T0*
_output_shapes
: y
sequential/q_activation_1/CastCast!sequential/q_activation_1/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: c
!sequential/q_activation_1/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :c
!sequential/q_activation_1/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : 
sequential/q_activation_1/Pow_1Pow*sequential/q_activation_1/Pow_1/x:output:0*sequential/q_activation_1/Pow_1/y:output:0*
T0*
_output_shapes
: }
 sequential/q_activation_1/Cast_1Cast#sequential/q_activation_1/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: d
sequential/q_activation_1/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *   @d
"sequential/q_activation_1/Cast_2/xConst*
_output_shapes
: *
dtype0*
value	B : 
 sequential/q_activation_1/Cast_2Cast+sequential/q_activation_1/Cast_2/x:output:0*

DstT0*

SrcT0*
_output_shapes
: d
sequential/q_activation_1/sub/yConst*
_output_shapes
: *
dtype0*
valueB
 *   A
sequential/q_activation_1/subSub$sequential/q_activation_1/Cast_2:y:0(sequential/q_activation_1/sub/y:output:0*
T0*
_output_shapes
: 
sequential/q_activation_1/Pow_2Pow(sequential/q_activation_1/Const:output:0!sequential/q_activation_1/sub:z:0*
T0*
_output_shapes
: 
sequential/q_activation_1/sub_1Sub$sequential/q_activation_1/Cast_1:y:0#sequential/q_activation_1/Pow_2:z:0*
T0*
_output_shapes
: В
#sequential/q_activation_1/LessEqual	LessEqual%sequential/q_dense_1/BiasAdd:output:0#sequential/q_activation_1/sub_1:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
sequential/q_activation_1/ReluRelu%sequential/q_dense_1/BiasAdd:output:0*
T0*+
_output_shapes
:џџџџџџџџџ ~
)sequential/q_activation_1/ones_like/ShapeShape%sequential/q_dense_1/BiasAdd:output:0*
T0*
_output_shapes
:n
)sequential/q_activation_1/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  ?Щ
#sequential/q_activation_1/ones_likeFill2sequential/q_activation_1/ones_like/Shape:output:02sequential/q_activation_1/ones_like/Const:output:0*
T0*+
_output_shapes
:џџџџџџџџџ 
sequential/q_activation_1/sub_2Sub$sequential/q_activation_1/Cast_1:y:0#sequential/q_activation_1/Pow_2:z:0*
T0*
_output_shapes
: ­
sequential/q_activation_1/mulMul,sequential/q_activation_1/ones_like:output:0#sequential/q_activation_1/sub_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ о
"sequential/q_activation_1/SelectV2SelectV2'sequential/q_activation_1/LessEqual:z:0,sequential/q_activation_1/Relu:activations:0!sequential/q_activation_1/mul:z:0*
T0*+
_output_shapes
:џџџџџџџџџ Ї
sequential/q_activation_1/mul_1Mul%sequential/q_dense_1/BiasAdd:output:0"sequential/q_activation_1/Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ ­
!sequential/q_activation_1/truedivRealDiv#sequential/q_activation_1/mul_1:z:0$sequential/q_activation_1/Cast_1:y:0*
T0*+
_output_shapes
:џџџџџџџџџ 
sequential/q_activation_1/NegNeg%sequential/q_activation_1/truediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
sequential/q_activation_1/RoundRound%sequential/q_activation_1/truediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ Є
sequential/q_activation_1/addAddV2!sequential/q_activation_1/Neg:y:0#sequential/q_activation_1/Round:y:0*
T0*+
_output_shapes
:џџџџџџџџџ 
&sequential/q_activation_1/StopGradientStopGradient!sequential/q_activation_1/add:z:0*
T0*+
_output_shapes
:џџџџџџџџџ Ж
sequential/q_activation_1/add_1AddV2%sequential/q_activation_1/truediv:z:0/sequential/q_activation_1/StopGradient:output:0*
T0*+
_output_shapes
:џџџџџџџџџ ­
#sequential/q_activation_1/truediv_1RealDiv#sequential/q_activation_1/add_1:z:0"sequential/q_activation_1/Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ j
%sequential/q_activation_1/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?Ѓ
#sequential/q_activation_1/truediv_2RealDiv.sequential/q_activation_1/truediv_2/x:output:0"sequential/q_activation_1/Cast:y:0*
T0*
_output_shapes
: f
!sequential/q_activation_1/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential/q_activation_1/sub_3Sub*sequential/q_activation_1/sub_3/x:output:0'sequential/q_activation_1/truediv_2:z:0*
T0*
_output_shapes
: О
/sequential/q_activation_1/clip_by_value/MinimumMinimum'sequential/q_activation_1/truediv_1:z:0#sequential/q_activation_1/sub_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ n
)sequential/q_activation_1/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    б
'sequential/q_activation_1/clip_by_valueMaximum3sequential/q_activation_1/clip_by_value/Minimum:z:02sequential/q_activation_1/clip_by_value/y:output:0*
T0*+
_output_shapes
:џџџџџџџџџ Џ
sequential/q_activation_1/mul_2Mul$sequential/q_activation_1/Cast_1:y:0+sequential/q_activation_1/clip_by_value:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
sequential/q_activation_1/Neg_1Neg+sequential/q_activation_1/SelectV2:output:0*
T0*+
_output_shapes
:џџџџџџџџџ Ј
sequential/q_activation_1/add_2AddV2#sequential/q_activation_1/Neg_1:y:0#sequential/q_activation_1/mul_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ f
!sequential/q_activation_1/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?­
sequential/q_activation_1/mul_3Mul*sequential/q_activation_1/mul_3/x:output:0#sequential/q_activation_1/add_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
(sequential/q_activation_1/StopGradient_1StopGradient#sequential/q_activation_1/mul_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ О
sequential/q_activation_1/add_3AddV2+sequential/q_activation_1/SelectV2:output:01sequential/q_activation_1/StopGradient_1:output:0*
T0*+
_output_shapes
:џџџџџџџџџ \
sequential/q_dense_2/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :\
sequential/q_dense_2/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : 
sequential/q_dense_2/PowPow#sequential/q_dense_2/Pow/x:output:0#sequential/q_dense_2/Pow/y:output:0*
T0*
_output_shapes
: o
sequential/q_dense_2/CastCastsequential/q_dense_2/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: 
#sequential/q_dense_2/ReadVariableOpReadVariableOp,sequential_q_dense_2_readvariableop_resource*
_output_shapes

:  *
dtype0_
sequential/q_dense_2/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A
sequential/q_dense_2/mulMul+sequential/q_dense_2/ReadVariableOp:value:0#sequential/q_dense_2/mul/y:output:0*
T0*
_output_shapes

:  
sequential/q_dense_2/truedivRealDivsequential/q_dense_2/mul:z:0sequential/q_dense_2/Cast:y:0*
T0*
_output_shapes

:  j
sequential/q_dense_2/NegNeg sequential/q_dense_2/truediv:z:0*
T0*
_output_shapes

:  n
sequential/q_dense_2/RoundRound sequential/q_dense_2/truediv:z:0*
T0*
_output_shapes

:  
sequential/q_dense_2/addAddV2sequential/q_dense_2/Neg:y:0sequential/q_dense_2/Round:y:0*
T0*
_output_shapes

:  x
!sequential/q_dense_2/StopGradientStopGradientsequential/q_dense_2/add:z:0*
T0*
_output_shapes

:  
sequential/q_dense_2/add_1AddV2 sequential/q_dense_2/truediv:z:0*sequential/q_dense_2/StopGradient:output:0*
T0*
_output_shapes

:  q
,sequential/q_dense_2/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAЕ
*sequential/q_dense_2/clip_by_value/MinimumMinimumsequential/q_dense_2/add_1:z:05sequential/q_dense_2/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  i
$sequential/q_dense_2/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  СЕ
"sequential/q_dense_2/clip_by_valueMaximum.sequential/q_dense_2/clip_by_value/Minimum:z:0-sequential/q_dense_2/clip_by_value/y:output:0*
T0*
_output_shapes

:  
sequential/q_dense_2/mul_1Mulsequential/q_dense_2/Cast:y:0&sequential/q_dense_2/clip_by_value:z:0*
T0*
_output_shapes

:  e
 sequential/q_dense_2/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A
sequential/q_dense_2/truediv_1RealDivsequential/q_dense_2/mul_1:z:0)sequential/q_dense_2/truediv_1/y:output:0*
T0*
_output_shapes

:  a
sequential/q_dense_2/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential/q_dense_2/mul_2Mul%sequential/q_dense_2/mul_2/x:output:0"sequential/q_dense_2/truediv_1:z:0*
T0*
_output_shapes

:  
%sequential/q_dense_2/ReadVariableOp_1ReadVariableOp,sequential_q_dense_2_readvariableop_resource*
_output_shapes

:  *
dtype0y
sequential/q_dense_2/Neg_1Neg-sequential/q_dense_2/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  
sequential/q_dense_2/add_2AddV2sequential/q_dense_2/Neg_1:y:0sequential/q_dense_2/mul_2:z:0*
T0*
_output_shapes

:  a
sequential/q_dense_2/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential/q_dense_2/mul_3Mul%sequential/q_dense_2/mul_3/x:output:0sequential/q_dense_2/add_2:z:0*
T0*
_output_shapes

:  |
#sequential/q_dense_2/StopGradient_1StopGradientsequential/q_dense_2/mul_3:z:0*
T0*
_output_shapes

:  
%sequential/q_dense_2/ReadVariableOp_2ReadVariableOp,sequential_q_dense_2_readvariableop_resource*
_output_shapes

:  *
dtype0Љ
sequential/q_dense_2/add_3AddV2-sequential/q_dense_2/ReadVariableOp_2:value:0,sequential/q_dense_2/StopGradient_1:output:0*
T0*
_output_shapes

:  m
sequential/q_dense_2/ShapeShape#sequential/q_activation_1/add_3:z:0*
T0*
_output_shapes
:{
sequential/q_dense_2/unstackUnpack#sequential/q_dense_2/Shape:output:0*
T0*
_output_shapes
: : : *	
numm
sequential/q_dense_2/Shape_1Const*
_output_shapes
:*
dtype0*
valueB"        }
sequential/q_dense_2/unstack_1Unpack%sequential/q_dense_2/Shape_1:output:0*
T0*
_output_shapes
: : *	
nums
"sequential/q_dense_2/Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB"џџџџ    Ћ
sequential/q_dense_2/ReshapeReshape#sequential/q_activation_1/add_3:z:0+sequential/q_dense_2/Reshape/shape:output:0*
T0*'
_output_shapes
:џџџџџџџџџ t
#sequential/q_dense_2/transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       Ђ
sequential/q_dense_2/transpose	Transposesequential/q_dense_2/add_3:z:0,sequential/q_dense_2/transpose/perm:output:0*
T0*
_output_shapes

:  u
$sequential/q_dense_2/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"    џџџџЅ
sequential/q_dense_2/Reshape_1Reshape"sequential/q_dense_2/transpose:y:0-sequential/q_dense_2/Reshape_1/shape:output:0*
T0*
_output_shapes

:  Ї
sequential/q_dense_2/MatMulMatMul%sequential/q_dense_2/Reshape:output:0'sequential/q_dense_2/Reshape_1:output:0*
T0*'
_output_shapes
:џџџџџџџџџ h
&sequential/q_dense_2/Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :h
&sequential/q_dense_2/Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : у
$sequential/q_dense_2/Reshape_2/shapePack%sequential/q_dense_2/unstack:output:0/sequential/q_dense_2/Reshape_2/shape/1:output:0/sequential/q_dense_2/Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:Е
sequential/q_dense_2/Reshape_2Reshape%sequential/q_dense_2/MatMul:product:0-sequential/q_dense_2/Reshape_2/shape:output:0*
T0*+
_output_shapes
:џџџџџџџџџ ^
sequential/q_dense_2/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :^
sequential/q_dense_2/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : 
sequential/q_dense_2/Pow_1Pow%sequential/q_dense_2/Pow_1/x:output:0%sequential/q_dense_2/Pow_1/y:output:0*
T0*
_output_shapes
: s
sequential/q_dense_2/Cast_1Castsequential/q_dense_2/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: 
%sequential/q_dense_2/ReadVariableOp_3ReadVariableOp.sequential_q_dense_2_readvariableop_3_resource*
_output_shapes
: *
dtype0a
sequential/q_dense_2/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A
sequential/q_dense_2/mul_4Mul-sequential/q_dense_2/ReadVariableOp_3:value:0%sequential/q_dense_2/mul_4/y:output:0*
T0*
_output_shapes
: 
sequential/q_dense_2/truediv_2RealDivsequential/q_dense_2/mul_4:z:0sequential/q_dense_2/Cast_1:y:0*
T0*
_output_shapes
: j
sequential/q_dense_2/Neg_2Neg"sequential/q_dense_2/truediv_2:z:0*
T0*
_output_shapes
: n
sequential/q_dense_2/Round_1Round"sequential/q_dense_2/truediv_2:z:0*
T0*
_output_shapes
: 
sequential/q_dense_2/add_4AddV2sequential/q_dense_2/Neg_2:y:0 sequential/q_dense_2/Round_1:y:0*
T0*
_output_shapes
: x
#sequential/q_dense_2/StopGradient_2StopGradientsequential/q_dense_2/add_4:z:0*
T0*
_output_shapes
: 
sequential/q_dense_2/add_5AddV2"sequential/q_dense_2/truediv_2:z:0,sequential/q_dense_2/StopGradient_2:output:0*
T0*
_output_shapes
: s
.sequential/q_dense_2/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAЕ
,sequential/q_dense_2/clip_by_value_1/MinimumMinimumsequential/q_dense_2/add_5:z:07sequential/q_dense_2/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: k
&sequential/q_dense_2/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  СЗ
$sequential/q_dense_2/clip_by_value_1Maximum0sequential/q_dense_2/clip_by_value_1/Minimum:z:0/sequential/q_dense_2/clip_by_value_1/y:output:0*
T0*
_output_shapes
: 
sequential/q_dense_2/mul_5Mulsequential/q_dense_2/Cast_1:y:0(sequential/q_dense_2/clip_by_value_1:z:0*
T0*
_output_shapes
: e
 sequential/q_dense_2/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A
sequential/q_dense_2/truediv_3RealDivsequential/q_dense_2/mul_5:z:0)sequential/q_dense_2/truediv_3/y:output:0*
T0*
_output_shapes
: a
sequential/q_dense_2/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential/q_dense_2/mul_6Mul%sequential/q_dense_2/mul_6/x:output:0"sequential/q_dense_2/truediv_3:z:0*
T0*
_output_shapes
: 
%sequential/q_dense_2/ReadVariableOp_4ReadVariableOp.sequential_q_dense_2_readvariableop_3_resource*
_output_shapes
: *
dtype0u
sequential/q_dense_2/Neg_3Neg-sequential/q_dense_2/ReadVariableOp_4:value:0*
T0*
_output_shapes
: 
sequential/q_dense_2/add_6AddV2sequential/q_dense_2/Neg_3:y:0sequential/q_dense_2/mul_6:z:0*
T0*
_output_shapes
: a
sequential/q_dense_2/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential/q_dense_2/mul_7Mul%sequential/q_dense_2/mul_7/x:output:0sequential/q_dense_2/add_6:z:0*
T0*
_output_shapes
: x
#sequential/q_dense_2/StopGradient_3StopGradientsequential/q_dense_2/mul_7:z:0*
T0*
_output_shapes
: 
%sequential/q_dense_2/ReadVariableOp_5ReadVariableOp.sequential_q_dense_2_readvariableop_3_resource*
_output_shapes
: *
dtype0Ѕ
sequential/q_dense_2/add_7AddV2-sequential/q_dense_2/ReadVariableOp_5:value:0,sequential/q_dense_2/StopGradient_3:output:0*
T0*
_output_shapes
: І
sequential/q_dense_2/BiasAddBiasAdd'sequential/q_dense_2/Reshape_2:output:0sequential/q_dense_2/add_7:z:0*
T0*+
_output_shapes
:џџџџџџџџџ a
sequential/q_activation_2/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :a
sequential/q_activation_2/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :
sequential/q_activation_2/PowPow(sequential/q_activation_2/Pow/x:output:0(sequential/q_activation_2/Pow/y:output:0*
T0*
_output_shapes
: y
sequential/q_activation_2/CastCast!sequential/q_activation_2/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: c
!sequential/q_activation_2/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :c
!sequential/q_activation_2/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : 
sequential/q_activation_2/Pow_1Pow*sequential/q_activation_2/Pow_1/x:output:0*sequential/q_activation_2/Pow_1/y:output:0*
T0*
_output_shapes
: }
 sequential/q_activation_2/Cast_1Cast#sequential/q_activation_2/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: d
sequential/q_activation_2/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *   @d
"sequential/q_activation_2/Cast_2/xConst*
_output_shapes
: *
dtype0*
value	B : 
 sequential/q_activation_2/Cast_2Cast+sequential/q_activation_2/Cast_2/x:output:0*

DstT0*

SrcT0*
_output_shapes
: d
sequential/q_activation_2/sub/yConst*
_output_shapes
: *
dtype0*
valueB
 *   A
sequential/q_activation_2/subSub$sequential/q_activation_2/Cast_2:y:0(sequential/q_activation_2/sub/y:output:0*
T0*
_output_shapes
: 
sequential/q_activation_2/Pow_2Pow(sequential/q_activation_2/Const:output:0!sequential/q_activation_2/sub:z:0*
T0*
_output_shapes
: 
sequential/q_activation_2/sub_1Sub$sequential/q_activation_2/Cast_1:y:0#sequential/q_activation_2/Pow_2:z:0*
T0*
_output_shapes
: В
#sequential/q_activation_2/LessEqual	LessEqual%sequential/q_dense_2/BiasAdd:output:0#sequential/q_activation_2/sub_1:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
sequential/q_activation_2/ReluRelu%sequential/q_dense_2/BiasAdd:output:0*
T0*+
_output_shapes
:џџџџџџџџџ ~
)sequential/q_activation_2/ones_like/ShapeShape%sequential/q_dense_2/BiasAdd:output:0*
T0*
_output_shapes
:n
)sequential/q_activation_2/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  ?Щ
#sequential/q_activation_2/ones_likeFill2sequential/q_activation_2/ones_like/Shape:output:02sequential/q_activation_2/ones_like/Const:output:0*
T0*+
_output_shapes
:џџџџџџџџџ 
sequential/q_activation_2/sub_2Sub$sequential/q_activation_2/Cast_1:y:0#sequential/q_activation_2/Pow_2:z:0*
T0*
_output_shapes
: ­
sequential/q_activation_2/mulMul,sequential/q_activation_2/ones_like:output:0#sequential/q_activation_2/sub_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ о
"sequential/q_activation_2/SelectV2SelectV2'sequential/q_activation_2/LessEqual:z:0,sequential/q_activation_2/Relu:activations:0!sequential/q_activation_2/mul:z:0*
T0*+
_output_shapes
:џџџџџџџџџ Ї
sequential/q_activation_2/mul_1Mul%sequential/q_dense_2/BiasAdd:output:0"sequential/q_activation_2/Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ ­
!sequential/q_activation_2/truedivRealDiv#sequential/q_activation_2/mul_1:z:0$sequential/q_activation_2/Cast_1:y:0*
T0*+
_output_shapes
:џџџџџџџџџ 
sequential/q_activation_2/NegNeg%sequential/q_activation_2/truediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
sequential/q_activation_2/RoundRound%sequential/q_activation_2/truediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ Є
sequential/q_activation_2/addAddV2!sequential/q_activation_2/Neg:y:0#sequential/q_activation_2/Round:y:0*
T0*+
_output_shapes
:џџџџџџџџџ 
&sequential/q_activation_2/StopGradientStopGradient!sequential/q_activation_2/add:z:0*
T0*+
_output_shapes
:џџџџџџџџџ Ж
sequential/q_activation_2/add_1AddV2%sequential/q_activation_2/truediv:z:0/sequential/q_activation_2/StopGradient:output:0*
T0*+
_output_shapes
:џџџџџџџџџ ­
#sequential/q_activation_2/truediv_1RealDiv#sequential/q_activation_2/add_1:z:0"sequential/q_activation_2/Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ j
%sequential/q_activation_2/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?Ѓ
#sequential/q_activation_2/truediv_2RealDiv.sequential/q_activation_2/truediv_2/x:output:0"sequential/q_activation_2/Cast:y:0*
T0*
_output_shapes
: f
!sequential/q_activation_2/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential/q_activation_2/sub_3Sub*sequential/q_activation_2/sub_3/x:output:0'sequential/q_activation_2/truediv_2:z:0*
T0*
_output_shapes
: О
/sequential/q_activation_2/clip_by_value/MinimumMinimum'sequential/q_activation_2/truediv_1:z:0#sequential/q_activation_2/sub_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ n
)sequential/q_activation_2/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    б
'sequential/q_activation_2/clip_by_valueMaximum3sequential/q_activation_2/clip_by_value/Minimum:z:02sequential/q_activation_2/clip_by_value/y:output:0*
T0*+
_output_shapes
:џџџџџџџџџ Џ
sequential/q_activation_2/mul_2Mul$sequential/q_activation_2/Cast_1:y:0+sequential/q_activation_2/clip_by_value:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
sequential/q_activation_2/Neg_1Neg+sequential/q_activation_2/SelectV2:output:0*
T0*+
_output_shapes
:џџџџџџџџџ Ј
sequential/q_activation_2/add_2AddV2#sequential/q_activation_2/Neg_1:y:0#sequential/q_activation_2/mul_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ f
!sequential/q_activation_2/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?­
sequential/q_activation_2/mul_3Mul*sequential/q_activation_2/mul_3/x:output:0#sequential/q_activation_2/add_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
(sequential/q_activation_2/StopGradient_1StopGradient#sequential/q_activation_2/mul_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ О
sequential/q_activation_2/add_3AddV2+sequential/q_activation_2/SelectV2:output:01sequential/q_activation_2/StopGradient_1:output:0*
T0*+
_output_shapes
:џџџџџџџџџ X
Mean/reduction_indicesConst*
_output_shapes
: *
dtype0*
value	B :
MeanMean#sequential/q_activation_2/add_3:z:0Mean/reduction_indices:output:0*
T0*'
_output_shapes
:џџџџџџџџџ ^
sequential_1/q_dense_3/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :^
sequential_1/q_dense_3/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : 
sequential_1/q_dense_3/PowPow%sequential_1/q_dense_3/Pow/x:output:0%sequential_1/q_dense_3/Pow/y:output:0*
T0*
_output_shapes
: s
sequential_1/q_dense_3/CastCastsequential_1/q_dense_3/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: 
%sequential_1/q_dense_3/ReadVariableOpReadVariableOp.sequential_1_q_dense_3_readvariableop_resource*
_output_shapes

:  *
dtype0a
sequential_1/q_dense_3/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A 
sequential_1/q_dense_3/mulMul-sequential_1/q_dense_3/ReadVariableOp:value:0%sequential_1/q_dense_3/mul/y:output:0*
T0*
_output_shapes

:  
sequential_1/q_dense_3/truedivRealDivsequential_1/q_dense_3/mul:z:0sequential_1/q_dense_3/Cast:y:0*
T0*
_output_shapes

:  n
sequential_1/q_dense_3/NegNeg"sequential_1/q_dense_3/truediv:z:0*
T0*
_output_shapes

:  r
sequential_1/q_dense_3/RoundRound"sequential_1/q_dense_3/truediv:z:0*
T0*
_output_shapes

:  
sequential_1/q_dense_3/addAddV2sequential_1/q_dense_3/Neg:y:0 sequential_1/q_dense_3/Round:y:0*
T0*
_output_shapes

:  |
#sequential_1/q_dense_3/StopGradientStopGradientsequential_1/q_dense_3/add:z:0*
T0*
_output_shapes

:   
sequential_1/q_dense_3/add_1AddV2"sequential_1/q_dense_3/truediv:z:0,sequential_1/q_dense_3/StopGradient:output:0*
T0*
_output_shapes

:  s
.sequential_1/q_dense_3/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAЛ
,sequential_1/q_dense_3/clip_by_value/MinimumMinimum sequential_1/q_dense_3/add_1:z:07sequential_1/q_dense_3/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  k
&sequential_1/q_dense_3/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  СЛ
$sequential_1/q_dense_3/clip_by_valueMaximum0sequential_1/q_dense_3/clip_by_value/Minimum:z:0/sequential_1/q_dense_3/clip_by_value/y:output:0*
T0*
_output_shapes

:  
sequential_1/q_dense_3/mul_1Mulsequential_1/q_dense_3/Cast:y:0(sequential_1/q_dense_3/clip_by_value:z:0*
T0*
_output_shapes

:  g
"sequential_1/q_dense_3/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  AЃ
 sequential_1/q_dense_3/truediv_1RealDiv sequential_1/q_dense_3/mul_1:z:0+sequential_1/q_dense_3/truediv_1/y:output:0*
T0*
_output_shapes

:  c
sequential_1/q_dense_3/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential_1/q_dense_3/mul_2Mul'sequential_1/q_dense_3/mul_2/x:output:0$sequential_1/q_dense_3/truediv_1:z:0*
T0*
_output_shapes

:  
'sequential_1/q_dense_3/ReadVariableOp_1ReadVariableOp.sequential_1_q_dense_3_readvariableop_resource*
_output_shapes

:  *
dtype0}
sequential_1/q_dense_3/Neg_1Neg/sequential_1/q_dense_3/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  
sequential_1/q_dense_3/add_2AddV2 sequential_1/q_dense_3/Neg_1:y:0 sequential_1/q_dense_3/mul_2:z:0*
T0*
_output_shapes

:  c
sequential_1/q_dense_3/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential_1/q_dense_3/mul_3Mul'sequential_1/q_dense_3/mul_3/x:output:0 sequential_1/q_dense_3/add_2:z:0*
T0*
_output_shapes

:  
%sequential_1/q_dense_3/StopGradient_1StopGradient sequential_1/q_dense_3/mul_3:z:0*
T0*
_output_shapes

:  
'sequential_1/q_dense_3/ReadVariableOp_2ReadVariableOp.sequential_1_q_dense_3_readvariableop_resource*
_output_shapes

:  *
dtype0Џ
sequential_1/q_dense_3/add_3AddV2/sequential_1/q_dense_3/ReadVariableOp_2:value:0.sequential_1/q_dense_3/StopGradient_1:output:0*
T0*
_output_shapes

:  
sequential_1/q_dense_3/MatMulMatMulMean:output:0 sequential_1/q_dense_3/add_3:z:0*
T0*'
_output_shapes
:џџџџџџџџџ `
sequential_1/q_dense_3/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :`
sequential_1/q_dense_3/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : 
sequential_1/q_dense_3/Pow_1Pow'sequential_1/q_dense_3/Pow_1/x:output:0'sequential_1/q_dense_3/Pow_1/y:output:0*
T0*
_output_shapes
: w
sequential_1/q_dense_3/Cast_1Cast sequential_1/q_dense_3/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: 
'sequential_1/q_dense_3/ReadVariableOp_3ReadVariableOp0sequential_1_q_dense_3_readvariableop_3_resource*
_output_shapes
: *
dtype0c
sequential_1/q_dense_3/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  AЂ
sequential_1/q_dense_3/mul_4Mul/sequential_1/q_dense_3/ReadVariableOp_3:value:0'sequential_1/q_dense_3/mul_4/y:output:0*
T0*
_output_shapes
: 
 sequential_1/q_dense_3/truediv_2RealDiv sequential_1/q_dense_3/mul_4:z:0!sequential_1/q_dense_3/Cast_1:y:0*
T0*
_output_shapes
: n
sequential_1/q_dense_3/Neg_2Neg$sequential_1/q_dense_3/truediv_2:z:0*
T0*
_output_shapes
: r
sequential_1/q_dense_3/Round_1Round$sequential_1/q_dense_3/truediv_2:z:0*
T0*
_output_shapes
: 
sequential_1/q_dense_3/add_4AddV2 sequential_1/q_dense_3/Neg_2:y:0"sequential_1/q_dense_3/Round_1:y:0*
T0*
_output_shapes
: |
%sequential_1/q_dense_3/StopGradient_2StopGradient sequential_1/q_dense_3/add_4:z:0*
T0*
_output_shapes
:  
sequential_1/q_dense_3/add_5AddV2$sequential_1/q_dense_3/truediv_2:z:0.sequential_1/q_dense_3/StopGradient_2:output:0*
T0*
_output_shapes
: u
0sequential_1/q_dense_3/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAЛ
.sequential_1/q_dense_3/clip_by_value_1/MinimumMinimum sequential_1/q_dense_3/add_5:z:09sequential_1/q_dense_3/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: m
(sequential_1/q_dense_3/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  СН
&sequential_1/q_dense_3/clip_by_value_1Maximum2sequential_1/q_dense_3/clip_by_value_1/Minimum:z:01sequential_1/q_dense_3/clip_by_value_1/y:output:0*
T0*
_output_shapes
: 
sequential_1/q_dense_3/mul_5Mul!sequential_1/q_dense_3/Cast_1:y:0*sequential_1/q_dense_3/clip_by_value_1:z:0*
T0*
_output_shapes
: g
"sequential_1/q_dense_3/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A
 sequential_1/q_dense_3/truediv_3RealDiv sequential_1/q_dense_3/mul_5:z:0+sequential_1/q_dense_3/truediv_3/y:output:0*
T0*
_output_shapes
: c
sequential_1/q_dense_3/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential_1/q_dense_3/mul_6Mul'sequential_1/q_dense_3/mul_6/x:output:0$sequential_1/q_dense_3/truediv_3:z:0*
T0*
_output_shapes
: 
'sequential_1/q_dense_3/ReadVariableOp_4ReadVariableOp0sequential_1_q_dense_3_readvariableop_3_resource*
_output_shapes
: *
dtype0y
sequential_1/q_dense_3/Neg_3Neg/sequential_1/q_dense_3/ReadVariableOp_4:value:0*
T0*
_output_shapes
: 
sequential_1/q_dense_3/add_6AddV2 sequential_1/q_dense_3/Neg_3:y:0 sequential_1/q_dense_3/mul_6:z:0*
T0*
_output_shapes
: c
sequential_1/q_dense_3/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential_1/q_dense_3/mul_7Mul'sequential_1/q_dense_3/mul_7/x:output:0 sequential_1/q_dense_3/add_6:z:0*
T0*
_output_shapes
: |
%sequential_1/q_dense_3/StopGradient_3StopGradient sequential_1/q_dense_3/mul_7:z:0*
T0*
_output_shapes
: 
'sequential_1/q_dense_3/ReadVariableOp_5ReadVariableOp0sequential_1_q_dense_3_readvariableop_3_resource*
_output_shapes
: *
dtype0Ћ
sequential_1/q_dense_3/add_7AddV2/sequential_1/q_dense_3/ReadVariableOp_5:value:0.sequential_1/q_dense_3/StopGradient_3:output:0*
T0*
_output_shapes
: І
sequential_1/q_dense_3/BiasAddBiasAdd'sequential_1/q_dense_3/MatMul:product:0 sequential_1/q_dense_3/add_7:z:0*
T0*'
_output_shapes
:џџџџџџџџџ c
!sequential_1/q_activation_3/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :c
!sequential_1/q_activation_3/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :
sequential_1/q_activation_3/PowPow*sequential_1/q_activation_3/Pow/x:output:0*sequential_1/q_activation_3/Pow/y:output:0*
T0*
_output_shapes
: }
 sequential_1/q_activation_3/CastCast#sequential_1/q_activation_3/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: e
#sequential_1/q_activation_3/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :e
#sequential_1/q_activation_3/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Ѕ
!sequential_1/q_activation_3/Pow_1Pow,sequential_1/q_activation_3/Pow_1/x:output:0,sequential_1/q_activation_3/Pow_1/y:output:0*
T0*
_output_shapes
: 
"sequential_1/q_activation_3/Cast_1Cast%sequential_1/q_activation_3/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: f
!sequential_1/q_activation_3/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *   @f
$sequential_1/q_activation_3/Cast_2/xConst*
_output_shapes
: *
dtype0*
value	B : 
"sequential_1/q_activation_3/Cast_2Cast-sequential_1/q_activation_3/Cast_2/x:output:0*

DstT0*

SrcT0*
_output_shapes
: f
!sequential_1/q_activation_3/sub/yConst*
_output_shapes
: *
dtype0*
valueB
 *   A
sequential_1/q_activation_3/subSub&sequential_1/q_activation_3/Cast_2:y:0*sequential_1/q_activation_3/sub/y:output:0*
T0*
_output_shapes
: 
!sequential_1/q_activation_3/Pow_2Pow*sequential_1/q_activation_3/Const:output:0#sequential_1/q_activation_3/sub:z:0*
T0*
_output_shapes
: 
!sequential_1/q_activation_3/sub_1Sub&sequential_1/q_activation_3/Cast_1:y:0%sequential_1/q_activation_3/Pow_2:z:0*
T0*
_output_shapes
: Д
%sequential_1/q_activation_3/LessEqual	LessEqual'sequential_1/q_dense_3/BiasAdd:output:0%sequential_1/q_activation_3/sub_1:z:0*
T0*'
_output_shapes
:џџџџџџџџџ 
 sequential_1/q_activation_3/ReluRelu'sequential_1/q_dense_3/BiasAdd:output:0*
T0*'
_output_shapes
:џџџџџџџџџ 
+sequential_1/q_activation_3/ones_like/ShapeShape'sequential_1/q_dense_3/BiasAdd:output:0*
T0*
_output_shapes
:p
+sequential_1/q_activation_3/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  ?Ы
%sequential_1/q_activation_3/ones_likeFill4sequential_1/q_activation_3/ones_like/Shape:output:04sequential_1/q_activation_3/ones_like/Const:output:0*
T0*'
_output_shapes
:џџџџџџџџџ 
!sequential_1/q_activation_3/sub_2Sub&sequential_1/q_activation_3/Cast_1:y:0%sequential_1/q_activation_3/Pow_2:z:0*
T0*
_output_shapes
: Џ
sequential_1/q_activation_3/mulMul.sequential_1/q_activation_3/ones_like:output:0%sequential_1/q_activation_3/sub_2:z:0*
T0*'
_output_shapes
:џџџџџџџџџ т
$sequential_1/q_activation_3/SelectV2SelectV2)sequential_1/q_activation_3/LessEqual:z:0.sequential_1/q_activation_3/Relu:activations:0#sequential_1/q_activation_3/mul:z:0*
T0*'
_output_shapes
:џџџџџџџџџ Љ
!sequential_1/q_activation_3/mul_1Mul'sequential_1/q_dense_3/BiasAdd:output:0$sequential_1/q_activation_3/Cast:y:0*
T0*'
_output_shapes
:џџџџџџџџџ Џ
#sequential_1/q_activation_3/truedivRealDiv%sequential_1/q_activation_3/mul_1:z:0&sequential_1/q_activation_3/Cast_1:y:0*
T0*'
_output_shapes
:џџџџџџџџџ 
sequential_1/q_activation_3/NegNeg'sequential_1/q_activation_3/truediv:z:0*
T0*'
_output_shapes
:џџџџџџџџџ 
!sequential_1/q_activation_3/RoundRound'sequential_1/q_activation_3/truediv:z:0*
T0*'
_output_shapes
:џџџџџџџџџ І
sequential_1/q_activation_3/addAddV2#sequential_1/q_activation_3/Neg:y:0%sequential_1/q_activation_3/Round:y:0*
T0*'
_output_shapes
:џџџџџџџџџ 
(sequential_1/q_activation_3/StopGradientStopGradient#sequential_1/q_activation_3/add:z:0*
T0*'
_output_shapes
:џџџџџџџџџ И
!sequential_1/q_activation_3/add_1AddV2'sequential_1/q_activation_3/truediv:z:01sequential_1/q_activation_3/StopGradient:output:0*
T0*'
_output_shapes
:џџџџџџџџџ Џ
%sequential_1/q_activation_3/truediv_1RealDiv%sequential_1/q_activation_3/add_1:z:0$sequential_1/q_activation_3/Cast:y:0*
T0*'
_output_shapes
:џџџџџџџџџ l
'sequential_1/q_activation_3/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?Љ
%sequential_1/q_activation_3/truediv_2RealDiv0sequential_1/q_activation_3/truediv_2/x:output:0$sequential_1/q_activation_3/Cast:y:0*
T0*
_output_shapes
: h
#sequential_1/q_activation_3/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?Ђ
!sequential_1/q_activation_3/sub_3Sub,sequential_1/q_activation_3/sub_3/x:output:0)sequential_1/q_activation_3/truediv_2:z:0*
T0*
_output_shapes
: Р
1sequential_1/q_activation_3/clip_by_value/MinimumMinimum)sequential_1/q_activation_3/truediv_1:z:0%sequential_1/q_activation_3/sub_3:z:0*
T0*'
_output_shapes
:џџџџџџџџџ p
+sequential_1/q_activation_3/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    г
)sequential_1/q_activation_3/clip_by_valueMaximum5sequential_1/q_activation_3/clip_by_value/Minimum:z:04sequential_1/q_activation_3/clip_by_value/y:output:0*
T0*'
_output_shapes
:џџџџџџџџџ Б
!sequential_1/q_activation_3/mul_2Mul&sequential_1/q_activation_3/Cast_1:y:0-sequential_1/q_activation_3/clip_by_value:z:0*
T0*'
_output_shapes
:џџџџџџџџџ 
!sequential_1/q_activation_3/Neg_1Neg-sequential_1/q_activation_3/SelectV2:output:0*
T0*'
_output_shapes
:џџџџџџџџџ Њ
!sequential_1/q_activation_3/add_2AddV2%sequential_1/q_activation_3/Neg_1:y:0%sequential_1/q_activation_3/mul_2:z:0*
T0*'
_output_shapes
:џџџџџџџџџ h
#sequential_1/q_activation_3/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?Џ
!sequential_1/q_activation_3/mul_3Mul,sequential_1/q_activation_3/mul_3/x:output:0%sequential_1/q_activation_3/add_2:z:0*
T0*'
_output_shapes
:џџџџџџџџџ 
*sequential_1/q_activation_3/StopGradient_1StopGradient%sequential_1/q_activation_3/mul_3:z:0*
T0*'
_output_shapes
:џџџџџџџџџ Р
!sequential_1/q_activation_3/add_3AddV2-sequential_1/q_activation_3/SelectV2:output:03sequential_1/q_activation_3/StopGradient_1:output:0*
T0*'
_output_shapes
:џџџџџџџџџ ^
sequential_1/q_dense_4/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :^
sequential_1/q_dense_4/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : 
sequential_1/q_dense_4/PowPow%sequential_1/q_dense_4/Pow/x:output:0%sequential_1/q_dense_4/Pow/y:output:0*
T0*
_output_shapes
: s
sequential_1/q_dense_4/CastCastsequential_1/q_dense_4/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: 
%sequential_1/q_dense_4/ReadVariableOpReadVariableOp.sequential_1_q_dense_4_readvariableop_resource*
_output_shapes

: *
dtype0a
sequential_1/q_dense_4/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A 
sequential_1/q_dense_4/mulMul-sequential_1/q_dense_4/ReadVariableOp:value:0%sequential_1/q_dense_4/mul/y:output:0*
T0*
_output_shapes

: 
sequential_1/q_dense_4/truedivRealDivsequential_1/q_dense_4/mul:z:0sequential_1/q_dense_4/Cast:y:0*
T0*
_output_shapes

: n
sequential_1/q_dense_4/NegNeg"sequential_1/q_dense_4/truediv:z:0*
T0*
_output_shapes

: r
sequential_1/q_dense_4/RoundRound"sequential_1/q_dense_4/truediv:z:0*
T0*
_output_shapes

: 
sequential_1/q_dense_4/addAddV2sequential_1/q_dense_4/Neg:y:0 sequential_1/q_dense_4/Round:y:0*
T0*
_output_shapes

: |
#sequential_1/q_dense_4/StopGradientStopGradientsequential_1/q_dense_4/add:z:0*
T0*
_output_shapes

:  
sequential_1/q_dense_4/add_1AddV2"sequential_1/q_dense_4/truediv:z:0,sequential_1/q_dense_4/StopGradient:output:0*
T0*
_output_shapes

: s
.sequential_1/q_dense_4/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAЛ
,sequential_1/q_dense_4/clip_by_value/MinimumMinimum sequential_1/q_dense_4/add_1:z:07sequential_1/q_dense_4/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: k
&sequential_1/q_dense_4/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  СЛ
$sequential_1/q_dense_4/clip_by_valueMaximum0sequential_1/q_dense_4/clip_by_value/Minimum:z:0/sequential_1/q_dense_4/clip_by_value/y:output:0*
T0*
_output_shapes

: 
sequential_1/q_dense_4/mul_1Mulsequential_1/q_dense_4/Cast:y:0(sequential_1/q_dense_4/clip_by_value:z:0*
T0*
_output_shapes

: g
"sequential_1/q_dense_4/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  AЃ
 sequential_1/q_dense_4/truediv_1RealDiv sequential_1/q_dense_4/mul_1:z:0+sequential_1/q_dense_4/truediv_1/y:output:0*
T0*
_output_shapes

: c
sequential_1/q_dense_4/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential_1/q_dense_4/mul_2Mul'sequential_1/q_dense_4/mul_2/x:output:0$sequential_1/q_dense_4/truediv_1:z:0*
T0*
_output_shapes

: 
'sequential_1/q_dense_4/ReadVariableOp_1ReadVariableOp.sequential_1_q_dense_4_readvariableop_resource*
_output_shapes

: *
dtype0}
sequential_1/q_dense_4/Neg_1Neg/sequential_1/q_dense_4/ReadVariableOp_1:value:0*
T0*
_output_shapes

: 
sequential_1/q_dense_4/add_2AddV2 sequential_1/q_dense_4/Neg_1:y:0 sequential_1/q_dense_4/mul_2:z:0*
T0*
_output_shapes

: c
sequential_1/q_dense_4/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential_1/q_dense_4/mul_3Mul'sequential_1/q_dense_4/mul_3/x:output:0 sequential_1/q_dense_4/add_2:z:0*
T0*
_output_shapes

: 
%sequential_1/q_dense_4/StopGradient_1StopGradient sequential_1/q_dense_4/mul_3:z:0*
T0*
_output_shapes

: 
'sequential_1/q_dense_4/ReadVariableOp_2ReadVariableOp.sequential_1_q_dense_4_readvariableop_resource*
_output_shapes

: *
dtype0Џ
sequential_1/q_dense_4/add_3AddV2/sequential_1/q_dense_4/ReadVariableOp_2:value:0.sequential_1/q_dense_4/StopGradient_1:output:0*
T0*
_output_shapes

: Ђ
sequential_1/q_dense_4/MatMulMatMul%sequential_1/q_activation_3/add_3:z:0 sequential_1/q_dense_4/add_3:z:0*
T0*'
_output_shapes
:џџџџџџџџџ`
sequential_1/q_dense_4/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :`
sequential_1/q_dense_4/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : 
sequential_1/q_dense_4/Pow_1Pow'sequential_1/q_dense_4/Pow_1/x:output:0'sequential_1/q_dense_4/Pow_1/y:output:0*
T0*
_output_shapes
: w
sequential_1/q_dense_4/Cast_1Cast sequential_1/q_dense_4/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: 
'sequential_1/q_dense_4/ReadVariableOp_3ReadVariableOp0sequential_1_q_dense_4_readvariableop_3_resource*
_output_shapes
:*
dtype0c
sequential_1/q_dense_4/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  AЂ
sequential_1/q_dense_4/mul_4Mul/sequential_1/q_dense_4/ReadVariableOp_3:value:0'sequential_1/q_dense_4/mul_4/y:output:0*
T0*
_output_shapes
:
 sequential_1/q_dense_4/truediv_2RealDiv sequential_1/q_dense_4/mul_4:z:0!sequential_1/q_dense_4/Cast_1:y:0*
T0*
_output_shapes
:n
sequential_1/q_dense_4/Neg_2Neg$sequential_1/q_dense_4/truediv_2:z:0*
T0*
_output_shapes
:r
sequential_1/q_dense_4/Round_1Round$sequential_1/q_dense_4/truediv_2:z:0*
T0*
_output_shapes
:
sequential_1/q_dense_4/add_4AddV2 sequential_1/q_dense_4/Neg_2:y:0"sequential_1/q_dense_4/Round_1:y:0*
T0*
_output_shapes
:|
%sequential_1/q_dense_4/StopGradient_2StopGradient sequential_1/q_dense_4/add_4:z:0*
T0*
_output_shapes
: 
sequential_1/q_dense_4/add_5AddV2$sequential_1/q_dense_4/truediv_2:z:0.sequential_1/q_dense_4/StopGradient_2:output:0*
T0*
_output_shapes
:u
0sequential_1/q_dense_4/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAЛ
.sequential_1/q_dense_4/clip_by_value_1/MinimumMinimum sequential_1/q_dense_4/add_5:z:09sequential_1/q_dense_4/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
:m
(sequential_1/q_dense_4/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  СН
&sequential_1/q_dense_4/clip_by_value_1Maximum2sequential_1/q_dense_4/clip_by_value_1/Minimum:z:01sequential_1/q_dense_4/clip_by_value_1/y:output:0*
T0*
_output_shapes
:
sequential_1/q_dense_4/mul_5Mul!sequential_1/q_dense_4/Cast_1:y:0*sequential_1/q_dense_4/clip_by_value_1:z:0*
T0*
_output_shapes
:g
"sequential_1/q_dense_4/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A
 sequential_1/q_dense_4/truediv_3RealDiv sequential_1/q_dense_4/mul_5:z:0+sequential_1/q_dense_4/truediv_3/y:output:0*
T0*
_output_shapes
:c
sequential_1/q_dense_4/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential_1/q_dense_4/mul_6Mul'sequential_1/q_dense_4/mul_6/x:output:0$sequential_1/q_dense_4/truediv_3:z:0*
T0*
_output_shapes
:
'sequential_1/q_dense_4/ReadVariableOp_4ReadVariableOp0sequential_1_q_dense_4_readvariableop_3_resource*
_output_shapes
:*
dtype0y
sequential_1/q_dense_4/Neg_3Neg/sequential_1/q_dense_4/ReadVariableOp_4:value:0*
T0*
_output_shapes
:
sequential_1/q_dense_4/add_6AddV2 sequential_1/q_dense_4/Neg_3:y:0 sequential_1/q_dense_4/mul_6:z:0*
T0*
_output_shapes
:c
sequential_1/q_dense_4/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
sequential_1/q_dense_4/mul_7Mul'sequential_1/q_dense_4/mul_7/x:output:0 sequential_1/q_dense_4/add_6:z:0*
T0*
_output_shapes
:|
%sequential_1/q_dense_4/StopGradient_3StopGradient sequential_1/q_dense_4/mul_7:z:0*
T0*
_output_shapes
:
'sequential_1/q_dense_4/ReadVariableOp_5ReadVariableOp0sequential_1_q_dense_4_readvariableop_3_resource*
_output_shapes
:*
dtype0Ћ
sequential_1/q_dense_4/add_7AddV2/sequential_1/q_dense_4/ReadVariableOp_5:value:0.sequential_1/q_dense_4/StopGradient_3:output:0*
T0*
_output_shapes
:І
sequential_1/q_dense_4/BiasAddBiasAdd'sequential_1/q_dense_4/MatMul:product:0 sequential_1/q_dense_4/add_7:z:0*
T0*'
_output_shapes
:џџџџџџџџџv
IdentityIdentity'sequential_1/q_dense_4/BiasAdd:output:0^NoOp*
T0*'
_output_shapes
:џџџџџџџџџј	
NoOpNoOp"^sequential/q_dense/ReadVariableOp$^sequential/q_dense/ReadVariableOp_1$^sequential/q_dense/ReadVariableOp_2$^sequential/q_dense/ReadVariableOp_3$^sequential/q_dense/ReadVariableOp_4$^sequential/q_dense/ReadVariableOp_5$^sequential/q_dense_1/ReadVariableOp&^sequential/q_dense_1/ReadVariableOp_1&^sequential/q_dense_1/ReadVariableOp_2&^sequential/q_dense_1/ReadVariableOp_3&^sequential/q_dense_1/ReadVariableOp_4&^sequential/q_dense_1/ReadVariableOp_5$^sequential/q_dense_2/ReadVariableOp&^sequential/q_dense_2/ReadVariableOp_1&^sequential/q_dense_2/ReadVariableOp_2&^sequential/q_dense_2/ReadVariableOp_3&^sequential/q_dense_2/ReadVariableOp_4&^sequential/q_dense_2/ReadVariableOp_5&^sequential_1/q_dense_3/ReadVariableOp(^sequential_1/q_dense_3/ReadVariableOp_1(^sequential_1/q_dense_3/ReadVariableOp_2(^sequential_1/q_dense_3/ReadVariableOp_3(^sequential_1/q_dense_3/ReadVariableOp_4(^sequential_1/q_dense_3/ReadVariableOp_5&^sequential_1/q_dense_4/ReadVariableOp(^sequential_1/q_dense_4/ReadVariableOp_1(^sequential_1/q_dense_4/ReadVariableOp_2(^sequential_1/q_dense_4/ReadVariableOp_3(^sequential_1/q_dense_4/ReadVariableOp_4(^sequential_1/q_dense_4/ReadVariableOp_5*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:џџџџџџџџџ: : : : : : : : : : 2F
!sequential/q_dense/ReadVariableOp!sequential/q_dense/ReadVariableOp2J
#sequential/q_dense/ReadVariableOp_1#sequential/q_dense/ReadVariableOp_12J
#sequential/q_dense/ReadVariableOp_2#sequential/q_dense/ReadVariableOp_22J
#sequential/q_dense/ReadVariableOp_3#sequential/q_dense/ReadVariableOp_32J
#sequential/q_dense/ReadVariableOp_4#sequential/q_dense/ReadVariableOp_42J
#sequential/q_dense/ReadVariableOp_5#sequential/q_dense/ReadVariableOp_52J
#sequential/q_dense_1/ReadVariableOp#sequential/q_dense_1/ReadVariableOp2N
%sequential/q_dense_1/ReadVariableOp_1%sequential/q_dense_1/ReadVariableOp_12N
%sequential/q_dense_1/ReadVariableOp_2%sequential/q_dense_1/ReadVariableOp_22N
%sequential/q_dense_1/ReadVariableOp_3%sequential/q_dense_1/ReadVariableOp_32N
%sequential/q_dense_1/ReadVariableOp_4%sequential/q_dense_1/ReadVariableOp_42N
%sequential/q_dense_1/ReadVariableOp_5%sequential/q_dense_1/ReadVariableOp_52J
#sequential/q_dense_2/ReadVariableOp#sequential/q_dense_2/ReadVariableOp2N
%sequential/q_dense_2/ReadVariableOp_1%sequential/q_dense_2/ReadVariableOp_12N
%sequential/q_dense_2/ReadVariableOp_2%sequential/q_dense_2/ReadVariableOp_22N
%sequential/q_dense_2/ReadVariableOp_3%sequential/q_dense_2/ReadVariableOp_32N
%sequential/q_dense_2/ReadVariableOp_4%sequential/q_dense_2/ReadVariableOp_42N
%sequential/q_dense_2/ReadVariableOp_5%sequential/q_dense_2/ReadVariableOp_52N
%sequential_1/q_dense_3/ReadVariableOp%sequential_1/q_dense_3/ReadVariableOp2R
'sequential_1/q_dense_3/ReadVariableOp_1'sequential_1/q_dense_3/ReadVariableOp_12R
'sequential_1/q_dense_3/ReadVariableOp_2'sequential_1/q_dense_3/ReadVariableOp_22R
'sequential_1/q_dense_3/ReadVariableOp_3'sequential_1/q_dense_3/ReadVariableOp_32R
'sequential_1/q_dense_3/ReadVariableOp_4'sequential_1/q_dense_3/ReadVariableOp_42R
'sequential_1/q_dense_3/ReadVariableOp_5'sequential_1/q_dense_3/ReadVariableOp_52N
%sequential_1/q_dense_4/ReadVariableOp%sequential_1/q_dense_4/ReadVariableOp2R
'sequential_1/q_dense_4/ReadVariableOp_1'sequential_1/q_dense_4/ReadVariableOp_12R
'sequential_1/q_dense_4/ReadVariableOp_2'sequential_1/q_dense_4/ReadVariableOp_22R
'sequential_1/q_dense_4/ReadVariableOp_3'sequential_1/q_dense_4/ReadVariableOp_32R
'sequential_1/q_dense_4/ReadVariableOp_4'sequential_1/q_dense_4/ReadVariableOp_42R
'sequential_1/q_dense_4/ReadVariableOp_5'sequential_1/q_dense_4/ReadVariableOp_5:S O
+
_output_shapes
:џџџџџџџџџ
 
_user_specified_nameinputs
	

+__inference_sequential_layer_call_fn_460151

inputs
unknown: 
	unknown_0: 
	unknown_1:  
	unknown_2: 
	unknown_3:  
	unknown_4: 
identityЂStatefulPartitionedCall
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4*
Tin
	2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ *(
_read_only_resource_inputs

*2
config_proto" 

CPU

GPU2 *0J 8 *O
fJRH
F__inference_sequential_layer_call_and_return_conditional_losses_458256s
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:џџџџџџџџџ `
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*6
_input_shapes%
#:џџџџџџџџџ: : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:S O
+
_output_shapes
:џџџџџџџџџ
 
_user_specified_nameinputs
Ћ
Ё
P__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_458770

inputs#
sequential_458745: 
sequential_458747: #
sequential_458749:  
sequential_458751: #
sequential_458753:  
sequential_458755: %
sequential_1_458760:  !
sequential_1_458762: %
sequential_1_458764: !
sequential_1_458766:
identityЂ"sequential/StatefulPartitionedCallЂ$sequential_1/StatefulPartitionedCallе
"sequential/StatefulPartitionedCallStatefulPartitionedCallinputssequential_458745sequential_458747sequential_458749sequential_458751sequential_458753sequential_458755*
Tin
	2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ *(
_read_only_resource_inputs

*2
config_proto" 

CPU

GPU2 *0J 8 *O
fJRH
F__inference_sequential_layer_call_and_return_conditional_losses_458256X
Mean/reduction_indicesConst*
_output_shapes
: *
dtype0*
value	B :
MeanMean+sequential/StatefulPartitionedCall:output:0Mean/reduction_indices:output:0*
T0*'
_output_shapes
:џџџџџџџџџ К
$sequential_1/StatefulPartitionedCallStatefulPartitionedCallMean:output:0sequential_1_458760sequential_1_458762sequential_1_458764sequential_1_458766*
Tin	
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:џџџџџџџџџ*&
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8 *Q
fLRJ
H__inference_sequential_1_layer_call_and_return_conditional_losses_458606|
IdentityIdentity-sequential_1/StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:џџџџџџџџџ
NoOpNoOp#^sequential/StatefulPartitionedCall%^sequential_1/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:џџџџџџџџџ: : : : : : : : : : 2H
"sequential/StatefulPartitionedCall"sequential/StatefulPartitionedCall2L
$sequential_1/StatefulPartitionedCall$sequential_1/StatefulPartitionedCall:S O
+
_output_shapes
:џџџџџџџџџ
 
_user_specified_nameinputs
ћ1
Ј
E__inference_q_dense_4_layer_call_and_return_conditional_losses_458532

inputs)
readvariableop_resource: '
readvariableop_3_resource:
identityЂReadVariableOpЂReadVariableOp_1ЂReadVariableOp_2ЂReadVariableOp_3ЂReadVariableOp_4ЂReadVariableOp_5G
Pow/xConst*
_output_shapes
: *
dtype0*
value	B :G
Pow/yConst*
_output_shapes
: *
dtype0*
value	B : K
PowPowPow/x:output:0Pow/y:output:0*
T0*
_output_shapes
: E
CastCastPow:z:0*

DstT0*

SrcT0*
_output_shapes
: f
ReadVariableOpReadVariableOpreadvariableop_resource*
_output_shapes

: *
dtype0J
mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A[
mulMulReadVariableOp:value:0mul/y:output:0*
T0*
_output_shapes

: N
truedivRealDivmul:z:0Cast:y:0*
T0*
_output_shapes

: @
NegNegtruediv:z:0*
T0*
_output_shapes

: D
RoundRoundtruediv:z:0*
T0*
_output_shapes

: I
addAddV2Neg:y:0	Round:y:0*
T0*
_output_shapes

: N
StopGradientStopGradientadd:z:0*
T0*
_output_shapes

: [
add_1AddV2truediv:z:0StopGradient:output:0*
T0*
_output_shapes

: \
clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Сv
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*
_output_shapes

: R
mul_1MulCast:y:0clip_by_value:z:0*
T0*
_output_shapes

: P
truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A^
	truediv_1RealDiv	mul_1:z:0truediv_1/y:output:0*
T0*
_output_shapes

: L
mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?V
mul_2Mulmul_2/x:output:0truediv_1:z:0*
T0*
_output_shapes

: h
ReadVariableOp_1ReadVariableOpreadvariableop_resource*
_output_shapes

: *
dtype0O
Neg_1NegReadVariableOp_1:value:0*
T0*
_output_shapes

: M
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*
_output_shapes

: L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?R
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*
_output_shapes

: R
StopGradient_1StopGradient	mul_3:z:0*
T0*
_output_shapes

: h
ReadVariableOp_2ReadVariableOpreadvariableop_resource*
_output_shapes

: *
dtype0j
add_3AddV2ReadVariableOp_2:value:0StopGradient_1:output:0*
T0*
_output_shapes

: U
MatMulMatMulinputs	add_3:z:0*
T0*'
_output_shapes
:џџџџџџџџџI
Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :I
Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Q
Pow_1PowPow_1/x:output:0Pow_1/y:output:0*
T0*
_output_shapes
: I
Cast_1Cast	Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: f
ReadVariableOp_3ReadVariableOpreadvariableop_3_resource*
_output_shapes
:*
dtype0L
mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A]
mul_4MulReadVariableOp_3:value:0mul_4/y:output:0*
T0*
_output_shapes
:P
	truediv_2RealDiv	mul_4:z:0
Cast_1:y:0*
T0*
_output_shapes
:@
Neg_2Negtruediv_2:z:0*
T0*
_output_shapes
:D
Round_1Roundtruediv_2:z:0*
T0*
_output_shapes
:K
add_4AddV2	Neg_2:y:0Round_1:y:0*
T0*
_output_shapes
:N
StopGradient_2StopGradient	add_4:z:0*
T0*
_output_shapes
:[
add_5AddV2truediv_2:z:0StopGradient_2:output:0*
T0*
_output_shapes
:^
clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
:V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Сx
clip_by_value_1Maximumclip_by_value_1/Minimum:z:0clip_by_value_1/y:output:0*
T0*
_output_shapes
:R
mul_5Mul
Cast_1:y:0clip_by_value_1:z:0*
T0*
_output_shapes
:P
truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  AZ
	truediv_3RealDiv	mul_5:z:0truediv_3/y:output:0*
T0*
_output_shapes
:L
mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?R
mul_6Mulmul_6/x:output:0truediv_3:z:0*
T0*
_output_shapes
:f
ReadVariableOp_4ReadVariableOpreadvariableop_3_resource*
_output_shapes
:*
dtype0K
Neg_3NegReadVariableOp_4:value:0*
T0*
_output_shapes
:I
add_6AddV2	Neg_3:y:0	mul_6:z:0*
T0*
_output_shapes
:L
mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?N
mul_7Mulmul_7/x:output:0	add_6:z:0*
T0*
_output_shapes
:N
StopGradient_3StopGradient	mul_7:z:0*
T0*
_output_shapes
:f
ReadVariableOp_5ReadVariableOpreadvariableop_3_resource*
_output_shapes
:*
dtype0f
add_7AddV2ReadVariableOp_5:value:0StopGradient_3:output:0*
T0*
_output_shapes
:a
BiasAddBiasAddMatMul:product:0	add_7:z:0*
T0*'
_output_shapes
:џџџџџџџџџ_
IdentityIdentityBiasAdd:output:0^NoOp*
T0*'
_output_shapes
:џџџџџџџџџЖ
NoOpNoOp^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:џџџџџџџџџ : : 2 
ReadVariableOpReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_5:O K
'
_output_shapes
:џџџџџџџџџ 
 
_user_specified_nameinputs
	

+__inference_sequential_layer_call_fn_458288
q_dense_input
unknown: 
	unknown_0: 
	unknown_1:  
	unknown_2: 
	unknown_3:  
	unknown_4: 
identityЂStatefulPartitionedCall
StatefulPartitionedCallStatefulPartitionedCallq_dense_inputunknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4*
Tin
	2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ *(
_read_only_resource_inputs

*2
config_proto" 

CPU

GPU2 *0J 8 *O
fJRH
F__inference_sequential_layer_call_and_return_conditional_losses_458256s
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:џџџџџџџџџ `
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*6
_input_shapes%
#:џџџџџџџџџ: : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:Z V
+
_output_shapes
:џџџџџџџџџ
'
_user_specified_nameq_dense_input
К

ћ
5__inference_DeepSetsInvQuantised_layer_call_fn_458818
input_1
unknown: 
	unknown_0: 
	unknown_1:  
	unknown_2: 
	unknown_3:  
	unknown_4: 
	unknown_5:  
	unknown_6: 
	unknown_7: 
	unknown_8:
identityЂStatefulPartitionedCallг
StatefulPartitionedCallStatefulPartitionedCallinput_1unknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4	unknown_5	unknown_6	unknown_7	unknown_8*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:џџџџџџџџџ*,
_read_only_resource_inputs

	
*2
config_proto" 

CPU

GPU2 *0J 8 *Y
fTRR
P__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_458770o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:џџџџџџџџџ`
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:џџџџџџџџџ: : : : : : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:T P
+
_output_shapes
:џџџџџџџџџ
!
_user_specified_name	input_1
н!
f
J__inference_q_activation_2_layer_call_and_return_conditional_losses_458149

inputs
identityG
Pow/xConst*
_output_shapes
: *
dtype0*
value	B :G
Pow/yConst*
_output_shapes
: *
dtype0*
value	B :K
PowPowPow/x:output:0Pow/y:output:0*
T0*
_output_shapes
: E
CastCastPow:z:0*

DstT0*

SrcT0*
_output_shapes
: I
Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :I
Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Q
Pow_1PowPow_1/x:output:0Pow_1/y:output:0*
T0*
_output_shapes
: I
Cast_1Cast	Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: J
ConstConst*
_output_shapes
: *
dtype0*
valueB
 *   @J
Cast_2/xConst*
_output_shapes
: *
dtype0*
value	B : Q
Cast_2CastCast_2/x:output:0*

DstT0*

SrcT0*
_output_shapes
: J
sub/yConst*
_output_shapes
: *
dtype0*
valueB
 *   AG
subSub
Cast_2:y:0sub/y:output:0*
T0*
_output_shapes
: F
Pow_2PowConst:output:0sub:z:0*
T0*
_output_shapes
: D
sub_1Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: _
	LessEqual	LessEqualinputs	sub_1:z:0*
T0*+
_output_shapes
:џџџџџџџџџ J
ReluReluinputs*
T0*+
_output_shapes
:џџџџџџџџџ E
ones_like/ShapeShapeinputs*
T0*
_output_shapes
:T
ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  ?{
	ones_likeFillones_like/Shape:output:0ones_like/Const:output:0*
T0*+
_output_shapes
:џџџџџџџџџ D
sub_2Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: _
mulMulones_like:output:0	sub_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ v
SelectV2SelectV2LessEqual:z:0Relu:activations:0mul:z:0*
T0*+
_output_shapes
:џџџџџџџџџ T
mul_1MulinputsCast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ _
truedivRealDiv	mul_1:z:0
Cast_1:y:0*
T0*+
_output_shapes
:џџџџџџџџџ M
NegNegtruediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ Q
RoundRoundtruediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ V
addAddV2Neg:y:0	Round:y:0*
T0*+
_output_shapes
:џџџџџџџџџ [
StopGradientStopGradientadd:z:0*
T0*+
_output_shapes
:џџџџџџџџџ h
add_1AddV2truediv:z:0StopGradient:output:0*
T0*+
_output_shapes
:џџџџџџџџџ _
	truediv_1RealDiv	add_1:z:0Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ P
truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?U
	truediv_2RealDivtruediv_2/x:output:0Cast:y:0*
T0*
_output_shapes
: L
sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?N
sub_3Subsub_3/x:output:0truediv_2:z:0*
T0*
_output_shapes
: p
clip_by_value/MinimumMinimumtruediv_1:z:0	sub_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*+
_output_shapes
:џџџџџџџџџ a
mul_2Mul
Cast_1:y:0clip_by_value:z:0*
T0*+
_output_shapes
:џџџџџџџџџ U
Neg_1NegSelectV2:output:0*
T0*+
_output_shapes
:џџџџџџџџџ Z
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?_
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ _
StopGradient_1StopGradient	mul_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ p
add_3AddV2SelectV2:output:0StopGradient_1:output:0*
T0*+
_output_shapes
:џџџџџџџџџ U
IdentityIdentity	add_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:џџџџџџџџџ :S O
+
_output_shapes
:џџџџџџџџџ 
 
_user_specified_nameinputs
И
O
#__inference__update_step_xla_460082
gradient
variable:  *
_XlaMustCompile(*(
_construction_contextkEagerRuntime*
_input_shapes
:  : *
	_noinline(:H D

_output_shapes

:  
"
_user_specified_name
gradient:($
"
_user_specified_name
variable


F__inference_sequential_layer_call_and_return_conditional_losses_458256

inputs 
q_dense_458237: 
q_dense_458239: "
q_dense_1_458243:  
q_dense_1_458245: "
q_dense_2_458249:  
q_dense_2_458251: 
identityЂq_dense/StatefulPartitionedCallЂ!q_dense_1/StatefulPartitionedCallЂ!q_dense_2/StatefulPartitionedCallѕ
q_dense/StatefulPartitionedCallStatefulPartitionedCallinputsq_dense_458237q_dense_458239*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8 *L
fGRE
C__inference_q_dense_layer_call_and_return_conditional_losses_457810ы
q_activation/PartitionedCallPartitionedCall(q_dense/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8 *Q
fLRJ
H__inference_q_activation_layer_call_and_return_conditional_losses_457865
!q_dense_1/StatefulPartitionedCallStatefulPartitionedCall%q_activation/PartitionedCall:output:0q_dense_1_458243q_dense_1_458245*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8 *N
fIRG
E__inference_q_dense_1_layer_call_and_return_conditional_losses_457952ё
q_activation_1/PartitionedCallPartitionedCall*q_dense_1/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8 *S
fNRL
J__inference_q_activation_1_layer_call_and_return_conditional_losses_458007
!q_dense_2/StatefulPartitionedCallStatefulPartitionedCall'q_activation_1/PartitionedCall:output:0q_dense_2_458249q_dense_2_458251*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8 *N
fIRG
E__inference_q_dense_2_layer_call_and_return_conditional_losses_458094ё
q_activation_2/PartitionedCallPartitionedCall*q_dense_2/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8 *S
fNRL
J__inference_q_activation_2_layer_call_and_return_conditional_losses_458149z
IdentityIdentity'q_activation_2/PartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:џџџџџџџџџ А
NoOpNoOp ^q_dense/StatefulPartitionedCall"^q_dense_1/StatefulPartitionedCall"^q_dense_2/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*6
_input_shapes%
#:џџџџџџџџџ: : : : : : 2B
q_dense/StatefulPartitionedCallq_dense/StatefulPartitionedCall2F
!q_dense_1/StatefulPartitionedCall!q_dense_1/StatefulPartitionedCall2F
!q_dense_2/StatefulPartitionedCall!q_dense_2/StatefulPartitionedCall:S O
+
_output_shapes
:џџџџџџџџџ
 
_user_specified_nameinputs
К

ћ
5__inference_DeepSetsInvQuantised_layer_call_fn_458715
input_1
unknown: 
	unknown_0: 
	unknown_1:  
	unknown_2: 
	unknown_3:  
	unknown_4: 
	unknown_5:  
	unknown_6: 
	unknown_7: 
	unknown_8:
identityЂStatefulPartitionedCallг
StatefulPartitionedCallStatefulPartitionedCallinput_1unknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4	unknown_5	unknown_6	unknown_7	unknown_8*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:џџџџџџџџџ*,
_read_only_resource_inputs

	
*2
config_proto" 

CPU

GPU2 *0J 8 *Y
fTRR
P__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_458692o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:џџџџџџџџџ`
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:џџџџџџџџџ: : : : : : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:T P
+
_output_shapes
:џџџџџџџџџ
!
_user_specified_name	input_1
О
й
-__inference_sequential_1_layer_call_fn_458630
q_dense_3_input
unknown:  
	unknown_0: 
	unknown_1: 
	unknown_2:
identityЂStatefulPartitionedCall
StatefulPartitionedCallStatefulPartitionedCallq_dense_3_inputunknown	unknown_0	unknown_1	unknown_2*
Tin	
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:џџџџџџџџџ*&
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8 *Q
fLRJ
H__inference_sequential_1_layer_call_and_return_conditional_losses_458606o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:џџџџџџџџџ`
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:џџџџџџџџџ : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:X T
'
_output_shapes
:џџџџџџџџџ 
)
_user_specified_nameq_dense_3_input
Ў
Ђ
P__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_458874
input_1#
sequential_458849: 
sequential_458851: #
sequential_458853:  
sequential_458855: #
sequential_458857:  
sequential_458859: %
sequential_1_458864:  !
sequential_1_458866: %
sequential_1_458868: !
sequential_1_458870:
identityЂ"sequential/StatefulPartitionedCallЂ$sequential_1/StatefulPartitionedCallж
"sequential/StatefulPartitionedCallStatefulPartitionedCallinput_1sequential_458849sequential_458851sequential_458853sequential_458855sequential_458857sequential_458859*
Tin
	2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ *(
_read_only_resource_inputs

*2
config_proto" 

CPU

GPU2 *0J 8 *O
fJRH
F__inference_sequential_layer_call_and_return_conditional_losses_458256X
Mean/reduction_indicesConst*
_output_shapes
: *
dtype0*
value	B :
MeanMean+sequential/StatefulPartitionedCall:output:0Mean/reduction_indices:output:0*
T0*'
_output_shapes
:џџџџџџџџџ К
$sequential_1/StatefulPartitionedCallStatefulPartitionedCallMean:output:0sequential_1_458864sequential_1_458866sequential_1_458868sequential_1_458870*
Tin	
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:џџџџџџџџџ*&
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8 *Q
fLRJ
H__inference_sequential_1_layer_call_and_return_conditional_losses_458606|
IdentityIdentity-sequential_1/StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:џџџџџџџџџ
NoOpNoOp#^sequential/StatefulPartitionedCall%^sequential_1/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:џџџџџџџџџ: : : : : : : : : : 2H
"sequential/StatefulPartitionedCall"sequential/StatefulPartitionedCall2L
$sequential_1/StatefulPartitionedCall$sequential_1/StatefulPartitionedCall:T P
+
_output_shapes
:џџџџџџџџџ
!
_user_specified_name	input_1
ўЃ

H__inference_sequential_1_layer_call_and_return_conditional_losses_461295

inputs3
!q_dense_3_readvariableop_resource:  1
#q_dense_3_readvariableop_3_resource: 3
!q_dense_4_readvariableop_resource: 1
#q_dense_4_readvariableop_3_resource:
identityЂq_dense_3/ReadVariableOpЂq_dense_3/ReadVariableOp_1Ђq_dense_3/ReadVariableOp_2Ђq_dense_3/ReadVariableOp_3Ђq_dense_3/ReadVariableOp_4Ђq_dense_3/ReadVariableOp_5Ђq_dense_4/ReadVariableOpЂq_dense_4/ReadVariableOp_1Ђq_dense_4/ReadVariableOp_2Ђq_dense_4/ReadVariableOp_3Ђq_dense_4/ReadVariableOp_4Ђq_dense_4/ReadVariableOp_5Q
q_dense_3/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :Q
q_dense_3/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : i
q_dense_3/PowPowq_dense_3/Pow/x:output:0q_dense_3/Pow/y:output:0*
T0*
_output_shapes
: Y
q_dense_3/CastCastq_dense_3/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: z
q_dense_3/ReadVariableOpReadVariableOp!q_dense_3_readvariableop_resource*
_output_shapes

:  *
dtype0T
q_dense_3/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Ay
q_dense_3/mulMul q_dense_3/ReadVariableOp:value:0q_dense_3/mul/y:output:0*
T0*
_output_shapes

:  l
q_dense_3/truedivRealDivq_dense_3/mul:z:0q_dense_3/Cast:y:0*
T0*
_output_shapes

:  T
q_dense_3/NegNegq_dense_3/truediv:z:0*
T0*
_output_shapes

:  X
q_dense_3/RoundRoundq_dense_3/truediv:z:0*
T0*
_output_shapes

:  g
q_dense_3/addAddV2q_dense_3/Neg:y:0q_dense_3/Round:y:0*
T0*
_output_shapes

:  b
q_dense_3/StopGradientStopGradientq_dense_3/add:z:0*
T0*
_output_shapes

:  y
q_dense_3/add_1AddV2q_dense_3/truediv:z:0q_dense_3/StopGradient:output:0*
T0*
_output_shapes

:  f
!q_dense_3/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pA
q_dense_3/clip_by_value/MinimumMinimumq_dense_3/add_1:z:0*q_dense_3/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  ^
q_dense_3/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  С
q_dense_3/clip_by_valueMaximum#q_dense_3/clip_by_value/Minimum:z:0"q_dense_3/clip_by_value/y:output:0*
T0*
_output_shapes

:  p
q_dense_3/mul_1Mulq_dense_3/Cast:y:0q_dense_3/clip_by_value:z:0*
T0*
_output_shapes

:  Z
q_dense_3/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A|
q_dense_3/truediv_1RealDivq_dense_3/mul_1:z:0q_dense_3/truediv_1/y:output:0*
T0*
_output_shapes

:  V
q_dense_3/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?t
q_dense_3/mul_2Mulq_dense_3/mul_2/x:output:0q_dense_3/truediv_1:z:0*
T0*
_output_shapes

:  |
q_dense_3/ReadVariableOp_1ReadVariableOp!q_dense_3_readvariableop_resource*
_output_shapes

:  *
dtype0c
q_dense_3/Neg_1Neg"q_dense_3/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  k
q_dense_3/add_2AddV2q_dense_3/Neg_1:y:0q_dense_3/mul_2:z:0*
T0*
_output_shapes

:  V
q_dense_3/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?p
q_dense_3/mul_3Mulq_dense_3/mul_3/x:output:0q_dense_3/add_2:z:0*
T0*
_output_shapes

:  f
q_dense_3/StopGradient_1StopGradientq_dense_3/mul_3:z:0*
T0*
_output_shapes

:  |
q_dense_3/ReadVariableOp_2ReadVariableOp!q_dense_3_readvariableop_resource*
_output_shapes

:  *
dtype0
q_dense_3/add_3AddV2"q_dense_3/ReadVariableOp_2:value:0!q_dense_3/StopGradient_1:output:0*
T0*
_output_shapes

:  i
q_dense_3/MatMulMatMulinputsq_dense_3/add_3:z:0*
T0*'
_output_shapes
:џџџџџџџџџ S
q_dense_3/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :S
q_dense_3/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : o
q_dense_3/Pow_1Powq_dense_3/Pow_1/x:output:0q_dense_3/Pow_1/y:output:0*
T0*
_output_shapes
: ]
q_dense_3/Cast_1Castq_dense_3/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: z
q_dense_3/ReadVariableOp_3ReadVariableOp#q_dense_3_readvariableop_3_resource*
_output_shapes
: *
dtype0V
q_dense_3/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A{
q_dense_3/mul_4Mul"q_dense_3/ReadVariableOp_3:value:0q_dense_3/mul_4/y:output:0*
T0*
_output_shapes
: n
q_dense_3/truediv_2RealDivq_dense_3/mul_4:z:0q_dense_3/Cast_1:y:0*
T0*
_output_shapes
: T
q_dense_3/Neg_2Negq_dense_3/truediv_2:z:0*
T0*
_output_shapes
: X
q_dense_3/Round_1Roundq_dense_3/truediv_2:z:0*
T0*
_output_shapes
: i
q_dense_3/add_4AddV2q_dense_3/Neg_2:y:0q_dense_3/Round_1:y:0*
T0*
_output_shapes
: b
q_dense_3/StopGradient_2StopGradientq_dense_3/add_4:z:0*
T0*
_output_shapes
: y
q_dense_3/add_5AddV2q_dense_3/truediv_2:z:0!q_dense_3/StopGradient_2:output:0*
T0*
_output_shapes
: h
#q_dense_3/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pA
!q_dense_3/clip_by_value_1/MinimumMinimumq_dense_3/add_5:z:0,q_dense_3/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: `
q_dense_3/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  С
q_dense_3/clip_by_value_1Maximum%q_dense_3/clip_by_value_1/Minimum:z:0$q_dense_3/clip_by_value_1/y:output:0*
T0*
_output_shapes
: p
q_dense_3/mul_5Mulq_dense_3/Cast_1:y:0q_dense_3/clip_by_value_1:z:0*
T0*
_output_shapes
: Z
q_dense_3/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Ax
q_dense_3/truediv_3RealDivq_dense_3/mul_5:z:0q_dense_3/truediv_3/y:output:0*
T0*
_output_shapes
: V
q_dense_3/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?p
q_dense_3/mul_6Mulq_dense_3/mul_6/x:output:0q_dense_3/truediv_3:z:0*
T0*
_output_shapes
: z
q_dense_3/ReadVariableOp_4ReadVariableOp#q_dense_3_readvariableop_3_resource*
_output_shapes
: *
dtype0_
q_dense_3/Neg_3Neg"q_dense_3/ReadVariableOp_4:value:0*
T0*
_output_shapes
: g
q_dense_3/add_6AddV2q_dense_3/Neg_3:y:0q_dense_3/mul_6:z:0*
T0*
_output_shapes
: V
q_dense_3/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?l
q_dense_3/mul_7Mulq_dense_3/mul_7/x:output:0q_dense_3/add_6:z:0*
T0*
_output_shapes
: b
q_dense_3/StopGradient_3StopGradientq_dense_3/mul_7:z:0*
T0*
_output_shapes
: z
q_dense_3/ReadVariableOp_5ReadVariableOp#q_dense_3_readvariableop_3_resource*
_output_shapes
: *
dtype0
q_dense_3/add_7AddV2"q_dense_3/ReadVariableOp_5:value:0!q_dense_3/StopGradient_3:output:0*
T0*
_output_shapes
: 
q_dense_3/BiasAddBiasAddq_dense_3/MatMul:product:0q_dense_3/add_7:z:0*
T0*'
_output_shapes
:џџџџџџџџџ V
q_activation_3/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :V
q_activation_3/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :x
q_activation_3/PowPowq_activation_3/Pow/x:output:0q_activation_3/Pow/y:output:0*
T0*
_output_shapes
: c
q_activation_3/CastCastq_activation_3/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: X
q_activation_3/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :X
q_activation_3/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : ~
q_activation_3/Pow_1Powq_activation_3/Pow_1/x:output:0q_activation_3/Pow_1/y:output:0*
T0*
_output_shapes
: g
q_activation_3/Cast_1Castq_activation_3/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: Y
q_activation_3/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *   @Y
q_activation_3/Cast_2/xConst*
_output_shapes
: *
dtype0*
value	B : o
q_activation_3/Cast_2Cast q_activation_3/Cast_2/x:output:0*

DstT0*

SrcT0*
_output_shapes
: Y
q_activation_3/sub/yConst*
_output_shapes
: *
dtype0*
valueB
 *   At
q_activation_3/subSubq_activation_3/Cast_2:y:0q_activation_3/sub/y:output:0*
T0*
_output_shapes
: s
q_activation_3/Pow_2Powq_activation_3/Const:output:0q_activation_3/sub:z:0*
T0*
_output_shapes
: q
q_activation_3/sub_1Subq_activation_3/Cast_1:y:0q_activation_3/Pow_2:z:0*
T0*
_output_shapes
: 
q_activation_3/LessEqual	LessEqualq_dense_3/BiasAdd:output:0q_activation_3/sub_1:z:0*
T0*'
_output_shapes
:џџџџџџџџџ i
q_activation_3/ReluReluq_dense_3/BiasAdd:output:0*
T0*'
_output_shapes
:џџџџџџџџџ h
q_activation_3/ones_like/ShapeShapeq_dense_3/BiasAdd:output:0*
T0*
_output_shapes
:c
q_activation_3/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  ?Є
q_activation_3/ones_likeFill'q_activation_3/ones_like/Shape:output:0'q_activation_3/ones_like/Const:output:0*
T0*'
_output_shapes
:џџџџџџџџџ q
q_activation_3/sub_2Subq_activation_3/Cast_1:y:0q_activation_3/Pow_2:z:0*
T0*
_output_shapes
: 
q_activation_3/mulMul!q_activation_3/ones_like:output:0q_activation_3/sub_2:z:0*
T0*'
_output_shapes
:џџџџџџџџџ Ў
q_activation_3/SelectV2SelectV2q_activation_3/LessEqual:z:0!q_activation_3/Relu:activations:0q_activation_3/mul:z:0*
T0*'
_output_shapes
:џџџџџџџџџ 
q_activation_3/mul_1Mulq_dense_3/BiasAdd:output:0q_activation_3/Cast:y:0*
T0*'
_output_shapes
:џџџџџџџџџ 
q_activation_3/truedivRealDivq_activation_3/mul_1:z:0q_activation_3/Cast_1:y:0*
T0*'
_output_shapes
:џџџџџџџџџ g
q_activation_3/NegNegq_activation_3/truediv:z:0*
T0*'
_output_shapes
:џџџџџџџџџ k
q_activation_3/RoundRoundq_activation_3/truediv:z:0*
T0*'
_output_shapes
:џџџџџџџџџ 
q_activation_3/addAddV2q_activation_3/Neg:y:0q_activation_3/Round:y:0*
T0*'
_output_shapes
:џџџџџџџџџ u
q_activation_3/StopGradientStopGradientq_activation_3/add:z:0*
T0*'
_output_shapes
:џџџџџџџџџ 
q_activation_3/add_1AddV2q_activation_3/truediv:z:0$q_activation_3/StopGradient:output:0*
T0*'
_output_shapes
:џџџџџџџџџ 
q_activation_3/truediv_1RealDivq_activation_3/add_1:z:0q_activation_3/Cast:y:0*
T0*'
_output_shapes
:џџџџџџџџџ _
q_activation_3/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
q_activation_3/truediv_2RealDiv#q_activation_3/truediv_2/x:output:0q_activation_3/Cast:y:0*
T0*
_output_shapes
: [
q_activation_3/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?{
q_activation_3/sub_3Subq_activation_3/sub_3/x:output:0q_activation_3/truediv_2:z:0*
T0*
_output_shapes
: 
$q_activation_3/clip_by_value/MinimumMinimumq_activation_3/truediv_1:z:0q_activation_3/sub_3:z:0*
T0*'
_output_shapes
:џџџџџџџџџ c
q_activation_3/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    Ќ
q_activation_3/clip_by_valueMaximum(q_activation_3/clip_by_value/Minimum:z:0'q_activation_3/clip_by_value/y:output:0*
T0*'
_output_shapes
:џџџџџџџџџ 
q_activation_3/mul_2Mulq_activation_3/Cast_1:y:0 q_activation_3/clip_by_value:z:0*
T0*'
_output_shapes
:џџџџџџџџџ o
q_activation_3/Neg_1Neg q_activation_3/SelectV2:output:0*
T0*'
_output_shapes
:џџџџџџџџџ 
q_activation_3/add_2AddV2q_activation_3/Neg_1:y:0q_activation_3/mul_2:z:0*
T0*'
_output_shapes
:џџџџџџџџџ [
q_activation_3/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
q_activation_3/mul_3Mulq_activation_3/mul_3/x:output:0q_activation_3/add_2:z:0*
T0*'
_output_shapes
:џџџџџџџџџ y
q_activation_3/StopGradient_1StopGradientq_activation_3/mul_3:z:0*
T0*'
_output_shapes
:џџџџџџџџџ 
q_activation_3/add_3AddV2 q_activation_3/SelectV2:output:0&q_activation_3/StopGradient_1:output:0*
T0*'
_output_shapes
:џџџџџџџџџ Q
q_dense_4/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :Q
q_dense_4/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : i
q_dense_4/PowPowq_dense_4/Pow/x:output:0q_dense_4/Pow/y:output:0*
T0*
_output_shapes
: Y
q_dense_4/CastCastq_dense_4/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: z
q_dense_4/ReadVariableOpReadVariableOp!q_dense_4_readvariableop_resource*
_output_shapes

: *
dtype0T
q_dense_4/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Ay
q_dense_4/mulMul q_dense_4/ReadVariableOp:value:0q_dense_4/mul/y:output:0*
T0*
_output_shapes

: l
q_dense_4/truedivRealDivq_dense_4/mul:z:0q_dense_4/Cast:y:0*
T0*
_output_shapes

: T
q_dense_4/NegNegq_dense_4/truediv:z:0*
T0*
_output_shapes

: X
q_dense_4/RoundRoundq_dense_4/truediv:z:0*
T0*
_output_shapes

: g
q_dense_4/addAddV2q_dense_4/Neg:y:0q_dense_4/Round:y:0*
T0*
_output_shapes

: b
q_dense_4/StopGradientStopGradientq_dense_4/add:z:0*
T0*
_output_shapes

: y
q_dense_4/add_1AddV2q_dense_4/truediv:z:0q_dense_4/StopGradient:output:0*
T0*
_output_shapes

: f
!q_dense_4/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pA
q_dense_4/clip_by_value/MinimumMinimumq_dense_4/add_1:z:0*q_dense_4/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: ^
q_dense_4/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  С
q_dense_4/clip_by_valueMaximum#q_dense_4/clip_by_value/Minimum:z:0"q_dense_4/clip_by_value/y:output:0*
T0*
_output_shapes

: p
q_dense_4/mul_1Mulq_dense_4/Cast:y:0q_dense_4/clip_by_value:z:0*
T0*
_output_shapes

: Z
q_dense_4/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A|
q_dense_4/truediv_1RealDivq_dense_4/mul_1:z:0q_dense_4/truediv_1/y:output:0*
T0*
_output_shapes

: V
q_dense_4/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?t
q_dense_4/mul_2Mulq_dense_4/mul_2/x:output:0q_dense_4/truediv_1:z:0*
T0*
_output_shapes

: |
q_dense_4/ReadVariableOp_1ReadVariableOp!q_dense_4_readvariableop_resource*
_output_shapes

: *
dtype0c
q_dense_4/Neg_1Neg"q_dense_4/ReadVariableOp_1:value:0*
T0*
_output_shapes

: k
q_dense_4/add_2AddV2q_dense_4/Neg_1:y:0q_dense_4/mul_2:z:0*
T0*
_output_shapes

: V
q_dense_4/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?p
q_dense_4/mul_3Mulq_dense_4/mul_3/x:output:0q_dense_4/add_2:z:0*
T0*
_output_shapes

: f
q_dense_4/StopGradient_1StopGradientq_dense_4/mul_3:z:0*
T0*
_output_shapes

: |
q_dense_4/ReadVariableOp_2ReadVariableOp!q_dense_4_readvariableop_resource*
_output_shapes

: *
dtype0
q_dense_4/add_3AddV2"q_dense_4/ReadVariableOp_2:value:0!q_dense_4/StopGradient_1:output:0*
T0*
_output_shapes

: {
q_dense_4/MatMulMatMulq_activation_3/add_3:z:0q_dense_4/add_3:z:0*
T0*'
_output_shapes
:џџџџџџџџџS
q_dense_4/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :S
q_dense_4/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : o
q_dense_4/Pow_1Powq_dense_4/Pow_1/x:output:0q_dense_4/Pow_1/y:output:0*
T0*
_output_shapes
: ]
q_dense_4/Cast_1Castq_dense_4/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: z
q_dense_4/ReadVariableOp_3ReadVariableOp#q_dense_4_readvariableop_3_resource*
_output_shapes
:*
dtype0V
q_dense_4/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A{
q_dense_4/mul_4Mul"q_dense_4/ReadVariableOp_3:value:0q_dense_4/mul_4/y:output:0*
T0*
_output_shapes
:n
q_dense_4/truediv_2RealDivq_dense_4/mul_4:z:0q_dense_4/Cast_1:y:0*
T0*
_output_shapes
:T
q_dense_4/Neg_2Negq_dense_4/truediv_2:z:0*
T0*
_output_shapes
:X
q_dense_4/Round_1Roundq_dense_4/truediv_2:z:0*
T0*
_output_shapes
:i
q_dense_4/add_4AddV2q_dense_4/Neg_2:y:0q_dense_4/Round_1:y:0*
T0*
_output_shapes
:b
q_dense_4/StopGradient_2StopGradientq_dense_4/add_4:z:0*
T0*
_output_shapes
:y
q_dense_4/add_5AddV2q_dense_4/truediv_2:z:0!q_dense_4/StopGradient_2:output:0*
T0*
_output_shapes
:h
#q_dense_4/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pA
!q_dense_4/clip_by_value_1/MinimumMinimumq_dense_4/add_5:z:0,q_dense_4/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
:`
q_dense_4/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  С
q_dense_4/clip_by_value_1Maximum%q_dense_4/clip_by_value_1/Minimum:z:0$q_dense_4/clip_by_value_1/y:output:0*
T0*
_output_shapes
:p
q_dense_4/mul_5Mulq_dense_4/Cast_1:y:0q_dense_4/clip_by_value_1:z:0*
T0*
_output_shapes
:Z
q_dense_4/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Ax
q_dense_4/truediv_3RealDivq_dense_4/mul_5:z:0q_dense_4/truediv_3/y:output:0*
T0*
_output_shapes
:V
q_dense_4/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?p
q_dense_4/mul_6Mulq_dense_4/mul_6/x:output:0q_dense_4/truediv_3:z:0*
T0*
_output_shapes
:z
q_dense_4/ReadVariableOp_4ReadVariableOp#q_dense_4_readvariableop_3_resource*
_output_shapes
:*
dtype0_
q_dense_4/Neg_3Neg"q_dense_4/ReadVariableOp_4:value:0*
T0*
_output_shapes
:g
q_dense_4/add_6AddV2q_dense_4/Neg_3:y:0q_dense_4/mul_6:z:0*
T0*
_output_shapes
:V
q_dense_4/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?l
q_dense_4/mul_7Mulq_dense_4/mul_7/x:output:0q_dense_4/add_6:z:0*
T0*
_output_shapes
:b
q_dense_4/StopGradient_3StopGradientq_dense_4/mul_7:z:0*
T0*
_output_shapes
:z
q_dense_4/ReadVariableOp_5ReadVariableOp#q_dense_4_readvariableop_3_resource*
_output_shapes
:*
dtype0
q_dense_4/add_7AddV2"q_dense_4/ReadVariableOp_5:value:0!q_dense_4/StopGradient_3:output:0*
T0*
_output_shapes
:
q_dense_4/BiasAddBiasAddq_dense_4/MatMul:product:0q_dense_4/add_7:z:0*
T0*'
_output_shapes
:џџџџџџџџџi
IdentityIdentityq_dense_4/BiasAdd:output:0^NoOp*
T0*'
_output_shapes
:џџџџџџџџџ
NoOpNoOp^q_dense_3/ReadVariableOp^q_dense_3/ReadVariableOp_1^q_dense_3/ReadVariableOp_2^q_dense_3/ReadVariableOp_3^q_dense_3/ReadVariableOp_4^q_dense_3/ReadVariableOp_5^q_dense_4/ReadVariableOp^q_dense_4/ReadVariableOp_1^q_dense_4/ReadVariableOp_2^q_dense_4/ReadVariableOp_3^q_dense_4/ReadVariableOp_4^q_dense_4/ReadVariableOp_5*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:џџџџџџџџџ : : : : 24
q_dense_3/ReadVariableOpq_dense_3/ReadVariableOp28
q_dense_3/ReadVariableOp_1q_dense_3/ReadVariableOp_128
q_dense_3/ReadVariableOp_2q_dense_3/ReadVariableOp_228
q_dense_3/ReadVariableOp_3q_dense_3/ReadVariableOp_328
q_dense_3/ReadVariableOp_4q_dense_3/ReadVariableOp_428
q_dense_3/ReadVariableOp_5q_dense_3/ReadVariableOp_524
q_dense_4/ReadVariableOpq_dense_4/ReadVariableOp28
q_dense_4/ReadVariableOp_1q_dense_4/ReadVariableOp_128
q_dense_4/ReadVariableOp_2q_dense_4/ReadVariableOp_228
q_dense_4/ReadVariableOp_3q_dense_4/ReadVariableOp_328
q_dense_4/ReadVariableOp_4q_dense_4/ReadVariableOp_428
q_dense_4/ReadVariableOp_5q_dense_4/ReadVariableOp_5:O K
'
_output_shapes
:џџџџџџџџџ 
 
_user_specified_nameinputs
й

*__inference_q_dense_2_layer_call_fn_461600

inputs
unknown:  
	unknown_0: 
identityЂStatefulPartitionedCallу
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8 *N
fIRG
E__inference_q_dense_2_layer_call_and_return_conditional_losses_458094s
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:џџџџџџџџџ `
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:џџџџџџџџџ : : 22
StatefulPartitionedCallStatefulPartitionedCall:S O
+
_output_shapes
:џџџџџџџџџ 
 
_user_specified_nameinputs
њ	
ъ
$__inference_signature_wrapper_458903
input_1
unknown: 
	unknown_0: 
	unknown_1:  
	unknown_2: 
	unknown_3:  
	unknown_4: 
	unknown_5:  
	unknown_6: 
	unknown_7: 
	unknown_8:
identityЂStatefulPartitionedCallЄ
StatefulPartitionedCallStatefulPartitionedCallinput_1unknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4	unknown_5	unknown_6	unknown_7	unknown_8*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:џџџџџџџџџ*,
_read_only_resource_inputs

	
*2
config_proto" 

CPU

GPU2 *0J 8 **
f%R#
!__inference__wrapped_model_457718o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:џџџџџџџџџ`
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:џџџџџџџџџ: : : : : : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:T P
+
_output_shapes
:џџџџџџџџџ
!
_user_specified_name	input_1


F__inference_sequential_layer_call_and_return_conditional_losses_458332
q_dense_input 
q_dense_458313: 
q_dense_458315: "
q_dense_1_458319:  
q_dense_1_458321: "
q_dense_2_458325:  
q_dense_2_458327: 
identityЂq_dense/StatefulPartitionedCallЂ!q_dense_1/StatefulPartitionedCallЂ!q_dense_2/StatefulPartitionedCallќ
q_dense/StatefulPartitionedCallStatefulPartitionedCallq_dense_inputq_dense_458313q_dense_458315*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8 *L
fGRE
C__inference_q_dense_layer_call_and_return_conditional_losses_457810ы
q_activation/PartitionedCallPartitionedCall(q_dense/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8 *Q
fLRJ
H__inference_q_activation_layer_call_and_return_conditional_losses_457865
!q_dense_1/StatefulPartitionedCallStatefulPartitionedCall%q_activation/PartitionedCall:output:0q_dense_1_458319q_dense_1_458321*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8 *N
fIRG
E__inference_q_dense_1_layer_call_and_return_conditional_losses_457952ё
q_activation_1/PartitionedCallPartitionedCall*q_dense_1/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8 *S
fNRL
J__inference_q_activation_1_layer_call_and_return_conditional_losses_458007
!q_dense_2/StatefulPartitionedCallStatefulPartitionedCall'q_activation_1/PartitionedCall:output:0q_dense_2_458325q_dense_2_458327*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8 *N
fIRG
E__inference_q_dense_2_layer_call_and_return_conditional_losses_458094ё
q_activation_2/PartitionedCallPartitionedCall*q_dense_2/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8 *S
fNRL
J__inference_q_activation_2_layer_call_and_return_conditional_losses_458149z
IdentityIdentity'q_activation_2/PartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:џџџџџџџџџ А
NoOpNoOp ^q_dense/StatefulPartitionedCall"^q_dense_1/StatefulPartitionedCall"^q_dense_2/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*6
_input_shapes%
#:џџџџџџџџџ: : : : : : 2B
q_dense/StatefulPartitionedCallq_dense/StatefulPartitionedCall2F
!q_dense_1/StatefulPartitionedCall!q_dense_1/StatefulPartitionedCall2F
!q_dense_2/StatefulPartitionedCall!q_dense_2/StatefulPartitionedCall:Z V
+
_output_shapes
:џџџџџџџџџ
'
_user_specified_nameq_dense_input
И
O
#__inference__update_step_xla_460092
gradient
variable:  *
_XlaMustCompile(*(
_construction_contextkEagerRuntime*
_input_shapes
:  : *
	_noinline(:H D

_output_shapes

:  
"
_user_specified_name
gradient:($
"
_user_specified_name
variable
р
э
"__inference__traced_restore_462196
file_prefix1
assignvariableop_q_dense_kernel: -
assignvariableop_1_q_dense_bias: 5
#assignvariableop_2_q_dense_1_kernel:  /
!assignvariableop_3_q_dense_1_bias: 5
#assignvariableop_4_q_dense_2_kernel:  /
!assignvariableop_5_q_dense_2_bias: 5
#assignvariableop_6_q_dense_3_kernel:  /
!assignvariableop_7_q_dense_3_bias: 5
#assignvariableop_8_q_dense_4_kernel: /
!assignvariableop_9_q_dense_4_bias:'
assignvariableop_10_iteration:	 +
!assignvariableop_11_learning_rate: ;
)assignvariableop_12_adam_m_q_dense_kernel: ;
)assignvariableop_13_adam_v_q_dense_kernel: 5
'assignvariableop_14_adam_m_q_dense_bias: 5
'assignvariableop_15_adam_v_q_dense_bias: =
+assignvariableop_16_adam_m_q_dense_1_kernel:  =
+assignvariableop_17_adam_v_q_dense_1_kernel:  7
)assignvariableop_18_adam_m_q_dense_1_bias: 7
)assignvariableop_19_adam_v_q_dense_1_bias: =
+assignvariableop_20_adam_m_q_dense_2_kernel:  =
+assignvariableop_21_adam_v_q_dense_2_kernel:  7
)assignvariableop_22_adam_m_q_dense_2_bias: 7
)assignvariableop_23_adam_v_q_dense_2_bias: =
+assignvariableop_24_adam_m_q_dense_3_kernel:  =
+assignvariableop_25_adam_v_q_dense_3_kernel:  7
)assignvariableop_26_adam_m_q_dense_3_bias: 7
)assignvariableop_27_adam_v_q_dense_3_bias: =
+assignvariableop_28_adam_m_q_dense_4_kernel: =
+assignvariableop_29_adam_v_q_dense_4_kernel: 7
)assignvariableop_30_adam_m_q_dense_4_bias:7
)assignvariableop_31_adam_v_q_dense_4_bias:%
assignvariableop_32_total_1: %
assignvariableop_33_count_1: #
assignvariableop_34_total: #
assignvariableop_35_count: 
identity_37ЂAssignVariableOpЂAssignVariableOp_1ЂAssignVariableOp_10ЂAssignVariableOp_11ЂAssignVariableOp_12ЂAssignVariableOp_13ЂAssignVariableOp_14ЂAssignVariableOp_15ЂAssignVariableOp_16ЂAssignVariableOp_17ЂAssignVariableOp_18ЂAssignVariableOp_19ЂAssignVariableOp_2ЂAssignVariableOp_20ЂAssignVariableOp_21ЂAssignVariableOp_22ЂAssignVariableOp_23ЂAssignVariableOp_24ЂAssignVariableOp_25ЂAssignVariableOp_26ЂAssignVariableOp_27ЂAssignVariableOp_28ЂAssignVariableOp_29ЂAssignVariableOp_3ЂAssignVariableOp_30ЂAssignVariableOp_31ЂAssignVariableOp_32ЂAssignVariableOp_33ЂAssignVariableOp_34ЂAssignVariableOp_35ЂAssignVariableOp_4ЂAssignVariableOp_5ЂAssignVariableOp_6ЂAssignVariableOp_7ЂAssignVariableOp_8ЂAssignVariableOp_9у
RestoreV2/tensor_namesConst"/device:CPU:0*
_output_shapes
:%*
dtype0*
valueџBќ%B&variables/0/.ATTRIBUTES/VARIABLE_VALUEB&variables/1/.ATTRIBUTES/VARIABLE_VALUEB&variables/2/.ATTRIBUTES/VARIABLE_VALUEB&variables/3/.ATTRIBUTES/VARIABLE_VALUEB&variables/4/.ATTRIBUTES/VARIABLE_VALUEB&variables/5/.ATTRIBUTES/VARIABLE_VALUEB&variables/6/.ATTRIBUTES/VARIABLE_VALUEB&variables/7/.ATTRIBUTES/VARIABLE_VALUEB&variables/8/.ATTRIBUTES/VARIABLE_VALUEB&variables/9/.ATTRIBUTES/VARIABLE_VALUEB0optimizer/_iterations/.ATTRIBUTES/VARIABLE_VALUEB3optimizer/_learning_rate/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/1/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/2/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/3/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/4/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/5/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/6/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/7/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/8/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/9/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/10/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/11/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/12/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/13/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/14/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/15/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/16/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/17/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/18/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/19/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/20/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/0/total/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/0/count/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/1/total/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/1/count/.ATTRIBUTES/VARIABLE_VALUEB_CHECKPOINTABLE_OBJECT_GRAPHК
RestoreV2/shape_and_slicesConst"/device:CPU:0*
_output_shapes
:%*
dtype0*]
valueTBR%B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B к
	RestoreV2	RestoreV2file_prefixRestoreV2/tensor_names:output:0#RestoreV2/shape_and_slices:output:0"/device:CPU:0*Њ
_output_shapes
:::::::::::::::::::::::::::::::::::::*3
dtypes)
'2%	[
IdentityIdentityRestoreV2:tensors:0"/device:CPU:0*
T0*
_output_shapes
:В
AssignVariableOpAssignVariableOpassignvariableop_q_dense_kernelIdentity:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_1IdentityRestoreV2:tensors:1"/device:CPU:0*
T0*
_output_shapes
:Ж
AssignVariableOp_1AssignVariableOpassignvariableop_1_q_dense_biasIdentity_1:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_2IdentityRestoreV2:tensors:2"/device:CPU:0*
T0*
_output_shapes
:К
AssignVariableOp_2AssignVariableOp#assignvariableop_2_q_dense_1_kernelIdentity_2:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_3IdentityRestoreV2:tensors:3"/device:CPU:0*
T0*
_output_shapes
:И
AssignVariableOp_3AssignVariableOp!assignvariableop_3_q_dense_1_biasIdentity_3:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_4IdentityRestoreV2:tensors:4"/device:CPU:0*
T0*
_output_shapes
:К
AssignVariableOp_4AssignVariableOp#assignvariableop_4_q_dense_2_kernelIdentity_4:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_5IdentityRestoreV2:tensors:5"/device:CPU:0*
T0*
_output_shapes
:И
AssignVariableOp_5AssignVariableOp!assignvariableop_5_q_dense_2_biasIdentity_5:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_6IdentityRestoreV2:tensors:6"/device:CPU:0*
T0*
_output_shapes
:К
AssignVariableOp_6AssignVariableOp#assignvariableop_6_q_dense_3_kernelIdentity_6:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_7IdentityRestoreV2:tensors:7"/device:CPU:0*
T0*
_output_shapes
:И
AssignVariableOp_7AssignVariableOp!assignvariableop_7_q_dense_3_biasIdentity_7:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_8IdentityRestoreV2:tensors:8"/device:CPU:0*
T0*
_output_shapes
:К
AssignVariableOp_8AssignVariableOp#assignvariableop_8_q_dense_4_kernelIdentity_8:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_9IdentityRestoreV2:tensors:9"/device:CPU:0*
T0*
_output_shapes
:И
AssignVariableOp_9AssignVariableOp!assignvariableop_9_q_dense_4_biasIdentity_9:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_10IdentityRestoreV2:tensors:10"/device:CPU:0*
T0	*
_output_shapes
:Ж
AssignVariableOp_10AssignVariableOpassignvariableop_10_iterationIdentity_10:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0	_
Identity_11IdentityRestoreV2:tensors:11"/device:CPU:0*
T0*
_output_shapes
:К
AssignVariableOp_11AssignVariableOp!assignvariableop_11_learning_rateIdentity_11:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_12IdentityRestoreV2:tensors:12"/device:CPU:0*
T0*
_output_shapes
:Т
AssignVariableOp_12AssignVariableOp)assignvariableop_12_adam_m_q_dense_kernelIdentity_12:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_13IdentityRestoreV2:tensors:13"/device:CPU:0*
T0*
_output_shapes
:Т
AssignVariableOp_13AssignVariableOp)assignvariableop_13_adam_v_q_dense_kernelIdentity_13:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_14IdentityRestoreV2:tensors:14"/device:CPU:0*
T0*
_output_shapes
:Р
AssignVariableOp_14AssignVariableOp'assignvariableop_14_adam_m_q_dense_biasIdentity_14:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_15IdentityRestoreV2:tensors:15"/device:CPU:0*
T0*
_output_shapes
:Р
AssignVariableOp_15AssignVariableOp'assignvariableop_15_adam_v_q_dense_biasIdentity_15:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_16IdentityRestoreV2:tensors:16"/device:CPU:0*
T0*
_output_shapes
:Ф
AssignVariableOp_16AssignVariableOp+assignvariableop_16_adam_m_q_dense_1_kernelIdentity_16:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_17IdentityRestoreV2:tensors:17"/device:CPU:0*
T0*
_output_shapes
:Ф
AssignVariableOp_17AssignVariableOp+assignvariableop_17_adam_v_q_dense_1_kernelIdentity_17:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_18IdentityRestoreV2:tensors:18"/device:CPU:0*
T0*
_output_shapes
:Т
AssignVariableOp_18AssignVariableOp)assignvariableop_18_adam_m_q_dense_1_biasIdentity_18:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_19IdentityRestoreV2:tensors:19"/device:CPU:0*
T0*
_output_shapes
:Т
AssignVariableOp_19AssignVariableOp)assignvariableop_19_adam_v_q_dense_1_biasIdentity_19:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_20IdentityRestoreV2:tensors:20"/device:CPU:0*
T0*
_output_shapes
:Ф
AssignVariableOp_20AssignVariableOp+assignvariableop_20_adam_m_q_dense_2_kernelIdentity_20:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_21IdentityRestoreV2:tensors:21"/device:CPU:0*
T0*
_output_shapes
:Ф
AssignVariableOp_21AssignVariableOp+assignvariableop_21_adam_v_q_dense_2_kernelIdentity_21:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_22IdentityRestoreV2:tensors:22"/device:CPU:0*
T0*
_output_shapes
:Т
AssignVariableOp_22AssignVariableOp)assignvariableop_22_adam_m_q_dense_2_biasIdentity_22:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_23IdentityRestoreV2:tensors:23"/device:CPU:0*
T0*
_output_shapes
:Т
AssignVariableOp_23AssignVariableOp)assignvariableop_23_adam_v_q_dense_2_biasIdentity_23:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_24IdentityRestoreV2:tensors:24"/device:CPU:0*
T0*
_output_shapes
:Ф
AssignVariableOp_24AssignVariableOp+assignvariableop_24_adam_m_q_dense_3_kernelIdentity_24:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_25IdentityRestoreV2:tensors:25"/device:CPU:0*
T0*
_output_shapes
:Ф
AssignVariableOp_25AssignVariableOp+assignvariableop_25_adam_v_q_dense_3_kernelIdentity_25:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_26IdentityRestoreV2:tensors:26"/device:CPU:0*
T0*
_output_shapes
:Т
AssignVariableOp_26AssignVariableOp)assignvariableop_26_adam_m_q_dense_3_biasIdentity_26:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_27IdentityRestoreV2:tensors:27"/device:CPU:0*
T0*
_output_shapes
:Т
AssignVariableOp_27AssignVariableOp)assignvariableop_27_adam_v_q_dense_3_biasIdentity_27:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_28IdentityRestoreV2:tensors:28"/device:CPU:0*
T0*
_output_shapes
:Ф
AssignVariableOp_28AssignVariableOp+assignvariableop_28_adam_m_q_dense_4_kernelIdentity_28:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_29IdentityRestoreV2:tensors:29"/device:CPU:0*
T0*
_output_shapes
:Ф
AssignVariableOp_29AssignVariableOp+assignvariableop_29_adam_v_q_dense_4_kernelIdentity_29:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_30IdentityRestoreV2:tensors:30"/device:CPU:0*
T0*
_output_shapes
:Т
AssignVariableOp_30AssignVariableOp)assignvariableop_30_adam_m_q_dense_4_biasIdentity_30:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_31IdentityRestoreV2:tensors:31"/device:CPU:0*
T0*
_output_shapes
:Т
AssignVariableOp_31AssignVariableOp)assignvariableop_31_adam_v_q_dense_4_biasIdentity_31:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_32IdentityRestoreV2:tensors:32"/device:CPU:0*
T0*
_output_shapes
:Д
AssignVariableOp_32AssignVariableOpassignvariableop_32_total_1Identity_32:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_33IdentityRestoreV2:tensors:33"/device:CPU:0*
T0*
_output_shapes
:Д
AssignVariableOp_33AssignVariableOpassignvariableop_33_count_1Identity_33:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_34IdentityRestoreV2:tensors:34"/device:CPU:0*
T0*
_output_shapes
:В
AssignVariableOp_34AssignVariableOpassignvariableop_34_totalIdentity_34:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_35IdentityRestoreV2:tensors:35"/device:CPU:0*
T0*
_output_shapes
:В
AssignVariableOp_35AssignVariableOpassignvariableop_35_countIdentity_35:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0Y
NoOpNoOp"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 ч
Identity_36Identityfile_prefix^AssignVariableOp^AssignVariableOp_1^AssignVariableOp_10^AssignVariableOp_11^AssignVariableOp_12^AssignVariableOp_13^AssignVariableOp_14^AssignVariableOp_15^AssignVariableOp_16^AssignVariableOp_17^AssignVariableOp_18^AssignVariableOp_19^AssignVariableOp_2^AssignVariableOp_20^AssignVariableOp_21^AssignVariableOp_22^AssignVariableOp_23^AssignVariableOp_24^AssignVariableOp_25^AssignVariableOp_26^AssignVariableOp_27^AssignVariableOp_28^AssignVariableOp_29^AssignVariableOp_3^AssignVariableOp_30^AssignVariableOp_31^AssignVariableOp_32^AssignVariableOp_33^AssignVariableOp_34^AssignVariableOp_35^AssignVariableOp_4^AssignVariableOp_5^AssignVariableOp_6^AssignVariableOp_7^AssignVariableOp_8^AssignVariableOp_9^NoOp"/device:CPU:0*
T0*
_output_shapes
: W
Identity_37IdentityIdentity_36:output:0^NoOp_1*
T0*
_output_shapes
: д
NoOp_1NoOp^AssignVariableOp^AssignVariableOp_1^AssignVariableOp_10^AssignVariableOp_11^AssignVariableOp_12^AssignVariableOp_13^AssignVariableOp_14^AssignVariableOp_15^AssignVariableOp_16^AssignVariableOp_17^AssignVariableOp_18^AssignVariableOp_19^AssignVariableOp_2^AssignVariableOp_20^AssignVariableOp_21^AssignVariableOp_22^AssignVariableOp_23^AssignVariableOp_24^AssignVariableOp_25^AssignVariableOp_26^AssignVariableOp_27^AssignVariableOp_28^AssignVariableOp_29^AssignVariableOp_3^AssignVariableOp_30^AssignVariableOp_31^AssignVariableOp_32^AssignVariableOp_33^AssignVariableOp_34^AssignVariableOp_35^AssignVariableOp_4^AssignVariableOp_5^AssignVariableOp_6^AssignVariableOp_7^AssignVariableOp_8^AssignVariableOp_9*"
_acd_function_control_output(*
_output_shapes
 "#
identity_37Identity_37:output:0*]
_input_shapesL
J: : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : 2$
AssignVariableOpAssignVariableOp2(
AssignVariableOp_1AssignVariableOp_12*
AssignVariableOp_10AssignVariableOp_102*
AssignVariableOp_11AssignVariableOp_112*
AssignVariableOp_12AssignVariableOp_122*
AssignVariableOp_13AssignVariableOp_132*
AssignVariableOp_14AssignVariableOp_142*
AssignVariableOp_15AssignVariableOp_152*
AssignVariableOp_16AssignVariableOp_162*
AssignVariableOp_17AssignVariableOp_172*
AssignVariableOp_18AssignVariableOp_182*
AssignVariableOp_19AssignVariableOp_192(
AssignVariableOp_2AssignVariableOp_22*
AssignVariableOp_20AssignVariableOp_202*
AssignVariableOp_21AssignVariableOp_212*
AssignVariableOp_22AssignVariableOp_222*
AssignVariableOp_23AssignVariableOp_232*
AssignVariableOp_24AssignVariableOp_242*
AssignVariableOp_25AssignVariableOp_252*
AssignVariableOp_26AssignVariableOp_262*
AssignVariableOp_27AssignVariableOp_272*
AssignVariableOp_28AssignVariableOp_282*
AssignVariableOp_29AssignVariableOp_292(
AssignVariableOp_3AssignVariableOp_32*
AssignVariableOp_30AssignVariableOp_302*
AssignVariableOp_31AssignVariableOp_312*
AssignVariableOp_32AssignVariableOp_322*
AssignVariableOp_33AssignVariableOp_332*
AssignVariableOp_34AssignVariableOp_342*
AssignVariableOp_35AssignVariableOp_352(
AssignVariableOp_4AssignVariableOp_42(
AssignVariableOp_5AssignVariableOp_52(
AssignVariableOp_6AssignVariableOp_62(
AssignVariableOp_7AssignVariableOp_72(
AssignVariableOp_8AssignVariableOp_82(
AssignVariableOp_9AssignVariableOp_9:C ?

_output_shapes
: 
%
_user_specified_namefile_prefix
Щ

*__inference_q_dense_3_layer_call_fn_461748

inputs
unknown:  
	unknown_0: 
identityЂStatefulPartitionedCallп
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:џџџџџџџџџ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8 *N
fIRG
E__inference_q_dense_3_layer_call_and_return_conditional_losses_458407o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:џџџџџџџџџ `
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:џџџџџџџџџ : : 22
StatefulPartitionedCallStatefulPartitionedCall:O K
'
_output_shapes
:џџџџџџџџџ 
 
_user_specified_nameinputs
Ќ
K
#__inference__update_step_xla_460087
gradient
variable: *
_XlaMustCompile(*(
_construction_contextkEagerRuntime*
_input_shapes

: : *
	_noinline(:D @

_output_shapes
: 
"
_user_specified_name
gradient:($
"
_user_specified_name
variable
ћ1
Ј
E__inference_q_dense_3_layer_call_and_return_conditional_losses_461816

inputs)
readvariableop_resource:  '
readvariableop_3_resource: 
identityЂReadVariableOpЂReadVariableOp_1ЂReadVariableOp_2ЂReadVariableOp_3ЂReadVariableOp_4ЂReadVariableOp_5G
Pow/xConst*
_output_shapes
: *
dtype0*
value	B :G
Pow/yConst*
_output_shapes
: *
dtype0*
value	B : K
PowPowPow/x:output:0Pow/y:output:0*
T0*
_output_shapes
: E
CastCastPow:z:0*

DstT0*

SrcT0*
_output_shapes
: f
ReadVariableOpReadVariableOpreadvariableop_resource*
_output_shapes

:  *
dtype0J
mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A[
mulMulReadVariableOp:value:0mul/y:output:0*
T0*
_output_shapes

:  N
truedivRealDivmul:z:0Cast:y:0*
T0*
_output_shapes

:  @
NegNegtruediv:z:0*
T0*
_output_shapes

:  D
RoundRoundtruediv:z:0*
T0*
_output_shapes

:  I
addAddV2Neg:y:0	Round:y:0*
T0*
_output_shapes

:  N
StopGradientStopGradientadd:z:0*
T0*
_output_shapes

:  [
add_1AddV2truediv:z:0StopGradient:output:0*
T0*
_output_shapes

:  \
clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Сv
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*
_output_shapes

:  R
mul_1MulCast:y:0clip_by_value:z:0*
T0*
_output_shapes

:  P
truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A^
	truediv_1RealDiv	mul_1:z:0truediv_1/y:output:0*
T0*
_output_shapes

:  L
mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?V
mul_2Mulmul_2/x:output:0truediv_1:z:0*
T0*
_output_shapes

:  h
ReadVariableOp_1ReadVariableOpreadvariableop_resource*
_output_shapes

:  *
dtype0O
Neg_1NegReadVariableOp_1:value:0*
T0*
_output_shapes

:  M
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*
_output_shapes

:  L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?R
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*
_output_shapes

:  R
StopGradient_1StopGradient	mul_3:z:0*
T0*
_output_shapes

:  h
ReadVariableOp_2ReadVariableOpreadvariableop_resource*
_output_shapes

:  *
dtype0j
add_3AddV2ReadVariableOp_2:value:0StopGradient_1:output:0*
T0*
_output_shapes

:  U
MatMulMatMulinputs	add_3:z:0*
T0*'
_output_shapes
:џџџџџџџџџ I
Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :I
Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Q
Pow_1PowPow_1/x:output:0Pow_1/y:output:0*
T0*
_output_shapes
: I
Cast_1Cast	Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: f
ReadVariableOp_3ReadVariableOpreadvariableop_3_resource*
_output_shapes
: *
dtype0L
mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A]
mul_4MulReadVariableOp_3:value:0mul_4/y:output:0*
T0*
_output_shapes
: P
	truediv_2RealDiv	mul_4:z:0
Cast_1:y:0*
T0*
_output_shapes
: @
Neg_2Negtruediv_2:z:0*
T0*
_output_shapes
: D
Round_1Roundtruediv_2:z:0*
T0*
_output_shapes
: K
add_4AddV2	Neg_2:y:0Round_1:y:0*
T0*
_output_shapes
: N
StopGradient_2StopGradient	add_4:z:0*
T0*
_output_shapes
: [
add_5AddV2truediv_2:z:0StopGradient_2:output:0*
T0*
_output_shapes
: ^
clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Сx
clip_by_value_1Maximumclip_by_value_1/Minimum:z:0clip_by_value_1/y:output:0*
T0*
_output_shapes
: R
mul_5Mul
Cast_1:y:0clip_by_value_1:z:0*
T0*
_output_shapes
: P
truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  AZ
	truediv_3RealDiv	mul_5:z:0truediv_3/y:output:0*
T0*
_output_shapes
: L
mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?R
mul_6Mulmul_6/x:output:0truediv_3:z:0*
T0*
_output_shapes
: f
ReadVariableOp_4ReadVariableOpreadvariableop_3_resource*
_output_shapes
: *
dtype0K
Neg_3NegReadVariableOp_4:value:0*
T0*
_output_shapes
: I
add_6AddV2	Neg_3:y:0	mul_6:z:0*
T0*
_output_shapes
: L
mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?N
mul_7Mulmul_7/x:output:0	add_6:z:0*
T0*
_output_shapes
: N
StopGradient_3StopGradient	mul_7:z:0*
T0*
_output_shapes
: f
ReadVariableOp_5ReadVariableOpreadvariableop_3_resource*
_output_shapes
: *
dtype0f
add_7AddV2ReadVariableOp_5:value:0StopGradient_3:output:0*
T0*
_output_shapes
: a
BiasAddBiasAddMatMul:product:0	add_7:z:0*
T0*'
_output_shapes
:џџџџџџџџџ _
IdentityIdentityBiasAdd:output:0^NoOp*
T0*'
_output_shapes
:џџџџџџџџџ Ж
NoOpNoOp^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:џџџџџџџџџ : : 2 
ReadVariableOpReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_5:O K
'
_output_shapes
:џџџџџџџџџ 
 
_user_specified_nameinputs
н!
f
J__inference_q_activation_1_layer_call_and_return_conditional_losses_458007

inputs
identityG
Pow/xConst*
_output_shapes
: *
dtype0*
value	B :G
Pow/yConst*
_output_shapes
: *
dtype0*
value	B :K
PowPowPow/x:output:0Pow/y:output:0*
T0*
_output_shapes
: E
CastCastPow:z:0*

DstT0*

SrcT0*
_output_shapes
: I
Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :I
Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Q
Pow_1PowPow_1/x:output:0Pow_1/y:output:0*
T0*
_output_shapes
: I
Cast_1Cast	Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: J
ConstConst*
_output_shapes
: *
dtype0*
valueB
 *   @J
Cast_2/xConst*
_output_shapes
: *
dtype0*
value	B : Q
Cast_2CastCast_2/x:output:0*

DstT0*

SrcT0*
_output_shapes
: J
sub/yConst*
_output_shapes
: *
dtype0*
valueB
 *   AG
subSub
Cast_2:y:0sub/y:output:0*
T0*
_output_shapes
: F
Pow_2PowConst:output:0sub:z:0*
T0*
_output_shapes
: D
sub_1Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: _
	LessEqual	LessEqualinputs	sub_1:z:0*
T0*+
_output_shapes
:џџџџџџџџџ J
ReluReluinputs*
T0*+
_output_shapes
:џџџџџџџџџ E
ones_like/ShapeShapeinputs*
T0*
_output_shapes
:T
ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  ?{
	ones_likeFillones_like/Shape:output:0ones_like/Const:output:0*
T0*+
_output_shapes
:џџџџџџџџџ D
sub_2Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: _
mulMulones_like:output:0	sub_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ v
SelectV2SelectV2LessEqual:z:0Relu:activations:0mul:z:0*
T0*+
_output_shapes
:џџџџџџџџџ T
mul_1MulinputsCast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ _
truedivRealDiv	mul_1:z:0
Cast_1:y:0*
T0*+
_output_shapes
:џџџџџџџџџ M
NegNegtruediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ Q
RoundRoundtruediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ V
addAddV2Neg:y:0	Round:y:0*
T0*+
_output_shapes
:џџџџџџџџџ [
StopGradientStopGradientadd:z:0*
T0*+
_output_shapes
:џџџџџџџџџ h
add_1AddV2truediv:z:0StopGradient:output:0*
T0*+
_output_shapes
:џџџџџџџџџ _
	truediv_1RealDiv	add_1:z:0Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ P
truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?U
	truediv_2RealDivtruediv_2/x:output:0Cast:y:0*
T0*
_output_shapes
: L
sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?N
sub_3Subsub_3/x:output:0truediv_2:z:0*
T0*
_output_shapes
: p
clip_by_value/MinimumMinimumtruediv_1:z:0	sub_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*+
_output_shapes
:џџџџџџџџџ a
mul_2Mul
Cast_1:y:0clip_by_value:z:0*
T0*+
_output_shapes
:џџџџџџџџџ U
Neg_1NegSelectV2:output:0*
T0*+
_output_shapes
:џџџџџџџџџ Z
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?_
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ _
StopGradient_1StopGradient	mul_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ p
add_3AddV2SelectV2:output:0StopGradient_1:output:0*
T0*+
_output_shapes
:џџџџџџџџџ U
IdentityIdentity	add_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:џџџџџџџџџ :S O
+
_output_shapes
:џџџџџџџџџ 
 
_user_specified_nameinputs
л!
d
H__inference_q_activation_layer_call_and_return_conditional_losses_461443

inputs
identityG
Pow/xConst*
_output_shapes
: *
dtype0*
value	B :G
Pow/yConst*
_output_shapes
: *
dtype0*
value	B :K
PowPowPow/x:output:0Pow/y:output:0*
T0*
_output_shapes
: E
CastCastPow:z:0*

DstT0*

SrcT0*
_output_shapes
: I
Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :I
Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Q
Pow_1PowPow_1/x:output:0Pow_1/y:output:0*
T0*
_output_shapes
: I
Cast_1Cast	Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: J
ConstConst*
_output_shapes
: *
dtype0*
valueB
 *   @J
Cast_2/xConst*
_output_shapes
: *
dtype0*
value	B : Q
Cast_2CastCast_2/x:output:0*

DstT0*

SrcT0*
_output_shapes
: J
sub/yConst*
_output_shapes
: *
dtype0*
valueB
 *   AG
subSub
Cast_2:y:0sub/y:output:0*
T0*
_output_shapes
: F
Pow_2PowConst:output:0sub:z:0*
T0*
_output_shapes
: D
sub_1Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: _
	LessEqual	LessEqualinputs	sub_1:z:0*
T0*+
_output_shapes
:џџџџџџџџџ J
ReluReluinputs*
T0*+
_output_shapes
:џџџџџџџџџ E
ones_like/ShapeShapeinputs*
T0*
_output_shapes
:T
ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  ?{
	ones_likeFillones_like/Shape:output:0ones_like/Const:output:0*
T0*+
_output_shapes
:џџџџџџџџџ D
sub_2Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: _
mulMulones_like:output:0	sub_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ v
SelectV2SelectV2LessEqual:z:0Relu:activations:0mul:z:0*
T0*+
_output_shapes
:џџџџџџџџџ T
mul_1MulinputsCast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ _
truedivRealDiv	mul_1:z:0
Cast_1:y:0*
T0*+
_output_shapes
:џџџџџџџџџ M
NegNegtruediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ Q
RoundRoundtruediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ V
addAddV2Neg:y:0	Round:y:0*
T0*+
_output_shapes
:џџџџџџџџџ [
StopGradientStopGradientadd:z:0*
T0*+
_output_shapes
:џџџџџџџџџ h
add_1AddV2truediv:z:0StopGradient:output:0*
T0*+
_output_shapes
:џџџџџџџџџ _
	truediv_1RealDiv	add_1:z:0Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ P
truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?U
	truediv_2RealDivtruediv_2/x:output:0Cast:y:0*
T0*
_output_shapes
: L
sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?N
sub_3Subsub_3/x:output:0truediv_2:z:0*
T0*
_output_shapes
: p
clip_by_value/MinimumMinimumtruediv_1:z:0	sub_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*+
_output_shapes
:џџџџџџџџџ a
mul_2Mul
Cast_1:y:0clip_by_value:z:0*
T0*+
_output_shapes
:џџџџџџџџџ U
Neg_1NegSelectV2:output:0*
T0*+
_output_shapes
:џџџџџџџџџ Z
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?_
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ _
StopGradient_1StopGradient	mul_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ p
add_3AddV2SelectV2:output:0StopGradient_1:output:0*
T0*+
_output_shapes
:џџџџџџџџџ U
IdentityIdentity	add_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:џџџџџџџџџ :S O
+
_output_shapes
:џџџџџџџџџ 
 
_user_specified_nameinputs
щ<
Ј
E__inference_q_dense_1_layer_call_and_return_conditional_losses_457952

inputs)
readvariableop_resource:  '
readvariableop_3_resource: 
identityЂReadVariableOpЂReadVariableOp_1ЂReadVariableOp_2ЂReadVariableOp_3ЂReadVariableOp_4ЂReadVariableOp_5G
Pow/xConst*
_output_shapes
: *
dtype0*
value	B :G
Pow/yConst*
_output_shapes
: *
dtype0*
value	B : K
PowPowPow/x:output:0Pow/y:output:0*
T0*
_output_shapes
: E
CastCastPow:z:0*

DstT0*

SrcT0*
_output_shapes
: f
ReadVariableOpReadVariableOpreadvariableop_resource*
_output_shapes

:  *
dtype0J
mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A[
mulMulReadVariableOp:value:0mul/y:output:0*
T0*
_output_shapes

:  N
truedivRealDivmul:z:0Cast:y:0*
T0*
_output_shapes

:  @
NegNegtruediv:z:0*
T0*
_output_shapes

:  D
RoundRoundtruediv:z:0*
T0*
_output_shapes

:  I
addAddV2Neg:y:0	Round:y:0*
T0*
_output_shapes

:  N
StopGradientStopGradientadd:z:0*
T0*
_output_shapes

:  [
add_1AddV2truediv:z:0StopGradient:output:0*
T0*
_output_shapes

:  \
clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Сv
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*
_output_shapes

:  R
mul_1MulCast:y:0clip_by_value:z:0*
T0*
_output_shapes

:  P
truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A^
	truediv_1RealDiv	mul_1:z:0truediv_1/y:output:0*
T0*
_output_shapes

:  L
mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?V
mul_2Mulmul_2/x:output:0truediv_1:z:0*
T0*
_output_shapes

:  h
ReadVariableOp_1ReadVariableOpreadvariableop_resource*
_output_shapes

:  *
dtype0O
Neg_1NegReadVariableOp_1:value:0*
T0*
_output_shapes

:  M
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*
_output_shapes

:  L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?R
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*
_output_shapes

:  R
StopGradient_1StopGradient	mul_3:z:0*
T0*
_output_shapes

:  h
ReadVariableOp_2ReadVariableOpreadvariableop_resource*
_output_shapes

:  *
dtype0j
add_3AddV2ReadVariableOp_2:value:0StopGradient_1:output:0*
T0*
_output_shapes

:  ;
ShapeShapeinputs*
T0*
_output_shapes
:Q
unstackUnpackShape:output:0*
T0*
_output_shapes
: : : *	
numX
Shape_1Const*
_output_shapes
:*
dtype0*
valueB"        S
	unstack_1UnpackShape_1:output:0*
T0*
_output_shapes
: : *	
num^
Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB"џџџџ    d
ReshapeReshapeinputsReshape/shape:output:0*
T0*'
_output_shapes
:џџџџџџџџџ _
transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       c
	transpose	Transpose	add_3:z:0transpose/perm:output:0*
T0*
_output_shapes

:  `
Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"    џџџџf
	Reshape_1Reshapetranspose:y:0Reshape_1/shape:output:0*
T0*
_output_shapes

:  h
MatMulMatMulReshape:output:0Reshape_1:output:0*
T0*'
_output_shapes
:џџџџџџџџџ S
Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :S
Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : 
Reshape_2/shapePackunstack:output:0Reshape_2/shape/1:output:0Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:v
	Reshape_2ReshapeMatMul:product:0Reshape_2/shape:output:0*
T0*+
_output_shapes
:џџџџџџџџџ I
Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :I
Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Q
Pow_1PowPow_1/x:output:0Pow_1/y:output:0*
T0*
_output_shapes
: I
Cast_1Cast	Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: f
ReadVariableOp_3ReadVariableOpreadvariableop_3_resource*
_output_shapes
: *
dtype0L
mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A]
mul_4MulReadVariableOp_3:value:0mul_4/y:output:0*
T0*
_output_shapes
: P
	truediv_2RealDiv	mul_4:z:0
Cast_1:y:0*
T0*
_output_shapes
: @
Neg_2Negtruediv_2:z:0*
T0*
_output_shapes
: D
Round_1Roundtruediv_2:z:0*
T0*
_output_shapes
: K
add_4AddV2	Neg_2:y:0Round_1:y:0*
T0*
_output_shapes
: N
StopGradient_2StopGradient	add_4:z:0*
T0*
_output_shapes
: [
add_5AddV2truediv_2:z:0StopGradient_2:output:0*
T0*
_output_shapes
: ^
clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Сx
clip_by_value_1Maximumclip_by_value_1/Minimum:z:0clip_by_value_1/y:output:0*
T0*
_output_shapes
: R
mul_5Mul
Cast_1:y:0clip_by_value_1:z:0*
T0*
_output_shapes
: P
truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  AZ
	truediv_3RealDiv	mul_5:z:0truediv_3/y:output:0*
T0*
_output_shapes
: L
mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?R
mul_6Mulmul_6/x:output:0truediv_3:z:0*
T0*
_output_shapes
: f
ReadVariableOp_4ReadVariableOpreadvariableop_3_resource*
_output_shapes
: *
dtype0K
Neg_3NegReadVariableOp_4:value:0*
T0*
_output_shapes
: I
add_6AddV2	Neg_3:y:0	mul_6:z:0*
T0*
_output_shapes
: L
mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?N
mul_7Mulmul_7/x:output:0	add_6:z:0*
T0*
_output_shapes
: N
StopGradient_3StopGradient	mul_7:z:0*
T0*
_output_shapes
: f
ReadVariableOp_5ReadVariableOpreadvariableop_3_resource*
_output_shapes
: *
dtype0f
add_7AddV2ReadVariableOp_5:value:0StopGradient_3:output:0*
T0*
_output_shapes
: g
BiasAddBiasAddReshape_2:output:0	add_7:z:0*
T0*+
_output_shapes
:џџџџџџџџџ c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:џџџџџџџџџ Ж
NoOpNoOp^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:џџџџџџџџџ : : 2 
ReadVariableOpReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_5:S O
+
_output_shapes
:џџџџџџџџџ 
 
_user_specified_nameinputs


F__inference_sequential_layer_call_and_return_conditional_losses_458310
q_dense_input 
q_dense_458291: 
q_dense_458293: "
q_dense_1_458297:  
q_dense_1_458299: "
q_dense_2_458303:  
q_dense_2_458305: 
identityЂq_dense/StatefulPartitionedCallЂ!q_dense_1/StatefulPartitionedCallЂ!q_dense_2/StatefulPartitionedCallќ
q_dense/StatefulPartitionedCallStatefulPartitionedCallq_dense_inputq_dense_458291q_dense_458293*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8 *L
fGRE
C__inference_q_dense_layer_call_and_return_conditional_losses_457810ы
q_activation/PartitionedCallPartitionedCall(q_dense/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8 *Q
fLRJ
H__inference_q_activation_layer_call_and_return_conditional_losses_457865
!q_dense_1/StatefulPartitionedCallStatefulPartitionedCall%q_activation/PartitionedCall:output:0q_dense_1_458297q_dense_1_458299*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8 *N
fIRG
E__inference_q_dense_1_layer_call_and_return_conditional_losses_457952ё
q_activation_1/PartitionedCallPartitionedCall*q_dense_1/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8 *S
fNRL
J__inference_q_activation_1_layer_call_and_return_conditional_losses_458007
!q_dense_2/StatefulPartitionedCallStatefulPartitionedCall'q_activation_1/PartitionedCall:output:0q_dense_2_458303q_dense_2_458305*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8 *N
fIRG
E__inference_q_dense_2_layer_call_and_return_conditional_losses_458094ё
q_activation_2/PartitionedCallPartitionedCall*q_dense_2/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8 *S
fNRL
J__inference_q_activation_2_layer_call_and_return_conditional_losses_458149z
IdentityIdentity'q_activation_2/PartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:џџџџџџџџџ А
NoOpNoOp ^q_dense/StatefulPartitionedCall"^q_dense_1/StatefulPartitionedCall"^q_dense_2/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*6
_input_shapes%
#:џџџџџџџџџ: : : : : : 2B
q_dense/StatefulPartitionedCallq_dense/StatefulPartitionedCall2F
!q_dense_1/StatefulPartitionedCall!q_dense_1/StatefulPartitionedCall2F
!q_dense_2/StatefulPartitionedCall!q_dense_2/StatefulPartitionedCall:Z V
+
_output_shapes
:џџџџџџџџџ
'
_user_specified_nameq_dense_input
И
O
#__inference__update_step_xla_460112
gradient
variable: *
_XlaMustCompile(*(
_construction_contextkEagerRuntime*
_input_shapes
: : *
	_noinline(:H D

_output_shapes

: 
"
_user_specified_name
gradient:($
"
_user_specified_name
variable
Љ
З
H__inference_sequential_1_layer_call_and_return_conditional_losses_458539

inputs"
q_dense_3_458408:  
q_dense_3_458410: "
q_dense_4_458533: 
q_dense_4_458535:
identityЂ!q_dense_3/StatefulPartitionedCallЂ!q_dense_4/StatefulPartitionedCallљ
!q_dense_3/StatefulPartitionedCallStatefulPartitionedCallinputsq_dense_3_458408q_dense_3_458410*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:џџџџџџџџџ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8 *N
fIRG
E__inference_q_dense_3_layer_call_and_return_conditional_losses_458407э
q_activation_3/PartitionedCallPartitionedCall*q_dense_3/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:џџџџџџџџџ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8 *S
fNRL
J__inference_q_activation_3_layer_call_and_return_conditional_losses_458462
!q_dense_4/StatefulPartitionedCallStatefulPartitionedCall'q_activation_3/PartitionedCall:output:0q_dense_4_458533q_dense_4_458535*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:џџџџџџџџџ*$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8 *N
fIRG
E__inference_q_dense_4_layer_call_and_return_conditional_losses_458532y
IdentityIdentity*q_dense_4/StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:џџџџџџџџџ
NoOpNoOp"^q_dense_3/StatefulPartitionedCall"^q_dense_4/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:џџџџџџџџџ : : : : 2F
!q_dense_3/StatefulPartitionedCall!q_dense_3/StatefulPartitionedCall2F
!q_dense_4/StatefulPartitionedCall!q_dense_4/StatefulPartitionedCall:O K
'
_output_shapes
:џџџџџџџџџ 
 
_user_specified_nameinputs
И
O
#__inference__update_step_xla_460102
gradient
variable:  *
_XlaMustCompile(*(
_construction_contextkEagerRuntime*
_input_shapes
:  : *
	_noinline(:H D

_output_shapes

:  
"
_user_specified_name
gradient:($
"
_user_specified_name
variable
Ѓ
а
-__inference_sequential_1_layer_call_fn_460941

inputs
unknown:  
	unknown_0: 
	unknown_1: 
	unknown_2:
identityЂStatefulPartitionedCallќ
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0	unknown_1	unknown_2*
Tin	
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:џџџџџџџџџ*&
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8 *Q
fLRJ
H__inference_sequential_1_layer_call_and_return_conditional_losses_458606o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:џџџџџџџџџ`
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:џџџџџџџџџ : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:O K
'
_output_shapes
:џџџџџџџџџ 
 
_user_specified_nameinputs
Ў
Ђ
P__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_458846
input_1#
sequential_458821: 
sequential_458823: #
sequential_458825:  
sequential_458827: #
sequential_458829:  
sequential_458831: %
sequential_1_458836:  !
sequential_1_458838: %
sequential_1_458840: !
sequential_1_458842:
identityЂ"sequential/StatefulPartitionedCallЂ$sequential_1/StatefulPartitionedCallж
"sequential/StatefulPartitionedCallStatefulPartitionedCallinput_1sequential_458821sequential_458823sequential_458825sequential_458827sequential_458829sequential_458831*
Tin
	2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ *(
_read_only_resource_inputs

*2
config_proto" 

CPU

GPU2 *0J 8 *O
fJRH
F__inference_sequential_layer_call_and_return_conditional_losses_458152X
Mean/reduction_indicesConst*
_output_shapes
: *
dtype0*
value	B :
MeanMean+sequential/StatefulPartitionedCall:output:0Mean/reduction_indices:output:0*
T0*'
_output_shapes
:џџџџџџџџџ К
$sequential_1/StatefulPartitionedCallStatefulPartitionedCallMean:output:0sequential_1_458836sequential_1_458838sequential_1_458840sequential_1_458842*
Tin	
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:џџџџџџџџџ*&
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8 *Q
fLRJ
H__inference_sequential_1_layer_call_and_return_conditional_losses_458539|
IdentityIdentity-sequential_1/StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:џџџџџџџџџ
NoOpNoOp#^sequential/StatefulPartitionedCall%^sequential_1/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:џџџџџџџџџ: : : : : : : : : : 2H
"sequential/StatefulPartitionedCall"sequential/StatefulPartitionedCall2L
$sequential_1/StatefulPartitionedCall$sequential_1/StatefulPartitionedCall:T P
+
_output_shapes
:џџџџџџџџџ
!
_user_specified_name	input_1
ўз

F__inference_sequential_layer_call_and_return_conditional_losses_460533

inputs1
q_dense_readvariableop_resource: /
!q_dense_readvariableop_3_resource: 3
!q_dense_1_readvariableop_resource:  1
#q_dense_1_readvariableop_3_resource: 3
!q_dense_2_readvariableop_resource:  1
#q_dense_2_readvariableop_3_resource: 
identityЂq_dense/ReadVariableOpЂq_dense/ReadVariableOp_1Ђq_dense/ReadVariableOp_2Ђq_dense/ReadVariableOp_3Ђq_dense/ReadVariableOp_4Ђq_dense/ReadVariableOp_5Ђq_dense_1/ReadVariableOpЂq_dense_1/ReadVariableOp_1Ђq_dense_1/ReadVariableOp_2Ђq_dense_1/ReadVariableOp_3Ђq_dense_1/ReadVariableOp_4Ђq_dense_1/ReadVariableOp_5Ђq_dense_2/ReadVariableOpЂq_dense_2/ReadVariableOp_1Ђq_dense_2/ReadVariableOp_2Ђq_dense_2/ReadVariableOp_3Ђq_dense_2/ReadVariableOp_4Ђq_dense_2/ReadVariableOp_5O
q_dense/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :O
q_dense/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : c
q_dense/PowPowq_dense/Pow/x:output:0q_dense/Pow/y:output:0*
T0*
_output_shapes
: U
q_dense/CastCastq_dense/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: v
q_dense/ReadVariableOpReadVariableOpq_dense_readvariableop_resource*
_output_shapes

: *
dtype0R
q_dense/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  As
q_dense/mulMulq_dense/ReadVariableOp:value:0q_dense/mul/y:output:0*
T0*
_output_shapes

: f
q_dense/truedivRealDivq_dense/mul:z:0q_dense/Cast:y:0*
T0*
_output_shapes

: P
q_dense/NegNegq_dense/truediv:z:0*
T0*
_output_shapes

: T
q_dense/RoundRoundq_dense/truediv:z:0*
T0*
_output_shapes

: a
q_dense/addAddV2q_dense/Neg:y:0q_dense/Round:y:0*
T0*
_output_shapes

: ^
q_dense/StopGradientStopGradientq_dense/add:z:0*
T0*
_output_shapes

: s
q_dense/add_1AddV2q_dense/truediv:z:0q_dense/StopGradient:output:0*
T0*
_output_shapes

: d
q_dense/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pA
q_dense/clip_by_value/MinimumMinimumq_dense/add_1:z:0(q_dense/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: \
q_dense/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  С
q_dense/clip_by_valueMaximum!q_dense/clip_by_value/Minimum:z:0 q_dense/clip_by_value/y:output:0*
T0*
_output_shapes

: j
q_dense/mul_1Mulq_dense/Cast:y:0q_dense/clip_by_value:z:0*
T0*
_output_shapes

: X
q_dense/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Av
q_dense/truediv_1RealDivq_dense/mul_1:z:0q_dense/truediv_1/y:output:0*
T0*
_output_shapes

: T
q_dense/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?n
q_dense/mul_2Mulq_dense/mul_2/x:output:0q_dense/truediv_1:z:0*
T0*
_output_shapes

: x
q_dense/ReadVariableOp_1ReadVariableOpq_dense_readvariableop_resource*
_output_shapes

: *
dtype0_
q_dense/Neg_1Neg q_dense/ReadVariableOp_1:value:0*
T0*
_output_shapes

: e
q_dense/add_2AddV2q_dense/Neg_1:y:0q_dense/mul_2:z:0*
T0*
_output_shapes

: T
q_dense/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?j
q_dense/mul_3Mulq_dense/mul_3/x:output:0q_dense/add_2:z:0*
T0*
_output_shapes

: b
q_dense/StopGradient_1StopGradientq_dense/mul_3:z:0*
T0*
_output_shapes

: x
q_dense/ReadVariableOp_2ReadVariableOpq_dense_readvariableop_resource*
_output_shapes

: *
dtype0
q_dense/add_3AddV2 q_dense/ReadVariableOp_2:value:0q_dense/StopGradient_1:output:0*
T0*
_output_shapes

: C
q_dense/ShapeShapeinputs*
T0*
_output_shapes
:a
q_dense/unstackUnpackq_dense/Shape:output:0*
T0*
_output_shapes
: : : *	
num`
q_dense/Shape_1Const*
_output_shapes
:*
dtype0*
valueB"       c
q_dense/unstack_1Unpackq_dense/Shape_1:output:0*
T0*
_output_shapes
: : *	
numf
q_dense/Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB"џџџџ   t
q_dense/ReshapeReshapeinputsq_dense/Reshape/shape:output:0*
T0*'
_output_shapes
:џџџџџџџџџg
q_dense/transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       {
q_dense/transpose	Transposeq_dense/add_3:z:0q_dense/transpose/perm:output:0*
T0*
_output_shapes

: h
q_dense/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"   џџџџ~
q_dense/Reshape_1Reshapeq_dense/transpose:y:0 q_dense/Reshape_1/shape:output:0*
T0*
_output_shapes

: 
q_dense/MatMulMatMulq_dense/Reshape:output:0q_dense/Reshape_1:output:0*
T0*'
_output_shapes
:џџџџџџџџџ [
q_dense/Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :[
q_dense/Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : Џ
q_dense/Reshape_2/shapePackq_dense/unstack:output:0"q_dense/Reshape_2/shape/1:output:0"q_dense/Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:
q_dense/Reshape_2Reshapeq_dense/MatMul:product:0 q_dense/Reshape_2/shape:output:0*
T0*+
_output_shapes
:џџџџџџџџџ Q
q_dense/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :Q
q_dense/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : i
q_dense/Pow_1Powq_dense/Pow_1/x:output:0q_dense/Pow_1/y:output:0*
T0*
_output_shapes
: Y
q_dense/Cast_1Castq_dense/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: v
q_dense/ReadVariableOp_3ReadVariableOp!q_dense_readvariableop_3_resource*
_output_shapes
: *
dtype0T
q_dense/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Au
q_dense/mul_4Mul q_dense/ReadVariableOp_3:value:0q_dense/mul_4/y:output:0*
T0*
_output_shapes
: h
q_dense/truediv_2RealDivq_dense/mul_4:z:0q_dense/Cast_1:y:0*
T0*
_output_shapes
: P
q_dense/Neg_2Negq_dense/truediv_2:z:0*
T0*
_output_shapes
: T
q_dense/Round_1Roundq_dense/truediv_2:z:0*
T0*
_output_shapes
: c
q_dense/add_4AddV2q_dense/Neg_2:y:0q_dense/Round_1:y:0*
T0*
_output_shapes
: ^
q_dense/StopGradient_2StopGradientq_dense/add_4:z:0*
T0*
_output_shapes
: s
q_dense/add_5AddV2q_dense/truediv_2:z:0q_dense/StopGradient_2:output:0*
T0*
_output_shapes
: f
!q_dense/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pA
q_dense/clip_by_value_1/MinimumMinimumq_dense/add_5:z:0*q_dense/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: ^
q_dense/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  С
q_dense/clip_by_value_1Maximum#q_dense/clip_by_value_1/Minimum:z:0"q_dense/clip_by_value_1/y:output:0*
T0*
_output_shapes
: j
q_dense/mul_5Mulq_dense/Cast_1:y:0q_dense/clip_by_value_1:z:0*
T0*
_output_shapes
: X
q_dense/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Ar
q_dense/truediv_3RealDivq_dense/mul_5:z:0q_dense/truediv_3/y:output:0*
T0*
_output_shapes
: T
q_dense/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?j
q_dense/mul_6Mulq_dense/mul_6/x:output:0q_dense/truediv_3:z:0*
T0*
_output_shapes
: v
q_dense/ReadVariableOp_4ReadVariableOp!q_dense_readvariableop_3_resource*
_output_shapes
: *
dtype0[
q_dense/Neg_3Neg q_dense/ReadVariableOp_4:value:0*
T0*
_output_shapes
: a
q_dense/add_6AddV2q_dense/Neg_3:y:0q_dense/mul_6:z:0*
T0*
_output_shapes
: T
q_dense/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?f
q_dense/mul_7Mulq_dense/mul_7/x:output:0q_dense/add_6:z:0*
T0*
_output_shapes
: ^
q_dense/StopGradient_3StopGradientq_dense/mul_7:z:0*
T0*
_output_shapes
: v
q_dense/ReadVariableOp_5ReadVariableOp!q_dense_readvariableop_3_resource*
_output_shapes
: *
dtype0~
q_dense/add_7AddV2 q_dense/ReadVariableOp_5:value:0q_dense/StopGradient_3:output:0*
T0*
_output_shapes
: 
q_dense/BiasAddBiasAddq_dense/Reshape_2:output:0q_dense/add_7:z:0*
T0*+
_output_shapes
:џџџџџџџџџ T
q_activation/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :T
q_activation/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :r
q_activation/PowPowq_activation/Pow/x:output:0q_activation/Pow/y:output:0*
T0*
_output_shapes
: _
q_activation/CastCastq_activation/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: V
q_activation/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :V
q_activation/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : x
q_activation/Pow_1Powq_activation/Pow_1/x:output:0q_activation/Pow_1/y:output:0*
T0*
_output_shapes
: c
q_activation/Cast_1Castq_activation/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: W
q_activation/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *   @W
q_activation/Cast_2/xConst*
_output_shapes
: *
dtype0*
value	B : k
q_activation/Cast_2Castq_activation/Cast_2/x:output:0*

DstT0*

SrcT0*
_output_shapes
: W
q_activation/sub/yConst*
_output_shapes
: *
dtype0*
valueB
 *   An
q_activation/subSubq_activation/Cast_2:y:0q_activation/sub/y:output:0*
T0*
_output_shapes
: m
q_activation/Pow_2Powq_activation/Const:output:0q_activation/sub:z:0*
T0*
_output_shapes
: k
q_activation/sub_1Subq_activation/Cast_1:y:0q_activation/Pow_2:z:0*
T0*
_output_shapes
: 
q_activation/LessEqual	LessEqualq_dense/BiasAdd:output:0q_activation/sub_1:z:0*
T0*+
_output_shapes
:џџџџџџџџџ i
q_activation/ReluReluq_dense/BiasAdd:output:0*
T0*+
_output_shapes
:џџџџџџџџџ d
q_activation/ones_like/ShapeShapeq_dense/BiasAdd:output:0*
T0*
_output_shapes
:a
q_activation/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  ?Ђ
q_activation/ones_likeFill%q_activation/ones_like/Shape:output:0%q_activation/ones_like/Const:output:0*
T0*+
_output_shapes
:џџџџџџџџџ k
q_activation/sub_2Subq_activation/Cast_1:y:0q_activation/Pow_2:z:0*
T0*
_output_shapes
: 
q_activation/mulMulq_activation/ones_like:output:0q_activation/sub_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ Њ
q_activation/SelectV2SelectV2q_activation/LessEqual:z:0q_activation/Relu:activations:0q_activation/mul:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation/mul_1Mulq_dense/BiasAdd:output:0q_activation/Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation/truedivRealDivq_activation/mul_1:z:0q_activation/Cast_1:y:0*
T0*+
_output_shapes
:џџџџџџџџџ g
q_activation/NegNegq_activation/truediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ k
q_activation/RoundRoundq_activation/truediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ }
q_activation/addAddV2q_activation/Neg:y:0q_activation/Round:y:0*
T0*+
_output_shapes
:џџџџџџџџџ u
q_activation/StopGradientStopGradientq_activation/add:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation/add_1AddV2q_activation/truediv:z:0"q_activation/StopGradient:output:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation/truediv_1RealDivq_activation/add_1:z:0q_activation/Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ ]
q_activation/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?|
q_activation/truediv_2RealDiv!q_activation/truediv_2/x:output:0q_activation/Cast:y:0*
T0*
_output_shapes
: Y
q_activation/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?u
q_activation/sub_3Subq_activation/sub_3/x:output:0q_activation/truediv_2:z:0*
T0*
_output_shapes
: 
"q_activation/clip_by_value/MinimumMinimumq_activation/truediv_1:z:0q_activation/sub_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ a
q_activation/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    Њ
q_activation/clip_by_valueMaximum&q_activation/clip_by_value/Minimum:z:0%q_activation/clip_by_value/y:output:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation/mul_2Mulq_activation/Cast_1:y:0q_activation/clip_by_value:z:0*
T0*+
_output_shapes
:џџџџџџџџџ o
q_activation/Neg_1Negq_activation/SelectV2:output:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation/add_2AddV2q_activation/Neg_1:y:0q_activation/mul_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ Y
q_activation/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
q_activation/mul_3Mulq_activation/mul_3/x:output:0q_activation/add_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ y
q_activation/StopGradient_1StopGradientq_activation/mul_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation/add_3AddV2q_activation/SelectV2:output:0$q_activation/StopGradient_1:output:0*
T0*+
_output_shapes
:џџџџџџџџџ Q
q_dense_1/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :Q
q_dense_1/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : i
q_dense_1/PowPowq_dense_1/Pow/x:output:0q_dense_1/Pow/y:output:0*
T0*
_output_shapes
: Y
q_dense_1/CastCastq_dense_1/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: z
q_dense_1/ReadVariableOpReadVariableOp!q_dense_1_readvariableop_resource*
_output_shapes

:  *
dtype0T
q_dense_1/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Ay
q_dense_1/mulMul q_dense_1/ReadVariableOp:value:0q_dense_1/mul/y:output:0*
T0*
_output_shapes

:  l
q_dense_1/truedivRealDivq_dense_1/mul:z:0q_dense_1/Cast:y:0*
T0*
_output_shapes

:  T
q_dense_1/NegNegq_dense_1/truediv:z:0*
T0*
_output_shapes

:  X
q_dense_1/RoundRoundq_dense_1/truediv:z:0*
T0*
_output_shapes

:  g
q_dense_1/addAddV2q_dense_1/Neg:y:0q_dense_1/Round:y:0*
T0*
_output_shapes

:  b
q_dense_1/StopGradientStopGradientq_dense_1/add:z:0*
T0*
_output_shapes

:  y
q_dense_1/add_1AddV2q_dense_1/truediv:z:0q_dense_1/StopGradient:output:0*
T0*
_output_shapes

:  f
!q_dense_1/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pA
q_dense_1/clip_by_value/MinimumMinimumq_dense_1/add_1:z:0*q_dense_1/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  ^
q_dense_1/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  С
q_dense_1/clip_by_valueMaximum#q_dense_1/clip_by_value/Minimum:z:0"q_dense_1/clip_by_value/y:output:0*
T0*
_output_shapes

:  p
q_dense_1/mul_1Mulq_dense_1/Cast:y:0q_dense_1/clip_by_value:z:0*
T0*
_output_shapes

:  Z
q_dense_1/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A|
q_dense_1/truediv_1RealDivq_dense_1/mul_1:z:0q_dense_1/truediv_1/y:output:0*
T0*
_output_shapes

:  V
q_dense_1/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?t
q_dense_1/mul_2Mulq_dense_1/mul_2/x:output:0q_dense_1/truediv_1:z:0*
T0*
_output_shapes

:  |
q_dense_1/ReadVariableOp_1ReadVariableOp!q_dense_1_readvariableop_resource*
_output_shapes

:  *
dtype0c
q_dense_1/Neg_1Neg"q_dense_1/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  k
q_dense_1/add_2AddV2q_dense_1/Neg_1:y:0q_dense_1/mul_2:z:0*
T0*
_output_shapes

:  V
q_dense_1/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?p
q_dense_1/mul_3Mulq_dense_1/mul_3/x:output:0q_dense_1/add_2:z:0*
T0*
_output_shapes

:  f
q_dense_1/StopGradient_1StopGradientq_dense_1/mul_3:z:0*
T0*
_output_shapes

:  |
q_dense_1/ReadVariableOp_2ReadVariableOp!q_dense_1_readvariableop_resource*
_output_shapes

:  *
dtype0
q_dense_1/add_3AddV2"q_dense_1/ReadVariableOp_2:value:0!q_dense_1/StopGradient_1:output:0*
T0*
_output_shapes

:  U
q_dense_1/ShapeShapeq_activation/add_3:z:0*
T0*
_output_shapes
:e
q_dense_1/unstackUnpackq_dense_1/Shape:output:0*
T0*
_output_shapes
: : : *	
numb
q_dense_1/Shape_1Const*
_output_shapes
:*
dtype0*
valueB"        g
q_dense_1/unstack_1Unpackq_dense_1/Shape_1:output:0*
T0*
_output_shapes
: : *	
numh
q_dense_1/Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB"џџџџ    
q_dense_1/ReshapeReshapeq_activation/add_3:z:0 q_dense_1/Reshape/shape:output:0*
T0*'
_output_shapes
:џџџџџџџџџ i
q_dense_1/transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       
q_dense_1/transpose	Transposeq_dense_1/add_3:z:0!q_dense_1/transpose/perm:output:0*
T0*
_output_shapes

:  j
q_dense_1/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"    џџџџ
q_dense_1/Reshape_1Reshapeq_dense_1/transpose:y:0"q_dense_1/Reshape_1/shape:output:0*
T0*
_output_shapes

:  
q_dense_1/MatMulMatMulq_dense_1/Reshape:output:0q_dense_1/Reshape_1:output:0*
T0*'
_output_shapes
:џџџџџџџџџ ]
q_dense_1/Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :]
q_dense_1/Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : З
q_dense_1/Reshape_2/shapePackq_dense_1/unstack:output:0$q_dense_1/Reshape_2/shape/1:output:0$q_dense_1/Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:
q_dense_1/Reshape_2Reshapeq_dense_1/MatMul:product:0"q_dense_1/Reshape_2/shape:output:0*
T0*+
_output_shapes
:џџџџџџџџџ S
q_dense_1/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :S
q_dense_1/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : o
q_dense_1/Pow_1Powq_dense_1/Pow_1/x:output:0q_dense_1/Pow_1/y:output:0*
T0*
_output_shapes
: ]
q_dense_1/Cast_1Castq_dense_1/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: z
q_dense_1/ReadVariableOp_3ReadVariableOp#q_dense_1_readvariableop_3_resource*
_output_shapes
: *
dtype0V
q_dense_1/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A{
q_dense_1/mul_4Mul"q_dense_1/ReadVariableOp_3:value:0q_dense_1/mul_4/y:output:0*
T0*
_output_shapes
: n
q_dense_1/truediv_2RealDivq_dense_1/mul_4:z:0q_dense_1/Cast_1:y:0*
T0*
_output_shapes
: T
q_dense_1/Neg_2Negq_dense_1/truediv_2:z:0*
T0*
_output_shapes
: X
q_dense_1/Round_1Roundq_dense_1/truediv_2:z:0*
T0*
_output_shapes
: i
q_dense_1/add_4AddV2q_dense_1/Neg_2:y:0q_dense_1/Round_1:y:0*
T0*
_output_shapes
: b
q_dense_1/StopGradient_2StopGradientq_dense_1/add_4:z:0*
T0*
_output_shapes
: y
q_dense_1/add_5AddV2q_dense_1/truediv_2:z:0!q_dense_1/StopGradient_2:output:0*
T0*
_output_shapes
: h
#q_dense_1/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pA
!q_dense_1/clip_by_value_1/MinimumMinimumq_dense_1/add_5:z:0,q_dense_1/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: `
q_dense_1/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  С
q_dense_1/clip_by_value_1Maximum%q_dense_1/clip_by_value_1/Minimum:z:0$q_dense_1/clip_by_value_1/y:output:0*
T0*
_output_shapes
: p
q_dense_1/mul_5Mulq_dense_1/Cast_1:y:0q_dense_1/clip_by_value_1:z:0*
T0*
_output_shapes
: Z
q_dense_1/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Ax
q_dense_1/truediv_3RealDivq_dense_1/mul_5:z:0q_dense_1/truediv_3/y:output:0*
T0*
_output_shapes
: V
q_dense_1/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?p
q_dense_1/mul_6Mulq_dense_1/mul_6/x:output:0q_dense_1/truediv_3:z:0*
T0*
_output_shapes
: z
q_dense_1/ReadVariableOp_4ReadVariableOp#q_dense_1_readvariableop_3_resource*
_output_shapes
: *
dtype0_
q_dense_1/Neg_3Neg"q_dense_1/ReadVariableOp_4:value:0*
T0*
_output_shapes
: g
q_dense_1/add_6AddV2q_dense_1/Neg_3:y:0q_dense_1/mul_6:z:0*
T0*
_output_shapes
: V
q_dense_1/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?l
q_dense_1/mul_7Mulq_dense_1/mul_7/x:output:0q_dense_1/add_6:z:0*
T0*
_output_shapes
: b
q_dense_1/StopGradient_3StopGradientq_dense_1/mul_7:z:0*
T0*
_output_shapes
: z
q_dense_1/ReadVariableOp_5ReadVariableOp#q_dense_1_readvariableop_3_resource*
_output_shapes
: *
dtype0
q_dense_1/add_7AddV2"q_dense_1/ReadVariableOp_5:value:0!q_dense_1/StopGradient_3:output:0*
T0*
_output_shapes
: 
q_dense_1/BiasAddBiasAddq_dense_1/Reshape_2:output:0q_dense_1/add_7:z:0*
T0*+
_output_shapes
:џџџџџџџџџ V
q_activation_1/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :V
q_activation_1/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :x
q_activation_1/PowPowq_activation_1/Pow/x:output:0q_activation_1/Pow/y:output:0*
T0*
_output_shapes
: c
q_activation_1/CastCastq_activation_1/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: X
q_activation_1/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :X
q_activation_1/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : ~
q_activation_1/Pow_1Powq_activation_1/Pow_1/x:output:0q_activation_1/Pow_1/y:output:0*
T0*
_output_shapes
: g
q_activation_1/Cast_1Castq_activation_1/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: Y
q_activation_1/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *   @Y
q_activation_1/Cast_2/xConst*
_output_shapes
: *
dtype0*
value	B : o
q_activation_1/Cast_2Cast q_activation_1/Cast_2/x:output:0*

DstT0*

SrcT0*
_output_shapes
: Y
q_activation_1/sub/yConst*
_output_shapes
: *
dtype0*
valueB
 *   At
q_activation_1/subSubq_activation_1/Cast_2:y:0q_activation_1/sub/y:output:0*
T0*
_output_shapes
: s
q_activation_1/Pow_2Powq_activation_1/Const:output:0q_activation_1/sub:z:0*
T0*
_output_shapes
: q
q_activation_1/sub_1Subq_activation_1/Cast_1:y:0q_activation_1/Pow_2:z:0*
T0*
_output_shapes
: 
q_activation_1/LessEqual	LessEqualq_dense_1/BiasAdd:output:0q_activation_1/sub_1:z:0*
T0*+
_output_shapes
:џџџџџџџџџ m
q_activation_1/ReluReluq_dense_1/BiasAdd:output:0*
T0*+
_output_shapes
:џџџџџџџџџ h
q_activation_1/ones_like/ShapeShapeq_dense_1/BiasAdd:output:0*
T0*
_output_shapes
:c
q_activation_1/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  ?Ј
q_activation_1/ones_likeFill'q_activation_1/ones_like/Shape:output:0'q_activation_1/ones_like/Const:output:0*
T0*+
_output_shapes
:џџџџџџџџџ q
q_activation_1/sub_2Subq_activation_1/Cast_1:y:0q_activation_1/Pow_2:z:0*
T0*
_output_shapes
: 
q_activation_1/mulMul!q_activation_1/ones_like:output:0q_activation_1/sub_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ В
q_activation_1/SelectV2SelectV2q_activation_1/LessEqual:z:0!q_activation_1/Relu:activations:0q_activation_1/mul:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation_1/mul_1Mulq_dense_1/BiasAdd:output:0q_activation_1/Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation_1/truedivRealDivq_activation_1/mul_1:z:0q_activation_1/Cast_1:y:0*
T0*+
_output_shapes
:џџџџџџџџџ k
q_activation_1/NegNegq_activation_1/truediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ o
q_activation_1/RoundRoundq_activation_1/truediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation_1/addAddV2q_activation_1/Neg:y:0q_activation_1/Round:y:0*
T0*+
_output_shapes
:џџџџџџџџџ y
q_activation_1/StopGradientStopGradientq_activation_1/add:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation_1/add_1AddV2q_activation_1/truediv:z:0$q_activation_1/StopGradient:output:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation_1/truediv_1RealDivq_activation_1/add_1:z:0q_activation_1/Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ _
q_activation_1/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
q_activation_1/truediv_2RealDiv#q_activation_1/truediv_2/x:output:0q_activation_1/Cast:y:0*
T0*
_output_shapes
: [
q_activation_1/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?{
q_activation_1/sub_3Subq_activation_1/sub_3/x:output:0q_activation_1/truediv_2:z:0*
T0*
_output_shapes
: 
$q_activation_1/clip_by_value/MinimumMinimumq_activation_1/truediv_1:z:0q_activation_1/sub_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ c
q_activation_1/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    А
q_activation_1/clip_by_valueMaximum(q_activation_1/clip_by_value/Minimum:z:0'q_activation_1/clip_by_value/y:output:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation_1/mul_2Mulq_activation_1/Cast_1:y:0 q_activation_1/clip_by_value:z:0*
T0*+
_output_shapes
:џџџџџџџџџ s
q_activation_1/Neg_1Neg q_activation_1/SelectV2:output:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation_1/add_2AddV2q_activation_1/Neg_1:y:0q_activation_1/mul_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ [
q_activation_1/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
q_activation_1/mul_3Mulq_activation_1/mul_3/x:output:0q_activation_1/add_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ }
q_activation_1/StopGradient_1StopGradientq_activation_1/mul_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation_1/add_3AddV2 q_activation_1/SelectV2:output:0&q_activation_1/StopGradient_1:output:0*
T0*+
_output_shapes
:џџџџџџџџџ Q
q_dense_2/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :Q
q_dense_2/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : i
q_dense_2/PowPowq_dense_2/Pow/x:output:0q_dense_2/Pow/y:output:0*
T0*
_output_shapes
: Y
q_dense_2/CastCastq_dense_2/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: z
q_dense_2/ReadVariableOpReadVariableOp!q_dense_2_readvariableop_resource*
_output_shapes

:  *
dtype0T
q_dense_2/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Ay
q_dense_2/mulMul q_dense_2/ReadVariableOp:value:0q_dense_2/mul/y:output:0*
T0*
_output_shapes

:  l
q_dense_2/truedivRealDivq_dense_2/mul:z:0q_dense_2/Cast:y:0*
T0*
_output_shapes

:  T
q_dense_2/NegNegq_dense_2/truediv:z:0*
T0*
_output_shapes

:  X
q_dense_2/RoundRoundq_dense_2/truediv:z:0*
T0*
_output_shapes

:  g
q_dense_2/addAddV2q_dense_2/Neg:y:0q_dense_2/Round:y:0*
T0*
_output_shapes

:  b
q_dense_2/StopGradientStopGradientq_dense_2/add:z:0*
T0*
_output_shapes

:  y
q_dense_2/add_1AddV2q_dense_2/truediv:z:0q_dense_2/StopGradient:output:0*
T0*
_output_shapes

:  f
!q_dense_2/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pA
q_dense_2/clip_by_value/MinimumMinimumq_dense_2/add_1:z:0*q_dense_2/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  ^
q_dense_2/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  С
q_dense_2/clip_by_valueMaximum#q_dense_2/clip_by_value/Minimum:z:0"q_dense_2/clip_by_value/y:output:0*
T0*
_output_shapes

:  p
q_dense_2/mul_1Mulq_dense_2/Cast:y:0q_dense_2/clip_by_value:z:0*
T0*
_output_shapes

:  Z
q_dense_2/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A|
q_dense_2/truediv_1RealDivq_dense_2/mul_1:z:0q_dense_2/truediv_1/y:output:0*
T0*
_output_shapes

:  V
q_dense_2/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?t
q_dense_2/mul_2Mulq_dense_2/mul_2/x:output:0q_dense_2/truediv_1:z:0*
T0*
_output_shapes

:  |
q_dense_2/ReadVariableOp_1ReadVariableOp!q_dense_2_readvariableop_resource*
_output_shapes

:  *
dtype0c
q_dense_2/Neg_1Neg"q_dense_2/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  k
q_dense_2/add_2AddV2q_dense_2/Neg_1:y:0q_dense_2/mul_2:z:0*
T0*
_output_shapes

:  V
q_dense_2/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?p
q_dense_2/mul_3Mulq_dense_2/mul_3/x:output:0q_dense_2/add_2:z:0*
T0*
_output_shapes

:  f
q_dense_2/StopGradient_1StopGradientq_dense_2/mul_3:z:0*
T0*
_output_shapes

:  |
q_dense_2/ReadVariableOp_2ReadVariableOp!q_dense_2_readvariableop_resource*
_output_shapes

:  *
dtype0
q_dense_2/add_3AddV2"q_dense_2/ReadVariableOp_2:value:0!q_dense_2/StopGradient_1:output:0*
T0*
_output_shapes

:  W
q_dense_2/ShapeShapeq_activation_1/add_3:z:0*
T0*
_output_shapes
:e
q_dense_2/unstackUnpackq_dense_2/Shape:output:0*
T0*
_output_shapes
: : : *	
numb
q_dense_2/Shape_1Const*
_output_shapes
:*
dtype0*
valueB"        g
q_dense_2/unstack_1Unpackq_dense_2/Shape_1:output:0*
T0*
_output_shapes
: : *	
numh
q_dense_2/Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB"џџџџ    
q_dense_2/ReshapeReshapeq_activation_1/add_3:z:0 q_dense_2/Reshape/shape:output:0*
T0*'
_output_shapes
:џџџџџџџџџ i
q_dense_2/transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       
q_dense_2/transpose	Transposeq_dense_2/add_3:z:0!q_dense_2/transpose/perm:output:0*
T0*
_output_shapes

:  j
q_dense_2/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"    џџџџ
q_dense_2/Reshape_1Reshapeq_dense_2/transpose:y:0"q_dense_2/Reshape_1/shape:output:0*
T0*
_output_shapes

:  
q_dense_2/MatMulMatMulq_dense_2/Reshape:output:0q_dense_2/Reshape_1:output:0*
T0*'
_output_shapes
:џџџџџџџџџ ]
q_dense_2/Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :]
q_dense_2/Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : З
q_dense_2/Reshape_2/shapePackq_dense_2/unstack:output:0$q_dense_2/Reshape_2/shape/1:output:0$q_dense_2/Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:
q_dense_2/Reshape_2Reshapeq_dense_2/MatMul:product:0"q_dense_2/Reshape_2/shape:output:0*
T0*+
_output_shapes
:џџџџџџџџџ S
q_dense_2/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :S
q_dense_2/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : o
q_dense_2/Pow_1Powq_dense_2/Pow_1/x:output:0q_dense_2/Pow_1/y:output:0*
T0*
_output_shapes
: ]
q_dense_2/Cast_1Castq_dense_2/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: z
q_dense_2/ReadVariableOp_3ReadVariableOp#q_dense_2_readvariableop_3_resource*
_output_shapes
: *
dtype0V
q_dense_2/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A{
q_dense_2/mul_4Mul"q_dense_2/ReadVariableOp_3:value:0q_dense_2/mul_4/y:output:0*
T0*
_output_shapes
: n
q_dense_2/truediv_2RealDivq_dense_2/mul_4:z:0q_dense_2/Cast_1:y:0*
T0*
_output_shapes
: T
q_dense_2/Neg_2Negq_dense_2/truediv_2:z:0*
T0*
_output_shapes
: X
q_dense_2/Round_1Roundq_dense_2/truediv_2:z:0*
T0*
_output_shapes
: i
q_dense_2/add_4AddV2q_dense_2/Neg_2:y:0q_dense_2/Round_1:y:0*
T0*
_output_shapes
: b
q_dense_2/StopGradient_2StopGradientq_dense_2/add_4:z:0*
T0*
_output_shapes
: y
q_dense_2/add_5AddV2q_dense_2/truediv_2:z:0!q_dense_2/StopGradient_2:output:0*
T0*
_output_shapes
: h
#q_dense_2/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pA
!q_dense_2/clip_by_value_1/MinimumMinimumq_dense_2/add_5:z:0,q_dense_2/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: `
q_dense_2/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  С
q_dense_2/clip_by_value_1Maximum%q_dense_2/clip_by_value_1/Minimum:z:0$q_dense_2/clip_by_value_1/y:output:0*
T0*
_output_shapes
: p
q_dense_2/mul_5Mulq_dense_2/Cast_1:y:0q_dense_2/clip_by_value_1:z:0*
T0*
_output_shapes
: Z
q_dense_2/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Ax
q_dense_2/truediv_3RealDivq_dense_2/mul_5:z:0q_dense_2/truediv_3/y:output:0*
T0*
_output_shapes
: V
q_dense_2/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?p
q_dense_2/mul_6Mulq_dense_2/mul_6/x:output:0q_dense_2/truediv_3:z:0*
T0*
_output_shapes
: z
q_dense_2/ReadVariableOp_4ReadVariableOp#q_dense_2_readvariableop_3_resource*
_output_shapes
: *
dtype0_
q_dense_2/Neg_3Neg"q_dense_2/ReadVariableOp_4:value:0*
T0*
_output_shapes
: g
q_dense_2/add_6AddV2q_dense_2/Neg_3:y:0q_dense_2/mul_6:z:0*
T0*
_output_shapes
: V
q_dense_2/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?l
q_dense_2/mul_7Mulq_dense_2/mul_7/x:output:0q_dense_2/add_6:z:0*
T0*
_output_shapes
: b
q_dense_2/StopGradient_3StopGradientq_dense_2/mul_7:z:0*
T0*
_output_shapes
: z
q_dense_2/ReadVariableOp_5ReadVariableOp#q_dense_2_readvariableop_3_resource*
_output_shapes
: *
dtype0
q_dense_2/add_7AddV2"q_dense_2/ReadVariableOp_5:value:0!q_dense_2/StopGradient_3:output:0*
T0*
_output_shapes
: 
q_dense_2/BiasAddBiasAddq_dense_2/Reshape_2:output:0q_dense_2/add_7:z:0*
T0*+
_output_shapes
:џџџџџџџџџ V
q_activation_2/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :V
q_activation_2/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :x
q_activation_2/PowPowq_activation_2/Pow/x:output:0q_activation_2/Pow/y:output:0*
T0*
_output_shapes
: c
q_activation_2/CastCastq_activation_2/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: X
q_activation_2/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :X
q_activation_2/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : ~
q_activation_2/Pow_1Powq_activation_2/Pow_1/x:output:0q_activation_2/Pow_1/y:output:0*
T0*
_output_shapes
: g
q_activation_2/Cast_1Castq_activation_2/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: Y
q_activation_2/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *   @Y
q_activation_2/Cast_2/xConst*
_output_shapes
: *
dtype0*
value	B : o
q_activation_2/Cast_2Cast q_activation_2/Cast_2/x:output:0*

DstT0*

SrcT0*
_output_shapes
: Y
q_activation_2/sub/yConst*
_output_shapes
: *
dtype0*
valueB
 *   At
q_activation_2/subSubq_activation_2/Cast_2:y:0q_activation_2/sub/y:output:0*
T0*
_output_shapes
: s
q_activation_2/Pow_2Powq_activation_2/Const:output:0q_activation_2/sub:z:0*
T0*
_output_shapes
: q
q_activation_2/sub_1Subq_activation_2/Cast_1:y:0q_activation_2/Pow_2:z:0*
T0*
_output_shapes
: 
q_activation_2/LessEqual	LessEqualq_dense_2/BiasAdd:output:0q_activation_2/sub_1:z:0*
T0*+
_output_shapes
:џџџџџџџџџ m
q_activation_2/ReluReluq_dense_2/BiasAdd:output:0*
T0*+
_output_shapes
:џџџџџџџџџ h
q_activation_2/ones_like/ShapeShapeq_dense_2/BiasAdd:output:0*
T0*
_output_shapes
:c
q_activation_2/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  ?Ј
q_activation_2/ones_likeFill'q_activation_2/ones_like/Shape:output:0'q_activation_2/ones_like/Const:output:0*
T0*+
_output_shapes
:џџџџџџџџџ q
q_activation_2/sub_2Subq_activation_2/Cast_1:y:0q_activation_2/Pow_2:z:0*
T0*
_output_shapes
: 
q_activation_2/mulMul!q_activation_2/ones_like:output:0q_activation_2/sub_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ В
q_activation_2/SelectV2SelectV2q_activation_2/LessEqual:z:0!q_activation_2/Relu:activations:0q_activation_2/mul:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation_2/mul_1Mulq_dense_2/BiasAdd:output:0q_activation_2/Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation_2/truedivRealDivq_activation_2/mul_1:z:0q_activation_2/Cast_1:y:0*
T0*+
_output_shapes
:џџџџџџџџџ k
q_activation_2/NegNegq_activation_2/truediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ o
q_activation_2/RoundRoundq_activation_2/truediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation_2/addAddV2q_activation_2/Neg:y:0q_activation_2/Round:y:0*
T0*+
_output_shapes
:џџџџџџџџџ y
q_activation_2/StopGradientStopGradientq_activation_2/add:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation_2/add_1AddV2q_activation_2/truediv:z:0$q_activation_2/StopGradient:output:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation_2/truediv_1RealDivq_activation_2/add_1:z:0q_activation_2/Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ _
q_activation_2/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
q_activation_2/truediv_2RealDiv#q_activation_2/truediv_2/x:output:0q_activation_2/Cast:y:0*
T0*
_output_shapes
: [
q_activation_2/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?{
q_activation_2/sub_3Subq_activation_2/sub_3/x:output:0q_activation_2/truediv_2:z:0*
T0*
_output_shapes
: 
$q_activation_2/clip_by_value/MinimumMinimumq_activation_2/truediv_1:z:0q_activation_2/sub_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ c
q_activation_2/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    А
q_activation_2/clip_by_valueMaximum(q_activation_2/clip_by_value/Minimum:z:0'q_activation_2/clip_by_value/y:output:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation_2/mul_2Mulq_activation_2/Cast_1:y:0 q_activation_2/clip_by_value:z:0*
T0*+
_output_shapes
:џџџџџџџџџ s
q_activation_2/Neg_1Neg q_activation_2/SelectV2:output:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation_2/add_2AddV2q_activation_2/Neg_1:y:0q_activation_2/mul_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ [
q_activation_2/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
q_activation_2/mul_3Mulq_activation_2/mul_3/x:output:0q_activation_2/add_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ }
q_activation_2/StopGradient_1StopGradientq_activation_2/mul_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ 
q_activation_2/add_3AddV2 q_activation_2/SelectV2:output:0&q_activation_2/StopGradient_1:output:0*
T0*+
_output_shapes
:џџџџџџџџџ k
IdentityIdentityq_activation_2/add_3:z:0^NoOp*
T0*+
_output_shapes
:џџџџџџџџџ О
NoOpNoOp^q_dense/ReadVariableOp^q_dense/ReadVariableOp_1^q_dense/ReadVariableOp_2^q_dense/ReadVariableOp_3^q_dense/ReadVariableOp_4^q_dense/ReadVariableOp_5^q_dense_1/ReadVariableOp^q_dense_1/ReadVariableOp_1^q_dense_1/ReadVariableOp_2^q_dense_1/ReadVariableOp_3^q_dense_1/ReadVariableOp_4^q_dense_1/ReadVariableOp_5^q_dense_2/ReadVariableOp^q_dense_2/ReadVariableOp_1^q_dense_2/ReadVariableOp_2^q_dense_2/ReadVariableOp_3^q_dense_2/ReadVariableOp_4^q_dense_2/ReadVariableOp_5*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*6
_input_shapes%
#:џџџџџџџџџ: : : : : : 20
q_dense/ReadVariableOpq_dense/ReadVariableOp24
q_dense/ReadVariableOp_1q_dense/ReadVariableOp_124
q_dense/ReadVariableOp_2q_dense/ReadVariableOp_224
q_dense/ReadVariableOp_3q_dense/ReadVariableOp_324
q_dense/ReadVariableOp_4q_dense/ReadVariableOp_424
q_dense/ReadVariableOp_5q_dense/ReadVariableOp_524
q_dense_1/ReadVariableOpq_dense_1/ReadVariableOp28
q_dense_1/ReadVariableOp_1q_dense_1/ReadVariableOp_128
q_dense_1/ReadVariableOp_2q_dense_1/ReadVariableOp_228
q_dense_1/ReadVariableOp_3q_dense_1/ReadVariableOp_328
q_dense_1/ReadVariableOp_4q_dense_1/ReadVariableOp_428
q_dense_1/ReadVariableOp_5q_dense_1/ReadVariableOp_524
q_dense_2/ReadVariableOpq_dense_2/ReadVariableOp28
q_dense_2/ReadVariableOp_1q_dense_2/ReadVariableOp_128
q_dense_2/ReadVariableOp_2q_dense_2/ReadVariableOp_228
q_dense_2/ReadVariableOp_3q_dense_2/ReadVariableOp_328
q_dense_2/ReadVariableOp_4q_dense_2/ReadVariableOp_428
q_dense_2/ReadVariableOp_5q_dense_2/ReadVariableOp_5:S O
+
_output_shapes
:џџџџџџџџџ
 
_user_specified_nameinputs
н!
f
J__inference_q_activation_1_layer_call_and_return_conditional_losses_461591

inputs
identityG
Pow/xConst*
_output_shapes
: *
dtype0*
value	B :G
Pow/yConst*
_output_shapes
: *
dtype0*
value	B :K
PowPowPow/x:output:0Pow/y:output:0*
T0*
_output_shapes
: E
CastCastPow:z:0*

DstT0*

SrcT0*
_output_shapes
: I
Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :I
Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Q
Pow_1PowPow_1/x:output:0Pow_1/y:output:0*
T0*
_output_shapes
: I
Cast_1Cast	Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: J
ConstConst*
_output_shapes
: *
dtype0*
valueB
 *   @J
Cast_2/xConst*
_output_shapes
: *
dtype0*
value	B : Q
Cast_2CastCast_2/x:output:0*

DstT0*

SrcT0*
_output_shapes
: J
sub/yConst*
_output_shapes
: *
dtype0*
valueB
 *   AG
subSub
Cast_2:y:0sub/y:output:0*
T0*
_output_shapes
: F
Pow_2PowConst:output:0sub:z:0*
T0*
_output_shapes
: D
sub_1Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: _
	LessEqual	LessEqualinputs	sub_1:z:0*
T0*+
_output_shapes
:џџџџџџџџџ J
ReluReluinputs*
T0*+
_output_shapes
:џџџџџџџџџ E
ones_like/ShapeShapeinputs*
T0*
_output_shapes
:T
ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  ?{
	ones_likeFillones_like/Shape:output:0ones_like/Const:output:0*
T0*+
_output_shapes
:џџџџџџџџџ D
sub_2Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: _
mulMulones_like:output:0	sub_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ v
SelectV2SelectV2LessEqual:z:0Relu:activations:0mul:z:0*
T0*+
_output_shapes
:џџџџџџџџџ T
mul_1MulinputsCast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ _
truedivRealDiv	mul_1:z:0
Cast_1:y:0*
T0*+
_output_shapes
:џџџџџџџџџ M
NegNegtruediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ Q
RoundRoundtruediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ V
addAddV2Neg:y:0	Round:y:0*
T0*+
_output_shapes
:џџџџџџџџџ [
StopGradientStopGradientadd:z:0*
T0*+
_output_shapes
:џџџџџџџџџ h
add_1AddV2truediv:z:0StopGradient:output:0*
T0*+
_output_shapes
:џџџџџџџџџ _
	truediv_1RealDiv	add_1:z:0Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ P
truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?U
	truediv_2RealDivtruediv_2/x:output:0Cast:y:0*
T0*
_output_shapes
: L
sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?N
sub_3Subsub_3/x:output:0truediv_2:z:0*
T0*
_output_shapes
: p
clip_by_value/MinimumMinimumtruediv_1:z:0	sub_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*+
_output_shapes
:џџџџџџџџџ a
mul_2Mul
Cast_1:y:0clip_by_value:z:0*
T0*+
_output_shapes
:џџџџџџџџџ U
Neg_1NegSelectV2:output:0*
T0*+
_output_shapes
:џџџџџџџџџ Z
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?_
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ _
StopGradient_1StopGradient	mul_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ p
add_3AddV2SelectV2:output:0StopGradient_1:output:0*
T0*+
_output_shapes
:џџџџџџџџџ U
IdentityIdentity	add_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:џџџџџџџџџ :S O
+
_output_shapes
:џџџџџџџџџ 
 
_user_specified_nameinputs
Щ

*__inference_q_dense_4_layer_call_fn_461879

inputs
unknown: 
	unknown_0:
identityЂStatefulPartitionedCallп
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:џџџџџџџџџ*$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8 *N
fIRG
E__inference_q_dense_4_layer_call_and_return_conditional_losses_458532o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:џџџџџџџџџ`
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:џџџџџџџџџ : : 22
StatefulPartitionedCallStatefulPartitionedCall:O K
'
_output_shapes
:џџџџџџџџџ 
 
_user_specified_nameinputs
Ф
Р
H__inference_sequential_1_layer_call_and_return_conditional_losses_458660
q_dense_3_input"
q_dense_3_458648:  
q_dense_3_458650: "
q_dense_4_458654: 
q_dense_4_458656:
identityЂ!q_dense_3/StatefulPartitionedCallЂ!q_dense_4/StatefulPartitionedCall
!q_dense_3/StatefulPartitionedCallStatefulPartitionedCallq_dense_3_inputq_dense_3_458648q_dense_3_458650*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:џџџџџџџџџ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8 *N
fIRG
E__inference_q_dense_3_layer_call_and_return_conditional_losses_458407э
q_activation_3/PartitionedCallPartitionedCall*q_dense_3/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:џџџџџџџџџ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8 *S
fNRL
J__inference_q_activation_3_layer_call_and_return_conditional_losses_458462
!q_dense_4/StatefulPartitionedCallStatefulPartitionedCall'q_activation_3/PartitionedCall:output:0q_dense_4_458654q_dense_4_458656*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:џџџџџџџџџ*$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8 *N
fIRG
E__inference_q_dense_4_layer_call_and_return_conditional_losses_458532y
IdentityIdentity*q_dense_4/StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:џџџџџџџџџ
NoOpNoOp"^q_dense_3/StatefulPartitionedCall"^q_dense_4/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:џџџџџџџџџ : : : : 2F
!q_dense_3/StatefulPartitionedCall!q_dense_3/StatefulPartitionedCall2F
!q_dense_4/StatefulPartitionedCall!q_dense_4/StatefulPartitionedCall:X T
'
_output_shapes
:џџџџџџџџџ 
)
_user_specified_nameq_dense_3_input
ћ1
Ј
E__inference_q_dense_4_layer_call_and_return_conditional_losses_461947

inputs)
readvariableop_resource: '
readvariableop_3_resource:
identityЂReadVariableOpЂReadVariableOp_1ЂReadVariableOp_2ЂReadVariableOp_3ЂReadVariableOp_4ЂReadVariableOp_5G
Pow/xConst*
_output_shapes
: *
dtype0*
value	B :G
Pow/yConst*
_output_shapes
: *
dtype0*
value	B : K
PowPowPow/x:output:0Pow/y:output:0*
T0*
_output_shapes
: E
CastCastPow:z:0*

DstT0*

SrcT0*
_output_shapes
: f
ReadVariableOpReadVariableOpreadvariableop_resource*
_output_shapes

: *
dtype0J
mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A[
mulMulReadVariableOp:value:0mul/y:output:0*
T0*
_output_shapes

: N
truedivRealDivmul:z:0Cast:y:0*
T0*
_output_shapes

: @
NegNegtruediv:z:0*
T0*
_output_shapes

: D
RoundRoundtruediv:z:0*
T0*
_output_shapes

: I
addAddV2Neg:y:0	Round:y:0*
T0*
_output_shapes

: N
StopGradientStopGradientadd:z:0*
T0*
_output_shapes

: [
add_1AddV2truediv:z:0StopGradient:output:0*
T0*
_output_shapes

: \
clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Сv
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*
_output_shapes

: R
mul_1MulCast:y:0clip_by_value:z:0*
T0*
_output_shapes

: P
truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A^
	truediv_1RealDiv	mul_1:z:0truediv_1/y:output:0*
T0*
_output_shapes

: L
mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?V
mul_2Mulmul_2/x:output:0truediv_1:z:0*
T0*
_output_shapes

: h
ReadVariableOp_1ReadVariableOpreadvariableop_resource*
_output_shapes

: *
dtype0O
Neg_1NegReadVariableOp_1:value:0*
T0*
_output_shapes

: M
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*
_output_shapes

: L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?R
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*
_output_shapes

: R
StopGradient_1StopGradient	mul_3:z:0*
T0*
_output_shapes

: h
ReadVariableOp_2ReadVariableOpreadvariableop_resource*
_output_shapes

: *
dtype0j
add_3AddV2ReadVariableOp_2:value:0StopGradient_1:output:0*
T0*
_output_shapes

: U
MatMulMatMulinputs	add_3:z:0*
T0*'
_output_shapes
:џџџџџџџџџI
Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :I
Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Q
Pow_1PowPow_1/x:output:0Pow_1/y:output:0*
T0*
_output_shapes
: I
Cast_1Cast	Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: f
ReadVariableOp_3ReadVariableOpreadvariableop_3_resource*
_output_shapes
:*
dtype0L
mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A]
mul_4MulReadVariableOp_3:value:0mul_4/y:output:0*
T0*
_output_shapes
:P
	truediv_2RealDiv	mul_4:z:0
Cast_1:y:0*
T0*
_output_shapes
:@
Neg_2Negtruediv_2:z:0*
T0*
_output_shapes
:D
Round_1Roundtruediv_2:z:0*
T0*
_output_shapes
:K
add_4AddV2	Neg_2:y:0Round_1:y:0*
T0*
_output_shapes
:N
StopGradient_2StopGradient	add_4:z:0*
T0*
_output_shapes
:[
add_5AddV2truediv_2:z:0StopGradient_2:output:0*
T0*
_output_shapes
:^
clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
:V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Сx
clip_by_value_1Maximumclip_by_value_1/Minimum:z:0clip_by_value_1/y:output:0*
T0*
_output_shapes
:R
mul_5Mul
Cast_1:y:0clip_by_value_1:z:0*
T0*
_output_shapes
:P
truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  AZ
	truediv_3RealDiv	mul_5:z:0truediv_3/y:output:0*
T0*
_output_shapes
:L
mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?R
mul_6Mulmul_6/x:output:0truediv_3:z:0*
T0*
_output_shapes
:f
ReadVariableOp_4ReadVariableOpreadvariableop_3_resource*
_output_shapes
:*
dtype0K
Neg_3NegReadVariableOp_4:value:0*
T0*
_output_shapes
:I
add_6AddV2	Neg_3:y:0	mul_6:z:0*
T0*
_output_shapes
:L
mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?N
mul_7Mulmul_7/x:output:0	add_6:z:0*
T0*
_output_shapes
:N
StopGradient_3StopGradient	mul_7:z:0*
T0*
_output_shapes
:f
ReadVariableOp_5ReadVariableOpreadvariableop_3_resource*
_output_shapes
:*
dtype0f
add_7AddV2ReadVariableOp_5:value:0StopGradient_3:output:0*
T0*
_output_shapes
:a
BiasAddBiasAddMatMul:product:0	add_7:z:0*
T0*'
_output_shapes
:џџџџџџџџџ_
IdentityIdentityBiasAdd:output:0^NoOp*
T0*'
_output_shapes
:џџџџџџџџџЖ
NoOpNoOp^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:џџџџџџџџџ : : 2 
ReadVariableOpReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_5:O K
'
_output_shapes
:џџџџџџџџџ 
 
_user_specified_nameinputs
О
K
/__inference_q_activation_2_layer_call_fn_461690

inputs
identityО
PartitionedCallPartitionedCallinputs*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8 *S
fNRL
J__inference_q_activation_2_layer_call_and_return_conditional_losses_458149d
IdentityIdentityPartitionedCall:output:0*
T0*+
_output_shapes
:џџџџџџџџџ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:џџџџџџџџџ :S O
+
_output_shapes
:џџџџџџџџџ 
 
_user_specified_nameinputs
ч<
І
C__inference_q_dense_layer_call_and_return_conditional_losses_461389

inputs)
readvariableop_resource: '
readvariableop_3_resource: 
identityЂReadVariableOpЂReadVariableOp_1ЂReadVariableOp_2ЂReadVariableOp_3ЂReadVariableOp_4ЂReadVariableOp_5G
Pow/xConst*
_output_shapes
: *
dtype0*
value	B :G
Pow/yConst*
_output_shapes
: *
dtype0*
value	B : K
PowPowPow/x:output:0Pow/y:output:0*
T0*
_output_shapes
: E
CastCastPow:z:0*

DstT0*

SrcT0*
_output_shapes
: f
ReadVariableOpReadVariableOpreadvariableop_resource*
_output_shapes

: *
dtype0J
mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A[
mulMulReadVariableOp:value:0mul/y:output:0*
T0*
_output_shapes

: N
truedivRealDivmul:z:0Cast:y:0*
T0*
_output_shapes

: @
NegNegtruediv:z:0*
T0*
_output_shapes

: D
RoundRoundtruediv:z:0*
T0*
_output_shapes

: I
addAddV2Neg:y:0	Round:y:0*
T0*
_output_shapes

: N
StopGradientStopGradientadd:z:0*
T0*
_output_shapes

: [
add_1AddV2truediv:z:0StopGradient:output:0*
T0*
_output_shapes

: \
clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Сv
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*
_output_shapes

: R
mul_1MulCast:y:0clip_by_value:z:0*
T0*
_output_shapes

: P
truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A^
	truediv_1RealDiv	mul_1:z:0truediv_1/y:output:0*
T0*
_output_shapes

: L
mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?V
mul_2Mulmul_2/x:output:0truediv_1:z:0*
T0*
_output_shapes

: h
ReadVariableOp_1ReadVariableOpreadvariableop_resource*
_output_shapes

: *
dtype0O
Neg_1NegReadVariableOp_1:value:0*
T0*
_output_shapes

: M
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*
_output_shapes

: L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?R
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*
_output_shapes

: R
StopGradient_1StopGradient	mul_3:z:0*
T0*
_output_shapes

: h
ReadVariableOp_2ReadVariableOpreadvariableop_resource*
_output_shapes

: *
dtype0j
add_3AddV2ReadVariableOp_2:value:0StopGradient_1:output:0*
T0*
_output_shapes

: ;
ShapeShapeinputs*
T0*
_output_shapes
:Q
unstackUnpackShape:output:0*
T0*
_output_shapes
: : : *	
numX
Shape_1Const*
_output_shapes
:*
dtype0*
valueB"       S
	unstack_1UnpackShape_1:output:0*
T0*
_output_shapes
: : *	
num^
Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB"џџџџ   d
ReshapeReshapeinputsReshape/shape:output:0*
T0*'
_output_shapes
:џџџџџџџџџ_
transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       c
	transpose	Transpose	add_3:z:0transpose/perm:output:0*
T0*
_output_shapes

: `
Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"   џџџџf
	Reshape_1Reshapetranspose:y:0Reshape_1/shape:output:0*
T0*
_output_shapes

: h
MatMulMatMulReshape:output:0Reshape_1:output:0*
T0*'
_output_shapes
:џџџџџџџџџ S
Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :S
Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : 
Reshape_2/shapePackunstack:output:0Reshape_2/shape/1:output:0Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:v
	Reshape_2ReshapeMatMul:product:0Reshape_2/shape:output:0*
T0*+
_output_shapes
:џџџџџџџџџ I
Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :I
Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Q
Pow_1PowPow_1/x:output:0Pow_1/y:output:0*
T0*
_output_shapes
: I
Cast_1Cast	Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: f
ReadVariableOp_3ReadVariableOpreadvariableop_3_resource*
_output_shapes
: *
dtype0L
mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A]
mul_4MulReadVariableOp_3:value:0mul_4/y:output:0*
T0*
_output_shapes
: P
	truediv_2RealDiv	mul_4:z:0
Cast_1:y:0*
T0*
_output_shapes
: @
Neg_2Negtruediv_2:z:0*
T0*
_output_shapes
: D
Round_1Roundtruediv_2:z:0*
T0*
_output_shapes
: K
add_4AddV2	Neg_2:y:0Round_1:y:0*
T0*
_output_shapes
: N
StopGradient_2StopGradient	add_4:z:0*
T0*
_output_shapes
: [
add_5AddV2truediv_2:z:0StopGradient_2:output:0*
T0*
_output_shapes
: ^
clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pAv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Сx
clip_by_value_1Maximumclip_by_value_1/Minimum:z:0clip_by_value_1/y:output:0*
T0*
_output_shapes
: R
mul_5Mul
Cast_1:y:0clip_by_value_1:z:0*
T0*
_output_shapes
: P
truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  AZ
	truediv_3RealDiv	mul_5:z:0truediv_3/y:output:0*
T0*
_output_shapes
: L
mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?R
mul_6Mulmul_6/x:output:0truediv_3:z:0*
T0*
_output_shapes
: f
ReadVariableOp_4ReadVariableOpreadvariableop_3_resource*
_output_shapes
: *
dtype0K
Neg_3NegReadVariableOp_4:value:0*
T0*
_output_shapes
: I
add_6AddV2	Neg_3:y:0	mul_6:z:0*
T0*
_output_shapes
: L
mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?N
mul_7Mulmul_7/x:output:0	add_6:z:0*
T0*
_output_shapes
: N
StopGradient_3StopGradient	mul_7:z:0*
T0*
_output_shapes
: f
ReadVariableOp_5ReadVariableOpreadvariableop_3_resource*
_output_shapes
: *
dtype0f
add_7AddV2ReadVariableOp_5:value:0StopGradient_3:output:0*
T0*
_output_shapes
: g
BiasAddBiasAddReshape_2:output:0	add_7:z:0*
T0*+
_output_shapes
:џџџџџџџџџ c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:џџџџџџџџџ Ж
NoOpNoOp^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:џџџџџџџџџ: : 2 
ReadVariableOpReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_5:S O
+
_output_shapes
:џџџџџџџџџ
 
_user_specified_nameinputs
О
й
-__inference_sequential_1_layer_call_fn_458550
q_dense_3_input
unknown:  
	unknown_0: 
	unknown_1: 
	unknown_2:
identityЂStatefulPartitionedCall
StatefulPartitionedCallStatefulPartitionedCallq_dense_3_inputunknown	unknown_0	unknown_1	unknown_2*
Tin	
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:џџџџџџџџџ*&
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8 *Q
fLRJ
H__inference_sequential_1_layer_call_and_return_conditional_losses_458539o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:џџџџџџџџџ`
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:џџџџџџџџџ : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:X T
'
_output_shapes
:џџџџџџџџџ 
)
_user_specified_nameq_dense_3_input
О
K
/__inference_q_activation_1_layer_call_fn_461542

inputs
identityО
PartitionedCallPartitionedCallinputs*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8 *S
fNRL
J__inference_q_activation_1_layer_call_and_return_conditional_losses_458007d
IdentityIdentityPartitionedCall:output:0*
T0*+
_output_shapes
:џџџџџџџџџ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:џџџџџџџџџ :S O
+
_output_shapes
:џџџџџџџџџ 
 
_user_specified_nameinputs
И
O
#__inference__update_step_xla_460072
gradient
variable: *
_XlaMustCompile(*(
_construction_contextkEagerRuntime*
_input_shapes
: : *
	_noinline(:H D

_output_shapes

: 
"
_user_specified_name
gradient:($
"
_user_specified_name
variable
Ѓ
а
-__inference_sequential_1_layer_call_fn_460928

inputs
unknown:  
	unknown_0: 
	unknown_1: 
	unknown_2:
identityЂStatefulPartitionedCallќ
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0	unknown_1	unknown_2*
Tin	
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:џџџџџџџџџ*&
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8 *Q
fLRJ
H__inference_sequential_1_layer_call_and_return_conditional_losses_458539o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:џџџџџџџџџ`
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:џџџџџџџџџ : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:O K
'
_output_shapes
:џџџџџџџџџ 
 
_user_specified_nameinputs
н!
f
J__inference_q_activation_2_layer_call_and_return_conditional_losses_461739

inputs
identityG
Pow/xConst*
_output_shapes
: *
dtype0*
value	B :G
Pow/yConst*
_output_shapes
: *
dtype0*
value	B :K
PowPowPow/x:output:0Pow/y:output:0*
T0*
_output_shapes
: E
CastCastPow:z:0*

DstT0*

SrcT0*
_output_shapes
: I
Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :I
Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Q
Pow_1PowPow_1/x:output:0Pow_1/y:output:0*
T0*
_output_shapes
: I
Cast_1Cast	Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: J
ConstConst*
_output_shapes
: *
dtype0*
valueB
 *   @J
Cast_2/xConst*
_output_shapes
: *
dtype0*
value	B : Q
Cast_2CastCast_2/x:output:0*

DstT0*

SrcT0*
_output_shapes
: J
sub/yConst*
_output_shapes
: *
dtype0*
valueB
 *   AG
subSub
Cast_2:y:0sub/y:output:0*
T0*
_output_shapes
: F
Pow_2PowConst:output:0sub:z:0*
T0*
_output_shapes
: D
sub_1Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: _
	LessEqual	LessEqualinputs	sub_1:z:0*
T0*+
_output_shapes
:џџџџџџџџџ J
ReluReluinputs*
T0*+
_output_shapes
:џџџџџџџџџ E
ones_like/ShapeShapeinputs*
T0*
_output_shapes
:T
ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  ?{
	ones_likeFillones_like/Shape:output:0ones_like/Const:output:0*
T0*+
_output_shapes
:џџџџџџџџџ D
sub_2Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: _
mulMulones_like:output:0	sub_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ v
SelectV2SelectV2LessEqual:z:0Relu:activations:0mul:z:0*
T0*+
_output_shapes
:џџџџџџџџџ T
mul_1MulinputsCast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ _
truedivRealDiv	mul_1:z:0
Cast_1:y:0*
T0*+
_output_shapes
:џџџџџџџџџ M
NegNegtruediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ Q
RoundRoundtruediv:z:0*
T0*+
_output_shapes
:џџџџџџџџџ V
addAddV2Neg:y:0	Round:y:0*
T0*+
_output_shapes
:џџџџџџџџџ [
StopGradientStopGradientadd:z:0*
T0*+
_output_shapes
:џџџџџџџџџ h
add_1AddV2truediv:z:0StopGradient:output:0*
T0*+
_output_shapes
:џџџџџџџџџ _
	truediv_1RealDiv	add_1:z:0Cast:y:0*
T0*+
_output_shapes
:џџџџџџџџџ P
truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?U
	truediv_2RealDivtruediv_2/x:output:0Cast:y:0*
T0*
_output_shapes
: L
sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?N
sub_3Subsub_3/x:output:0truediv_2:z:0*
T0*
_output_shapes
: p
clip_by_value/MinimumMinimumtruediv_1:z:0	sub_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*+
_output_shapes
:џџџџџџџџџ a
mul_2Mul
Cast_1:y:0clip_by_value:z:0*
T0*+
_output_shapes
:џџџџџџџџџ U
Neg_1NegSelectV2:output:0*
T0*+
_output_shapes
:џџџџџџџџџ Z
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?_
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*+
_output_shapes
:џџџџџџџџџ _
StopGradient_1StopGradient	mul_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ p
add_3AddV2SelectV2:output:0StopGradient_1:output:0*
T0*+
_output_shapes
:џџџџџџџџџ U
IdentityIdentity	add_3:z:0*
T0*+
_output_shapes
:џџџџџџџџџ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:џџџџџџџџџ :S O
+
_output_shapes
:џџџџџџџџџ 
 
_user_specified_nameinputs
К
I
-__inference_q_activation_layer_call_fn_461394

inputs
identityМ
PartitionedCallPartitionedCallinputs*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8 *Q
fLRJ
H__inference_q_activation_layer_call_and_return_conditional_losses_457865d
IdentityIdentityPartitionedCall:output:0*
T0*+
_output_shapes
:џџџџџџџџџ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:џџџџџџџџџ :S O
+
_output_shapes
:џџџџџџџџџ 
 
_user_specified_nameinputs
Ћ
Ё
P__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_458692

inputs#
sequential_458667: 
sequential_458669: #
sequential_458671:  
sequential_458673: #
sequential_458675:  
sequential_458677: %
sequential_1_458682:  !
sequential_1_458684: %
sequential_1_458686: !
sequential_1_458688:
identityЂ"sequential/StatefulPartitionedCallЂ$sequential_1/StatefulPartitionedCallе
"sequential/StatefulPartitionedCallStatefulPartitionedCallinputssequential_458667sequential_458669sequential_458671sequential_458673sequential_458675sequential_458677*
Tin
	2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:џџџџџџџџџ *(
_read_only_resource_inputs

*2
config_proto" 

CPU

GPU2 *0J 8 *O
fJRH
F__inference_sequential_layer_call_and_return_conditional_losses_458152X
Mean/reduction_indicesConst*
_output_shapes
: *
dtype0*
value	B :
MeanMean+sequential/StatefulPartitionedCall:output:0Mean/reduction_indices:output:0*
T0*'
_output_shapes
:џџџџџџџџџ К
$sequential_1/StatefulPartitionedCallStatefulPartitionedCallMean:output:0sequential_1_458682sequential_1_458684sequential_1_458686sequential_1_458688*
Tin	
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:џџџџџџџџџ*&
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8 *Q
fLRJ
H__inference_sequential_1_layer_call_and_return_conditional_losses_458539|
IdentityIdentity-sequential_1/StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:џџџџџџџџџ
NoOpNoOp#^sequential/StatefulPartitionedCall%^sequential_1/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:џџџџџџџџџ: : : : : : : : : : 2H
"sequential/StatefulPartitionedCall"sequential/StatefulPartitionedCall2L
$sequential_1/StatefulPartitionedCall$sequential_1/StatefulPartitionedCall:S O
+
_output_shapes
:џџџџџџџџџ
 
_user_specified_nameinputs
ўЃ

H__inference_sequential_1_layer_call_and_return_conditional_losses_461118

inputs3
!q_dense_3_readvariableop_resource:  1
#q_dense_3_readvariableop_3_resource: 3
!q_dense_4_readvariableop_resource: 1
#q_dense_4_readvariableop_3_resource:
identityЂq_dense_3/ReadVariableOpЂq_dense_3/ReadVariableOp_1Ђq_dense_3/ReadVariableOp_2Ђq_dense_3/ReadVariableOp_3Ђq_dense_3/ReadVariableOp_4Ђq_dense_3/ReadVariableOp_5Ђq_dense_4/ReadVariableOpЂq_dense_4/ReadVariableOp_1Ђq_dense_4/ReadVariableOp_2Ђq_dense_4/ReadVariableOp_3Ђq_dense_4/ReadVariableOp_4Ђq_dense_4/ReadVariableOp_5Q
q_dense_3/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :Q
q_dense_3/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : i
q_dense_3/PowPowq_dense_3/Pow/x:output:0q_dense_3/Pow/y:output:0*
T0*
_output_shapes
: Y
q_dense_3/CastCastq_dense_3/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: z
q_dense_3/ReadVariableOpReadVariableOp!q_dense_3_readvariableop_resource*
_output_shapes

:  *
dtype0T
q_dense_3/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Ay
q_dense_3/mulMul q_dense_3/ReadVariableOp:value:0q_dense_3/mul/y:output:0*
T0*
_output_shapes

:  l
q_dense_3/truedivRealDivq_dense_3/mul:z:0q_dense_3/Cast:y:0*
T0*
_output_shapes

:  T
q_dense_3/NegNegq_dense_3/truediv:z:0*
T0*
_output_shapes

:  X
q_dense_3/RoundRoundq_dense_3/truediv:z:0*
T0*
_output_shapes

:  g
q_dense_3/addAddV2q_dense_3/Neg:y:0q_dense_3/Round:y:0*
T0*
_output_shapes

:  b
q_dense_3/StopGradientStopGradientq_dense_3/add:z:0*
T0*
_output_shapes

:  y
q_dense_3/add_1AddV2q_dense_3/truediv:z:0q_dense_3/StopGradient:output:0*
T0*
_output_shapes

:  f
!q_dense_3/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pA
q_dense_3/clip_by_value/MinimumMinimumq_dense_3/add_1:z:0*q_dense_3/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  ^
q_dense_3/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  С
q_dense_3/clip_by_valueMaximum#q_dense_3/clip_by_value/Minimum:z:0"q_dense_3/clip_by_value/y:output:0*
T0*
_output_shapes

:  p
q_dense_3/mul_1Mulq_dense_3/Cast:y:0q_dense_3/clip_by_value:z:0*
T0*
_output_shapes

:  Z
q_dense_3/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A|
q_dense_3/truediv_1RealDivq_dense_3/mul_1:z:0q_dense_3/truediv_1/y:output:0*
T0*
_output_shapes

:  V
q_dense_3/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?t
q_dense_3/mul_2Mulq_dense_3/mul_2/x:output:0q_dense_3/truediv_1:z:0*
T0*
_output_shapes

:  |
q_dense_3/ReadVariableOp_1ReadVariableOp!q_dense_3_readvariableop_resource*
_output_shapes

:  *
dtype0c
q_dense_3/Neg_1Neg"q_dense_3/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  k
q_dense_3/add_2AddV2q_dense_3/Neg_1:y:0q_dense_3/mul_2:z:0*
T0*
_output_shapes

:  V
q_dense_3/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?p
q_dense_3/mul_3Mulq_dense_3/mul_3/x:output:0q_dense_3/add_2:z:0*
T0*
_output_shapes

:  f
q_dense_3/StopGradient_1StopGradientq_dense_3/mul_3:z:0*
T0*
_output_shapes

:  |
q_dense_3/ReadVariableOp_2ReadVariableOp!q_dense_3_readvariableop_resource*
_output_shapes

:  *
dtype0
q_dense_3/add_3AddV2"q_dense_3/ReadVariableOp_2:value:0!q_dense_3/StopGradient_1:output:0*
T0*
_output_shapes

:  i
q_dense_3/MatMulMatMulinputsq_dense_3/add_3:z:0*
T0*'
_output_shapes
:џџџџџџџџџ S
q_dense_3/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :S
q_dense_3/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : o
q_dense_3/Pow_1Powq_dense_3/Pow_1/x:output:0q_dense_3/Pow_1/y:output:0*
T0*
_output_shapes
: ]
q_dense_3/Cast_1Castq_dense_3/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: z
q_dense_3/ReadVariableOp_3ReadVariableOp#q_dense_3_readvariableop_3_resource*
_output_shapes
: *
dtype0V
q_dense_3/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A{
q_dense_3/mul_4Mul"q_dense_3/ReadVariableOp_3:value:0q_dense_3/mul_4/y:output:0*
T0*
_output_shapes
: n
q_dense_3/truediv_2RealDivq_dense_3/mul_4:z:0q_dense_3/Cast_1:y:0*
T0*
_output_shapes
: T
q_dense_3/Neg_2Negq_dense_3/truediv_2:z:0*
T0*
_output_shapes
: X
q_dense_3/Round_1Roundq_dense_3/truediv_2:z:0*
T0*
_output_shapes
: i
q_dense_3/add_4AddV2q_dense_3/Neg_2:y:0q_dense_3/Round_1:y:0*
T0*
_output_shapes
: b
q_dense_3/StopGradient_2StopGradientq_dense_3/add_4:z:0*
T0*
_output_shapes
: y
q_dense_3/add_5AddV2q_dense_3/truediv_2:z:0!q_dense_3/StopGradient_2:output:0*
T0*
_output_shapes
: h
#q_dense_3/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pA
!q_dense_3/clip_by_value_1/MinimumMinimumq_dense_3/add_5:z:0,q_dense_3/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: `
q_dense_3/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  С
q_dense_3/clip_by_value_1Maximum%q_dense_3/clip_by_value_1/Minimum:z:0$q_dense_3/clip_by_value_1/y:output:0*
T0*
_output_shapes
: p
q_dense_3/mul_5Mulq_dense_3/Cast_1:y:0q_dense_3/clip_by_value_1:z:0*
T0*
_output_shapes
: Z
q_dense_3/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Ax
q_dense_3/truediv_3RealDivq_dense_3/mul_5:z:0q_dense_3/truediv_3/y:output:0*
T0*
_output_shapes
: V
q_dense_3/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?p
q_dense_3/mul_6Mulq_dense_3/mul_6/x:output:0q_dense_3/truediv_3:z:0*
T0*
_output_shapes
: z
q_dense_3/ReadVariableOp_4ReadVariableOp#q_dense_3_readvariableop_3_resource*
_output_shapes
: *
dtype0_
q_dense_3/Neg_3Neg"q_dense_3/ReadVariableOp_4:value:0*
T0*
_output_shapes
: g
q_dense_3/add_6AddV2q_dense_3/Neg_3:y:0q_dense_3/mul_6:z:0*
T0*
_output_shapes
: V
q_dense_3/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?l
q_dense_3/mul_7Mulq_dense_3/mul_7/x:output:0q_dense_3/add_6:z:0*
T0*
_output_shapes
: b
q_dense_3/StopGradient_3StopGradientq_dense_3/mul_7:z:0*
T0*
_output_shapes
: z
q_dense_3/ReadVariableOp_5ReadVariableOp#q_dense_3_readvariableop_3_resource*
_output_shapes
: *
dtype0
q_dense_3/add_7AddV2"q_dense_3/ReadVariableOp_5:value:0!q_dense_3/StopGradient_3:output:0*
T0*
_output_shapes
: 
q_dense_3/BiasAddBiasAddq_dense_3/MatMul:product:0q_dense_3/add_7:z:0*
T0*'
_output_shapes
:џџџџџџџџџ V
q_activation_3/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :V
q_activation_3/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :x
q_activation_3/PowPowq_activation_3/Pow/x:output:0q_activation_3/Pow/y:output:0*
T0*
_output_shapes
: c
q_activation_3/CastCastq_activation_3/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: X
q_activation_3/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :X
q_activation_3/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : ~
q_activation_3/Pow_1Powq_activation_3/Pow_1/x:output:0q_activation_3/Pow_1/y:output:0*
T0*
_output_shapes
: g
q_activation_3/Cast_1Castq_activation_3/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: Y
q_activation_3/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *   @Y
q_activation_3/Cast_2/xConst*
_output_shapes
: *
dtype0*
value	B : o
q_activation_3/Cast_2Cast q_activation_3/Cast_2/x:output:0*

DstT0*

SrcT0*
_output_shapes
: Y
q_activation_3/sub/yConst*
_output_shapes
: *
dtype0*
valueB
 *   At
q_activation_3/subSubq_activation_3/Cast_2:y:0q_activation_3/sub/y:output:0*
T0*
_output_shapes
: s
q_activation_3/Pow_2Powq_activation_3/Const:output:0q_activation_3/sub:z:0*
T0*
_output_shapes
: q
q_activation_3/sub_1Subq_activation_3/Cast_1:y:0q_activation_3/Pow_2:z:0*
T0*
_output_shapes
: 
q_activation_3/LessEqual	LessEqualq_dense_3/BiasAdd:output:0q_activation_3/sub_1:z:0*
T0*'
_output_shapes
:џџџџџџџџџ i
q_activation_3/ReluReluq_dense_3/BiasAdd:output:0*
T0*'
_output_shapes
:џџџџџџџџџ h
q_activation_3/ones_like/ShapeShapeq_dense_3/BiasAdd:output:0*
T0*
_output_shapes
:c
q_activation_3/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  ?Є
q_activation_3/ones_likeFill'q_activation_3/ones_like/Shape:output:0'q_activation_3/ones_like/Const:output:0*
T0*'
_output_shapes
:џџџџџџџџџ q
q_activation_3/sub_2Subq_activation_3/Cast_1:y:0q_activation_3/Pow_2:z:0*
T0*
_output_shapes
: 
q_activation_3/mulMul!q_activation_3/ones_like:output:0q_activation_3/sub_2:z:0*
T0*'
_output_shapes
:џџџџџџџџџ Ў
q_activation_3/SelectV2SelectV2q_activation_3/LessEqual:z:0!q_activation_3/Relu:activations:0q_activation_3/mul:z:0*
T0*'
_output_shapes
:џџџџџџџџџ 
q_activation_3/mul_1Mulq_dense_3/BiasAdd:output:0q_activation_3/Cast:y:0*
T0*'
_output_shapes
:џџџџџџџџџ 
q_activation_3/truedivRealDivq_activation_3/mul_1:z:0q_activation_3/Cast_1:y:0*
T0*'
_output_shapes
:џџџџџџџџџ g
q_activation_3/NegNegq_activation_3/truediv:z:0*
T0*'
_output_shapes
:џџџџџџџџџ k
q_activation_3/RoundRoundq_activation_3/truediv:z:0*
T0*'
_output_shapes
:џџџџџџџџџ 
q_activation_3/addAddV2q_activation_3/Neg:y:0q_activation_3/Round:y:0*
T0*'
_output_shapes
:џџџџџџџџџ u
q_activation_3/StopGradientStopGradientq_activation_3/add:z:0*
T0*'
_output_shapes
:џџџџџџџџџ 
q_activation_3/add_1AddV2q_activation_3/truediv:z:0$q_activation_3/StopGradient:output:0*
T0*'
_output_shapes
:џџџџџџџџџ 
q_activation_3/truediv_1RealDivq_activation_3/add_1:z:0q_activation_3/Cast:y:0*
T0*'
_output_shapes
:џџџџџџџџџ _
q_activation_3/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
q_activation_3/truediv_2RealDiv#q_activation_3/truediv_2/x:output:0q_activation_3/Cast:y:0*
T0*
_output_shapes
: [
q_activation_3/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?{
q_activation_3/sub_3Subq_activation_3/sub_3/x:output:0q_activation_3/truediv_2:z:0*
T0*
_output_shapes
: 
$q_activation_3/clip_by_value/MinimumMinimumq_activation_3/truediv_1:z:0q_activation_3/sub_3:z:0*
T0*'
_output_shapes
:џџџџџџџџџ c
q_activation_3/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    Ќ
q_activation_3/clip_by_valueMaximum(q_activation_3/clip_by_value/Minimum:z:0'q_activation_3/clip_by_value/y:output:0*
T0*'
_output_shapes
:џџџџџџџџџ 
q_activation_3/mul_2Mulq_activation_3/Cast_1:y:0 q_activation_3/clip_by_value:z:0*
T0*'
_output_shapes
:џџџџџџџџџ o
q_activation_3/Neg_1Neg q_activation_3/SelectV2:output:0*
T0*'
_output_shapes
:џџџџџџџџџ 
q_activation_3/add_2AddV2q_activation_3/Neg_1:y:0q_activation_3/mul_2:z:0*
T0*'
_output_shapes
:џџџџџџџџџ [
q_activation_3/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?
q_activation_3/mul_3Mulq_activation_3/mul_3/x:output:0q_activation_3/add_2:z:0*
T0*'
_output_shapes
:џџџџџџџџџ y
q_activation_3/StopGradient_1StopGradientq_activation_3/mul_3:z:0*
T0*'
_output_shapes
:џџџџџџџџџ 
q_activation_3/add_3AddV2 q_activation_3/SelectV2:output:0&q_activation_3/StopGradient_1:output:0*
T0*'
_output_shapes
:џџџџџџџџџ Q
q_dense_4/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :Q
q_dense_4/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : i
q_dense_4/PowPowq_dense_4/Pow/x:output:0q_dense_4/Pow/y:output:0*
T0*
_output_shapes
: Y
q_dense_4/CastCastq_dense_4/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: z
q_dense_4/ReadVariableOpReadVariableOp!q_dense_4_readvariableop_resource*
_output_shapes

: *
dtype0T
q_dense_4/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Ay
q_dense_4/mulMul q_dense_4/ReadVariableOp:value:0q_dense_4/mul/y:output:0*
T0*
_output_shapes

: l
q_dense_4/truedivRealDivq_dense_4/mul:z:0q_dense_4/Cast:y:0*
T0*
_output_shapes

: T
q_dense_4/NegNegq_dense_4/truediv:z:0*
T0*
_output_shapes

: X
q_dense_4/RoundRoundq_dense_4/truediv:z:0*
T0*
_output_shapes

: g
q_dense_4/addAddV2q_dense_4/Neg:y:0q_dense_4/Round:y:0*
T0*
_output_shapes

: b
q_dense_4/StopGradientStopGradientq_dense_4/add:z:0*
T0*
_output_shapes

: y
q_dense_4/add_1AddV2q_dense_4/truediv:z:0q_dense_4/StopGradient:output:0*
T0*
_output_shapes

: f
!q_dense_4/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pA
q_dense_4/clip_by_value/MinimumMinimumq_dense_4/add_1:z:0*q_dense_4/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: ^
q_dense_4/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  С
q_dense_4/clip_by_valueMaximum#q_dense_4/clip_by_value/Minimum:z:0"q_dense_4/clip_by_value/y:output:0*
T0*
_output_shapes

: p
q_dense_4/mul_1Mulq_dense_4/Cast:y:0q_dense_4/clip_by_value:z:0*
T0*
_output_shapes

: Z
q_dense_4/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A|
q_dense_4/truediv_1RealDivq_dense_4/mul_1:z:0q_dense_4/truediv_1/y:output:0*
T0*
_output_shapes

: V
q_dense_4/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?t
q_dense_4/mul_2Mulq_dense_4/mul_2/x:output:0q_dense_4/truediv_1:z:0*
T0*
_output_shapes

: |
q_dense_4/ReadVariableOp_1ReadVariableOp!q_dense_4_readvariableop_resource*
_output_shapes

: *
dtype0c
q_dense_4/Neg_1Neg"q_dense_4/ReadVariableOp_1:value:0*
T0*
_output_shapes

: k
q_dense_4/add_2AddV2q_dense_4/Neg_1:y:0q_dense_4/mul_2:z:0*
T0*
_output_shapes

: V
q_dense_4/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?p
q_dense_4/mul_3Mulq_dense_4/mul_3/x:output:0q_dense_4/add_2:z:0*
T0*
_output_shapes

: f
q_dense_4/StopGradient_1StopGradientq_dense_4/mul_3:z:0*
T0*
_output_shapes

: |
q_dense_4/ReadVariableOp_2ReadVariableOp!q_dense_4_readvariableop_resource*
_output_shapes

: *
dtype0
q_dense_4/add_3AddV2"q_dense_4/ReadVariableOp_2:value:0!q_dense_4/StopGradient_1:output:0*
T0*
_output_shapes

: {
q_dense_4/MatMulMatMulq_activation_3/add_3:z:0q_dense_4/add_3:z:0*
T0*'
_output_shapes
:џџџџџџџџџS
q_dense_4/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :S
q_dense_4/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : o
q_dense_4/Pow_1Powq_dense_4/Pow_1/x:output:0q_dense_4/Pow_1/y:output:0*
T0*
_output_shapes
: ]
q_dense_4/Cast_1Castq_dense_4/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: z
q_dense_4/ReadVariableOp_3ReadVariableOp#q_dense_4_readvariableop_3_resource*
_output_shapes
:*
dtype0V
q_dense_4/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  A{
q_dense_4/mul_4Mul"q_dense_4/ReadVariableOp_3:value:0q_dense_4/mul_4/y:output:0*
T0*
_output_shapes
:n
q_dense_4/truediv_2RealDivq_dense_4/mul_4:z:0q_dense_4/Cast_1:y:0*
T0*
_output_shapes
:T
q_dense_4/Neg_2Negq_dense_4/truediv_2:z:0*
T0*
_output_shapes
:X
q_dense_4/Round_1Roundq_dense_4/truediv_2:z:0*
T0*
_output_shapes
:i
q_dense_4/add_4AddV2q_dense_4/Neg_2:y:0q_dense_4/Round_1:y:0*
T0*
_output_shapes
:b
q_dense_4/StopGradient_2StopGradientq_dense_4/add_4:z:0*
T0*
_output_shapes
:y
q_dense_4/add_5AddV2q_dense_4/truediv_2:z:0!q_dense_4/StopGradient_2:output:0*
T0*
_output_shapes
:h
#q_dense_4/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  pA
!q_dense_4/clip_by_value_1/MinimumMinimumq_dense_4/add_5:z:0,q_dense_4/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
:`
q_dense_4/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  С
q_dense_4/clip_by_value_1Maximum%q_dense_4/clip_by_value_1/Minimum:z:0$q_dense_4/clip_by_value_1/y:output:0*
T0*
_output_shapes
:p
q_dense_4/mul_5Mulq_dense_4/Cast_1:y:0q_dense_4/clip_by_value_1:z:0*
T0*
_output_shapes
:Z
q_dense_4/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  Ax
q_dense_4/truediv_3RealDivq_dense_4/mul_5:z:0q_dense_4/truediv_3/y:output:0*
T0*
_output_shapes
:V
q_dense_4/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?p
q_dense_4/mul_6Mulq_dense_4/mul_6/x:output:0q_dense_4/truediv_3:z:0*
T0*
_output_shapes
:z
q_dense_4/ReadVariableOp_4ReadVariableOp#q_dense_4_readvariableop_3_resource*
_output_shapes
:*
dtype0_
q_dense_4/Neg_3Neg"q_dense_4/ReadVariableOp_4:value:0*
T0*
_output_shapes
:g
q_dense_4/add_6AddV2q_dense_4/Neg_3:y:0q_dense_4/mul_6:z:0*
T0*
_output_shapes
:V
q_dense_4/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  ?l
q_dense_4/mul_7Mulq_dense_4/mul_7/x:output:0q_dense_4/add_6:z:0*
T0*
_output_shapes
:b
q_dense_4/StopGradient_3StopGradientq_dense_4/mul_7:z:0*
T0*
_output_shapes
:z
q_dense_4/ReadVariableOp_5ReadVariableOp#q_dense_4_readvariableop_3_resource*
_output_shapes
:*
dtype0
q_dense_4/add_7AddV2"q_dense_4/ReadVariableOp_5:value:0!q_dense_4/StopGradient_3:output:0*
T0*
_output_shapes
:
q_dense_4/BiasAddBiasAddq_dense_4/MatMul:product:0q_dense_4/add_7:z:0*
T0*'
_output_shapes
:џџџџџџџџџi
IdentityIdentityq_dense_4/BiasAdd:output:0^NoOp*
T0*'
_output_shapes
:џџџџџџџџџ
NoOpNoOp^q_dense_3/ReadVariableOp^q_dense_3/ReadVariableOp_1^q_dense_3/ReadVariableOp_2^q_dense_3/ReadVariableOp_3^q_dense_3/ReadVariableOp_4^q_dense_3/ReadVariableOp_5^q_dense_4/ReadVariableOp^q_dense_4/ReadVariableOp_1^q_dense_4/ReadVariableOp_2^q_dense_4/ReadVariableOp_3^q_dense_4/ReadVariableOp_4^q_dense_4/ReadVariableOp_5*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:џџџџџџџџџ : : : : 24
q_dense_3/ReadVariableOpq_dense_3/ReadVariableOp28
q_dense_3/ReadVariableOp_1q_dense_3/ReadVariableOp_128
q_dense_3/ReadVariableOp_2q_dense_3/ReadVariableOp_228
q_dense_3/ReadVariableOp_3q_dense_3/ReadVariableOp_328
q_dense_3/ReadVariableOp_4q_dense_3/ReadVariableOp_428
q_dense_3/ReadVariableOp_5q_dense_3/ReadVariableOp_524
q_dense_4/ReadVariableOpq_dense_4/ReadVariableOp28
q_dense_4/ReadVariableOp_1q_dense_4/ReadVariableOp_128
q_dense_4/ReadVariableOp_2q_dense_4/ReadVariableOp_228
q_dense_4/ReadVariableOp_3q_dense_4/ReadVariableOp_328
q_dense_4/ReadVariableOp_4q_dense_4/ReadVariableOp_428
q_dense_4/ReadVariableOp_5q_dense_4/ReadVariableOp_5:O K
'
_output_shapes
:џџџџџџџџџ 
 
_user_specified_nameinputs"
L
saver_filename:0StatefulPartitionedCall_1:0StatefulPartitionedCall_28"
saved_model_main_op

NoOp*>
__saved_model_init_op%#
__saved_model_init_op

NoOp*Џ
serving_default
?
input_14
serving_default_input_1:0џџџџџџџџџ<
output_10
StatefulPartitionedCall:0џџџџџџџџџtensorflow/serving/predict:ыс
ѓ
	variables
trainable_variables
regularization_losses
	keras_api
__call__
*&call_and_return_all_conditional_losses
_default_save_signature
phi
	rho

	optimizer

signatures"
_tf_keras_model
f
0
1
2
3
4
5
6
7
8
9"
trackable_list_wrapper
f
0
1
2
3
4
5
6
7
8
9"
trackable_list_wrapper
 "
trackable_list_wrapper
Ъ
non_trainable_variables

layers
metrics
layer_regularization_losses
layer_metrics
	variables
trainable_variables
regularization_losses
__call__
_default_save_signature
*&call_and_return_all_conditional_losses
&"call_and_return_conditional_losses"
_generic_user_object

trace_0
trace_1
trace_2
trace_32Є
5__inference_DeepSetsInvQuantised_layer_call_fn_458715
5__inference_DeepSetsInvQuantised_layer_call_fn_458928
5__inference_DeepSetsInvQuantised_layer_call_fn_458953
5__inference_DeepSetsInvQuantised_layer_call_fn_458818Х
МВИ
FullArgSpec
args
jself
jinputs
varargs
 
varkwjkwargs
defaults
 

kwonlyargs

jtraining%
kwonlydefaultsЊ

trainingp 
annotationsЊ *
 ztrace_0ztrace_1ztrace_2ztrace_3
ћ
trace_0
 trace_1
!trace_2
"trace_32
P__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_459510
P__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_460067
P__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_458846
P__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_458874Х
МВИ
FullArgSpec
args
jself
jinputs
varargs
 
varkwjkwargs
defaults
 

kwonlyargs

jtraining%
kwonlydefaultsЊ

trainingp 
annotationsЊ *
 ztrace_0z trace_1z!trace_2z"trace_3
ЬBЩ
!__inference__wrapped_model_457718input_1"
В
FullArgSpec
args 
varargsjargs
varkwjkwargs
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
Ц
#layer_with_weights-0
#layer-0
$layer-1
%layer_with_weights-1
%layer-2
&layer-3
'layer_with_weights-2
'layer-4
(layer-5
)	variables
*trainable_variables
+regularization_losses
,	keras_api
-__call__
*.&call_and_return_all_conditional_losses"
_tf_keras_sequential

/layer_with_weights-0
/layer-0
0layer-1
1layer_with_weights-1
1layer-2
2	variables
3trainable_variables
4regularization_losses
5	keras_api
6__call__
*7&call_and_return_all_conditional_losses"
_tf_keras_sequential

8
_variables
9_iterations
:_learning_rate
;_index_dict
<
_momentums
=_velocities
>_update_step_xla"
experimentalOptimizer
,
?serving_default"
signature_map
 : 2q_dense/kernel
: 2q_dense/bias
":   2q_dense_1/kernel
: 2q_dense_1/bias
":   2q_dense_2/kernel
: 2q_dense_2/bias
":   2q_dense_3/kernel
: 2q_dense_3/bias
":  2q_dense_4/kernel
:2q_dense_4/bias
 "
trackable_list_wrapper
.
0
	1"
trackable_list_wrapper
.
@0
A1"
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_dict_wrapper
B
5__inference_DeepSetsInvQuantised_layer_call_fn_458715input_1"Х
МВИ
FullArgSpec
args
jself
jinputs
varargs
 
varkwjkwargs
defaults
 

kwonlyargs

jtraining%
kwonlydefaultsЊ

trainingp 
annotationsЊ *
 
B
5__inference_DeepSetsInvQuantised_layer_call_fn_458928inputs"Х
МВИ
FullArgSpec
args
jself
jinputs
varargs
 
varkwjkwargs
defaults
 

kwonlyargs

jtraining%
kwonlydefaultsЊ

trainingp 
annotationsЊ *
 
B
5__inference_DeepSetsInvQuantised_layer_call_fn_458953inputs"Х
МВИ
FullArgSpec
args
jself
jinputs
varargs
 
varkwjkwargs
defaults
 

kwonlyargs

jtraining%
kwonlydefaultsЊ

trainingp 
annotationsЊ *
 
B
5__inference_DeepSetsInvQuantised_layer_call_fn_458818input_1"Х
МВИ
FullArgSpec
args
jself
jinputs
varargs
 
varkwjkwargs
defaults
 

kwonlyargs

jtraining%
kwonlydefaultsЊ

trainingp 
annotationsЊ *
 
ЇBЄ
P__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_459510inputs"Х
МВИ
FullArgSpec
args
jself
jinputs
varargs
 
varkwjkwargs
defaults
 

kwonlyargs

jtraining%
kwonlydefaultsЊ

trainingp 
annotationsЊ *
 
ЇBЄ
P__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_460067inputs"Х
МВИ
FullArgSpec
args
jself
jinputs
varargs
 
varkwjkwargs
defaults
 

kwonlyargs

jtraining%
kwonlydefaultsЊ

trainingp 
annotationsЊ *
 
ЈBЅ
P__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_458846input_1"Х
МВИ
FullArgSpec
args
jself
jinputs
varargs
 
varkwjkwargs
defaults
 

kwonlyargs

jtraining%
kwonlydefaultsЊ

trainingp 
annotationsЊ *
 
ЈBЅ
P__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_458874input_1"Х
МВИ
FullArgSpec
args
jself
jinputs
varargs
 
varkwjkwargs
defaults
 

kwonlyargs

jtraining%
kwonlydefaultsЊ

trainingp 
annotationsЊ *
 

B	variables
Ctrainable_variables
Dregularization_losses
E	keras_api
F__call__
*G&call_and_return_all_conditional_losses
Hkernel_quantizer_internal
Ibias_quantizer_internal
J
quantizers

kernel
bias"
_tf_keras_layer
Д
K	variables
Ltrainable_variables
Mregularization_losses
N	keras_api
O__call__
*P&call_and_return_all_conditional_losses
Q	quantizer"
_tf_keras_layer

R	variables
Strainable_variables
Tregularization_losses
U	keras_api
V__call__
*W&call_and_return_all_conditional_losses
Xkernel_quantizer_internal
Ybias_quantizer_internal
Z
quantizers

kernel
bias"
_tf_keras_layer
Д
[	variables
\trainable_variables
]regularization_losses
^	keras_api
___call__
*`&call_and_return_all_conditional_losses
a	quantizer"
_tf_keras_layer

b	variables
ctrainable_variables
dregularization_losses
e	keras_api
f__call__
*g&call_and_return_all_conditional_losses
hkernel_quantizer_internal
ibias_quantizer_internal
j
quantizers

kernel
bias"
_tf_keras_layer
Д
k	variables
ltrainable_variables
mregularization_losses
n	keras_api
o__call__
*p&call_and_return_all_conditional_losses
q	quantizer"
_tf_keras_layer
J
0
1
2
3
4
5"
trackable_list_wrapper
J
0
1
2
3
4
5"
trackable_list_wrapper
 "
trackable_list_wrapper
­
rnon_trainable_variables

slayers
tmetrics
ulayer_regularization_losses
vlayer_metrics
)	variables
*trainable_variables
+regularization_losses
-__call__
*.&call_and_return_all_conditional_losses
&."call_and_return_conditional_losses"
_generic_user_object
с
wtrace_0
xtrace_1
ytrace_2
ztrace_32і
+__inference_sequential_layer_call_fn_458167
+__inference_sequential_layer_call_fn_460134
+__inference_sequential_layer_call_fn_460151
+__inference_sequential_layer_call_fn_458288П
ЖВВ
FullArgSpec1
args)&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults
p 

 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 zwtrace_0zxtrace_1zytrace_2zztrace_3
Э
{trace_0
|trace_1
}trace_2
~trace_32т
F__inference_sequential_layer_call_and_return_conditional_losses_460533
F__inference_sequential_layer_call_and_return_conditional_losses_460915
F__inference_sequential_layer_call_and_return_conditional_losses_458310
F__inference_sequential_layer_call_and_return_conditional_losses_458332П
ЖВВ
FullArgSpec1
args)&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults
p 

 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 z{trace_0z|trace_1z}trace_2z~trace_3

	variables
trainable_variables
regularization_losses
	keras_api
__call__
+&call_and_return_all_conditional_losses
kernel_quantizer_internal
bias_quantizer_internal

quantizers

kernel
bias"
_tf_keras_layer
Л
	variables
trainable_variables
regularization_losses
	keras_api
__call__
+&call_and_return_all_conditional_losses
	quantizer"
_tf_keras_layer

	variables
trainable_variables
regularization_losses
	keras_api
__call__
+&call_and_return_all_conditional_losses
kernel_quantizer_internal
bias_quantizer_internal

quantizers

kernel
bias"
_tf_keras_layer
<
0
1
2
3"
trackable_list_wrapper
<
0
1
2
3"
trackable_list_wrapper
 "
trackable_list_wrapper
В
non_trainable_variables
layers
metrics
 layer_regularization_losses
layer_metrics
2	variables
3trainable_variables
4regularization_losses
6__call__
*7&call_and_return_all_conditional_losses
&7"call_and_return_conditional_losses"
_generic_user_object
ё
trace_0
trace_1
trace_2
 trace_32ў
-__inference_sequential_1_layer_call_fn_458550
-__inference_sequential_1_layer_call_fn_460928
-__inference_sequential_1_layer_call_fn_460941
-__inference_sequential_1_layer_call_fn_458630П
ЖВВ
FullArgSpec1
args)&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults
p 

 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 ztrace_0ztrace_1ztrace_2z trace_3
н
Ёtrace_0
Ђtrace_1
Ѓtrace_2
Єtrace_32ъ
H__inference_sequential_1_layer_call_and_return_conditional_losses_461118
H__inference_sequential_1_layer_call_and_return_conditional_losses_461295
H__inference_sequential_1_layer_call_and_return_conditional_losses_458645
H__inference_sequential_1_layer_call_and_return_conditional_losses_458660П
ЖВВ
FullArgSpec1
args)&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults
p 

 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 zЁtrace_0zЂtrace_1zЃtrace_2zЄtrace_3
в
90
Ѕ1
І2
Ї3
Ј4
Љ5
Њ6
Ћ7
Ќ8
­9
Ў10
Џ11
А12
Б13
В14
Г15
Д16
Е17
Ж18
З19
И20"
trackable_list_wrapper
:	 2	iteration
: 2learning_rate
 "
trackable_dict_wrapper
p
Ѕ0
Ї1
Љ2
Ћ3
­4
Џ5
Б6
Г7
Е8
З9"
trackable_list_wrapper
p
І0
Ј1
Њ2
Ќ3
Ў4
А5
В6
Д7
Ж8
И9"
trackable_list_wrapper
Щ
Йtrace_0
Кtrace_1
Лtrace_2
Мtrace_3
Нtrace_4
Оtrace_5
Пtrace_6
Рtrace_7
Сtrace_8
Тtrace_92Ў
#__inference__update_step_xla_460072
#__inference__update_step_xla_460077
#__inference__update_step_xla_460082
#__inference__update_step_xla_460087
#__inference__update_step_xla_460092
#__inference__update_step_xla_460097
#__inference__update_step_xla_460102
#__inference__update_step_xla_460107
#__inference__update_step_xla_460112
#__inference__update_step_xla_460117Й
ЎВЊ
FullArgSpec2
args*'
jself

jgradient

jvariable
jkey
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 0zЙtrace_0zКtrace_1zЛtrace_2zМtrace_3zНtrace_4zОtrace_5zПtrace_6zРtrace_7zСtrace_8zТtrace_9
ЫBШ
$__inference_signature_wrapper_458903input_1"
В
FullArgSpec
args 
varargs
 
varkwjkwargs
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
R
У	variables
Ф	keras_api

Хtotal

Цcount"
_tf_keras_metric
c
Ч	variables
Ш	keras_api

Щtotal

Ъcount
Ы
_fn_kwargs"
_tf_keras_metric
.
0
1"
trackable_list_wrapper
.
0
1"
trackable_list_wrapper
 "
trackable_list_wrapper
В
Ьnon_trainable_variables
Эlayers
Юmetrics
 Яlayer_regularization_losses
аlayer_metrics
B	variables
Ctrainable_variables
Dregularization_losses
F__call__
*G&call_and_return_all_conditional_losses
&G"call_and_return_conditional_losses"
_generic_user_object
ю
бtrace_02Я
(__inference_q_dense_layer_call_fn_461304Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 zбtrace_0

вtrace_02ъ
C__inference_q_dense_layer_call_and_return_conditional_losses_461389Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 zвtrace_0
"
_generic_user_object
"
_generic_user_object
.
H0
I1"
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
В
гnon_trainable_variables
дlayers
еmetrics
 жlayer_regularization_losses
зlayer_metrics
K	variables
Ltrainable_variables
Mregularization_losses
O__call__
*P&call_and_return_all_conditional_losses
&P"call_and_return_conditional_losses"
_generic_user_object
ѓ
иtrace_02д
-__inference_q_activation_layer_call_fn_461394Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 zиtrace_0

йtrace_02я
H__inference_q_activation_layer_call_and_return_conditional_losses_461443Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 zйtrace_0
"
_generic_user_object
.
0
1"
trackable_list_wrapper
.
0
1"
trackable_list_wrapper
 "
trackable_list_wrapper
В
кnon_trainable_variables
лlayers
мmetrics
 нlayer_regularization_losses
оlayer_metrics
R	variables
Strainable_variables
Tregularization_losses
V__call__
*W&call_and_return_all_conditional_losses
&W"call_and_return_conditional_losses"
_generic_user_object
№
пtrace_02б
*__inference_q_dense_1_layer_call_fn_461452Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 zпtrace_0

рtrace_02ь
E__inference_q_dense_1_layer_call_and_return_conditional_losses_461537Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 zрtrace_0
"
_generic_user_object
"
_generic_user_object
.
X0
Y1"
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
В
сnon_trainable_variables
тlayers
уmetrics
 фlayer_regularization_losses
хlayer_metrics
[	variables
\trainable_variables
]regularization_losses
___call__
*`&call_and_return_all_conditional_losses
&`"call_and_return_conditional_losses"
_generic_user_object
ѕ
цtrace_02ж
/__inference_q_activation_1_layer_call_fn_461542Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 zцtrace_0

чtrace_02ё
J__inference_q_activation_1_layer_call_and_return_conditional_losses_461591Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 zчtrace_0
"
_generic_user_object
.
0
1"
trackable_list_wrapper
.
0
1"
trackable_list_wrapper
 "
trackable_list_wrapper
В
шnon_trainable_variables
щlayers
ъmetrics
 ыlayer_regularization_losses
ьlayer_metrics
b	variables
ctrainable_variables
dregularization_losses
f__call__
*g&call_and_return_all_conditional_losses
&g"call_and_return_conditional_losses"
_generic_user_object
№
эtrace_02б
*__inference_q_dense_2_layer_call_fn_461600Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 zэtrace_0

юtrace_02ь
E__inference_q_dense_2_layer_call_and_return_conditional_losses_461685Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 zюtrace_0
"
_generic_user_object
"
_generic_user_object
.
h0
i1"
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
В
яnon_trainable_variables
№layers
ёmetrics
 ђlayer_regularization_losses
ѓlayer_metrics
k	variables
ltrainable_variables
mregularization_losses
o__call__
*p&call_and_return_all_conditional_losses
&p"call_and_return_conditional_losses"
_generic_user_object
ѕ
єtrace_02ж
/__inference_q_activation_2_layer_call_fn_461690Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 zєtrace_0

ѕtrace_02ё
J__inference_q_activation_2_layer_call_and_return_conditional_losses_461739Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 zѕtrace_0
"
_generic_user_object
 "
trackable_list_wrapper
J
#0
$1
%2
&3
'4
(5"
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_dict_wrapper
B
+__inference_sequential_layer_call_fn_458167q_dense_input"П
ЖВВ
FullArgSpec1
args)&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults
p 

 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
ќBљ
+__inference_sequential_layer_call_fn_460134inputs"П
ЖВВ
FullArgSpec1
args)&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults
p 

 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
ќBљ
+__inference_sequential_layer_call_fn_460151inputs"П
ЖВВ
FullArgSpec1
args)&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults
p 

 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
B
+__inference_sequential_layer_call_fn_458288q_dense_input"П
ЖВВ
FullArgSpec1
args)&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults
p 

 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
B
F__inference_sequential_layer_call_and_return_conditional_losses_460533inputs"П
ЖВВ
FullArgSpec1
args)&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults
p 

 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
B
F__inference_sequential_layer_call_and_return_conditional_losses_460915inputs"П
ЖВВ
FullArgSpec1
args)&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults
p 

 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
B
F__inference_sequential_layer_call_and_return_conditional_losses_458310q_dense_input"П
ЖВВ
FullArgSpec1
args)&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults
p 

 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
B
F__inference_sequential_layer_call_and_return_conditional_losses_458332q_dense_input"П
ЖВВ
FullArgSpec1
args)&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults
p 

 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
.
0
1"
trackable_list_wrapper
.
0
1"
trackable_list_wrapper
 "
trackable_list_wrapper
З
іnon_trainable_variables
їlayers
јmetrics
 љlayer_regularization_losses
њlayer_metrics
	variables
trainable_variables
regularization_losses
__call__
+&call_and_return_all_conditional_losses
'"call_and_return_conditional_losses"
_generic_user_object
№
ћtrace_02б
*__inference_q_dense_3_layer_call_fn_461748Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 zћtrace_0

ќtrace_02ь
E__inference_q_dense_3_layer_call_and_return_conditional_losses_461816Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 zќtrace_0
"
_generic_user_object
"
_generic_user_object
0
0
1"
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
И
§non_trainable_variables
ўlayers
џmetrics
 layer_regularization_losses
layer_metrics
	variables
trainable_variables
regularization_losses
__call__
+&call_and_return_all_conditional_losses
'"call_and_return_conditional_losses"
_generic_user_object
ѕ
trace_02ж
/__inference_q_activation_3_layer_call_fn_461821Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 ztrace_0

trace_02ё
J__inference_q_activation_3_layer_call_and_return_conditional_losses_461870Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 ztrace_0
"
_generic_user_object
.
0
1"
trackable_list_wrapper
.
0
1"
trackable_list_wrapper
 "
trackable_list_wrapper
И
non_trainable_variables
layers
metrics
 layer_regularization_losses
layer_metrics
	variables
trainable_variables
regularization_losses
__call__
+&call_and_return_all_conditional_losses
'"call_and_return_conditional_losses"
_generic_user_object
№
trace_02б
*__inference_q_dense_4_layer_call_fn_461879Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 ztrace_0

trace_02ь
E__inference_q_dense_4_layer_call_and_return_conditional_losses_461947Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 ztrace_0
"
_generic_user_object
"
_generic_user_object
0
0
1"
trackable_list_wrapper
 "
trackable_list_wrapper
5
/0
01
12"
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_dict_wrapper
B
-__inference_sequential_1_layer_call_fn_458550q_dense_3_input"П
ЖВВ
FullArgSpec1
args)&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults
p 

 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
ўBћ
-__inference_sequential_1_layer_call_fn_460928inputs"П
ЖВВ
FullArgSpec1
args)&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults
p 

 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
ўBћ
-__inference_sequential_1_layer_call_fn_460941inputs"П
ЖВВ
FullArgSpec1
args)&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults
p 

 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
B
-__inference_sequential_1_layer_call_fn_458630q_dense_3_input"П
ЖВВ
FullArgSpec1
args)&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults
p 

 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
B
H__inference_sequential_1_layer_call_and_return_conditional_losses_461118inputs"П
ЖВВ
FullArgSpec1
args)&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults
p 

 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
B
H__inference_sequential_1_layer_call_and_return_conditional_losses_461295inputs"П
ЖВВ
FullArgSpec1
args)&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults
p 

 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
ЂB
H__inference_sequential_1_layer_call_and_return_conditional_losses_458645q_dense_3_input"П
ЖВВ
FullArgSpec1
args)&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults
p 

 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
ЂB
H__inference_sequential_1_layer_call_and_return_conditional_losses_458660q_dense_3_input"П
ЖВВ
FullArgSpec1
args)&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults
p 

 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
%:# 2Adam/m/q_dense/kernel
%:# 2Adam/v/q_dense/kernel
: 2Adam/m/q_dense/bias
: 2Adam/v/q_dense/bias
':%  2Adam/m/q_dense_1/kernel
':%  2Adam/v/q_dense_1/kernel
!: 2Adam/m/q_dense_1/bias
!: 2Adam/v/q_dense_1/bias
':%  2Adam/m/q_dense_2/kernel
':%  2Adam/v/q_dense_2/kernel
!: 2Adam/m/q_dense_2/bias
!: 2Adam/v/q_dense_2/bias
':%  2Adam/m/q_dense_3/kernel
':%  2Adam/v/q_dense_3/kernel
!: 2Adam/m/q_dense_3/bias
!: 2Adam/v/q_dense_3/bias
':% 2Adam/m/q_dense_4/kernel
':% 2Adam/v/q_dense_4/kernel
!:2Adam/m/q_dense_4/bias
!:2Adam/v/q_dense_4/bias
јBѕ
#__inference__update_step_xla_460072gradientvariable"З
ЎВЊ
FullArgSpec2
args*'
jself

jgradient

jvariable
jkey
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
јBѕ
#__inference__update_step_xla_460077gradientvariable"З
ЎВЊ
FullArgSpec2
args*'
jself

jgradient

jvariable
jkey
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
јBѕ
#__inference__update_step_xla_460082gradientvariable"З
ЎВЊ
FullArgSpec2
args*'
jself

jgradient

jvariable
jkey
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
јBѕ
#__inference__update_step_xla_460087gradientvariable"З
ЎВЊ
FullArgSpec2
args*'
jself

jgradient

jvariable
jkey
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
јBѕ
#__inference__update_step_xla_460092gradientvariable"З
ЎВЊ
FullArgSpec2
args*'
jself

jgradient

jvariable
jkey
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
јBѕ
#__inference__update_step_xla_460097gradientvariable"З
ЎВЊ
FullArgSpec2
args*'
jself

jgradient

jvariable
jkey
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
јBѕ
#__inference__update_step_xla_460102gradientvariable"З
ЎВЊ
FullArgSpec2
args*'
jself

jgradient

jvariable
jkey
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
јBѕ
#__inference__update_step_xla_460107gradientvariable"З
ЎВЊ
FullArgSpec2
args*'
jself

jgradient

jvariable
jkey
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
јBѕ
#__inference__update_step_xla_460112gradientvariable"З
ЎВЊ
FullArgSpec2
args*'
jself

jgradient

jvariable
jkey
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
јBѕ
#__inference__update_step_xla_460117gradientvariable"З
ЎВЊ
FullArgSpec2
args*'
jself

jgradient

jvariable
jkey
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
0
Х0
Ц1"
trackable_list_wrapper
.
У	variables"
_generic_user_object
:  (2total
:  (2count
0
Щ0
Ъ1"
trackable_list_wrapper
.
Ч	variables"
_generic_user_object
:  (2total
:  (2count
 "
trackable_dict_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_dict_wrapper
мBй
(__inference_q_dense_layer_call_fn_461304inputs"Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
їBє
C__inference_q_dense_layer_call_and_return_conditional_losses_461389inputs"Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_dict_wrapper
сBо
-__inference_q_activation_layer_call_fn_461394inputs"Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
ќBљ
H__inference_q_activation_layer_call_and_return_conditional_losses_461443inputs"Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_dict_wrapper
оBл
*__inference_q_dense_1_layer_call_fn_461452inputs"Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
љBі
E__inference_q_dense_1_layer_call_and_return_conditional_losses_461537inputs"Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_dict_wrapper
уBр
/__inference_q_activation_1_layer_call_fn_461542inputs"Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
ўBћ
J__inference_q_activation_1_layer_call_and_return_conditional_losses_461591inputs"Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_dict_wrapper
оBл
*__inference_q_dense_2_layer_call_fn_461600inputs"Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
љBі
E__inference_q_dense_2_layer_call_and_return_conditional_losses_461685inputs"Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_dict_wrapper
уBр
/__inference_q_activation_2_layer_call_fn_461690inputs"Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
ўBћ
J__inference_q_activation_2_layer_call_and_return_conditional_losses_461739inputs"Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_dict_wrapper
оBл
*__inference_q_dense_3_layer_call_fn_461748inputs"Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
љBі
E__inference_q_dense_3_layer_call_and_return_conditional_losses_461816inputs"Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_dict_wrapper
уBр
/__inference_q_activation_3_layer_call_fn_461821inputs"Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
ўBћ
J__inference_q_activation_3_layer_call_and_return_conditional_losses_461870inputs"Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_dict_wrapper
оBл
*__inference_q_dense_4_layer_call_fn_461879inputs"Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 
љBі
E__inference_q_dense_4_layer_call_and_return_conditional_losses_461947inputs"Ђ
В
FullArgSpec
args
jself
jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs 
kwonlydefaults
 
annotationsЊ *
 е
P__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_458846
DЂA
*Ђ'
%"
input_1џџџџџџџџџ
Њ

trainingp ",Ђ)
"
tensor_0џџџџџџџџџ
 е
P__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_458874
DЂA
*Ђ'
%"
input_1џџџџџџџџџ
Њ

trainingp",Ђ)
"
tensor_0џџџџџџџџџ
 г
P__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_459510
CЂ@
)Ђ&
$!
inputsџџџџџџџџџ
Њ

trainingp ",Ђ)
"
tensor_0џџџџџџџџџ
 г
P__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_460067
CЂ@
)Ђ&
$!
inputsџџџџџџџџџ
Њ

trainingp",Ђ)
"
tensor_0џџџџџџџџџ
 Ў
5__inference_DeepSetsInvQuantised_layer_call_fn_458715u
DЂA
*Ђ'
%"
input_1џџџџџџџџџ
Њ

trainingp "!
unknownџџџџџџџџџЎ
5__inference_DeepSetsInvQuantised_layer_call_fn_458818u
DЂA
*Ђ'
%"
input_1џџџџџџџџџ
Њ

trainingp"!
unknownџџџџџџџџџ­
5__inference_DeepSetsInvQuantised_layer_call_fn_458928t
CЂ@
)Ђ&
$!
inputsџџџџџџџџџ
Њ

trainingp "!
unknownџџџџџџџџџ­
5__inference_DeepSetsInvQuantised_layer_call_fn_458953t
CЂ@
)Ђ&
$!
inputsџџџџџџџџџ
Њ

trainingp"!
unknownџџџџџџџџџ
#__inference__update_step_xla_460072nhЂe
^Ђ[

gradient 
41	Ђ
њ 

p
` VariableSpec 
`рдщСѕа?
Њ "
 
#__inference__update_step_xla_460077f`Ђ]
VЂS

gradient 
0-	Ђ
њ 

p
` VariableSpec 
`ряСѕа?
Њ "
 
#__inference__update_step_xla_460082nhЂe
^Ђ[

gradient  
41	Ђ
њ  

p
` VariableSpec 
`ОСѕа?
Њ "
 
#__inference__update_step_xla_460087f`Ђ]
VЂS

gradient 
0-	Ђ
њ 

p
` VariableSpec 
`РчИўа?
Њ "
 
#__inference__update_step_xla_460092nhЂe
^Ђ[

gradient  
41	Ђ
њ  

p
` VariableSpec 
`р­бєа?
Њ "
 
#__inference__update_step_xla_460097f`Ђ]
VЂS

gradient 
0-	Ђ
њ 

p
` VariableSpec 
`РЌбєа?
Њ "
 
#__inference__update_step_xla_460102nhЂe
^Ђ[

gradient  
41	Ђ
њ  

p
` VariableSpec 
` Ібєа?
Њ "
 
#__inference__update_step_xla_460107f`Ђ]
VЂS

gradient 
0-	Ђ
њ 

p
` VariableSpec 
`РЖбєа?
Њ "
 
#__inference__update_step_xla_460112nhЂe
^Ђ[

gradient 
41	Ђ
њ 

p
` VariableSpec 
` ЋпРѕа?
Њ "
 
#__inference__update_step_xla_460117f`Ђ]
VЂS

gradient
0-	Ђ
њ

p
` VariableSpec 
`РЇпРѕа?
Њ "
 
!__inference__wrapped_model_457718w
4Ђ1
*Ђ'
%"
input_1џџџџџџџџџ
Њ "3Њ0
.
output_1"
output_1џџџџџџџџџЕ
J__inference_q_activation_1_layer_call_and_return_conditional_losses_461591g3Ђ0
)Ђ&
$!
inputsџџџџџџџџџ 
Њ "0Ђ-
&#
tensor_0џџџџџџџџџ 
 
/__inference_q_activation_1_layer_call_fn_461542\3Ђ0
)Ђ&
$!
inputsџџџџџџџџџ 
Њ "%"
unknownџџџџџџџџџ Е
J__inference_q_activation_2_layer_call_and_return_conditional_losses_461739g3Ђ0
)Ђ&
$!
inputsџџџџџџџџџ 
Њ "0Ђ-
&#
tensor_0џџџџџџџџџ 
 
/__inference_q_activation_2_layer_call_fn_461690\3Ђ0
)Ђ&
$!
inputsџџџџџџџџџ 
Њ "%"
unknownџџџџџџџџџ ­
J__inference_q_activation_3_layer_call_and_return_conditional_losses_461870_/Ђ,
%Ђ"
 
inputsџџџџџџџџџ 
Њ ",Ђ)
"
tensor_0џџџџџџџџџ 
 
/__inference_q_activation_3_layer_call_fn_461821T/Ђ,
%Ђ"
 
inputsџџџџџџџџџ 
Њ "!
unknownџџџџџџџџџ Г
H__inference_q_activation_layer_call_and_return_conditional_losses_461443g3Ђ0
)Ђ&
$!
inputsџџџџџџџџџ 
Њ "0Ђ-
&#
tensor_0џџџџџџџџџ 
 
-__inference_q_activation_layer_call_fn_461394\3Ђ0
)Ђ&
$!
inputsџџџџџџџџџ 
Њ "%"
unknownџџџџџџџџџ Д
E__inference_q_dense_1_layer_call_and_return_conditional_losses_461537k3Ђ0
)Ђ&
$!
inputsџџџџџџџџџ 
Њ "0Ђ-
&#
tensor_0џџџџџџџџџ 
 
*__inference_q_dense_1_layer_call_fn_461452`3Ђ0
)Ђ&
$!
inputsџџџџџџџџџ 
Њ "%"
unknownџџџџџџџџџ Д
E__inference_q_dense_2_layer_call_and_return_conditional_losses_461685k3Ђ0
)Ђ&
$!
inputsџџџџџџџџџ 
Њ "0Ђ-
&#
tensor_0џџџџџџџџџ 
 
*__inference_q_dense_2_layer_call_fn_461600`3Ђ0
)Ђ&
$!
inputsџџџџџџџџџ 
Њ "%"
unknownџџџџџџџџџ Ќ
E__inference_q_dense_3_layer_call_and_return_conditional_losses_461816c/Ђ,
%Ђ"
 
inputsџџџџџџџџџ 
Њ ",Ђ)
"
tensor_0џџџџџџџџџ 
 
*__inference_q_dense_3_layer_call_fn_461748X/Ђ,
%Ђ"
 
inputsџџџџџџџџџ 
Њ "!
unknownџџџџџџџџџ Ќ
E__inference_q_dense_4_layer_call_and_return_conditional_losses_461947c/Ђ,
%Ђ"
 
inputsџџџџџџџџџ 
Њ ",Ђ)
"
tensor_0џџџџџџџџџ
 
*__inference_q_dense_4_layer_call_fn_461879X/Ђ,
%Ђ"
 
inputsџџџџџџџџџ 
Њ "!
unknownџџџџџџџџџВ
C__inference_q_dense_layer_call_and_return_conditional_losses_461389k3Ђ0
)Ђ&
$!
inputsџџџџџџџџџ
Њ "0Ђ-
&#
tensor_0џџџџџџџџџ 
 
(__inference_q_dense_layer_call_fn_461304`3Ђ0
)Ђ&
$!
inputsџџџџџџџџџ
Њ "%"
unknownџџџџџџџџџ Т
H__inference_sequential_1_layer_call_and_return_conditional_losses_458645v@Ђ=
6Ђ3
)&
q_dense_3_inputџџџџџџџџџ 
p 

 
Њ ",Ђ)
"
tensor_0џџџџџџџџџ
 Т
H__inference_sequential_1_layer_call_and_return_conditional_losses_458660v@Ђ=
6Ђ3
)&
q_dense_3_inputџџџџџџџџџ 
p

 
Њ ",Ђ)
"
tensor_0џџџџџџџџџ
 Й
H__inference_sequential_1_layer_call_and_return_conditional_losses_461118m7Ђ4
-Ђ*
 
inputsџџџџџџџџџ 
p 

 
Њ ",Ђ)
"
tensor_0џџџџџџџџџ
 Й
H__inference_sequential_1_layer_call_and_return_conditional_losses_461295m7Ђ4
-Ђ*
 
inputsџџџџџџџџџ 
p

 
Њ ",Ђ)
"
tensor_0џџџџџџџџџ
 
-__inference_sequential_1_layer_call_fn_458550k@Ђ=
6Ђ3
)&
q_dense_3_inputџџџџџџџџџ 
p 

 
Њ "!
unknownџџџџџџџџџ
-__inference_sequential_1_layer_call_fn_458630k@Ђ=
6Ђ3
)&
q_dense_3_inputџџџџџџџџџ 
p

 
Њ "!
unknownџџџџџџџџџ
-__inference_sequential_1_layer_call_fn_460928b7Ђ4
-Ђ*
 
inputsџџџџџџџџџ 
p 

 
Њ "!
unknownџџџџџџџџџ
-__inference_sequential_1_layer_call_fn_460941b7Ђ4
-Ђ*
 
inputsџџџџџџџџџ 
p

 
Њ "!
unknownџџџџџџџџџШ
F__inference_sequential_layer_call_and_return_conditional_losses_458310~BЂ?
8Ђ5
+(
q_dense_inputџџџџџџџџџ
p 

 
Њ "0Ђ-
&#
tensor_0џџџџџџџџџ 
 Ш
F__inference_sequential_layer_call_and_return_conditional_losses_458332~BЂ?
8Ђ5
+(
q_dense_inputџџџџџџџџџ
p

 
Њ "0Ђ-
&#
tensor_0џџџџџџџџџ 
 С
F__inference_sequential_layer_call_and_return_conditional_losses_460533w;Ђ8
1Ђ.
$!
inputsџџџџџџџџџ
p 

 
Њ "0Ђ-
&#
tensor_0џџџџџџџџџ 
 С
F__inference_sequential_layer_call_and_return_conditional_losses_460915w;Ђ8
1Ђ.
$!
inputsџџџџџџџџџ
p

 
Њ "0Ђ-
&#
tensor_0џџџџџџџџџ 
 Ђ
+__inference_sequential_layer_call_fn_458167sBЂ?
8Ђ5
+(
q_dense_inputџџџџџџџџџ
p 

 
Њ "%"
unknownџџџџџџџџџ Ђ
+__inference_sequential_layer_call_fn_458288sBЂ?
8Ђ5
+(
q_dense_inputџџџџџџџџџ
p

 
Њ "%"
unknownџџџџџџџџџ 
+__inference_sequential_layer_call_fn_460134l;Ђ8
1Ђ.
$!
inputsџџџџџџџџџ
p 

 
Њ "%"
unknownџџџџџџџџџ 
+__inference_sequential_layer_call_fn_460151l;Ђ8
1Ђ.
$!
inputsџџџџџџџџџ
p

 
Њ "%"
unknownџџџџџџџџџ Ћ
$__inference_signature_wrapper_458903
?Ђ<
Ђ 
5Њ2
0
input_1%"
input_1џџџџџџџџџ"3Њ0
.
output_1"
output_1џџџџџџџџџ
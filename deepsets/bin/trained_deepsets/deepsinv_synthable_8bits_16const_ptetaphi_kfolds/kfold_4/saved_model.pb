€µ
њО
D
AddV2
x"T
y"T
z"T"
Ttype:
2	АР
^
AssignVariableOp
resource
value"dtype"
dtypetype"
validate_shapebool( И
А
BiasAdd

value"T	
bias"T
output"T""
Ttype:
2	"-
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
$
DisableCopyOnRead
resourceИ
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
u
MatMul
a"T
b"T
product"T"
transpose_abool( "
transpose_bbool( "
Ttype:
2	
>
Maximum
x"T
y"T
z"T"
Ttype:
2	
П
Mean

input"T
reduction_indices"Tidx
output"T"
	keep_dimsbool( ""
Ttype:
2	"
Tidxtype0:
2	
Ж
MergeV2Checkpoints
checkpoint_prefixes
destination_prefix"
delete_old_dirsbool("
allow_missing_filesbool( И
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
2	Р
0
Neg
x"T
y"T"
Ttype:
2
	

NoOp
:
OnesLike
x"T
y"T"
Ttype:
2	

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
dtypetypeИ
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
list(type)(0И
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
list(type)(0И
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
d
Shape

input"T&
output"out_typeКнout_type"	
Ttype"
out_typetype0:
2	
H
ShardedFilename
basename	
shard

num_shards
filename
9
Softmax
logits"T
softmax"T"
Ttype:
2
Ѕ
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
executor_typestring И®
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
L

StringJoin
inputs*N

output"

Nint("
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
Ц
VarHandleOp
resource"
	containerstring "
shared_namestring "
dtypetype"
shapeshape"#
allowed_deviceslist(string)
 И"serve*2.14.02v2.14.0-rc1-21-g4dacf3f368e8Цх
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
z
Adam/v/dense/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape:*"
shared_nameAdam/v/dense/bias
s
%Adam/v/dense/bias/Read/ReadVariableOpReadVariableOpAdam/v/dense/bias*
_output_shapes
:*
dtype0
z
Adam/m/dense/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape:*"
shared_nameAdam/m/dense/bias
s
%Adam/m/dense/bias/Read/ReadVariableOpReadVariableOpAdam/m/dense/bias*
_output_shapes
:*
dtype0
В
Adam/v/dense/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
: *$
shared_nameAdam/v/dense/kernel
{
'Adam/v/dense/kernel/Read/ReadVariableOpReadVariableOpAdam/v/dense/kernel*
_output_shapes

: *
dtype0
В
Adam/m/dense/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
: *$
shared_nameAdam/m/dense/kernel
{
'Adam/m/dense/kernel/Read/ReadVariableOpReadVariableOpAdam/m/dense/kernel*
_output_shapes

: *
dtype0
v
Adam/v/rho/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: * 
shared_nameAdam/v/rho/bias
o
#Adam/v/rho/bias/Read/ReadVariableOpReadVariableOpAdam/v/rho/bias*
_output_shapes
: *
dtype0
v
Adam/m/rho/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: * 
shared_nameAdam/m/rho/bias
o
#Adam/m/rho/bias/Read/ReadVariableOpReadVariableOpAdam/m/rho/bias*
_output_shapes
: *
dtype0
~
Adam/v/rho/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *"
shared_nameAdam/v/rho/kernel
w
%Adam/v/rho/kernel/Read/ReadVariableOpReadVariableOpAdam/v/rho/kernel*
_output_shapes

:  *
dtype0
~
Adam/m/rho/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *"
shared_nameAdam/m/rho/kernel
w
%Adam/m/rho/kernel/Read/ReadVariableOpReadVariableOpAdam/m/rho/kernel*
_output_shapes

:  *
dtype0
x
Adam/v/phi3/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: *!
shared_nameAdam/v/phi3/bias
q
$Adam/v/phi3/bias/Read/ReadVariableOpReadVariableOpAdam/v/phi3/bias*
_output_shapes
: *
dtype0
x
Adam/m/phi3/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: *!
shared_nameAdam/m/phi3/bias
q
$Adam/m/phi3/bias/Read/ReadVariableOpReadVariableOpAdam/m/phi3/bias*
_output_shapes
: *
dtype0
А
Adam/v/phi3/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *#
shared_nameAdam/v/phi3/kernel
y
&Adam/v/phi3/kernel/Read/ReadVariableOpReadVariableOpAdam/v/phi3/kernel*
_output_shapes

:  *
dtype0
А
Adam/m/phi3/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *#
shared_nameAdam/m/phi3/kernel
y
&Adam/m/phi3/kernel/Read/ReadVariableOpReadVariableOpAdam/m/phi3/kernel*
_output_shapes

:  *
dtype0
x
Adam/v/phi2/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: *!
shared_nameAdam/v/phi2/bias
q
$Adam/v/phi2/bias/Read/ReadVariableOpReadVariableOpAdam/v/phi2/bias*
_output_shapes
: *
dtype0
x
Adam/m/phi2/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: *!
shared_nameAdam/m/phi2/bias
q
$Adam/m/phi2/bias/Read/ReadVariableOpReadVariableOpAdam/m/phi2/bias*
_output_shapes
: *
dtype0
А
Adam/v/phi2/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *#
shared_nameAdam/v/phi2/kernel
y
&Adam/v/phi2/kernel/Read/ReadVariableOpReadVariableOpAdam/v/phi2/kernel*
_output_shapes

:  *
dtype0
А
Adam/m/phi2/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *#
shared_nameAdam/m/phi2/kernel
y
&Adam/m/phi2/kernel/Read/ReadVariableOpReadVariableOpAdam/m/phi2/kernel*
_output_shapes

:  *
dtype0
x
Adam/v/phi1/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: *!
shared_nameAdam/v/phi1/bias
q
$Adam/v/phi1/bias/Read/ReadVariableOpReadVariableOpAdam/v/phi1/bias*
_output_shapes
: *
dtype0
x
Adam/m/phi1/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: *!
shared_nameAdam/m/phi1/bias
q
$Adam/m/phi1/bias/Read/ReadVariableOpReadVariableOpAdam/m/phi1/bias*
_output_shapes
: *
dtype0
А
Adam/v/phi1/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
: *#
shared_nameAdam/v/phi1/kernel
y
&Adam/v/phi1/kernel/Read/ReadVariableOpReadVariableOpAdam/v/phi1/kernel*
_output_shapes

: *
dtype0
А
Adam/m/phi1/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
: *#
shared_nameAdam/m/phi1/kernel
y
&Adam/m/phi1/kernel/Read/ReadVariableOpReadVariableOpAdam/m/phi1/kernel*
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
l

dense/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape:*
shared_name
dense/bias
e
dense/bias/Read/ReadVariableOpReadVariableOp
dense/bias*
_output_shapes
:*
dtype0
t
dense/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
: *
shared_namedense/kernel
m
 dense/kernel/Read/ReadVariableOpReadVariableOpdense/kernel*
_output_shapes

: *
dtype0
h
rho/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: *
shared_name
rho/bias
a
rho/bias/Read/ReadVariableOpReadVariableOprho/bias*
_output_shapes
: *
dtype0
p

rho/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *
shared_name
rho/kernel
i
rho/kernel/Read/ReadVariableOpReadVariableOp
rho/kernel*
_output_shapes

:  *
dtype0
j
	phi3/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: *
shared_name	phi3/bias
c
phi3/bias/Read/ReadVariableOpReadVariableOp	phi3/bias*
_output_shapes
: *
dtype0
r
phi3/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *
shared_namephi3/kernel
k
phi3/kernel/Read/ReadVariableOpReadVariableOpphi3/kernel*
_output_shapes

:  *
dtype0
j
	phi2/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: *
shared_name	phi2/bias
c
phi2/bias/Read/ReadVariableOpReadVariableOp	phi2/bias*
_output_shapes
: *
dtype0
r
phi2/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *
shared_namephi2/kernel
k
phi2/kernel/Read/ReadVariableOpReadVariableOpphi2/kernel*
_output_shapes

:  *
dtype0
j
	phi1/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: *
shared_name	phi1/bias
c
phi1/bias/Read/ReadVariableOpReadVariableOp	phi1/bias*
_output_shapes
: *
dtype0
r
phi1/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
: *
shared_namephi1/kernel
k
phi1/kernel/Read/ReadVariableOpReadVariableOpphi1/kernel*
_output_shapes

: *
dtype0
Ж
serving_default_input_layerPlaceholder*+
_output_shapes
:€€€€€€€€€*
dtype0* 
shape:€€€€€€€€€
»
StatefulPartitionedCallStatefulPartitionedCallserving_default_input_layerphi1/kernel	phi1/biasphi2/kernel	phi2/biasphi3/kernel	phi3/bias
rho/kernelrho/biasdense/kernel
dense/bias*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:€€€€€€€€€*,
_read_only_resource_inputs

	
*2
config_proto" 

CPU

GPU2 *0J 8В *.
f)R'
%__inference_signature_wrapper_1504265

NoOpNoOp
в`
ConstConst"/device:CPU:0*
_output_shapes
: *
dtype0*Э`
valueУ`BР` BЙ`
ъ
layer-0
layer_with_weights-0
layer-1
layer-2
layer_with_weights-1
layer-3
layer-4
layer_with_weights-2
layer-5
layer-6
layer-7
	layer-8

layer_with_weights-3

layer-9
layer-10
layer_with_weights-4
layer-11
layer-12
	variables
trainable_variables
regularization_losses
	keras_api
__call__
*&call_and_return_all_conditional_losses
_default_save_signature
	optimizer

signatures*
* 
т
	variables
trainable_variables
regularization_losses
	keras_api
__call__
*&call_and_return_all_conditional_losses
kernel_quantizer_internal
bias_quantizer_internal

quantizers

 kernel
!bias*
Э
"	variables
#trainable_variables
$regularization_losses
%	keras_api
&__call__
*'&call_and_return_all_conditional_losses
(	quantizer* 
т
)	variables
*trainable_variables
+regularization_losses
,	keras_api
-__call__
*.&call_and_return_all_conditional_losses
/kernel_quantizer_internal
0bias_quantizer_internal
1
quantizers

2kernel
3bias*
Э
4	variables
5trainable_variables
6regularization_losses
7	keras_api
8__call__
*9&call_and_return_all_conditional_losses
:	quantizer* 
т
;	variables
<trainable_variables
=regularization_losses
>	keras_api
?__call__
*@&call_and_return_all_conditional_losses
Akernel_quantizer_internal
Bbias_quantizer_internal
C
quantizers

Dkernel
Ebias*
Э
F	variables
Gtrainable_variables
Hregularization_losses
I	keras_api
J__call__
*K&call_and_return_all_conditional_losses
L	quantizer* 
≠
M	variables
Ntrainable_variables
Oregularization_losses
P	keras_api
Q__call__
*R&call_and_return_all_conditional_losses
S
activation
S	quantizer* 
О
T	variables
Utrainable_variables
Vregularization_losses
W	keras_api
X__call__
*Y&call_and_return_all_conditional_losses* 
т
Z	variables
[trainable_variables
\regularization_losses
]	keras_api
^__call__
*_&call_and_return_all_conditional_losses
`kernel_quantizer_internal
abias_quantizer_internal
b
quantizers

ckernel
dbias*
Э
e	variables
ftrainable_variables
gregularization_losses
h	keras_api
i__call__
*j&call_and_return_all_conditional_losses
k	quantizer* 
¶
l	variables
mtrainable_variables
nregularization_losses
o	keras_api
p__call__
*q&call_and_return_all_conditional_losses

rkernel
sbias*
О
t	variables
utrainable_variables
vregularization_losses
w	keras_api
x__call__
*y&call_and_return_all_conditional_losses* 
J
 0
!1
22
33
D4
E5
c6
d7
r8
s9*
J
 0
!1
22
33
D4
E5
c6
d7
r8
s9*
* 
∞
znon_trainable_variables

{layers
|metrics
}layer_regularization_losses
~layer_metrics
	variables
trainable_variables
regularization_losses
__call__
_default_save_signature
*&call_and_return_all_conditional_losses
&"call_and_return_conditional_losses*

trace_0
Аtrace_1* 

Бtrace_0
Вtrace_1* 
* 
И
Г
_variables
Д_iterations
Е_learning_rate
Ж_index_dict
З
_momentums
И_velocities
Й_update_step_xla*

Кserving_default* 

 0
!1*

 0
!1*
* 
Ш
Лnon_trainable_variables
Мlayers
Нmetrics
 Оlayer_regularization_losses
Пlayer_metrics
	variables
trainable_variables
regularization_losses
__call__
*&call_and_return_all_conditional_losses
&"call_and_return_conditional_losses*

Рtrace_0* 

Сtrace_0* 
* 
* 

0
1* 
[U
VARIABLE_VALUEphi1/kernel6layer_with_weights-0/kernel/.ATTRIBUTES/VARIABLE_VALUE*
WQ
VARIABLE_VALUE	phi1/bias4layer_with_weights-0/bias/.ATTRIBUTES/VARIABLE_VALUE*
* 
* 
* 
Ц
Тnon_trainable_variables
Уlayers
Фmetrics
 Хlayer_regularization_losses
Цlayer_metrics
"	variables
#trainable_variables
$regularization_losses
&__call__
*'&call_and_return_all_conditional_losses
&'"call_and_return_conditional_losses* 

Чtrace_0* 

Шtrace_0* 
* 

20
31*

20
31*
* 
Ш
Щnon_trainable_variables
Ъlayers
Ыmetrics
 Ьlayer_regularization_losses
Эlayer_metrics
)	variables
*trainable_variables
+regularization_losses
-__call__
*.&call_and_return_all_conditional_losses
&."call_and_return_conditional_losses*

Юtrace_0* 

Яtrace_0* 
* 
* 

/0
01* 
[U
VARIABLE_VALUEphi2/kernel6layer_with_weights-1/kernel/.ATTRIBUTES/VARIABLE_VALUE*
WQ
VARIABLE_VALUE	phi2/bias4layer_with_weights-1/bias/.ATTRIBUTES/VARIABLE_VALUE*
* 
* 
* 
Ц
†non_trainable_variables
°layers
Ґmetrics
 £layer_regularization_losses
§layer_metrics
4	variables
5trainable_variables
6regularization_losses
8__call__
*9&call_and_return_all_conditional_losses
&9"call_and_return_conditional_losses* 

•trace_0* 

¶trace_0* 
* 

D0
E1*

D0
E1*
* 
Ш
Іnon_trainable_variables
®layers
©metrics
 ™layer_regularization_losses
Ђlayer_metrics
;	variables
<trainable_variables
=regularization_losses
?__call__
*@&call_and_return_all_conditional_losses
&@"call_and_return_conditional_losses*

ђtrace_0* 

≠trace_0* 
* 
* 

A0
B1* 
[U
VARIABLE_VALUEphi3/kernel6layer_with_weights-2/kernel/.ATTRIBUTES/VARIABLE_VALUE*
WQ
VARIABLE_VALUE	phi3/bias4layer_with_weights-2/bias/.ATTRIBUTES/VARIABLE_VALUE*
* 
* 
* 
Ц
Ѓnon_trainable_variables
ѓlayers
∞metrics
 ±layer_regularization_losses
≤layer_metrics
F	variables
Gtrainable_variables
Hregularization_losses
J__call__
*K&call_and_return_all_conditional_losses
&K"call_and_return_conditional_losses* 

≥trace_0* 

іtrace_0* 
* 
* 
* 
* 
Ц
µnon_trainable_variables
ґlayers
Јmetrics
 Єlayer_regularization_losses
єlayer_metrics
M	variables
Ntrainable_variables
Oregularization_losses
Q__call__
*R&call_and_return_all_conditional_losses
&R"call_and_return_conditional_losses* 

Їtrace_0* 

їtrace_0* 
* 
* 
* 
* 
Ц
Љnon_trainable_variables
љlayers
Њmetrics
 њlayer_regularization_losses
јlayer_metrics
T	variables
Utrainable_variables
Vregularization_losses
X__call__
*Y&call_and_return_all_conditional_losses
&Y"call_and_return_conditional_losses* 

Ѕtrace_0* 

¬trace_0* 

c0
d1*

c0
d1*
* 
Ш
√non_trainable_variables
ƒlayers
≈metrics
 ∆layer_regularization_losses
«layer_metrics
Z	variables
[trainable_variables
\regularization_losses
^__call__
*_&call_and_return_all_conditional_losses
&_"call_and_return_conditional_losses*

»trace_0* 

…trace_0* 
* 
* 

`0
a1* 
ZT
VARIABLE_VALUE
rho/kernel6layer_with_weights-3/kernel/.ATTRIBUTES/VARIABLE_VALUE*
VP
VARIABLE_VALUErho/bias4layer_with_weights-3/bias/.ATTRIBUTES/VARIABLE_VALUE*
* 
* 
* 
Ц
 non_trainable_variables
Ћlayers
ћmetrics
 Ќlayer_regularization_losses
ќlayer_metrics
e	variables
ftrainable_variables
gregularization_losses
i__call__
*j&call_and_return_all_conditional_losses
&j"call_and_return_conditional_losses* 

ѕtrace_0* 

–trace_0* 
* 

r0
s1*

r0
s1*
* 
Ш
—non_trainable_variables
“layers
”metrics
 ‘layer_regularization_losses
’layer_metrics
l	variables
mtrainable_variables
nregularization_losses
p__call__
*q&call_and_return_all_conditional_losses
&q"call_and_return_conditional_losses*

÷trace_0* 

„trace_0* 
\V
VARIABLE_VALUEdense/kernel6layer_with_weights-4/kernel/.ATTRIBUTES/VARIABLE_VALUE*
XR
VARIABLE_VALUE
dense/bias4layer_with_weights-4/bias/.ATTRIBUTES/VARIABLE_VALUE*
* 
* 
* 
Ц
Ўnon_trainable_variables
ўlayers
Џmetrics
 џlayer_regularization_losses
№layer_metrics
t	variables
utrainable_variables
vregularization_losses
x__call__
*y&call_and_return_all_conditional_losses
&y"call_and_return_conditional_losses* 

Ёtrace_0* 

ёtrace_0* 
* 
b
0
1
2
3
4
5
6
7
	8

9
10
11
12*

я0
а1*
* 
* 
* 
* 
* 
* 
Ј
Д0
б1
в2
г3
д4
е5
ж6
з7
и8
й9
к10
л11
м12
н13
о14
п15
р16
с17
т18
у19
ф20*
SM
VARIABLE_VALUE	iteration0optimizer/_iterations/.ATTRIBUTES/VARIABLE_VALUE*
ZT
VARIABLE_VALUElearning_rate3optimizer/_learning_rate/.ATTRIBUTES/VARIABLE_VALUE*
* 
T
б0
г1
е2
з3
й4
л5
н6
п7
с8
у9*
T
в0
д1
ж2
и3
к4
м5
о6
р7
т8
ф9*
О
хtrace_0
цtrace_1
чtrace_2
шtrace_3
щtrace_4
ъtrace_5
ыtrace_6
ьtrace_7
эtrace_8
юtrace_9* 
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
<
€	variables
А	keras_api

Бtotal

Вcount*
M
Г	variables
Д	keras_api

Еtotal

Жcount
З
_fn_kwargs*
]W
VARIABLE_VALUEAdam/m/phi1/kernel1optimizer/_variables/1/.ATTRIBUTES/VARIABLE_VALUE*
]W
VARIABLE_VALUEAdam/v/phi1/kernel1optimizer/_variables/2/.ATTRIBUTES/VARIABLE_VALUE*
[U
VARIABLE_VALUEAdam/m/phi1/bias1optimizer/_variables/3/.ATTRIBUTES/VARIABLE_VALUE*
[U
VARIABLE_VALUEAdam/v/phi1/bias1optimizer/_variables/4/.ATTRIBUTES/VARIABLE_VALUE*
]W
VARIABLE_VALUEAdam/m/phi2/kernel1optimizer/_variables/5/.ATTRIBUTES/VARIABLE_VALUE*
]W
VARIABLE_VALUEAdam/v/phi2/kernel1optimizer/_variables/6/.ATTRIBUTES/VARIABLE_VALUE*
[U
VARIABLE_VALUEAdam/m/phi2/bias1optimizer/_variables/7/.ATTRIBUTES/VARIABLE_VALUE*
[U
VARIABLE_VALUEAdam/v/phi2/bias1optimizer/_variables/8/.ATTRIBUTES/VARIABLE_VALUE*
]W
VARIABLE_VALUEAdam/m/phi3/kernel1optimizer/_variables/9/.ATTRIBUTES/VARIABLE_VALUE*
^X
VARIABLE_VALUEAdam/v/phi3/kernel2optimizer/_variables/10/.ATTRIBUTES/VARIABLE_VALUE*
\V
VARIABLE_VALUEAdam/m/phi3/bias2optimizer/_variables/11/.ATTRIBUTES/VARIABLE_VALUE*
\V
VARIABLE_VALUEAdam/v/phi3/bias2optimizer/_variables/12/.ATTRIBUTES/VARIABLE_VALUE*
]W
VARIABLE_VALUEAdam/m/rho/kernel2optimizer/_variables/13/.ATTRIBUTES/VARIABLE_VALUE*
]W
VARIABLE_VALUEAdam/v/rho/kernel2optimizer/_variables/14/.ATTRIBUTES/VARIABLE_VALUE*
[U
VARIABLE_VALUEAdam/m/rho/bias2optimizer/_variables/15/.ATTRIBUTES/VARIABLE_VALUE*
[U
VARIABLE_VALUEAdam/v/rho/bias2optimizer/_variables/16/.ATTRIBUTES/VARIABLE_VALUE*
_Y
VARIABLE_VALUEAdam/m/dense/kernel2optimizer/_variables/17/.ATTRIBUTES/VARIABLE_VALUE*
_Y
VARIABLE_VALUEAdam/v/dense/kernel2optimizer/_variables/18/.ATTRIBUTES/VARIABLE_VALUE*
]W
VARIABLE_VALUEAdam/m/dense/bias2optimizer/_variables/19/.ATTRIBUTES/VARIABLE_VALUE*
]W
VARIABLE_VALUEAdam/v/dense/bias2optimizer/_variables/20/.ATTRIBUTES/VARIABLE_VALUE*
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
Б0
В1*

€	variables*
UO
VARIABLE_VALUEtotal_14keras_api/metrics/0/total/.ATTRIBUTES/VARIABLE_VALUE*
UO
VARIABLE_VALUEcount_14keras_api/metrics/0/count/.ATTRIBUTES/VARIABLE_VALUE*

Е0
Ж1*

Г	variables*
SM
VARIABLE_VALUEtotal4keras_api/metrics/1/total/.ATTRIBUTES/VARIABLE_VALUE*
SM
VARIABLE_VALUEcount4keras_api/metrics/1/count/.ATTRIBUTES/VARIABLE_VALUE*
* 
O
saver_filenamePlaceholder*
_output_shapes
: *
dtype0*
shape: 
у
StatefulPartitionedCall_1StatefulPartitionedCallsaver_filenamephi1/kernel	phi1/biasphi2/kernel	phi2/biasphi3/kernel	phi3/bias
rho/kernelrho/biasdense/kernel
dense/bias	iterationlearning_rateAdam/m/phi1/kernelAdam/v/phi1/kernelAdam/m/phi1/biasAdam/v/phi1/biasAdam/m/phi2/kernelAdam/v/phi2/kernelAdam/m/phi2/biasAdam/v/phi2/biasAdam/m/phi3/kernelAdam/v/phi3/kernelAdam/m/phi3/biasAdam/v/phi3/biasAdam/m/rho/kernelAdam/v/rho/kernelAdam/m/rho/biasAdam/v/rho/biasAdam/m/dense/kernelAdam/v/dense/kernelAdam/m/dense/biasAdam/v/dense/biastotal_1count_1totalcountConst*1
Tin*
(2&*
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
GPU2 *0J 8В *)
f$R"
 __inference__traced_save_1505196
о
StatefulPartitionedCall_2StatefulPartitionedCallsaver_filenamephi1/kernel	phi1/biasphi2/kernel	phi2/biasphi3/kernel	phi3/bias
rho/kernelrho/biasdense/kernel
dense/bias	iterationlearning_rateAdam/m/phi1/kernelAdam/v/phi1/kernelAdam/m/phi1/biasAdam/v/phi1/biasAdam/m/phi2/kernelAdam/v/phi2/kernelAdam/m/phi2/biasAdam/v/phi2/biasAdam/m/phi3/kernelAdam/v/phi3/kernelAdam/m/phi3/biasAdam/v/phi3/biasAdam/m/rho/kernelAdam/v/rho/kernelAdam/m/rho/biasAdam/v/rho/biasAdam/m/dense/kernelAdam/v/dense/kernelAdam/m/dense/biasAdam/v/dense/biastotal_1count_1totalcount*0
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
GPU2 *0J 8В *,
f'R%
#__inference__traced_restore_1505313–ј
Ќ
`
D__inference_softmax_layer_call_and_return_conditional_losses_1504958

inputs
identityL
SoftmaxSoftmaxinputs*
T0*'
_output_shapes
:€€€€€€€€€Y
IdentityIdentitySoftmax:softmax:0*
T0*'
_output_shapes
:€€€€€€€€€"
identityIdentity:output:0*(
_construction_contextkEagerRuntime*&
_input_shapes
:€€€€€€€€€:O K
'
_output_shapes
:€€€€€€€€€
 
_user_specified_nameinputs
£=
§
A__inference_phi1_layer_call_and_return_conditional_losses_1503570

inputs)
readvariableop_resource: '
readvariableop_3_resource: 
identityИҐReadVariableOpҐReadVariableOp_1ҐReadVariableOp_2ҐReadVariableOp_3ҐReadVariableOp_4ҐReadVariableOp_5G
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
 *   C[
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
 *  юBv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   √v
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
 *   C^
	truediv_1RealDiv	mul_1:z:0truediv_1/y:output:0*
T0*
_output_shapes

: L
mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?V
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
 *  А?R
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

: I
ShapeShapeinputs*
T0*
_output_shapes
::нѕQ
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
valueB"€€€€   d
ReshapeReshapeinputsReshape/shape:output:0*
T0*'
_output_shapes
:€€€€€€€€€_
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
valueB"   €€€€f
	Reshape_1Reshapetranspose:y:0Reshape_1/shape:output:0*
T0*
_output_shapes

: h
MatMulMatMulReshape:output:0Reshape_1:output:0*
T0*'
_output_shapes
:€€€€€€€€€ S
Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :S
Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : П
Reshape_2/shapePackunstack:output:0Reshape_2/shape/1:output:0Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:v
	Reshape_2ReshapeMatMul:product:0Reshape_2/shape:output:0*
T0*+
_output_shapes
:€€€€€€€€€ I
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
 *   C]
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
 *  юBv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   √x
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
 *   CZ
	truediv_3RealDiv	mul_5:z:0truediv_3/y:output:0*
T0*
_output_shapes
: L
mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?R
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
 *  А?N
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
:€€€€€€€€€ c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:€€€€€€€€€ Т
NoOpNoOp^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:€€€€€€€€€: : 2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_52 
ReadVariableOpReadVariableOp:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:S O
+
_output_shapes
:€€€€€€€€€
 
_user_specified_nameinputs
Ф 
g
K__inference_q_activation_1_layer_call_and_return_conditional_losses_1503760

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
:€€€€€€€€€ J
ReluReluinputs*
T0*+
_output_shapes
:€€€€€€€€€ S
	ones_likeOnesLikeinputs*
T0*+
_output_shapes
:€€€€€€€€€ D
sub_2Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: Z
mulMulones_like:y:0	sub_2:z:0*
T0*+
_output_shapes
:€€€€€€€€€ v
SelectV2SelectV2LessEqual:z:0Relu:activations:0mul:z:0*
T0*+
_output_shapes
:€€€€€€€€€ T
mul_1MulinputsCast:y:0*
T0*+
_output_shapes
:€€€€€€€€€ _
truedivRealDiv	mul_1:z:0
Cast_1:y:0*
T0*+
_output_shapes
:€€€€€€€€€ M
NegNegtruediv:z:0*
T0*+
_output_shapes
:€€€€€€€€€ Q
RoundRoundtruediv:z:0*
T0*+
_output_shapes
:€€€€€€€€€ V
addAddV2Neg:y:0	Round:y:0*
T0*+
_output_shapes
:€€€€€€€€€ [
StopGradientStopGradientadd:z:0*
T0*+
_output_shapes
:€€€€€€€€€ h
add_1AddV2truediv:z:0StopGradient:output:0*
T0*+
_output_shapes
:€€€€€€€€€ _
	truediv_1RealDiv	add_1:z:0Cast:y:0*
T0*+
_output_shapes
:€€€€€€€€€ P
truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?U
	truediv_2RealDivtruediv_2/x:output:0Cast:y:0*
T0*
_output_shapes
: L
sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?N
sub_3Subsub_3/x:output:0truediv_2:z:0*
T0*
_output_shapes
: p
clip_by_value/MinimumMinimumtruediv_1:z:0	sub_3:z:0*
T0*+
_output_shapes
:€€€€€€€€€ T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    Г
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*+
_output_shapes
:€€€€€€€€€ a
mul_2Mul
Cast_1:y:0clip_by_value:z:0*
T0*+
_output_shapes
:€€€€€€€€€ U
Neg_1NegSelectV2:output:0*
T0*+
_output_shapes
:€€€€€€€€€ Z
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*+
_output_shapes
:€€€€€€€€€ L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?_
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*+
_output_shapes
:€€€€€€€€€ _
StopGradient_1StopGradient	mul_3:z:0*
T0*+
_output_shapes
:€€€€€€€€€ p
add_3AddV2SelectV2:output:0StopGradient_1:output:0*
T0*+
_output_shapes
:€€€€€€€€€ U
IdentityIdentity	add_3:z:0*
T0*+
_output_shapes
:€€€€€€€€€ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:€€€€€€€€€ :S O
+
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
Ч£
д
#__inference__traced_restore_1505313
file_prefix.
assignvariableop_phi1_kernel: *
assignvariableop_1_phi1_bias: 0
assignvariableop_2_phi2_kernel:  *
assignvariableop_3_phi2_bias: 0
assignvariableop_4_phi3_kernel:  *
assignvariableop_5_phi3_bias: /
assignvariableop_6_rho_kernel:  )
assignvariableop_7_rho_bias: 1
assignvariableop_8_dense_kernel: +
assignvariableop_9_dense_bias:'
assignvariableop_10_iteration:	 +
!assignvariableop_11_learning_rate: 8
&assignvariableop_12_adam_m_phi1_kernel: 8
&assignvariableop_13_adam_v_phi1_kernel: 2
$assignvariableop_14_adam_m_phi1_bias: 2
$assignvariableop_15_adam_v_phi1_bias: 8
&assignvariableop_16_adam_m_phi2_kernel:  8
&assignvariableop_17_adam_v_phi2_kernel:  2
$assignvariableop_18_adam_m_phi2_bias: 2
$assignvariableop_19_adam_v_phi2_bias: 8
&assignvariableop_20_adam_m_phi3_kernel:  8
&assignvariableop_21_adam_v_phi3_kernel:  2
$assignvariableop_22_adam_m_phi3_bias: 2
$assignvariableop_23_adam_v_phi3_bias: 7
%assignvariableop_24_adam_m_rho_kernel:  7
%assignvariableop_25_adam_v_rho_kernel:  1
#assignvariableop_26_adam_m_rho_bias: 1
#assignvariableop_27_adam_v_rho_bias: 9
'assignvariableop_28_adam_m_dense_kernel: 9
'assignvariableop_29_adam_v_dense_kernel: 3
%assignvariableop_30_adam_m_dense_bias:3
%assignvariableop_31_adam_v_dense_bias:%
assignvariableop_32_total_1: %
assignvariableop_33_count_1: #
assignvariableop_34_total: #
assignvariableop_35_count: 
identity_37ИҐAssignVariableOpҐAssignVariableOp_1ҐAssignVariableOp_10ҐAssignVariableOp_11ҐAssignVariableOp_12ҐAssignVariableOp_13ҐAssignVariableOp_14ҐAssignVariableOp_15ҐAssignVariableOp_16ҐAssignVariableOp_17ҐAssignVariableOp_18ҐAssignVariableOp_19ҐAssignVariableOp_2ҐAssignVariableOp_20ҐAssignVariableOp_21ҐAssignVariableOp_22ҐAssignVariableOp_23ҐAssignVariableOp_24ҐAssignVariableOp_25ҐAssignVariableOp_26ҐAssignVariableOp_27ҐAssignVariableOp_28ҐAssignVariableOp_29ҐAssignVariableOp_3ҐAssignVariableOp_30ҐAssignVariableOp_31ҐAssignVariableOp_32ҐAssignVariableOp_33ҐAssignVariableOp_34ҐAssignVariableOp_35ҐAssignVariableOp_4ҐAssignVariableOp_5ҐAssignVariableOp_6ҐAssignVariableOp_7ҐAssignVariableOp_8ҐAssignVariableOp_9щ
RestoreV2/tensor_namesConst"/device:CPU:0*
_output_shapes
:%*
dtype0*Я
valueХBТ%B6layer_with_weights-0/kernel/.ATTRIBUTES/VARIABLE_VALUEB4layer_with_weights-0/bias/.ATTRIBUTES/VARIABLE_VALUEB6layer_with_weights-1/kernel/.ATTRIBUTES/VARIABLE_VALUEB4layer_with_weights-1/bias/.ATTRIBUTES/VARIABLE_VALUEB6layer_with_weights-2/kernel/.ATTRIBUTES/VARIABLE_VALUEB4layer_with_weights-2/bias/.ATTRIBUTES/VARIABLE_VALUEB6layer_with_weights-3/kernel/.ATTRIBUTES/VARIABLE_VALUEB4layer_with_weights-3/bias/.ATTRIBUTES/VARIABLE_VALUEB6layer_with_weights-4/kernel/.ATTRIBUTES/VARIABLE_VALUEB4layer_with_weights-4/bias/.ATTRIBUTES/VARIABLE_VALUEB0optimizer/_iterations/.ATTRIBUTES/VARIABLE_VALUEB3optimizer/_learning_rate/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/1/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/2/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/3/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/4/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/5/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/6/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/7/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/8/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/9/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/10/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/11/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/12/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/13/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/14/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/15/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/16/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/17/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/18/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/19/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/20/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/0/total/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/0/count/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/1/total/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/1/count/.ATTRIBUTES/VARIABLE_VALUEB_CHECKPOINTABLE_OBJECT_GRAPHЇ
RestoreV2/shape_and_slicesConst"/device:CPU:0*
_output_shapes
:%*
dtype0*]
valueTBR%B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B Џ
	RestoreV2	RestoreV2file_prefixRestoreV2/tensor_names:output:0#RestoreV2/shape_and_slices:output:0"/device:CPU:0*™
_output_shapesЧ
Ф:::::::::::::::::::::::::::::::::::::*3
dtypes)
'2%	[
IdentityIdentityRestoreV2:tensors:0"/device:CPU:0*
T0*
_output_shapes
:ѓ
AssignVariableOpAssignVariableOpassignvariableop_phi1_kernelIdentity:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_1IdentityRestoreV2:tensors:1"/device:CPU:0*
T0*
_output_shapes
:≥
AssignVariableOp_1AssignVariableOpassignvariableop_1_phi1_biasIdentity_1:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_2IdentityRestoreV2:tensors:2"/device:CPU:0*
T0*
_output_shapes
:µ
AssignVariableOp_2AssignVariableOpassignvariableop_2_phi2_kernelIdentity_2:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_3IdentityRestoreV2:tensors:3"/device:CPU:0*
T0*
_output_shapes
:≥
AssignVariableOp_3AssignVariableOpassignvariableop_3_phi2_biasIdentity_3:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_4IdentityRestoreV2:tensors:4"/device:CPU:0*
T0*
_output_shapes
:µ
AssignVariableOp_4AssignVariableOpassignvariableop_4_phi3_kernelIdentity_4:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_5IdentityRestoreV2:tensors:5"/device:CPU:0*
T0*
_output_shapes
:≥
AssignVariableOp_5AssignVariableOpassignvariableop_5_phi3_biasIdentity_5:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_6IdentityRestoreV2:tensors:6"/device:CPU:0*
T0*
_output_shapes
:і
AssignVariableOp_6AssignVariableOpassignvariableop_6_rho_kernelIdentity_6:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_7IdentityRestoreV2:tensors:7"/device:CPU:0*
T0*
_output_shapes
:≤
AssignVariableOp_7AssignVariableOpassignvariableop_7_rho_biasIdentity_7:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_8IdentityRestoreV2:tensors:8"/device:CPU:0*
T0*
_output_shapes
:ґ
AssignVariableOp_8AssignVariableOpassignvariableop_8_dense_kernelIdentity_8:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_9IdentityRestoreV2:tensors:9"/device:CPU:0*
T0*
_output_shapes
:і
AssignVariableOp_9AssignVariableOpassignvariableop_9_dense_biasIdentity_9:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_10IdentityRestoreV2:tensors:10"/device:CPU:0*
T0	*
_output_shapes
:ґ
AssignVariableOp_10AssignVariableOpassignvariableop_10_iterationIdentity_10:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0	_
Identity_11IdentityRestoreV2:tensors:11"/device:CPU:0*
T0*
_output_shapes
:Ї
AssignVariableOp_11AssignVariableOp!assignvariableop_11_learning_rateIdentity_11:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_12IdentityRestoreV2:tensors:12"/device:CPU:0*
T0*
_output_shapes
:њ
AssignVariableOp_12AssignVariableOp&assignvariableop_12_adam_m_phi1_kernelIdentity_12:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_13IdentityRestoreV2:tensors:13"/device:CPU:0*
T0*
_output_shapes
:њ
AssignVariableOp_13AssignVariableOp&assignvariableop_13_adam_v_phi1_kernelIdentity_13:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_14IdentityRestoreV2:tensors:14"/device:CPU:0*
T0*
_output_shapes
:љ
AssignVariableOp_14AssignVariableOp$assignvariableop_14_adam_m_phi1_biasIdentity_14:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_15IdentityRestoreV2:tensors:15"/device:CPU:0*
T0*
_output_shapes
:љ
AssignVariableOp_15AssignVariableOp$assignvariableop_15_adam_v_phi1_biasIdentity_15:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_16IdentityRestoreV2:tensors:16"/device:CPU:0*
T0*
_output_shapes
:њ
AssignVariableOp_16AssignVariableOp&assignvariableop_16_adam_m_phi2_kernelIdentity_16:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_17IdentityRestoreV2:tensors:17"/device:CPU:0*
T0*
_output_shapes
:њ
AssignVariableOp_17AssignVariableOp&assignvariableop_17_adam_v_phi2_kernelIdentity_17:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_18IdentityRestoreV2:tensors:18"/device:CPU:0*
T0*
_output_shapes
:љ
AssignVariableOp_18AssignVariableOp$assignvariableop_18_adam_m_phi2_biasIdentity_18:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_19IdentityRestoreV2:tensors:19"/device:CPU:0*
T0*
_output_shapes
:љ
AssignVariableOp_19AssignVariableOp$assignvariableop_19_adam_v_phi2_biasIdentity_19:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_20IdentityRestoreV2:tensors:20"/device:CPU:0*
T0*
_output_shapes
:њ
AssignVariableOp_20AssignVariableOp&assignvariableop_20_adam_m_phi3_kernelIdentity_20:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_21IdentityRestoreV2:tensors:21"/device:CPU:0*
T0*
_output_shapes
:њ
AssignVariableOp_21AssignVariableOp&assignvariableop_21_adam_v_phi3_kernelIdentity_21:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_22IdentityRestoreV2:tensors:22"/device:CPU:0*
T0*
_output_shapes
:љ
AssignVariableOp_22AssignVariableOp$assignvariableop_22_adam_m_phi3_biasIdentity_22:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_23IdentityRestoreV2:tensors:23"/device:CPU:0*
T0*
_output_shapes
:љ
AssignVariableOp_23AssignVariableOp$assignvariableop_23_adam_v_phi3_biasIdentity_23:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_24IdentityRestoreV2:tensors:24"/device:CPU:0*
T0*
_output_shapes
:Њ
AssignVariableOp_24AssignVariableOp%assignvariableop_24_adam_m_rho_kernelIdentity_24:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_25IdentityRestoreV2:tensors:25"/device:CPU:0*
T0*
_output_shapes
:Њ
AssignVariableOp_25AssignVariableOp%assignvariableop_25_adam_v_rho_kernelIdentity_25:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_26IdentityRestoreV2:tensors:26"/device:CPU:0*
T0*
_output_shapes
:Љ
AssignVariableOp_26AssignVariableOp#assignvariableop_26_adam_m_rho_biasIdentity_26:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_27IdentityRestoreV2:tensors:27"/device:CPU:0*
T0*
_output_shapes
:Љ
AssignVariableOp_27AssignVariableOp#assignvariableop_27_adam_v_rho_biasIdentity_27:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_28IdentityRestoreV2:tensors:28"/device:CPU:0*
T0*
_output_shapes
:ј
AssignVariableOp_28AssignVariableOp'assignvariableop_28_adam_m_dense_kernelIdentity_28:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_29IdentityRestoreV2:tensors:29"/device:CPU:0*
T0*
_output_shapes
:ј
AssignVariableOp_29AssignVariableOp'assignvariableop_29_adam_v_dense_kernelIdentity_29:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_30IdentityRestoreV2:tensors:30"/device:CPU:0*
T0*
_output_shapes
:Њ
AssignVariableOp_30AssignVariableOp%assignvariableop_30_adam_m_dense_biasIdentity_30:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_31IdentityRestoreV2:tensors:31"/device:CPU:0*
T0*
_output_shapes
:Њ
AssignVariableOp_31AssignVariableOp%assignvariableop_31_adam_v_dense_biasIdentity_31:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_32IdentityRestoreV2:tensors:32"/device:CPU:0*
T0*
_output_shapes
:і
AssignVariableOp_32AssignVariableOpassignvariableop_32_total_1Identity_32:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_33IdentityRestoreV2:tensors:33"/device:CPU:0*
T0*
_output_shapes
:і
AssignVariableOp_33AssignVariableOpassignvariableop_33_count_1Identity_33:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_34IdentityRestoreV2:tensors:34"/device:CPU:0*
T0*
_output_shapes
:≤
AssignVariableOp_34AssignVariableOpassignvariableop_34_totalIdentity_34:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_35IdentityRestoreV2:tensors:35"/device:CPU:0*
T0*
_output_shapes
:≤
AssignVariableOp_35AssignVariableOpassignvariableop_35_countIdentity_35:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0Y
NoOpNoOp"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 з
Identity_36Identityfile_prefix^AssignVariableOp^AssignVariableOp_1^AssignVariableOp_10^AssignVariableOp_11^AssignVariableOp_12^AssignVariableOp_13^AssignVariableOp_14^AssignVariableOp_15^AssignVariableOp_16^AssignVariableOp_17^AssignVariableOp_18^AssignVariableOp_19^AssignVariableOp_2^AssignVariableOp_20^AssignVariableOp_21^AssignVariableOp_22^AssignVariableOp_23^AssignVariableOp_24^AssignVariableOp_25^AssignVariableOp_26^AssignVariableOp_27^AssignVariableOp_28^AssignVariableOp_29^AssignVariableOp_3^AssignVariableOp_30^AssignVariableOp_31^AssignVariableOp_32^AssignVariableOp_33^AssignVariableOp_34^AssignVariableOp_35^AssignVariableOp_4^AssignVariableOp_5^AssignVariableOp_6^AssignVariableOp_7^AssignVariableOp_8^AssignVariableOp_9^NoOp"/device:CPU:0*
T0*
_output_shapes
: W
Identity_37IdentityIdentity_36:output:0^NoOp_1*
T0*
_output_shapes
: ∞
NoOp_1NoOp^AssignVariableOp^AssignVariableOp_1^AssignVariableOp_10^AssignVariableOp_11^AssignVariableOp_12^AssignVariableOp_13^AssignVariableOp_14^AssignVariableOp_15^AssignVariableOp_16^AssignVariableOp_17^AssignVariableOp_18^AssignVariableOp_19^AssignVariableOp_2^AssignVariableOp_20^AssignVariableOp_21^AssignVariableOp_22^AssignVariableOp_23^AssignVariableOp_24^AssignVariableOp_25^AssignVariableOp_26^AssignVariableOp_27^AssignVariableOp_28^AssignVariableOp_29^AssignVariableOp_3^AssignVariableOp_30^AssignVariableOp_31^AssignVariableOp_32^AssignVariableOp_33^AssignVariableOp_34^AssignVariableOp_35^AssignVariableOp_4^AssignVariableOp_5^AssignVariableOp_6^AssignVariableOp_7^AssignVariableOp_8^AssignVariableOp_9*
_output_shapes
 "#
identity_37Identity_37:output:0*(
_construction_contextkEagerRuntime*]
_input_shapesL
J: : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : 2*
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
AssignVariableOp_1AssignVariableOp_12*
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
AssignVariableOp_2AssignVariableOp_22*
AssignVariableOp_30AssignVariableOp_302*
AssignVariableOp_31AssignVariableOp_312*
AssignVariableOp_32AssignVariableOp_322*
AssignVariableOp_33AssignVariableOp_332*
AssignVariableOp_34AssignVariableOp_342*
AssignVariableOp_35AssignVariableOp_352(
AssignVariableOp_3AssignVariableOp_32(
AssignVariableOp_4AssignVariableOp_42(
AssignVariableOp_5AssignVariableOp_52(
AssignVariableOp_6AssignVariableOp_62(
AssignVariableOp_7AssignVariableOp_72(
AssignVariableOp_8AssignVariableOp_82(
AssignVariableOp_9AssignVariableOp_92$
AssignVariableOpAssignVariableOp:%$!

_user_specified_namecount:%#!

_user_specified_nametotal:'"#
!
_user_specified_name	count_1:'!#
!
_user_specified_name	total_1:1 -
+
_user_specified_nameAdam/v/dense/bias:1-
+
_user_specified_nameAdam/m/dense/bias:3/
-
_user_specified_nameAdam/v/dense/kernel:3/
-
_user_specified_nameAdam/m/dense/kernel:/+
)
_user_specified_nameAdam/v/rho/bias:/+
)
_user_specified_nameAdam/m/rho/bias:1-
+
_user_specified_nameAdam/v/rho/kernel:1-
+
_user_specified_nameAdam/m/rho/kernel:0,
*
_user_specified_nameAdam/v/phi3/bias:0,
*
_user_specified_nameAdam/m/phi3/bias:2.
,
_user_specified_nameAdam/v/phi3/kernel:2.
,
_user_specified_nameAdam/m/phi3/kernel:0,
*
_user_specified_nameAdam/v/phi2/bias:0,
*
_user_specified_nameAdam/m/phi2/bias:2.
,
_user_specified_nameAdam/v/phi2/kernel:2.
,
_user_specified_nameAdam/m/phi2/kernel:0,
*
_user_specified_nameAdam/v/phi1/bias:0,
*
_user_specified_nameAdam/m/phi1/bias:2.
,
_user_specified_nameAdam/v/phi1/kernel:2.
,
_user_specified_nameAdam/m/phi1/kernel:-)
'
_user_specified_namelearning_rate:)%
#
_user_specified_name	iteration:*
&
$
_user_specified_name
dense/bias:,	(
&
_user_specified_namedense/kernel:($
"
_user_specified_name
rho/bias:*&
$
_user_specified_name
rho/kernel:)%
#
_user_specified_name	phi3/bias:+'
%
_user_specified_namephi3/kernel:)%
#
_user_specified_name	phi2/bias:+'
%
_user_specified_namephi2/kernel:)%
#
_user_specified_name	phi1/bias:+'
%
_user_specified_namephi1/kernel:C ?

_output_shapes
: 
%
_user_specified_namefile_prefix
Ќ
`
D__inference_softmax_layer_call_and_return_conditional_losses_1504073

inputs
identityL
SoftmaxSoftmaxinputs*
T0*'
_output_shapes
:€€€€€€€€€Y
IdentityIdentitySoftmax:softmax:0*
T0*'
_output_shapes
:€€€€€€€€€"
identityIdentity:output:0*(
_construction_contextkEagerRuntime*&
_input_shapes
:€€€€€€€€€:O K
'
_output_shapes
:€€€€€€€€€
 
_user_specified_nameinputs
ј
L
0__inference_q_activation_1_layer_call_fn_1504560

inputs
identityњ
PartitionedCallPartitionedCallinputs*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *T
fORM
K__inference_q_activation_1_layer_call_and_return_conditional_losses_1503760d
IdentityIdentityPartitionedCall:output:0*
T0*+
_output_shapes
:€€€€€€€€€ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:€€€€€€€€€ :S O
+
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
€
У
&__inference_phi3_layer_call_fn_1504616

inputs
unknown:  
	unknown_0: 
identityИҐStatefulPartitionedCallя
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *J
fERC
A__inference_phi3_layer_call_and_return_conditional_losses_1503846s
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:€€€€€€€€€ <
NoOpNoOp^StatefulPartitionedCall*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:€€€€€€€€€ : : 22
StatefulPartitionedCallStatefulPartitionedCall:'#
!
_user_specified_name	1504612:'#
!
_user_specified_name	1504610:S O
+
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
я1
Ї
O__inference_deepsets_invariant_layer_call_and_return_conditional_losses_1504112
input_layer
phi1_1504079: 
phi1_1504081: 
phi2_1504085:  
phi2_1504087: 
phi3_1504091:  
phi3_1504093: 
rho_1504099:  
rho_1504101: 
dense_1504105: 
dense_1504107:
identityИҐdense/StatefulPartitionedCallҐphi1/StatefulPartitionedCallҐphi2/StatefulPartitionedCallҐphi3/StatefulPartitionedCallҐrho/StatefulPartitionedCallс
phi1/StatefulPartitionedCallStatefulPartitionedCallinput_layerphi1_1504079phi1_1504081*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *J
fERC
A__inference_phi1_layer_call_and_return_conditional_losses_1503570й
q_activation/PartitionedCallPartitionedCall%phi1/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *R
fMRK
I__inference_q_activation_layer_call_and_return_conditional_losses_1503622Л
phi2/StatefulPartitionedCallStatefulPartitionedCall%q_activation/PartitionedCall:output:0phi2_1504085phi2_1504087*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *J
fERC
A__inference_phi2_layer_call_and_return_conditional_losses_1503708н
q_activation_1/PartitionedCallPartitionedCall%phi2/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *T
fORM
K__inference_q_activation_1_layer_call_and_return_conditional_losses_1503760Н
phi3/StatefulPartitionedCallStatefulPartitionedCall'q_activation_1/PartitionedCall:output:0phi3_1504091phi3_1504093*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *J
fERC
A__inference_phi3_layer_call_and_return_conditional_losses_1503846н
q_activation_2/PartitionedCallPartitionedCall%phi3/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *T
fORM
K__inference_q_activation_2_layer_call_and_return_conditional_losses_1503898п
q_activation_3/PartitionedCallPartitionedCall'q_activation_2/PartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *T
fORM
K__inference_q_activation_3_layer_call_and_return_conditional_losses_1503930€
(global_average_pooling1d/PartitionedCallPartitionedCall'q_activation_3/PartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:€€€€€€€€€ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *^
fYRW
U__inference_global_average_pooling1d_layer_call_and_return_conditional_losses_1503478П
rho/StatefulPartitionedCallStatefulPartitionedCall1global_average_pooling1d/PartitionedCall:output:0rho_1504099rho_1504101*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:€€€€€€€€€ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *I
fDRB
@__inference_rho_layer_call_and_return_conditional_losses_1504000и
q_activation_4/PartitionedCallPartitionedCall$rho/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:€€€€€€€€€ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *T
fORM
K__inference_q_activation_4_layer_call_and_return_conditional_losses_1504052Н
dense/StatefulPartitionedCallStatefulPartitionedCall'q_activation_4/PartitionedCall:output:0dense_1504105dense_1504107*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:€€€€€€€€€*$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *K
fFRD
B__inference_dense_layer_call_and_return_conditional_losses_1504063№
softmax/PartitionedCallPartitionedCall&dense/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:€€€€€€€€€* 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *M
fHRF
D__inference_softmax_layer_call_and_return_conditional_losses_1504073o
IdentityIdentity softmax/PartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€љ
NoOpNoOp^dense/StatefulPartitionedCall^phi1/StatefulPartitionedCall^phi2/StatefulPartitionedCall^phi3/StatefulPartitionedCall^rho/StatefulPartitionedCall*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:€€€€€€€€€: : : : : : : : : : 2>
dense/StatefulPartitionedCalldense/StatefulPartitionedCall2<
phi1/StatefulPartitionedCallphi1/StatefulPartitionedCall2<
phi2/StatefulPartitionedCallphi2/StatefulPartitionedCall2<
phi3/StatefulPartitionedCallphi3/StatefulPartitionedCall2:
rho/StatefulPartitionedCallrho/StatefulPartitionedCall:'
#
!
_user_specified_name	1504107:'	#
!
_user_specified_name	1504105:'#
!
_user_specified_name	1504101:'#
!
_user_specified_name	1504099:'#
!
_user_specified_name	1504093:'#
!
_user_specified_name	1504091:'#
!
_user_specified_name	1504087:'#
!
_user_specified_name	1504085:'#
!
_user_specified_name	1504081:'#
!
_user_specified_name	1504079:X T
+
_output_shapes
:€€€€€€€€€
%
_user_specified_nameinput_layer
¶2
£
@__inference_rho_layer_call_and_return_conditional_losses_1504877

inputs)
readvariableop_resource:  '
readvariableop_3_resource: 
identityИҐReadVariableOpҐReadVariableOp_1ҐReadVariableOp_2ҐReadVariableOp_3ҐReadVariableOp_4ҐReadVariableOp_5G
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
 *   C[
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
 *  юBv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   √v
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
 *   C^
	truediv_1RealDiv	mul_1:z:0truediv_1/y:output:0*
T0*
_output_shapes

:  L
mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?V
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
 *  А?R
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
:€€€€€€€€€ I
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
 *   C]
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
 *  юBv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   √x
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
 *   CZ
	truediv_3RealDiv	mul_5:z:0truediv_3/y:output:0*
T0*
_output_shapes
: L
mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?R
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
 *  А?N
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
:€€€€€€€€€ _
IdentityIdentityBiasAdd:output:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€ Т
NoOpNoOp^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:€€€€€€€€€ : : 2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_52 
ReadVariableOpReadVariableOp:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:O K
'
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
В
V
:__inference_global_average_pooling1d_layer_call_fn_1504794

inputs
identityќ
PartitionedCallPartitionedCallinputs*
Tin
2*
Tout
2*
_collective_manager_ids
 *0
_output_shapes
:€€€€€€€€€€€€€€€€€€* 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *^
fYRW
U__inference_global_average_pooling1d_layer_call_and_return_conditional_losses_1503478i
IdentityIdentityPartitionedCall:output:0*
T0*0
_output_shapes
:€€€€€€€€€€€€€€€€€€"
identityIdentity:output:0*(
_construction_contextkEagerRuntime*<
_input_shapes+
):'€€€€€€€€€€€€€€€€€€€€€€€€€€€:e a
=
_output_shapes+
):'€€€€€€€€€€€€€€€€€€€€€€€€€€€
 
_user_specified_nameinputs
≠
L
$__inference__update_step_xla_1504285
gradient
variable: *
_XlaMustCompile(*(
_construction_contextkEagerRuntime*
_input_shapes

: : *
	_noinline(:($
"
_user_specified_name
variable:D @

_output_shapes
: 
"
_user_specified_name
gradient
≥
g
K__inference_q_activation_4_layer_call_and_return_conditional_losses_1504052

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
:€€€€€€€€€ F
ReluReluinputs*
T0*'
_output_shapes
:€€€€€€€€€ O
	ones_likeOnesLikeinputs*
T0*'
_output_shapes
:€€€€€€€€€ D
sub_2Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: V
mulMulones_like:y:0	sub_2:z:0*
T0*'
_output_shapes
:€€€€€€€€€ r
SelectV2SelectV2LessEqual:z:0Relu:activations:0mul:z:0*
T0*'
_output_shapes
:€€€€€€€€€ P
mul_1MulinputsCast:y:0*
T0*'
_output_shapes
:€€€€€€€€€ [
truedivRealDiv	mul_1:z:0
Cast_1:y:0*
T0*'
_output_shapes
:€€€€€€€€€ I
NegNegtruediv:z:0*
T0*'
_output_shapes
:€€€€€€€€€ M
RoundRoundtruediv:z:0*
T0*'
_output_shapes
:€€€€€€€€€ R
addAddV2Neg:y:0	Round:y:0*
T0*'
_output_shapes
:€€€€€€€€€ W
StopGradientStopGradientadd:z:0*
T0*'
_output_shapes
:€€€€€€€€€ d
add_1AddV2truediv:z:0StopGradient:output:0*
T0*'
_output_shapes
:€€€€€€€€€ [
	truediv_1RealDiv	add_1:z:0Cast:y:0*
T0*'
_output_shapes
:€€€€€€€€€ P
truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?U
	truediv_2RealDivtruediv_2/x:output:0Cast:y:0*
T0*
_output_shapes
: L
sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?N
sub_3Subsub_3/x:output:0truediv_2:z:0*
T0*
_output_shapes
: l
clip_by_value/MinimumMinimumtruediv_1:z:0	sub_3:z:0*
T0*'
_output_shapes
:€€€€€€€€€ T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*'
_output_shapes
:€€€€€€€€€ ]
mul_2Mul
Cast_1:y:0clip_by_value:z:0*
T0*'
_output_shapes
:€€€€€€€€€ Q
Neg_1NegSelectV2:output:0*
T0*'
_output_shapes
:€€€€€€€€€ V
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*'
_output_shapes
:€€€€€€€€€ L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?[
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*'
_output_shapes
:€€€€€€€€€ [
StopGradient_1StopGradient	mul_3:z:0*
T0*'
_output_shapes
:€€€€€€€€€ l
add_3AddV2SelectV2:output:0StopGradient_1:output:0*
T0*'
_output_shapes
:€€€€€€€€€ Q
IdentityIdentity	add_3:z:0*
T0*'
_output_shapes
:€€€€€€€€€ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*&
_input_shapes
:€€€€€€€€€ :O K
'
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
£=
§
A__inference_phi2_layer_call_and_return_conditional_losses_1504555

inputs)
readvariableop_resource:  '
readvariableop_3_resource: 
identityИҐReadVariableOpҐReadVariableOp_1ҐReadVariableOp_2ҐReadVariableOp_3ҐReadVariableOp_4ҐReadVariableOp_5G
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
 *   C[
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
 *  юBv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   √v
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
 *   C^
	truediv_1RealDiv	mul_1:z:0truediv_1/y:output:0*
T0*
_output_shapes

:  L
mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?V
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
 *  А?R
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

:  I
ShapeShapeinputs*
T0*
_output_shapes
::нѕQ
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
valueB"€€€€    d
ReshapeReshapeinputsReshape/shape:output:0*
T0*'
_output_shapes
:€€€€€€€€€ _
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
valueB"    €€€€f
	Reshape_1Reshapetranspose:y:0Reshape_1/shape:output:0*
T0*
_output_shapes

:  h
MatMulMatMulReshape:output:0Reshape_1:output:0*
T0*'
_output_shapes
:€€€€€€€€€ S
Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :S
Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : П
Reshape_2/shapePackunstack:output:0Reshape_2/shape/1:output:0Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:v
	Reshape_2ReshapeMatMul:product:0Reshape_2/shape:output:0*
T0*+
_output_shapes
:€€€€€€€€€ I
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
 *   C]
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
 *  юBv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   √x
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
 *   CZ
	truediv_3RealDiv	mul_5:z:0truediv_3/y:output:0*
T0*
_output_shapes
: L
mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?R
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
 *  А?N
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
:€€€€€€€€€ c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:€€€€€€€€€ Т
NoOpNoOp^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:€€€€€€€€€ : : 2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_52 
ReadVariableOpReadVariableOp:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:S O
+
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
€
У
&__inference_phi2_layer_call_fn_1504470

inputs
unknown:  
	unknown_0: 
identityИҐStatefulPartitionedCallя
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *J
fERC
A__inference_phi2_layer_call_and_return_conditional_losses_1503708s
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:€€€€€€€€€ <
NoOpNoOp^StatefulPartitionedCall*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:€€€€€€€€€ : : 22
StatefulPartitionedCallStatefulPartitionedCall:'#
!
_user_specified_name	1504466:'#
!
_user_specified_name	1504464:S O
+
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
н
Т
%__inference_rho_layer_call_fn_1504809

inputs
unknown:  
	unknown_0: 
identityИҐStatefulPartitionedCallЏ
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:€€€€€€€€€ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *I
fDRB
@__inference_rho_layer_call_and_return_conditional_losses_1504000o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€ <
NoOpNoOp^StatefulPartitionedCall*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:€€€€€€€€€ : : 22
StatefulPartitionedCallStatefulPartitionedCall:'#
!
_user_specified_name	1504805:'#
!
_user_specified_name	1504803:O K
'
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
≠
L
$__inference__update_step_xla_1504305
gradient
variable: *
_XlaMustCompile(*(
_construction_contextkEagerRuntime*
_input_shapes

: : *
	_noinline(:($
"
_user_specified_name
variable:D @

_output_shapes
: 
"
_user_specified_name
gradient
є
P
$__inference__update_step_xla_1504270
gradient
variable: *
_XlaMustCompile(*(
_construction_contextkEagerRuntime*
_input_shapes
: : *
	_noinline(:($
"
_user_specified_name
variable:H D

_output_shapes

: 
"
_user_specified_name
gradient
Н
q
U__inference_global_average_pooling1d_layer_call_and_return_conditional_losses_1503478

inputs
identityX
Mean/reduction_indicesConst*
_output_shapes
: *
dtype0*
value	B :p
MeanMeaninputsMean/reduction_indices:output:0*
T0*0
_output_shapes
:€€€€€€€€€€€€€€€€€€^
IdentityIdentityMean:output:0*
T0*0
_output_shapes
:€€€€€€€€€€€€€€€€€€"
identityIdentity:output:0*(
_construction_contextkEagerRuntime*<
_input_shapes+
):'€€€€€€€€€€€€€€€€€€€€€€€€€€€:e a
=
_output_shapes+
):'€€€€€€€€€€€€€€€€€€€€€€€€€€€
 
_user_specified_nameinputs
є
P
$__inference__update_step_xla_1504280
gradient
variable:  *
_XlaMustCompile(*(
_construction_contextkEagerRuntime*
_input_shapes
:  : *
	_noinline(:($
"
_user_specified_name
variable:H D

_output_shapes

:  
"
_user_specified_name
gradient
Ґ
E
)__inference_softmax_layer_call_fn_1504953

inputs
identityі
PartitionedCallPartitionedCallinputs*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:€€€€€€€€€* 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *M
fHRF
D__inference_softmax_layer_call_and_return_conditional_losses_1504073`
IdentityIdentityPartitionedCall:output:0*
T0*'
_output_shapes
:€€€€€€€€€"
identityIdentity:output:0*(
_construction_contextkEagerRuntime*&
_input_shapes
:€€€€€€€€€:O K
'
_output_shapes
:€€€€€€€€€
 
_user_specified_nameinputs
Ф 
g
K__inference_q_activation_1_layer_call_and_return_conditional_losses_1504607

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
:€€€€€€€€€ J
ReluReluinputs*
T0*+
_output_shapes
:€€€€€€€€€ S
	ones_likeOnesLikeinputs*
T0*+
_output_shapes
:€€€€€€€€€ D
sub_2Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: Z
mulMulones_like:y:0	sub_2:z:0*
T0*+
_output_shapes
:€€€€€€€€€ v
SelectV2SelectV2LessEqual:z:0Relu:activations:0mul:z:0*
T0*+
_output_shapes
:€€€€€€€€€ T
mul_1MulinputsCast:y:0*
T0*+
_output_shapes
:€€€€€€€€€ _
truedivRealDiv	mul_1:z:0
Cast_1:y:0*
T0*+
_output_shapes
:€€€€€€€€€ M
NegNegtruediv:z:0*
T0*+
_output_shapes
:€€€€€€€€€ Q
RoundRoundtruediv:z:0*
T0*+
_output_shapes
:€€€€€€€€€ V
addAddV2Neg:y:0	Round:y:0*
T0*+
_output_shapes
:€€€€€€€€€ [
StopGradientStopGradientadd:z:0*
T0*+
_output_shapes
:€€€€€€€€€ h
add_1AddV2truediv:z:0StopGradient:output:0*
T0*+
_output_shapes
:€€€€€€€€€ _
	truediv_1RealDiv	add_1:z:0Cast:y:0*
T0*+
_output_shapes
:€€€€€€€€€ P
truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?U
	truediv_2RealDivtruediv_2/x:output:0Cast:y:0*
T0*
_output_shapes
: L
sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?N
sub_3Subsub_3/x:output:0truediv_2:z:0*
T0*
_output_shapes
: p
clip_by_value/MinimumMinimumtruediv_1:z:0	sub_3:z:0*
T0*+
_output_shapes
:€€€€€€€€€ T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    Г
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*+
_output_shapes
:€€€€€€€€€ a
mul_2Mul
Cast_1:y:0clip_by_value:z:0*
T0*+
_output_shapes
:€€€€€€€€€ U
Neg_1NegSelectV2:output:0*
T0*+
_output_shapes
:€€€€€€€€€ Z
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*+
_output_shapes
:€€€€€€€€€ L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?_
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*+
_output_shapes
:€€€€€€€€€ _
StopGradient_1StopGradient	mul_3:z:0*
T0*+
_output_shapes
:€€€€€€€€€ p
add_3AddV2SelectV2:output:0StopGradient_1:output:0*
T0*+
_output_shapes
:€€€€€€€€€ U
IdentityIdentity	add_3:z:0*
T0*+
_output_shapes
:€€€€€€€€€ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:€€€€€€€€€ :S O
+
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
≥
g
K__inference_q_activation_4_layer_call_and_return_conditional_losses_1504929

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
:€€€€€€€€€ F
ReluReluinputs*
T0*'
_output_shapes
:€€€€€€€€€ O
	ones_likeOnesLikeinputs*
T0*'
_output_shapes
:€€€€€€€€€ D
sub_2Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: V
mulMulones_like:y:0	sub_2:z:0*
T0*'
_output_shapes
:€€€€€€€€€ r
SelectV2SelectV2LessEqual:z:0Relu:activations:0mul:z:0*
T0*'
_output_shapes
:€€€€€€€€€ P
mul_1MulinputsCast:y:0*
T0*'
_output_shapes
:€€€€€€€€€ [
truedivRealDiv	mul_1:z:0
Cast_1:y:0*
T0*'
_output_shapes
:€€€€€€€€€ I
NegNegtruediv:z:0*
T0*'
_output_shapes
:€€€€€€€€€ M
RoundRoundtruediv:z:0*
T0*'
_output_shapes
:€€€€€€€€€ R
addAddV2Neg:y:0	Round:y:0*
T0*'
_output_shapes
:€€€€€€€€€ W
StopGradientStopGradientadd:z:0*
T0*'
_output_shapes
:€€€€€€€€€ d
add_1AddV2truediv:z:0StopGradient:output:0*
T0*'
_output_shapes
:€€€€€€€€€ [
	truediv_1RealDiv	add_1:z:0Cast:y:0*
T0*'
_output_shapes
:€€€€€€€€€ P
truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?U
	truediv_2RealDivtruediv_2/x:output:0Cast:y:0*
T0*
_output_shapes
: L
sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?N
sub_3Subsub_3/x:output:0truediv_2:z:0*
T0*
_output_shapes
: l
clip_by_value/MinimumMinimumtruediv_1:z:0	sub_3:z:0*
T0*'
_output_shapes
:€€€€€€€€€ T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*'
_output_shapes
:€€€€€€€€€ ]
mul_2Mul
Cast_1:y:0clip_by_value:z:0*
T0*'
_output_shapes
:€€€€€€€€€ Q
Neg_1NegSelectV2:output:0*
T0*'
_output_shapes
:€€€€€€€€€ V
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*'
_output_shapes
:€€€€€€€€€ L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?[
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*'
_output_shapes
:€€€€€€€€€ [
StopGradient_1StopGradient	mul_3:z:0*
T0*'
_output_shapes
:€€€€€€€€€ l
add_3AddV2SelectV2:output:0StopGradient_1:output:0*
T0*'
_output_shapes
:€€€€€€€€€ Q
IdentityIdentity	add_3:z:0*
T0*'
_output_shapes
:€€€€€€€€€ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*&
_input_shapes
:€€€€€€€€€ :O K
'
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
я1
Ї
O__inference_deepsets_invariant_layer_call_and_return_conditional_losses_1504076
input_layer
phi1_1503571: 
phi1_1503573: 
phi2_1503709:  
phi2_1503711: 
phi3_1503847:  
phi3_1503849: 
rho_1504001:  
rho_1504003: 
dense_1504064: 
dense_1504066:
identityИҐdense/StatefulPartitionedCallҐphi1/StatefulPartitionedCallҐphi2/StatefulPartitionedCallҐphi3/StatefulPartitionedCallҐrho/StatefulPartitionedCallс
phi1/StatefulPartitionedCallStatefulPartitionedCallinput_layerphi1_1503571phi1_1503573*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *J
fERC
A__inference_phi1_layer_call_and_return_conditional_losses_1503570й
q_activation/PartitionedCallPartitionedCall%phi1/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *R
fMRK
I__inference_q_activation_layer_call_and_return_conditional_losses_1503622Л
phi2/StatefulPartitionedCallStatefulPartitionedCall%q_activation/PartitionedCall:output:0phi2_1503709phi2_1503711*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *J
fERC
A__inference_phi2_layer_call_and_return_conditional_losses_1503708н
q_activation_1/PartitionedCallPartitionedCall%phi2/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *T
fORM
K__inference_q_activation_1_layer_call_and_return_conditional_losses_1503760Н
phi3/StatefulPartitionedCallStatefulPartitionedCall'q_activation_1/PartitionedCall:output:0phi3_1503847phi3_1503849*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *J
fERC
A__inference_phi3_layer_call_and_return_conditional_losses_1503846н
q_activation_2/PartitionedCallPartitionedCall%phi3/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *T
fORM
K__inference_q_activation_2_layer_call_and_return_conditional_losses_1503898п
q_activation_3/PartitionedCallPartitionedCall'q_activation_2/PartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *T
fORM
K__inference_q_activation_3_layer_call_and_return_conditional_losses_1503930€
(global_average_pooling1d/PartitionedCallPartitionedCall'q_activation_3/PartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:€€€€€€€€€ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *^
fYRW
U__inference_global_average_pooling1d_layer_call_and_return_conditional_losses_1503478П
rho/StatefulPartitionedCallStatefulPartitionedCall1global_average_pooling1d/PartitionedCall:output:0rho_1504001rho_1504003*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:€€€€€€€€€ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *I
fDRB
@__inference_rho_layer_call_and_return_conditional_losses_1504000и
q_activation_4/PartitionedCallPartitionedCall$rho/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:€€€€€€€€€ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *T
fORM
K__inference_q_activation_4_layer_call_and_return_conditional_losses_1504052Н
dense/StatefulPartitionedCallStatefulPartitionedCall'q_activation_4/PartitionedCall:output:0dense_1504064dense_1504066*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:€€€€€€€€€*$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *K
fFRD
B__inference_dense_layer_call_and_return_conditional_losses_1504063№
softmax/PartitionedCallPartitionedCall&dense/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:€€€€€€€€€* 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *M
fHRF
D__inference_softmax_layer_call_and_return_conditional_losses_1504073o
IdentityIdentity softmax/PartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€љ
NoOpNoOp^dense/StatefulPartitionedCall^phi1/StatefulPartitionedCall^phi2/StatefulPartitionedCall^phi3/StatefulPartitionedCall^rho/StatefulPartitionedCall*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:€€€€€€€€€: : : : : : : : : : 2>
dense/StatefulPartitionedCalldense/StatefulPartitionedCall2<
phi1/StatefulPartitionedCallphi1/StatefulPartitionedCall2<
phi2/StatefulPartitionedCallphi2/StatefulPartitionedCall2<
phi3/StatefulPartitionedCallphi3/StatefulPartitionedCall2:
rho/StatefulPartitionedCallrho/StatefulPartitionedCall:'
#
!
_user_specified_name	1504066:'	#
!
_user_specified_name	1504064:'#
!
_user_specified_name	1504003:'#
!
_user_specified_name	1504001:'#
!
_user_specified_name	1503849:'#
!
_user_specified_name	1503847:'#
!
_user_specified_name	1503711:'#
!
_user_specified_name	1503709:'#
!
_user_specified_name	1503573:'#
!
_user_specified_name	1503571:X T
+
_output_shapes
:€€€€€€€€€
%
_user_specified_nameinput_layer
Ф 
g
K__inference_q_activation_2_layer_call_and_return_conditional_losses_1503898

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
:€€€€€€€€€ J
ReluReluinputs*
T0*+
_output_shapes
:€€€€€€€€€ S
	ones_likeOnesLikeinputs*
T0*+
_output_shapes
:€€€€€€€€€ D
sub_2Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: Z
mulMulones_like:y:0	sub_2:z:0*
T0*+
_output_shapes
:€€€€€€€€€ v
SelectV2SelectV2LessEqual:z:0Relu:activations:0mul:z:0*
T0*+
_output_shapes
:€€€€€€€€€ T
mul_1MulinputsCast:y:0*
T0*+
_output_shapes
:€€€€€€€€€ _
truedivRealDiv	mul_1:z:0
Cast_1:y:0*
T0*+
_output_shapes
:€€€€€€€€€ M
NegNegtruediv:z:0*
T0*+
_output_shapes
:€€€€€€€€€ Q
RoundRoundtruediv:z:0*
T0*+
_output_shapes
:€€€€€€€€€ V
addAddV2Neg:y:0	Round:y:0*
T0*+
_output_shapes
:€€€€€€€€€ [
StopGradientStopGradientadd:z:0*
T0*+
_output_shapes
:€€€€€€€€€ h
add_1AddV2truediv:z:0StopGradient:output:0*
T0*+
_output_shapes
:€€€€€€€€€ _
	truediv_1RealDiv	add_1:z:0Cast:y:0*
T0*+
_output_shapes
:€€€€€€€€€ P
truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?U
	truediv_2RealDivtruediv_2/x:output:0Cast:y:0*
T0*
_output_shapes
: L
sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?N
sub_3Subsub_3/x:output:0truediv_2:z:0*
T0*
_output_shapes
: p
clip_by_value/MinimumMinimumtruediv_1:z:0	sub_3:z:0*
T0*+
_output_shapes
:€€€€€€€€€ T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    Г
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*+
_output_shapes
:€€€€€€€€€ a
mul_2Mul
Cast_1:y:0clip_by_value:z:0*
T0*+
_output_shapes
:€€€€€€€€€ U
Neg_1NegSelectV2:output:0*
T0*+
_output_shapes
:€€€€€€€€€ Z
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*+
_output_shapes
:€€€€€€€€€ L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?_
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*+
_output_shapes
:€€€€€€€€€ _
StopGradient_1StopGradient	mul_3:z:0*
T0*+
_output_shapes
:€€€€€€€€€ p
add_3AddV2SelectV2:output:0StopGradient_1:output:0*
T0*+
_output_shapes
:€€€€€€€€€ U
IdentityIdentity	add_3:z:0*
T0*+
_output_shapes
:€€€€€€€€€ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:€€€€€€€€€ :S O
+
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
Н
q
U__inference_global_average_pooling1d_layer_call_and_return_conditional_losses_1504800

inputs
identityX
Mean/reduction_indicesConst*
_output_shapes
: *
dtype0*
value	B :p
MeanMeaninputsMean/reduction_indices:output:0*
T0*0
_output_shapes
:€€€€€€€€€€€€€€€€€€^
IdentityIdentityMean:output:0*
T0*0
_output_shapes
:€€€€€€€€€€€€€€€€€€"
identityIdentity:output:0*(
_construction_contextkEagerRuntime*<
_input_shapes+
):'€€€€€€€€€€€€€€€€€€€€€€€€€€€:e a
=
_output_shapes+
):'€€€€€€€€€€€€€€€€€€€€€€€€€€€
 
_user_specified_nameinputs
є
P
$__inference__update_step_xla_1504290
gradient
variable:  *
_XlaMustCompile(*(
_construction_contextkEagerRuntime*
_input_shapes
:  : *
	_noinline(:($
"
_user_specified_name
variable:H D

_output_shapes

:  
"
_user_specified_name
gradient
≥ц
ƒ
"__inference__wrapped_model_1503472
input_layerA
/deepsets_invariant_phi1_readvariableop_resource: ?
1deepsets_invariant_phi1_readvariableop_3_resource: A
/deepsets_invariant_phi2_readvariableop_resource:  ?
1deepsets_invariant_phi2_readvariableop_3_resource: A
/deepsets_invariant_phi3_readvariableop_resource:  ?
1deepsets_invariant_phi3_readvariableop_3_resource: @
.deepsets_invariant_rho_readvariableop_resource:  >
0deepsets_invariant_rho_readvariableop_3_resource: I
7deepsets_invariant_dense_matmul_readvariableop_resource: F
8deepsets_invariant_dense_biasadd_readvariableop_resource:
identityИҐ/deepsets_invariant/dense/BiasAdd/ReadVariableOpҐ.deepsets_invariant/dense/MatMul/ReadVariableOpҐ&deepsets_invariant/phi1/ReadVariableOpҐ(deepsets_invariant/phi1/ReadVariableOp_1Ґ(deepsets_invariant/phi1/ReadVariableOp_2Ґ(deepsets_invariant/phi1/ReadVariableOp_3Ґ(deepsets_invariant/phi1/ReadVariableOp_4Ґ(deepsets_invariant/phi1/ReadVariableOp_5Ґ&deepsets_invariant/phi2/ReadVariableOpҐ(deepsets_invariant/phi2/ReadVariableOp_1Ґ(deepsets_invariant/phi2/ReadVariableOp_2Ґ(deepsets_invariant/phi2/ReadVariableOp_3Ґ(deepsets_invariant/phi2/ReadVariableOp_4Ґ(deepsets_invariant/phi2/ReadVariableOp_5Ґ&deepsets_invariant/phi3/ReadVariableOpҐ(deepsets_invariant/phi3/ReadVariableOp_1Ґ(deepsets_invariant/phi3/ReadVariableOp_2Ґ(deepsets_invariant/phi3/ReadVariableOp_3Ґ(deepsets_invariant/phi3/ReadVariableOp_4Ґ(deepsets_invariant/phi3/ReadVariableOp_5Ґ%deepsets_invariant/rho/ReadVariableOpҐ'deepsets_invariant/rho/ReadVariableOp_1Ґ'deepsets_invariant/rho/ReadVariableOp_2Ґ'deepsets_invariant/rho/ReadVariableOp_3Ґ'deepsets_invariant/rho/ReadVariableOp_4Ґ'deepsets_invariant/rho/ReadVariableOp_5_
deepsets_invariant/phi1/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :_
deepsets_invariant/phi1/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : У
deepsets_invariant/phi1/PowPow&deepsets_invariant/phi1/Pow/x:output:0&deepsets_invariant/phi1/Pow/y:output:0*
T0*
_output_shapes
: u
deepsets_invariant/phi1/CastCastdeepsets_invariant/phi1/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: Ц
&deepsets_invariant/phi1/ReadVariableOpReadVariableOp/deepsets_invariant_phi1_readvariableop_resource*
_output_shapes

: *
dtype0b
deepsets_invariant/phi1/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C£
deepsets_invariant/phi1/mulMul.deepsets_invariant/phi1/ReadVariableOp:value:0&deepsets_invariant/phi1/mul/y:output:0*
T0*
_output_shapes

: Ц
deepsets_invariant/phi1/truedivRealDivdeepsets_invariant/phi1/mul:z:0 deepsets_invariant/phi1/Cast:y:0*
T0*
_output_shapes

: p
deepsets_invariant/phi1/NegNeg#deepsets_invariant/phi1/truediv:z:0*
T0*
_output_shapes

: t
deepsets_invariant/phi1/RoundRound#deepsets_invariant/phi1/truediv:z:0*
T0*
_output_shapes

: С
deepsets_invariant/phi1/addAddV2deepsets_invariant/phi1/Neg:y:0!deepsets_invariant/phi1/Round:y:0*
T0*
_output_shapes

: ~
$deepsets_invariant/phi1/StopGradientStopGradientdeepsets_invariant/phi1/add:z:0*
T0*
_output_shapes

: £
deepsets_invariant/phi1/add_1AddV2#deepsets_invariant/phi1/truediv:z:0-deepsets_invariant/phi1/StopGradient:output:0*
T0*
_output_shapes

: t
/deepsets_invariant/phi1/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  юBЊ
-deepsets_invariant/phi1/clip_by_value/MinimumMinimum!deepsets_invariant/phi1/add_1:z:08deepsets_invariant/phi1/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: l
'deepsets_invariant/phi1/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   √Њ
%deepsets_invariant/phi1/clip_by_valueMaximum1deepsets_invariant/phi1/clip_by_value/Minimum:z:00deepsets_invariant/phi1/clip_by_value/y:output:0*
T0*
_output_shapes

: Ъ
deepsets_invariant/phi1/mul_1Mul deepsets_invariant/phi1/Cast:y:0)deepsets_invariant/phi1/clip_by_value:z:0*
T0*
_output_shapes

: h
#deepsets_invariant/phi1/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C¶
!deepsets_invariant/phi1/truediv_1RealDiv!deepsets_invariant/phi1/mul_1:z:0,deepsets_invariant/phi1/truediv_1/y:output:0*
T0*
_output_shapes

: d
deepsets_invariant/phi1/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ю
deepsets_invariant/phi1/mul_2Mul(deepsets_invariant/phi1/mul_2/x:output:0%deepsets_invariant/phi1/truediv_1:z:0*
T0*
_output_shapes

: Ш
(deepsets_invariant/phi1/ReadVariableOp_1ReadVariableOp/deepsets_invariant_phi1_readvariableop_resource*
_output_shapes

: *
dtype0
deepsets_invariant/phi1/Neg_1Neg0deepsets_invariant/phi1/ReadVariableOp_1:value:0*
T0*
_output_shapes

: Х
deepsets_invariant/phi1/add_2AddV2!deepsets_invariant/phi1/Neg_1:y:0!deepsets_invariant/phi1/mul_2:z:0*
T0*
_output_shapes

: d
deepsets_invariant/phi1/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ъ
deepsets_invariant/phi1/mul_3Mul(deepsets_invariant/phi1/mul_3/x:output:0!deepsets_invariant/phi1/add_2:z:0*
T0*
_output_shapes

: В
&deepsets_invariant/phi1/StopGradient_1StopGradient!deepsets_invariant/phi1/mul_3:z:0*
T0*
_output_shapes

: Ш
(deepsets_invariant/phi1/ReadVariableOp_2ReadVariableOp/deepsets_invariant_phi1_readvariableop_resource*
_output_shapes

: *
dtype0≤
deepsets_invariant/phi1/add_3AddV20deepsets_invariant/phi1/ReadVariableOp_2:value:0/deepsets_invariant/phi1/StopGradient_1:output:0*
T0*
_output_shapes

: f
deepsets_invariant/phi1/ShapeShapeinput_layer*
T0*
_output_shapes
::нѕБ
deepsets_invariant/phi1/unstackUnpack&deepsets_invariant/phi1/Shape:output:0*
T0*
_output_shapes
: : : *	
nump
deepsets_invariant/phi1/Shape_1Const*
_output_shapes
:*
dtype0*
valueB"       Г
!deepsets_invariant/phi1/unstack_1Unpack(deepsets_invariant/phi1/Shape_1:output:0*
T0*
_output_shapes
: : *	
numv
%deepsets_invariant/phi1/Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB"€€€€   Щ
deepsets_invariant/phi1/ReshapeReshapeinput_layer.deepsets_invariant/phi1/Reshape/shape:output:0*
T0*'
_output_shapes
:€€€€€€€€€w
&deepsets_invariant/phi1/transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       Ђ
!deepsets_invariant/phi1/transpose	Transpose!deepsets_invariant/phi1/add_3:z:0/deepsets_invariant/phi1/transpose/perm:output:0*
T0*
_output_shapes

: x
'deepsets_invariant/phi1/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"   €€€€Ѓ
!deepsets_invariant/phi1/Reshape_1Reshape%deepsets_invariant/phi1/transpose:y:00deepsets_invariant/phi1/Reshape_1/shape:output:0*
T0*
_output_shapes

: ∞
deepsets_invariant/phi1/MatMulMatMul(deepsets_invariant/phi1/Reshape:output:0*deepsets_invariant/phi1/Reshape_1:output:0*
T0*'
_output_shapes
:€€€€€€€€€ k
)deepsets_invariant/phi1/Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :k
)deepsets_invariant/phi1/Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : п
'deepsets_invariant/phi1/Reshape_2/shapePack(deepsets_invariant/phi1/unstack:output:02deepsets_invariant/phi1/Reshape_2/shape/1:output:02deepsets_invariant/phi1/Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:Њ
!deepsets_invariant/phi1/Reshape_2Reshape(deepsets_invariant/phi1/MatMul:product:00deepsets_invariant/phi1/Reshape_2/shape:output:0*
T0*+
_output_shapes
:€€€€€€€€€ a
deepsets_invariant/phi1/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :a
deepsets_invariant/phi1/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Щ
deepsets_invariant/phi1/Pow_1Pow(deepsets_invariant/phi1/Pow_1/x:output:0(deepsets_invariant/phi1/Pow_1/y:output:0*
T0*
_output_shapes
: y
deepsets_invariant/phi1/Cast_1Cast!deepsets_invariant/phi1/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: Ц
(deepsets_invariant/phi1/ReadVariableOp_3ReadVariableOp1deepsets_invariant_phi1_readvariableop_3_resource*
_output_shapes
: *
dtype0d
deepsets_invariant/phi1/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C•
deepsets_invariant/phi1/mul_4Mul0deepsets_invariant/phi1/ReadVariableOp_3:value:0(deepsets_invariant/phi1/mul_4/y:output:0*
T0*
_output_shapes
: Ш
!deepsets_invariant/phi1/truediv_2RealDiv!deepsets_invariant/phi1/mul_4:z:0"deepsets_invariant/phi1/Cast_1:y:0*
T0*
_output_shapes
: p
deepsets_invariant/phi1/Neg_2Neg%deepsets_invariant/phi1/truediv_2:z:0*
T0*
_output_shapes
: t
deepsets_invariant/phi1/Round_1Round%deepsets_invariant/phi1/truediv_2:z:0*
T0*
_output_shapes
: У
deepsets_invariant/phi1/add_4AddV2!deepsets_invariant/phi1/Neg_2:y:0#deepsets_invariant/phi1/Round_1:y:0*
T0*
_output_shapes
: ~
&deepsets_invariant/phi1/StopGradient_2StopGradient!deepsets_invariant/phi1/add_4:z:0*
T0*
_output_shapes
: £
deepsets_invariant/phi1/add_5AddV2%deepsets_invariant/phi1/truediv_2:z:0/deepsets_invariant/phi1/StopGradient_2:output:0*
T0*
_output_shapes
: v
1deepsets_invariant/phi1/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  юBЊ
/deepsets_invariant/phi1/clip_by_value_1/MinimumMinimum!deepsets_invariant/phi1/add_5:z:0:deepsets_invariant/phi1/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: n
)deepsets_invariant/phi1/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   √ј
'deepsets_invariant/phi1/clip_by_value_1Maximum3deepsets_invariant/phi1/clip_by_value_1/Minimum:z:02deepsets_invariant/phi1/clip_by_value_1/y:output:0*
T0*
_output_shapes
: Ъ
deepsets_invariant/phi1/mul_5Mul"deepsets_invariant/phi1/Cast_1:y:0+deepsets_invariant/phi1/clip_by_value_1:z:0*
T0*
_output_shapes
: h
#deepsets_invariant/phi1/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *   CҐ
!deepsets_invariant/phi1/truediv_3RealDiv!deepsets_invariant/phi1/mul_5:z:0,deepsets_invariant/phi1/truediv_3/y:output:0*
T0*
_output_shapes
: d
deepsets_invariant/phi1/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ъ
deepsets_invariant/phi1/mul_6Mul(deepsets_invariant/phi1/mul_6/x:output:0%deepsets_invariant/phi1/truediv_3:z:0*
T0*
_output_shapes
: Ц
(deepsets_invariant/phi1/ReadVariableOp_4ReadVariableOp1deepsets_invariant_phi1_readvariableop_3_resource*
_output_shapes
: *
dtype0{
deepsets_invariant/phi1/Neg_3Neg0deepsets_invariant/phi1/ReadVariableOp_4:value:0*
T0*
_output_shapes
: С
deepsets_invariant/phi1/add_6AddV2!deepsets_invariant/phi1/Neg_3:y:0!deepsets_invariant/phi1/mul_6:z:0*
T0*
_output_shapes
: d
deepsets_invariant/phi1/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ц
deepsets_invariant/phi1/mul_7Mul(deepsets_invariant/phi1/mul_7/x:output:0!deepsets_invariant/phi1/add_6:z:0*
T0*
_output_shapes
: ~
&deepsets_invariant/phi1/StopGradient_3StopGradient!deepsets_invariant/phi1/mul_7:z:0*
T0*
_output_shapes
: Ц
(deepsets_invariant/phi1/ReadVariableOp_5ReadVariableOp1deepsets_invariant_phi1_readvariableop_3_resource*
_output_shapes
: *
dtype0Ѓ
deepsets_invariant/phi1/add_7AddV20deepsets_invariant/phi1/ReadVariableOp_5:value:0/deepsets_invariant/phi1/StopGradient_3:output:0*
T0*
_output_shapes
: ѓ
deepsets_invariant/phi1/BiasAddBiasAdd*deepsets_invariant/phi1/Reshape_2:output:0!deepsets_invariant/phi1/add_7:z:0*
T0*+
_output_shapes
:€€€€€€€€€ g
%deepsets_invariant/q_activation/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :g
%deepsets_invariant/q_activation/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :Ђ
#deepsets_invariant/q_activation/PowPow.deepsets_invariant/q_activation/Pow/x:output:0.deepsets_invariant/q_activation/Pow/y:output:0*
T0*
_output_shapes
: Е
$deepsets_invariant/q_activation/CastCast'deepsets_invariant/q_activation/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: i
'deepsets_invariant/q_activation/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :i
'deepsets_invariant/q_activation/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : ±
%deepsets_invariant/q_activation/Pow_1Pow0deepsets_invariant/q_activation/Pow_1/x:output:00deepsets_invariant/q_activation/Pow_1/y:output:0*
T0*
_output_shapes
: Й
&deepsets_invariant/q_activation/Cast_1Cast)deepsets_invariant/q_activation/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: j
%deepsets_invariant/q_activation/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *   @j
(deepsets_invariant/q_activation/Cast_2/xConst*
_output_shapes
: *
dtype0*
value	B : С
&deepsets_invariant/q_activation/Cast_2Cast1deepsets_invariant/q_activation/Cast_2/x:output:0*

DstT0*

SrcT0*
_output_shapes
: j
%deepsets_invariant/q_activation/sub/yConst*
_output_shapes
: *
dtype0*
valueB
 *   AІ
#deepsets_invariant/q_activation/subSub*deepsets_invariant/q_activation/Cast_2:y:0.deepsets_invariant/q_activation/sub/y:output:0*
T0*
_output_shapes
: ¶
%deepsets_invariant/q_activation/Pow_2Pow.deepsets_invariant/q_activation/Const:output:0'deepsets_invariant/q_activation/sub:z:0*
T0*
_output_shapes
: §
%deepsets_invariant/q_activation/sub_1Sub*deepsets_invariant/q_activation/Cast_1:y:0)deepsets_invariant/q_activation/Pow_2:z:0*
T0*
_output_shapes
: Ѕ
)deepsets_invariant/q_activation/LessEqual	LessEqual(deepsets_invariant/phi1/BiasAdd:output:0)deepsets_invariant/q_activation/sub_1:z:0*
T0*+
_output_shapes
:€€€€€€€€€ М
$deepsets_invariant/q_activation/ReluRelu(deepsets_invariant/phi1/BiasAdd:output:0*
T0*+
_output_shapes
:€€€€€€€€€ Х
)deepsets_invariant/q_activation/ones_likeOnesLike(deepsets_invariant/phi1/BiasAdd:output:0*
T0*+
_output_shapes
:€€€€€€€€€ §
%deepsets_invariant/q_activation/sub_2Sub*deepsets_invariant/q_activation/Cast_1:y:0)deepsets_invariant/q_activation/Pow_2:z:0*
T0*
_output_shapes
: Ї
#deepsets_invariant/q_activation/mulMul-deepsets_invariant/q_activation/ones_like:y:0)deepsets_invariant/q_activation/sub_2:z:0*
T0*+
_output_shapes
:€€€€€€€€€ ц
(deepsets_invariant/q_activation/SelectV2SelectV2-deepsets_invariant/q_activation/LessEqual:z:02deepsets_invariant/q_activation/Relu:activations:0'deepsets_invariant/q_activation/mul:z:0*
T0*+
_output_shapes
:€€€€€€€€€ ґ
%deepsets_invariant/q_activation/mul_1Mul(deepsets_invariant/phi1/BiasAdd:output:0(deepsets_invariant/q_activation/Cast:y:0*
T0*+
_output_shapes
:€€€€€€€€€ њ
'deepsets_invariant/q_activation/truedivRealDiv)deepsets_invariant/q_activation/mul_1:z:0*deepsets_invariant/q_activation/Cast_1:y:0*
T0*+
_output_shapes
:€€€€€€€€€ Н
#deepsets_invariant/q_activation/NegNeg+deepsets_invariant/q_activation/truediv:z:0*
T0*+
_output_shapes
:€€€€€€€€€ С
%deepsets_invariant/q_activation/RoundRound+deepsets_invariant/q_activation/truediv:z:0*
T0*+
_output_shapes
:€€€€€€€€€ ґ
#deepsets_invariant/q_activation/addAddV2'deepsets_invariant/q_activation/Neg:y:0)deepsets_invariant/q_activation/Round:y:0*
T0*+
_output_shapes
:€€€€€€€€€ Ы
,deepsets_invariant/q_activation/StopGradientStopGradient'deepsets_invariant/q_activation/add:z:0*
T0*+
_output_shapes
:€€€€€€€€€ »
%deepsets_invariant/q_activation/add_1AddV2+deepsets_invariant/q_activation/truediv:z:05deepsets_invariant/q_activation/StopGradient:output:0*
T0*+
_output_shapes
:€€€€€€€€€ њ
)deepsets_invariant/q_activation/truediv_1RealDiv)deepsets_invariant/q_activation/add_1:z:0(deepsets_invariant/q_activation/Cast:y:0*
T0*+
_output_shapes
:€€€€€€€€€ p
+deepsets_invariant/q_activation/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?µ
)deepsets_invariant/q_activation/truediv_2RealDiv4deepsets_invariant/q_activation/truediv_2/x:output:0(deepsets_invariant/q_activation/Cast:y:0*
T0*
_output_shapes
: l
'deepsets_invariant/q_activation/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ѓ
%deepsets_invariant/q_activation/sub_3Sub0deepsets_invariant/q_activation/sub_3/x:output:0-deepsets_invariant/q_activation/truediv_2:z:0*
T0*
_output_shapes
: –
5deepsets_invariant/q_activation/clip_by_value/MinimumMinimum-deepsets_invariant/q_activation/truediv_1:z:0)deepsets_invariant/q_activation/sub_3:z:0*
T0*+
_output_shapes
:€€€€€€€€€ t
/deepsets_invariant/q_activation/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    г
-deepsets_invariant/q_activation/clip_by_valueMaximum9deepsets_invariant/q_activation/clip_by_value/Minimum:z:08deepsets_invariant/q_activation/clip_by_value/y:output:0*
T0*+
_output_shapes
:€€€€€€€€€ Ѕ
%deepsets_invariant/q_activation/mul_2Mul*deepsets_invariant/q_activation/Cast_1:y:01deepsets_invariant/q_activation/clip_by_value:z:0*
T0*+
_output_shapes
:€€€€€€€€€ Х
%deepsets_invariant/q_activation/Neg_1Neg1deepsets_invariant/q_activation/SelectV2:output:0*
T0*+
_output_shapes
:€€€€€€€€€ Ї
%deepsets_invariant/q_activation/add_2AddV2)deepsets_invariant/q_activation/Neg_1:y:0)deepsets_invariant/q_activation/mul_2:z:0*
T0*+
_output_shapes
:€€€€€€€€€ l
'deepsets_invariant/q_activation/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?њ
%deepsets_invariant/q_activation/mul_3Mul0deepsets_invariant/q_activation/mul_3/x:output:0)deepsets_invariant/q_activation/add_2:z:0*
T0*+
_output_shapes
:€€€€€€€€€ Я
.deepsets_invariant/q_activation/StopGradient_1StopGradient)deepsets_invariant/q_activation/mul_3:z:0*
T0*+
_output_shapes
:€€€€€€€€€ –
%deepsets_invariant/q_activation/add_3AddV21deepsets_invariant/q_activation/SelectV2:output:07deepsets_invariant/q_activation/StopGradient_1:output:0*
T0*+
_output_shapes
:€€€€€€€€€ _
deepsets_invariant/phi2/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :_
deepsets_invariant/phi2/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : У
deepsets_invariant/phi2/PowPow&deepsets_invariant/phi2/Pow/x:output:0&deepsets_invariant/phi2/Pow/y:output:0*
T0*
_output_shapes
: u
deepsets_invariant/phi2/CastCastdeepsets_invariant/phi2/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: Ц
&deepsets_invariant/phi2/ReadVariableOpReadVariableOp/deepsets_invariant_phi2_readvariableop_resource*
_output_shapes

:  *
dtype0b
deepsets_invariant/phi2/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C£
deepsets_invariant/phi2/mulMul.deepsets_invariant/phi2/ReadVariableOp:value:0&deepsets_invariant/phi2/mul/y:output:0*
T0*
_output_shapes

:  Ц
deepsets_invariant/phi2/truedivRealDivdeepsets_invariant/phi2/mul:z:0 deepsets_invariant/phi2/Cast:y:0*
T0*
_output_shapes

:  p
deepsets_invariant/phi2/NegNeg#deepsets_invariant/phi2/truediv:z:0*
T0*
_output_shapes

:  t
deepsets_invariant/phi2/RoundRound#deepsets_invariant/phi2/truediv:z:0*
T0*
_output_shapes

:  С
deepsets_invariant/phi2/addAddV2deepsets_invariant/phi2/Neg:y:0!deepsets_invariant/phi2/Round:y:0*
T0*
_output_shapes

:  ~
$deepsets_invariant/phi2/StopGradientStopGradientdeepsets_invariant/phi2/add:z:0*
T0*
_output_shapes

:  £
deepsets_invariant/phi2/add_1AddV2#deepsets_invariant/phi2/truediv:z:0-deepsets_invariant/phi2/StopGradient:output:0*
T0*
_output_shapes

:  t
/deepsets_invariant/phi2/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  юBЊ
-deepsets_invariant/phi2/clip_by_value/MinimumMinimum!deepsets_invariant/phi2/add_1:z:08deepsets_invariant/phi2/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  l
'deepsets_invariant/phi2/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   √Њ
%deepsets_invariant/phi2/clip_by_valueMaximum1deepsets_invariant/phi2/clip_by_value/Minimum:z:00deepsets_invariant/phi2/clip_by_value/y:output:0*
T0*
_output_shapes

:  Ъ
deepsets_invariant/phi2/mul_1Mul deepsets_invariant/phi2/Cast:y:0)deepsets_invariant/phi2/clip_by_value:z:0*
T0*
_output_shapes

:  h
#deepsets_invariant/phi2/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C¶
!deepsets_invariant/phi2/truediv_1RealDiv!deepsets_invariant/phi2/mul_1:z:0,deepsets_invariant/phi2/truediv_1/y:output:0*
T0*
_output_shapes

:  d
deepsets_invariant/phi2/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ю
deepsets_invariant/phi2/mul_2Mul(deepsets_invariant/phi2/mul_2/x:output:0%deepsets_invariant/phi2/truediv_1:z:0*
T0*
_output_shapes

:  Ш
(deepsets_invariant/phi2/ReadVariableOp_1ReadVariableOp/deepsets_invariant_phi2_readvariableop_resource*
_output_shapes

:  *
dtype0
deepsets_invariant/phi2/Neg_1Neg0deepsets_invariant/phi2/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  Х
deepsets_invariant/phi2/add_2AddV2!deepsets_invariant/phi2/Neg_1:y:0!deepsets_invariant/phi2/mul_2:z:0*
T0*
_output_shapes

:  d
deepsets_invariant/phi2/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ъ
deepsets_invariant/phi2/mul_3Mul(deepsets_invariant/phi2/mul_3/x:output:0!deepsets_invariant/phi2/add_2:z:0*
T0*
_output_shapes

:  В
&deepsets_invariant/phi2/StopGradient_1StopGradient!deepsets_invariant/phi2/mul_3:z:0*
T0*
_output_shapes

:  Ш
(deepsets_invariant/phi2/ReadVariableOp_2ReadVariableOp/deepsets_invariant_phi2_readvariableop_resource*
_output_shapes

:  *
dtype0≤
deepsets_invariant/phi2/add_3AddV20deepsets_invariant/phi2/ReadVariableOp_2:value:0/deepsets_invariant/phi2/StopGradient_1:output:0*
T0*
_output_shapes

:  Д
deepsets_invariant/phi2/ShapeShape)deepsets_invariant/q_activation/add_3:z:0*
T0*
_output_shapes
::нѕБ
deepsets_invariant/phi2/unstackUnpack&deepsets_invariant/phi2/Shape:output:0*
T0*
_output_shapes
: : : *	
nump
deepsets_invariant/phi2/Shape_1Const*
_output_shapes
:*
dtype0*
valueB"        Г
!deepsets_invariant/phi2/unstack_1Unpack(deepsets_invariant/phi2/Shape_1:output:0*
T0*
_output_shapes
: : *	
numv
%deepsets_invariant/phi2/Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB"€€€€    Ј
deepsets_invariant/phi2/ReshapeReshape)deepsets_invariant/q_activation/add_3:z:0.deepsets_invariant/phi2/Reshape/shape:output:0*
T0*'
_output_shapes
:€€€€€€€€€ w
&deepsets_invariant/phi2/transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       Ђ
!deepsets_invariant/phi2/transpose	Transpose!deepsets_invariant/phi2/add_3:z:0/deepsets_invariant/phi2/transpose/perm:output:0*
T0*
_output_shapes

:  x
'deepsets_invariant/phi2/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"    €€€€Ѓ
!deepsets_invariant/phi2/Reshape_1Reshape%deepsets_invariant/phi2/transpose:y:00deepsets_invariant/phi2/Reshape_1/shape:output:0*
T0*
_output_shapes

:  ∞
deepsets_invariant/phi2/MatMulMatMul(deepsets_invariant/phi2/Reshape:output:0*deepsets_invariant/phi2/Reshape_1:output:0*
T0*'
_output_shapes
:€€€€€€€€€ k
)deepsets_invariant/phi2/Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :k
)deepsets_invariant/phi2/Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : п
'deepsets_invariant/phi2/Reshape_2/shapePack(deepsets_invariant/phi2/unstack:output:02deepsets_invariant/phi2/Reshape_2/shape/1:output:02deepsets_invariant/phi2/Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:Њ
!deepsets_invariant/phi2/Reshape_2Reshape(deepsets_invariant/phi2/MatMul:product:00deepsets_invariant/phi2/Reshape_2/shape:output:0*
T0*+
_output_shapes
:€€€€€€€€€ a
deepsets_invariant/phi2/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :a
deepsets_invariant/phi2/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Щ
deepsets_invariant/phi2/Pow_1Pow(deepsets_invariant/phi2/Pow_1/x:output:0(deepsets_invariant/phi2/Pow_1/y:output:0*
T0*
_output_shapes
: y
deepsets_invariant/phi2/Cast_1Cast!deepsets_invariant/phi2/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: Ц
(deepsets_invariant/phi2/ReadVariableOp_3ReadVariableOp1deepsets_invariant_phi2_readvariableop_3_resource*
_output_shapes
: *
dtype0d
deepsets_invariant/phi2/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C•
deepsets_invariant/phi2/mul_4Mul0deepsets_invariant/phi2/ReadVariableOp_3:value:0(deepsets_invariant/phi2/mul_4/y:output:0*
T0*
_output_shapes
: Ш
!deepsets_invariant/phi2/truediv_2RealDiv!deepsets_invariant/phi2/mul_4:z:0"deepsets_invariant/phi2/Cast_1:y:0*
T0*
_output_shapes
: p
deepsets_invariant/phi2/Neg_2Neg%deepsets_invariant/phi2/truediv_2:z:0*
T0*
_output_shapes
: t
deepsets_invariant/phi2/Round_1Round%deepsets_invariant/phi2/truediv_2:z:0*
T0*
_output_shapes
: У
deepsets_invariant/phi2/add_4AddV2!deepsets_invariant/phi2/Neg_2:y:0#deepsets_invariant/phi2/Round_1:y:0*
T0*
_output_shapes
: ~
&deepsets_invariant/phi2/StopGradient_2StopGradient!deepsets_invariant/phi2/add_4:z:0*
T0*
_output_shapes
: £
deepsets_invariant/phi2/add_5AddV2%deepsets_invariant/phi2/truediv_2:z:0/deepsets_invariant/phi2/StopGradient_2:output:0*
T0*
_output_shapes
: v
1deepsets_invariant/phi2/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  юBЊ
/deepsets_invariant/phi2/clip_by_value_1/MinimumMinimum!deepsets_invariant/phi2/add_5:z:0:deepsets_invariant/phi2/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: n
)deepsets_invariant/phi2/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   √ј
'deepsets_invariant/phi2/clip_by_value_1Maximum3deepsets_invariant/phi2/clip_by_value_1/Minimum:z:02deepsets_invariant/phi2/clip_by_value_1/y:output:0*
T0*
_output_shapes
: Ъ
deepsets_invariant/phi2/mul_5Mul"deepsets_invariant/phi2/Cast_1:y:0+deepsets_invariant/phi2/clip_by_value_1:z:0*
T0*
_output_shapes
: h
#deepsets_invariant/phi2/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *   CҐ
!deepsets_invariant/phi2/truediv_3RealDiv!deepsets_invariant/phi2/mul_5:z:0,deepsets_invariant/phi2/truediv_3/y:output:0*
T0*
_output_shapes
: d
deepsets_invariant/phi2/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ъ
deepsets_invariant/phi2/mul_6Mul(deepsets_invariant/phi2/mul_6/x:output:0%deepsets_invariant/phi2/truediv_3:z:0*
T0*
_output_shapes
: Ц
(deepsets_invariant/phi2/ReadVariableOp_4ReadVariableOp1deepsets_invariant_phi2_readvariableop_3_resource*
_output_shapes
: *
dtype0{
deepsets_invariant/phi2/Neg_3Neg0deepsets_invariant/phi2/ReadVariableOp_4:value:0*
T0*
_output_shapes
: С
deepsets_invariant/phi2/add_6AddV2!deepsets_invariant/phi2/Neg_3:y:0!deepsets_invariant/phi2/mul_6:z:0*
T0*
_output_shapes
: d
deepsets_invariant/phi2/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ц
deepsets_invariant/phi2/mul_7Mul(deepsets_invariant/phi2/mul_7/x:output:0!deepsets_invariant/phi2/add_6:z:0*
T0*
_output_shapes
: ~
&deepsets_invariant/phi2/StopGradient_3StopGradient!deepsets_invariant/phi2/mul_7:z:0*
T0*
_output_shapes
: Ц
(deepsets_invariant/phi2/ReadVariableOp_5ReadVariableOp1deepsets_invariant_phi2_readvariableop_3_resource*
_output_shapes
: *
dtype0Ѓ
deepsets_invariant/phi2/add_7AddV20deepsets_invariant/phi2/ReadVariableOp_5:value:0/deepsets_invariant/phi2/StopGradient_3:output:0*
T0*
_output_shapes
: ѓ
deepsets_invariant/phi2/BiasAddBiasAdd*deepsets_invariant/phi2/Reshape_2:output:0!deepsets_invariant/phi2/add_7:z:0*
T0*+
_output_shapes
:€€€€€€€€€ i
'deepsets_invariant/q_activation_1/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :i
'deepsets_invariant/q_activation_1/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :±
%deepsets_invariant/q_activation_1/PowPow0deepsets_invariant/q_activation_1/Pow/x:output:00deepsets_invariant/q_activation_1/Pow/y:output:0*
T0*
_output_shapes
: Й
&deepsets_invariant/q_activation_1/CastCast)deepsets_invariant/q_activation_1/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: k
)deepsets_invariant/q_activation_1/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :k
)deepsets_invariant/q_activation_1/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Ј
'deepsets_invariant/q_activation_1/Pow_1Pow2deepsets_invariant/q_activation_1/Pow_1/x:output:02deepsets_invariant/q_activation_1/Pow_1/y:output:0*
T0*
_output_shapes
: Н
(deepsets_invariant/q_activation_1/Cast_1Cast+deepsets_invariant/q_activation_1/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: l
'deepsets_invariant/q_activation_1/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *   @l
*deepsets_invariant/q_activation_1/Cast_2/xConst*
_output_shapes
: *
dtype0*
value	B : Х
(deepsets_invariant/q_activation_1/Cast_2Cast3deepsets_invariant/q_activation_1/Cast_2/x:output:0*

DstT0*

SrcT0*
_output_shapes
: l
'deepsets_invariant/q_activation_1/sub/yConst*
_output_shapes
: *
dtype0*
valueB
 *   A≠
%deepsets_invariant/q_activation_1/subSub,deepsets_invariant/q_activation_1/Cast_2:y:00deepsets_invariant/q_activation_1/sub/y:output:0*
T0*
_output_shapes
: ђ
'deepsets_invariant/q_activation_1/Pow_2Pow0deepsets_invariant/q_activation_1/Const:output:0)deepsets_invariant/q_activation_1/sub:z:0*
T0*
_output_shapes
: ™
'deepsets_invariant/q_activation_1/sub_1Sub,deepsets_invariant/q_activation_1/Cast_1:y:0+deepsets_invariant/q_activation_1/Pow_2:z:0*
T0*
_output_shapes
: ≈
+deepsets_invariant/q_activation_1/LessEqual	LessEqual(deepsets_invariant/phi2/BiasAdd:output:0+deepsets_invariant/q_activation_1/sub_1:z:0*
T0*+
_output_shapes
:€€€€€€€€€ О
&deepsets_invariant/q_activation_1/ReluRelu(deepsets_invariant/phi2/BiasAdd:output:0*
T0*+
_output_shapes
:€€€€€€€€€ Ч
+deepsets_invariant/q_activation_1/ones_likeOnesLike(deepsets_invariant/phi2/BiasAdd:output:0*
T0*+
_output_shapes
:€€€€€€€€€ ™
'deepsets_invariant/q_activation_1/sub_2Sub,deepsets_invariant/q_activation_1/Cast_1:y:0+deepsets_invariant/q_activation_1/Pow_2:z:0*
T0*
_output_shapes
: ј
%deepsets_invariant/q_activation_1/mulMul/deepsets_invariant/q_activation_1/ones_like:y:0+deepsets_invariant/q_activation_1/sub_2:z:0*
T0*+
_output_shapes
:€€€€€€€€€ ю
*deepsets_invariant/q_activation_1/SelectV2SelectV2/deepsets_invariant/q_activation_1/LessEqual:z:04deepsets_invariant/q_activation_1/Relu:activations:0)deepsets_invariant/q_activation_1/mul:z:0*
T0*+
_output_shapes
:€€€€€€€€€ Ї
'deepsets_invariant/q_activation_1/mul_1Mul(deepsets_invariant/phi2/BiasAdd:output:0*deepsets_invariant/q_activation_1/Cast:y:0*
T0*+
_output_shapes
:€€€€€€€€€ ≈
)deepsets_invariant/q_activation_1/truedivRealDiv+deepsets_invariant/q_activation_1/mul_1:z:0,deepsets_invariant/q_activation_1/Cast_1:y:0*
T0*+
_output_shapes
:€€€€€€€€€ С
%deepsets_invariant/q_activation_1/NegNeg-deepsets_invariant/q_activation_1/truediv:z:0*
T0*+
_output_shapes
:€€€€€€€€€ Х
'deepsets_invariant/q_activation_1/RoundRound-deepsets_invariant/q_activation_1/truediv:z:0*
T0*+
_output_shapes
:€€€€€€€€€ Љ
%deepsets_invariant/q_activation_1/addAddV2)deepsets_invariant/q_activation_1/Neg:y:0+deepsets_invariant/q_activation_1/Round:y:0*
T0*+
_output_shapes
:€€€€€€€€€ Я
.deepsets_invariant/q_activation_1/StopGradientStopGradient)deepsets_invariant/q_activation_1/add:z:0*
T0*+
_output_shapes
:€€€€€€€€€ ќ
'deepsets_invariant/q_activation_1/add_1AddV2-deepsets_invariant/q_activation_1/truediv:z:07deepsets_invariant/q_activation_1/StopGradient:output:0*
T0*+
_output_shapes
:€€€€€€€€€ ≈
+deepsets_invariant/q_activation_1/truediv_1RealDiv+deepsets_invariant/q_activation_1/add_1:z:0*deepsets_invariant/q_activation_1/Cast:y:0*
T0*+
_output_shapes
:€€€€€€€€€ r
-deepsets_invariant/q_activation_1/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?ї
+deepsets_invariant/q_activation_1/truediv_2RealDiv6deepsets_invariant/q_activation_1/truediv_2/x:output:0*deepsets_invariant/q_activation_1/Cast:y:0*
T0*
_output_shapes
: n
)deepsets_invariant/q_activation_1/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?і
'deepsets_invariant/q_activation_1/sub_3Sub2deepsets_invariant/q_activation_1/sub_3/x:output:0/deepsets_invariant/q_activation_1/truediv_2:z:0*
T0*
_output_shapes
: ÷
7deepsets_invariant/q_activation_1/clip_by_value/MinimumMinimum/deepsets_invariant/q_activation_1/truediv_1:z:0+deepsets_invariant/q_activation_1/sub_3:z:0*
T0*+
_output_shapes
:€€€€€€€€€ v
1deepsets_invariant/q_activation_1/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    й
/deepsets_invariant/q_activation_1/clip_by_valueMaximum;deepsets_invariant/q_activation_1/clip_by_value/Minimum:z:0:deepsets_invariant/q_activation_1/clip_by_value/y:output:0*
T0*+
_output_shapes
:€€€€€€€€€ «
'deepsets_invariant/q_activation_1/mul_2Mul,deepsets_invariant/q_activation_1/Cast_1:y:03deepsets_invariant/q_activation_1/clip_by_value:z:0*
T0*+
_output_shapes
:€€€€€€€€€ Щ
'deepsets_invariant/q_activation_1/Neg_1Neg3deepsets_invariant/q_activation_1/SelectV2:output:0*
T0*+
_output_shapes
:€€€€€€€€€ ј
'deepsets_invariant/q_activation_1/add_2AddV2+deepsets_invariant/q_activation_1/Neg_1:y:0+deepsets_invariant/q_activation_1/mul_2:z:0*
T0*+
_output_shapes
:€€€€€€€€€ n
)deepsets_invariant/q_activation_1/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?≈
'deepsets_invariant/q_activation_1/mul_3Mul2deepsets_invariant/q_activation_1/mul_3/x:output:0+deepsets_invariant/q_activation_1/add_2:z:0*
T0*+
_output_shapes
:€€€€€€€€€ £
0deepsets_invariant/q_activation_1/StopGradient_1StopGradient+deepsets_invariant/q_activation_1/mul_3:z:0*
T0*+
_output_shapes
:€€€€€€€€€ ÷
'deepsets_invariant/q_activation_1/add_3AddV23deepsets_invariant/q_activation_1/SelectV2:output:09deepsets_invariant/q_activation_1/StopGradient_1:output:0*
T0*+
_output_shapes
:€€€€€€€€€ _
deepsets_invariant/phi3/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :_
deepsets_invariant/phi3/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : У
deepsets_invariant/phi3/PowPow&deepsets_invariant/phi3/Pow/x:output:0&deepsets_invariant/phi3/Pow/y:output:0*
T0*
_output_shapes
: u
deepsets_invariant/phi3/CastCastdeepsets_invariant/phi3/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: Ц
&deepsets_invariant/phi3/ReadVariableOpReadVariableOp/deepsets_invariant_phi3_readvariableop_resource*
_output_shapes

:  *
dtype0b
deepsets_invariant/phi3/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C£
deepsets_invariant/phi3/mulMul.deepsets_invariant/phi3/ReadVariableOp:value:0&deepsets_invariant/phi3/mul/y:output:0*
T0*
_output_shapes

:  Ц
deepsets_invariant/phi3/truedivRealDivdeepsets_invariant/phi3/mul:z:0 deepsets_invariant/phi3/Cast:y:0*
T0*
_output_shapes

:  p
deepsets_invariant/phi3/NegNeg#deepsets_invariant/phi3/truediv:z:0*
T0*
_output_shapes

:  t
deepsets_invariant/phi3/RoundRound#deepsets_invariant/phi3/truediv:z:0*
T0*
_output_shapes

:  С
deepsets_invariant/phi3/addAddV2deepsets_invariant/phi3/Neg:y:0!deepsets_invariant/phi3/Round:y:0*
T0*
_output_shapes

:  ~
$deepsets_invariant/phi3/StopGradientStopGradientdeepsets_invariant/phi3/add:z:0*
T0*
_output_shapes

:  £
deepsets_invariant/phi3/add_1AddV2#deepsets_invariant/phi3/truediv:z:0-deepsets_invariant/phi3/StopGradient:output:0*
T0*
_output_shapes

:  t
/deepsets_invariant/phi3/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  юBЊ
-deepsets_invariant/phi3/clip_by_value/MinimumMinimum!deepsets_invariant/phi3/add_1:z:08deepsets_invariant/phi3/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  l
'deepsets_invariant/phi3/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   √Њ
%deepsets_invariant/phi3/clip_by_valueMaximum1deepsets_invariant/phi3/clip_by_value/Minimum:z:00deepsets_invariant/phi3/clip_by_value/y:output:0*
T0*
_output_shapes

:  Ъ
deepsets_invariant/phi3/mul_1Mul deepsets_invariant/phi3/Cast:y:0)deepsets_invariant/phi3/clip_by_value:z:0*
T0*
_output_shapes

:  h
#deepsets_invariant/phi3/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C¶
!deepsets_invariant/phi3/truediv_1RealDiv!deepsets_invariant/phi3/mul_1:z:0,deepsets_invariant/phi3/truediv_1/y:output:0*
T0*
_output_shapes

:  d
deepsets_invariant/phi3/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ю
deepsets_invariant/phi3/mul_2Mul(deepsets_invariant/phi3/mul_2/x:output:0%deepsets_invariant/phi3/truediv_1:z:0*
T0*
_output_shapes

:  Ш
(deepsets_invariant/phi3/ReadVariableOp_1ReadVariableOp/deepsets_invariant_phi3_readvariableop_resource*
_output_shapes

:  *
dtype0
deepsets_invariant/phi3/Neg_1Neg0deepsets_invariant/phi3/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  Х
deepsets_invariant/phi3/add_2AddV2!deepsets_invariant/phi3/Neg_1:y:0!deepsets_invariant/phi3/mul_2:z:0*
T0*
_output_shapes

:  d
deepsets_invariant/phi3/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ъ
deepsets_invariant/phi3/mul_3Mul(deepsets_invariant/phi3/mul_3/x:output:0!deepsets_invariant/phi3/add_2:z:0*
T0*
_output_shapes

:  В
&deepsets_invariant/phi3/StopGradient_1StopGradient!deepsets_invariant/phi3/mul_3:z:0*
T0*
_output_shapes

:  Ш
(deepsets_invariant/phi3/ReadVariableOp_2ReadVariableOp/deepsets_invariant_phi3_readvariableop_resource*
_output_shapes

:  *
dtype0≤
deepsets_invariant/phi3/add_3AddV20deepsets_invariant/phi3/ReadVariableOp_2:value:0/deepsets_invariant/phi3/StopGradient_1:output:0*
T0*
_output_shapes

:  Ж
deepsets_invariant/phi3/ShapeShape+deepsets_invariant/q_activation_1/add_3:z:0*
T0*
_output_shapes
::нѕБ
deepsets_invariant/phi3/unstackUnpack&deepsets_invariant/phi3/Shape:output:0*
T0*
_output_shapes
: : : *	
nump
deepsets_invariant/phi3/Shape_1Const*
_output_shapes
:*
dtype0*
valueB"        Г
!deepsets_invariant/phi3/unstack_1Unpack(deepsets_invariant/phi3/Shape_1:output:0*
T0*
_output_shapes
: : *	
numv
%deepsets_invariant/phi3/Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB"€€€€    є
deepsets_invariant/phi3/ReshapeReshape+deepsets_invariant/q_activation_1/add_3:z:0.deepsets_invariant/phi3/Reshape/shape:output:0*
T0*'
_output_shapes
:€€€€€€€€€ w
&deepsets_invariant/phi3/transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       Ђ
!deepsets_invariant/phi3/transpose	Transpose!deepsets_invariant/phi3/add_3:z:0/deepsets_invariant/phi3/transpose/perm:output:0*
T0*
_output_shapes

:  x
'deepsets_invariant/phi3/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"    €€€€Ѓ
!deepsets_invariant/phi3/Reshape_1Reshape%deepsets_invariant/phi3/transpose:y:00deepsets_invariant/phi3/Reshape_1/shape:output:0*
T0*
_output_shapes

:  ∞
deepsets_invariant/phi3/MatMulMatMul(deepsets_invariant/phi3/Reshape:output:0*deepsets_invariant/phi3/Reshape_1:output:0*
T0*'
_output_shapes
:€€€€€€€€€ k
)deepsets_invariant/phi3/Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :k
)deepsets_invariant/phi3/Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : п
'deepsets_invariant/phi3/Reshape_2/shapePack(deepsets_invariant/phi3/unstack:output:02deepsets_invariant/phi3/Reshape_2/shape/1:output:02deepsets_invariant/phi3/Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:Њ
!deepsets_invariant/phi3/Reshape_2Reshape(deepsets_invariant/phi3/MatMul:product:00deepsets_invariant/phi3/Reshape_2/shape:output:0*
T0*+
_output_shapes
:€€€€€€€€€ a
deepsets_invariant/phi3/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :a
deepsets_invariant/phi3/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Щ
deepsets_invariant/phi3/Pow_1Pow(deepsets_invariant/phi3/Pow_1/x:output:0(deepsets_invariant/phi3/Pow_1/y:output:0*
T0*
_output_shapes
: y
deepsets_invariant/phi3/Cast_1Cast!deepsets_invariant/phi3/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: Ц
(deepsets_invariant/phi3/ReadVariableOp_3ReadVariableOp1deepsets_invariant_phi3_readvariableop_3_resource*
_output_shapes
: *
dtype0d
deepsets_invariant/phi3/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C•
deepsets_invariant/phi3/mul_4Mul0deepsets_invariant/phi3/ReadVariableOp_3:value:0(deepsets_invariant/phi3/mul_4/y:output:0*
T0*
_output_shapes
: Ш
!deepsets_invariant/phi3/truediv_2RealDiv!deepsets_invariant/phi3/mul_4:z:0"deepsets_invariant/phi3/Cast_1:y:0*
T0*
_output_shapes
: p
deepsets_invariant/phi3/Neg_2Neg%deepsets_invariant/phi3/truediv_2:z:0*
T0*
_output_shapes
: t
deepsets_invariant/phi3/Round_1Round%deepsets_invariant/phi3/truediv_2:z:0*
T0*
_output_shapes
: У
deepsets_invariant/phi3/add_4AddV2!deepsets_invariant/phi3/Neg_2:y:0#deepsets_invariant/phi3/Round_1:y:0*
T0*
_output_shapes
: ~
&deepsets_invariant/phi3/StopGradient_2StopGradient!deepsets_invariant/phi3/add_4:z:0*
T0*
_output_shapes
: £
deepsets_invariant/phi3/add_5AddV2%deepsets_invariant/phi3/truediv_2:z:0/deepsets_invariant/phi3/StopGradient_2:output:0*
T0*
_output_shapes
: v
1deepsets_invariant/phi3/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  юBЊ
/deepsets_invariant/phi3/clip_by_value_1/MinimumMinimum!deepsets_invariant/phi3/add_5:z:0:deepsets_invariant/phi3/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: n
)deepsets_invariant/phi3/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   √ј
'deepsets_invariant/phi3/clip_by_value_1Maximum3deepsets_invariant/phi3/clip_by_value_1/Minimum:z:02deepsets_invariant/phi3/clip_by_value_1/y:output:0*
T0*
_output_shapes
: Ъ
deepsets_invariant/phi3/mul_5Mul"deepsets_invariant/phi3/Cast_1:y:0+deepsets_invariant/phi3/clip_by_value_1:z:0*
T0*
_output_shapes
: h
#deepsets_invariant/phi3/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *   CҐ
!deepsets_invariant/phi3/truediv_3RealDiv!deepsets_invariant/phi3/mul_5:z:0,deepsets_invariant/phi3/truediv_3/y:output:0*
T0*
_output_shapes
: d
deepsets_invariant/phi3/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ъ
deepsets_invariant/phi3/mul_6Mul(deepsets_invariant/phi3/mul_6/x:output:0%deepsets_invariant/phi3/truediv_3:z:0*
T0*
_output_shapes
: Ц
(deepsets_invariant/phi3/ReadVariableOp_4ReadVariableOp1deepsets_invariant_phi3_readvariableop_3_resource*
_output_shapes
: *
dtype0{
deepsets_invariant/phi3/Neg_3Neg0deepsets_invariant/phi3/ReadVariableOp_4:value:0*
T0*
_output_shapes
: С
deepsets_invariant/phi3/add_6AddV2!deepsets_invariant/phi3/Neg_3:y:0!deepsets_invariant/phi3/mul_6:z:0*
T0*
_output_shapes
: d
deepsets_invariant/phi3/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ц
deepsets_invariant/phi3/mul_7Mul(deepsets_invariant/phi3/mul_7/x:output:0!deepsets_invariant/phi3/add_6:z:0*
T0*
_output_shapes
: ~
&deepsets_invariant/phi3/StopGradient_3StopGradient!deepsets_invariant/phi3/mul_7:z:0*
T0*
_output_shapes
: Ц
(deepsets_invariant/phi3/ReadVariableOp_5ReadVariableOp1deepsets_invariant_phi3_readvariableop_3_resource*
_output_shapes
: *
dtype0Ѓ
deepsets_invariant/phi3/add_7AddV20deepsets_invariant/phi3/ReadVariableOp_5:value:0/deepsets_invariant/phi3/StopGradient_3:output:0*
T0*
_output_shapes
: ѓ
deepsets_invariant/phi3/BiasAddBiasAdd*deepsets_invariant/phi3/Reshape_2:output:0!deepsets_invariant/phi3/add_7:z:0*
T0*+
_output_shapes
:€€€€€€€€€ i
'deepsets_invariant/q_activation_2/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :i
'deepsets_invariant/q_activation_2/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :±
%deepsets_invariant/q_activation_2/PowPow0deepsets_invariant/q_activation_2/Pow/x:output:00deepsets_invariant/q_activation_2/Pow/y:output:0*
T0*
_output_shapes
: Й
&deepsets_invariant/q_activation_2/CastCast)deepsets_invariant/q_activation_2/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: k
)deepsets_invariant/q_activation_2/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :k
)deepsets_invariant/q_activation_2/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Ј
'deepsets_invariant/q_activation_2/Pow_1Pow2deepsets_invariant/q_activation_2/Pow_1/x:output:02deepsets_invariant/q_activation_2/Pow_1/y:output:0*
T0*
_output_shapes
: Н
(deepsets_invariant/q_activation_2/Cast_1Cast+deepsets_invariant/q_activation_2/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: l
'deepsets_invariant/q_activation_2/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *   @l
*deepsets_invariant/q_activation_2/Cast_2/xConst*
_output_shapes
: *
dtype0*
value	B : Х
(deepsets_invariant/q_activation_2/Cast_2Cast3deepsets_invariant/q_activation_2/Cast_2/x:output:0*

DstT0*

SrcT0*
_output_shapes
: l
'deepsets_invariant/q_activation_2/sub/yConst*
_output_shapes
: *
dtype0*
valueB
 *   A≠
%deepsets_invariant/q_activation_2/subSub,deepsets_invariant/q_activation_2/Cast_2:y:00deepsets_invariant/q_activation_2/sub/y:output:0*
T0*
_output_shapes
: ђ
'deepsets_invariant/q_activation_2/Pow_2Pow0deepsets_invariant/q_activation_2/Const:output:0)deepsets_invariant/q_activation_2/sub:z:0*
T0*
_output_shapes
: ™
'deepsets_invariant/q_activation_2/sub_1Sub,deepsets_invariant/q_activation_2/Cast_1:y:0+deepsets_invariant/q_activation_2/Pow_2:z:0*
T0*
_output_shapes
: ≈
+deepsets_invariant/q_activation_2/LessEqual	LessEqual(deepsets_invariant/phi3/BiasAdd:output:0+deepsets_invariant/q_activation_2/sub_1:z:0*
T0*+
_output_shapes
:€€€€€€€€€ О
&deepsets_invariant/q_activation_2/ReluRelu(deepsets_invariant/phi3/BiasAdd:output:0*
T0*+
_output_shapes
:€€€€€€€€€ Ч
+deepsets_invariant/q_activation_2/ones_likeOnesLike(deepsets_invariant/phi3/BiasAdd:output:0*
T0*+
_output_shapes
:€€€€€€€€€ ™
'deepsets_invariant/q_activation_2/sub_2Sub,deepsets_invariant/q_activation_2/Cast_1:y:0+deepsets_invariant/q_activation_2/Pow_2:z:0*
T0*
_output_shapes
: ј
%deepsets_invariant/q_activation_2/mulMul/deepsets_invariant/q_activation_2/ones_like:y:0+deepsets_invariant/q_activation_2/sub_2:z:0*
T0*+
_output_shapes
:€€€€€€€€€ ю
*deepsets_invariant/q_activation_2/SelectV2SelectV2/deepsets_invariant/q_activation_2/LessEqual:z:04deepsets_invariant/q_activation_2/Relu:activations:0)deepsets_invariant/q_activation_2/mul:z:0*
T0*+
_output_shapes
:€€€€€€€€€ Ї
'deepsets_invariant/q_activation_2/mul_1Mul(deepsets_invariant/phi3/BiasAdd:output:0*deepsets_invariant/q_activation_2/Cast:y:0*
T0*+
_output_shapes
:€€€€€€€€€ ≈
)deepsets_invariant/q_activation_2/truedivRealDiv+deepsets_invariant/q_activation_2/mul_1:z:0,deepsets_invariant/q_activation_2/Cast_1:y:0*
T0*+
_output_shapes
:€€€€€€€€€ С
%deepsets_invariant/q_activation_2/NegNeg-deepsets_invariant/q_activation_2/truediv:z:0*
T0*+
_output_shapes
:€€€€€€€€€ Х
'deepsets_invariant/q_activation_2/RoundRound-deepsets_invariant/q_activation_2/truediv:z:0*
T0*+
_output_shapes
:€€€€€€€€€ Љ
%deepsets_invariant/q_activation_2/addAddV2)deepsets_invariant/q_activation_2/Neg:y:0+deepsets_invariant/q_activation_2/Round:y:0*
T0*+
_output_shapes
:€€€€€€€€€ Я
.deepsets_invariant/q_activation_2/StopGradientStopGradient)deepsets_invariant/q_activation_2/add:z:0*
T0*+
_output_shapes
:€€€€€€€€€ ќ
'deepsets_invariant/q_activation_2/add_1AddV2-deepsets_invariant/q_activation_2/truediv:z:07deepsets_invariant/q_activation_2/StopGradient:output:0*
T0*+
_output_shapes
:€€€€€€€€€ ≈
+deepsets_invariant/q_activation_2/truediv_1RealDiv+deepsets_invariant/q_activation_2/add_1:z:0*deepsets_invariant/q_activation_2/Cast:y:0*
T0*+
_output_shapes
:€€€€€€€€€ r
-deepsets_invariant/q_activation_2/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?ї
+deepsets_invariant/q_activation_2/truediv_2RealDiv6deepsets_invariant/q_activation_2/truediv_2/x:output:0*deepsets_invariant/q_activation_2/Cast:y:0*
T0*
_output_shapes
: n
)deepsets_invariant/q_activation_2/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?і
'deepsets_invariant/q_activation_2/sub_3Sub2deepsets_invariant/q_activation_2/sub_3/x:output:0/deepsets_invariant/q_activation_2/truediv_2:z:0*
T0*
_output_shapes
: ÷
7deepsets_invariant/q_activation_2/clip_by_value/MinimumMinimum/deepsets_invariant/q_activation_2/truediv_1:z:0+deepsets_invariant/q_activation_2/sub_3:z:0*
T0*+
_output_shapes
:€€€€€€€€€ v
1deepsets_invariant/q_activation_2/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    й
/deepsets_invariant/q_activation_2/clip_by_valueMaximum;deepsets_invariant/q_activation_2/clip_by_value/Minimum:z:0:deepsets_invariant/q_activation_2/clip_by_value/y:output:0*
T0*+
_output_shapes
:€€€€€€€€€ «
'deepsets_invariant/q_activation_2/mul_2Mul,deepsets_invariant/q_activation_2/Cast_1:y:03deepsets_invariant/q_activation_2/clip_by_value:z:0*
T0*+
_output_shapes
:€€€€€€€€€ Щ
'deepsets_invariant/q_activation_2/Neg_1Neg3deepsets_invariant/q_activation_2/SelectV2:output:0*
T0*+
_output_shapes
:€€€€€€€€€ ј
'deepsets_invariant/q_activation_2/add_2AddV2+deepsets_invariant/q_activation_2/Neg_1:y:0+deepsets_invariant/q_activation_2/mul_2:z:0*
T0*+
_output_shapes
:€€€€€€€€€ n
)deepsets_invariant/q_activation_2/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?≈
'deepsets_invariant/q_activation_2/mul_3Mul2deepsets_invariant/q_activation_2/mul_3/x:output:0+deepsets_invariant/q_activation_2/add_2:z:0*
T0*+
_output_shapes
:€€€€€€€€€ £
0deepsets_invariant/q_activation_2/StopGradient_1StopGradient+deepsets_invariant/q_activation_2/mul_3:z:0*
T0*+
_output_shapes
:€€€€€€€€€ ÷
'deepsets_invariant/q_activation_2/add_3AddV23deepsets_invariant/q_activation_2/SelectV2:output:09deepsets_invariant/q_activation_2/StopGradient_1:output:0*
T0*+
_output_shapes
:€€€€€€€€€ i
'deepsets_invariant/q_activation_3/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :i
'deepsets_invariant/q_activation_3/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :±
%deepsets_invariant/q_activation_3/PowPow0deepsets_invariant/q_activation_3/Pow/x:output:00deepsets_invariant/q_activation_3/Pow/y:output:0*
T0*
_output_shapes
: Й
&deepsets_invariant/q_activation_3/CastCast)deepsets_invariant/q_activation_3/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: l
'deepsets_invariant/q_activation_3/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *   EЅ
%deepsets_invariant/q_activation_3/mulMul+deepsets_invariant/q_activation_2/add_3:z:00deepsets_invariant/q_activation_3/mul/y:output:0*
T0*+
_output_shapes
:€€€€€€€€€ Ѕ
)deepsets_invariant/q_activation_3/truedivRealDiv)deepsets_invariant/q_activation_3/mul:z:0*deepsets_invariant/q_activation_3/Cast:y:0*
T0*+
_output_shapes
:€€€€€€€€€ С
%deepsets_invariant/q_activation_3/NegNeg-deepsets_invariant/q_activation_3/truediv:z:0*
T0*+
_output_shapes
:€€€€€€€€€ Х
'deepsets_invariant/q_activation_3/RoundRound-deepsets_invariant/q_activation_3/truediv:z:0*
T0*+
_output_shapes
:€€€€€€€€€ Љ
%deepsets_invariant/q_activation_3/addAddV2)deepsets_invariant/q_activation_3/Neg:y:0+deepsets_invariant/q_activation_3/Round:y:0*
T0*+
_output_shapes
:€€€€€€€€€ Я
.deepsets_invariant/q_activation_3/StopGradientStopGradient)deepsets_invariant/q_activation_3/add:z:0*
T0*+
_output_shapes
:€€€€€€€€€ ќ
'deepsets_invariant/q_activation_3/add_1AddV2-deepsets_invariant/q_activation_3/truediv:z:07deepsets_invariant/q_activation_3/StopGradient:output:0*
T0*+
_output_shapes
:€€€€€€€€€ ~
9deepsets_invariant/q_activation_3/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * а€Dй
7deepsets_invariant/q_activation_3/clip_by_value/MinimumMinimum+deepsets_invariant/q_activation_3/add_1:z:0Bdeepsets_invariant/q_activation_3/clip_by_value/Minimum/y:output:0*
T0*+
_output_shapes
:€€€€€€€€€ v
1deepsets_invariant/q_activation_3/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   ≈й
/deepsets_invariant/q_activation_3/clip_by_valueMaximum;deepsets_invariant/q_activation_3/clip_by_value/Minimum:z:0:deepsets_invariant/q_activation_3/clip_by_value/y:output:0*
T0*+
_output_shapes
:€€€€€€€€€ ≈
'deepsets_invariant/q_activation_3/mul_1Mul*deepsets_invariant/q_activation_3/Cast:y:03deepsets_invariant/q_activation_3/clip_by_value:z:0*
T0*+
_output_shapes
:€€€€€€€€€ r
-deepsets_invariant/q_activation_3/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   E—
+deepsets_invariant/q_activation_3/truediv_1RealDiv+deepsets_invariant/q_activation_3/mul_1:z:06deepsets_invariant/q_activation_3/truediv_1/y:output:0*
T0*+
_output_shapes
:€€€€€€€€€ n
)deepsets_invariant/q_activation_3/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?…
'deepsets_invariant/q_activation_3/mul_2Mul2deepsets_invariant/q_activation_3/mul_2/x:output:0/deepsets_invariant/q_activation_3/truediv_1:z:0*
T0*+
_output_shapes
:€€€€€€€€€ С
'deepsets_invariant/q_activation_3/Neg_1Neg+deepsets_invariant/q_activation_2/add_3:z:0*
T0*+
_output_shapes
:€€€€€€€€€ ј
'deepsets_invariant/q_activation_3/add_2AddV2+deepsets_invariant/q_activation_3/Neg_1:y:0+deepsets_invariant/q_activation_3/mul_2:z:0*
T0*+
_output_shapes
:€€€€€€€€€ n
)deepsets_invariant/q_activation_3/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?≈
'deepsets_invariant/q_activation_3/mul_3Mul2deepsets_invariant/q_activation_3/mul_3/x:output:0+deepsets_invariant/q_activation_3/add_2:z:0*
T0*+
_output_shapes
:€€€€€€€€€ £
0deepsets_invariant/q_activation_3/StopGradient_1StopGradient+deepsets_invariant/q_activation_3/mul_3:z:0*
T0*+
_output_shapes
:€€€€€€€€€ ќ
'deepsets_invariant/q_activation_3/add_3AddV2+deepsets_invariant/q_activation_2/add_3:z:09deepsets_invariant/q_activation_3/StopGradient_1:output:0*
T0*+
_output_shapes
:€€€€€€€€€ Д
Bdeepsets_invariant/global_average_pooling1d/Mean/reduction_indicesConst*
_output_shapes
: *
dtype0*
value	B :д
0deepsets_invariant/global_average_pooling1d/MeanMean+deepsets_invariant/q_activation_3/add_3:z:0Kdeepsets_invariant/global_average_pooling1d/Mean/reduction_indices:output:0*
T0*'
_output_shapes
:€€€€€€€€€ ^
deepsets_invariant/rho/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :^
deepsets_invariant/rho/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : Р
deepsets_invariant/rho/PowPow%deepsets_invariant/rho/Pow/x:output:0%deepsets_invariant/rho/Pow/y:output:0*
T0*
_output_shapes
: s
deepsets_invariant/rho/CastCastdeepsets_invariant/rho/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: Ф
%deepsets_invariant/rho/ReadVariableOpReadVariableOp.deepsets_invariant_rho_readvariableop_resource*
_output_shapes

:  *
dtype0a
deepsets_invariant/rho/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C†
deepsets_invariant/rho/mulMul-deepsets_invariant/rho/ReadVariableOp:value:0%deepsets_invariant/rho/mul/y:output:0*
T0*
_output_shapes

:  У
deepsets_invariant/rho/truedivRealDivdeepsets_invariant/rho/mul:z:0deepsets_invariant/rho/Cast:y:0*
T0*
_output_shapes

:  n
deepsets_invariant/rho/NegNeg"deepsets_invariant/rho/truediv:z:0*
T0*
_output_shapes

:  r
deepsets_invariant/rho/RoundRound"deepsets_invariant/rho/truediv:z:0*
T0*
_output_shapes

:  О
deepsets_invariant/rho/addAddV2deepsets_invariant/rho/Neg:y:0 deepsets_invariant/rho/Round:y:0*
T0*
_output_shapes

:  |
#deepsets_invariant/rho/StopGradientStopGradientdeepsets_invariant/rho/add:z:0*
T0*
_output_shapes

:  †
deepsets_invariant/rho/add_1AddV2"deepsets_invariant/rho/truediv:z:0,deepsets_invariant/rho/StopGradient:output:0*
T0*
_output_shapes

:  s
.deepsets_invariant/rho/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  юBї
,deepsets_invariant/rho/clip_by_value/MinimumMinimum deepsets_invariant/rho/add_1:z:07deepsets_invariant/rho/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  k
&deepsets_invariant/rho/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   √ї
$deepsets_invariant/rho/clip_by_valueMaximum0deepsets_invariant/rho/clip_by_value/Minimum:z:0/deepsets_invariant/rho/clip_by_value/y:output:0*
T0*
_output_shapes

:  Ч
deepsets_invariant/rho/mul_1Muldeepsets_invariant/rho/Cast:y:0(deepsets_invariant/rho/clip_by_value:z:0*
T0*
_output_shapes

:  g
"deepsets_invariant/rho/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C£
 deepsets_invariant/rho/truediv_1RealDiv deepsets_invariant/rho/mul_1:z:0+deepsets_invariant/rho/truediv_1/y:output:0*
T0*
_output_shapes

:  c
deepsets_invariant/rho/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ы
deepsets_invariant/rho/mul_2Mul'deepsets_invariant/rho/mul_2/x:output:0$deepsets_invariant/rho/truediv_1:z:0*
T0*
_output_shapes

:  Ц
'deepsets_invariant/rho/ReadVariableOp_1ReadVariableOp.deepsets_invariant_rho_readvariableop_resource*
_output_shapes

:  *
dtype0}
deepsets_invariant/rho/Neg_1Neg/deepsets_invariant/rho/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  Т
deepsets_invariant/rho/add_2AddV2 deepsets_invariant/rho/Neg_1:y:0 deepsets_invariant/rho/mul_2:z:0*
T0*
_output_shapes

:  c
deepsets_invariant/rho/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ч
deepsets_invariant/rho/mul_3Mul'deepsets_invariant/rho/mul_3/x:output:0 deepsets_invariant/rho/add_2:z:0*
T0*
_output_shapes

:  А
%deepsets_invariant/rho/StopGradient_1StopGradient deepsets_invariant/rho/mul_3:z:0*
T0*
_output_shapes

:  Ц
'deepsets_invariant/rho/ReadVariableOp_2ReadVariableOp.deepsets_invariant_rho_readvariableop_resource*
_output_shapes

:  *
dtype0ѓ
deepsets_invariant/rho/add_3AddV2/deepsets_invariant/rho/ReadVariableOp_2:value:0.deepsets_invariant/rho/StopGradient_1:output:0*
T0*
_output_shapes

:  ґ
deepsets_invariant/rho/MatMulMatMul9deepsets_invariant/global_average_pooling1d/Mean:output:0 deepsets_invariant/rho/add_3:z:0*
T0*'
_output_shapes
:€€€€€€€€€ `
deepsets_invariant/rho/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :`
deepsets_invariant/rho/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Ц
deepsets_invariant/rho/Pow_1Pow'deepsets_invariant/rho/Pow_1/x:output:0'deepsets_invariant/rho/Pow_1/y:output:0*
T0*
_output_shapes
: w
deepsets_invariant/rho/Cast_1Cast deepsets_invariant/rho/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: Ф
'deepsets_invariant/rho/ReadVariableOp_3ReadVariableOp0deepsets_invariant_rho_readvariableop_3_resource*
_output_shapes
: *
dtype0c
deepsets_invariant/rho/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *   CҐ
deepsets_invariant/rho/mul_4Mul/deepsets_invariant/rho/ReadVariableOp_3:value:0'deepsets_invariant/rho/mul_4/y:output:0*
T0*
_output_shapes
: Х
 deepsets_invariant/rho/truediv_2RealDiv deepsets_invariant/rho/mul_4:z:0!deepsets_invariant/rho/Cast_1:y:0*
T0*
_output_shapes
: n
deepsets_invariant/rho/Neg_2Neg$deepsets_invariant/rho/truediv_2:z:0*
T0*
_output_shapes
: r
deepsets_invariant/rho/Round_1Round$deepsets_invariant/rho/truediv_2:z:0*
T0*
_output_shapes
: Р
deepsets_invariant/rho/add_4AddV2 deepsets_invariant/rho/Neg_2:y:0"deepsets_invariant/rho/Round_1:y:0*
T0*
_output_shapes
: |
%deepsets_invariant/rho/StopGradient_2StopGradient deepsets_invariant/rho/add_4:z:0*
T0*
_output_shapes
: †
deepsets_invariant/rho/add_5AddV2$deepsets_invariant/rho/truediv_2:z:0.deepsets_invariant/rho/StopGradient_2:output:0*
T0*
_output_shapes
: u
0deepsets_invariant/rho/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  юBї
.deepsets_invariant/rho/clip_by_value_1/MinimumMinimum deepsets_invariant/rho/add_5:z:09deepsets_invariant/rho/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: m
(deepsets_invariant/rho/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   √љ
&deepsets_invariant/rho/clip_by_value_1Maximum2deepsets_invariant/rho/clip_by_value_1/Minimum:z:01deepsets_invariant/rho/clip_by_value_1/y:output:0*
T0*
_output_shapes
: Ч
deepsets_invariant/rho/mul_5Mul!deepsets_invariant/rho/Cast_1:y:0*deepsets_invariant/rho/clip_by_value_1:z:0*
T0*
_output_shapes
: g
"deepsets_invariant/rho/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *   CЯ
 deepsets_invariant/rho/truediv_3RealDiv deepsets_invariant/rho/mul_5:z:0+deepsets_invariant/rho/truediv_3/y:output:0*
T0*
_output_shapes
: c
deepsets_invariant/rho/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ч
deepsets_invariant/rho/mul_6Mul'deepsets_invariant/rho/mul_6/x:output:0$deepsets_invariant/rho/truediv_3:z:0*
T0*
_output_shapes
: Ф
'deepsets_invariant/rho/ReadVariableOp_4ReadVariableOp0deepsets_invariant_rho_readvariableop_3_resource*
_output_shapes
: *
dtype0y
deepsets_invariant/rho/Neg_3Neg/deepsets_invariant/rho/ReadVariableOp_4:value:0*
T0*
_output_shapes
: О
deepsets_invariant/rho/add_6AddV2 deepsets_invariant/rho/Neg_3:y:0 deepsets_invariant/rho/mul_6:z:0*
T0*
_output_shapes
: c
deepsets_invariant/rho/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?У
deepsets_invariant/rho/mul_7Mul'deepsets_invariant/rho/mul_7/x:output:0 deepsets_invariant/rho/add_6:z:0*
T0*
_output_shapes
: |
%deepsets_invariant/rho/StopGradient_3StopGradient deepsets_invariant/rho/mul_7:z:0*
T0*
_output_shapes
: Ф
'deepsets_invariant/rho/ReadVariableOp_5ReadVariableOp0deepsets_invariant_rho_readvariableop_3_resource*
_output_shapes
: *
dtype0Ђ
deepsets_invariant/rho/add_7AddV2/deepsets_invariant/rho/ReadVariableOp_5:value:0.deepsets_invariant/rho/StopGradient_3:output:0*
T0*
_output_shapes
: ¶
deepsets_invariant/rho/BiasAddBiasAdd'deepsets_invariant/rho/MatMul:product:0 deepsets_invariant/rho/add_7:z:0*
T0*'
_output_shapes
:€€€€€€€€€ i
'deepsets_invariant/q_activation_4/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :i
'deepsets_invariant/q_activation_4/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :±
%deepsets_invariant/q_activation_4/PowPow0deepsets_invariant/q_activation_4/Pow/x:output:00deepsets_invariant/q_activation_4/Pow/y:output:0*
T0*
_output_shapes
: Й
&deepsets_invariant/q_activation_4/CastCast)deepsets_invariant/q_activation_4/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: k
)deepsets_invariant/q_activation_4/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :k
)deepsets_invariant/q_activation_4/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Ј
'deepsets_invariant/q_activation_4/Pow_1Pow2deepsets_invariant/q_activation_4/Pow_1/x:output:02deepsets_invariant/q_activation_4/Pow_1/y:output:0*
T0*
_output_shapes
: Н
(deepsets_invariant/q_activation_4/Cast_1Cast+deepsets_invariant/q_activation_4/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: l
'deepsets_invariant/q_activation_4/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *   @l
*deepsets_invariant/q_activation_4/Cast_2/xConst*
_output_shapes
: *
dtype0*
value	B : Х
(deepsets_invariant/q_activation_4/Cast_2Cast3deepsets_invariant/q_activation_4/Cast_2/x:output:0*

DstT0*

SrcT0*
_output_shapes
: l
'deepsets_invariant/q_activation_4/sub/yConst*
_output_shapes
: *
dtype0*
valueB
 *   A≠
%deepsets_invariant/q_activation_4/subSub,deepsets_invariant/q_activation_4/Cast_2:y:00deepsets_invariant/q_activation_4/sub/y:output:0*
T0*
_output_shapes
: ђ
'deepsets_invariant/q_activation_4/Pow_2Pow0deepsets_invariant/q_activation_4/Const:output:0)deepsets_invariant/q_activation_4/sub:z:0*
T0*
_output_shapes
: ™
'deepsets_invariant/q_activation_4/sub_1Sub,deepsets_invariant/q_activation_4/Cast_1:y:0+deepsets_invariant/q_activation_4/Pow_2:z:0*
T0*
_output_shapes
: ј
+deepsets_invariant/q_activation_4/LessEqual	LessEqual'deepsets_invariant/rho/BiasAdd:output:0+deepsets_invariant/q_activation_4/sub_1:z:0*
T0*'
_output_shapes
:€€€€€€€€€ Й
&deepsets_invariant/q_activation_4/ReluRelu'deepsets_invariant/rho/BiasAdd:output:0*
T0*'
_output_shapes
:€€€€€€€€€ Т
+deepsets_invariant/q_activation_4/ones_likeOnesLike'deepsets_invariant/rho/BiasAdd:output:0*
T0*'
_output_shapes
:€€€€€€€€€ ™
'deepsets_invariant/q_activation_4/sub_2Sub,deepsets_invariant/q_activation_4/Cast_1:y:0+deepsets_invariant/q_activation_4/Pow_2:z:0*
T0*
_output_shapes
: Љ
%deepsets_invariant/q_activation_4/mulMul/deepsets_invariant/q_activation_4/ones_like:y:0+deepsets_invariant/q_activation_4/sub_2:z:0*
T0*'
_output_shapes
:€€€€€€€€€ ъ
*deepsets_invariant/q_activation_4/SelectV2SelectV2/deepsets_invariant/q_activation_4/LessEqual:z:04deepsets_invariant/q_activation_4/Relu:activations:0)deepsets_invariant/q_activation_4/mul:z:0*
T0*'
_output_shapes
:€€€€€€€€€ µ
'deepsets_invariant/q_activation_4/mul_1Mul'deepsets_invariant/rho/BiasAdd:output:0*deepsets_invariant/q_activation_4/Cast:y:0*
T0*'
_output_shapes
:€€€€€€€€€ Ѕ
)deepsets_invariant/q_activation_4/truedivRealDiv+deepsets_invariant/q_activation_4/mul_1:z:0,deepsets_invariant/q_activation_4/Cast_1:y:0*
T0*'
_output_shapes
:€€€€€€€€€ Н
%deepsets_invariant/q_activation_4/NegNeg-deepsets_invariant/q_activation_4/truediv:z:0*
T0*'
_output_shapes
:€€€€€€€€€ С
'deepsets_invariant/q_activation_4/RoundRound-deepsets_invariant/q_activation_4/truediv:z:0*
T0*'
_output_shapes
:€€€€€€€€€ Є
%deepsets_invariant/q_activation_4/addAddV2)deepsets_invariant/q_activation_4/Neg:y:0+deepsets_invariant/q_activation_4/Round:y:0*
T0*'
_output_shapes
:€€€€€€€€€ Ы
.deepsets_invariant/q_activation_4/StopGradientStopGradient)deepsets_invariant/q_activation_4/add:z:0*
T0*'
_output_shapes
:€€€€€€€€€  
'deepsets_invariant/q_activation_4/add_1AddV2-deepsets_invariant/q_activation_4/truediv:z:07deepsets_invariant/q_activation_4/StopGradient:output:0*
T0*'
_output_shapes
:€€€€€€€€€ Ѕ
+deepsets_invariant/q_activation_4/truediv_1RealDiv+deepsets_invariant/q_activation_4/add_1:z:0*deepsets_invariant/q_activation_4/Cast:y:0*
T0*'
_output_shapes
:€€€€€€€€€ r
-deepsets_invariant/q_activation_4/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?ї
+deepsets_invariant/q_activation_4/truediv_2RealDiv6deepsets_invariant/q_activation_4/truediv_2/x:output:0*deepsets_invariant/q_activation_4/Cast:y:0*
T0*
_output_shapes
: n
)deepsets_invariant/q_activation_4/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?і
'deepsets_invariant/q_activation_4/sub_3Sub2deepsets_invariant/q_activation_4/sub_3/x:output:0/deepsets_invariant/q_activation_4/truediv_2:z:0*
T0*
_output_shapes
: “
7deepsets_invariant/q_activation_4/clip_by_value/MinimumMinimum/deepsets_invariant/q_activation_4/truediv_1:z:0+deepsets_invariant/q_activation_4/sub_3:z:0*
T0*'
_output_shapes
:€€€€€€€€€ v
1deepsets_invariant/q_activation_4/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    е
/deepsets_invariant/q_activation_4/clip_by_valueMaximum;deepsets_invariant/q_activation_4/clip_by_value/Minimum:z:0:deepsets_invariant/q_activation_4/clip_by_value/y:output:0*
T0*'
_output_shapes
:€€€€€€€€€ √
'deepsets_invariant/q_activation_4/mul_2Mul,deepsets_invariant/q_activation_4/Cast_1:y:03deepsets_invariant/q_activation_4/clip_by_value:z:0*
T0*'
_output_shapes
:€€€€€€€€€ Х
'deepsets_invariant/q_activation_4/Neg_1Neg3deepsets_invariant/q_activation_4/SelectV2:output:0*
T0*'
_output_shapes
:€€€€€€€€€ Љ
'deepsets_invariant/q_activation_4/add_2AddV2+deepsets_invariant/q_activation_4/Neg_1:y:0+deepsets_invariant/q_activation_4/mul_2:z:0*
T0*'
_output_shapes
:€€€€€€€€€ n
)deepsets_invariant/q_activation_4/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ѕ
'deepsets_invariant/q_activation_4/mul_3Mul2deepsets_invariant/q_activation_4/mul_3/x:output:0+deepsets_invariant/q_activation_4/add_2:z:0*
T0*'
_output_shapes
:€€€€€€€€€ Я
0deepsets_invariant/q_activation_4/StopGradient_1StopGradient+deepsets_invariant/q_activation_4/mul_3:z:0*
T0*'
_output_shapes
:€€€€€€€€€ “
'deepsets_invariant/q_activation_4/add_3AddV23deepsets_invariant/q_activation_4/SelectV2:output:09deepsets_invariant/q_activation_4/StopGradient_1:output:0*
T0*'
_output_shapes
:€€€€€€€€€ ¶
.deepsets_invariant/dense/MatMul/ReadVariableOpReadVariableOp7deepsets_invariant_dense_matmul_readvariableop_resource*
_output_shapes

: *
dtype0ј
deepsets_invariant/dense/MatMulMatMul+deepsets_invariant/q_activation_4/add_3:z:06deepsets_invariant/dense/MatMul/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€§
/deepsets_invariant/dense/BiasAdd/ReadVariableOpReadVariableOp8deepsets_invariant_dense_biasadd_readvariableop_resource*
_output_shapes
:*
dtype0Ѕ
 deepsets_invariant/dense/BiasAddBiasAdd)deepsets_invariant/dense/MatMul:product:07deepsets_invariant/dense/BiasAdd/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€К
"deepsets_invariant/softmax/SoftmaxSoftmax)deepsets_invariant/dense/BiasAdd:output:0*
T0*'
_output_shapes
:€€€€€€€€€{
IdentityIdentity,deepsets_invariant/softmax/Softmax:softmax:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€€
NoOpNoOp0^deepsets_invariant/dense/BiasAdd/ReadVariableOp/^deepsets_invariant/dense/MatMul/ReadVariableOp'^deepsets_invariant/phi1/ReadVariableOp)^deepsets_invariant/phi1/ReadVariableOp_1)^deepsets_invariant/phi1/ReadVariableOp_2)^deepsets_invariant/phi1/ReadVariableOp_3)^deepsets_invariant/phi1/ReadVariableOp_4)^deepsets_invariant/phi1/ReadVariableOp_5'^deepsets_invariant/phi2/ReadVariableOp)^deepsets_invariant/phi2/ReadVariableOp_1)^deepsets_invariant/phi2/ReadVariableOp_2)^deepsets_invariant/phi2/ReadVariableOp_3)^deepsets_invariant/phi2/ReadVariableOp_4)^deepsets_invariant/phi2/ReadVariableOp_5'^deepsets_invariant/phi3/ReadVariableOp)^deepsets_invariant/phi3/ReadVariableOp_1)^deepsets_invariant/phi3/ReadVariableOp_2)^deepsets_invariant/phi3/ReadVariableOp_3)^deepsets_invariant/phi3/ReadVariableOp_4)^deepsets_invariant/phi3/ReadVariableOp_5&^deepsets_invariant/rho/ReadVariableOp(^deepsets_invariant/rho/ReadVariableOp_1(^deepsets_invariant/rho/ReadVariableOp_2(^deepsets_invariant/rho/ReadVariableOp_3(^deepsets_invariant/rho/ReadVariableOp_4(^deepsets_invariant/rho/ReadVariableOp_5*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:€€€€€€€€€: : : : : : : : : : 2b
/deepsets_invariant/dense/BiasAdd/ReadVariableOp/deepsets_invariant/dense/BiasAdd/ReadVariableOp2`
.deepsets_invariant/dense/MatMul/ReadVariableOp.deepsets_invariant/dense/MatMul/ReadVariableOp2T
(deepsets_invariant/phi1/ReadVariableOp_1(deepsets_invariant/phi1/ReadVariableOp_12T
(deepsets_invariant/phi1/ReadVariableOp_2(deepsets_invariant/phi1/ReadVariableOp_22T
(deepsets_invariant/phi1/ReadVariableOp_3(deepsets_invariant/phi1/ReadVariableOp_32T
(deepsets_invariant/phi1/ReadVariableOp_4(deepsets_invariant/phi1/ReadVariableOp_42T
(deepsets_invariant/phi1/ReadVariableOp_5(deepsets_invariant/phi1/ReadVariableOp_52P
&deepsets_invariant/phi1/ReadVariableOp&deepsets_invariant/phi1/ReadVariableOp2T
(deepsets_invariant/phi2/ReadVariableOp_1(deepsets_invariant/phi2/ReadVariableOp_12T
(deepsets_invariant/phi2/ReadVariableOp_2(deepsets_invariant/phi2/ReadVariableOp_22T
(deepsets_invariant/phi2/ReadVariableOp_3(deepsets_invariant/phi2/ReadVariableOp_32T
(deepsets_invariant/phi2/ReadVariableOp_4(deepsets_invariant/phi2/ReadVariableOp_42T
(deepsets_invariant/phi2/ReadVariableOp_5(deepsets_invariant/phi2/ReadVariableOp_52P
&deepsets_invariant/phi2/ReadVariableOp&deepsets_invariant/phi2/ReadVariableOp2T
(deepsets_invariant/phi3/ReadVariableOp_1(deepsets_invariant/phi3/ReadVariableOp_12T
(deepsets_invariant/phi3/ReadVariableOp_2(deepsets_invariant/phi3/ReadVariableOp_22T
(deepsets_invariant/phi3/ReadVariableOp_3(deepsets_invariant/phi3/ReadVariableOp_32T
(deepsets_invariant/phi3/ReadVariableOp_4(deepsets_invariant/phi3/ReadVariableOp_42T
(deepsets_invariant/phi3/ReadVariableOp_5(deepsets_invariant/phi3/ReadVariableOp_52P
&deepsets_invariant/phi3/ReadVariableOp&deepsets_invariant/phi3/ReadVariableOp2R
'deepsets_invariant/rho/ReadVariableOp_1'deepsets_invariant/rho/ReadVariableOp_12R
'deepsets_invariant/rho/ReadVariableOp_2'deepsets_invariant/rho/ReadVariableOp_22R
'deepsets_invariant/rho/ReadVariableOp_3'deepsets_invariant/rho/ReadVariableOp_32R
'deepsets_invariant/rho/ReadVariableOp_4'deepsets_invariant/rho/ReadVariableOp_42R
'deepsets_invariant/rho/ReadVariableOp_5'deepsets_invariant/rho/ReadVariableOp_52N
%deepsets_invariant/rho/ReadVariableOp%deepsets_invariant/rho/ReadVariableOp:(
$
"
_user_specified_name
resource:(	$
"
_user_specified_name
resource:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:X T
+
_output_shapes
:€€€€€€€€€
%
_user_specified_nameinput_layer
х	
у
B__inference_dense_layer_call_and_return_conditional_losses_1504063

inputs0
matmul_readvariableop_resource: -
biasadd_readvariableop_resource:
identityИҐBiasAdd/ReadVariableOpҐMatMul/ReadVariableOpt
MatMul/ReadVariableOpReadVariableOpmatmul_readvariableop_resource*
_output_shapes

: *
dtype0i
MatMulMatMulinputsMatMul/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€r
BiasAdd/ReadVariableOpReadVariableOpbiasadd_readvariableop_resource*
_output_shapes
:*
dtype0v
BiasAddBiasAddMatMul:product:0BiasAdd/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€_
IdentityIdentityBiasAdd:output:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€S
NoOpNoOp^BiasAdd/ReadVariableOp^MatMul/ReadVariableOp*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:€€€€€€€€€ : : 20
BiasAdd/ReadVariableOpBiasAdd/ReadVariableOp2.
MatMul/ReadVariableOpMatMul/ReadVariableOp:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:O K
'
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
Ф 
g
K__inference_q_activation_2_layer_call_and_return_conditional_losses_1504753

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
:€€€€€€€€€ J
ReluReluinputs*
T0*+
_output_shapes
:€€€€€€€€€ S
	ones_likeOnesLikeinputs*
T0*+
_output_shapes
:€€€€€€€€€ D
sub_2Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: Z
mulMulones_like:y:0	sub_2:z:0*
T0*+
_output_shapes
:€€€€€€€€€ v
SelectV2SelectV2LessEqual:z:0Relu:activations:0mul:z:0*
T0*+
_output_shapes
:€€€€€€€€€ T
mul_1MulinputsCast:y:0*
T0*+
_output_shapes
:€€€€€€€€€ _
truedivRealDiv	mul_1:z:0
Cast_1:y:0*
T0*+
_output_shapes
:€€€€€€€€€ M
NegNegtruediv:z:0*
T0*+
_output_shapes
:€€€€€€€€€ Q
RoundRoundtruediv:z:0*
T0*+
_output_shapes
:€€€€€€€€€ V
addAddV2Neg:y:0	Round:y:0*
T0*+
_output_shapes
:€€€€€€€€€ [
StopGradientStopGradientadd:z:0*
T0*+
_output_shapes
:€€€€€€€€€ h
add_1AddV2truediv:z:0StopGradient:output:0*
T0*+
_output_shapes
:€€€€€€€€€ _
	truediv_1RealDiv	add_1:z:0Cast:y:0*
T0*+
_output_shapes
:€€€€€€€€€ P
truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?U
	truediv_2RealDivtruediv_2/x:output:0Cast:y:0*
T0*
_output_shapes
: L
sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?N
sub_3Subsub_3/x:output:0truediv_2:z:0*
T0*
_output_shapes
: p
clip_by_value/MinimumMinimumtruediv_1:z:0	sub_3:z:0*
T0*+
_output_shapes
:€€€€€€€€€ T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    Г
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*+
_output_shapes
:€€€€€€€€€ a
mul_2Mul
Cast_1:y:0clip_by_value:z:0*
T0*+
_output_shapes
:€€€€€€€€€ U
Neg_1NegSelectV2:output:0*
T0*+
_output_shapes
:€€€€€€€€€ Z
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*+
_output_shapes
:€€€€€€€€€ L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?_
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*+
_output_shapes
:€€€€€€€€€ _
StopGradient_1StopGradient	mul_3:z:0*
T0*+
_output_shapes
:€€€€€€€€€ p
add_3AddV2SelectV2:output:0StopGradient_1:output:0*
T0*+
_output_shapes
:€€€€€€€€€ U
IdentityIdentity	add_3:z:0*
T0*+
_output_shapes
:€€€€€€€€€ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:€€€€€€€€€ :S O
+
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
ј
L
0__inference_q_activation_3_layer_call_fn_1504758

inputs
identityњ
PartitionedCallPartitionedCallinputs*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *T
fORM
K__inference_q_activation_3_layer_call_and_return_conditional_losses_1503930d
IdentityIdentityPartitionedCall:output:0*
T0*+
_output_shapes
:€€€€€€€€€ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:€€€€€€€€€ :S O
+
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
ю
п
%__inference_signature_wrapper_1504265
input_layer
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
identityИҐStatefulPartitionedCall©
StatefulPartitionedCallStatefulPartitionedCallinput_layerunknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4	unknown_5	unknown_6	unknown_7	unknown_8*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:€€€€€€€€€*,
_read_only_resource_inputs

	
*2
config_proto" 

CPU

GPU2 *0J 8В *+
f&R$
"__inference__wrapped_model_1503472o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€<
NoOpNoOp^StatefulPartitionedCall*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:€€€€€€€€€: : : : : : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:'
#
!
_user_specified_name	1504261:'	#
!
_user_specified_name	1504259:'#
!
_user_specified_name	1504257:'#
!
_user_specified_name	1504255:'#
!
_user_specified_name	1504253:'#
!
_user_specified_name	1504251:'#
!
_user_specified_name	1504249:'#
!
_user_specified_name	1504247:'#
!
_user_specified_name	1504245:'#
!
_user_specified_name	1504243:X T
+
_output_shapes
:€€€€€€€€€
%
_user_specified_nameinput_layer
≠
L
$__inference__update_step_xla_1504315
gradient
variable:*
_XlaMustCompile(*(
_construction_contextkEagerRuntime*
_input_shapes

:: *
	_noinline(:($
"
_user_specified_name
variable:D @

_output_shapes
:
"
_user_specified_name
gradient
х	
у
B__inference_dense_layer_call_and_return_conditional_losses_1504948

inputs0
matmul_readvariableop_resource: -
biasadd_readvariableop_resource:
identityИҐBiasAdd/ReadVariableOpҐMatMul/ReadVariableOpt
MatMul/ReadVariableOpReadVariableOpmatmul_readvariableop_resource*
_output_shapes

: *
dtype0i
MatMulMatMulinputsMatMul/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€r
BiasAdd/ReadVariableOpReadVariableOpbiasadd_readvariableop_resource*
_output_shapes
:*
dtype0v
BiasAddBiasAddMatMul:product:0BiasAdd/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€_
IdentityIdentityBiasAdd:output:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€S
NoOpNoOp^BiasAdd/ReadVariableOp^MatMul/ReadVariableOp*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:€€€€€€€€€ : : 20
BiasAdd/ReadVariableOpBiasAdd/ReadVariableOp2.
MatMul/ReadVariableOpMatMul/ReadVariableOp:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:O K
'
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
¶О
∞
 __inference__traced_save_1505196
file_prefix4
"read_disablecopyonread_phi1_kernel: 0
"read_1_disablecopyonread_phi1_bias: 6
$read_2_disablecopyonread_phi2_kernel:  0
"read_3_disablecopyonread_phi2_bias: 6
$read_4_disablecopyonread_phi3_kernel:  0
"read_5_disablecopyonread_phi3_bias: 5
#read_6_disablecopyonread_rho_kernel:  /
!read_7_disablecopyonread_rho_bias: 7
%read_8_disablecopyonread_dense_kernel: 1
#read_9_disablecopyonread_dense_bias:-
#read_10_disablecopyonread_iteration:	 1
'read_11_disablecopyonread_learning_rate: >
,read_12_disablecopyonread_adam_m_phi1_kernel: >
,read_13_disablecopyonread_adam_v_phi1_kernel: 8
*read_14_disablecopyonread_adam_m_phi1_bias: 8
*read_15_disablecopyonread_adam_v_phi1_bias: >
,read_16_disablecopyonread_adam_m_phi2_kernel:  >
,read_17_disablecopyonread_adam_v_phi2_kernel:  8
*read_18_disablecopyonread_adam_m_phi2_bias: 8
*read_19_disablecopyonread_adam_v_phi2_bias: >
,read_20_disablecopyonread_adam_m_phi3_kernel:  >
,read_21_disablecopyonread_adam_v_phi3_kernel:  8
*read_22_disablecopyonread_adam_m_phi3_bias: 8
*read_23_disablecopyonread_adam_v_phi3_bias: =
+read_24_disablecopyonread_adam_m_rho_kernel:  =
+read_25_disablecopyonread_adam_v_rho_kernel:  7
)read_26_disablecopyonread_adam_m_rho_bias: 7
)read_27_disablecopyonread_adam_v_rho_bias: ?
-read_28_disablecopyonread_adam_m_dense_kernel: ?
-read_29_disablecopyonread_adam_v_dense_kernel: 9
+read_30_disablecopyonread_adam_m_dense_bias:9
+read_31_disablecopyonread_adam_v_dense_bias:+
!read_32_disablecopyonread_total_1: +
!read_33_disablecopyonread_count_1: )
read_34_disablecopyonread_total: )
read_35_disablecopyonread_count: 
savev2_const
identity_73ИҐMergeV2CheckpointsҐRead/DisableCopyOnReadҐRead/ReadVariableOpҐRead_1/DisableCopyOnReadҐRead_1/ReadVariableOpҐRead_10/DisableCopyOnReadҐRead_10/ReadVariableOpҐRead_11/DisableCopyOnReadҐRead_11/ReadVariableOpҐRead_12/DisableCopyOnReadҐRead_12/ReadVariableOpҐRead_13/DisableCopyOnReadҐRead_13/ReadVariableOpҐRead_14/DisableCopyOnReadҐRead_14/ReadVariableOpҐRead_15/DisableCopyOnReadҐRead_15/ReadVariableOpҐRead_16/DisableCopyOnReadҐRead_16/ReadVariableOpҐRead_17/DisableCopyOnReadҐRead_17/ReadVariableOpҐRead_18/DisableCopyOnReadҐRead_18/ReadVariableOpҐRead_19/DisableCopyOnReadҐRead_19/ReadVariableOpҐRead_2/DisableCopyOnReadҐRead_2/ReadVariableOpҐRead_20/DisableCopyOnReadҐRead_20/ReadVariableOpҐRead_21/DisableCopyOnReadҐRead_21/ReadVariableOpҐRead_22/DisableCopyOnReadҐRead_22/ReadVariableOpҐRead_23/DisableCopyOnReadҐRead_23/ReadVariableOpҐRead_24/DisableCopyOnReadҐRead_24/ReadVariableOpҐRead_25/DisableCopyOnReadҐRead_25/ReadVariableOpҐRead_26/DisableCopyOnReadҐRead_26/ReadVariableOpҐRead_27/DisableCopyOnReadҐRead_27/ReadVariableOpҐRead_28/DisableCopyOnReadҐRead_28/ReadVariableOpҐRead_29/DisableCopyOnReadҐRead_29/ReadVariableOpҐRead_3/DisableCopyOnReadҐRead_3/ReadVariableOpҐRead_30/DisableCopyOnReadҐRead_30/ReadVariableOpҐRead_31/DisableCopyOnReadҐRead_31/ReadVariableOpҐRead_32/DisableCopyOnReadҐRead_32/ReadVariableOpҐRead_33/DisableCopyOnReadҐRead_33/ReadVariableOpҐRead_34/DisableCopyOnReadҐRead_34/ReadVariableOpҐRead_35/DisableCopyOnReadҐRead_35/ReadVariableOpҐRead_4/DisableCopyOnReadҐRead_4/ReadVariableOpҐRead_5/DisableCopyOnReadҐRead_5/ReadVariableOpҐRead_6/DisableCopyOnReadҐRead_6/ReadVariableOpҐRead_7/DisableCopyOnReadҐRead_7/ReadVariableOpҐRead_8/DisableCopyOnReadҐRead_8/ReadVariableOpҐRead_9/DisableCopyOnReadҐRead_9/ReadVariableOpw
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
_temp/partБ
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
value	B : У
ShardedFilenameShardedFilenameStringJoin:output:0ShardedFilename/shard:output:0num_shards:output:0"/device:CPU:0*
_output_shapes
: t
Read/DisableCopyOnReadDisableCopyOnRead"read_disablecopyonread_phi1_kernel"/device:CPU:0*
_output_shapes
 Ю
Read/ReadVariableOpReadVariableOp"read_disablecopyonread_phi1_kernel^Read/DisableCopyOnRead"/device:CPU:0*
_output_shapes

: *
dtype0i
IdentityIdentityRead/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes

: a

Identity_1IdentityIdentity:output:0"/device:CPU:0*
T0*
_output_shapes

: v
Read_1/DisableCopyOnReadDisableCopyOnRead"read_1_disablecopyonread_phi1_bias"/device:CPU:0*
_output_shapes
 Ю
Read_1/ReadVariableOpReadVariableOp"read_1_disablecopyonread_phi1_bias^Read_1/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0i

Identity_2IdentityRead_1/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: _

Identity_3IdentityIdentity_2:output:0"/device:CPU:0*
T0*
_output_shapes
: x
Read_2/DisableCopyOnReadDisableCopyOnRead$read_2_disablecopyonread_phi2_kernel"/device:CPU:0*
_output_shapes
 §
Read_2/ReadVariableOpReadVariableOp$read_2_disablecopyonread_phi2_kernel^Read_2/DisableCopyOnRead"/device:CPU:0*
_output_shapes

:  *
dtype0m

Identity_4IdentityRead_2/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes

:  c

Identity_5IdentityIdentity_4:output:0"/device:CPU:0*
T0*
_output_shapes

:  v
Read_3/DisableCopyOnReadDisableCopyOnRead"read_3_disablecopyonread_phi2_bias"/device:CPU:0*
_output_shapes
 Ю
Read_3/ReadVariableOpReadVariableOp"read_3_disablecopyonread_phi2_bias^Read_3/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0i

Identity_6IdentityRead_3/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: _

Identity_7IdentityIdentity_6:output:0"/device:CPU:0*
T0*
_output_shapes
: x
Read_4/DisableCopyOnReadDisableCopyOnRead$read_4_disablecopyonread_phi3_kernel"/device:CPU:0*
_output_shapes
 §
Read_4/ReadVariableOpReadVariableOp$read_4_disablecopyonread_phi3_kernel^Read_4/DisableCopyOnRead"/device:CPU:0*
_output_shapes

:  *
dtype0m

Identity_8IdentityRead_4/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes

:  c

Identity_9IdentityIdentity_8:output:0"/device:CPU:0*
T0*
_output_shapes

:  v
Read_5/DisableCopyOnReadDisableCopyOnRead"read_5_disablecopyonread_phi3_bias"/device:CPU:0*
_output_shapes
 Ю
Read_5/ReadVariableOpReadVariableOp"read_5_disablecopyonread_phi3_bias^Read_5/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0j
Identity_10IdentityRead_5/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: a
Identity_11IdentityIdentity_10:output:0"/device:CPU:0*
T0*
_output_shapes
: w
Read_6/DisableCopyOnReadDisableCopyOnRead#read_6_disablecopyonread_rho_kernel"/device:CPU:0*
_output_shapes
 £
Read_6/ReadVariableOpReadVariableOp#read_6_disablecopyonread_rho_kernel^Read_6/DisableCopyOnRead"/device:CPU:0*
_output_shapes

:  *
dtype0n
Identity_12IdentityRead_6/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes

:  e
Identity_13IdentityIdentity_12:output:0"/device:CPU:0*
T0*
_output_shapes

:  u
Read_7/DisableCopyOnReadDisableCopyOnRead!read_7_disablecopyonread_rho_bias"/device:CPU:0*
_output_shapes
 Э
Read_7/ReadVariableOpReadVariableOp!read_7_disablecopyonread_rho_bias^Read_7/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0j
Identity_14IdentityRead_7/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: a
Identity_15IdentityIdentity_14:output:0"/device:CPU:0*
T0*
_output_shapes
: y
Read_8/DisableCopyOnReadDisableCopyOnRead%read_8_disablecopyonread_dense_kernel"/device:CPU:0*
_output_shapes
 •
Read_8/ReadVariableOpReadVariableOp%read_8_disablecopyonread_dense_kernel^Read_8/DisableCopyOnRead"/device:CPU:0*
_output_shapes

: *
dtype0n
Identity_16IdentityRead_8/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes

: e
Identity_17IdentityIdentity_16:output:0"/device:CPU:0*
T0*
_output_shapes

: w
Read_9/DisableCopyOnReadDisableCopyOnRead#read_9_disablecopyonread_dense_bias"/device:CPU:0*
_output_shapes
 Я
Read_9/ReadVariableOpReadVariableOp#read_9_disablecopyonread_dense_bias^Read_9/DisableCopyOnRead"/device:CPU:0*
_output_shapes
:*
dtype0j
Identity_18IdentityRead_9/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
:a
Identity_19IdentityIdentity_18:output:0"/device:CPU:0*
T0*
_output_shapes
:x
Read_10/DisableCopyOnReadDisableCopyOnRead#read_10_disablecopyonread_iteration"/device:CPU:0*
_output_shapes
 Э
Read_10/ReadVariableOpReadVariableOp#read_10_disablecopyonread_iteration^Read_10/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0	g
Identity_20IdentityRead_10/ReadVariableOp:value:0"/device:CPU:0*
T0	*
_output_shapes
: ]
Identity_21IdentityIdentity_20:output:0"/device:CPU:0*
T0	*
_output_shapes
: |
Read_11/DisableCopyOnReadDisableCopyOnRead'read_11_disablecopyonread_learning_rate"/device:CPU:0*
_output_shapes
 °
Read_11/ReadVariableOpReadVariableOp'read_11_disablecopyonread_learning_rate^Read_11/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0g
Identity_22IdentityRead_11/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: ]
Identity_23IdentityIdentity_22:output:0"/device:CPU:0*
T0*
_output_shapes
: Б
Read_12/DisableCopyOnReadDisableCopyOnRead,read_12_disablecopyonread_adam_m_phi1_kernel"/device:CPU:0*
_output_shapes
 Ѓ
Read_12/ReadVariableOpReadVariableOp,read_12_disablecopyonread_adam_m_phi1_kernel^Read_12/DisableCopyOnRead"/device:CPU:0*
_output_shapes

: *
dtype0o
Identity_24IdentityRead_12/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes

: e
Identity_25IdentityIdentity_24:output:0"/device:CPU:0*
T0*
_output_shapes

: Б
Read_13/DisableCopyOnReadDisableCopyOnRead,read_13_disablecopyonread_adam_v_phi1_kernel"/device:CPU:0*
_output_shapes
 Ѓ
Read_13/ReadVariableOpReadVariableOp,read_13_disablecopyonread_adam_v_phi1_kernel^Read_13/DisableCopyOnRead"/device:CPU:0*
_output_shapes

: *
dtype0o
Identity_26IdentityRead_13/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes

: e
Identity_27IdentityIdentity_26:output:0"/device:CPU:0*
T0*
_output_shapes

: 
Read_14/DisableCopyOnReadDisableCopyOnRead*read_14_disablecopyonread_adam_m_phi1_bias"/device:CPU:0*
_output_shapes
 ®
Read_14/ReadVariableOpReadVariableOp*read_14_disablecopyonread_adam_m_phi1_bias^Read_14/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0k
Identity_28IdentityRead_14/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: a
Identity_29IdentityIdentity_28:output:0"/device:CPU:0*
T0*
_output_shapes
: 
Read_15/DisableCopyOnReadDisableCopyOnRead*read_15_disablecopyonread_adam_v_phi1_bias"/device:CPU:0*
_output_shapes
 ®
Read_15/ReadVariableOpReadVariableOp*read_15_disablecopyonread_adam_v_phi1_bias^Read_15/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0k
Identity_30IdentityRead_15/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: a
Identity_31IdentityIdentity_30:output:0"/device:CPU:0*
T0*
_output_shapes
: Б
Read_16/DisableCopyOnReadDisableCopyOnRead,read_16_disablecopyonread_adam_m_phi2_kernel"/device:CPU:0*
_output_shapes
 Ѓ
Read_16/ReadVariableOpReadVariableOp,read_16_disablecopyonread_adam_m_phi2_kernel^Read_16/DisableCopyOnRead"/device:CPU:0*
_output_shapes

:  *
dtype0o
Identity_32IdentityRead_16/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes

:  e
Identity_33IdentityIdentity_32:output:0"/device:CPU:0*
T0*
_output_shapes

:  Б
Read_17/DisableCopyOnReadDisableCopyOnRead,read_17_disablecopyonread_adam_v_phi2_kernel"/device:CPU:0*
_output_shapes
 Ѓ
Read_17/ReadVariableOpReadVariableOp,read_17_disablecopyonread_adam_v_phi2_kernel^Read_17/DisableCopyOnRead"/device:CPU:0*
_output_shapes

:  *
dtype0o
Identity_34IdentityRead_17/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes

:  e
Identity_35IdentityIdentity_34:output:0"/device:CPU:0*
T0*
_output_shapes

:  
Read_18/DisableCopyOnReadDisableCopyOnRead*read_18_disablecopyonread_adam_m_phi2_bias"/device:CPU:0*
_output_shapes
 ®
Read_18/ReadVariableOpReadVariableOp*read_18_disablecopyonread_adam_m_phi2_bias^Read_18/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0k
Identity_36IdentityRead_18/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: a
Identity_37IdentityIdentity_36:output:0"/device:CPU:0*
T0*
_output_shapes
: 
Read_19/DisableCopyOnReadDisableCopyOnRead*read_19_disablecopyonread_adam_v_phi2_bias"/device:CPU:0*
_output_shapes
 ®
Read_19/ReadVariableOpReadVariableOp*read_19_disablecopyonread_adam_v_phi2_bias^Read_19/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0k
Identity_38IdentityRead_19/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: a
Identity_39IdentityIdentity_38:output:0"/device:CPU:0*
T0*
_output_shapes
: Б
Read_20/DisableCopyOnReadDisableCopyOnRead,read_20_disablecopyonread_adam_m_phi3_kernel"/device:CPU:0*
_output_shapes
 Ѓ
Read_20/ReadVariableOpReadVariableOp,read_20_disablecopyonread_adam_m_phi3_kernel^Read_20/DisableCopyOnRead"/device:CPU:0*
_output_shapes

:  *
dtype0o
Identity_40IdentityRead_20/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes

:  e
Identity_41IdentityIdentity_40:output:0"/device:CPU:0*
T0*
_output_shapes

:  Б
Read_21/DisableCopyOnReadDisableCopyOnRead,read_21_disablecopyonread_adam_v_phi3_kernel"/device:CPU:0*
_output_shapes
 Ѓ
Read_21/ReadVariableOpReadVariableOp,read_21_disablecopyonread_adam_v_phi3_kernel^Read_21/DisableCopyOnRead"/device:CPU:0*
_output_shapes

:  *
dtype0o
Identity_42IdentityRead_21/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes

:  e
Identity_43IdentityIdentity_42:output:0"/device:CPU:0*
T0*
_output_shapes

:  
Read_22/DisableCopyOnReadDisableCopyOnRead*read_22_disablecopyonread_adam_m_phi3_bias"/device:CPU:0*
_output_shapes
 ®
Read_22/ReadVariableOpReadVariableOp*read_22_disablecopyonread_adam_m_phi3_bias^Read_22/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0k
Identity_44IdentityRead_22/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: a
Identity_45IdentityIdentity_44:output:0"/device:CPU:0*
T0*
_output_shapes
: 
Read_23/DisableCopyOnReadDisableCopyOnRead*read_23_disablecopyonread_adam_v_phi3_bias"/device:CPU:0*
_output_shapes
 ®
Read_23/ReadVariableOpReadVariableOp*read_23_disablecopyonread_adam_v_phi3_bias^Read_23/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0k
Identity_46IdentityRead_23/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: a
Identity_47IdentityIdentity_46:output:0"/device:CPU:0*
T0*
_output_shapes
: А
Read_24/DisableCopyOnReadDisableCopyOnRead+read_24_disablecopyonread_adam_m_rho_kernel"/device:CPU:0*
_output_shapes
 ≠
Read_24/ReadVariableOpReadVariableOp+read_24_disablecopyonread_adam_m_rho_kernel^Read_24/DisableCopyOnRead"/device:CPU:0*
_output_shapes

:  *
dtype0o
Identity_48IdentityRead_24/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes

:  e
Identity_49IdentityIdentity_48:output:0"/device:CPU:0*
T0*
_output_shapes

:  А
Read_25/DisableCopyOnReadDisableCopyOnRead+read_25_disablecopyonread_adam_v_rho_kernel"/device:CPU:0*
_output_shapes
 ≠
Read_25/ReadVariableOpReadVariableOp+read_25_disablecopyonread_adam_v_rho_kernel^Read_25/DisableCopyOnRead"/device:CPU:0*
_output_shapes

:  *
dtype0o
Identity_50IdentityRead_25/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes

:  e
Identity_51IdentityIdentity_50:output:0"/device:CPU:0*
T0*
_output_shapes

:  ~
Read_26/DisableCopyOnReadDisableCopyOnRead)read_26_disablecopyonread_adam_m_rho_bias"/device:CPU:0*
_output_shapes
 І
Read_26/ReadVariableOpReadVariableOp)read_26_disablecopyonread_adam_m_rho_bias^Read_26/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0k
Identity_52IdentityRead_26/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: a
Identity_53IdentityIdentity_52:output:0"/device:CPU:0*
T0*
_output_shapes
: ~
Read_27/DisableCopyOnReadDisableCopyOnRead)read_27_disablecopyonread_adam_v_rho_bias"/device:CPU:0*
_output_shapes
 І
Read_27/ReadVariableOpReadVariableOp)read_27_disablecopyonread_adam_v_rho_bias^Read_27/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0k
Identity_54IdentityRead_27/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: a
Identity_55IdentityIdentity_54:output:0"/device:CPU:0*
T0*
_output_shapes
: В
Read_28/DisableCopyOnReadDisableCopyOnRead-read_28_disablecopyonread_adam_m_dense_kernel"/device:CPU:0*
_output_shapes
 ѓ
Read_28/ReadVariableOpReadVariableOp-read_28_disablecopyonread_adam_m_dense_kernel^Read_28/DisableCopyOnRead"/device:CPU:0*
_output_shapes

: *
dtype0o
Identity_56IdentityRead_28/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes

: e
Identity_57IdentityIdentity_56:output:0"/device:CPU:0*
T0*
_output_shapes

: В
Read_29/DisableCopyOnReadDisableCopyOnRead-read_29_disablecopyonread_adam_v_dense_kernel"/device:CPU:0*
_output_shapes
 ѓ
Read_29/ReadVariableOpReadVariableOp-read_29_disablecopyonread_adam_v_dense_kernel^Read_29/DisableCopyOnRead"/device:CPU:0*
_output_shapes

: *
dtype0o
Identity_58IdentityRead_29/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes

: e
Identity_59IdentityIdentity_58:output:0"/device:CPU:0*
T0*
_output_shapes

: А
Read_30/DisableCopyOnReadDisableCopyOnRead+read_30_disablecopyonread_adam_m_dense_bias"/device:CPU:0*
_output_shapes
 ©
Read_30/ReadVariableOpReadVariableOp+read_30_disablecopyonread_adam_m_dense_bias^Read_30/DisableCopyOnRead"/device:CPU:0*
_output_shapes
:*
dtype0k
Identity_60IdentityRead_30/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
:a
Identity_61IdentityIdentity_60:output:0"/device:CPU:0*
T0*
_output_shapes
:А
Read_31/DisableCopyOnReadDisableCopyOnRead+read_31_disablecopyonread_adam_v_dense_bias"/device:CPU:0*
_output_shapes
 ©
Read_31/ReadVariableOpReadVariableOp+read_31_disablecopyonread_adam_v_dense_bias^Read_31/DisableCopyOnRead"/device:CPU:0*
_output_shapes
:*
dtype0k
Identity_62IdentityRead_31/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
:a
Identity_63IdentityIdentity_62:output:0"/device:CPU:0*
T0*
_output_shapes
:v
Read_32/DisableCopyOnReadDisableCopyOnRead!read_32_disablecopyonread_total_1"/device:CPU:0*
_output_shapes
 Ы
Read_32/ReadVariableOpReadVariableOp!read_32_disablecopyonread_total_1^Read_32/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0g
Identity_64IdentityRead_32/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: ]
Identity_65IdentityIdentity_64:output:0"/device:CPU:0*
T0*
_output_shapes
: v
Read_33/DisableCopyOnReadDisableCopyOnRead!read_33_disablecopyonread_count_1"/device:CPU:0*
_output_shapes
 Ы
Read_33/ReadVariableOpReadVariableOp!read_33_disablecopyonread_count_1^Read_33/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0g
Identity_66IdentityRead_33/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: ]
Identity_67IdentityIdentity_66:output:0"/device:CPU:0*
T0*
_output_shapes
: t
Read_34/DisableCopyOnReadDisableCopyOnReadread_34_disablecopyonread_total"/device:CPU:0*
_output_shapes
 Щ
Read_34/ReadVariableOpReadVariableOpread_34_disablecopyonread_total^Read_34/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0g
Identity_68IdentityRead_34/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: ]
Identity_69IdentityIdentity_68:output:0"/device:CPU:0*
T0*
_output_shapes
: t
Read_35/DisableCopyOnReadDisableCopyOnReadread_35_disablecopyonread_count"/device:CPU:0*
_output_shapes
 Щ
Read_35/ReadVariableOpReadVariableOpread_35_disablecopyonread_count^Read_35/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0g
Identity_70IdentityRead_35/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: ]
Identity_71IdentityIdentity_70:output:0"/device:CPU:0*
T0*
_output_shapes
: ц
SaveV2/tensor_namesConst"/device:CPU:0*
_output_shapes
:%*
dtype0*Я
valueХBТ%B6layer_with_weights-0/kernel/.ATTRIBUTES/VARIABLE_VALUEB4layer_with_weights-0/bias/.ATTRIBUTES/VARIABLE_VALUEB6layer_with_weights-1/kernel/.ATTRIBUTES/VARIABLE_VALUEB4layer_with_weights-1/bias/.ATTRIBUTES/VARIABLE_VALUEB6layer_with_weights-2/kernel/.ATTRIBUTES/VARIABLE_VALUEB4layer_with_weights-2/bias/.ATTRIBUTES/VARIABLE_VALUEB6layer_with_weights-3/kernel/.ATTRIBUTES/VARIABLE_VALUEB4layer_with_weights-3/bias/.ATTRIBUTES/VARIABLE_VALUEB6layer_with_weights-4/kernel/.ATTRIBUTES/VARIABLE_VALUEB4layer_with_weights-4/bias/.ATTRIBUTES/VARIABLE_VALUEB0optimizer/_iterations/.ATTRIBUTES/VARIABLE_VALUEB3optimizer/_learning_rate/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/1/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/2/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/3/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/4/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/5/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/6/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/7/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/8/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/9/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/10/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/11/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/12/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/13/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/14/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/15/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/16/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/17/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/18/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/19/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/20/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/0/total/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/0/count/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/1/total/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/1/count/.ATTRIBUTES/VARIABLE_VALUEB_CHECKPOINTABLE_OBJECT_GRAPHЈ
SaveV2/shape_and_slicesConst"/device:CPU:0*
_output_shapes
:%*
dtype0*]
valueTBR%B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B П
SaveV2SaveV2ShardedFilename:filename:0SaveV2/tensor_names:output:0 SaveV2/shape_and_slices:output:0Identity_1:output:0Identity_3:output:0Identity_5:output:0Identity_7:output:0Identity_9:output:0Identity_11:output:0Identity_13:output:0Identity_15:output:0Identity_17:output:0Identity_19:output:0Identity_21:output:0Identity_23:output:0Identity_25:output:0Identity_27:output:0Identity_29:output:0Identity_31:output:0Identity_33:output:0Identity_35:output:0Identity_37:output:0Identity_39:output:0Identity_41:output:0Identity_43:output:0Identity_45:output:0Identity_47:output:0Identity_49:output:0Identity_51:output:0Identity_53:output:0Identity_55:output:0Identity_57:output:0Identity_59:output:0Identity_61:output:0Identity_63:output:0Identity_65:output:0Identity_67:output:0Identity_69:output:0Identity_71:output:0savev2_const"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *3
dtypes)
'2%	Р
&MergeV2Checkpoints/checkpoint_prefixesPackShardedFilename:filename:0^SaveV2"/device:CPU:0*
N*
T0*
_output_shapes
:≥
MergeV2CheckpointsMergeV2Checkpoints/MergeV2Checkpoints/checkpoint_prefixes:output:0file_prefix"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 i
Identity_72Identityfile_prefix^MergeV2Checkpoints"/device:CPU:0*
T0*
_output_shapes
: U
Identity_73IdentityIdentity_72:output:0^NoOp*
T0*
_output_shapes
: У
NoOpNoOp^MergeV2Checkpoints^Read/DisableCopyOnRead^Read/ReadVariableOp^Read_1/DisableCopyOnRead^Read_1/ReadVariableOp^Read_10/DisableCopyOnRead^Read_10/ReadVariableOp^Read_11/DisableCopyOnRead^Read_11/ReadVariableOp^Read_12/DisableCopyOnRead^Read_12/ReadVariableOp^Read_13/DisableCopyOnRead^Read_13/ReadVariableOp^Read_14/DisableCopyOnRead^Read_14/ReadVariableOp^Read_15/DisableCopyOnRead^Read_15/ReadVariableOp^Read_16/DisableCopyOnRead^Read_16/ReadVariableOp^Read_17/DisableCopyOnRead^Read_17/ReadVariableOp^Read_18/DisableCopyOnRead^Read_18/ReadVariableOp^Read_19/DisableCopyOnRead^Read_19/ReadVariableOp^Read_2/DisableCopyOnRead^Read_2/ReadVariableOp^Read_20/DisableCopyOnRead^Read_20/ReadVariableOp^Read_21/DisableCopyOnRead^Read_21/ReadVariableOp^Read_22/DisableCopyOnRead^Read_22/ReadVariableOp^Read_23/DisableCopyOnRead^Read_23/ReadVariableOp^Read_24/DisableCopyOnRead^Read_24/ReadVariableOp^Read_25/DisableCopyOnRead^Read_25/ReadVariableOp^Read_26/DisableCopyOnRead^Read_26/ReadVariableOp^Read_27/DisableCopyOnRead^Read_27/ReadVariableOp^Read_28/DisableCopyOnRead^Read_28/ReadVariableOp^Read_29/DisableCopyOnRead^Read_29/ReadVariableOp^Read_3/DisableCopyOnRead^Read_3/ReadVariableOp^Read_30/DisableCopyOnRead^Read_30/ReadVariableOp^Read_31/DisableCopyOnRead^Read_31/ReadVariableOp^Read_32/DisableCopyOnRead^Read_32/ReadVariableOp^Read_33/DisableCopyOnRead^Read_33/ReadVariableOp^Read_34/DisableCopyOnRead^Read_34/ReadVariableOp^Read_35/DisableCopyOnRead^Read_35/ReadVariableOp^Read_4/DisableCopyOnRead^Read_4/ReadVariableOp^Read_5/DisableCopyOnRead^Read_5/ReadVariableOp^Read_6/DisableCopyOnRead^Read_6/ReadVariableOp^Read_7/DisableCopyOnRead^Read_7/ReadVariableOp^Read_8/DisableCopyOnRead^Read_8/ReadVariableOp^Read_9/DisableCopyOnRead^Read_9/ReadVariableOp*
_output_shapes
 "#
identity_73Identity_73:output:0*(
_construction_contextkEagerRuntime*_
_input_shapesN
L: : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : 2(
MergeV2CheckpointsMergeV2Checkpoints20
Read/DisableCopyOnReadRead/DisableCopyOnRead2*
Read/ReadVariableOpRead/ReadVariableOp24
Read_1/DisableCopyOnReadRead_1/DisableCopyOnRead2.
Read_1/ReadVariableOpRead_1/ReadVariableOp26
Read_10/DisableCopyOnReadRead_10/DisableCopyOnRead20
Read_10/ReadVariableOpRead_10/ReadVariableOp26
Read_11/DisableCopyOnReadRead_11/DisableCopyOnRead20
Read_11/ReadVariableOpRead_11/ReadVariableOp26
Read_12/DisableCopyOnReadRead_12/DisableCopyOnRead20
Read_12/ReadVariableOpRead_12/ReadVariableOp26
Read_13/DisableCopyOnReadRead_13/DisableCopyOnRead20
Read_13/ReadVariableOpRead_13/ReadVariableOp26
Read_14/DisableCopyOnReadRead_14/DisableCopyOnRead20
Read_14/ReadVariableOpRead_14/ReadVariableOp26
Read_15/DisableCopyOnReadRead_15/DisableCopyOnRead20
Read_15/ReadVariableOpRead_15/ReadVariableOp26
Read_16/DisableCopyOnReadRead_16/DisableCopyOnRead20
Read_16/ReadVariableOpRead_16/ReadVariableOp26
Read_17/DisableCopyOnReadRead_17/DisableCopyOnRead20
Read_17/ReadVariableOpRead_17/ReadVariableOp26
Read_18/DisableCopyOnReadRead_18/DisableCopyOnRead20
Read_18/ReadVariableOpRead_18/ReadVariableOp26
Read_19/DisableCopyOnReadRead_19/DisableCopyOnRead20
Read_19/ReadVariableOpRead_19/ReadVariableOp24
Read_2/DisableCopyOnReadRead_2/DisableCopyOnRead2.
Read_2/ReadVariableOpRead_2/ReadVariableOp26
Read_20/DisableCopyOnReadRead_20/DisableCopyOnRead20
Read_20/ReadVariableOpRead_20/ReadVariableOp26
Read_21/DisableCopyOnReadRead_21/DisableCopyOnRead20
Read_21/ReadVariableOpRead_21/ReadVariableOp26
Read_22/DisableCopyOnReadRead_22/DisableCopyOnRead20
Read_22/ReadVariableOpRead_22/ReadVariableOp26
Read_23/DisableCopyOnReadRead_23/DisableCopyOnRead20
Read_23/ReadVariableOpRead_23/ReadVariableOp26
Read_24/DisableCopyOnReadRead_24/DisableCopyOnRead20
Read_24/ReadVariableOpRead_24/ReadVariableOp26
Read_25/DisableCopyOnReadRead_25/DisableCopyOnRead20
Read_25/ReadVariableOpRead_25/ReadVariableOp26
Read_26/DisableCopyOnReadRead_26/DisableCopyOnRead20
Read_26/ReadVariableOpRead_26/ReadVariableOp26
Read_27/DisableCopyOnReadRead_27/DisableCopyOnRead20
Read_27/ReadVariableOpRead_27/ReadVariableOp26
Read_28/DisableCopyOnReadRead_28/DisableCopyOnRead20
Read_28/ReadVariableOpRead_28/ReadVariableOp26
Read_29/DisableCopyOnReadRead_29/DisableCopyOnRead20
Read_29/ReadVariableOpRead_29/ReadVariableOp24
Read_3/DisableCopyOnReadRead_3/DisableCopyOnRead2.
Read_3/ReadVariableOpRead_3/ReadVariableOp26
Read_30/DisableCopyOnReadRead_30/DisableCopyOnRead20
Read_30/ReadVariableOpRead_30/ReadVariableOp26
Read_31/DisableCopyOnReadRead_31/DisableCopyOnRead20
Read_31/ReadVariableOpRead_31/ReadVariableOp26
Read_32/DisableCopyOnReadRead_32/DisableCopyOnRead20
Read_32/ReadVariableOpRead_32/ReadVariableOp26
Read_33/DisableCopyOnReadRead_33/DisableCopyOnRead20
Read_33/ReadVariableOpRead_33/ReadVariableOp26
Read_34/DisableCopyOnReadRead_34/DisableCopyOnRead20
Read_34/ReadVariableOpRead_34/ReadVariableOp26
Read_35/DisableCopyOnReadRead_35/DisableCopyOnRead20
Read_35/ReadVariableOpRead_35/ReadVariableOp24
Read_4/DisableCopyOnReadRead_4/DisableCopyOnRead2.
Read_4/ReadVariableOpRead_4/ReadVariableOp24
Read_5/DisableCopyOnReadRead_5/DisableCopyOnRead2.
Read_5/ReadVariableOpRead_5/ReadVariableOp24
Read_6/DisableCopyOnReadRead_6/DisableCopyOnRead2.
Read_6/ReadVariableOpRead_6/ReadVariableOp24
Read_7/DisableCopyOnReadRead_7/DisableCopyOnRead2.
Read_7/ReadVariableOpRead_7/ReadVariableOp24
Read_8/DisableCopyOnReadRead_8/DisableCopyOnRead2.
Read_8/ReadVariableOpRead_8/ReadVariableOp24
Read_9/DisableCopyOnReadRead_9/DisableCopyOnRead2.
Read_9/ReadVariableOpRead_9/ReadVariableOp:=%9

_output_shapes
: 

_user_specified_nameConst:%$!

_user_specified_namecount:%#!

_user_specified_nametotal:'"#
!
_user_specified_name	count_1:'!#
!
_user_specified_name	total_1:1 -
+
_user_specified_nameAdam/v/dense/bias:1-
+
_user_specified_nameAdam/m/dense/bias:3/
-
_user_specified_nameAdam/v/dense/kernel:3/
-
_user_specified_nameAdam/m/dense/kernel:/+
)
_user_specified_nameAdam/v/rho/bias:/+
)
_user_specified_nameAdam/m/rho/bias:1-
+
_user_specified_nameAdam/v/rho/kernel:1-
+
_user_specified_nameAdam/m/rho/kernel:0,
*
_user_specified_nameAdam/v/phi3/bias:0,
*
_user_specified_nameAdam/m/phi3/bias:2.
,
_user_specified_nameAdam/v/phi3/kernel:2.
,
_user_specified_nameAdam/m/phi3/kernel:0,
*
_user_specified_nameAdam/v/phi2/bias:0,
*
_user_specified_nameAdam/m/phi2/bias:2.
,
_user_specified_nameAdam/v/phi2/kernel:2.
,
_user_specified_nameAdam/m/phi2/kernel:0,
*
_user_specified_nameAdam/v/phi1/bias:0,
*
_user_specified_nameAdam/m/phi1/bias:2.
,
_user_specified_nameAdam/v/phi1/kernel:2.
,
_user_specified_nameAdam/m/phi1/kernel:-)
'
_user_specified_namelearning_rate:)%
#
_user_specified_name	iteration:*
&
$
_user_specified_name
dense/bias:,	(
&
_user_specified_namedense/kernel:($
"
_user_specified_name
rho/bias:*&
$
_user_specified_name
rho/kernel:)%
#
_user_specified_name	phi3/bias:+'
%
_user_specified_namephi3/kernel:)%
#
_user_specified_name	phi2/bias:+'
%
_user_specified_namephi2/kernel:)%
#
_user_specified_name	phi1/bias:+'
%
_user_specified_namephi1/kernel:C ?

_output_shapes
: 
%
_user_specified_namefile_prefix
€
У
&__inference_phi1_layer_call_fn_1504324

inputs
unknown: 
	unknown_0: 
identityИҐStatefulPartitionedCallя
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *J
fERC
A__inference_phi1_layer_call_and_return_conditional_losses_1503570s
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:€€€€€€€€€ <
NoOpNoOp^StatefulPartitionedCall*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:€€€€€€€€€: : 22
StatefulPartitionedCallStatefulPartitionedCall:'#
!
_user_specified_name	1504320:'#
!
_user_specified_name	1504318:S O
+
_output_shapes
:€€€€€€€€€
 
_user_specified_nameinputs
¶
g
K__inference_q_activation_3_layer_call_and_return_conditional_losses_1504789

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
value	B :K
PowPowPow/x:output:0Pow/y:output:0*
T0*
_output_shapes
: E
CastCastPow:z:0*

DstT0*

SrcT0*
_output_shapes
: J
mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *   EX
mulMulinputsmul/y:output:0*
T0*+
_output_shapes
:€€€€€€€€€ [
truedivRealDivmul:z:0Cast:y:0*
T0*+
_output_shapes
:€€€€€€€€€ M
NegNegtruediv:z:0*
T0*+
_output_shapes
:€€€€€€€€€ Q
RoundRoundtruediv:z:0*
T0*+
_output_shapes
:€€€€€€€€€ V
addAddV2Neg:y:0	Round:y:0*
T0*+
_output_shapes
:€€€€€€€€€ [
StopGradientStopGradientadd:z:0*
T0*+
_output_shapes
:€€€€€€€€€ h
add_1AddV2truediv:z:0StopGradient:output:0*
T0*+
_output_shapes
:€€€€€€€€€ \
clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * а€DГ
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*+
_output_shapes
:€€€€€€€€€ T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   ≈Г
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*+
_output_shapes
:€€€€€€€€€ _
mul_1MulCast:y:0clip_by_value:z:0*
T0*+
_output_shapes
:€€€€€€€€€ P
truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   Ek
	truediv_1RealDiv	mul_1:z:0truediv_1/y:output:0*
T0*+
_output_shapes
:€€€€€€€€€ L
mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?c
mul_2Mulmul_2/x:output:0truediv_1:z:0*
T0*+
_output_shapes
:€€€€€€€€€ J
Neg_1Neginputs*
T0*+
_output_shapes
:€€€€€€€€€ Z
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*+
_output_shapes
:€€€€€€€€€ L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?_
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*+
_output_shapes
:€€€€€€€€€ _
StopGradient_1StopGradient	mul_3:z:0*
T0*+
_output_shapes
:€€€€€€€€€ e
add_3AddV2inputsStopGradient_1:output:0*
T0*+
_output_shapes
:€€€€€€€€€ U
IdentityIdentity	add_3:z:0*
T0*+
_output_shapes
:€€€€€€€€€ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:€€€€€€€€€ :S O
+
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
≠
L
$__inference__update_step_xla_1504275
gradient
variable: *
_XlaMustCompile(*(
_construction_contextkEagerRuntime*
_input_shapes

: : *
	_noinline(:($
"
_user_specified_name
variable:D @

_output_shapes
: 
"
_user_specified_name
gradient
Ї
ю
4__inference_deepsets_invariant_layer_call_fn_1504162
input_layer
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
identityИҐStatefulPartitionedCall÷
StatefulPartitionedCallStatefulPartitionedCallinput_layerunknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4	unknown_5	unknown_6	unknown_7	unknown_8*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:€€€€€€€€€*,
_read_only_resource_inputs

	
*2
config_proto" 

CPU

GPU2 *0J 8В *X
fSRQ
O__inference_deepsets_invariant_layer_call_and_return_conditional_losses_1504112o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€<
NoOpNoOp^StatefulPartitionedCall*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:€€€€€€€€€: : : : : : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:'
#
!
_user_specified_name	1504158:'	#
!
_user_specified_name	1504156:'#
!
_user_specified_name	1504154:'#
!
_user_specified_name	1504152:'#
!
_user_specified_name	1504150:'#
!
_user_specified_name	1504148:'#
!
_user_specified_name	1504146:'#
!
_user_specified_name	1504144:'#
!
_user_specified_name	1504142:'#
!
_user_specified_name	1504140:X T
+
_output_shapes
:€€€€€€€€€
%
_user_specified_nameinput_layer
с
Ф
'__inference_dense_layer_call_fn_1504938

inputs
unknown: 
	unknown_0:
identityИҐStatefulPartitionedCall№
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:€€€€€€€€€*$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *K
fFRD
B__inference_dense_layer_call_and_return_conditional_losses_1504063o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€<
NoOpNoOp^StatefulPartitionedCall*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:€€€€€€€€€ : : 22
StatefulPartitionedCallStatefulPartitionedCall:'#
!
_user_specified_name	1504934:'#
!
_user_specified_name	1504932:O K
'
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
£=
§
A__inference_phi2_layer_call_and_return_conditional_losses_1503708

inputs)
readvariableop_resource:  '
readvariableop_3_resource: 
identityИҐReadVariableOpҐReadVariableOp_1ҐReadVariableOp_2ҐReadVariableOp_3ҐReadVariableOp_4ҐReadVariableOp_5G
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
 *   C[
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
 *  юBv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   √v
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
 *   C^
	truediv_1RealDiv	mul_1:z:0truediv_1/y:output:0*
T0*
_output_shapes

:  L
mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?V
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
 *  А?R
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

:  I
ShapeShapeinputs*
T0*
_output_shapes
::нѕQ
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
valueB"€€€€    d
ReshapeReshapeinputsReshape/shape:output:0*
T0*'
_output_shapes
:€€€€€€€€€ _
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
valueB"    €€€€f
	Reshape_1Reshapetranspose:y:0Reshape_1/shape:output:0*
T0*
_output_shapes

:  h
MatMulMatMulReshape:output:0Reshape_1:output:0*
T0*'
_output_shapes
:€€€€€€€€€ S
Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :S
Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : П
Reshape_2/shapePackunstack:output:0Reshape_2/shape/1:output:0Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:v
	Reshape_2ReshapeMatMul:product:0Reshape_2/shape:output:0*
T0*+
_output_shapes
:€€€€€€€€€ I
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
 *   C]
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
 *  юBv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   √x
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
 *   CZ
	truediv_3RealDiv	mul_5:z:0truediv_3/y:output:0*
T0*
_output_shapes
: L
mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?R
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
 *  А?N
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
:€€€€€€€€€ c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:€€€€€€€€€ Т
NoOpNoOp^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:€€€€€€€€€ : : 2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_52 
ReadVariableOpReadVariableOp:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:S O
+
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
≠
L
$__inference__update_step_xla_1504295
gradient
variable: *
_XlaMustCompile(*(
_construction_contextkEagerRuntime*
_input_shapes

: : *
	_noinline(:($
"
_user_specified_name
variable:D @

_output_shapes
: 
"
_user_specified_name
gradient
Т 
e
I__inference_q_activation_layer_call_and_return_conditional_losses_1504461

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
:€€€€€€€€€ J
ReluReluinputs*
T0*+
_output_shapes
:€€€€€€€€€ S
	ones_likeOnesLikeinputs*
T0*+
_output_shapes
:€€€€€€€€€ D
sub_2Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: Z
mulMulones_like:y:0	sub_2:z:0*
T0*+
_output_shapes
:€€€€€€€€€ v
SelectV2SelectV2LessEqual:z:0Relu:activations:0mul:z:0*
T0*+
_output_shapes
:€€€€€€€€€ T
mul_1MulinputsCast:y:0*
T0*+
_output_shapes
:€€€€€€€€€ _
truedivRealDiv	mul_1:z:0
Cast_1:y:0*
T0*+
_output_shapes
:€€€€€€€€€ M
NegNegtruediv:z:0*
T0*+
_output_shapes
:€€€€€€€€€ Q
RoundRoundtruediv:z:0*
T0*+
_output_shapes
:€€€€€€€€€ V
addAddV2Neg:y:0	Round:y:0*
T0*+
_output_shapes
:€€€€€€€€€ [
StopGradientStopGradientadd:z:0*
T0*+
_output_shapes
:€€€€€€€€€ h
add_1AddV2truediv:z:0StopGradient:output:0*
T0*+
_output_shapes
:€€€€€€€€€ _
	truediv_1RealDiv	add_1:z:0Cast:y:0*
T0*+
_output_shapes
:€€€€€€€€€ P
truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?U
	truediv_2RealDivtruediv_2/x:output:0Cast:y:0*
T0*
_output_shapes
: L
sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?N
sub_3Subsub_3/x:output:0truediv_2:z:0*
T0*
_output_shapes
: p
clip_by_value/MinimumMinimumtruediv_1:z:0	sub_3:z:0*
T0*+
_output_shapes
:€€€€€€€€€ T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    Г
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*+
_output_shapes
:€€€€€€€€€ a
mul_2Mul
Cast_1:y:0clip_by_value:z:0*
T0*+
_output_shapes
:€€€€€€€€€ U
Neg_1NegSelectV2:output:0*
T0*+
_output_shapes
:€€€€€€€€€ Z
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*+
_output_shapes
:€€€€€€€€€ L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?_
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*+
_output_shapes
:€€€€€€€€€ _
StopGradient_1StopGradient	mul_3:z:0*
T0*+
_output_shapes
:€€€€€€€€€ p
add_3AddV2SelectV2:output:0StopGradient_1:output:0*
T0*+
_output_shapes
:€€€€€€€€€ U
IdentityIdentity	add_3:z:0*
T0*+
_output_shapes
:€€€€€€€€€ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:€€€€€€€€€ :S O
+
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
£=
§
A__inference_phi3_layer_call_and_return_conditional_losses_1503846

inputs)
readvariableop_resource:  '
readvariableop_3_resource: 
identityИҐReadVariableOpҐReadVariableOp_1ҐReadVariableOp_2ҐReadVariableOp_3ҐReadVariableOp_4ҐReadVariableOp_5G
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
 *   C[
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
 *  юBv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   √v
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
 *   C^
	truediv_1RealDiv	mul_1:z:0truediv_1/y:output:0*
T0*
_output_shapes

:  L
mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?V
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
 *  А?R
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

:  I
ShapeShapeinputs*
T0*
_output_shapes
::нѕQ
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
valueB"€€€€    d
ReshapeReshapeinputsReshape/shape:output:0*
T0*'
_output_shapes
:€€€€€€€€€ _
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
valueB"    €€€€f
	Reshape_1Reshapetranspose:y:0Reshape_1/shape:output:0*
T0*
_output_shapes

:  h
MatMulMatMulReshape:output:0Reshape_1:output:0*
T0*'
_output_shapes
:€€€€€€€€€ S
Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :S
Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : П
Reshape_2/shapePackunstack:output:0Reshape_2/shape/1:output:0Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:v
	Reshape_2ReshapeMatMul:product:0Reshape_2/shape:output:0*
T0*+
_output_shapes
:€€€€€€€€€ I
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
 *   C]
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
 *  юBv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   √x
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
 *   CZ
	truediv_3RealDiv	mul_5:z:0truediv_3/y:output:0*
T0*
_output_shapes
: L
mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?R
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
 *  А?N
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
:€€€€€€€€€ c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:€€€€€€€€€ Т
NoOpNoOp^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:€€€€€€€€€ : : 2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_52 
ReadVariableOpReadVariableOp:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:S O
+
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
Љ
J
.__inference_q_activation_layer_call_fn_1504414

inputs
identityљ
PartitionedCallPartitionedCallinputs*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *R
fMRK
I__inference_q_activation_layer_call_and_return_conditional_losses_1503622d
IdentityIdentityPartitionedCall:output:0*
T0*+
_output_shapes
:€€€€€€€€€ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:€€€€€€€€€ :S O
+
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
ј
L
0__inference_q_activation_2_layer_call_fn_1504706

inputs
identityњ
PartitionedCallPartitionedCallinputs*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *T
fORM
K__inference_q_activation_2_layer_call_and_return_conditional_losses_1503898d
IdentityIdentityPartitionedCall:output:0*
T0*+
_output_shapes
:€€€€€€€€€ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:€€€€€€€€€ :S O
+
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
Ї
ю
4__inference_deepsets_invariant_layer_call_fn_1504137
input_layer
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
identityИҐStatefulPartitionedCall÷
StatefulPartitionedCallStatefulPartitionedCallinput_layerunknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4	unknown_5	unknown_6	unknown_7	unknown_8*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:€€€€€€€€€*,
_read_only_resource_inputs

	
*2
config_proto" 

CPU

GPU2 *0J 8В *X
fSRQ
O__inference_deepsets_invariant_layer_call_and_return_conditional_losses_1504076o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€<
NoOpNoOp^StatefulPartitionedCall*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:€€€€€€€€€: : : : : : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:'
#
!
_user_specified_name	1504133:'	#
!
_user_specified_name	1504131:'#
!
_user_specified_name	1504129:'#
!
_user_specified_name	1504127:'#
!
_user_specified_name	1504125:'#
!
_user_specified_name	1504123:'#
!
_user_specified_name	1504121:'#
!
_user_specified_name	1504119:'#
!
_user_specified_name	1504117:'#
!
_user_specified_name	1504115:X T
+
_output_shapes
:€€€€€€€€€
%
_user_specified_nameinput_layer
є
P
$__inference__update_step_xla_1504310
gradient
variable: *
_XlaMustCompile(*(
_construction_contextkEagerRuntime*
_input_shapes
: : *
	_noinline(:($
"
_user_specified_name
variable:H D

_output_shapes

: 
"
_user_specified_name
gradient
є
P
$__inference__update_step_xla_1504300
gradient
variable:  *
_XlaMustCompile(*(
_construction_contextkEagerRuntime*
_input_shapes
:  : *
	_noinline(:($
"
_user_specified_name
variable:H D

_output_shapes

:  
"
_user_specified_name
gradient
£=
§
A__inference_phi1_layer_call_and_return_conditional_losses_1504409

inputs)
readvariableop_resource: '
readvariableop_3_resource: 
identityИҐReadVariableOpҐReadVariableOp_1ҐReadVariableOp_2ҐReadVariableOp_3ҐReadVariableOp_4ҐReadVariableOp_5G
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
 *   C[
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
 *  юBv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   √v
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
 *   C^
	truediv_1RealDiv	mul_1:z:0truediv_1/y:output:0*
T0*
_output_shapes

: L
mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?V
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
 *  А?R
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

: I
ShapeShapeinputs*
T0*
_output_shapes
::нѕQ
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
valueB"€€€€   d
ReshapeReshapeinputsReshape/shape:output:0*
T0*'
_output_shapes
:€€€€€€€€€_
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
valueB"   €€€€f
	Reshape_1Reshapetranspose:y:0Reshape_1/shape:output:0*
T0*
_output_shapes

: h
MatMulMatMulReshape:output:0Reshape_1:output:0*
T0*'
_output_shapes
:€€€€€€€€€ S
Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :S
Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : П
Reshape_2/shapePackunstack:output:0Reshape_2/shape/1:output:0Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:v
	Reshape_2ReshapeMatMul:product:0Reshape_2/shape:output:0*
T0*+
_output_shapes
:€€€€€€€€€ I
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
 *   C]
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
 *  юBv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   √x
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
 *   CZ
	truediv_3RealDiv	mul_5:z:0truediv_3/y:output:0*
T0*
_output_shapes
: L
mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?R
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
 *  А?N
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
:€€€€€€€€€ c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:€€€€€€€€€ Т
NoOpNoOp^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:€€€€€€€€€: : 2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_52 
ReadVariableOpReadVariableOp:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:S O
+
_output_shapes
:€€€€€€€€€
 
_user_specified_nameinputs
Т 
e
I__inference_q_activation_layer_call_and_return_conditional_losses_1503622

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
:€€€€€€€€€ J
ReluReluinputs*
T0*+
_output_shapes
:€€€€€€€€€ S
	ones_likeOnesLikeinputs*
T0*+
_output_shapes
:€€€€€€€€€ D
sub_2Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: Z
mulMulones_like:y:0	sub_2:z:0*
T0*+
_output_shapes
:€€€€€€€€€ v
SelectV2SelectV2LessEqual:z:0Relu:activations:0mul:z:0*
T0*+
_output_shapes
:€€€€€€€€€ T
mul_1MulinputsCast:y:0*
T0*+
_output_shapes
:€€€€€€€€€ _
truedivRealDiv	mul_1:z:0
Cast_1:y:0*
T0*+
_output_shapes
:€€€€€€€€€ M
NegNegtruediv:z:0*
T0*+
_output_shapes
:€€€€€€€€€ Q
RoundRoundtruediv:z:0*
T0*+
_output_shapes
:€€€€€€€€€ V
addAddV2Neg:y:0	Round:y:0*
T0*+
_output_shapes
:€€€€€€€€€ [
StopGradientStopGradientadd:z:0*
T0*+
_output_shapes
:€€€€€€€€€ h
add_1AddV2truediv:z:0StopGradient:output:0*
T0*+
_output_shapes
:€€€€€€€€€ _
	truediv_1RealDiv	add_1:z:0Cast:y:0*
T0*+
_output_shapes
:€€€€€€€€€ P
truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?U
	truediv_2RealDivtruediv_2/x:output:0Cast:y:0*
T0*
_output_shapes
: L
sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?N
sub_3Subsub_3/x:output:0truediv_2:z:0*
T0*
_output_shapes
: p
clip_by_value/MinimumMinimumtruediv_1:z:0	sub_3:z:0*
T0*+
_output_shapes
:€€€€€€€€€ T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    Г
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*+
_output_shapes
:€€€€€€€€€ a
mul_2Mul
Cast_1:y:0clip_by_value:z:0*
T0*+
_output_shapes
:€€€€€€€€€ U
Neg_1NegSelectV2:output:0*
T0*+
_output_shapes
:€€€€€€€€€ Z
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*+
_output_shapes
:€€€€€€€€€ L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?_
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*+
_output_shapes
:€€€€€€€€€ _
StopGradient_1StopGradient	mul_3:z:0*
T0*+
_output_shapes
:€€€€€€€€€ p
add_3AddV2SelectV2:output:0StopGradient_1:output:0*
T0*+
_output_shapes
:€€€€€€€€€ U
IdentityIdentity	add_3:z:0*
T0*+
_output_shapes
:€€€€€€€€€ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:€€€€€€€€€ :S O
+
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
£=
§
A__inference_phi3_layer_call_and_return_conditional_losses_1504701

inputs)
readvariableop_resource:  '
readvariableop_3_resource: 
identityИҐReadVariableOpҐReadVariableOp_1ҐReadVariableOp_2ҐReadVariableOp_3ҐReadVariableOp_4ҐReadVariableOp_5G
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
 *   C[
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
 *  юBv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   √v
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
 *   C^
	truediv_1RealDiv	mul_1:z:0truediv_1/y:output:0*
T0*
_output_shapes

:  L
mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?V
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
 *  А?R
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

:  I
ShapeShapeinputs*
T0*
_output_shapes
::нѕQ
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
valueB"€€€€    d
ReshapeReshapeinputsReshape/shape:output:0*
T0*'
_output_shapes
:€€€€€€€€€ _
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
valueB"    €€€€f
	Reshape_1Reshapetranspose:y:0Reshape_1/shape:output:0*
T0*
_output_shapes

:  h
MatMulMatMulReshape:output:0Reshape_1:output:0*
T0*'
_output_shapes
:€€€€€€€€€ S
Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :S
Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : П
Reshape_2/shapePackunstack:output:0Reshape_2/shape/1:output:0Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:v
	Reshape_2ReshapeMatMul:product:0Reshape_2/shape:output:0*
T0*+
_output_shapes
:€€€€€€€€€ I
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
 *   C]
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
 *  юBv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   √x
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
 *   CZ
	truediv_3RealDiv	mul_5:z:0truediv_3/y:output:0*
T0*
_output_shapes
: L
mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?R
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
 *  А?N
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
:€€€€€€€€€ c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:€€€€€€€€€ Т
NoOpNoOp^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:€€€€€€€€€ : : 2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_52 
ReadVariableOpReadVariableOp:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:S O
+
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
∞
L
0__inference_q_activation_4_layer_call_fn_1504882

inputs
identityї
PartitionedCallPartitionedCallinputs*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:€€€€€€€€€ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *T
fORM
K__inference_q_activation_4_layer_call_and_return_conditional_losses_1504052`
IdentityIdentityPartitionedCall:output:0*
T0*'
_output_shapes
:€€€€€€€€€ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*&
_input_shapes
:€€€€€€€€€ :O K
'
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
¶
g
K__inference_q_activation_3_layer_call_and_return_conditional_losses_1503930

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
value	B :K
PowPowPow/x:output:0Pow/y:output:0*
T0*
_output_shapes
: E
CastCastPow:z:0*

DstT0*

SrcT0*
_output_shapes
: J
mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *   EX
mulMulinputsmul/y:output:0*
T0*+
_output_shapes
:€€€€€€€€€ [
truedivRealDivmul:z:0Cast:y:0*
T0*+
_output_shapes
:€€€€€€€€€ M
NegNegtruediv:z:0*
T0*+
_output_shapes
:€€€€€€€€€ Q
RoundRoundtruediv:z:0*
T0*+
_output_shapes
:€€€€€€€€€ V
addAddV2Neg:y:0	Round:y:0*
T0*+
_output_shapes
:€€€€€€€€€ [
StopGradientStopGradientadd:z:0*
T0*+
_output_shapes
:€€€€€€€€€ h
add_1AddV2truediv:z:0StopGradient:output:0*
T0*+
_output_shapes
:€€€€€€€€€ \
clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * а€DГ
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*+
_output_shapes
:€€€€€€€€€ T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   ≈Г
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*+
_output_shapes
:€€€€€€€€€ _
mul_1MulCast:y:0clip_by_value:z:0*
T0*+
_output_shapes
:€€€€€€€€€ P
truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   Ek
	truediv_1RealDiv	mul_1:z:0truediv_1/y:output:0*
T0*+
_output_shapes
:€€€€€€€€€ L
mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?c
mul_2Mulmul_2/x:output:0truediv_1:z:0*
T0*+
_output_shapes
:€€€€€€€€€ J
Neg_1Neginputs*
T0*+
_output_shapes
:€€€€€€€€€ Z
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*+
_output_shapes
:€€€€€€€€€ L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?_
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*+
_output_shapes
:€€€€€€€€€ _
StopGradient_1StopGradient	mul_3:z:0*
T0*+
_output_shapes
:€€€€€€€€€ e
add_3AddV2inputsStopGradient_1:output:0*
T0*+
_output_shapes
:€€€€€€€€€ U
IdentityIdentity	add_3:z:0*
T0*+
_output_shapes
:€€€€€€€€€ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:€€€€€€€€€ :S O
+
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
¶2
£
@__inference_rho_layer_call_and_return_conditional_losses_1504000

inputs)
readvariableop_resource:  '
readvariableop_3_resource: 
identityИҐReadVariableOpҐReadVariableOp_1ҐReadVariableOp_2ҐReadVariableOp_3ҐReadVariableOp_4ҐReadVariableOp_5G
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
 *   C[
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
 *  юBv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   √v
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
 *   C^
	truediv_1RealDiv	mul_1:z:0truediv_1/y:output:0*
T0*
_output_shapes

:  L
mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?V
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
 *  А?R
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
:€€€€€€€€€ I
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
 *   C]
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
 *  юBv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   √x
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
 *   CZ
	truediv_3RealDiv	mul_5:z:0truediv_3/y:output:0*
T0*
_output_shapes
: L
mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?R
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
 *  А?N
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
:€€€€€€€€€ _
IdentityIdentityBiasAdd:output:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€ Т
NoOpNoOp^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:€€€€€€€€€ : : 2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_52 
ReadVariableOpReadVariableOp:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:O K
'
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs"ІL
saver_filename:0StatefulPartitionedCall_1:0StatefulPartitionedCall_28"
saved_model_main_op

NoOp*>
__saved_model_init_op%#
__saved_model_init_op

NoOp*ґ
serving_defaultҐ
G
input_layer8
serving_default_input_layer:0€€€€€€€€€;
softmax0
StatefulPartitionedCall:0€€€€€€€€€tensorflow/serving/predict:Ј§
С
layer-0
layer_with_weights-0
layer-1
layer-2
layer_with_weights-1
layer-3
layer-4
layer_with_weights-2
layer-5
layer-6
layer-7
	layer-8

layer_with_weights-3

layer-9
layer-10
layer_with_weights-4
layer-11
layer-12
	variables
trainable_variables
regularization_losses
	keras_api
__call__
*&call_and_return_all_conditional_losses
_default_save_signature
	optimizer

signatures"
_tf_keras_network
"
_tf_keras_input_layer
З
	variables
trainable_variables
regularization_losses
	keras_api
__call__
*&call_and_return_all_conditional_losses
kernel_quantizer_internal
bias_quantizer_internal

quantizers

 kernel
!bias"
_tf_keras_layer
і
"	variables
#trainable_variables
$regularization_losses
%	keras_api
&__call__
*'&call_and_return_all_conditional_losses
(	quantizer"
_tf_keras_layer
З
)	variables
*trainable_variables
+regularization_losses
,	keras_api
-__call__
*.&call_and_return_all_conditional_losses
/kernel_quantizer_internal
0bias_quantizer_internal
1
quantizers

2kernel
3bias"
_tf_keras_layer
і
4	variables
5trainable_variables
6regularization_losses
7	keras_api
8__call__
*9&call_and_return_all_conditional_losses
:	quantizer"
_tf_keras_layer
З
;	variables
<trainable_variables
=regularization_losses
>	keras_api
?__call__
*@&call_and_return_all_conditional_losses
Akernel_quantizer_internal
Bbias_quantizer_internal
C
quantizers

Dkernel
Ebias"
_tf_keras_layer
і
F	variables
Gtrainable_variables
Hregularization_losses
I	keras_api
J__call__
*K&call_and_return_all_conditional_losses
L	quantizer"
_tf_keras_layer
ƒ
M	variables
Ntrainable_variables
Oregularization_losses
P	keras_api
Q__call__
*R&call_and_return_all_conditional_losses
S
activation
S	quantizer"
_tf_keras_layer
•
T	variables
Utrainable_variables
Vregularization_losses
W	keras_api
X__call__
*Y&call_and_return_all_conditional_losses"
_tf_keras_layer
З
Z	variables
[trainable_variables
\regularization_losses
]	keras_api
^__call__
*_&call_and_return_all_conditional_losses
`kernel_quantizer_internal
abias_quantizer_internal
b
quantizers

ckernel
dbias"
_tf_keras_layer
і
e	variables
ftrainable_variables
gregularization_losses
h	keras_api
i__call__
*j&call_and_return_all_conditional_losses
k	quantizer"
_tf_keras_layer
ї
l	variables
mtrainable_variables
nregularization_losses
o	keras_api
p__call__
*q&call_and_return_all_conditional_losses

rkernel
sbias"
_tf_keras_layer
•
t	variables
utrainable_variables
vregularization_losses
w	keras_api
x__call__
*y&call_and_return_all_conditional_losses"
_tf_keras_layer
f
 0
!1
22
33
D4
E5
c6
d7
r8
s9"
trackable_list_wrapper
f
 0
!1
22
33
D4
E5
c6
d7
r8
s9"
trackable_list_wrapper
 "
trackable_list_wrapper
 
znon_trainable_variables

{layers
|metrics
}layer_regularization_losses
~layer_metrics
	variables
trainable_variables
regularization_losses
__call__
_default_save_signature
*&call_and_return_all_conditional_losses
&"call_and_return_conditional_losses"
_generic_user_object
Ё
trace_0
Аtrace_12§
4__inference_deepsets_invariant_layer_call_fn_1504137
4__inference_deepsets_invariant_layer_call_fn_1504162µ
Ѓ≤™
FullArgSpec)
args!Ъ
jinputs

jtraining
jmask
varargs
 
varkw
 
defaultsҐ
p 

 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 ztrace_0zАtrace_1
Х
Бtrace_0
Вtrace_12Џ
O__inference_deepsets_invariant_layer_call_and_return_conditional_losses_1504076
O__inference_deepsets_invariant_layer_call_and_return_conditional_losses_1504112µ
Ѓ≤™
FullArgSpec)
args!Ъ
jinputs

jtraining
jmask
varargs
 
varkw
 
defaultsҐ
p 

 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 zБtrace_0zВtrace_1
—Bќ
"__inference__wrapped_model_1503472input_layer"Ш
С≤Н
FullArgSpec
argsЪ

jargs_0
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 
£
Г
_variables
Д_iterations
Е_learning_rate
Ж_index_dict
З
_momentums
И_velocities
Й_update_step_xla"
experimentalOptimizer
-
Кserving_default"
signature_map
.
 0
!1"
trackable_list_wrapper
.
 0
!1"
trackable_list_wrapper
 "
trackable_list_wrapper
≤
Лnon_trainable_variables
Мlayers
Нmetrics
 Оlayer_regularization_losses
Пlayer_metrics
	variables
trainable_variables
regularization_losses
__call__
*&call_and_return_all_conditional_losses
&"call_and_return_conditional_losses"
_generic_user_object
в
Рtrace_02√
&__inference_phi1_layer_call_fn_1504324Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 zРtrace_0
э
Сtrace_02ё
A__inference_phi1_layer_call_and_return_conditional_losses_1504409Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 zСtrace_0
"
_generic_user_object
"
_generic_user_object
.
0
1"
trackable_list_wrapper
: 2phi1/kernel
: 2	phi1/bias
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
≤
Тnon_trainable_variables
Уlayers
Фmetrics
 Хlayer_regularization_losses
Цlayer_metrics
"	variables
#trainable_variables
$regularization_losses
&__call__
*'&call_and_return_all_conditional_losses
&'"call_and_return_conditional_losses"
_generic_user_object
к
Чtrace_02Ћ
.__inference_q_activation_layer_call_fn_1504414Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 zЧtrace_0
Е
Шtrace_02ж
I__inference_q_activation_layer_call_and_return_conditional_losses_1504461Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 zШtrace_0
"
_generic_user_object
.
20
31"
trackable_list_wrapper
.
20
31"
trackable_list_wrapper
 "
trackable_list_wrapper
≤
Щnon_trainable_variables
Ъlayers
Ыmetrics
 Ьlayer_regularization_losses
Эlayer_metrics
)	variables
*trainable_variables
+regularization_losses
-__call__
*.&call_and_return_all_conditional_losses
&."call_and_return_conditional_losses"
_generic_user_object
в
Юtrace_02√
&__inference_phi2_layer_call_fn_1504470Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 zЮtrace_0
э
Яtrace_02ё
A__inference_phi2_layer_call_and_return_conditional_losses_1504555Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 zЯtrace_0
"
_generic_user_object
"
_generic_user_object
.
/0
01"
trackable_list_wrapper
:  2phi2/kernel
: 2	phi2/bias
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
≤
†non_trainable_variables
°layers
Ґmetrics
 £layer_regularization_losses
§layer_metrics
4	variables
5trainable_variables
6regularization_losses
8__call__
*9&call_and_return_all_conditional_losses
&9"call_and_return_conditional_losses"
_generic_user_object
м
•trace_02Ќ
0__inference_q_activation_1_layer_call_fn_1504560Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 z•trace_0
З
¶trace_02и
K__inference_q_activation_1_layer_call_and_return_conditional_losses_1504607Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 z¶trace_0
"
_generic_user_object
.
D0
E1"
trackable_list_wrapper
.
D0
E1"
trackable_list_wrapper
 "
trackable_list_wrapper
≤
Іnon_trainable_variables
®layers
©metrics
 ™layer_regularization_losses
Ђlayer_metrics
;	variables
<trainable_variables
=regularization_losses
?__call__
*@&call_and_return_all_conditional_losses
&@"call_and_return_conditional_losses"
_generic_user_object
в
ђtrace_02√
&__inference_phi3_layer_call_fn_1504616Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 zђtrace_0
э
≠trace_02ё
A__inference_phi3_layer_call_and_return_conditional_losses_1504701Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 z≠trace_0
"
_generic_user_object
"
_generic_user_object
.
A0
B1"
trackable_list_wrapper
:  2phi3/kernel
: 2	phi3/bias
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
≤
Ѓnon_trainable_variables
ѓlayers
∞metrics
 ±layer_regularization_losses
≤layer_metrics
F	variables
Gtrainable_variables
Hregularization_losses
J__call__
*K&call_and_return_all_conditional_losses
&K"call_and_return_conditional_losses"
_generic_user_object
м
≥trace_02Ќ
0__inference_q_activation_2_layer_call_fn_1504706Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 z≥trace_0
З
іtrace_02и
K__inference_q_activation_2_layer_call_and_return_conditional_losses_1504753Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 zіtrace_0
"
_generic_user_object
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
≤
µnon_trainable_variables
ґlayers
Јmetrics
 Єlayer_regularization_losses
єlayer_metrics
M	variables
Ntrainable_variables
Oregularization_losses
Q__call__
*R&call_and_return_all_conditional_losses
&R"call_and_return_conditional_losses"
_generic_user_object
м
Їtrace_02Ќ
0__inference_q_activation_3_layer_call_fn_1504758Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 zЇtrace_0
З
їtrace_02и
K__inference_q_activation_3_layer_call_and_return_conditional_losses_1504789Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 zїtrace_0
"
_generic_user_object
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
≤
Љnon_trainable_variables
љlayers
Њmetrics
 њlayer_regularization_losses
јlayer_metrics
T	variables
Utrainable_variables
Vregularization_losses
X__call__
*Y&call_and_return_all_conditional_losses
&Y"call_and_return_conditional_losses"
_generic_user_object
Г
Ѕtrace_02д
:__inference_global_average_pooling1d_layer_call_fn_1504794•
Ю≤Ъ
FullArgSpec
argsЪ
jinputs
jmask
varargs
 
varkw
 
defaultsҐ

 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 zЅtrace_0
Ю
¬trace_02€
U__inference_global_average_pooling1d_layer_call_and_return_conditional_losses_1504800•
Ю≤Ъ
FullArgSpec
argsЪ
jinputs
jmask
varargs
 
varkw
 
defaultsҐ

 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 z¬trace_0
.
c0
d1"
trackable_list_wrapper
.
c0
d1"
trackable_list_wrapper
 "
trackable_list_wrapper
≤
√non_trainable_variables
ƒlayers
≈metrics
 ∆layer_regularization_losses
«layer_metrics
Z	variables
[trainable_variables
\regularization_losses
^__call__
*_&call_and_return_all_conditional_losses
&_"call_and_return_conditional_losses"
_generic_user_object
б
»trace_02¬
%__inference_rho_layer_call_fn_1504809Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 z»trace_0
ь
…trace_02Ё
@__inference_rho_layer_call_and_return_conditional_losses_1504877Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 z…trace_0
"
_generic_user_object
"
_generic_user_object
.
`0
a1"
trackable_list_wrapper
:  2
rho/kernel
: 2rho/bias
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
≤
 non_trainable_variables
Ћlayers
ћmetrics
 Ќlayer_regularization_losses
ќlayer_metrics
e	variables
ftrainable_variables
gregularization_losses
i__call__
*j&call_and_return_all_conditional_losses
&j"call_and_return_conditional_losses"
_generic_user_object
м
ѕtrace_02Ќ
0__inference_q_activation_4_layer_call_fn_1504882Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 zѕtrace_0
З
–trace_02и
K__inference_q_activation_4_layer_call_and_return_conditional_losses_1504929Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 z–trace_0
"
_generic_user_object
.
r0
s1"
trackable_list_wrapper
.
r0
s1"
trackable_list_wrapper
 "
trackable_list_wrapper
≤
—non_trainable_variables
“layers
”metrics
 ‘layer_regularization_losses
’layer_metrics
l	variables
mtrainable_variables
nregularization_losses
p__call__
*q&call_and_return_all_conditional_losses
&q"call_and_return_conditional_losses"
_generic_user_object
г
÷trace_02ƒ
'__inference_dense_layer_call_fn_1504938Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 z÷trace_0
ю
„trace_02я
B__inference_dense_layer_call_and_return_conditional_losses_1504948Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 z„trace_0
: 2dense/kernel
:2
dense/bias
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
≤
Ўnon_trainable_variables
ўlayers
Џmetrics
 џlayer_regularization_losses
№layer_metrics
t	variables
utrainable_variables
vregularization_losses
x__call__
*y&call_and_return_all_conditional_losses
&y"call_and_return_conditional_losses"
_generic_user_object
т
Ёtrace_02”
)__inference_softmax_layer_call_fn_1504953•
Ю≤Ъ
FullArgSpec
argsЪ
jinputs
jmask
varargs
 
varkw
 
defaultsҐ

 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 zЁtrace_0
Н
ёtrace_02о
D__inference_softmax_layer_call_and_return_conditional_losses_1504958•
Ю≤Ъ
FullArgSpec
argsЪ
jinputs
jmask
varargs
 
varkw
 
defaultsҐ

 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 zёtrace_0
 "
trackable_list_wrapper
~
0
1
2
3
4
5
6
7
	8

9
10
11
12"
trackable_list_wrapper
0
я0
а1"
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_dict_wrapper
чBф
4__inference_deepsets_invariant_layer_call_fn_1504137input_layer"ђ
•≤°
FullArgSpec)
args!Ъ
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 
чBф
4__inference_deepsets_invariant_layer_call_fn_1504162input_layer"ђ
•≤°
FullArgSpec)
args!Ъ
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 
ТBП
O__inference_deepsets_invariant_layer_call_and_return_conditional_losses_1504076input_layer"ђ
•≤°
FullArgSpec)
args!Ъ
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 
ТBП
O__inference_deepsets_invariant_layer_call_and_return_conditional_losses_1504112input_layer"ђ
•≤°
FullArgSpec)
args!Ъ
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 
”
Д0
б1
в2
г3
д4
е5
ж6
з7
и8
й9
к10
л11
м12
н13
о14
п15
р16
с17
т18
у19
ф20"
trackable_list_wrapper
:	 2	iteration
: 2learning_rate
 "
trackable_dict_wrapper
p
б0
г1
е2
з3
й4
л5
н6
п7
с8
у9"
trackable_list_wrapper
p
в0
д1
ж2
и3
к4
м5
о6
р7
т8
ф9"
trackable_list_wrapper
…
хtrace_0
цtrace_1
чtrace_2
шtrace_3
щtrace_4
ъtrace_5
ыtrace_6
ьtrace_7
эtrace_8
юtrace_92Ѓ
$__inference__update_step_xla_1504270
$__inference__update_step_xla_1504275
$__inference__update_step_xla_1504280
$__inference__update_step_xla_1504285
$__inference__update_step_xla_1504290
$__inference__update_step_xla_1504295
$__inference__update_step_xla_1504300
$__inference__update_step_xla_1504305
$__inference__update_step_xla_1504310
$__inference__update_step_xla_1504315ѓ
¶≤Ґ
FullArgSpec*
args"Ъ

jgradient

jvariable
jkey
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 0zхtrace_0zцtrace_1zчtrace_2zшtrace_3zщtrace_4zъtrace_5zыtrace_6zьtrace_7zэtrace_8zюtrace_9
ўB÷
%__inference_signature_wrapper_1504265input_layer"Э
Ц≤Т
FullArgSpec
argsЪ 
varargs
 
varkw
 
defaults
  

kwonlyargsЪ
jinput_layer
kwonlydefaults
 
annotations™ *
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
–BЌ
&__inference_phi1_layer_call_fn_1504324inputs"Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 
лBи
A__inference_phi1_layer_call_and_return_conditional_losses_1504409inputs"Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
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
ЎB’
.__inference_q_activation_layer_call_fn_1504414inputs"Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 
уBр
I__inference_q_activation_layer_call_and_return_conditional_losses_1504461inputs"Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
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
–BЌ
&__inference_phi2_layer_call_fn_1504470inputs"Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 
лBи
A__inference_phi2_layer_call_and_return_conditional_losses_1504555inputs"Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
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
ЏB„
0__inference_q_activation_1_layer_call_fn_1504560inputs"Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 
хBт
K__inference_q_activation_1_layer_call_and_return_conditional_losses_1504607inputs"Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
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
–BЌ
&__inference_phi3_layer_call_fn_1504616inputs"Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 
лBи
A__inference_phi3_layer_call_and_return_conditional_losses_1504701inputs"Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
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
ЏB„
0__inference_q_activation_2_layer_call_fn_1504706inputs"Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 
хBт
K__inference_q_activation_2_layer_call_and_return_conditional_losses_1504753inputs"Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
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
ЏB„
0__inference_q_activation_3_layer_call_fn_1504758inputs"Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 
хBт
K__inference_q_activation_3_layer_call_and_return_conditional_losses_1504789inputs"Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
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
мBй
:__inference_global_average_pooling1d_layer_call_fn_1504794inputs"†
Щ≤Х
FullArgSpec
argsЪ
jinputs
jmask
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 
ЗBД
U__inference_global_average_pooling1d_layer_call_and_return_conditional_losses_1504800inputs"†
Щ≤Х
FullArgSpec
argsЪ
jinputs
jmask
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
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
ѕBћ
%__inference_rho_layer_call_fn_1504809inputs"Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 
кBз
@__inference_rho_layer_call_and_return_conditional_losses_1504877inputs"Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
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
ЏB„
0__inference_q_activation_4_layer_call_fn_1504882inputs"Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 
хBт
K__inference_q_activation_4_layer_call_and_return_conditional_losses_1504929inputs"Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
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
—Bќ
'__inference_dense_layer_call_fn_1504938inputs"Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 
мBй
B__inference_dense_layer_call_and_return_conditional_losses_1504948inputs"Ш
С≤Н
FullArgSpec
argsЪ

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
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
џBЎ
)__inference_softmax_layer_call_fn_1504953inputs"†
Щ≤Х
FullArgSpec
argsЪ
jinputs
jmask
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 
цBу
D__inference_softmax_layer_call_and_return_conditional_losses_1504958inputs"†
Щ≤Х
FullArgSpec
argsЪ
jinputs
jmask
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 
R
€	variables
А	keras_api

Бtotal

Вcount"
_tf_keras_metric
c
Г	variables
Д	keras_api

Еtotal

Жcount
З
_fn_kwargs"
_tf_keras_metric
":  2Adam/m/phi1/kernel
":  2Adam/v/phi1/kernel
: 2Adam/m/phi1/bias
: 2Adam/v/phi1/bias
":   2Adam/m/phi2/kernel
":   2Adam/v/phi2/kernel
: 2Adam/m/phi2/bias
: 2Adam/v/phi2/bias
":   2Adam/m/phi3/kernel
":   2Adam/v/phi3/kernel
: 2Adam/m/phi3/bias
: 2Adam/v/phi3/bias
!:  2Adam/m/rho/kernel
!:  2Adam/v/rho/kernel
: 2Adam/m/rho/bias
: 2Adam/v/rho/bias
#:! 2Adam/m/dense/kernel
#:! 2Adam/v/dense/kernel
:2Adam/m/dense/bias
:2Adam/v/dense/bias
пBм
$__inference__update_step_xla_1504270gradientvariable"≠
¶≤Ґ
FullArgSpec*
args"Ъ

jgradient

jvariable
jkey
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 
пBм
$__inference__update_step_xla_1504275gradientvariable"≠
¶≤Ґ
FullArgSpec*
args"Ъ

jgradient

jvariable
jkey
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 
пBм
$__inference__update_step_xla_1504280gradientvariable"≠
¶≤Ґ
FullArgSpec*
args"Ъ

jgradient

jvariable
jkey
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 
пBм
$__inference__update_step_xla_1504285gradientvariable"≠
¶≤Ґ
FullArgSpec*
args"Ъ

jgradient

jvariable
jkey
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 
пBм
$__inference__update_step_xla_1504290gradientvariable"≠
¶≤Ґ
FullArgSpec*
args"Ъ

jgradient

jvariable
jkey
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 
пBм
$__inference__update_step_xla_1504295gradientvariable"≠
¶≤Ґ
FullArgSpec*
args"Ъ

jgradient

jvariable
jkey
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 
пBм
$__inference__update_step_xla_1504300gradientvariable"≠
¶≤Ґ
FullArgSpec*
args"Ъ

jgradient

jvariable
jkey
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 
пBм
$__inference__update_step_xla_1504305gradientvariable"≠
¶≤Ґ
FullArgSpec*
args"Ъ

jgradient

jvariable
jkey
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 
пBм
$__inference__update_step_xla_1504310gradientvariable"≠
¶≤Ґ
FullArgSpec*
args"Ъ

jgradient

jvariable
jkey
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 
пBм
$__inference__update_step_xla_1504315gradientvariable"≠
¶≤Ґ
FullArgSpec*
args"Ъ

jgradient

jvariable
jkey
varargs
 
varkw
 
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 
0
Б0
В1"
trackable_list_wrapper
.
€	variables"
_generic_user_object
:  (2total
:  (2count
0
Е0
Ж1"
trackable_list_wrapper
.
Г	variables"
_generic_user_object
:  (2total
:  (2count
 "
trackable_dict_wrapperЦ
$__inference__update_step_xla_1504270nhҐe
^Ґ[
К
gradient 
4Т1	Ґ
ъ 
А
p
` VariableSpec 
`аЙы÷УЌ?
™ "
 О
$__inference__update_step_xla_1504275f`Ґ]
VҐS
К
gradient 
0Т-	Ґ
ъ 
А
p
` VariableSpec 
`ааЈђТЌ?
™ "
 Ц
$__inference__update_step_xla_1504280nhҐe
^Ґ[
К
gradient  
4Т1	Ґ
ъ  
А
p
` VariableSpec 
`аЪкђТЌ?
™ "
 О
$__inference__update_step_xla_1504285f`Ґ]
VҐS
К
gradient 
0Т-	Ґ
ъ 
А
p
` VariableSpec 
`аЉИГЕЌ?
™ "
 Ц
$__inference__update_step_xla_1504290nhҐe
^Ґ[
К
gradient  
4Т1	Ґ
ъ  
А
p
` VariableSpec 
`аўЯБЕЌ?
™ "
 О
$__inference__update_step_xla_1504295f`Ґ]
VҐS
К
gradient 
0Т-	Ґ
ъ 
А
p
` VariableSpec 
`аіЇБЕЌ?
™ "
 Ц
$__inference__update_step_xla_1504300nhҐe
^Ґ[
К
gradient  
4Т1	Ґ
ъ  
А
p
` VariableSpec 
`аЮКђТЌ?
™ "
 О
$__inference__update_step_xla_1504305f`Ґ]
VҐS
К
gradient 
0Т-	Ґ
ъ 
А
p
` VariableSpec 
`аКЛђТЌ?
™ "
 Ц
$__inference__update_step_xla_1504310nhҐe
^Ґ[
К
gradient 
4Т1	Ґ
ъ 
А
p
` VariableSpec 
`аМЈјИЌ?
™ "
 О
$__inference__update_step_xla_1504315f`Ґ]
VҐS
К
gradient
0Т-	Ґ
ъ
А
p
` VariableSpec 
`ачАЕЕЌ?
™ "
 Я
"__inference__wrapped_model_1503472y
 !23DEcdrs8Ґ5
.Ґ+
)К&
input_layer€€€€€€€€€
™ "1™.
,
softmax!К
softmax€€€€€€€€€ѕ
O__inference_deepsets_invariant_layer_call_and_return_conditional_losses_1504076|
 !23DEcdrs@Ґ=
6Ґ3
)К&
input_layer€€€€€€€€€
p

 
™ ",Ґ)
"К
tensor_0€€€€€€€€€
Ъ ѕ
O__inference_deepsets_invariant_layer_call_and_return_conditional_losses_1504112|
 !23DEcdrs@Ґ=
6Ґ3
)К&
input_layer€€€€€€€€€
p 

 
™ ",Ґ)
"К
tensor_0€€€€€€€€€
Ъ ©
4__inference_deepsets_invariant_layer_call_fn_1504137q
 !23DEcdrs@Ґ=
6Ґ3
)К&
input_layer€€€€€€€€€
p

 
™ "!К
unknown€€€€€€€€€©
4__inference_deepsets_invariant_layer_call_fn_1504162q
 !23DEcdrs@Ґ=
6Ґ3
)К&
input_layer€€€€€€€€€
p 

 
™ "!К
unknown€€€€€€€€€©
B__inference_dense_layer_call_and_return_conditional_losses_1504948crs/Ґ,
%Ґ"
 К
inputs€€€€€€€€€ 
™ ",Ґ)
"К
tensor_0€€€€€€€€€
Ъ Г
'__inference_dense_layer_call_fn_1504938Xrs/Ґ,
%Ґ"
 К
inputs€€€€€€€€€ 
™ "!К
unknown€€€€€€€€€№
U__inference_global_average_pooling1d_layer_call_and_return_conditional_losses_1504800ВIҐF
?Ґ<
6К3
inputs'€€€€€€€€€€€€€€€€€€€€€€€€€€€

 
™ "5Ґ2
+К(
tensor_0€€€€€€€€€€€€€€€€€€
Ъ µ
:__inference_global_average_pooling1d_layer_call_fn_1504794wIҐF
?Ґ<
6К3
inputs'€€€€€€€€€€€€€€€€€€€€€€€€€€€

 
™ "*К'
unknown€€€€€€€€€€€€€€€€€€∞
A__inference_phi1_layer_call_and_return_conditional_losses_1504409k !3Ґ0
)Ґ&
$К!
inputs€€€€€€€€€
™ "0Ґ-
&К#
tensor_0€€€€€€€€€ 
Ъ К
&__inference_phi1_layer_call_fn_1504324` !3Ґ0
)Ґ&
$К!
inputs€€€€€€€€€
™ "%К"
unknown€€€€€€€€€ ∞
A__inference_phi2_layer_call_and_return_conditional_losses_1504555k233Ґ0
)Ґ&
$К!
inputs€€€€€€€€€ 
™ "0Ґ-
&К#
tensor_0€€€€€€€€€ 
Ъ К
&__inference_phi2_layer_call_fn_1504470`233Ґ0
)Ґ&
$К!
inputs€€€€€€€€€ 
™ "%К"
unknown€€€€€€€€€ ∞
A__inference_phi3_layer_call_and_return_conditional_losses_1504701kDE3Ґ0
)Ґ&
$К!
inputs€€€€€€€€€ 
™ "0Ґ-
&К#
tensor_0€€€€€€€€€ 
Ъ К
&__inference_phi3_layer_call_fn_1504616`DE3Ґ0
)Ґ&
$К!
inputs€€€€€€€€€ 
™ "%К"
unknown€€€€€€€€€ ґ
K__inference_q_activation_1_layer_call_and_return_conditional_losses_1504607g3Ґ0
)Ґ&
$К!
inputs€€€€€€€€€ 
™ "0Ґ-
&К#
tensor_0€€€€€€€€€ 
Ъ Р
0__inference_q_activation_1_layer_call_fn_1504560\3Ґ0
)Ґ&
$К!
inputs€€€€€€€€€ 
™ "%К"
unknown€€€€€€€€€ ґ
K__inference_q_activation_2_layer_call_and_return_conditional_losses_1504753g3Ґ0
)Ґ&
$К!
inputs€€€€€€€€€ 
™ "0Ґ-
&К#
tensor_0€€€€€€€€€ 
Ъ Р
0__inference_q_activation_2_layer_call_fn_1504706\3Ґ0
)Ґ&
$К!
inputs€€€€€€€€€ 
™ "%К"
unknown€€€€€€€€€ ґ
K__inference_q_activation_3_layer_call_and_return_conditional_losses_1504789g3Ґ0
)Ґ&
$К!
inputs€€€€€€€€€ 
™ "0Ґ-
&К#
tensor_0€€€€€€€€€ 
Ъ Р
0__inference_q_activation_3_layer_call_fn_1504758\3Ґ0
)Ґ&
$К!
inputs€€€€€€€€€ 
™ "%К"
unknown€€€€€€€€€ Ѓ
K__inference_q_activation_4_layer_call_and_return_conditional_losses_1504929_/Ґ,
%Ґ"
 К
inputs€€€€€€€€€ 
™ ",Ґ)
"К
tensor_0€€€€€€€€€ 
Ъ И
0__inference_q_activation_4_layer_call_fn_1504882T/Ґ,
%Ґ"
 К
inputs€€€€€€€€€ 
™ "!К
unknown€€€€€€€€€ і
I__inference_q_activation_layer_call_and_return_conditional_losses_1504461g3Ґ0
)Ґ&
$К!
inputs€€€€€€€€€ 
™ "0Ґ-
&К#
tensor_0€€€€€€€€€ 
Ъ О
.__inference_q_activation_layer_call_fn_1504414\3Ґ0
)Ґ&
$К!
inputs€€€€€€€€€ 
™ "%К"
unknown€€€€€€€€€ І
@__inference_rho_layer_call_and_return_conditional_losses_1504877ccd/Ґ,
%Ґ"
 К
inputs€€€€€€€€€ 
™ ",Ґ)
"К
tensor_0€€€€€€€€€ 
Ъ Б
%__inference_rho_layer_call_fn_1504809Xcd/Ґ,
%Ґ"
 К
inputs€€€€€€€€€ 
™ "!К
unknown€€€€€€€€€ ≤
%__inference_signature_wrapper_1504265И
 !23DEcdrsGҐD
Ґ 
=™:
8
input_layer)К&
input_layer€€€€€€€€€"1™.
,
softmax!К
softmax€€€€€€€€€Ђ
D__inference_softmax_layer_call_and_return_conditional_losses_1504958c3Ґ0
)Ґ&
 К
inputs€€€€€€€€€

 
™ ",Ґ)
"К
tensor_0€€€€€€€€€
Ъ Е
)__inference_softmax_layer_call_fn_1504953X3Ґ0
)Ґ&
 К
inputs€€€€€€€€€

 
™ "!К
unknown€€€€€€€€€
д╠(
ч╢
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
Н
Mean

input"T
reduction_indices"Tidx
output"T"
	keep_dimsbool( " 
Ttype:
2	"
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
┴
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
executor_typestring Ии
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
Ц
VarHandleOp
resource"
	containerstring "
shared_namestring "
dtypetype"
shapeshape"#
allowed_deviceslist(string)
 И"serve*2.11.02v2.11.0-rc2-17-gd5b57ca93e58╞═%
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
В
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
В
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
К
Adam/v/q_dense_4/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
: *(
shared_nameAdam/v/q_dense_4/kernel
Г
+Adam/v/q_dense_4/kernel/Read/ReadVariableOpReadVariableOpAdam/v/q_dense_4/kernel*
_output_shapes

: *
dtype0
К
Adam/m/q_dense_4/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
: *(
shared_nameAdam/m/q_dense_4/kernel
Г
+Adam/m/q_dense_4/kernel/Read/ReadVariableOpReadVariableOpAdam/m/q_dense_4/kernel*
_output_shapes

: *
dtype0
В
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
В
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
К
Adam/v/q_dense_3/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *(
shared_nameAdam/v/q_dense_3/kernel
Г
+Adam/v/q_dense_3/kernel/Read/ReadVariableOpReadVariableOpAdam/v/q_dense_3/kernel*
_output_shapes

:  *
dtype0
К
Adam/m/q_dense_3/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *(
shared_nameAdam/m/q_dense_3/kernel
Г
+Adam/m/q_dense_3/kernel/Read/ReadVariableOpReadVariableOpAdam/m/q_dense_3/kernel*
_output_shapes

:  *
dtype0
В
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
В
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
К
Adam/v/q_dense_2/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *(
shared_nameAdam/v/q_dense_2/kernel
Г
+Adam/v/q_dense_2/kernel/Read/ReadVariableOpReadVariableOpAdam/v/q_dense_2/kernel*
_output_shapes

:  *
dtype0
К
Adam/m/q_dense_2/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *(
shared_nameAdam/m/q_dense_2/kernel
Г
+Adam/m/q_dense_2/kernel/Read/ReadVariableOpReadVariableOpAdam/m/q_dense_2/kernel*
_output_shapes

:  *
dtype0
В
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
В
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
К
Adam/v/q_dense_1/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *(
shared_nameAdam/v/q_dense_1/kernel
Г
+Adam/v/q_dense_1/kernel/Read/ReadVariableOpReadVariableOpAdam/v/q_dense_1/kernel*
_output_shapes

:  *
dtype0
К
Adam/m/q_dense_1/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *(
shared_nameAdam/m/q_dense_1/kernel
Г
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
Ж
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
Ж
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
В
serving_default_input_1Placeholder*+
_output_shapes
:         *
dtype0* 
shape:         
Є
StatefulPartitionedCallStatefulPartitionedCallserving_default_input_1q_dense/kernelq_dense/biasq_dense_1/kernelq_dense_1/biasq_dense_2/kernelq_dense_2/biasq_dense_3/kernelq_dense_3/biasq_dense_4/kernelq_dense_4/bias*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:         *,
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
%__inference_signature_wrapper_1241439

NoOpNoOp
╖`
ConstConst"/device:CPU:0*
_output_shapes
: *
dtype0*Є_
valueш_Bх_ B▐_
▐
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
░
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
м
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
Б
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
Є
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
Э
K	variables
Ltrainable_variables
Mregularization_losses
N	keras_api
O__call__
*P&call_and_return_all_conditional_losses
Q	quantizer* 
Є
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
Э
[	variables
\trainable_variables
]regularization_losses
^	keras_api
___call__
*`&call_and_return_all_conditional_losses
a	quantizer* 
Є
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
Э
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
У
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
·
	variables
Аtrainable_variables
Бregularization_losses
В	keras_api
Г__call__
+Д&call_and_return_all_conditional_losses
Еkernel_quantizer_internal
Жbias_quantizer_internal
З
quantizers

kernel
bias*
д
И	variables
Йtrainable_variables
Кregularization_losses
Л	keras_api
М__call__
+Н&call_and_return_all_conditional_losses
О	quantizer* 
√
П	variables
Рtrainable_variables
Сregularization_losses
Т	keras_api
У__call__
+Ф&call_and_return_all_conditional_losses
Хkernel_quantizer_internal
Цbias_quantizer_internal
Ч
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
Ш
Шnon_trainable_variables
Щlayers
Ъmetrics
 Ыlayer_regularization_losses
Ьlayer_metrics
2	variables
3trainable_variables
4regularization_losses
6__call__
*7&call_and_return_all_conditional_losses
&7"call_and_return_conditional_losses*
:
Эtrace_0
Юtrace_1
Яtrace_2
аtrace_3* 
:
бtrace_0
вtrace_1
гtrace_2
дtrace_3* 
╢
90
е1
ж2
з3
и4
й5
к6
л7
м8
н9
о10
п11
░12
▒13
▓14
│15
┤16
╡17
╢18
╖19
╕20*
SM
VARIABLE_VALUE	iteration0optimizer/_iterations/.ATTRIBUTES/VARIABLE_VALUE*
ZT
VARIABLE_VALUElearning_rate3optimizer/_learning_rate/.ATTRIBUTES/VARIABLE_VALUE*
* 
T
е0
з1
й2
л3
н4
п5
▒6
│7
╡8
╖9*
T
ж0
и1
к2
м3
о4
░5
▓6
┤7
╢8
╕9*
О
╣trace_0
║trace_1
╗trace_2
╝trace_3
╜trace_4
╛trace_5
┐trace_6
└trace_7
┴trace_8
┬trace_9* 
* 
<
├	variables
─	keras_api

┼total

╞count*
M
╟	variables
╚	keras_api

╔total

╩count
╦
_fn_kwargs*

0
1*

0
1*
* 
Ш
╠non_trainable_variables
═layers
╬metrics
 ╧layer_regularization_losses
╨layer_metrics
B	variables
Ctrainable_variables
Dregularization_losses
F__call__
*G&call_and_return_all_conditional_losses
&G"call_and_return_conditional_losses*

╤trace_0* 

╥trace_0* 
* 
* 

H0
I1* 
* 
* 
* 
Ц
╙non_trainable_variables
╘layers
╒metrics
 ╓layer_regularization_losses
╫layer_metrics
K	variables
Ltrainable_variables
Mregularization_losses
O__call__
*P&call_and_return_all_conditional_losses
&P"call_and_return_conditional_losses* 

╪trace_0* 

┘trace_0* 
* 

0
1*

0
1*
* 
Ш
┌non_trainable_variables
█layers
▄metrics
 ▌layer_regularization_losses
▐layer_metrics
R	variables
Strainable_variables
Tregularization_losses
V__call__
*W&call_and_return_all_conditional_losses
&W"call_and_return_conditional_losses*

▀trace_0* 
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
Ц
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
Ш
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
Ц
яnon_trainable_variables
Ёlayers
ёmetrics
 Єlayer_regularization_losses
єlayer_metrics
k	variables
ltrainable_variables
mregularization_losses
o__call__
*p&call_and_return_all_conditional_losses
&p"call_and_return_conditional_losses* 

Їtrace_0* 

їtrace_0* 
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
Э
Ўnon_trainable_variables
ўlayers
°metrics
 ∙layer_regularization_losses
·layer_metrics
	variables
Аtrainable_variables
Бregularization_losses
Г__call__
+Д&call_and_return_all_conditional_losses
'Д"call_and_return_conditional_losses*

√trace_0* 

№trace_0* 
* 
* 

Е0
Ж1* 
* 
* 
* 
Ь
¤non_trainable_variables
■layers
 metrics
 Аlayer_regularization_losses
Бlayer_metrics
И	variables
Йtrainable_variables
Кregularization_losses
М__call__
+Н&call_and_return_all_conditional_losses
'Н"call_and_return_conditional_losses* 

Вtrace_0* 

Гtrace_0* 
* 

0
1*

0
1*
* 
Ю
Дnon_trainable_variables
Еlayers
Жmetrics
 Зlayer_regularization_losses
Иlayer_metrics
П	variables
Рtrainable_variables
Сregularization_losses
У__call__
+Ф&call_and_return_all_conditional_losses
'Ф"call_and_return_conditional_losses*

Йtrace_0* 

Кtrace_0* 
* 
* 

Х0
Ц1* 
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
┼0
╞1*

├	variables*
UO
VARIABLE_VALUEtotal_14keras_api/metrics/0/total/.ATTRIBUTES/VARIABLE_VALUE*
UO
VARIABLE_VALUEcount_14keras_api/metrics/0/count/.ATTRIBUTES/VARIABLE_VALUE*

╔0
╩1*

╟	variables*
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
═
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
GPU2 *0J 8В *)
f$R"
 __inference__traced_save_1244614
°
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
GPU2 *0J 8В *,
f'R%
#__inference__traced_restore_1244732чМ$
¤ 
g
K__inference_q_activation_3_layer_call_and_return_conditional_losses_1244406

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
:          F
ReluReluinputs*
T0*'
_output_shapes
:          E
ones_like/ShapeShapeinputs*
T0*
_output_shapes
:T
ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  А?w
	ones_likeFillones_like/Shape:output:0ones_like/Const:output:0*
T0*'
_output_shapes
:          D
sub_2Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: [
mulMulones_like:output:0	sub_2:z:0*
T0*'
_output_shapes
:          r
SelectV2SelectV2LessEqual:z:0Relu:activations:0mul:z:0*
T0*'
_output_shapes
:          P
mul_1MulinputsCast:y:0*
T0*'
_output_shapes
:          [
truedivRealDiv	mul_1:z:0
Cast_1:y:0*
T0*'
_output_shapes
:          I
NegNegtruediv:z:0*
T0*'
_output_shapes
:          M
RoundRoundtruediv:z:0*
T0*'
_output_shapes
:          R
addAddV2Neg:y:0	Round:y:0*
T0*'
_output_shapes
:          W
StopGradientStopGradientadd:z:0*
T0*'
_output_shapes
:          d
add_1AddV2truediv:z:0StopGradient:output:0*
T0*'
_output_shapes
:          [
	truediv_1RealDiv	add_1:z:0Cast:y:0*
T0*'
_output_shapes
:          P
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
:          T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*'
_output_shapes
:          ]
mul_2Mul
Cast_1:y:0clip_by_value:z:0*
T0*'
_output_shapes
:          Q
Neg_1NegSelectV2:output:0*
T0*'
_output_shapes
:          V
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*'
_output_shapes
:          L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?[
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*'
_output_shapes
:          [
StopGradient_1StopGradient	mul_3:z:0*
T0*'
_output_shapes
:          l
add_3AddV2SelectV2:output:0StopGradient_1:output:0*
T0*'
_output_shapes
:          Q
IdentityIdentity	add_3:z:0*
T0*'
_output_shapes
:          "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*&
_input_shapes
:          :O K
'
_output_shapes
:          
 
_user_specified_nameinputs
Е	
Е
,__inference_sequential_layer_call_fn_1242670

inputs
unknown: 
	unknown_0: 
	unknown_1:  
	unknown_2: 
	unknown_3:  
	unknown_4: 
identityИвStatefulPartitionedCallЩ
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4*
Tin
	2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          *(
_read_only_resource_inputs

*2
config_proto" 

CPU

GPU2 *0J 8В *P
fKRI
G__inference_sequential_layer_call_and_return_conditional_losses_1240688s
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:          `
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*6
_input_shapes%
#:         : : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:S O
+
_output_shapes
:         
 
_user_specified_nameinputs
╝

№
6__inference_DeepSetsInvQuantised_layer_call_fn_1241354
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
identityИвStatefulPartitionedCall╘
StatefulPartitionedCallStatefulPartitionedCallinput_1unknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4	unknown_5	unknown_6	unknown_7	unknown_8*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:         *,
_read_only_resource_inputs

	
*2
config_proto" 

CPU

GPU2 *0J 8В *Z
fURS
Q__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_1241306o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:         `
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:         : : : : : : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:T P
+
_output_shapes
:         
!
_user_specified_name	input_1
┬
м
Q__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_1241306

inputs$
sequential_1241281:  
sequential_1241283: $
sequential_1241285:   
sequential_1241287: $
sequential_1241289:   
sequential_1241291: &
sequential_1_1241296:  "
sequential_1_1241298: &
sequential_1_1241300: "
sequential_1_1241302:
identityИв"sequential/StatefulPartitionedCallв$sequential_1/StatefulPartitionedCall▄
"sequential/StatefulPartitionedCallStatefulPartitionedCallinputssequential_1241281sequential_1241283sequential_1241285sequential_1241287sequential_1241289sequential_1241291*
Tin
	2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          *(
_read_only_resource_inputs

*2
config_proto" 

CPU

GPU2 *0J 8В *P
fKRI
G__inference_sequential_layer_call_and_return_conditional_losses_1240792X
Mean/reduction_indicesConst*
_output_shapes
: *
dtype0*
value	B :М
MeanMean+sequential/StatefulPartitionedCall:output:0Mean/reduction_indices:output:0*
T0*'
_output_shapes
:          ┐
$sequential_1/StatefulPartitionedCallStatefulPartitionedCallMean:output:0sequential_1_1241296sequential_1_1241298sequential_1_1241300sequential_1_1241302*
Tin	
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:         *&
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *R
fMRK
I__inference_sequential_1_layer_call_and_return_conditional_losses_1241142|
IdentityIdentity-sequential_1/StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:         Т
NoOpNoOp#^sequential/StatefulPartitionedCall%^sequential_1/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:         : : : : : : : : : : 2H
"sequential/StatefulPartitionedCall"sequential/StatefulPartitionedCall2L
$sequential_1/StatefulPartitionedCall$sequential_1/StatefulPartitionedCall:S O
+
_output_shapes
:         
 
_user_specified_nameinputs
▐!
g
K__inference_q_activation_2_layer_call_and_return_conditional_losses_1244275

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
:          J
ReluReluinputs*
T0*+
_output_shapes
:          E
ones_like/ShapeShapeinputs*
T0*
_output_shapes
:T
ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  А?{
	ones_likeFillones_like/Shape:output:0ones_like/Const:output:0*
T0*+
_output_shapes
:          D
sub_2Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: _
mulMulones_like:output:0	sub_2:z:0*
T0*+
_output_shapes
:          v
SelectV2SelectV2LessEqual:z:0Relu:activations:0mul:z:0*
T0*+
_output_shapes
:          T
mul_1MulinputsCast:y:0*
T0*+
_output_shapes
:          _
truedivRealDiv	mul_1:z:0
Cast_1:y:0*
T0*+
_output_shapes
:          M
NegNegtruediv:z:0*
T0*+
_output_shapes
:          Q
RoundRoundtruediv:z:0*
T0*+
_output_shapes
:          V
addAddV2Neg:y:0	Round:y:0*
T0*+
_output_shapes
:          [
StopGradientStopGradientadd:z:0*
T0*+
_output_shapes
:          h
add_1AddV2truediv:z:0StopGradient:output:0*
T0*+
_output_shapes
:          _
	truediv_1RealDiv	add_1:z:0Cast:y:0*
T0*+
_output_shapes
:          P
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
:          T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    Г
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*+
_output_shapes
:          a
mul_2Mul
Cast_1:y:0clip_by_value:z:0*
T0*+
_output_shapes
:          U
Neg_1NegSelectV2:output:0*
T0*+
_output_shapes
:          Z
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*+
_output_shapes
:          L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?_
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*+
_output_shapes
:          _
StopGradient_1StopGradient	mul_3:z:0*
T0*+
_output_shapes
:          p
add_3AddV2SelectV2:output:0StopGradient_1:output:0*
T0*+
_output_shapes
:          U
IdentityIdentity	add_3:z:0*
T0*+
_output_shapes
:          "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:          :S O
+
_output_shapes
:          
 
_user_specified_nameinputs
╫
Ц
)__inference_q_dense_layer_call_fn_1243840

inputs
unknown: 
	unknown_0: 
identityИвStatefulPartitionedCallт
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *M
fHRF
D__inference_q_dense_layer_call_and_return_conditional_losses_1240346s
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:          `
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:         : : 22
StatefulPartitionedCallStatefulPartitionedCall:S O
+
_output_shapes
:         
 
_user_specified_nameinputs
н
L
$__inference__update_step_xla_1242633
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
╝

№
6__inference_DeepSetsInvQuantised_layer_call_fn_1241251
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
identityИвStatefulPartitionedCall╘
StatefulPartitionedCallStatefulPartitionedCallinput_1unknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4	unknown_5	unknown_6	unknown_7	unknown_8*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:         *,
_read_only_resource_inputs

	
*2
config_proto" 

CPU

GPU2 *0J 8В *Z
fURS
Q__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_1241228o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:         `
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:         : : : : : : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:T P
+
_output_shapes
:         
!
_user_specified_name	input_1
└
┌
.__inference_sequential_1_layer_call_fn_1241166
q_dense_3_input
unknown:  
	unknown_0: 
	unknown_1: 
	unknown_2:
identityИвStatefulPartitionedCallЖ
StatefulPartitionedCallStatefulPartitionedCallq_dense_3_inputunknown	unknown_0	unknown_1	unknown_2*
Tin	
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:         *&
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *R
fMRK
I__inference_sequential_1_layer_call_and_return_conditional_losses_1241142o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:         `
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:          : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:X T
'
_output_shapes
:          
)
_user_specified_nameq_dense_3_input
╨
┼
I__inference_sequential_1_layer_call_and_return_conditional_losses_1241196
q_dense_3_input#
q_dense_3_1241184:  
q_dense_3_1241186: #
q_dense_4_1241190: 
q_dense_4_1241192:
identityИв!q_dense_3/StatefulPartitionedCallв!q_dense_4/StatefulPartitionedCallЕ
!q_dense_3/StatefulPartitionedCallStatefulPartitionedCallq_dense_3_inputq_dense_3_1241184q_dense_3_1241186*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:          *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *O
fJRH
F__inference_q_dense_3_layer_call_and_return_conditional_losses_1240943ю
q_activation_3/PartitionedCallPartitionedCall*q_dense_3/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:          * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *T
fORM
K__inference_q_activation_3_layer_call_and_return_conditional_losses_1240998Э
!q_dense_4/StatefulPartitionedCallStatefulPartitionedCall'q_activation_3/PartitionedCall:output:0q_dense_4_1241190q_dense_4_1241192*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:         *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *O
fJRH
F__inference_q_dense_4_layer_call_and_return_conditional_losses_1241068y
IdentityIdentity*q_dense_4/StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:         О
NoOpNoOp"^q_dense_3/StatefulPartitionedCall"^q_dense_4/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:          : : : : 2F
!q_dense_3/StatefulPartitionedCall!q_dense_3/StatefulPartitionedCall2F
!q_dense_4/StatefulPartitionedCall!q_dense_4/StatefulPartitionedCall:X T
'
_output_shapes
:          
)
_user_specified_nameq_dense_3_input
№1
й
F__inference_q_dense_4_layer_call_and_return_conditional_losses_1244483

inputs)
readvariableop_resource: '
readvariableop_3_resource:
identityИвReadVariableOpвReadVariableOp_1вReadVariableOp_2вReadVariableOp_3вReadVariableOp_4вReadVariableOp_5G
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
 *  АF[
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
 * №Fv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞v
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
 *  АF^
	truediv_1RealDiv	mul_1:z:0truediv_1/y:output:0*
T0*
_output_shapes

: L
mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?V
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
 *  А?R
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
:         I
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
 *  АF]
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
 * №Fv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
:V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞x
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
 *  АFZ
	truediv_3RealDiv	mul_5:z:0truediv_3/y:output:0*
T0*
_output_shapes
:L
mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?R
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
 *  А?N
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
:         _
IdentityIdentityBiasAdd:output:0^NoOp*
T0*'
_output_shapes
:         ╢
NoOpNoOp^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:          : : 2 
ReadVariableOpReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_5:O K
'
_output_shapes
:          
 
_user_specified_nameinputs
╣
P
$__inference__update_step_xla_1242638
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
╨
┼
I__inference_sequential_1_layer_call_and_return_conditional_losses_1241181
q_dense_3_input#
q_dense_3_1241169:  
q_dense_3_1241171: #
q_dense_4_1241175: 
q_dense_4_1241177:
identityИв!q_dense_3/StatefulPartitionedCallв!q_dense_4/StatefulPartitionedCallЕ
!q_dense_3/StatefulPartitionedCallStatefulPartitionedCallq_dense_3_inputq_dense_3_1241169q_dense_3_1241171*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:          *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *O
fJRH
F__inference_q_dense_3_layer_call_and_return_conditional_losses_1240943ю
q_activation_3/PartitionedCallPartitionedCall*q_dense_3/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:          * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *T
fORM
K__inference_q_activation_3_layer_call_and_return_conditional_losses_1240998Э
!q_dense_4/StatefulPartitionedCallStatefulPartitionedCall'q_activation_3/PartitionedCall:output:0q_dense_4_1241175q_dense_4_1241177*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:         *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *O
fJRH
F__inference_q_dense_4_layer_call_and_return_conditional_losses_1241068y
IdentityIdentity*q_dense_4/StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:         О
NoOpNoOp"^q_dense_3/StatefulPartitionedCall"^q_dense_4/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:          : : : : 2F
!q_dense_3/StatefulPartitionedCall!q_dense_3/StatefulPartitionedCall2F
!q_dense_4/StatefulPartitionedCall!q_dense_4/StatefulPartitionedCall:X T
'
_output_shapes
:          
)
_user_specified_nameq_dense_3_input
 ╫
Т
G__inference_sequential_layer_call_and_return_conditional_losses_1243451

inputs1
q_dense_readvariableop_resource: /
!q_dense_readvariableop_3_resource: 3
!q_dense_1_readvariableop_resource:  1
#q_dense_1_readvariableop_3_resource: 3
!q_dense_2_readvariableop_resource:  1
#q_dense_2_readvariableop_3_resource: 
identityИвq_dense/ReadVariableOpвq_dense/ReadVariableOp_1вq_dense/ReadVariableOp_2вq_dense/ReadVariableOp_3вq_dense/ReadVariableOp_4вq_dense/ReadVariableOp_5вq_dense_1/ReadVariableOpвq_dense_1/ReadVariableOp_1вq_dense_1/ReadVariableOp_2вq_dense_1/ReadVariableOp_3вq_dense_1/ReadVariableOp_4вq_dense_1/ReadVariableOp_5вq_dense_2/ReadVariableOpвq_dense_2/ReadVariableOp_1вq_dense_2/ReadVariableOp_2вq_dense_2/ReadVariableOp_3вq_dense_2/ReadVariableOp_4вq_dense_2/ReadVariableOp_5O
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
 *  АFs
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
 * №FО
q_dense/clip_by_value/MinimumMinimumq_dense/add_1:z:0(q_dense/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: \
q_dense/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞О
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
 *  АFv
q_dense/truediv_1RealDivq_dense/mul_1:z:0q_dense/truediv_1/y:output:0*
T0*
_output_shapes

: T
q_dense/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?n
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
 *  А?j
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
dtype0В
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
valueB"       t
q_dense/ReshapeReshapeinputsq_dense/Reshape/shape:output:0*
T0*'
_output_shapes
:         g
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
valueB"       ~
q_dense/Reshape_1Reshapeq_dense/transpose:y:0 q_dense/Reshape_1/shape:output:0*
T0*
_output_shapes

: А
q_dense/MatMulMatMulq_dense/Reshape:output:0q_dense/Reshape_1:output:0*
T0*'
_output_shapes
:          [
q_dense/Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :[
q_dense/Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : п
q_dense/Reshape_2/shapePackq_dense/unstack:output:0"q_dense/Reshape_2/shape/1:output:0"q_dense/Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:О
q_dense/Reshape_2Reshapeq_dense/MatMul:product:0 q_dense/Reshape_2/shape:output:0*
T0*+
_output_shapes
:          Q
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
 *  АFu
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
 * №FО
q_dense/clip_by_value_1/MinimumMinimumq_dense/add_5:z:0*q_dense/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: ^
q_dense/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞Р
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
 *  АFr
q_dense/truediv_3RealDivq_dense/mul_5:z:0q_dense/truediv_3/y:output:0*
T0*
_output_shapes
: T
q_dense/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?j
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
 *  А?f
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
:          T
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
: Л
q_activation/LessEqual	LessEqualq_dense/BiasAdd:output:0q_activation/sub_1:z:0*
T0*+
_output_shapes
:          i
q_activation/ReluReluq_dense/BiasAdd:output:0*
T0*+
_output_shapes
:          d
q_activation/ones_like/ShapeShapeq_dense/BiasAdd:output:0*
T0*
_output_shapes
:a
q_activation/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  А?в
q_activation/ones_likeFill%q_activation/ones_like/Shape:output:0%q_activation/ones_like/Const:output:0*
T0*+
_output_shapes
:          k
q_activation/sub_2Subq_activation/Cast_1:y:0q_activation/Pow_2:z:0*
T0*
_output_shapes
: Ж
q_activation/mulMulq_activation/ones_like:output:0q_activation/sub_2:z:0*
T0*+
_output_shapes
:          к
q_activation/SelectV2SelectV2q_activation/LessEqual:z:0q_activation/Relu:activations:0q_activation/mul:z:0*
T0*+
_output_shapes
:          А
q_activation/mul_1Mulq_dense/BiasAdd:output:0q_activation/Cast:y:0*
T0*+
_output_shapes
:          Ж
q_activation/truedivRealDivq_activation/mul_1:z:0q_activation/Cast_1:y:0*
T0*+
_output_shapes
:          g
q_activation/NegNegq_activation/truediv:z:0*
T0*+
_output_shapes
:          k
q_activation/RoundRoundq_activation/truediv:z:0*
T0*+
_output_shapes
:          }
q_activation/addAddV2q_activation/Neg:y:0q_activation/Round:y:0*
T0*+
_output_shapes
:          u
q_activation/StopGradientStopGradientq_activation/add:z:0*
T0*+
_output_shapes
:          П
q_activation/add_1AddV2q_activation/truediv:z:0"q_activation/StopGradient:output:0*
T0*+
_output_shapes
:          Ж
q_activation/truediv_1RealDivq_activation/add_1:z:0q_activation/Cast:y:0*
T0*+
_output_shapes
:          ]
q_activation/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?|
q_activation/truediv_2RealDiv!q_activation/truediv_2/x:output:0q_activation/Cast:y:0*
T0*
_output_shapes
: Y
q_activation/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?u
q_activation/sub_3Subq_activation/sub_3/x:output:0q_activation/truediv_2:z:0*
T0*
_output_shapes
: Ч
"q_activation/clip_by_value/MinimumMinimumq_activation/truediv_1:z:0q_activation/sub_3:z:0*
T0*+
_output_shapes
:          a
q_activation/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    к
q_activation/clip_by_valueMaximum&q_activation/clip_by_value/Minimum:z:0%q_activation/clip_by_value/y:output:0*
T0*+
_output_shapes
:          И
q_activation/mul_2Mulq_activation/Cast_1:y:0q_activation/clip_by_value:z:0*
T0*+
_output_shapes
:          o
q_activation/Neg_1Negq_activation/SelectV2:output:0*
T0*+
_output_shapes
:          Б
q_activation/add_2AddV2q_activation/Neg_1:y:0q_activation/mul_2:z:0*
T0*+
_output_shapes
:          Y
q_activation/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ж
q_activation/mul_3Mulq_activation/mul_3/x:output:0q_activation/add_2:z:0*
T0*+
_output_shapes
:          y
q_activation/StopGradient_1StopGradientq_activation/mul_3:z:0*
T0*+
_output_shapes
:          Ч
q_activation/add_3AddV2q_activation/SelectV2:output:0$q_activation/StopGradient_1:output:0*
T0*+
_output_shapes
:          Q
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
 *  АFy
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
 * №FФ
q_dense_1/clip_by_value/MinimumMinimumq_dense_1/add_1:z:0*q_dense_1/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  ^
q_dense_1/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞Ф
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
 *  АF|
q_dense_1/truediv_1RealDivq_dense_1/mul_1:z:0q_dense_1/truediv_1/y:output:0*
T0*
_output_shapes

:  V
q_dense_1/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?t
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
 *  А?p
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
dtype0И
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
valueB"        И
q_dense_1/ReshapeReshapeq_activation/add_3:z:0 q_dense_1/Reshape/shape:output:0*
T0*'
_output_shapes
:          i
q_dense_1/transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       Б
q_dense_1/transpose	Transposeq_dense_1/add_3:z:0!q_dense_1/transpose/perm:output:0*
T0*
_output_shapes

:  j
q_dense_1/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"        Д
q_dense_1/Reshape_1Reshapeq_dense_1/transpose:y:0"q_dense_1/Reshape_1/shape:output:0*
T0*
_output_shapes

:  Ж
q_dense_1/MatMulMatMulq_dense_1/Reshape:output:0q_dense_1/Reshape_1:output:0*
T0*'
_output_shapes
:          ]
q_dense_1/Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :]
q_dense_1/Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : ╖
q_dense_1/Reshape_2/shapePackq_dense_1/unstack:output:0$q_dense_1/Reshape_2/shape/1:output:0$q_dense_1/Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:Ф
q_dense_1/Reshape_2Reshapeq_dense_1/MatMul:product:0"q_dense_1/Reshape_2/shape:output:0*
T0*+
_output_shapes
:          S
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
 *  АF{
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
 * №FФ
!q_dense_1/clip_by_value_1/MinimumMinimumq_dense_1/add_5:z:0,q_dense_1/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: `
q_dense_1/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞Ц
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
 *  АFx
q_dense_1/truediv_3RealDivq_dense_1/mul_5:z:0q_dense_1/truediv_3/y:output:0*
T0*
_output_shapes
: V
q_dense_1/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?p
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
 *  А?l
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
dtype0Д
q_dense_1/add_7AddV2"q_dense_1/ReadVariableOp_5:value:0!q_dense_1/StopGradient_3:output:0*
T0*
_output_shapes
: Е
q_dense_1/BiasAddBiasAddq_dense_1/Reshape_2:output:0q_dense_1/add_7:z:0*
T0*+
_output_shapes
:          V
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
: С
q_activation_1/LessEqual	LessEqualq_dense_1/BiasAdd:output:0q_activation_1/sub_1:z:0*
T0*+
_output_shapes
:          m
q_activation_1/ReluReluq_dense_1/BiasAdd:output:0*
T0*+
_output_shapes
:          h
q_activation_1/ones_like/ShapeShapeq_dense_1/BiasAdd:output:0*
T0*
_output_shapes
:c
q_activation_1/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  А?и
q_activation_1/ones_likeFill'q_activation_1/ones_like/Shape:output:0'q_activation_1/ones_like/Const:output:0*
T0*+
_output_shapes
:          q
q_activation_1/sub_2Subq_activation_1/Cast_1:y:0q_activation_1/Pow_2:z:0*
T0*
_output_shapes
: М
q_activation_1/mulMul!q_activation_1/ones_like:output:0q_activation_1/sub_2:z:0*
T0*+
_output_shapes
:          ▓
q_activation_1/SelectV2SelectV2q_activation_1/LessEqual:z:0!q_activation_1/Relu:activations:0q_activation_1/mul:z:0*
T0*+
_output_shapes
:          Ж
q_activation_1/mul_1Mulq_dense_1/BiasAdd:output:0q_activation_1/Cast:y:0*
T0*+
_output_shapes
:          М
q_activation_1/truedivRealDivq_activation_1/mul_1:z:0q_activation_1/Cast_1:y:0*
T0*+
_output_shapes
:          k
q_activation_1/NegNegq_activation_1/truediv:z:0*
T0*+
_output_shapes
:          o
q_activation_1/RoundRoundq_activation_1/truediv:z:0*
T0*+
_output_shapes
:          Г
q_activation_1/addAddV2q_activation_1/Neg:y:0q_activation_1/Round:y:0*
T0*+
_output_shapes
:          y
q_activation_1/StopGradientStopGradientq_activation_1/add:z:0*
T0*+
_output_shapes
:          Х
q_activation_1/add_1AddV2q_activation_1/truediv:z:0$q_activation_1/StopGradient:output:0*
T0*+
_output_shapes
:          М
q_activation_1/truediv_1RealDivq_activation_1/add_1:z:0q_activation_1/Cast:y:0*
T0*+
_output_shapes
:          _
q_activation_1/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?В
q_activation_1/truediv_2RealDiv#q_activation_1/truediv_2/x:output:0q_activation_1/Cast:y:0*
T0*
_output_shapes
: [
q_activation_1/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?{
q_activation_1/sub_3Subq_activation_1/sub_3/x:output:0q_activation_1/truediv_2:z:0*
T0*
_output_shapes
: Э
$q_activation_1/clip_by_value/MinimumMinimumq_activation_1/truediv_1:z:0q_activation_1/sub_3:z:0*
T0*+
_output_shapes
:          c
q_activation_1/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    ░
q_activation_1/clip_by_valueMaximum(q_activation_1/clip_by_value/Minimum:z:0'q_activation_1/clip_by_value/y:output:0*
T0*+
_output_shapes
:          О
q_activation_1/mul_2Mulq_activation_1/Cast_1:y:0 q_activation_1/clip_by_value:z:0*
T0*+
_output_shapes
:          s
q_activation_1/Neg_1Neg q_activation_1/SelectV2:output:0*
T0*+
_output_shapes
:          З
q_activation_1/add_2AddV2q_activation_1/Neg_1:y:0q_activation_1/mul_2:z:0*
T0*+
_output_shapes
:          [
q_activation_1/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?М
q_activation_1/mul_3Mulq_activation_1/mul_3/x:output:0q_activation_1/add_2:z:0*
T0*+
_output_shapes
:          }
q_activation_1/StopGradient_1StopGradientq_activation_1/mul_3:z:0*
T0*+
_output_shapes
:          Э
q_activation_1/add_3AddV2 q_activation_1/SelectV2:output:0&q_activation_1/StopGradient_1:output:0*
T0*+
_output_shapes
:          Q
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
 *  АFy
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
 * №FФ
q_dense_2/clip_by_value/MinimumMinimumq_dense_2/add_1:z:0*q_dense_2/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  ^
q_dense_2/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞Ф
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
 *  АF|
q_dense_2/truediv_1RealDivq_dense_2/mul_1:z:0q_dense_2/truediv_1/y:output:0*
T0*
_output_shapes

:  V
q_dense_2/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?t
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
 *  А?p
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
dtype0И
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
valueB"        К
q_dense_2/ReshapeReshapeq_activation_1/add_3:z:0 q_dense_2/Reshape/shape:output:0*
T0*'
_output_shapes
:          i
q_dense_2/transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       Б
q_dense_2/transpose	Transposeq_dense_2/add_3:z:0!q_dense_2/transpose/perm:output:0*
T0*
_output_shapes

:  j
q_dense_2/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"        Д
q_dense_2/Reshape_1Reshapeq_dense_2/transpose:y:0"q_dense_2/Reshape_1/shape:output:0*
T0*
_output_shapes

:  Ж
q_dense_2/MatMulMatMulq_dense_2/Reshape:output:0q_dense_2/Reshape_1:output:0*
T0*'
_output_shapes
:          ]
q_dense_2/Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :]
q_dense_2/Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : ╖
q_dense_2/Reshape_2/shapePackq_dense_2/unstack:output:0$q_dense_2/Reshape_2/shape/1:output:0$q_dense_2/Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:Ф
q_dense_2/Reshape_2Reshapeq_dense_2/MatMul:product:0"q_dense_2/Reshape_2/shape:output:0*
T0*+
_output_shapes
:          S
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
 *  АF{
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
 * №FФ
!q_dense_2/clip_by_value_1/MinimumMinimumq_dense_2/add_5:z:0,q_dense_2/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: `
q_dense_2/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞Ц
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
 *  АFx
q_dense_2/truediv_3RealDivq_dense_2/mul_5:z:0q_dense_2/truediv_3/y:output:0*
T0*
_output_shapes
: V
q_dense_2/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?p
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
 *  А?l
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
dtype0Д
q_dense_2/add_7AddV2"q_dense_2/ReadVariableOp_5:value:0!q_dense_2/StopGradient_3:output:0*
T0*
_output_shapes
: Е
q_dense_2/BiasAddBiasAddq_dense_2/Reshape_2:output:0q_dense_2/add_7:z:0*
T0*+
_output_shapes
:          V
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
: С
q_activation_2/LessEqual	LessEqualq_dense_2/BiasAdd:output:0q_activation_2/sub_1:z:0*
T0*+
_output_shapes
:          m
q_activation_2/ReluReluq_dense_2/BiasAdd:output:0*
T0*+
_output_shapes
:          h
q_activation_2/ones_like/ShapeShapeq_dense_2/BiasAdd:output:0*
T0*
_output_shapes
:c
q_activation_2/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  А?и
q_activation_2/ones_likeFill'q_activation_2/ones_like/Shape:output:0'q_activation_2/ones_like/Const:output:0*
T0*+
_output_shapes
:          q
q_activation_2/sub_2Subq_activation_2/Cast_1:y:0q_activation_2/Pow_2:z:0*
T0*
_output_shapes
: М
q_activation_2/mulMul!q_activation_2/ones_like:output:0q_activation_2/sub_2:z:0*
T0*+
_output_shapes
:          ▓
q_activation_2/SelectV2SelectV2q_activation_2/LessEqual:z:0!q_activation_2/Relu:activations:0q_activation_2/mul:z:0*
T0*+
_output_shapes
:          Ж
q_activation_2/mul_1Mulq_dense_2/BiasAdd:output:0q_activation_2/Cast:y:0*
T0*+
_output_shapes
:          М
q_activation_2/truedivRealDivq_activation_2/mul_1:z:0q_activation_2/Cast_1:y:0*
T0*+
_output_shapes
:          k
q_activation_2/NegNegq_activation_2/truediv:z:0*
T0*+
_output_shapes
:          o
q_activation_2/RoundRoundq_activation_2/truediv:z:0*
T0*+
_output_shapes
:          Г
q_activation_2/addAddV2q_activation_2/Neg:y:0q_activation_2/Round:y:0*
T0*+
_output_shapes
:          y
q_activation_2/StopGradientStopGradientq_activation_2/add:z:0*
T0*+
_output_shapes
:          Х
q_activation_2/add_1AddV2q_activation_2/truediv:z:0$q_activation_2/StopGradient:output:0*
T0*+
_output_shapes
:          М
q_activation_2/truediv_1RealDivq_activation_2/add_1:z:0q_activation_2/Cast:y:0*
T0*+
_output_shapes
:          _
q_activation_2/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?В
q_activation_2/truediv_2RealDiv#q_activation_2/truediv_2/x:output:0q_activation_2/Cast:y:0*
T0*
_output_shapes
: [
q_activation_2/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?{
q_activation_2/sub_3Subq_activation_2/sub_3/x:output:0q_activation_2/truediv_2:z:0*
T0*
_output_shapes
: Э
$q_activation_2/clip_by_value/MinimumMinimumq_activation_2/truediv_1:z:0q_activation_2/sub_3:z:0*
T0*+
_output_shapes
:          c
q_activation_2/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    ░
q_activation_2/clip_by_valueMaximum(q_activation_2/clip_by_value/Minimum:z:0'q_activation_2/clip_by_value/y:output:0*
T0*+
_output_shapes
:          О
q_activation_2/mul_2Mulq_activation_2/Cast_1:y:0 q_activation_2/clip_by_value:z:0*
T0*+
_output_shapes
:          s
q_activation_2/Neg_1Neg q_activation_2/SelectV2:output:0*
T0*+
_output_shapes
:          З
q_activation_2/add_2AddV2q_activation_2/Neg_1:y:0q_activation_2/mul_2:z:0*
T0*+
_output_shapes
:          [
q_activation_2/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?М
q_activation_2/mul_3Mulq_activation_2/mul_3/x:output:0q_activation_2/add_2:z:0*
T0*+
_output_shapes
:          }
q_activation_2/StopGradient_1StopGradientq_activation_2/mul_3:z:0*
T0*+
_output_shapes
:          Э
q_activation_2/add_3AddV2 q_activation_2/SelectV2:output:0&q_activation_2/StopGradient_1:output:0*
T0*+
_output_shapes
:          k
IdentityIdentityq_activation_2/add_3:z:0^NoOp*
T0*+
_output_shapes
:          ╛
NoOpNoOp^q_dense/ReadVariableOp^q_dense/ReadVariableOp_1^q_dense/ReadVariableOp_2^q_dense/ReadVariableOp_3^q_dense/ReadVariableOp_4^q_dense/ReadVariableOp_5^q_dense_1/ReadVariableOp^q_dense_1/ReadVariableOp_1^q_dense_1/ReadVariableOp_2^q_dense_1/ReadVariableOp_3^q_dense_1/ReadVariableOp_4^q_dense_1/ReadVariableOp_5^q_dense_2/ReadVariableOp^q_dense_2/ReadVariableOp_1^q_dense_2/ReadVariableOp_2^q_dense_2/ReadVariableOp_3^q_dense_2/ReadVariableOp_4^q_dense_2/ReadVariableOp_5*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*6
_input_shapes%
#:         : : : : : : 20
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
:         
 
_user_specified_nameinputs
Е	
Е
,__inference_sequential_layer_call_fn_1242687

inputs
unknown: 
	unknown_0: 
	unknown_1:  
	unknown_2: 
	unknown_3:  
	unknown_4: 
identityИвStatefulPartitionedCallЩ
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4*
Tin
	2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          *(
_read_only_resource_inputs

*2
config_proto" 

CPU

GPU2 *0J 8В *P
fKRI
G__inference_sequential_layer_call_and_return_conditional_losses_1240792s
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:          `
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*6
_input_shapes%
#:         : : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:S O
+
_output_shapes
:         
 
_user_specified_nameinputs
 ╫
Т
G__inference_sequential_layer_call_and_return_conditional_losses_1243069

inputs1
q_dense_readvariableop_resource: /
!q_dense_readvariableop_3_resource: 3
!q_dense_1_readvariableop_resource:  1
#q_dense_1_readvariableop_3_resource: 3
!q_dense_2_readvariableop_resource:  1
#q_dense_2_readvariableop_3_resource: 
identityИвq_dense/ReadVariableOpвq_dense/ReadVariableOp_1вq_dense/ReadVariableOp_2вq_dense/ReadVariableOp_3вq_dense/ReadVariableOp_4вq_dense/ReadVariableOp_5вq_dense_1/ReadVariableOpвq_dense_1/ReadVariableOp_1вq_dense_1/ReadVariableOp_2вq_dense_1/ReadVariableOp_3вq_dense_1/ReadVariableOp_4вq_dense_1/ReadVariableOp_5вq_dense_2/ReadVariableOpвq_dense_2/ReadVariableOp_1вq_dense_2/ReadVariableOp_2вq_dense_2/ReadVariableOp_3вq_dense_2/ReadVariableOp_4вq_dense_2/ReadVariableOp_5O
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
 *  АFs
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
 * №FО
q_dense/clip_by_value/MinimumMinimumq_dense/add_1:z:0(q_dense/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: \
q_dense/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞О
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
 *  АFv
q_dense/truediv_1RealDivq_dense/mul_1:z:0q_dense/truediv_1/y:output:0*
T0*
_output_shapes

: T
q_dense/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?n
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
 *  А?j
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
dtype0В
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
valueB"       t
q_dense/ReshapeReshapeinputsq_dense/Reshape/shape:output:0*
T0*'
_output_shapes
:         g
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
valueB"       ~
q_dense/Reshape_1Reshapeq_dense/transpose:y:0 q_dense/Reshape_1/shape:output:0*
T0*
_output_shapes

: А
q_dense/MatMulMatMulq_dense/Reshape:output:0q_dense/Reshape_1:output:0*
T0*'
_output_shapes
:          [
q_dense/Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :[
q_dense/Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : п
q_dense/Reshape_2/shapePackq_dense/unstack:output:0"q_dense/Reshape_2/shape/1:output:0"q_dense/Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:О
q_dense/Reshape_2Reshapeq_dense/MatMul:product:0 q_dense/Reshape_2/shape:output:0*
T0*+
_output_shapes
:          Q
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
 *  АFu
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
 * №FО
q_dense/clip_by_value_1/MinimumMinimumq_dense/add_5:z:0*q_dense/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: ^
q_dense/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞Р
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
 *  АFr
q_dense/truediv_3RealDivq_dense/mul_5:z:0q_dense/truediv_3/y:output:0*
T0*
_output_shapes
: T
q_dense/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?j
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
 *  А?f
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
:          T
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
: Л
q_activation/LessEqual	LessEqualq_dense/BiasAdd:output:0q_activation/sub_1:z:0*
T0*+
_output_shapes
:          i
q_activation/ReluReluq_dense/BiasAdd:output:0*
T0*+
_output_shapes
:          d
q_activation/ones_like/ShapeShapeq_dense/BiasAdd:output:0*
T0*
_output_shapes
:a
q_activation/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  А?в
q_activation/ones_likeFill%q_activation/ones_like/Shape:output:0%q_activation/ones_like/Const:output:0*
T0*+
_output_shapes
:          k
q_activation/sub_2Subq_activation/Cast_1:y:0q_activation/Pow_2:z:0*
T0*
_output_shapes
: Ж
q_activation/mulMulq_activation/ones_like:output:0q_activation/sub_2:z:0*
T0*+
_output_shapes
:          к
q_activation/SelectV2SelectV2q_activation/LessEqual:z:0q_activation/Relu:activations:0q_activation/mul:z:0*
T0*+
_output_shapes
:          А
q_activation/mul_1Mulq_dense/BiasAdd:output:0q_activation/Cast:y:0*
T0*+
_output_shapes
:          Ж
q_activation/truedivRealDivq_activation/mul_1:z:0q_activation/Cast_1:y:0*
T0*+
_output_shapes
:          g
q_activation/NegNegq_activation/truediv:z:0*
T0*+
_output_shapes
:          k
q_activation/RoundRoundq_activation/truediv:z:0*
T0*+
_output_shapes
:          }
q_activation/addAddV2q_activation/Neg:y:0q_activation/Round:y:0*
T0*+
_output_shapes
:          u
q_activation/StopGradientStopGradientq_activation/add:z:0*
T0*+
_output_shapes
:          П
q_activation/add_1AddV2q_activation/truediv:z:0"q_activation/StopGradient:output:0*
T0*+
_output_shapes
:          Ж
q_activation/truediv_1RealDivq_activation/add_1:z:0q_activation/Cast:y:0*
T0*+
_output_shapes
:          ]
q_activation/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?|
q_activation/truediv_2RealDiv!q_activation/truediv_2/x:output:0q_activation/Cast:y:0*
T0*
_output_shapes
: Y
q_activation/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?u
q_activation/sub_3Subq_activation/sub_3/x:output:0q_activation/truediv_2:z:0*
T0*
_output_shapes
: Ч
"q_activation/clip_by_value/MinimumMinimumq_activation/truediv_1:z:0q_activation/sub_3:z:0*
T0*+
_output_shapes
:          a
q_activation/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    к
q_activation/clip_by_valueMaximum&q_activation/clip_by_value/Minimum:z:0%q_activation/clip_by_value/y:output:0*
T0*+
_output_shapes
:          И
q_activation/mul_2Mulq_activation/Cast_1:y:0q_activation/clip_by_value:z:0*
T0*+
_output_shapes
:          o
q_activation/Neg_1Negq_activation/SelectV2:output:0*
T0*+
_output_shapes
:          Б
q_activation/add_2AddV2q_activation/Neg_1:y:0q_activation/mul_2:z:0*
T0*+
_output_shapes
:          Y
q_activation/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ж
q_activation/mul_3Mulq_activation/mul_3/x:output:0q_activation/add_2:z:0*
T0*+
_output_shapes
:          y
q_activation/StopGradient_1StopGradientq_activation/mul_3:z:0*
T0*+
_output_shapes
:          Ч
q_activation/add_3AddV2q_activation/SelectV2:output:0$q_activation/StopGradient_1:output:0*
T0*+
_output_shapes
:          Q
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
 *  АFy
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
 * №FФ
q_dense_1/clip_by_value/MinimumMinimumq_dense_1/add_1:z:0*q_dense_1/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  ^
q_dense_1/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞Ф
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
 *  АF|
q_dense_1/truediv_1RealDivq_dense_1/mul_1:z:0q_dense_1/truediv_1/y:output:0*
T0*
_output_shapes

:  V
q_dense_1/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?t
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
 *  А?p
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
dtype0И
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
valueB"        И
q_dense_1/ReshapeReshapeq_activation/add_3:z:0 q_dense_1/Reshape/shape:output:0*
T0*'
_output_shapes
:          i
q_dense_1/transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       Б
q_dense_1/transpose	Transposeq_dense_1/add_3:z:0!q_dense_1/transpose/perm:output:0*
T0*
_output_shapes

:  j
q_dense_1/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"        Д
q_dense_1/Reshape_1Reshapeq_dense_1/transpose:y:0"q_dense_1/Reshape_1/shape:output:0*
T0*
_output_shapes

:  Ж
q_dense_1/MatMulMatMulq_dense_1/Reshape:output:0q_dense_1/Reshape_1:output:0*
T0*'
_output_shapes
:          ]
q_dense_1/Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :]
q_dense_1/Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : ╖
q_dense_1/Reshape_2/shapePackq_dense_1/unstack:output:0$q_dense_1/Reshape_2/shape/1:output:0$q_dense_1/Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:Ф
q_dense_1/Reshape_2Reshapeq_dense_1/MatMul:product:0"q_dense_1/Reshape_2/shape:output:0*
T0*+
_output_shapes
:          S
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
 *  АF{
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
 * №FФ
!q_dense_1/clip_by_value_1/MinimumMinimumq_dense_1/add_5:z:0,q_dense_1/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: `
q_dense_1/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞Ц
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
 *  АFx
q_dense_1/truediv_3RealDivq_dense_1/mul_5:z:0q_dense_1/truediv_3/y:output:0*
T0*
_output_shapes
: V
q_dense_1/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?p
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
 *  А?l
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
dtype0Д
q_dense_1/add_7AddV2"q_dense_1/ReadVariableOp_5:value:0!q_dense_1/StopGradient_3:output:0*
T0*
_output_shapes
: Е
q_dense_1/BiasAddBiasAddq_dense_1/Reshape_2:output:0q_dense_1/add_7:z:0*
T0*+
_output_shapes
:          V
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
: С
q_activation_1/LessEqual	LessEqualq_dense_1/BiasAdd:output:0q_activation_1/sub_1:z:0*
T0*+
_output_shapes
:          m
q_activation_1/ReluReluq_dense_1/BiasAdd:output:0*
T0*+
_output_shapes
:          h
q_activation_1/ones_like/ShapeShapeq_dense_1/BiasAdd:output:0*
T0*
_output_shapes
:c
q_activation_1/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  А?и
q_activation_1/ones_likeFill'q_activation_1/ones_like/Shape:output:0'q_activation_1/ones_like/Const:output:0*
T0*+
_output_shapes
:          q
q_activation_1/sub_2Subq_activation_1/Cast_1:y:0q_activation_1/Pow_2:z:0*
T0*
_output_shapes
: М
q_activation_1/mulMul!q_activation_1/ones_like:output:0q_activation_1/sub_2:z:0*
T0*+
_output_shapes
:          ▓
q_activation_1/SelectV2SelectV2q_activation_1/LessEqual:z:0!q_activation_1/Relu:activations:0q_activation_1/mul:z:0*
T0*+
_output_shapes
:          Ж
q_activation_1/mul_1Mulq_dense_1/BiasAdd:output:0q_activation_1/Cast:y:0*
T0*+
_output_shapes
:          М
q_activation_1/truedivRealDivq_activation_1/mul_1:z:0q_activation_1/Cast_1:y:0*
T0*+
_output_shapes
:          k
q_activation_1/NegNegq_activation_1/truediv:z:0*
T0*+
_output_shapes
:          o
q_activation_1/RoundRoundq_activation_1/truediv:z:0*
T0*+
_output_shapes
:          Г
q_activation_1/addAddV2q_activation_1/Neg:y:0q_activation_1/Round:y:0*
T0*+
_output_shapes
:          y
q_activation_1/StopGradientStopGradientq_activation_1/add:z:0*
T0*+
_output_shapes
:          Х
q_activation_1/add_1AddV2q_activation_1/truediv:z:0$q_activation_1/StopGradient:output:0*
T0*+
_output_shapes
:          М
q_activation_1/truediv_1RealDivq_activation_1/add_1:z:0q_activation_1/Cast:y:0*
T0*+
_output_shapes
:          _
q_activation_1/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?В
q_activation_1/truediv_2RealDiv#q_activation_1/truediv_2/x:output:0q_activation_1/Cast:y:0*
T0*
_output_shapes
: [
q_activation_1/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?{
q_activation_1/sub_3Subq_activation_1/sub_3/x:output:0q_activation_1/truediv_2:z:0*
T0*
_output_shapes
: Э
$q_activation_1/clip_by_value/MinimumMinimumq_activation_1/truediv_1:z:0q_activation_1/sub_3:z:0*
T0*+
_output_shapes
:          c
q_activation_1/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    ░
q_activation_1/clip_by_valueMaximum(q_activation_1/clip_by_value/Minimum:z:0'q_activation_1/clip_by_value/y:output:0*
T0*+
_output_shapes
:          О
q_activation_1/mul_2Mulq_activation_1/Cast_1:y:0 q_activation_1/clip_by_value:z:0*
T0*+
_output_shapes
:          s
q_activation_1/Neg_1Neg q_activation_1/SelectV2:output:0*
T0*+
_output_shapes
:          З
q_activation_1/add_2AddV2q_activation_1/Neg_1:y:0q_activation_1/mul_2:z:0*
T0*+
_output_shapes
:          [
q_activation_1/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?М
q_activation_1/mul_3Mulq_activation_1/mul_3/x:output:0q_activation_1/add_2:z:0*
T0*+
_output_shapes
:          }
q_activation_1/StopGradient_1StopGradientq_activation_1/mul_3:z:0*
T0*+
_output_shapes
:          Э
q_activation_1/add_3AddV2 q_activation_1/SelectV2:output:0&q_activation_1/StopGradient_1:output:0*
T0*+
_output_shapes
:          Q
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
 *  АFy
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
 * №FФ
q_dense_2/clip_by_value/MinimumMinimumq_dense_2/add_1:z:0*q_dense_2/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  ^
q_dense_2/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞Ф
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
 *  АF|
q_dense_2/truediv_1RealDivq_dense_2/mul_1:z:0q_dense_2/truediv_1/y:output:0*
T0*
_output_shapes

:  V
q_dense_2/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?t
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
 *  А?p
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
dtype0И
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
valueB"        К
q_dense_2/ReshapeReshapeq_activation_1/add_3:z:0 q_dense_2/Reshape/shape:output:0*
T0*'
_output_shapes
:          i
q_dense_2/transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       Б
q_dense_2/transpose	Transposeq_dense_2/add_3:z:0!q_dense_2/transpose/perm:output:0*
T0*
_output_shapes

:  j
q_dense_2/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"        Д
q_dense_2/Reshape_1Reshapeq_dense_2/transpose:y:0"q_dense_2/Reshape_1/shape:output:0*
T0*
_output_shapes

:  Ж
q_dense_2/MatMulMatMulq_dense_2/Reshape:output:0q_dense_2/Reshape_1:output:0*
T0*'
_output_shapes
:          ]
q_dense_2/Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :]
q_dense_2/Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : ╖
q_dense_2/Reshape_2/shapePackq_dense_2/unstack:output:0$q_dense_2/Reshape_2/shape/1:output:0$q_dense_2/Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:Ф
q_dense_2/Reshape_2Reshapeq_dense_2/MatMul:product:0"q_dense_2/Reshape_2/shape:output:0*
T0*+
_output_shapes
:          S
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
 *  АF{
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
 * №FФ
!q_dense_2/clip_by_value_1/MinimumMinimumq_dense_2/add_5:z:0,q_dense_2/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: `
q_dense_2/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞Ц
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
 *  АFx
q_dense_2/truediv_3RealDivq_dense_2/mul_5:z:0q_dense_2/truediv_3/y:output:0*
T0*
_output_shapes
: V
q_dense_2/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?p
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
 *  А?l
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
dtype0Д
q_dense_2/add_7AddV2"q_dense_2/ReadVariableOp_5:value:0!q_dense_2/StopGradient_3:output:0*
T0*
_output_shapes
: Е
q_dense_2/BiasAddBiasAddq_dense_2/Reshape_2:output:0q_dense_2/add_7:z:0*
T0*+
_output_shapes
:          V
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
: С
q_activation_2/LessEqual	LessEqualq_dense_2/BiasAdd:output:0q_activation_2/sub_1:z:0*
T0*+
_output_shapes
:          m
q_activation_2/ReluReluq_dense_2/BiasAdd:output:0*
T0*+
_output_shapes
:          h
q_activation_2/ones_like/ShapeShapeq_dense_2/BiasAdd:output:0*
T0*
_output_shapes
:c
q_activation_2/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  А?и
q_activation_2/ones_likeFill'q_activation_2/ones_like/Shape:output:0'q_activation_2/ones_like/Const:output:0*
T0*+
_output_shapes
:          q
q_activation_2/sub_2Subq_activation_2/Cast_1:y:0q_activation_2/Pow_2:z:0*
T0*
_output_shapes
: М
q_activation_2/mulMul!q_activation_2/ones_like:output:0q_activation_2/sub_2:z:0*
T0*+
_output_shapes
:          ▓
q_activation_2/SelectV2SelectV2q_activation_2/LessEqual:z:0!q_activation_2/Relu:activations:0q_activation_2/mul:z:0*
T0*+
_output_shapes
:          Ж
q_activation_2/mul_1Mulq_dense_2/BiasAdd:output:0q_activation_2/Cast:y:0*
T0*+
_output_shapes
:          М
q_activation_2/truedivRealDivq_activation_2/mul_1:z:0q_activation_2/Cast_1:y:0*
T0*+
_output_shapes
:          k
q_activation_2/NegNegq_activation_2/truediv:z:0*
T0*+
_output_shapes
:          o
q_activation_2/RoundRoundq_activation_2/truediv:z:0*
T0*+
_output_shapes
:          Г
q_activation_2/addAddV2q_activation_2/Neg:y:0q_activation_2/Round:y:0*
T0*+
_output_shapes
:          y
q_activation_2/StopGradientStopGradientq_activation_2/add:z:0*
T0*+
_output_shapes
:          Х
q_activation_2/add_1AddV2q_activation_2/truediv:z:0$q_activation_2/StopGradient:output:0*
T0*+
_output_shapes
:          М
q_activation_2/truediv_1RealDivq_activation_2/add_1:z:0q_activation_2/Cast:y:0*
T0*+
_output_shapes
:          _
q_activation_2/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?В
q_activation_2/truediv_2RealDiv#q_activation_2/truediv_2/x:output:0q_activation_2/Cast:y:0*
T0*
_output_shapes
: [
q_activation_2/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?{
q_activation_2/sub_3Subq_activation_2/sub_3/x:output:0q_activation_2/truediv_2:z:0*
T0*
_output_shapes
: Э
$q_activation_2/clip_by_value/MinimumMinimumq_activation_2/truediv_1:z:0q_activation_2/sub_3:z:0*
T0*+
_output_shapes
:          c
q_activation_2/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    ░
q_activation_2/clip_by_valueMaximum(q_activation_2/clip_by_value/Minimum:z:0'q_activation_2/clip_by_value/y:output:0*
T0*+
_output_shapes
:          О
q_activation_2/mul_2Mulq_activation_2/Cast_1:y:0 q_activation_2/clip_by_value:z:0*
T0*+
_output_shapes
:          s
q_activation_2/Neg_1Neg q_activation_2/SelectV2:output:0*
T0*+
_output_shapes
:          З
q_activation_2/add_2AddV2q_activation_2/Neg_1:y:0q_activation_2/mul_2:z:0*
T0*+
_output_shapes
:          [
q_activation_2/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?М
q_activation_2/mul_3Mulq_activation_2/mul_3/x:output:0q_activation_2/add_2:z:0*
T0*+
_output_shapes
:          }
q_activation_2/StopGradient_1StopGradientq_activation_2/mul_3:z:0*
T0*+
_output_shapes
:          Э
q_activation_2/add_3AddV2 q_activation_2/SelectV2:output:0&q_activation_2/StopGradient_1:output:0*
T0*+
_output_shapes
:          k
IdentityIdentityq_activation_2/add_3:z:0^NoOp*
T0*+
_output_shapes
:          ╛
NoOpNoOp^q_dense/ReadVariableOp^q_dense/ReadVariableOp_1^q_dense/ReadVariableOp_2^q_dense/ReadVariableOp_3^q_dense/ReadVariableOp_4^q_dense/ReadVariableOp_5^q_dense_1/ReadVariableOp^q_dense_1/ReadVariableOp_1^q_dense_1/ReadVariableOp_2^q_dense_1/ReadVariableOp_3^q_dense_1/ReadVariableOp_4^q_dense_1/ReadVariableOp_5^q_dense_2/ReadVariableOp^q_dense_2/ReadVariableOp_1^q_dense_2/ReadVariableOp_2^q_dense_2/ReadVariableOp_3^q_dense_2/ReadVariableOp_4^q_dense_2/ReadVariableOp_5*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*6
_input_shapes%
#:         : : : : : : 20
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
:         
 
_user_specified_nameinputs
йG
Б
 __inference__traced_save_1244614
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

identity_1ИвMergeV2Checkpointsw
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
: р
SaveV2/tensor_namesConst"/device:CPU:0*
_output_shapes
:%*
dtype0*Й
value B№%B&variables/0/.ATTRIBUTES/VARIABLE_VALUEB&variables/1/.ATTRIBUTES/VARIABLE_VALUEB&variables/2/.ATTRIBUTES/VARIABLE_VALUEB&variables/3/.ATTRIBUTES/VARIABLE_VALUEB&variables/4/.ATTRIBUTES/VARIABLE_VALUEB&variables/5/.ATTRIBUTES/VARIABLE_VALUEB&variables/6/.ATTRIBUTES/VARIABLE_VALUEB&variables/7/.ATTRIBUTES/VARIABLE_VALUEB&variables/8/.ATTRIBUTES/VARIABLE_VALUEB&variables/9/.ATTRIBUTES/VARIABLE_VALUEB0optimizer/_iterations/.ATTRIBUTES/VARIABLE_VALUEB3optimizer/_learning_rate/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/1/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/2/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/3/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/4/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/5/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/6/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/7/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/8/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/9/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/10/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/11/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/12/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/13/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/14/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/15/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/16/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/17/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/18/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/19/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/20/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/0/total/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/0/count/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/1/total/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/1/count/.ATTRIBUTES/VARIABLE_VALUEB_CHECKPOINTABLE_OBJECT_GRAPH╖
SaveV2/shape_and_slicesConst"/device:CPU:0*
_output_shapes
:%*
dtype0*]
valueTBR%B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B А
SaveV2SaveV2ShardedFilename:filename:0SaveV2/tensor_names:output:0 SaveV2/shape_and_slices:output:0)savev2_q_dense_kernel_read_readvariableop'savev2_q_dense_bias_read_readvariableop+savev2_q_dense_1_kernel_read_readvariableop)savev2_q_dense_1_bias_read_readvariableop+savev2_q_dense_2_kernel_read_readvariableop)savev2_q_dense_2_bias_read_readvariableop+savev2_q_dense_3_kernel_read_readvariableop)savev2_q_dense_3_bias_read_readvariableop+savev2_q_dense_4_kernel_read_readvariableop)savev2_q_dense_4_bias_read_readvariableop$savev2_iteration_read_readvariableop(savev2_learning_rate_read_readvariableop0savev2_adam_m_q_dense_kernel_read_readvariableop0savev2_adam_v_q_dense_kernel_read_readvariableop.savev2_adam_m_q_dense_bias_read_readvariableop.savev2_adam_v_q_dense_bias_read_readvariableop2savev2_adam_m_q_dense_1_kernel_read_readvariableop2savev2_adam_v_q_dense_1_kernel_read_readvariableop0savev2_adam_m_q_dense_1_bias_read_readvariableop0savev2_adam_v_q_dense_1_bias_read_readvariableop2savev2_adam_m_q_dense_2_kernel_read_readvariableop2savev2_adam_v_q_dense_2_kernel_read_readvariableop0savev2_adam_m_q_dense_2_bias_read_readvariableop0savev2_adam_v_q_dense_2_bias_read_readvariableop2savev2_adam_m_q_dense_3_kernel_read_readvariableop2savev2_adam_v_q_dense_3_kernel_read_readvariableop0savev2_adam_m_q_dense_3_bias_read_readvariableop0savev2_adam_v_q_dense_3_bias_read_readvariableop2savev2_adam_m_q_dense_4_kernel_read_readvariableop2savev2_adam_v_q_dense_4_kernel_read_readvariableop0savev2_adam_m_q_dense_4_bias_read_readvariableop0savev2_adam_v_q_dense_4_bias_read_readvariableop"savev2_total_1_read_readvariableop"savev2_count_1_read_readvariableop savev2_total_read_readvariableop savev2_count_read_readvariableopsavev2_const"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *3
dtypes)
'2%	Р
&MergeV2Checkpoints/checkpoint_prefixesPackShardedFilename:filename:0^SaveV2"/device:CPU:0*
N*
T0*
_output_shapes
:│
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

identity_1Identity_1:output:0*Х
_input_shapesГ
А: : : :  : :  : :  : : :: : : : : : :  :  : : :  :  : : :  :  : : : : ::: : : : : 2(
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
└
┌
.__inference_sequential_1_layer_call_fn_1241086
q_dense_3_input
unknown:  
	unknown_0: 
	unknown_1: 
	unknown_2:
identityИвStatefulPartitionedCallЖ
StatefulPartitionedCallStatefulPartitionedCallq_dense_3_inputunknown	unknown_0	unknown_1	unknown_2*
Tin	
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:         *&
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *R
fMRK
I__inference_sequential_1_layer_call_and_return_conditional_losses_1241075o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:         `
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:          : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:X T
'
_output_shapes
:          
)
_user_specified_nameq_dense_3_input
▐!
g
K__inference_q_activation_1_layer_call_and_return_conditional_losses_1244127

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
:          J
ReluReluinputs*
T0*+
_output_shapes
:          E
ones_like/ShapeShapeinputs*
T0*
_output_shapes
:T
ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  А?{
	ones_likeFillones_like/Shape:output:0ones_like/Const:output:0*
T0*+
_output_shapes
:          D
sub_2Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: _
mulMulones_like:output:0	sub_2:z:0*
T0*+
_output_shapes
:          v
SelectV2SelectV2LessEqual:z:0Relu:activations:0mul:z:0*
T0*+
_output_shapes
:          T
mul_1MulinputsCast:y:0*
T0*+
_output_shapes
:          _
truedivRealDiv	mul_1:z:0
Cast_1:y:0*
T0*+
_output_shapes
:          M
NegNegtruediv:z:0*
T0*+
_output_shapes
:          Q
RoundRoundtruediv:z:0*
T0*+
_output_shapes
:          V
addAddV2Neg:y:0	Round:y:0*
T0*+
_output_shapes
:          [
StopGradientStopGradientadd:z:0*
T0*+
_output_shapes
:          h
add_1AddV2truediv:z:0StopGradient:output:0*
T0*+
_output_shapes
:          _
	truediv_1RealDiv	add_1:z:0Cast:y:0*
T0*+
_output_shapes
:          P
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
:          T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    Г
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*+
_output_shapes
:          a
mul_2Mul
Cast_1:y:0clip_by_value:z:0*
T0*+
_output_shapes
:          U
Neg_1NegSelectV2:output:0*
T0*+
_output_shapes
:          Z
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*+
_output_shapes
:          L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?_
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*+
_output_shapes
:          _
StopGradient_1StopGradient	mul_3:z:0*
T0*+
_output_shapes
:          p
add_3AddV2SelectV2:output:0StopGradient_1:output:0*
T0*+
_output_shapes
:          U
IdentityIdentity	add_3:z:0*
T0*+
_output_shapes
:          "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:          :S O
+
_output_shapes
:          
 
_user_specified_nameinputs
█╚
╢
"__inference__wrapped_model_1240254
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
identityИв6DeepSetsInvQuantised/sequential/q_dense/ReadVariableOpв8DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_1в8DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_2в8DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_3в8DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_4в8DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_5в8DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOpв:DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_1в:DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_2в:DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_3в:DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_4в:DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_5в8DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOpв:DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_1в:DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_2в:DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_3в:DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_4в:DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_5в:DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOpв<DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_1в<DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_2в<DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_3в<DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_4в<DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_5в:DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOpв<DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_1в<DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_2в<DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_3в<DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_4в<DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_5o
-DeepSetsInvQuantised/sequential/q_dense/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :o
-DeepSetsInvQuantised/sequential/q_dense/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : ├
+DeepSetsInvQuantised/sequential/q_dense/PowPow6DeepSetsInvQuantised/sequential/q_dense/Pow/x:output:06DeepSetsInvQuantised/sequential/q_dense/Pow/y:output:0*
T0*
_output_shapes
: Х
,DeepSetsInvQuantised/sequential/q_dense/CastCast/DeepSetsInvQuantised/sequential/q_dense/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: ╢
6DeepSetsInvQuantised/sequential/q_dense/ReadVariableOpReadVariableOp?deepsetsinvquantised_sequential_q_dense_readvariableop_resource*
_output_shapes

: *
dtype0r
-DeepSetsInvQuantised/sequential/q_dense/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АF╙
+DeepSetsInvQuantised/sequential/q_dense/mulMul>DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp:value:06DeepSetsInvQuantised/sequential/q_dense/mul/y:output:0*
T0*
_output_shapes

: ╞
/DeepSetsInvQuantised/sequential/q_dense/truedivRealDiv/DeepSetsInvQuantised/sequential/q_dense/mul:z:00DeepSetsInvQuantised/sequential/q_dense/Cast:y:0*
T0*
_output_shapes

: Р
+DeepSetsInvQuantised/sequential/q_dense/NegNeg3DeepSetsInvQuantised/sequential/q_dense/truediv:z:0*
T0*
_output_shapes

: Ф
-DeepSetsInvQuantised/sequential/q_dense/RoundRound3DeepSetsInvQuantised/sequential/q_dense/truediv:z:0*
T0*
_output_shapes

: ┴
+DeepSetsInvQuantised/sequential/q_dense/addAddV2/DeepSetsInvQuantised/sequential/q_dense/Neg:y:01DeepSetsInvQuantised/sequential/q_dense/Round:y:0*
T0*
_output_shapes

: Ю
4DeepSetsInvQuantised/sequential/q_dense/StopGradientStopGradient/DeepSetsInvQuantised/sequential/q_dense/add:z:0*
T0*
_output_shapes

: ╙
-DeepSetsInvQuantised/sequential/q_dense/add_1AddV23DeepSetsInvQuantised/sequential/q_dense/truediv:z:0=DeepSetsInvQuantised/sequential/q_dense/StopGradient:output:0*
T0*
_output_shapes

: Д
?DeepSetsInvQuantised/sequential/q_dense/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * №Fю
=DeepSetsInvQuantised/sequential/q_dense/clip_by_value/MinimumMinimum1DeepSetsInvQuantised/sequential/q_dense/add_1:z:0HDeepSetsInvQuantised/sequential/q_dense/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: |
7DeepSetsInvQuantised/sequential/q_dense/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞ю
5DeepSetsInvQuantised/sequential/q_dense/clip_by_valueMaximumADeepSetsInvQuantised/sequential/q_dense/clip_by_value/Minimum:z:0@DeepSetsInvQuantised/sequential/q_dense/clip_by_value/y:output:0*
T0*
_output_shapes

: ╩
-DeepSetsInvQuantised/sequential/q_dense/mul_1Mul0DeepSetsInvQuantised/sequential/q_dense/Cast:y:09DeepSetsInvQuantised/sequential/q_dense/clip_by_value:z:0*
T0*
_output_shapes

: x
3DeepSetsInvQuantised/sequential/q_dense/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АF╓
1DeepSetsInvQuantised/sequential/q_dense/truediv_1RealDiv1DeepSetsInvQuantised/sequential/q_dense/mul_1:z:0<DeepSetsInvQuantised/sequential/q_dense/truediv_1/y:output:0*
T0*
_output_shapes

: t
/DeepSetsInvQuantised/sequential/q_dense/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?╬
-DeepSetsInvQuantised/sequential/q_dense/mul_2Mul8DeepSetsInvQuantised/sequential/q_dense/mul_2/x:output:05DeepSetsInvQuantised/sequential/q_dense/truediv_1:z:0*
T0*
_output_shapes

: ╕
8DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_1ReadVariableOp?deepsetsinvquantised_sequential_q_dense_readvariableop_resource*
_output_shapes

: *
dtype0Я
-DeepSetsInvQuantised/sequential/q_dense/Neg_1Neg@DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_1:value:0*
T0*
_output_shapes

: ┼
-DeepSetsInvQuantised/sequential/q_dense/add_2AddV21DeepSetsInvQuantised/sequential/q_dense/Neg_1:y:01DeepSetsInvQuantised/sequential/q_dense/mul_2:z:0*
T0*
_output_shapes

: t
/DeepSetsInvQuantised/sequential/q_dense/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?╩
-DeepSetsInvQuantised/sequential/q_dense/mul_3Mul8DeepSetsInvQuantised/sequential/q_dense/mul_3/x:output:01DeepSetsInvQuantised/sequential/q_dense/add_2:z:0*
T0*
_output_shapes

: в
6DeepSetsInvQuantised/sequential/q_dense/StopGradient_1StopGradient1DeepSetsInvQuantised/sequential/q_dense/mul_3:z:0*
T0*
_output_shapes

: ╕
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
:б
/DeepSetsInvQuantised/sequential/q_dense/unstackUnpack6DeepSetsInvQuantised/sequential/q_dense/Shape:output:0*
T0*
_output_shapes
: : : *	
numА
/DeepSetsInvQuantised/sequential/q_dense/Shape_1Const*
_output_shapes
:*
dtype0*
valueB"       г
1DeepSetsInvQuantised/sequential/q_dense/unstack_1Unpack8DeepSetsInvQuantised/sequential/q_dense/Shape_1:output:0*
T0*
_output_shapes
: : *	
numЖ
5DeepSetsInvQuantised/sequential/q_dense/Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB"       ╡
/DeepSetsInvQuantised/sequential/q_dense/ReshapeReshapeinput_1>DeepSetsInvQuantised/sequential/q_dense/Reshape/shape:output:0*
T0*'
_output_shapes
:         З
6DeepSetsInvQuantised/sequential/q_dense/transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       █
1DeepSetsInvQuantised/sequential/q_dense/transpose	Transpose1DeepSetsInvQuantised/sequential/q_dense/add_3:z:0?DeepSetsInvQuantised/sequential/q_dense/transpose/perm:output:0*
T0*
_output_shapes

: И
7DeepSetsInvQuantised/sequential/q_dense/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"       ▐
1DeepSetsInvQuantised/sequential/q_dense/Reshape_1Reshape5DeepSetsInvQuantised/sequential/q_dense/transpose:y:0@DeepSetsInvQuantised/sequential/q_dense/Reshape_1/shape:output:0*
T0*
_output_shapes

: р
.DeepSetsInvQuantised/sequential/q_dense/MatMulMatMul8DeepSetsInvQuantised/sequential/q_dense/Reshape:output:0:DeepSetsInvQuantised/sequential/q_dense/Reshape_1:output:0*
T0*'
_output_shapes
:          {
9DeepSetsInvQuantised/sequential/q_dense/Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :{
9DeepSetsInvQuantised/sequential/q_dense/Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : п
7DeepSetsInvQuantised/sequential/q_dense/Reshape_2/shapePack8DeepSetsInvQuantised/sequential/q_dense/unstack:output:0BDeepSetsInvQuantised/sequential/q_dense/Reshape_2/shape/1:output:0BDeepSetsInvQuantised/sequential/q_dense/Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:ю
1DeepSetsInvQuantised/sequential/q_dense/Reshape_2Reshape8DeepSetsInvQuantised/sequential/q_dense/MatMul:product:0@DeepSetsInvQuantised/sequential/q_dense/Reshape_2/shape:output:0*
T0*+
_output_shapes
:          q
/DeepSetsInvQuantised/sequential/q_dense/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :q
/DeepSetsInvQuantised/sequential/q_dense/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : ╔
-DeepSetsInvQuantised/sequential/q_dense/Pow_1Pow8DeepSetsInvQuantised/sequential/q_dense/Pow_1/x:output:08DeepSetsInvQuantised/sequential/q_dense/Pow_1/y:output:0*
T0*
_output_shapes
: Щ
.DeepSetsInvQuantised/sequential/q_dense/Cast_1Cast1DeepSetsInvQuantised/sequential/q_dense/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: ╢
8DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_3ReadVariableOpAdeepsetsinvquantised_sequential_q_dense_readvariableop_3_resource*
_output_shapes
: *
dtype0t
/DeepSetsInvQuantised/sequential/q_dense/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АF╒
-DeepSetsInvQuantised/sequential/q_dense/mul_4Mul@DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_3:value:08DeepSetsInvQuantised/sequential/q_dense/mul_4/y:output:0*
T0*
_output_shapes
: ╚
1DeepSetsInvQuantised/sequential/q_dense/truediv_2RealDiv1DeepSetsInvQuantised/sequential/q_dense/mul_4:z:02DeepSetsInvQuantised/sequential/q_dense/Cast_1:y:0*
T0*
_output_shapes
: Р
-DeepSetsInvQuantised/sequential/q_dense/Neg_2Neg5DeepSetsInvQuantised/sequential/q_dense/truediv_2:z:0*
T0*
_output_shapes
: Ф
/DeepSetsInvQuantised/sequential/q_dense/Round_1Round5DeepSetsInvQuantised/sequential/q_dense/truediv_2:z:0*
T0*
_output_shapes
: ├
-DeepSetsInvQuantised/sequential/q_dense/add_4AddV21DeepSetsInvQuantised/sequential/q_dense/Neg_2:y:03DeepSetsInvQuantised/sequential/q_dense/Round_1:y:0*
T0*
_output_shapes
: Ю
6DeepSetsInvQuantised/sequential/q_dense/StopGradient_2StopGradient1DeepSetsInvQuantised/sequential/q_dense/add_4:z:0*
T0*
_output_shapes
: ╙
-DeepSetsInvQuantised/sequential/q_dense/add_5AddV25DeepSetsInvQuantised/sequential/q_dense/truediv_2:z:0?DeepSetsInvQuantised/sequential/q_dense/StopGradient_2:output:0*
T0*
_output_shapes
: Ж
ADeepSetsInvQuantised/sequential/q_dense/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * №Fю
?DeepSetsInvQuantised/sequential/q_dense/clip_by_value_1/MinimumMinimum1DeepSetsInvQuantised/sequential/q_dense/add_5:z:0JDeepSetsInvQuantised/sequential/q_dense/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: ~
9DeepSetsInvQuantised/sequential/q_dense/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞Ё
7DeepSetsInvQuantised/sequential/q_dense/clip_by_value_1MaximumCDeepSetsInvQuantised/sequential/q_dense/clip_by_value_1/Minimum:z:0BDeepSetsInvQuantised/sequential/q_dense/clip_by_value_1/y:output:0*
T0*
_output_shapes
: ╩
-DeepSetsInvQuantised/sequential/q_dense/mul_5Mul2DeepSetsInvQuantised/sequential/q_dense/Cast_1:y:0;DeepSetsInvQuantised/sequential/q_dense/clip_by_value_1:z:0*
T0*
_output_shapes
: x
3DeepSetsInvQuantised/sequential/q_dense/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АF╥
1DeepSetsInvQuantised/sequential/q_dense/truediv_3RealDiv1DeepSetsInvQuantised/sequential/q_dense/mul_5:z:0<DeepSetsInvQuantised/sequential/q_dense/truediv_3/y:output:0*
T0*
_output_shapes
: t
/DeepSetsInvQuantised/sequential/q_dense/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?╩
-DeepSetsInvQuantised/sequential/q_dense/mul_6Mul8DeepSetsInvQuantised/sequential/q_dense/mul_6/x:output:05DeepSetsInvQuantised/sequential/q_dense/truediv_3:z:0*
T0*
_output_shapes
: ╢
8DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_4ReadVariableOpAdeepsetsinvquantised_sequential_q_dense_readvariableop_3_resource*
_output_shapes
: *
dtype0Ы
-DeepSetsInvQuantised/sequential/q_dense/Neg_3Neg@DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_4:value:0*
T0*
_output_shapes
: ┴
-DeepSetsInvQuantised/sequential/q_dense/add_6AddV21DeepSetsInvQuantised/sequential/q_dense/Neg_3:y:01DeepSetsInvQuantised/sequential/q_dense/mul_6:z:0*
T0*
_output_shapes
: t
/DeepSetsInvQuantised/sequential/q_dense/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?╞
-DeepSetsInvQuantised/sequential/q_dense/mul_7Mul8DeepSetsInvQuantised/sequential/q_dense/mul_7/x:output:01DeepSetsInvQuantised/sequential/q_dense/add_6:z:0*
T0*
_output_shapes
: Ю
6DeepSetsInvQuantised/sequential/q_dense/StopGradient_3StopGradient1DeepSetsInvQuantised/sequential/q_dense/mul_7:z:0*
T0*
_output_shapes
: ╢
8DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_5ReadVariableOpAdeepsetsinvquantised_sequential_q_dense_readvariableop_3_resource*
_output_shapes
: *
dtype0▐
-DeepSetsInvQuantised/sequential/q_dense/add_7AddV2@DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_5:value:0?DeepSetsInvQuantised/sequential/q_dense/StopGradient_3:output:0*
T0*
_output_shapes
: ▀
/DeepSetsInvQuantised/sequential/q_dense/BiasAddBiasAdd:DeepSetsInvQuantised/sequential/q_dense/Reshape_2:output:01DeepSetsInvQuantised/sequential/q_dense/add_7:z:0*
T0*+
_output_shapes
:          t
2DeepSetsInvQuantised/sequential/q_activation/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :t
2DeepSetsInvQuantised/sequential/q_activation/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :╥
0DeepSetsInvQuantised/sequential/q_activation/PowPow;DeepSetsInvQuantised/sequential/q_activation/Pow/x:output:0;DeepSetsInvQuantised/sequential/q_activation/Pow/y:output:0*
T0*
_output_shapes
: Я
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
value	B : ╪
2DeepSetsInvQuantised/sequential/q_activation/Pow_1Pow=DeepSetsInvQuantised/sequential/q_activation/Pow_1/x:output:0=DeepSetsInvQuantised/sequential/q_activation/Pow_1/y:output:0*
T0*
_output_shapes
: г
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
value	B : л
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
 *   A╬
0DeepSetsInvQuantised/sequential/q_activation/subSub7DeepSetsInvQuantised/sequential/q_activation/Cast_2:y:0;DeepSetsInvQuantised/sequential/q_activation/sub/y:output:0*
T0*
_output_shapes
: ═
2DeepSetsInvQuantised/sequential/q_activation/Pow_2Pow;DeepSetsInvQuantised/sequential/q_activation/Const:output:04DeepSetsInvQuantised/sequential/q_activation/sub:z:0*
T0*
_output_shapes
: ╦
2DeepSetsInvQuantised/sequential/q_activation/sub_1Sub7DeepSetsInvQuantised/sequential/q_activation/Cast_1:y:06DeepSetsInvQuantised/sequential/q_activation/Pow_2:z:0*
T0*
_output_shapes
: ы
6DeepSetsInvQuantised/sequential/q_activation/LessEqual	LessEqual8DeepSetsInvQuantised/sequential/q_dense/BiasAdd:output:06DeepSetsInvQuantised/sequential/q_activation/sub_1:z:0*
T0*+
_output_shapes
:          й
1DeepSetsInvQuantised/sequential/q_activation/ReluRelu8DeepSetsInvQuantised/sequential/q_dense/BiasAdd:output:0*
T0*+
_output_shapes
:          д
<DeepSetsInvQuantised/sequential/q_activation/ones_like/ShapeShape8DeepSetsInvQuantised/sequential/q_dense/BiasAdd:output:0*
T0*
_output_shapes
:Б
<DeepSetsInvQuantised/sequential/q_activation/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  А?В
6DeepSetsInvQuantised/sequential/q_activation/ones_likeFillEDeepSetsInvQuantised/sequential/q_activation/ones_like/Shape:output:0EDeepSetsInvQuantised/sequential/q_activation/ones_like/Const:output:0*
T0*+
_output_shapes
:          ╦
2DeepSetsInvQuantised/sequential/q_activation/sub_2Sub7DeepSetsInvQuantised/sequential/q_activation/Cast_1:y:06DeepSetsInvQuantised/sequential/q_activation/Pow_2:z:0*
T0*
_output_shapes
: ц
0DeepSetsInvQuantised/sequential/q_activation/mulMul?DeepSetsInvQuantised/sequential/q_activation/ones_like:output:06DeepSetsInvQuantised/sequential/q_activation/sub_2:z:0*
T0*+
_output_shapes
:          к
5DeepSetsInvQuantised/sequential/q_activation/SelectV2SelectV2:DeepSetsInvQuantised/sequential/q_activation/LessEqual:z:0?DeepSetsInvQuantised/sequential/q_activation/Relu:activations:04DeepSetsInvQuantised/sequential/q_activation/mul:z:0*
T0*+
_output_shapes
:          р
2DeepSetsInvQuantised/sequential/q_activation/mul_1Mul8DeepSetsInvQuantised/sequential/q_dense/BiasAdd:output:05DeepSetsInvQuantised/sequential/q_activation/Cast:y:0*
T0*+
_output_shapes
:          ц
4DeepSetsInvQuantised/sequential/q_activation/truedivRealDiv6DeepSetsInvQuantised/sequential/q_activation/mul_1:z:07DeepSetsInvQuantised/sequential/q_activation/Cast_1:y:0*
T0*+
_output_shapes
:          з
0DeepSetsInvQuantised/sequential/q_activation/NegNeg8DeepSetsInvQuantised/sequential/q_activation/truediv:z:0*
T0*+
_output_shapes
:          л
2DeepSetsInvQuantised/sequential/q_activation/RoundRound8DeepSetsInvQuantised/sequential/q_activation/truediv:z:0*
T0*+
_output_shapes
:          ▌
0DeepSetsInvQuantised/sequential/q_activation/addAddV24DeepSetsInvQuantised/sequential/q_activation/Neg:y:06DeepSetsInvQuantised/sequential/q_activation/Round:y:0*
T0*+
_output_shapes
:          ╡
9DeepSetsInvQuantised/sequential/q_activation/StopGradientStopGradient4DeepSetsInvQuantised/sequential/q_activation/add:z:0*
T0*+
_output_shapes
:          я
2DeepSetsInvQuantised/sequential/q_activation/add_1AddV28DeepSetsInvQuantised/sequential/q_activation/truediv:z:0BDeepSetsInvQuantised/sequential/q_activation/StopGradient:output:0*
T0*+
_output_shapes
:          ц
6DeepSetsInvQuantised/sequential/q_activation/truediv_1RealDiv6DeepSetsInvQuantised/sequential/q_activation/add_1:z:05DeepSetsInvQuantised/sequential/q_activation/Cast:y:0*
T0*+
_output_shapes
:          }
8DeepSetsInvQuantised/sequential/q_activation/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?▄
6DeepSetsInvQuantised/sequential/q_activation/truediv_2RealDivADeepSetsInvQuantised/sequential/q_activation/truediv_2/x:output:05DeepSetsInvQuantised/sequential/q_activation/Cast:y:0*
T0*
_output_shapes
: y
4DeepSetsInvQuantised/sequential/q_activation/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?╒
2DeepSetsInvQuantised/sequential/q_activation/sub_3Sub=DeepSetsInvQuantised/sequential/q_activation/sub_3/x:output:0:DeepSetsInvQuantised/sequential/q_activation/truediv_2:z:0*
T0*
_output_shapes
: ў
BDeepSetsInvQuantised/sequential/q_activation/clip_by_value/MinimumMinimum:DeepSetsInvQuantised/sequential/q_activation/truediv_1:z:06DeepSetsInvQuantised/sequential/q_activation/sub_3:z:0*
T0*+
_output_shapes
:          Б
<DeepSetsInvQuantised/sequential/q_activation/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    К
:DeepSetsInvQuantised/sequential/q_activation/clip_by_valueMaximumFDeepSetsInvQuantised/sequential/q_activation/clip_by_value/Minimum:z:0EDeepSetsInvQuantised/sequential/q_activation/clip_by_value/y:output:0*
T0*+
_output_shapes
:          ш
2DeepSetsInvQuantised/sequential/q_activation/mul_2Mul7DeepSetsInvQuantised/sequential/q_activation/Cast_1:y:0>DeepSetsInvQuantised/sequential/q_activation/clip_by_value:z:0*
T0*+
_output_shapes
:          п
2DeepSetsInvQuantised/sequential/q_activation/Neg_1Neg>DeepSetsInvQuantised/sequential/q_activation/SelectV2:output:0*
T0*+
_output_shapes
:          с
2DeepSetsInvQuantised/sequential/q_activation/add_2AddV26DeepSetsInvQuantised/sequential/q_activation/Neg_1:y:06DeepSetsInvQuantised/sequential/q_activation/mul_2:z:0*
T0*+
_output_shapes
:          y
4DeepSetsInvQuantised/sequential/q_activation/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?ц
2DeepSetsInvQuantised/sequential/q_activation/mul_3Mul=DeepSetsInvQuantised/sequential/q_activation/mul_3/x:output:06DeepSetsInvQuantised/sequential/q_activation/add_2:z:0*
T0*+
_output_shapes
:          ╣
;DeepSetsInvQuantised/sequential/q_activation/StopGradient_1StopGradient6DeepSetsInvQuantised/sequential/q_activation/mul_3:z:0*
T0*+
_output_shapes
:          ў
2DeepSetsInvQuantised/sequential/q_activation/add_3AddV2>DeepSetsInvQuantised/sequential/q_activation/SelectV2:output:0DDeepSetsInvQuantised/sequential/q_activation/StopGradient_1:output:0*
T0*+
_output_shapes
:          q
/DeepSetsInvQuantised/sequential/q_dense_1/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :q
/DeepSetsInvQuantised/sequential/q_dense_1/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : ╔
-DeepSetsInvQuantised/sequential/q_dense_1/PowPow8DeepSetsInvQuantised/sequential/q_dense_1/Pow/x:output:08DeepSetsInvQuantised/sequential/q_dense_1/Pow/y:output:0*
T0*
_output_shapes
: Щ
.DeepSetsInvQuantised/sequential/q_dense_1/CastCast1DeepSetsInvQuantised/sequential/q_dense_1/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: ║
8DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOpReadVariableOpAdeepsetsinvquantised_sequential_q_dense_1_readvariableop_resource*
_output_shapes

:  *
dtype0t
/DeepSetsInvQuantised/sequential/q_dense_1/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АF┘
-DeepSetsInvQuantised/sequential/q_dense_1/mulMul@DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp:value:08DeepSetsInvQuantised/sequential/q_dense_1/mul/y:output:0*
T0*
_output_shapes

:  ╠
1DeepSetsInvQuantised/sequential/q_dense_1/truedivRealDiv1DeepSetsInvQuantised/sequential/q_dense_1/mul:z:02DeepSetsInvQuantised/sequential/q_dense_1/Cast:y:0*
T0*
_output_shapes

:  Ф
-DeepSetsInvQuantised/sequential/q_dense_1/NegNeg5DeepSetsInvQuantised/sequential/q_dense_1/truediv:z:0*
T0*
_output_shapes

:  Ш
/DeepSetsInvQuantised/sequential/q_dense_1/RoundRound5DeepSetsInvQuantised/sequential/q_dense_1/truediv:z:0*
T0*
_output_shapes

:  ╟
-DeepSetsInvQuantised/sequential/q_dense_1/addAddV21DeepSetsInvQuantised/sequential/q_dense_1/Neg:y:03DeepSetsInvQuantised/sequential/q_dense_1/Round:y:0*
T0*
_output_shapes

:  в
6DeepSetsInvQuantised/sequential/q_dense_1/StopGradientStopGradient1DeepSetsInvQuantised/sequential/q_dense_1/add:z:0*
T0*
_output_shapes

:  ┘
/DeepSetsInvQuantised/sequential/q_dense_1/add_1AddV25DeepSetsInvQuantised/sequential/q_dense_1/truediv:z:0?DeepSetsInvQuantised/sequential/q_dense_1/StopGradient:output:0*
T0*
_output_shapes

:  Ж
ADeepSetsInvQuantised/sequential/q_dense_1/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * №FЇ
?DeepSetsInvQuantised/sequential/q_dense_1/clip_by_value/MinimumMinimum3DeepSetsInvQuantised/sequential/q_dense_1/add_1:z:0JDeepSetsInvQuantised/sequential/q_dense_1/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  ~
9DeepSetsInvQuantised/sequential/q_dense_1/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞Ї
7DeepSetsInvQuantised/sequential/q_dense_1/clip_by_valueMaximumCDeepSetsInvQuantised/sequential/q_dense_1/clip_by_value/Minimum:z:0BDeepSetsInvQuantised/sequential/q_dense_1/clip_by_value/y:output:0*
T0*
_output_shapes

:  ╨
/DeepSetsInvQuantised/sequential/q_dense_1/mul_1Mul2DeepSetsInvQuantised/sequential/q_dense_1/Cast:y:0;DeepSetsInvQuantised/sequential/q_dense_1/clip_by_value:z:0*
T0*
_output_shapes

:  z
5DeepSetsInvQuantised/sequential/q_dense_1/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АF▄
3DeepSetsInvQuantised/sequential/q_dense_1/truediv_1RealDiv3DeepSetsInvQuantised/sequential/q_dense_1/mul_1:z:0>DeepSetsInvQuantised/sequential/q_dense_1/truediv_1/y:output:0*
T0*
_output_shapes

:  v
1DeepSetsInvQuantised/sequential/q_dense_1/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?╘
/DeepSetsInvQuantised/sequential/q_dense_1/mul_2Mul:DeepSetsInvQuantised/sequential/q_dense_1/mul_2/x:output:07DeepSetsInvQuantised/sequential/q_dense_1/truediv_1:z:0*
T0*
_output_shapes

:  ╝
:DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_1ReadVariableOpAdeepsetsinvquantised_sequential_q_dense_1_readvariableop_resource*
_output_shapes

:  *
dtype0г
/DeepSetsInvQuantised/sequential/q_dense_1/Neg_1NegBDeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  ╦
/DeepSetsInvQuantised/sequential/q_dense_1/add_2AddV23DeepSetsInvQuantised/sequential/q_dense_1/Neg_1:y:03DeepSetsInvQuantised/sequential/q_dense_1/mul_2:z:0*
T0*
_output_shapes

:  v
1DeepSetsInvQuantised/sequential/q_dense_1/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?╨
/DeepSetsInvQuantised/sequential/q_dense_1/mul_3Mul:DeepSetsInvQuantised/sequential/q_dense_1/mul_3/x:output:03DeepSetsInvQuantised/sequential/q_dense_1/add_2:z:0*
T0*
_output_shapes

:  ж
8DeepSetsInvQuantised/sequential/q_dense_1/StopGradient_1StopGradient3DeepSetsInvQuantised/sequential/q_dense_1/mul_3:z:0*
T0*
_output_shapes

:  ╝
:DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_2ReadVariableOpAdeepsetsinvquantised_sequential_q_dense_1_readvariableop_resource*
_output_shapes

:  *
dtype0ш
/DeepSetsInvQuantised/sequential/q_dense_1/add_3AddV2BDeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_2:value:0ADeepSetsInvQuantised/sequential/q_dense_1/StopGradient_1:output:0*
T0*
_output_shapes

:  Х
/DeepSetsInvQuantised/sequential/q_dense_1/ShapeShape6DeepSetsInvQuantised/sequential/q_activation/add_3:z:0*
T0*
_output_shapes
:е
1DeepSetsInvQuantised/sequential/q_dense_1/unstackUnpack8DeepSetsInvQuantised/sequential/q_dense_1/Shape:output:0*
T0*
_output_shapes
: : : *	
numВ
1DeepSetsInvQuantised/sequential/q_dense_1/Shape_1Const*
_output_shapes
:*
dtype0*
valueB"        з
3DeepSetsInvQuantised/sequential/q_dense_1/unstack_1Unpack:DeepSetsInvQuantised/sequential/q_dense_1/Shape_1:output:0*
T0*
_output_shapes
: : *	
numИ
7DeepSetsInvQuantised/sequential/q_dense_1/Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB"        ш
1DeepSetsInvQuantised/sequential/q_dense_1/ReshapeReshape6DeepSetsInvQuantised/sequential/q_activation/add_3:z:0@DeepSetsInvQuantised/sequential/q_dense_1/Reshape/shape:output:0*
T0*'
_output_shapes
:          Й
8DeepSetsInvQuantised/sequential/q_dense_1/transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       с
3DeepSetsInvQuantised/sequential/q_dense_1/transpose	Transpose3DeepSetsInvQuantised/sequential/q_dense_1/add_3:z:0ADeepSetsInvQuantised/sequential/q_dense_1/transpose/perm:output:0*
T0*
_output_shapes

:  К
9DeepSetsInvQuantised/sequential/q_dense_1/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"        ф
3DeepSetsInvQuantised/sequential/q_dense_1/Reshape_1Reshape7DeepSetsInvQuantised/sequential/q_dense_1/transpose:y:0BDeepSetsInvQuantised/sequential/q_dense_1/Reshape_1/shape:output:0*
T0*
_output_shapes

:  ц
0DeepSetsInvQuantised/sequential/q_dense_1/MatMulMatMul:DeepSetsInvQuantised/sequential/q_dense_1/Reshape:output:0<DeepSetsInvQuantised/sequential/q_dense_1/Reshape_1:output:0*
T0*'
_output_shapes
:          }
;DeepSetsInvQuantised/sequential/q_dense_1/Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :}
;DeepSetsInvQuantised/sequential/q_dense_1/Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : ╖
9DeepSetsInvQuantised/sequential/q_dense_1/Reshape_2/shapePack:DeepSetsInvQuantised/sequential/q_dense_1/unstack:output:0DDeepSetsInvQuantised/sequential/q_dense_1/Reshape_2/shape/1:output:0DDeepSetsInvQuantised/sequential/q_dense_1/Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:Ї
3DeepSetsInvQuantised/sequential/q_dense_1/Reshape_2Reshape:DeepSetsInvQuantised/sequential/q_dense_1/MatMul:product:0BDeepSetsInvQuantised/sequential/q_dense_1/Reshape_2/shape:output:0*
T0*+
_output_shapes
:          s
1DeepSetsInvQuantised/sequential/q_dense_1/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :s
1DeepSetsInvQuantised/sequential/q_dense_1/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : ╧
/DeepSetsInvQuantised/sequential/q_dense_1/Pow_1Pow:DeepSetsInvQuantised/sequential/q_dense_1/Pow_1/x:output:0:DeepSetsInvQuantised/sequential/q_dense_1/Pow_1/y:output:0*
T0*
_output_shapes
: Э
0DeepSetsInvQuantised/sequential/q_dense_1/Cast_1Cast3DeepSetsInvQuantised/sequential/q_dense_1/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: ║
:DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_3ReadVariableOpCdeepsetsinvquantised_sequential_q_dense_1_readvariableop_3_resource*
_output_shapes
: *
dtype0v
1DeepSetsInvQuantised/sequential/q_dense_1/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АF█
/DeepSetsInvQuantised/sequential/q_dense_1/mul_4MulBDeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_3:value:0:DeepSetsInvQuantised/sequential/q_dense_1/mul_4/y:output:0*
T0*
_output_shapes
: ╬
3DeepSetsInvQuantised/sequential/q_dense_1/truediv_2RealDiv3DeepSetsInvQuantised/sequential/q_dense_1/mul_4:z:04DeepSetsInvQuantised/sequential/q_dense_1/Cast_1:y:0*
T0*
_output_shapes
: Ф
/DeepSetsInvQuantised/sequential/q_dense_1/Neg_2Neg7DeepSetsInvQuantised/sequential/q_dense_1/truediv_2:z:0*
T0*
_output_shapes
: Ш
1DeepSetsInvQuantised/sequential/q_dense_1/Round_1Round7DeepSetsInvQuantised/sequential/q_dense_1/truediv_2:z:0*
T0*
_output_shapes
: ╔
/DeepSetsInvQuantised/sequential/q_dense_1/add_4AddV23DeepSetsInvQuantised/sequential/q_dense_1/Neg_2:y:05DeepSetsInvQuantised/sequential/q_dense_1/Round_1:y:0*
T0*
_output_shapes
: в
8DeepSetsInvQuantised/sequential/q_dense_1/StopGradient_2StopGradient3DeepSetsInvQuantised/sequential/q_dense_1/add_4:z:0*
T0*
_output_shapes
: ┘
/DeepSetsInvQuantised/sequential/q_dense_1/add_5AddV27DeepSetsInvQuantised/sequential/q_dense_1/truediv_2:z:0ADeepSetsInvQuantised/sequential/q_dense_1/StopGradient_2:output:0*
T0*
_output_shapes
: И
CDeepSetsInvQuantised/sequential/q_dense_1/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * №FЇ
ADeepSetsInvQuantised/sequential/q_dense_1/clip_by_value_1/MinimumMinimum3DeepSetsInvQuantised/sequential/q_dense_1/add_5:z:0LDeepSetsInvQuantised/sequential/q_dense_1/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: А
;DeepSetsInvQuantised/sequential/q_dense_1/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞Ў
9DeepSetsInvQuantised/sequential/q_dense_1/clip_by_value_1MaximumEDeepSetsInvQuantised/sequential/q_dense_1/clip_by_value_1/Minimum:z:0DDeepSetsInvQuantised/sequential/q_dense_1/clip_by_value_1/y:output:0*
T0*
_output_shapes
: ╨
/DeepSetsInvQuantised/sequential/q_dense_1/mul_5Mul4DeepSetsInvQuantised/sequential/q_dense_1/Cast_1:y:0=DeepSetsInvQuantised/sequential/q_dense_1/clip_by_value_1:z:0*
T0*
_output_shapes
: z
5DeepSetsInvQuantised/sequential/q_dense_1/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АF╪
3DeepSetsInvQuantised/sequential/q_dense_1/truediv_3RealDiv3DeepSetsInvQuantised/sequential/q_dense_1/mul_5:z:0>DeepSetsInvQuantised/sequential/q_dense_1/truediv_3/y:output:0*
T0*
_output_shapes
: v
1DeepSetsInvQuantised/sequential/q_dense_1/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?╨
/DeepSetsInvQuantised/sequential/q_dense_1/mul_6Mul:DeepSetsInvQuantised/sequential/q_dense_1/mul_6/x:output:07DeepSetsInvQuantised/sequential/q_dense_1/truediv_3:z:0*
T0*
_output_shapes
: ║
:DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_4ReadVariableOpCdeepsetsinvquantised_sequential_q_dense_1_readvariableop_3_resource*
_output_shapes
: *
dtype0Я
/DeepSetsInvQuantised/sequential/q_dense_1/Neg_3NegBDeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_4:value:0*
T0*
_output_shapes
: ╟
/DeepSetsInvQuantised/sequential/q_dense_1/add_6AddV23DeepSetsInvQuantised/sequential/q_dense_1/Neg_3:y:03DeepSetsInvQuantised/sequential/q_dense_1/mul_6:z:0*
T0*
_output_shapes
: v
1DeepSetsInvQuantised/sequential/q_dense_1/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?╠
/DeepSetsInvQuantised/sequential/q_dense_1/mul_7Mul:DeepSetsInvQuantised/sequential/q_dense_1/mul_7/x:output:03DeepSetsInvQuantised/sequential/q_dense_1/add_6:z:0*
T0*
_output_shapes
: в
8DeepSetsInvQuantised/sequential/q_dense_1/StopGradient_3StopGradient3DeepSetsInvQuantised/sequential/q_dense_1/mul_7:z:0*
T0*
_output_shapes
: ║
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
:          v
4DeepSetsInvQuantised/sequential/q_activation_1/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :v
4DeepSetsInvQuantised/sequential/q_activation_1/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :╪
2DeepSetsInvQuantised/sequential/q_activation_1/PowPow=DeepSetsInvQuantised/sequential/q_activation_1/Pow/x:output:0=DeepSetsInvQuantised/sequential/q_activation_1/Pow/y:output:0*
T0*
_output_shapes
: г
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
value	B : ▐
4DeepSetsInvQuantised/sequential/q_activation_1/Pow_1Pow?DeepSetsInvQuantised/sequential/q_activation_1/Pow_1/x:output:0?DeepSetsInvQuantised/sequential/q_activation_1/Pow_1/y:output:0*
T0*
_output_shapes
: з
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
value	B : п
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
 *   A╘
2DeepSetsInvQuantised/sequential/q_activation_1/subSub9DeepSetsInvQuantised/sequential/q_activation_1/Cast_2:y:0=DeepSetsInvQuantised/sequential/q_activation_1/sub/y:output:0*
T0*
_output_shapes
: ╙
4DeepSetsInvQuantised/sequential/q_activation_1/Pow_2Pow=DeepSetsInvQuantised/sequential/q_activation_1/Const:output:06DeepSetsInvQuantised/sequential/q_activation_1/sub:z:0*
T0*
_output_shapes
: ╤
4DeepSetsInvQuantised/sequential/q_activation_1/sub_1Sub9DeepSetsInvQuantised/sequential/q_activation_1/Cast_1:y:08DeepSetsInvQuantised/sequential/q_activation_1/Pow_2:z:0*
T0*
_output_shapes
: ё
8DeepSetsInvQuantised/sequential/q_activation_1/LessEqual	LessEqual:DeepSetsInvQuantised/sequential/q_dense_1/BiasAdd:output:08DeepSetsInvQuantised/sequential/q_activation_1/sub_1:z:0*
T0*+
_output_shapes
:          н
3DeepSetsInvQuantised/sequential/q_activation_1/ReluRelu:DeepSetsInvQuantised/sequential/q_dense_1/BiasAdd:output:0*
T0*+
_output_shapes
:          и
>DeepSetsInvQuantised/sequential/q_activation_1/ones_like/ShapeShape:DeepSetsInvQuantised/sequential/q_dense_1/BiasAdd:output:0*
T0*
_output_shapes
:Г
>DeepSetsInvQuantised/sequential/q_activation_1/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  А?И
8DeepSetsInvQuantised/sequential/q_activation_1/ones_likeFillGDeepSetsInvQuantised/sequential/q_activation_1/ones_like/Shape:output:0GDeepSetsInvQuantised/sequential/q_activation_1/ones_like/Const:output:0*
T0*+
_output_shapes
:          ╤
4DeepSetsInvQuantised/sequential/q_activation_1/sub_2Sub9DeepSetsInvQuantised/sequential/q_activation_1/Cast_1:y:08DeepSetsInvQuantised/sequential/q_activation_1/Pow_2:z:0*
T0*
_output_shapes
: ь
2DeepSetsInvQuantised/sequential/q_activation_1/mulMulADeepSetsInvQuantised/sequential/q_activation_1/ones_like:output:08DeepSetsInvQuantised/sequential/q_activation_1/sub_2:z:0*
T0*+
_output_shapes
:          ▓
7DeepSetsInvQuantised/sequential/q_activation_1/SelectV2SelectV2<DeepSetsInvQuantised/sequential/q_activation_1/LessEqual:z:0ADeepSetsInvQuantised/sequential/q_activation_1/Relu:activations:06DeepSetsInvQuantised/sequential/q_activation_1/mul:z:0*
T0*+
_output_shapes
:          ц
4DeepSetsInvQuantised/sequential/q_activation_1/mul_1Mul:DeepSetsInvQuantised/sequential/q_dense_1/BiasAdd:output:07DeepSetsInvQuantised/sequential/q_activation_1/Cast:y:0*
T0*+
_output_shapes
:          ь
6DeepSetsInvQuantised/sequential/q_activation_1/truedivRealDiv8DeepSetsInvQuantised/sequential/q_activation_1/mul_1:z:09DeepSetsInvQuantised/sequential/q_activation_1/Cast_1:y:0*
T0*+
_output_shapes
:          л
2DeepSetsInvQuantised/sequential/q_activation_1/NegNeg:DeepSetsInvQuantised/sequential/q_activation_1/truediv:z:0*
T0*+
_output_shapes
:          п
4DeepSetsInvQuantised/sequential/q_activation_1/RoundRound:DeepSetsInvQuantised/sequential/q_activation_1/truediv:z:0*
T0*+
_output_shapes
:          у
2DeepSetsInvQuantised/sequential/q_activation_1/addAddV26DeepSetsInvQuantised/sequential/q_activation_1/Neg:y:08DeepSetsInvQuantised/sequential/q_activation_1/Round:y:0*
T0*+
_output_shapes
:          ╣
;DeepSetsInvQuantised/sequential/q_activation_1/StopGradientStopGradient6DeepSetsInvQuantised/sequential/q_activation_1/add:z:0*
T0*+
_output_shapes
:          ї
4DeepSetsInvQuantised/sequential/q_activation_1/add_1AddV2:DeepSetsInvQuantised/sequential/q_activation_1/truediv:z:0DDeepSetsInvQuantised/sequential/q_activation_1/StopGradient:output:0*
T0*+
_output_shapes
:          ь
8DeepSetsInvQuantised/sequential/q_activation_1/truediv_1RealDiv8DeepSetsInvQuantised/sequential/q_activation_1/add_1:z:07DeepSetsInvQuantised/sequential/q_activation_1/Cast:y:0*
T0*+
_output_shapes
:          
:DeepSetsInvQuantised/sequential/q_activation_1/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?т
8DeepSetsInvQuantised/sequential/q_activation_1/truediv_2RealDivCDeepSetsInvQuantised/sequential/q_activation_1/truediv_2/x:output:07DeepSetsInvQuantised/sequential/q_activation_1/Cast:y:0*
T0*
_output_shapes
: {
6DeepSetsInvQuantised/sequential/q_activation_1/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?█
4DeepSetsInvQuantised/sequential/q_activation_1/sub_3Sub?DeepSetsInvQuantised/sequential/q_activation_1/sub_3/x:output:0<DeepSetsInvQuantised/sequential/q_activation_1/truediv_2:z:0*
T0*
_output_shapes
: ¤
DDeepSetsInvQuantised/sequential/q_activation_1/clip_by_value/MinimumMinimum<DeepSetsInvQuantised/sequential/q_activation_1/truediv_1:z:08DeepSetsInvQuantised/sequential/q_activation_1/sub_3:z:0*
T0*+
_output_shapes
:          Г
>DeepSetsInvQuantised/sequential/q_activation_1/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    Р
<DeepSetsInvQuantised/sequential/q_activation_1/clip_by_valueMaximumHDeepSetsInvQuantised/sequential/q_activation_1/clip_by_value/Minimum:z:0GDeepSetsInvQuantised/sequential/q_activation_1/clip_by_value/y:output:0*
T0*+
_output_shapes
:          ю
4DeepSetsInvQuantised/sequential/q_activation_1/mul_2Mul9DeepSetsInvQuantised/sequential/q_activation_1/Cast_1:y:0@DeepSetsInvQuantised/sequential/q_activation_1/clip_by_value:z:0*
T0*+
_output_shapes
:          │
4DeepSetsInvQuantised/sequential/q_activation_1/Neg_1Neg@DeepSetsInvQuantised/sequential/q_activation_1/SelectV2:output:0*
T0*+
_output_shapes
:          ч
4DeepSetsInvQuantised/sequential/q_activation_1/add_2AddV28DeepSetsInvQuantised/sequential/q_activation_1/Neg_1:y:08DeepSetsInvQuantised/sequential/q_activation_1/mul_2:z:0*
T0*+
_output_shapes
:          {
6DeepSetsInvQuantised/sequential/q_activation_1/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?ь
4DeepSetsInvQuantised/sequential/q_activation_1/mul_3Mul?DeepSetsInvQuantised/sequential/q_activation_1/mul_3/x:output:08DeepSetsInvQuantised/sequential/q_activation_1/add_2:z:0*
T0*+
_output_shapes
:          ╜
=DeepSetsInvQuantised/sequential/q_activation_1/StopGradient_1StopGradient8DeepSetsInvQuantised/sequential/q_activation_1/mul_3:z:0*
T0*+
_output_shapes
:          ¤
4DeepSetsInvQuantised/sequential/q_activation_1/add_3AddV2@DeepSetsInvQuantised/sequential/q_activation_1/SelectV2:output:0FDeepSetsInvQuantised/sequential/q_activation_1/StopGradient_1:output:0*
T0*+
_output_shapes
:          q
/DeepSetsInvQuantised/sequential/q_dense_2/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :q
/DeepSetsInvQuantised/sequential/q_dense_2/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : ╔
-DeepSetsInvQuantised/sequential/q_dense_2/PowPow8DeepSetsInvQuantised/sequential/q_dense_2/Pow/x:output:08DeepSetsInvQuantised/sequential/q_dense_2/Pow/y:output:0*
T0*
_output_shapes
: Щ
.DeepSetsInvQuantised/sequential/q_dense_2/CastCast1DeepSetsInvQuantised/sequential/q_dense_2/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: ║
8DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOpReadVariableOpAdeepsetsinvquantised_sequential_q_dense_2_readvariableop_resource*
_output_shapes

:  *
dtype0t
/DeepSetsInvQuantised/sequential/q_dense_2/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АF┘
-DeepSetsInvQuantised/sequential/q_dense_2/mulMul@DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp:value:08DeepSetsInvQuantised/sequential/q_dense_2/mul/y:output:0*
T0*
_output_shapes

:  ╠
1DeepSetsInvQuantised/sequential/q_dense_2/truedivRealDiv1DeepSetsInvQuantised/sequential/q_dense_2/mul:z:02DeepSetsInvQuantised/sequential/q_dense_2/Cast:y:0*
T0*
_output_shapes

:  Ф
-DeepSetsInvQuantised/sequential/q_dense_2/NegNeg5DeepSetsInvQuantised/sequential/q_dense_2/truediv:z:0*
T0*
_output_shapes

:  Ш
/DeepSetsInvQuantised/sequential/q_dense_2/RoundRound5DeepSetsInvQuantised/sequential/q_dense_2/truediv:z:0*
T0*
_output_shapes

:  ╟
-DeepSetsInvQuantised/sequential/q_dense_2/addAddV21DeepSetsInvQuantised/sequential/q_dense_2/Neg:y:03DeepSetsInvQuantised/sequential/q_dense_2/Round:y:0*
T0*
_output_shapes

:  в
6DeepSetsInvQuantised/sequential/q_dense_2/StopGradientStopGradient1DeepSetsInvQuantised/sequential/q_dense_2/add:z:0*
T0*
_output_shapes

:  ┘
/DeepSetsInvQuantised/sequential/q_dense_2/add_1AddV25DeepSetsInvQuantised/sequential/q_dense_2/truediv:z:0?DeepSetsInvQuantised/sequential/q_dense_2/StopGradient:output:0*
T0*
_output_shapes

:  Ж
ADeepSetsInvQuantised/sequential/q_dense_2/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * №FЇ
?DeepSetsInvQuantised/sequential/q_dense_2/clip_by_value/MinimumMinimum3DeepSetsInvQuantised/sequential/q_dense_2/add_1:z:0JDeepSetsInvQuantised/sequential/q_dense_2/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  ~
9DeepSetsInvQuantised/sequential/q_dense_2/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞Ї
7DeepSetsInvQuantised/sequential/q_dense_2/clip_by_valueMaximumCDeepSetsInvQuantised/sequential/q_dense_2/clip_by_value/Minimum:z:0BDeepSetsInvQuantised/sequential/q_dense_2/clip_by_value/y:output:0*
T0*
_output_shapes

:  ╨
/DeepSetsInvQuantised/sequential/q_dense_2/mul_1Mul2DeepSetsInvQuantised/sequential/q_dense_2/Cast:y:0;DeepSetsInvQuantised/sequential/q_dense_2/clip_by_value:z:0*
T0*
_output_shapes

:  z
5DeepSetsInvQuantised/sequential/q_dense_2/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АF▄
3DeepSetsInvQuantised/sequential/q_dense_2/truediv_1RealDiv3DeepSetsInvQuantised/sequential/q_dense_2/mul_1:z:0>DeepSetsInvQuantised/sequential/q_dense_2/truediv_1/y:output:0*
T0*
_output_shapes

:  v
1DeepSetsInvQuantised/sequential/q_dense_2/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?╘
/DeepSetsInvQuantised/sequential/q_dense_2/mul_2Mul:DeepSetsInvQuantised/sequential/q_dense_2/mul_2/x:output:07DeepSetsInvQuantised/sequential/q_dense_2/truediv_1:z:0*
T0*
_output_shapes

:  ╝
:DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_1ReadVariableOpAdeepsetsinvquantised_sequential_q_dense_2_readvariableop_resource*
_output_shapes

:  *
dtype0г
/DeepSetsInvQuantised/sequential/q_dense_2/Neg_1NegBDeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  ╦
/DeepSetsInvQuantised/sequential/q_dense_2/add_2AddV23DeepSetsInvQuantised/sequential/q_dense_2/Neg_1:y:03DeepSetsInvQuantised/sequential/q_dense_2/mul_2:z:0*
T0*
_output_shapes

:  v
1DeepSetsInvQuantised/sequential/q_dense_2/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?╨
/DeepSetsInvQuantised/sequential/q_dense_2/mul_3Mul:DeepSetsInvQuantised/sequential/q_dense_2/mul_3/x:output:03DeepSetsInvQuantised/sequential/q_dense_2/add_2:z:0*
T0*
_output_shapes

:  ж
8DeepSetsInvQuantised/sequential/q_dense_2/StopGradient_1StopGradient3DeepSetsInvQuantised/sequential/q_dense_2/mul_3:z:0*
T0*
_output_shapes

:  ╝
:DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_2ReadVariableOpAdeepsetsinvquantised_sequential_q_dense_2_readvariableop_resource*
_output_shapes

:  *
dtype0ш
/DeepSetsInvQuantised/sequential/q_dense_2/add_3AddV2BDeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_2:value:0ADeepSetsInvQuantised/sequential/q_dense_2/StopGradient_1:output:0*
T0*
_output_shapes

:  Ч
/DeepSetsInvQuantised/sequential/q_dense_2/ShapeShape8DeepSetsInvQuantised/sequential/q_activation_1/add_3:z:0*
T0*
_output_shapes
:е
1DeepSetsInvQuantised/sequential/q_dense_2/unstackUnpack8DeepSetsInvQuantised/sequential/q_dense_2/Shape:output:0*
T0*
_output_shapes
: : : *	
numВ
1DeepSetsInvQuantised/sequential/q_dense_2/Shape_1Const*
_output_shapes
:*
dtype0*
valueB"        з
3DeepSetsInvQuantised/sequential/q_dense_2/unstack_1Unpack:DeepSetsInvQuantised/sequential/q_dense_2/Shape_1:output:0*
T0*
_output_shapes
: : *	
numИ
7DeepSetsInvQuantised/sequential/q_dense_2/Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB"        ъ
1DeepSetsInvQuantised/sequential/q_dense_2/ReshapeReshape8DeepSetsInvQuantised/sequential/q_activation_1/add_3:z:0@DeepSetsInvQuantised/sequential/q_dense_2/Reshape/shape:output:0*
T0*'
_output_shapes
:          Й
8DeepSetsInvQuantised/sequential/q_dense_2/transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       с
3DeepSetsInvQuantised/sequential/q_dense_2/transpose	Transpose3DeepSetsInvQuantised/sequential/q_dense_2/add_3:z:0ADeepSetsInvQuantised/sequential/q_dense_2/transpose/perm:output:0*
T0*
_output_shapes

:  К
9DeepSetsInvQuantised/sequential/q_dense_2/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"        ф
3DeepSetsInvQuantised/sequential/q_dense_2/Reshape_1Reshape7DeepSetsInvQuantised/sequential/q_dense_2/transpose:y:0BDeepSetsInvQuantised/sequential/q_dense_2/Reshape_1/shape:output:0*
T0*
_output_shapes

:  ц
0DeepSetsInvQuantised/sequential/q_dense_2/MatMulMatMul:DeepSetsInvQuantised/sequential/q_dense_2/Reshape:output:0<DeepSetsInvQuantised/sequential/q_dense_2/Reshape_1:output:0*
T0*'
_output_shapes
:          }
;DeepSetsInvQuantised/sequential/q_dense_2/Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :}
;DeepSetsInvQuantised/sequential/q_dense_2/Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : ╖
9DeepSetsInvQuantised/sequential/q_dense_2/Reshape_2/shapePack:DeepSetsInvQuantised/sequential/q_dense_2/unstack:output:0DDeepSetsInvQuantised/sequential/q_dense_2/Reshape_2/shape/1:output:0DDeepSetsInvQuantised/sequential/q_dense_2/Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:Ї
3DeepSetsInvQuantised/sequential/q_dense_2/Reshape_2Reshape:DeepSetsInvQuantised/sequential/q_dense_2/MatMul:product:0BDeepSetsInvQuantised/sequential/q_dense_2/Reshape_2/shape:output:0*
T0*+
_output_shapes
:          s
1DeepSetsInvQuantised/sequential/q_dense_2/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :s
1DeepSetsInvQuantised/sequential/q_dense_2/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : ╧
/DeepSetsInvQuantised/sequential/q_dense_2/Pow_1Pow:DeepSetsInvQuantised/sequential/q_dense_2/Pow_1/x:output:0:DeepSetsInvQuantised/sequential/q_dense_2/Pow_1/y:output:0*
T0*
_output_shapes
: Э
0DeepSetsInvQuantised/sequential/q_dense_2/Cast_1Cast3DeepSetsInvQuantised/sequential/q_dense_2/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: ║
:DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_3ReadVariableOpCdeepsetsinvquantised_sequential_q_dense_2_readvariableop_3_resource*
_output_shapes
: *
dtype0v
1DeepSetsInvQuantised/sequential/q_dense_2/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АF█
/DeepSetsInvQuantised/sequential/q_dense_2/mul_4MulBDeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_3:value:0:DeepSetsInvQuantised/sequential/q_dense_2/mul_4/y:output:0*
T0*
_output_shapes
: ╬
3DeepSetsInvQuantised/sequential/q_dense_2/truediv_2RealDiv3DeepSetsInvQuantised/sequential/q_dense_2/mul_4:z:04DeepSetsInvQuantised/sequential/q_dense_2/Cast_1:y:0*
T0*
_output_shapes
: Ф
/DeepSetsInvQuantised/sequential/q_dense_2/Neg_2Neg7DeepSetsInvQuantised/sequential/q_dense_2/truediv_2:z:0*
T0*
_output_shapes
: Ш
1DeepSetsInvQuantised/sequential/q_dense_2/Round_1Round7DeepSetsInvQuantised/sequential/q_dense_2/truediv_2:z:0*
T0*
_output_shapes
: ╔
/DeepSetsInvQuantised/sequential/q_dense_2/add_4AddV23DeepSetsInvQuantised/sequential/q_dense_2/Neg_2:y:05DeepSetsInvQuantised/sequential/q_dense_2/Round_1:y:0*
T0*
_output_shapes
: в
8DeepSetsInvQuantised/sequential/q_dense_2/StopGradient_2StopGradient3DeepSetsInvQuantised/sequential/q_dense_2/add_4:z:0*
T0*
_output_shapes
: ┘
/DeepSetsInvQuantised/sequential/q_dense_2/add_5AddV27DeepSetsInvQuantised/sequential/q_dense_2/truediv_2:z:0ADeepSetsInvQuantised/sequential/q_dense_2/StopGradient_2:output:0*
T0*
_output_shapes
: И
CDeepSetsInvQuantised/sequential/q_dense_2/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * №FЇ
ADeepSetsInvQuantised/sequential/q_dense_2/clip_by_value_1/MinimumMinimum3DeepSetsInvQuantised/sequential/q_dense_2/add_5:z:0LDeepSetsInvQuantised/sequential/q_dense_2/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: А
;DeepSetsInvQuantised/sequential/q_dense_2/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞Ў
9DeepSetsInvQuantised/sequential/q_dense_2/clip_by_value_1MaximumEDeepSetsInvQuantised/sequential/q_dense_2/clip_by_value_1/Minimum:z:0DDeepSetsInvQuantised/sequential/q_dense_2/clip_by_value_1/y:output:0*
T0*
_output_shapes
: ╨
/DeepSetsInvQuantised/sequential/q_dense_2/mul_5Mul4DeepSetsInvQuantised/sequential/q_dense_2/Cast_1:y:0=DeepSetsInvQuantised/sequential/q_dense_2/clip_by_value_1:z:0*
T0*
_output_shapes
: z
5DeepSetsInvQuantised/sequential/q_dense_2/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АF╪
3DeepSetsInvQuantised/sequential/q_dense_2/truediv_3RealDiv3DeepSetsInvQuantised/sequential/q_dense_2/mul_5:z:0>DeepSetsInvQuantised/sequential/q_dense_2/truediv_3/y:output:0*
T0*
_output_shapes
: v
1DeepSetsInvQuantised/sequential/q_dense_2/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?╨
/DeepSetsInvQuantised/sequential/q_dense_2/mul_6Mul:DeepSetsInvQuantised/sequential/q_dense_2/mul_6/x:output:07DeepSetsInvQuantised/sequential/q_dense_2/truediv_3:z:0*
T0*
_output_shapes
: ║
:DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_4ReadVariableOpCdeepsetsinvquantised_sequential_q_dense_2_readvariableop_3_resource*
_output_shapes
: *
dtype0Я
/DeepSetsInvQuantised/sequential/q_dense_2/Neg_3NegBDeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_4:value:0*
T0*
_output_shapes
: ╟
/DeepSetsInvQuantised/sequential/q_dense_2/add_6AddV23DeepSetsInvQuantised/sequential/q_dense_2/Neg_3:y:03DeepSetsInvQuantised/sequential/q_dense_2/mul_6:z:0*
T0*
_output_shapes
: v
1DeepSetsInvQuantised/sequential/q_dense_2/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?╠
/DeepSetsInvQuantised/sequential/q_dense_2/mul_7Mul:DeepSetsInvQuantised/sequential/q_dense_2/mul_7/x:output:03DeepSetsInvQuantised/sequential/q_dense_2/add_6:z:0*
T0*
_output_shapes
: в
8DeepSetsInvQuantised/sequential/q_dense_2/StopGradient_3StopGradient3DeepSetsInvQuantised/sequential/q_dense_2/mul_7:z:0*
T0*
_output_shapes
: ║
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
:          v
4DeepSetsInvQuantised/sequential/q_activation_2/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :v
4DeepSetsInvQuantised/sequential/q_activation_2/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :╪
2DeepSetsInvQuantised/sequential/q_activation_2/PowPow=DeepSetsInvQuantised/sequential/q_activation_2/Pow/x:output:0=DeepSetsInvQuantised/sequential/q_activation_2/Pow/y:output:0*
T0*
_output_shapes
: г
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
value	B : ▐
4DeepSetsInvQuantised/sequential/q_activation_2/Pow_1Pow?DeepSetsInvQuantised/sequential/q_activation_2/Pow_1/x:output:0?DeepSetsInvQuantised/sequential/q_activation_2/Pow_1/y:output:0*
T0*
_output_shapes
: з
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
value	B : п
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
 *   A╘
2DeepSetsInvQuantised/sequential/q_activation_2/subSub9DeepSetsInvQuantised/sequential/q_activation_2/Cast_2:y:0=DeepSetsInvQuantised/sequential/q_activation_2/sub/y:output:0*
T0*
_output_shapes
: ╙
4DeepSetsInvQuantised/sequential/q_activation_2/Pow_2Pow=DeepSetsInvQuantised/sequential/q_activation_2/Const:output:06DeepSetsInvQuantised/sequential/q_activation_2/sub:z:0*
T0*
_output_shapes
: ╤
4DeepSetsInvQuantised/sequential/q_activation_2/sub_1Sub9DeepSetsInvQuantised/sequential/q_activation_2/Cast_1:y:08DeepSetsInvQuantised/sequential/q_activation_2/Pow_2:z:0*
T0*
_output_shapes
: ё
8DeepSetsInvQuantised/sequential/q_activation_2/LessEqual	LessEqual:DeepSetsInvQuantised/sequential/q_dense_2/BiasAdd:output:08DeepSetsInvQuantised/sequential/q_activation_2/sub_1:z:0*
T0*+
_output_shapes
:          н
3DeepSetsInvQuantised/sequential/q_activation_2/ReluRelu:DeepSetsInvQuantised/sequential/q_dense_2/BiasAdd:output:0*
T0*+
_output_shapes
:          и
>DeepSetsInvQuantised/sequential/q_activation_2/ones_like/ShapeShape:DeepSetsInvQuantised/sequential/q_dense_2/BiasAdd:output:0*
T0*
_output_shapes
:Г
>DeepSetsInvQuantised/sequential/q_activation_2/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  А?И
8DeepSetsInvQuantised/sequential/q_activation_2/ones_likeFillGDeepSetsInvQuantised/sequential/q_activation_2/ones_like/Shape:output:0GDeepSetsInvQuantised/sequential/q_activation_2/ones_like/Const:output:0*
T0*+
_output_shapes
:          ╤
4DeepSetsInvQuantised/sequential/q_activation_2/sub_2Sub9DeepSetsInvQuantised/sequential/q_activation_2/Cast_1:y:08DeepSetsInvQuantised/sequential/q_activation_2/Pow_2:z:0*
T0*
_output_shapes
: ь
2DeepSetsInvQuantised/sequential/q_activation_2/mulMulADeepSetsInvQuantised/sequential/q_activation_2/ones_like:output:08DeepSetsInvQuantised/sequential/q_activation_2/sub_2:z:0*
T0*+
_output_shapes
:          ▓
7DeepSetsInvQuantised/sequential/q_activation_2/SelectV2SelectV2<DeepSetsInvQuantised/sequential/q_activation_2/LessEqual:z:0ADeepSetsInvQuantised/sequential/q_activation_2/Relu:activations:06DeepSetsInvQuantised/sequential/q_activation_2/mul:z:0*
T0*+
_output_shapes
:          ц
4DeepSetsInvQuantised/sequential/q_activation_2/mul_1Mul:DeepSetsInvQuantised/sequential/q_dense_2/BiasAdd:output:07DeepSetsInvQuantised/sequential/q_activation_2/Cast:y:0*
T0*+
_output_shapes
:          ь
6DeepSetsInvQuantised/sequential/q_activation_2/truedivRealDiv8DeepSetsInvQuantised/sequential/q_activation_2/mul_1:z:09DeepSetsInvQuantised/sequential/q_activation_2/Cast_1:y:0*
T0*+
_output_shapes
:          л
2DeepSetsInvQuantised/sequential/q_activation_2/NegNeg:DeepSetsInvQuantised/sequential/q_activation_2/truediv:z:0*
T0*+
_output_shapes
:          п
4DeepSetsInvQuantised/sequential/q_activation_2/RoundRound:DeepSetsInvQuantised/sequential/q_activation_2/truediv:z:0*
T0*+
_output_shapes
:          у
2DeepSetsInvQuantised/sequential/q_activation_2/addAddV26DeepSetsInvQuantised/sequential/q_activation_2/Neg:y:08DeepSetsInvQuantised/sequential/q_activation_2/Round:y:0*
T0*+
_output_shapes
:          ╣
;DeepSetsInvQuantised/sequential/q_activation_2/StopGradientStopGradient6DeepSetsInvQuantised/sequential/q_activation_2/add:z:0*
T0*+
_output_shapes
:          ї
4DeepSetsInvQuantised/sequential/q_activation_2/add_1AddV2:DeepSetsInvQuantised/sequential/q_activation_2/truediv:z:0DDeepSetsInvQuantised/sequential/q_activation_2/StopGradient:output:0*
T0*+
_output_shapes
:          ь
8DeepSetsInvQuantised/sequential/q_activation_2/truediv_1RealDiv8DeepSetsInvQuantised/sequential/q_activation_2/add_1:z:07DeepSetsInvQuantised/sequential/q_activation_2/Cast:y:0*
T0*+
_output_shapes
:          
:DeepSetsInvQuantised/sequential/q_activation_2/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?т
8DeepSetsInvQuantised/sequential/q_activation_2/truediv_2RealDivCDeepSetsInvQuantised/sequential/q_activation_2/truediv_2/x:output:07DeepSetsInvQuantised/sequential/q_activation_2/Cast:y:0*
T0*
_output_shapes
: {
6DeepSetsInvQuantised/sequential/q_activation_2/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?█
4DeepSetsInvQuantised/sequential/q_activation_2/sub_3Sub?DeepSetsInvQuantised/sequential/q_activation_2/sub_3/x:output:0<DeepSetsInvQuantised/sequential/q_activation_2/truediv_2:z:0*
T0*
_output_shapes
: ¤
DDeepSetsInvQuantised/sequential/q_activation_2/clip_by_value/MinimumMinimum<DeepSetsInvQuantised/sequential/q_activation_2/truediv_1:z:08DeepSetsInvQuantised/sequential/q_activation_2/sub_3:z:0*
T0*+
_output_shapes
:          Г
>DeepSetsInvQuantised/sequential/q_activation_2/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    Р
<DeepSetsInvQuantised/sequential/q_activation_2/clip_by_valueMaximumHDeepSetsInvQuantised/sequential/q_activation_2/clip_by_value/Minimum:z:0GDeepSetsInvQuantised/sequential/q_activation_2/clip_by_value/y:output:0*
T0*+
_output_shapes
:          ю
4DeepSetsInvQuantised/sequential/q_activation_2/mul_2Mul9DeepSetsInvQuantised/sequential/q_activation_2/Cast_1:y:0@DeepSetsInvQuantised/sequential/q_activation_2/clip_by_value:z:0*
T0*+
_output_shapes
:          │
4DeepSetsInvQuantised/sequential/q_activation_2/Neg_1Neg@DeepSetsInvQuantised/sequential/q_activation_2/SelectV2:output:0*
T0*+
_output_shapes
:          ч
4DeepSetsInvQuantised/sequential/q_activation_2/add_2AddV28DeepSetsInvQuantised/sequential/q_activation_2/Neg_1:y:08DeepSetsInvQuantised/sequential/q_activation_2/mul_2:z:0*
T0*+
_output_shapes
:          {
6DeepSetsInvQuantised/sequential/q_activation_2/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?ь
4DeepSetsInvQuantised/sequential/q_activation_2/mul_3Mul?DeepSetsInvQuantised/sequential/q_activation_2/mul_3/x:output:08DeepSetsInvQuantised/sequential/q_activation_2/add_2:z:0*
T0*+
_output_shapes
:          ╜
=DeepSetsInvQuantised/sequential/q_activation_2/StopGradient_1StopGradient8DeepSetsInvQuantised/sequential/q_activation_2/mul_3:z:0*
T0*+
_output_shapes
:          ¤
4DeepSetsInvQuantised/sequential/q_activation_2/add_3AddV2@DeepSetsInvQuantised/sequential/q_activation_2/SelectV2:output:0FDeepSetsInvQuantised/sequential/q_activation_2/StopGradient_1:output:0*
T0*+
_output_shapes
:          m
+DeepSetsInvQuantised/Mean/reduction_indicesConst*
_output_shapes
: *
dtype0*
value	B :├
DeepSetsInvQuantised/MeanMean8DeepSetsInvQuantised/sequential/q_activation_2/add_3:z:04DeepSetsInvQuantised/Mean/reduction_indices:output:0*
T0*'
_output_shapes
:          s
1DeepSetsInvQuantised/sequential_1/q_dense_3/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :s
1DeepSetsInvQuantised/sequential_1/q_dense_3/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : ╧
/DeepSetsInvQuantised/sequential_1/q_dense_3/PowPow:DeepSetsInvQuantised/sequential_1/q_dense_3/Pow/x:output:0:DeepSetsInvQuantised/sequential_1/q_dense_3/Pow/y:output:0*
T0*
_output_shapes
: Э
0DeepSetsInvQuantised/sequential_1/q_dense_3/CastCast3DeepSetsInvQuantised/sequential_1/q_dense_3/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: ╛
:DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOpReadVariableOpCdeepsetsinvquantised_sequential_1_q_dense_3_readvariableop_resource*
_output_shapes

:  *
dtype0v
1DeepSetsInvQuantised/sequential_1/q_dense_3/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АF▀
/DeepSetsInvQuantised/sequential_1/q_dense_3/mulMulBDeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp:value:0:DeepSetsInvQuantised/sequential_1/q_dense_3/mul/y:output:0*
T0*
_output_shapes

:  ╥
3DeepSetsInvQuantised/sequential_1/q_dense_3/truedivRealDiv3DeepSetsInvQuantised/sequential_1/q_dense_3/mul:z:04DeepSetsInvQuantised/sequential_1/q_dense_3/Cast:y:0*
T0*
_output_shapes

:  Ш
/DeepSetsInvQuantised/sequential_1/q_dense_3/NegNeg7DeepSetsInvQuantised/sequential_1/q_dense_3/truediv:z:0*
T0*
_output_shapes

:  Ь
1DeepSetsInvQuantised/sequential_1/q_dense_3/RoundRound7DeepSetsInvQuantised/sequential_1/q_dense_3/truediv:z:0*
T0*
_output_shapes

:  ═
/DeepSetsInvQuantised/sequential_1/q_dense_3/addAddV23DeepSetsInvQuantised/sequential_1/q_dense_3/Neg:y:05DeepSetsInvQuantised/sequential_1/q_dense_3/Round:y:0*
T0*
_output_shapes

:  ж
8DeepSetsInvQuantised/sequential_1/q_dense_3/StopGradientStopGradient3DeepSetsInvQuantised/sequential_1/q_dense_3/add:z:0*
T0*
_output_shapes

:  ▀
1DeepSetsInvQuantised/sequential_1/q_dense_3/add_1AddV27DeepSetsInvQuantised/sequential_1/q_dense_3/truediv:z:0ADeepSetsInvQuantised/sequential_1/q_dense_3/StopGradient:output:0*
T0*
_output_shapes

:  И
CDeepSetsInvQuantised/sequential_1/q_dense_3/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * №F·
ADeepSetsInvQuantised/sequential_1/q_dense_3/clip_by_value/MinimumMinimum5DeepSetsInvQuantised/sequential_1/q_dense_3/add_1:z:0LDeepSetsInvQuantised/sequential_1/q_dense_3/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  А
;DeepSetsInvQuantised/sequential_1/q_dense_3/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞·
9DeepSetsInvQuantised/sequential_1/q_dense_3/clip_by_valueMaximumEDeepSetsInvQuantised/sequential_1/q_dense_3/clip_by_value/Minimum:z:0DDeepSetsInvQuantised/sequential_1/q_dense_3/clip_by_value/y:output:0*
T0*
_output_shapes

:  ╓
1DeepSetsInvQuantised/sequential_1/q_dense_3/mul_1Mul4DeepSetsInvQuantised/sequential_1/q_dense_3/Cast:y:0=DeepSetsInvQuantised/sequential_1/q_dense_3/clip_by_value:z:0*
T0*
_output_shapes

:  |
7DeepSetsInvQuantised/sequential_1/q_dense_3/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFт
5DeepSetsInvQuantised/sequential_1/q_dense_3/truediv_1RealDiv5DeepSetsInvQuantised/sequential_1/q_dense_3/mul_1:z:0@DeepSetsInvQuantised/sequential_1/q_dense_3/truediv_1/y:output:0*
T0*
_output_shapes

:  x
3DeepSetsInvQuantised/sequential_1/q_dense_3/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?┌
1DeepSetsInvQuantised/sequential_1/q_dense_3/mul_2Mul<DeepSetsInvQuantised/sequential_1/q_dense_3/mul_2/x:output:09DeepSetsInvQuantised/sequential_1/q_dense_3/truediv_1:z:0*
T0*
_output_shapes

:  └
<DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_1ReadVariableOpCdeepsetsinvquantised_sequential_1_q_dense_3_readvariableop_resource*
_output_shapes

:  *
dtype0з
1DeepSetsInvQuantised/sequential_1/q_dense_3/Neg_1NegDDeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  ╤
1DeepSetsInvQuantised/sequential_1/q_dense_3/add_2AddV25DeepSetsInvQuantised/sequential_1/q_dense_3/Neg_1:y:05DeepSetsInvQuantised/sequential_1/q_dense_3/mul_2:z:0*
T0*
_output_shapes

:  x
3DeepSetsInvQuantised/sequential_1/q_dense_3/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?╓
1DeepSetsInvQuantised/sequential_1/q_dense_3/mul_3Mul<DeepSetsInvQuantised/sequential_1/q_dense_3/mul_3/x:output:05DeepSetsInvQuantised/sequential_1/q_dense_3/add_2:z:0*
T0*
_output_shapes

:  к
:DeepSetsInvQuantised/sequential_1/q_dense_3/StopGradient_1StopGradient5DeepSetsInvQuantised/sequential_1/q_dense_3/mul_3:z:0*
T0*
_output_shapes

:  └
<DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_2ReadVariableOpCdeepsetsinvquantised_sequential_1_q_dense_3_readvariableop_resource*
_output_shapes

:  *
dtype0ю
1DeepSetsInvQuantised/sequential_1/q_dense_3/add_3AddV2DDeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_2:value:0CDeepSetsInvQuantised/sequential_1/q_dense_3/StopGradient_1:output:0*
T0*
_output_shapes

:  ╔
2DeepSetsInvQuantised/sequential_1/q_dense_3/MatMulMatMul"DeepSetsInvQuantised/Mean:output:05DeepSetsInvQuantised/sequential_1/q_dense_3/add_3:z:0*
T0*'
_output_shapes
:          u
3DeepSetsInvQuantised/sequential_1/q_dense_3/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :u
3DeepSetsInvQuantised/sequential_1/q_dense_3/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : ╒
1DeepSetsInvQuantised/sequential_1/q_dense_3/Pow_1Pow<DeepSetsInvQuantised/sequential_1/q_dense_3/Pow_1/x:output:0<DeepSetsInvQuantised/sequential_1/q_dense_3/Pow_1/y:output:0*
T0*
_output_shapes
: б
2DeepSetsInvQuantised/sequential_1/q_dense_3/Cast_1Cast5DeepSetsInvQuantised/sequential_1/q_dense_3/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: ╛
<DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_3ReadVariableOpEdeepsetsinvquantised_sequential_1_q_dense_3_readvariableop_3_resource*
_output_shapes
: *
dtype0x
3DeepSetsInvQuantised/sequential_1/q_dense_3/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFс
1DeepSetsInvQuantised/sequential_1/q_dense_3/mul_4MulDDeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_3:value:0<DeepSetsInvQuantised/sequential_1/q_dense_3/mul_4/y:output:0*
T0*
_output_shapes
: ╘
5DeepSetsInvQuantised/sequential_1/q_dense_3/truediv_2RealDiv5DeepSetsInvQuantised/sequential_1/q_dense_3/mul_4:z:06DeepSetsInvQuantised/sequential_1/q_dense_3/Cast_1:y:0*
T0*
_output_shapes
: Ш
1DeepSetsInvQuantised/sequential_1/q_dense_3/Neg_2Neg9DeepSetsInvQuantised/sequential_1/q_dense_3/truediv_2:z:0*
T0*
_output_shapes
: Ь
3DeepSetsInvQuantised/sequential_1/q_dense_3/Round_1Round9DeepSetsInvQuantised/sequential_1/q_dense_3/truediv_2:z:0*
T0*
_output_shapes
: ╧
1DeepSetsInvQuantised/sequential_1/q_dense_3/add_4AddV25DeepSetsInvQuantised/sequential_1/q_dense_3/Neg_2:y:07DeepSetsInvQuantised/sequential_1/q_dense_3/Round_1:y:0*
T0*
_output_shapes
: ж
:DeepSetsInvQuantised/sequential_1/q_dense_3/StopGradient_2StopGradient5DeepSetsInvQuantised/sequential_1/q_dense_3/add_4:z:0*
T0*
_output_shapes
: ▀
1DeepSetsInvQuantised/sequential_1/q_dense_3/add_5AddV29DeepSetsInvQuantised/sequential_1/q_dense_3/truediv_2:z:0CDeepSetsInvQuantised/sequential_1/q_dense_3/StopGradient_2:output:0*
T0*
_output_shapes
: К
EDeepSetsInvQuantised/sequential_1/q_dense_3/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * №F·
CDeepSetsInvQuantised/sequential_1/q_dense_3/clip_by_value_1/MinimumMinimum5DeepSetsInvQuantised/sequential_1/q_dense_3/add_5:z:0NDeepSetsInvQuantised/sequential_1/q_dense_3/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: В
=DeepSetsInvQuantised/sequential_1/q_dense_3/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞№
;DeepSetsInvQuantised/sequential_1/q_dense_3/clip_by_value_1MaximumGDeepSetsInvQuantised/sequential_1/q_dense_3/clip_by_value_1/Minimum:z:0FDeepSetsInvQuantised/sequential_1/q_dense_3/clip_by_value_1/y:output:0*
T0*
_output_shapes
: ╓
1DeepSetsInvQuantised/sequential_1/q_dense_3/mul_5Mul6DeepSetsInvQuantised/sequential_1/q_dense_3/Cast_1:y:0?DeepSetsInvQuantised/sequential_1/q_dense_3/clip_by_value_1:z:0*
T0*
_output_shapes
: |
7DeepSetsInvQuantised/sequential_1/q_dense_3/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АF▐
5DeepSetsInvQuantised/sequential_1/q_dense_3/truediv_3RealDiv5DeepSetsInvQuantised/sequential_1/q_dense_3/mul_5:z:0@DeepSetsInvQuantised/sequential_1/q_dense_3/truediv_3/y:output:0*
T0*
_output_shapes
: x
3DeepSetsInvQuantised/sequential_1/q_dense_3/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?╓
1DeepSetsInvQuantised/sequential_1/q_dense_3/mul_6Mul<DeepSetsInvQuantised/sequential_1/q_dense_3/mul_6/x:output:09DeepSetsInvQuantised/sequential_1/q_dense_3/truediv_3:z:0*
T0*
_output_shapes
: ╛
<DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_4ReadVariableOpEdeepsetsinvquantised_sequential_1_q_dense_3_readvariableop_3_resource*
_output_shapes
: *
dtype0г
1DeepSetsInvQuantised/sequential_1/q_dense_3/Neg_3NegDDeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_4:value:0*
T0*
_output_shapes
: ═
1DeepSetsInvQuantised/sequential_1/q_dense_3/add_6AddV25DeepSetsInvQuantised/sequential_1/q_dense_3/Neg_3:y:05DeepSetsInvQuantised/sequential_1/q_dense_3/mul_6:z:0*
T0*
_output_shapes
: x
3DeepSetsInvQuantised/sequential_1/q_dense_3/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?╥
1DeepSetsInvQuantised/sequential_1/q_dense_3/mul_7Mul<DeepSetsInvQuantised/sequential_1/q_dense_3/mul_7/x:output:05DeepSetsInvQuantised/sequential_1/q_dense_3/add_6:z:0*
T0*
_output_shapes
: ж
:DeepSetsInvQuantised/sequential_1/q_dense_3/StopGradient_3StopGradient5DeepSetsInvQuantised/sequential_1/q_dense_3/mul_7:z:0*
T0*
_output_shapes
: ╛
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
:          x
6DeepSetsInvQuantised/sequential_1/q_activation_3/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :x
6DeepSetsInvQuantised/sequential_1/q_activation_3/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :▐
4DeepSetsInvQuantised/sequential_1/q_activation_3/PowPow?DeepSetsInvQuantised/sequential_1/q_activation_3/Pow/x:output:0?DeepSetsInvQuantised/sequential_1/q_activation_3/Pow/y:output:0*
T0*
_output_shapes
: з
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
: л
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
value	B : │
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
 *   A┌
4DeepSetsInvQuantised/sequential_1/q_activation_3/subSub;DeepSetsInvQuantised/sequential_1/q_activation_3/Cast_2:y:0?DeepSetsInvQuantised/sequential_1/q_activation_3/sub/y:output:0*
T0*
_output_shapes
: ┘
6DeepSetsInvQuantised/sequential_1/q_activation_3/Pow_2Pow?DeepSetsInvQuantised/sequential_1/q_activation_3/Const:output:08DeepSetsInvQuantised/sequential_1/q_activation_3/sub:z:0*
T0*
_output_shapes
: ╫
6DeepSetsInvQuantised/sequential_1/q_activation_3/sub_1Sub;DeepSetsInvQuantised/sequential_1/q_activation_3/Cast_1:y:0:DeepSetsInvQuantised/sequential_1/q_activation_3/Pow_2:z:0*
T0*
_output_shapes
: є
:DeepSetsInvQuantised/sequential_1/q_activation_3/LessEqual	LessEqual<DeepSetsInvQuantised/sequential_1/q_dense_3/BiasAdd:output:0:DeepSetsInvQuantised/sequential_1/q_activation_3/sub_1:z:0*
T0*'
_output_shapes
:          н
5DeepSetsInvQuantised/sequential_1/q_activation_3/ReluRelu<DeepSetsInvQuantised/sequential_1/q_dense_3/BiasAdd:output:0*
T0*'
_output_shapes
:          м
@DeepSetsInvQuantised/sequential_1/q_activation_3/ones_like/ShapeShape<DeepSetsInvQuantised/sequential_1/q_dense_3/BiasAdd:output:0*
T0*
_output_shapes
:Е
@DeepSetsInvQuantised/sequential_1/q_activation_3/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  А?К
:DeepSetsInvQuantised/sequential_1/q_activation_3/ones_likeFillIDeepSetsInvQuantised/sequential_1/q_activation_3/ones_like/Shape:output:0IDeepSetsInvQuantised/sequential_1/q_activation_3/ones_like/Const:output:0*
T0*'
_output_shapes
:          ╫
6DeepSetsInvQuantised/sequential_1/q_activation_3/sub_2Sub;DeepSetsInvQuantised/sequential_1/q_activation_3/Cast_1:y:0:DeepSetsInvQuantised/sequential_1/q_activation_3/Pow_2:z:0*
T0*
_output_shapes
: ю
4DeepSetsInvQuantised/sequential_1/q_activation_3/mulMulCDeepSetsInvQuantised/sequential_1/q_activation_3/ones_like:output:0:DeepSetsInvQuantised/sequential_1/q_activation_3/sub_2:z:0*
T0*'
_output_shapes
:          ╢
9DeepSetsInvQuantised/sequential_1/q_activation_3/SelectV2SelectV2>DeepSetsInvQuantised/sequential_1/q_activation_3/LessEqual:z:0CDeepSetsInvQuantised/sequential_1/q_activation_3/Relu:activations:08DeepSetsInvQuantised/sequential_1/q_activation_3/mul:z:0*
T0*'
_output_shapes
:          ш
6DeepSetsInvQuantised/sequential_1/q_activation_3/mul_1Mul<DeepSetsInvQuantised/sequential_1/q_dense_3/BiasAdd:output:09DeepSetsInvQuantised/sequential_1/q_activation_3/Cast:y:0*
T0*'
_output_shapes
:          ю
8DeepSetsInvQuantised/sequential_1/q_activation_3/truedivRealDiv:DeepSetsInvQuantised/sequential_1/q_activation_3/mul_1:z:0;DeepSetsInvQuantised/sequential_1/q_activation_3/Cast_1:y:0*
T0*'
_output_shapes
:          л
4DeepSetsInvQuantised/sequential_1/q_activation_3/NegNeg<DeepSetsInvQuantised/sequential_1/q_activation_3/truediv:z:0*
T0*'
_output_shapes
:          п
6DeepSetsInvQuantised/sequential_1/q_activation_3/RoundRound<DeepSetsInvQuantised/sequential_1/q_activation_3/truediv:z:0*
T0*'
_output_shapes
:          х
4DeepSetsInvQuantised/sequential_1/q_activation_3/addAddV28DeepSetsInvQuantised/sequential_1/q_activation_3/Neg:y:0:DeepSetsInvQuantised/sequential_1/q_activation_3/Round:y:0*
T0*'
_output_shapes
:          ╣
=DeepSetsInvQuantised/sequential_1/q_activation_3/StopGradientStopGradient8DeepSetsInvQuantised/sequential_1/q_activation_3/add:z:0*
T0*'
_output_shapes
:          ў
6DeepSetsInvQuantised/sequential_1/q_activation_3/add_1AddV2<DeepSetsInvQuantised/sequential_1/q_activation_3/truediv:z:0FDeepSetsInvQuantised/sequential_1/q_activation_3/StopGradient:output:0*
T0*'
_output_shapes
:          ю
:DeepSetsInvQuantised/sequential_1/q_activation_3/truediv_1RealDiv:DeepSetsInvQuantised/sequential_1/q_activation_3/add_1:z:09DeepSetsInvQuantised/sequential_1/q_activation_3/Cast:y:0*
T0*'
_output_shapes
:          Б
<DeepSetsInvQuantised/sequential_1/q_activation_3/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?ш
:DeepSetsInvQuantised/sequential_1/q_activation_3/truediv_2RealDivEDeepSetsInvQuantised/sequential_1/q_activation_3/truediv_2/x:output:09DeepSetsInvQuantised/sequential_1/q_activation_3/Cast:y:0*
T0*
_output_shapes
: }
8DeepSetsInvQuantised/sequential_1/q_activation_3/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?с
6DeepSetsInvQuantised/sequential_1/q_activation_3/sub_3SubADeepSetsInvQuantised/sequential_1/q_activation_3/sub_3/x:output:0>DeepSetsInvQuantised/sequential_1/q_activation_3/truediv_2:z:0*
T0*
_output_shapes
:  
FDeepSetsInvQuantised/sequential_1/q_activation_3/clip_by_value/MinimumMinimum>DeepSetsInvQuantised/sequential_1/q_activation_3/truediv_1:z:0:DeepSetsInvQuantised/sequential_1/q_activation_3/sub_3:z:0*
T0*'
_output_shapes
:          Е
@DeepSetsInvQuantised/sequential_1/q_activation_3/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    Т
>DeepSetsInvQuantised/sequential_1/q_activation_3/clip_by_valueMaximumJDeepSetsInvQuantised/sequential_1/q_activation_3/clip_by_value/Minimum:z:0IDeepSetsInvQuantised/sequential_1/q_activation_3/clip_by_value/y:output:0*
T0*'
_output_shapes
:          Ё
6DeepSetsInvQuantised/sequential_1/q_activation_3/mul_2Mul;DeepSetsInvQuantised/sequential_1/q_activation_3/Cast_1:y:0BDeepSetsInvQuantised/sequential_1/q_activation_3/clip_by_value:z:0*
T0*'
_output_shapes
:          │
6DeepSetsInvQuantised/sequential_1/q_activation_3/Neg_1NegBDeepSetsInvQuantised/sequential_1/q_activation_3/SelectV2:output:0*
T0*'
_output_shapes
:          щ
6DeepSetsInvQuantised/sequential_1/q_activation_3/add_2AddV2:DeepSetsInvQuantised/sequential_1/q_activation_3/Neg_1:y:0:DeepSetsInvQuantised/sequential_1/q_activation_3/mul_2:z:0*
T0*'
_output_shapes
:          }
8DeepSetsInvQuantised/sequential_1/q_activation_3/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?ю
6DeepSetsInvQuantised/sequential_1/q_activation_3/mul_3MulADeepSetsInvQuantised/sequential_1/q_activation_3/mul_3/x:output:0:DeepSetsInvQuantised/sequential_1/q_activation_3/add_2:z:0*
T0*'
_output_shapes
:          ╜
?DeepSetsInvQuantised/sequential_1/q_activation_3/StopGradient_1StopGradient:DeepSetsInvQuantised/sequential_1/q_activation_3/mul_3:z:0*
T0*'
_output_shapes
:           
6DeepSetsInvQuantised/sequential_1/q_activation_3/add_3AddV2BDeepSetsInvQuantised/sequential_1/q_activation_3/SelectV2:output:0HDeepSetsInvQuantised/sequential_1/q_activation_3/StopGradient_1:output:0*
T0*'
_output_shapes
:          s
1DeepSetsInvQuantised/sequential_1/q_dense_4/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :s
1DeepSetsInvQuantised/sequential_1/q_dense_4/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : ╧
/DeepSetsInvQuantised/sequential_1/q_dense_4/PowPow:DeepSetsInvQuantised/sequential_1/q_dense_4/Pow/x:output:0:DeepSetsInvQuantised/sequential_1/q_dense_4/Pow/y:output:0*
T0*
_output_shapes
: Э
0DeepSetsInvQuantised/sequential_1/q_dense_4/CastCast3DeepSetsInvQuantised/sequential_1/q_dense_4/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: ╛
:DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOpReadVariableOpCdeepsetsinvquantised_sequential_1_q_dense_4_readvariableop_resource*
_output_shapes

: *
dtype0v
1DeepSetsInvQuantised/sequential_1/q_dense_4/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АF▀
/DeepSetsInvQuantised/sequential_1/q_dense_4/mulMulBDeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp:value:0:DeepSetsInvQuantised/sequential_1/q_dense_4/mul/y:output:0*
T0*
_output_shapes

: ╥
3DeepSetsInvQuantised/sequential_1/q_dense_4/truedivRealDiv3DeepSetsInvQuantised/sequential_1/q_dense_4/mul:z:04DeepSetsInvQuantised/sequential_1/q_dense_4/Cast:y:0*
T0*
_output_shapes

: Ш
/DeepSetsInvQuantised/sequential_1/q_dense_4/NegNeg7DeepSetsInvQuantised/sequential_1/q_dense_4/truediv:z:0*
T0*
_output_shapes

: Ь
1DeepSetsInvQuantised/sequential_1/q_dense_4/RoundRound7DeepSetsInvQuantised/sequential_1/q_dense_4/truediv:z:0*
T0*
_output_shapes

: ═
/DeepSetsInvQuantised/sequential_1/q_dense_4/addAddV23DeepSetsInvQuantised/sequential_1/q_dense_4/Neg:y:05DeepSetsInvQuantised/sequential_1/q_dense_4/Round:y:0*
T0*
_output_shapes

: ж
8DeepSetsInvQuantised/sequential_1/q_dense_4/StopGradientStopGradient3DeepSetsInvQuantised/sequential_1/q_dense_4/add:z:0*
T0*
_output_shapes

: ▀
1DeepSetsInvQuantised/sequential_1/q_dense_4/add_1AddV27DeepSetsInvQuantised/sequential_1/q_dense_4/truediv:z:0ADeepSetsInvQuantised/sequential_1/q_dense_4/StopGradient:output:0*
T0*
_output_shapes

: И
CDeepSetsInvQuantised/sequential_1/q_dense_4/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * №F·
ADeepSetsInvQuantised/sequential_1/q_dense_4/clip_by_value/MinimumMinimum5DeepSetsInvQuantised/sequential_1/q_dense_4/add_1:z:0LDeepSetsInvQuantised/sequential_1/q_dense_4/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: А
;DeepSetsInvQuantised/sequential_1/q_dense_4/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞·
9DeepSetsInvQuantised/sequential_1/q_dense_4/clip_by_valueMaximumEDeepSetsInvQuantised/sequential_1/q_dense_4/clip_by_value/Minimum:z:0DDeepSetsInvQuantised/sequential_1/q_dense_4/clip_by_value/y:output:0*
T0*
_output_shapes

: ╓
1DeepSetsInvQuantised/sequential_1/q_dense_4/mul_1Mul4DeepSetsInvQuantised/sequential_1/q_dense_4/Cast:y:0=DeepSetsInvQuantised/sequential_1/q_dense_4/clip_by_value:z:0*
T0*
_output_shapes

: |
7DeepSetsInvQuantised/sequential_1/q_dense_4/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFт
5DeepSetsInvQuantised/sequential_1/q_dense_4/truediv_1RealDiv5DeepSetsInvQuantised/sequential_1/q_dense_4/mul_1:z:0@DeepSetsInvQuantised/sequential_1/q_dense_4/truediv_1/y:output:0*
T0*
_output_shapes

: x
3DeepSetsInvQuantised/sequential_1/q_dense_4/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?┌
1DeepSetsInvQuantised/sequential_1/q_dense_4/mul_2Mul<DeepSetsInvQuantised/sequential_1/q_dense_4/mul_2/x:output:09DeepSetsInvQuantised/sequential_1/q_dense_4/truediv_1:z:0*
T0*
_output_shapes

: └
<DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_1ReadVariableOpCdeepsetsinvquantised_sequential_1_q_dense_4_readvariableop_resource*
_output_shapes

: *
dtype0з
1DeepSetsInvQuantised/sequential_1/q_dense_4/Neg_1NegDDeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_1:value:0*
T0*
_output_shapes

: ╤
1DeepSetsInvQuantised/sequential_1/q_dense_4/add_2AddV25DeepSetsInvQuantised/sequential_1/q_dense_4/Neg_1:y:05DeepSetsInvQuantised/sequential_1/q_dense_4/mul_2:z:0*
T0*
_output_shapes

: x
3DeepSetsInvQuantised/sequential_1/q_dense_4/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?╓
1DeepSetsInvQuantised/sequential_1/q_dense_4/mul_3Mul<DeepSetsInvQuantised/sequential_1/q_dense_4/mul_3/x:output:05DeepSetsInvQuantised/sequential_1/q_dense_4/add_2:z:0*
T0*
_output_shapes

: к
:DeepSetsInvQuantised/sequential_1/q_dense_4/StopGradient_1StopGradient5DeepSetsInvQuantised/sequential_1/q_dense_4/mul_3:z:0*
T0*
_output_shapes

: └
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
:         u
3DeepSetsInvQuantised/sequential_1/q_dense_4/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :u
3DeepSetsInvQuantised/sequential_1/q_dense_4/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : ╒
1DeepSetsInvQuantised/sequential_1/q_dense_4/Pow_1Pow<DeepSetsInvQuantised/sequential_1/q_dense_4/Pow_1/x:output:0<DeepSetsInvQuantised/sequential_1/q_dense_4/Pow_1/y:output:0*
T0*
_output_shapes
: б
2DeepSetsInvQuantised/sequential_1/q_dense_4/Cast_1Cast5DeepSetsInvQuantised/sequential_1/q_dense_4/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: ╛
<DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_3ReadVariableOpEdeepsetsinvquantised_sequential_1_q_dense_4_readvariableop_3_resource*
_output_shapes
:*
dtype0x
3DeepSetsInvQuantised/sequential_1/q_dense_4/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFс
1DeepSetsInvQuantised/sequential_1/q_dense_4/mul_4MulDDeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_3:value:0<DeepSetsInvQuantised/sequential_1/q_dense_4/mul_4/y:output:0*
T0*
_output_shapes
:╘
5DeepSetsInvQuantised/sequential_1/q_dense_4/truediv_2RealDiv5DeepSetsInvQuantised/sequential_1/q_dense_4/mul_4:z:06DeepSetsInvQuantised/sequential_1/q_dense_4/Cast_1:y:0*
T0*
_output_shapes
:Ш
1DeepSetsInvQuantised/sequential_1/q_dense_4/Neg_2Neg9DeepSetsInvQuantised/sequential_1/q_dense_4/truediv_2:z:0*
T0*
_output_shapes
:Ь
3DeepSetsInvQuantised/sequential_1/q_dense_4/Round_1Round9DeepSetsInvQuantised/sequential_1/q_dense_4/truediv_2:z:0*
T0*
_output_shapes
:╧
1DeepSetsInvQuantised/sequential_1/q_dense_4/add_4AddV25DeepSetsInvQuantised/sequential_1/q_dense_4/Neg_2:y:07DeepSetsInvQuantised/sequential_1/q_dense_4/Round_1:y:0*
T0*
_output_shapes
:ж
:DeepSetsInvQuantised/sequential_1/q_dense_4/StopGradient_2StopGradient5DeepSetsInvQuantised/sequential_1/q_dense_4/add_4:z:0*
T0*
_output_shapes
:▀
1DeepSetsInvQuantised/sequential_1/q_dense_4/add_5AddV29DeepSetsInvQuantised/sequential_1/q_dense_4/truediv_2:z:0CDeepSetsInvQuantised/sequential_1/q_dense_4/StopGradient_2:output:0*
T0*
_output_shapes
:К
EDeepSetsInvQuantised/sequential_1/q_dense_4/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * №F·
CDeepSetsInvQuantised/sequential_1/q_dense_4/clip_by_value_1/MinimumMinimum5DeepSetsInvQuantised/sequential_1/q_dense_4/add_5:z:0NDeepSetsInvQuantised/sequential_1/q_dense_4/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
:В
=DeepSetsInvQuantised/sequential_1/q_dense_4/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞№
;DeepSetsInvQuantised/sequential_1/q_dense_4/clip_by_value_1MaximumGDeepSetsInvQuantised/sequential_1/q_dense_4/clip_by_value_1/Minimum:z:0FDeepSetsInvQuantised/sequential_1/q_dense_4/clip_by_value_1/y:output:0*
T0*
_output_shapes
:╓
1DeepSetsInvQuantised/sequential_1/q_dense_4/mul_5Mul6DeepSetsInvQuantised/sequential_1/q_dense_4/Cast_1:y:0?DeepSetsInvQuantised/sequential_1/q_dense_4/clip_by_value_1:z:0*
T0*
_output_shapes
:|
7DeepSetsInvQuantised/sequential_1/q_dense_4/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АF▐
5DeepSetsInvQuantised/sequential_1/q_dense_4/truediv_3RealDiv5DeepSetsInvQuantised/sequential_1/q_dense_4/mul_5:z:0@DeepSetsInvQuantised/sequential_1/q_dense_4/truediv_3/y:output:0*
T0*
_output_shapes
:x
3DeepSetsInvQuantised/sequential_1/q_dense_4/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?╓
1DeepSetsInvQuantised/sequential_1/q_dense_4/mul_6Mul<DeepSetsInvQuantised/sequential_1/q_dense_4/mul_6/x:output:09DeepSetsInvQuantised/sequential_1/q_dense_4/truediv_3:z:0*
T0*
_output_shapes
:╛
<DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_4ReadVariableOpEdeepsetsinvquantised_sequential_1_q_dense_4_readvariableop_3_resource*
_output_shapes
:*
dtype0г
1DeepSetsInvQuantised/sequential_1/q_dense_4/Neg_3NegDDeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_4:value:0*
T0*
_output_shapes
:═
1DeepSetsInvQuantised/sequential_1/q_dense_4/add_6AddV25DeepSetsInvQuantised/sequential_1/q_dense_4/Neg_3:y:05DeepSetsInvQuantised/sequential_1/q_dense_4/mul_6:z:0*
T0*
_output_shapes
:x
3DeepSetsInvQuantised/sequential_1/q_dense_4/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?╥
1DeepSetsInvQuantised/sequential_1/q_dense_4/mul_7Mul<DeepSetsInvQuantised/sequential_1/q_dense_4/mul_7/x:output:05DeepSetsInvQuantised/sequential_1/q_dense_4/add_6:z:0*
T0*
_output_shapes
:ж
:DeepSetsInvQuantised/sequential_1/q_dense_4/StopGradient_3StopGradient5DeepSetsInvQuantised/sequential_1/q_dense_4/mul_7:z:0*
T0*
_output_shapes
:╛
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
:         Л
IdentityIdentity<DeepSetsInvQuantised/sequential_1/q_dense_4/BiasAdd:output:0^NoOp*
T0*'
_output_shapes
:         ю
NoOpNoOp7^DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp9^DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_19^DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_29^DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_39^DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_49^DeepSetsInvQuantised/sequential/q_dense/ReadVariableOp_59^DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp;^DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_1;^DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_2;^DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_3;^DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_4;^DeepSetsInvQuantised/sequential/q_dense_1/ReadVariableOp_59^DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp;^DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_1;^DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_2;^DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_3;^DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_4;^DeepSetsInvQuantised/sequential/q_dense_2/ReadVariableOp_5;^DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp=^DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_1=^DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_2=^DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_3=^DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_4=^DeepSetsInvQuantised/sequential_1/q_dense_3/ReadVariableOp_5;^DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp=^DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_1=^DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_2=^DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_3=^DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_4=^DeepSetsInvQuantised/sequential_1/q_dense_4/ReadVariableOp_5*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:         : : : : : : : : : : 2p
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
:         
!
_user_specified_name	input_1
н
L
$__inference__update_step_xla_1242653
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
№1
й
F__inference_q_dense_4_layer_call_and_return_conditional_losses_1241068

inputs)
readvariableop_resource: '
readvariableop_3_resource:
identityИвReadVariableOpвReadVariableOp_1вReadVariableOp_2вReadVariableOp_3вReadVariableOp_4вReadVariableOp_5G
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
 *  АF[
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
 * №Fv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞v
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
 *  АF^
	truediv_1RealDiv	mul_1:z:0truediv_1/y:output:0*
T0*
_output_shapes

: L
mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?V
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
 *  А?R
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
:         I
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
 *  АF]
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
 * №Fv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
:V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞x
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
 *  АFZ
	truediv_3RealDiv	mul_5:z:0truediv_3/y:output:0*
T0*
_output_shapes
:L
mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?R
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
 *  А?N
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
:         _
IdentityIdentityBiasAdd:output:0^NoOp*
T0*'
_output_shapes
:         ╢
NoOpNoOp^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:          : : 2 
ReadVariableOpReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_5:O K
'
_output_shapes
:          
 
_user_specified_nameinputs
╣
P
$__inference__update_step_xla_1242628
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
└
L
0__inference_q_activation_1_layer_call_fn_1244078

inputs
identity┐
PartitionedCallPartitionedCallinputs*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *T
fORM
K__inference_q_activation_1_layer_call_and_return_conditional_losses_1240543d
IdentityIdentityPartitionedCall:output:0*
T0*+
_output_shapes
:          "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:          :S O
+
_output_shapes
:          
 
_user_specified_nameinputs
░
L
0__inference_q_activation_3_layer_call_fn_1244357

inputs
identity╗
PartitionedCallPartitionedCallinputs*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:          * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *T
fORM
K__inference_q_activation_3_layer_call_and_return_conditional_losses_1240998`
IdentityIdentityPartitionedCall:output:0*
T0*'
_output_shapes
:          "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*&
_input_shapes
:          :O K
'
_output_shapes
:          
 
_user_specified_nameinputs
№1
й
F__inference_q_dense_3_layer_call_and_return_conditional_losses_1244352

inputs)
readvariableop_resource:  '
readvariableop_3_resource: 
identityИвReadVariableOpвReadVariableOp_1вReadVariableOp_2вReadVariableOp_3вReadVariableOp_4вReadVariableOp_5G
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
 *  АF[
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
 * №Fv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞v
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
 *  АF^
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
:          I
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
 *  АF]
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
 * №Fv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞x
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
 *  АFZ
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
:          _
IdentityIdentityBiasAdd:output:0^NoOp*
T0*'
_output_shapes
:          ╢
NoOpNoOp^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:          : : 2 
ReadVariableOpReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_5:O K
'
_output_shapes
:          
 
_user_specified_nameinputs
 г
Р
I__inference_sequential_1_layer_call_and_return_conditional_losses_1243654

inputs3
!q_dense_3_readvariableop_resource:  1
#q_dense_3_readvariableop_3_resource: 3
!q_dense_4_readvariableop_resource: 1
#q_dense_4_readvariableop_3_resource:
identityИвq_dense_3/ReadVariableOpвq_dense_3/ReadVariableOp_1вq_dense_3/ReadVariableOp_2вq_dense_3/ReadVariableOp_3вq_dense_3/ReadVariableOp_4вq_dense_3/ReadVariableOp_5вq_dense_4/ReadVariableOpвq_dense_4/ReadVariableOp_1вq_dense_4/ReadVariableOp_2вq_dense_4/ReadVariableOp_3вq_dense_4/ReadVariableOp_4вq_dense_4/ReadVariableOp_5Q
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
 *  АFy
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
 * №FФ
q_dense_3/clip_by_value/MinimumMinimumq_dense_3/add_1:z:0*q_dense_3/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  ^
q_dense_3/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞Ф
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
 *  АF|
q_dense_3/truediv_1RealDivq_dense_3/mul_1:z:0q_dense_3/truediv_1/y:output:0*
T0*
_output_shapes

:  V
q_dense_3/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?t
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
 *  А?p
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
dtype0И
q_dense_3/add_3AddV2"q_dense_3/ReadVariableOp_2:value:0!q_dense_3/StopGradient_1:output:0*
T0*
_output_shapes

:  i
q_dense_3/MatMulMatMulinputsq_dense_3/add_3:z:0*
T0*'
_output_shapes
:          S
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
 *  АF{
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
 * №FФ
!q_dense_3/clip_by_value_1/MinimumMinimumq_dense_3/add_5:z:0,q_dense_3/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: `
q_dense_3/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞Ц
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
 *  АFx
q_dense_3/truediv_3RealDivq_dense_3/mul_5:z:0q_dense_3/truediv_3/y:output:0*
T0*
_output_shapes
: V
q_dense_3/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?p
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
 *  А?l
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
dtype0Д
q_dense_3/add_7AddV2"q_dense_3/ReadVariableOp_5:value:0!q_dense_3/StopGradient_3:output:0*
T0*
_output_shapes
: 
q_dense_3/BiasAddBiasAddq_dense_3/MatMul:product:0q_dense_3/add_7:z:0*
T0*'
_output_shapes
:          V
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
: Н
q_activation_3/LessEqual	LessEqualq_dense_3/BiasAdd:output:0q_activation_3/sub_1:z:0*
T0*'
_output_shapes
:          i
q_activation_3/ReluReluq_dense_3/BiasAdd:output:0*
T0*'
_output_shapes
:          h
q_activation_3/ones_like/ShapeShapeq_dense_3/BiasAdd:output:0*
T0*
_output_shapes
:c
q_activation_3/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  А?д
q_activation_3/ones_likeFill'q_activation_3/ones_like/Shape:output:0'q_activation_3/ones_like/Const:output:0*
T0*'
_output_shapes
:          q
q_activation_3/sub_2Subq_activation_3/Cast_1:y:0q_activation_3/Pow_2:z:0*
T0*
_output_shapes
: И
q_activation_3/mulMul!q_activation_3/ones_like:output:0q_activation_3/sub_2:z:0*
T0*'
_output_shapes
:          о
q_activation_3/SelectV2SelectV2q_activation_3/LessEqual:z:0!q_activation_3/Relu:activations:0q_activation_3/mul:z:0*
T0*'
_output_shapes
:          В
q_activation_3/mul_1Mulq_dense_3/BiasAdd:output:0q_activation_3/Cast:y:0*
T0*'
_output_shapes
:          И
q_activation_3/truedivRealDivq_activation_3/mul_1:z:0q_activation_3/Cast_1:y:0*
T0*'
_output_shapes
:          g
q_activation_3/NegNegq_activation_3/truediv:z:0*
T0*'
_output_shapes
:          k
q_activation_3/RoundRoundq_activation_3/truediv:z:0*
T0*'
_output_shapes
:          
q_activation_3/addAddV2q_activation_3/Neg:y:0q_activation_3/Round:y:0*
T0*'
_output_shapes
:          u
q_activation_3/StopGradientStopGradientq_activation_3/add:z:0*
T0*'
_output_shapes
:          С
q_activation_3/add_1AddV2q_activation_3/truediv:z:0$q_activation_3/StopGradient:output:0*
T0*'
_output_shapes
:          И
q_activation_3/truediv_1RealDivq_activation_3/add_1:z:0q_activation_3/Cast:y:0*
T0*'
_output_shapes
:          _
q_activation_3/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?В
q_activation_3/truediv_2RealDiv#q_activation_3/truediv_2/x:output:0q_activation_3/Cast:y:0*
T0*
_output_shapes
: [
q_activation_3/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?{
q_activation_3/sub_3Subq_activation_3/sub_3/x:output:0q_activation_3/truediv_2:z:0*
T0*
_output_shapes
: Щ
$q_activation_3/clip_by_value/MinimumMinimumq_activation_3/truediv_1:z:0q_activation_3/sub_3:z:0*
T0*'
_output_shapes
:          c
q_activation_3/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    м
q_activation_3/clip_by_valueMaximum(q_activation_3/clip_by_value/Minimum:z:0'q_activation_3/clip_by_value/y:output:0*
T0*'
_output_shapes
:          К
q_activation_3/mul_2Mulq_activation_3/Cast_1:y:0 q_activation_3/clip_by_value:z:0*
T0*'
_output_shapes
:          o
q_activation_3/Neg_1Neg q_activation_3/SelectV2:output:0*
T0*'
_output_shapes
:          Г
q_activation_3/add_2AddV2q_activation_3/Neg_1:y:0q_activation_3/mul_2:z:0*
T0*'
_output_shapes
:          [
q_activation_3/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?И
q_activation_3/mul_3Mulq_activation_3/mul_3/x:output:0q_activation_3/add_2:z:0*
T0*'
_output_shapes
:          y
q_activation_3/StopGradient_1StopGradientq_activation_3/mul_3:z:0*
T0*'
_output_shapes
:          Щ
q_activation_3/add_3AddV2 q_activation_3/SelectV2:output:0&q_activation_3/StopGradient_1:output:0*
T0*'
_output_shapes
:          Q
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
 *  АFy
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
 * №FФ
q_dense_4/clip_by_value/MinimumMinimumq_dense_4/add_1:z:0*q_dense_4/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: ^
q_dense_4/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞Ф
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
 *  АF|
q_dense_4/truediv_1RealDivq_dense_4/mul_1:z:0q_dense_4/truediv_1/y:output:0*
T0*
_output_shapes

: V
q_dense_4/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?t
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
 *  А?p
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
dtype0И
q_dense_4/add_3AddV2"q_dense_4/ReadVariableOp_2:value:0!q_dense_4/StopGradient_1:output:0*
T0*
_output_shapes

: {
q_dense_4/MatMulMatMulq_activation_3/add_3:z:0q_dense_4/add_3:z:0*
T0*'
_output_shapes
:         S
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
 *  АF{
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
 * №FФ
!q_dense_4/clip_by_value_1/MinimumMinimumq_dense_4/add_5:z:0,q_dense_4/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
:`
q_dense_4/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞Ц
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
 *  АFx
q_dense_4/truediv_3RealDivq_dense_4/mul_5:z:0q_dense_4/truediv_3/y:output:0*
T0*
_output_shapes
:V
q_dense_4/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?p
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
 *  А?l
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
dtype0Д
q_dense_4/add_7AddV2"q_dense_4/ReadVariableOp_5:value:0!q_dense_4/StopGradient_3:output:0*
T0*
_output_shapes
:
q_dense_4/BiasAddBiasAddq_dense_4/MatMul:product:0q_dense_4/add_7:z:0*
T0*'
_output_shapes
:         i
IdentityIdentityq_dense_4/BiasAdd:output:0^NoOp*
T0*'
_output_shapes
:         Ю
NoOpNoOp^q_dense_3/ReadVariableOp^q_dense_3/ReadVariableOp_1^q_dense_3/ReadVariableOp_2^q_dense_3/ReadVariableOp_3^q_dense_3/ReadVariableOp_4^q_dense_3/ReadVariableOp_5^q_dense_4/ReadVariableOp^q_dense_4/ReadVariableOp_1^q_dense_4/ReadVariableOp_2^q_dense_4/ReadVariableOp_3^q_dense_4/ReadVariableOp_4^q_dense_4/ReadVariableOp_5*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:          : : : : 24
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
:          
 
_user_specified_nameinputs
сЦ
ю
#__inference__traced_restore_1244732
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
identity_37ИвAssignVariableOpвAssignVariableOp_1вAssignVariableOp_10вAssignVariableOp_11вAssignVariableOp_12вAssignVariableOp_13вAssignVariableOp_14вAssignVariableOp_15вAssignVariableOp_16вAssignVariableOp_17вAssignVariableOp_18вAssignVariableOp_19вAssignVariableOp_2вAssignVariableOp_20вAssignVariableOp_21вAssignVariableOp_22вAssignVariableOp_23вAssignVariableOp_24вAssignVariableOp_25вAssignVariableOp_26вAssignVariableOp_27вAssignVariableOp_28вAssignVariableOp_29вAssignVariableOp_3вAssignVariableOp_30вAssignVariableOp_31вAssignVariableOp_32вAssignVariableOp_33вAssignVariableOp_34вAssignVariableOp_35вAssignVariableOp_4вAssignVariableOp_5вAssignVariableOp_6вAssignVariableOp_7вAssignVariableOp_8вAssignVariableOp_9у
RestoreV2/tensor_namesConst"/device:CPU:0*
_output_shapes
:%*
dtype0*Й
value B№%B&variables/0/.ATTRIBUTES/VARIABLE_VALUEB&variables/1/.ATTRIBUTES/VARIABLE_VALUEB&variables/2/.ATTRIBUTES/VARIABLE_VALUEB&variables/3/.ATTRIBUTES/VARIABLE_VALUEB&variables/4/.ATTRIBUTES/VARIABLE_VALUEB&variables/5/.ATTRIBUTES/VARIABLE_VALUEB&variables/6/.ATTRIBUTES/VARIABLE_VALUEB&variables/7/.ATTRIBUTES/VARIABLE_VALUEB&variables/8/.ATTRIBUTES/VARIABLE_VALUEB&variables/9/.ATTRIBUTES/VARIABLE_VALUEB0optimizer/_iterations/.ATTRIBUTES/VARIABLE_VALUEB3optimizer/_learning_rate/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/1/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/2/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/3/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/4/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/5/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/6/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/7/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/8/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/9/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/10/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/11/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/12/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/13/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/14/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/15/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/16/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/17/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/18/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/19/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/20/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/0/total/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/0/count/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/1/total/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/1/count/.ATTRIBUTES/VARIABLE_VALUEB_CHECKPOINTABLE_OBJECT_GRAPH║
RestoreV2/shape_and_slicesConst"/device:CPU:0*
_output_shapes
:%*
dtype0*]
valueTBR%B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B ┌
	RestoreV2	RestoreV2file_prefixRestoreV2/tensor_names:output:0#RestoreV2/shape_and_slices:output:0"/device:CPU:0*к
_output_shapesЧ
Ф:::::::::::::::::::::::::::::::::::::*3
dtypes)
'2%	[
IdentityIdentityRestoreV2:tensors:0"/device:CPU:0*
T0*
_output_shapes
:▓
AssignVariableOpAssignVariableOpassignvariableop_q_dense_kernelIdentity:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_1IdentityRestoreV2:tensors:1"/device:CPU:0*
T0*
_output_shapes
:╢
AssignVariableOp_1AssignVariableOpassignvariableop_1_q_dense_biasIdentity_1:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_2IdentityRestoreV2:tensors:2"/device:CPU:0*
T0*
_output_shapes
:║
AssignVariableOp_2AssignVariableOp#assignvariableop_2_q_dense_1_kernelIdentity_2:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_3IdentityRestoreV2:tensors:3"/device:CPU:0*
T0*
_output_shapes
:╕
AssignVariableOp_3AssignVariableOp!assignvariableop_3_q_dense_1_biasIdentity_3:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_4IdentityRestoreV2:tensors:4"/device:CPU:0*
T0*
_output_shapes
:║
AssignVariableOp_4AssignVariableOp#assignvariableop_4_q_dense_2_kernelIdentity_4:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_5IdentityRestoreV2:tensors:5"/device:CPU:0*
T0*
_output_shapes
:╕
AssignVariableOp_5AssignVariableOp!assignvariableop_5_q_dense_2_biasIdentity_5:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_6IdentityRestoreV2:tensors:6"/device:CPU:0*
T0*
_output_shapes
:║
AssignVariableOp_6AssignVariableOp#assignvariableop_6_q_dense_3_kernelIdentity_6:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_7IdentityRestoreV2:tensors:7"/device:CPU:0*
T0*
_output_shapes
:╕
AssignVariableOp_7AssignVariableOp!assignvariableop_7_q_dense_3_biasIdentity_7:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_8IdentityRestoreV2:tensors:8"/device:CPU:0*
T0*
_output_shapes
:║
AssignVariableOp_8AssignVariableOp#assignvariableop_8_q_dense_4_kernelIdentity_8:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_9IdentityRestoreV2:tensors:9"/device:CPU:0*
T0*
_output_shapes
:╕
AssignVariableOp_9AssignVariableOp!assignvariableop_9_q_dense_4_biasIdentity_9:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_10IdentityRestoreV2:tensors:10"/device:CPU:0*
T0	*
_output_shapes
:╢
AssignVariableOp_10AssignVariableOpassignvariableop_10_iterationIdentity_10:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0	_
Identity_11IdentityRestoreV2:tensors:11"/device:CPU:0*
T0*
_output_shapes
:║
AssignVariableOp_11AssignVariableOp!assignvariableop_11_learning_rateIdentity_11:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_12IdentityRestoreV2:tensors:12"/device:CPU:0*
T0*
_output_shapes
:┬
AssignVariableOp_12AssignVariableOp)assignvariableop_12_adam_m_q_dense_kernelIdentity_12:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_13IdentityRestoreV2:tensors:13"/device:CPU:0*
T0*
_output_shapes
:┬
AssignVariableOp_13AssignVariableOp)assignvariableop_13_adam_v_q_dense_kernelIdentity_13:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_14IdentityRestoreV2:tensors:14"/device:CPU:0*
T0*
_output_shapes
:└
AssignVariableOp_14AssignVariableOp'assignvariableop_14_adam_m_q_dense_biasIdentity_14:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_15IdentityRestoreV2:tensors:15"/device:CPU:0*
T0*
_output_shapes
:└
AssignVariableOp_15AssignVariableOp'assignvariableop_15_adam_v_q_dense_biasIdentity_15:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_16IdentityRestoreV2:tensors:16"/device:CPU:0*
T0*
_output_shapes
:─
AssignVariableOp_16AssignVariableOp+assignvariableop_16_adam_m_q_dense_1_kernelIdentity_16:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_17IdentityRestoreV2:tensors:17"/device:CPU:0*
T0*
_output_shapes
:─
AssignVariableOp_17AssignVariableOp+assignvariableop_17_adam_v_q_dense_1_kernelIdentity_17:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_18IdentityRestoreV2:tensors:18"/device:CPU:0*
T0*
_output_shapes
:┬
AssignVariableOp_18AssignVariableOp)assignvariableop_18_adam_m_q_dense_1_biasIdentity_18:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_19IdentityRestoreV2:tensors:19"/device:CPU:0*
T0*
_output_shapes
:┬
AssignVariableOp_19AssignVariableOp)assignvariableop_19_adam_v_q_dense_1_biasIdentity_19:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_20IdentityRestoreV2:tensors:20"/device:CPU:0*
T0*
_output_shapes
:─
AssignVariableOp_20AssignVariableOp+assignvariableop_20_adam_m_q_dense_2_kernelIdentity_20:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_21IdentityRestoreV2:tensors:21"/device:CPU:0*
T0*
_output_shapes
:─
AssignVariableOp_21AssignVariableOp+assignvariableop_21_adam_v_q_dense_2_kernelIdentity_21:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_22IdentityRestoreV2:tensors:22"/device:CPU:0*
T0*
_output_shapes
:┬
AssignVariableOp_22AssignVariableOp)assignvariableop_22_adam_m_q_dense_2_biasIdentity_22:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_23IdentityRestoreV2:tensors:23"/device:CPU:0*
T0*
_output_shapes
:┬
AssignVariableOp_23AssignVariableOp)assignvariableop_23_adam_v_q_dense_2_biasIdentity_23:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_24IdentityRestoreV2:tensors:24"/device:CPU:0*
T0*
_output_shapes
:─
AssignVariableOp_24AssignVariableOp+assignvariableop_24_adam_m_q_dense_3_kernelIdentity_24:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_25IdentityRestoreV2:tensors:25"/device:CPU:0*
T0*
_output_shapes
:─
AssignVariableOp_25AssignVariableOp+assignvariableop_25_adam_v_q_dense_3_kernelIdentity_25:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_26IdentityRestoreV2:tensors:26"/device:CPU:0*
T0*
_output_shapes
:┬
AssignVariableOp_26AssignVariableOp)assignvariableop_26_adam_m_q_dense_3_biasIdentity_26:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_27IdentityRestoreV2:tensors:27"/device:CPU:0*
T0*
_output_shapes
:┬
AssignVariableOp_27AssignVariableOp)assignvariableop_27_adam_v_q_dense_3_biasIdentity_27:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_28IdentityRestoreV2:tensors:28"/device:CPU:0*
T0*
_output_shapes
:─
AssignVariableOp_28AssignVariableOp+assignvariableop_28_adam_m_q_dense_4_kernelIdentity_28:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_29IdentityRestoreV2:tensors:29"/device:CPU:0*
T0*
_output_shapes
:─
AssignVariableOp_29AssignVariableOp+assignvariableop_29_adam_v_q_dense_4_kernelIdentity_29:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_30IdentityRestoreV2:tensors:30"/device:CPU:0*
T0*
_output_shapes
:┬
AssignVariableOp_30AssignVariableOp)assignvariableop_30_adam_m_q_dense_4_biasIdentity_30:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_31IdentityRestoreV2:tensors:31"/device:CPU:0*
T0*
_output_shapes
:┬
AssignVariableOp_31AssignVariableOp)assignvariableop_31_adam_v_q_dense_4_biasIdentity_31:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_32IdentityRestoreV2:tensors:32"/device:CPU:0*
T0*
_output_shapes
:┤
AssignVariableOp_32AssignVariableOpassignvariableop_32_total_1Identity_32:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_33IdentityRestoreV2:tensors:33"/device:CPU:0*
T0*
_output_shapes
:┤
AssignVariableOp_33AssignVariableOpassignvariableop_33_count_1Identity_33:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_34IdentityRestoreV2:tensors:34"/device:CPU:0*
T0*
_output_shapes
:▓
AssignVariableOp_34AssignVariableOpassignvariableop_34_totalIdentity_34:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_35IdentityRestoreV2:tensors:35"/device:CPU:0*
T0*
_output_shapes
:▓
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
: ╘
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
н
L
$__inference__update_step_xla_1242623
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
┼
н
Q__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_1241382
input_1$
sequential_1241357:  
sequential_1241359: $
sequential_1241361:   
sequential_1241363: $
sequential_1241365:   
sequential_1241367: &
sequential_1_1241372:  "
sequential_1_1241374: &
sequential_1_1241376: "
sequential_1_1241378:
identityИв"sequential/StatefulPartitionedCallв$sequential_1/StatefulPartitionedCall▌
"sequential/StatefulPartitionedCallStatefulPartitionedCallinput_1sequential_1241357sequential_1241359sequential_1241361sequential_1241363sequential_1241365sequential_1241367*
Tin
	2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          *(
_read_only_resource_inputs

*2
config_proto" 

CPU

GPU2 *0J 8В *P
fKRI
G__inference_sequential_layer_call_and_return_conditional_losses_1240688X
Mean/reduction_indicesConst*
_output_shapes
: *
dtype0*
value	B :М
MeanMean+sequential/StatefulPartitionedCall:output:0Mean/reduction_indices:output:0*
T0*'
_output_shapes
:          ┐
$sequential_1/StatefulPartitionedCallStatefulPartitionedCallMean:output:0sequential_1_1241372sequential_1_1241374sequential_1_1241376sequential_1_1241378*
Tin	
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:         *&
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *R
fMRK
I__inference_sequential_1_layer_call_and_return_conditional_losses_1241075|
IdentityIdentity-sequential_1/StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:         Т
NoOpNoOp#^sequential/StatefulPartitionedCall%^sequential_1/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:         : : : : : : : : : : 2H
"sequential/StatefulPartitionedCall"sequential/StatefulPartitionedCall2L
$sequential_1/StatefulPartitionedCall$sequential_1/StatefulPartitionedCall:T P
+
_output_shapes
:         
!
_user_specified_name	input_1
 г
Р
I__inference_sequential_1_layer_call_and_return_conditional_losses_1243831

inputs3
!q_dense_3_readvariableop_resource:  1
#q_dense_3_readvariableop_3_resource: 3
!q_dense_4_readvariableop_resource: 1
#q_dense_4_readvariableop_3_resource:
identityИвq_dense_3/ReadVariableOpвq_dense_3/ReadVariableOp_1вq_dense_3/ReadVariableOp_2вq_dense_3/ReadVariableOp_3вq_dense_3/ReadVariableOp_4вq_dense_3/ReadVariableOp_5вq_dense_4/ReadVariableOpвq_dense_4/ReadVariableOp_1вq_dense_4/ReadVariableOp_2вq_dense_4/ReadVariableOp_3вq_dense_4/ReadVariableOp_4вq_dense_4/ReadVariableOp_5Q
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
 *  АFy
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
 * №FФ
q_dense_3/clip_by_value/MinimumMinimumq_dense_3/add_1:z:0*q_dense_3/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  ^
q_dense_3/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞Ф
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
 *  АF|
q_dense_3/truediv_1RealDivq_dense_3/mul_1:z:0q_dense_3/truediv_1/y:output:0*
T0*
_output_shapes

:  V
q_dense_3/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?t
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
 *  А?p
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
dtype0И
q_dense_3/add_3AddV2"q_dense_3/ReadVariableOp_2:value:0!q_dense_3/StopGradient_1:output:0*
T0*
_output_shapes

:  i
q_dense_3/MatMulMatMulinputsq_dense_3/add_3:z:0*
T0*'
_output_shapes
:          S
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
 *  АF{
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
 * №FФ
!q_dense_3/clip_by_value_1/MinimumMinimumq_dense_3/add_5:z:0,q_dense_3/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: `
q_dense_3/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞Ц
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
 *  АFx
q_dense_3/truediv_3RealDivq_dense_3/mul_5:z:0q_dense_3/truediv_3/y:output:0*
T0*
_output_shapes
: V
q_dense_3/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?p
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
 *  А?l
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
dtype0Д
q_dense_3/add_7AddV2"q_dense_3/ReadVariableOp_5:value:0!q_dense_3/StopGradient_3:output:0*
T0*
_output_shapes
: 
q_dense_3/BiasAddBiasAddq_dense_3/MatMul:product:0q_dense_3/add_7:z:0*
T0*'
_output_shapes
:          V
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
: Н
q_activation_3/LessEqual	LessEqualq_dense_3/BiasAdd:output:0q_activation_3/sub_1:z:0*
T0*'
_output_shapes
:          i
q_activation_3/ReluReluq_dense_3/BiasAdd:output:0*
T0*'
_output_shapes
:          h
q_activation_3/ones_like/ShapeShapeq_dense_3/BiasAdd:output:0*
T0*
_output_shapes
:c
q_activation_3/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  А?д
q_activation_3/ones_likeFill'q_activation_3/ones_like/Shape:output:0'q_activation_3/ones_like/Const:output:0*
T0*'
_output_shapes
:          q
q_activation_3/sub_2Subq_activation_3/Cast_1:y:0q_activation_3/Pow_2:z:0*
T0*
_output_shapes
: И
q_activation_3/mulMul!q_activation_3/ones_like:output:0q_activation_3/sub_2:z:0*
T0*'
_output_shapes
:          о
q_activation_3/SelectV2SelectV2q_activation_3/LessEqual:z:0!q_activation_3/Relu:activations:0q_activation_3/mul:z:0*
T0*'
_output_shapes
:          В
q_activation_3/mul_1Mulq_dense_3/BiasAdd:output:0q_activation_3/Cast:y:0*
T0*'
_output_shapes
:          И
q_activation_3/truedivRealDivq_activation_3/mul_1:z:0q_activation_3/Cast_1:y:0*
T0*'
_output_shapes
:          g
q_activation_3/NegNegq_activation_3/truediv:z:0*
T0*'
_output_shapes
:          k
q_activation_3/RoundRoundq_activation_3/truediv:z:0*
T0*'
_output_shapes
:          
q_activation_3/addAddV2q_activation_3/Neg:y:0q_activation_3/Round:y:0*
T0*'
_output_shapes
:          u
q_activation_3/StopGradientStopGradientq_activation_3/add:z:0*
T0*'
_output_shapes
:          С
q_activation_3/add_1AddV2q_activation_3/truediv:z:0$q_activation_3/StopGradient:output:0*
T0*'
_output_shapes
:          И
q_activation_3/truediv_1RealDivq_activation_3/add_1:z:0q_activation_3/Cast:y:0*
T0*'
_output_shapes
:          _
q_activation_3/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?В
q_activation_3/truediv_2RealDiv#q_activation_3/truediv_2/x:output:0q_activation_3/Cast:y:0*
T0*
_output_shapes
: [
q_activation_3/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?{
q_activation_3/sub_3Subq_activation_3/sub_3/x:output:0q_activation_3/truediv_2:z:0*
T0*
_output_shapes
: Щ
$q_activation_3/clip_by_value/MinimumMinimumq_activation_3/truediv_1:z:0q_activation_3/sub_3:z:0*
T0*'
_output_shapes
:          c
q_activation_3/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    м
q_activation_3/clip_by_valueMaximum(q_activation_3/clip_by_value/Minimum:z:0'q_activation_3/clip_by_value/y:output:0*
T0*'
_output_shapes
:          К
q_activation_3/mul_2Mulq_activation_3/Cast_1:y:0 q_activation_3/clip_by_value:z:0*
T0*'
_output_shapes
:          o
q_activation_3/Neg_1Neg q_activation_3/SelectV2:output:0*
T0*'
_output_shapes
:          Г
q_activation_3/add_2AddV2q_activation_3/Neg_1:y:0q_activation_3/mul_2:z:0*
T0*'
_output_shapes
:          [
q_activation_3/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?И
q_activation_3/mul_3Mulq_activation_3/mul_3/x:output:0q_activation_3/add_2:z:0*
T0*'
_output_shapes
:          y
q_activation_3/StopGradient_1StopGradientq_activation_3/mul_3:z:0*
T0*'
_output_shapes
:          Щ
q_activation_3/add_3AddV2 q_activation_3/SelectV2:output:0&q_activation_3/StopGradient_1:output:0*
T0*'
_output_shapes
:          Q
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
 *  АFy
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
 * №FФ
q_dense_4/clip_by_value/MinimumMinimumq_dense_4/add_1:z:0*q_dense_4/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: ^
q_dense_4/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞Ф
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
 *  АF|
q_dense_4/truediv_1RealDivq_dense_4/mul_1:z:0q_dense_4/truediv_1/y:output:0*
T0*
_output_shapes

: V
q_dense_4/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?t
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
 *  А?p
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
dtype0И
q_dense_4/add_3AddV2"q_dense_4/ReadVariableOp_2:value:0!q_dense_4/StopGradient_1:output:0*
T0*
_output_shapes

: {
q_dense_4/MatMulMatMulq_activation_3/add_3:z:0q_dense_4/add_3:z:0*
T0*'
_output_shapes
:         S
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
 *  АF{
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
 * №FФ
!q_dense_4/clip_by_value_1/MinimumMinimumq_dense_4/add_5:z:0,q_dense_4/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
:`
q_dense_4/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞Ц
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
 *  АFx
q_dense_4/truediv_3RealDivq_dense_4/mul_5:z:0q_dense_4/truediv_3/y:output:0*
T0*
_output_shapes
:V
q_dense_4/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?p
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
 *  А?l
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
dtype0Д
q_dense_4/add_7AddV2"q_dense_4/ReadVariableOp_5:value:0!q_dense_4/StopGradient_3:output:0*
T0*
_output_shapes
:
q_dense_4/BiasAddBiasAddq_dense_4/MatMul:product:0q_dense_4/add_7:z:0*
T0*'
_output_shapes
:         i
IdentityIdentityq_dense_4/BiasAdd:output:0^NoOp*
T0*'
_output_shapes
:         Ю
NoOpNoOp^q_dense_3/ReadVariableOp^q_dense_3/ReadVariableOp_1^q_dense_3/ReadVariableOp_2^q_dense_3/ReadVariableOp_3^q_dense_3/ReadVariableOp_4^q_dense_3/ReadVariableOp_5^q_dense_4/ReadVariableOp^q_dense_4/ReadVariableOp_1^q_dense_4/ReadVariableOp_2^q_dense_4/ReadVariableOp_3^q_dense_4/ReadVariableOp_4^q_dense_4/ReadVariableOp_5*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:          : : : : 24
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
:          
 
_user_specified_nameinputs
е
╤
.__inference_sequential_1_layer_call_fn_1243464

inputs
unknown:  
	unknown_0: 
	unknown_1: 
	unknown_2:
identityИвStatefulPartitionedCall¤
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0	unknown_1	unknown_2*
Tin	
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:         *&
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *R
fMRK
I__inference_sequential_1_layer_call_and_return_conditional_losses_1241075o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:         `
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:          : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:O K
'
_output_shapes
:          
 
_user_specified_nameinputs
╣

√
6__inference_DeepSetsInvQuantised_layer_call_fn_1241464

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
identityИвStatefulPartitionedCall╙
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4	unknown_5	unknown_6	unknown_7	unknown_8*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:         *,
_read_only_resource_inputs

	
*2
config_proto" 

CPU

GPU2 *0J 8В *Z
fURS
Q__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_1241228o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:         `
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:         : : : : : : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:S O
+
_output_shapes
:         
 
_user_specified_nameinputs
№1
й
F__inference_q_dense_3_layer_call_and_return_conditional_losses_1240943

inputs)
readvariableop_resource:  '
readvariableop_3_resource: 
identityИвReadVariableOpвReadVariableOp_1вReadVariableOp_2вReadVariableOp_3вReadVariableOp_4вReadVariableOp_5G
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
 *  АF[
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
 * №Fv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞v
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
 *  АF^
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
:          I
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
 *  АF]
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
 * №Fv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞x
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
 *  АFZ
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
:          _
IdentityIdentityBiasAdd:output:0^NoOp*
T0*'
_output_shapes
:          ╢
NoOpNoOp^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:          : : 2 
ReadVariableOpReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_5:O K
'
_output_shapes
:          
 
_user_specified_nameinputs
╝
J
.__inference_q_activation_layer_call_fn_1243930

inputs
identity╜
PartitionedCallPartitionedCallinputs*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *R
fMRK
I__inference_q_activation_layer_call_and_return_conditional_losses_1240401d
IdentityIdentityPartitionedCall:output:0*
T0*+
_output_shapes
:          "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:          :S O
+
_output_shapes
:          
 
_user_specified_nameinputs
ъ<
й
F__inference_q_dense_2_layer_call_and_return_conditional_losses_1240630

inputs)
readvariableop_resource:  '
readvariableop_3_resource: 
identityИвReadVariableOpвReadVariableOp_1вReadVariableOp_2вReadVariableOp_3вReadVariableOp_4вReadVariableOp_5G
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
 *  АF[
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
 * №Fv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞v
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
 *  АF^
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
valueB"        d
ReshapeReshapeinputsReshape/shape:output:0*
T0*'
_output_shapes
:          _
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
valueB"        f
	Reshape_1Reshapetranspose:y:0Reshape_1/shape:output:0*
T0*
_output_shapes

:  h
MatMulMatMulReshape:output:0Reshape_1:output:0*
T0*'
_output_shapes
:          S
Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :S
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
:          I
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
 *  АF]
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
 * №Fv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞x
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
 *  АFZ
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
:          c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:          ╢
NoOpNoOp^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:          : : 2 
ReadVariableOpReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_5:S O
+
_output_shapes
:          
 
_user_specified_nameinputs
¤ 
g
K__inference_q_activation_3_layer_call_and_return_conditional_losses_1240998

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
:          F
ReluReluinputs*
T0*'
_output_shapes
:          E
ones_like/ShapeShapeinputs*
T0*
_output_shapes
:T
ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  А?w
	ones_likeFillones_like/Shape:output:0ones_like/Const:output:0*
T0*'
_output_shapes
:          D
sub_2Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: [
mulMulones_like:output:0	sub_2:z:0*
T0*'
_output_shapes
:          r
SelectV2SelectV2LessEqual:z:0Relu:activations:0mul:z:0*
T0*'
_output_shapes
:          P
mul_1MulinputsCast:y:0*
T0*'
_output_shapes
:          [
truedivRealDiv	mul_1:z:0
Cast_1:y:0*
T0*'
_output_shapes
:          I
NegNegtruediv:z:0*
T0*'
_output_shapes
:          M
RoundRoundtruediv:z:0*
T0*'
_output_shapes
:          R
addAddV2Neg:y:0	Round:y:0*
T0*'
_output_shapes
:          W
StopGradientStopGradientadd:z:0*
T0*'
_output_shapes
:          d
add_1AddV2truediv:z:0StopGradient:output:0*
T0*'
_output_shapes
:          [
	truediv_1RealDiv	add_1:z:0Cast:y:0*
T0*'
_output_shapes
:          P
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
:          T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*'
_output_shapes
:          ]
mul_2Mul
Cast_1:y:0clip_by_value:z:0*
T0*'
_output_shapes
:          Q
Neg_1NegSelectV2:output:0*
T0*'
_output_shapes
:          V
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*'
_output_shapes
:          L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?[
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*'
_output_shapes
:          [
StopGradient_1StopGradient	mul_3:z:0*
T0*'
_output_shapes
:          l
add_3AddV2SelectV2:output:0StopGradient_1:output:0*
T0*'
_output_shapes
:          Q
IdentityIdentity	add_3:z:0*
T0*'
_output_shapes
:          "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*&
_input_shapes
:          :O K
'
_output_shapes
:          
 
_user_specified_nameinputs
┬
м
Q__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_1241228

inputs$
sequential_1241203:  
sequential_1241205: $
sequential_1241207:   
sequential_1241209: $
sequential_1241211:   
sequential_1241213: &
sequential_1_1241218:  "
sequential_1_1241220: &
sequential_1_1241222: "
sequential_1_1241224:
identityИв"sequential/StatefulPartitionedCallв$sequential_1/StatefulPartitionedCall▄
"sequential/StatefulPartitionedCallStatefulPartitionedCallinputssequential_1241203sequential_1241205sequential_1241207sequential_1241209sequential_1241211sequential_1241213*
Tin
	2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          *(
_read_only_resource_inputs

*2
config_proto" 

CPU

GPU2 *0J 8В *P
fKRI
G__inference_sequential_layer_call_and_return_conditional_losses_1240688X
Mean/reduction_indicesConst*
_output_shapes
: *
dtype0*
value	B :М
MeanMean+sequential/StatefulPartitionedCall:output:0Mean/reduction_indices:output:0*
T0*'
_output_shapes
:          ┐
$sequential_1/StatefulPartitionedCallStatefulPartitionedCallMean:output:0sequential_1_1241218sequential_1_1241220sequential_1_1241222sequential_1_1241224*
Tin	
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:         *&
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *R
fMRK
I__inference_sequential_1_layer_call_and_return_conditional_losses_1241075|
IdentityIdentity-sequential_1/StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:         Т
NoOpNoOp#^sequential/StatefulPartitionedCall%^sequential_1/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:         : : : : : : : : : : 2H
"sequential/StatefulPartitionedCall"sequential/StatefulPartitionedCall2L
$sequential_1/StatefulPartitionedCall$sequential_1/StatefulPartitionedCall:S O
+
_output_shapes
:         
 
_user_specified_nameinputs
ш<
з
D__inference_q_dense_layer_call_and_return_conditional_losses_1240346

inputs)
readvariableop_resource: '
readvariableop_3_resource: 
identityИвReadVariableOpвReadVariableOp_1вReadVariableOp_2вReadVariableOp_3вReadVariableOp_4вReadVariableOp_5G
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
 *  АF[
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
 * №Fv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞v
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
 *  АF^
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
valueB"       d
ReshapeReshapeinputsReshape/shape:output:0*
T0*'
_output_shapes
:         _
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
valueB"       f
	Reshape_1Reshapetranspose:y:0Reshape_1/shape:output:0*
T0*
_output_shapes

: h
MatMulMatMulReshape:output:0Reshape_1:output:0*
T0*'
_output_shapes
:          S
Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :S
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
:          I
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
 *  АF]
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
 * №Fv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞x
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
 *  АFZ
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
:          c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:          ╢
NoOpNoOp^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:         : : 2 
ReadVariableOpReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_5:S O
+
_output_shapes
:         
 
_user_specified_nameinputs
╣
P
$__inference__update_step_xla_1242648
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
╡
╝
I__inference_sequential_1_layer_call_and_return_conditional_losses_1241075

inputs#
q_dense_3_1240944:  
q_dense_3_1240946: #
q_dense_4_1241069: 
q_dense_4_1241071:
identityИв!q_dense_3/StatefulPartitionedCallв!q_dense_4/StatefulPartitionedCall№
!q_dense_3/StatefulPartitionedCallStatefulPartitionedCallinputsq_dense_3_1240944q_dense_3_1240946*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:          *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *O
fJRH
F__inference_q_dense_3_layer_call_and_return_conditional_losses_1240943ю
q_activation_3/PartitionedCallPartitionedCall*q_dense_3/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:          * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *T
fORM
K__inference_q_activation_3_layer_call_and_return_conditional_losses_1240998Э
!q_dense_4/StatefulPartitionedCallStatefulPartitionedCall'q_activation_3/PartitionedCall:output:0q_dense_4_1241069q_dense_4_1241071*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:         *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *O
fJRH
F__inference_q_dense_4_layer_call_and_return_conditional_losses_1241068y
IdentityIdentity*q_dense_4/StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:         О
NoOpNoOp"^q_dense_3/StatefulPartitionedCall"^q_dense_4/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:          : : : : 2F
!q_dense_3/StatefulPartitionedCall!q_dense_3/StatefulPartitionedCall2F
!q_dense_4/StatefulPartitionedCall!q_dense_4/StatefulPartitionedCall:O K
'
_output_shapes
:          
 
_user_specified_nameinputs
й
е
G__inference_sequential_layer_call_and_return_conditional_losses_1240868
q_dense_input!
q_dense_1240849: 
q_dense_1240851: #
q_dense_1_1240855:  
q_dense_1_1240857: #
q_dense_2_1240861:  
q_dense_2_1240863: 
identityИвq_dense/StatefulPartitionedCallв!q_dense_1/StatefulPartitionedCallв!q_dense_2/StatefulPartitionedCall 
q_dense/StatefulPartitionedCallStatefulPartitionedCallq_dense_inputq_dense_1240849q_dense_1240851*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *M
fHRF
D__inference_q_dense_layer_call_and_return_conditional_losses_1240346ь
q_activation/PartitionedCallPartitionedCall(q_dense/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *R
fMRK
I__inference_q_activation_layer_call_and_return_conditional_losses_1240401Я
!q_dense_1/StatefulPartitionedCallStatefulPartitionedCall%q_activation/PartitionedCall:output:0q_dense_1_1240855q_dense_1_1240857*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *O
fJRH
F__inference_q_dense_1_layer_call_and_return_conditional_losses_1240488Є
q_activation_1/PartitionedCallPartitionedCall*q_dense_1/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *T
fORM
K__inference_q_activation_1_layer_call_and_return_conditional_losses_1240543б
!q_dense_2/StatefulPartitionedCallStatefulPartitionedCall'q_activation_1/PartitionedCall:output:0q_dense_2_1240861q_dense_2_1240863*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *O
fJRH
F__inference_q_dense_2_layer_call_and_return_conditional_losses_1240630Є
q_activation_2/PartitionedCallPartitionedCall*q_dense_2/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *T
fORM
K__inference_q_activation_2_layer_call_and_return_conditional_losses_1240685z
IdentityIdentity'q_activation_2/PartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:          ░
NoOpNoOp ^q_dense/StatefulPartitionedCall"^q_dense_1/StatefulPartitionedCall"^q_dense_2/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*6
_input_shapes%
#:         : : : : : : 2B
q_dense/StatefulPartitionedCallq_dense/StatefulPartitionedCall2F
!q_dense_1/StatefulPartitionedCall!q_dense_1/StatefulPartitionedCall2F
!q_dense_2/StatefulPartitionedCall!q_dense_2/StatefulPartitionedCall:Z V
+
_output_shapes
:         
'
_user_specified_nameq_dense_input
ЕЄ
Ь
Q__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_1242603

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
identityИв!sequential/q_dense/ReadVariableOpв#sequential/q_dense/ReadVariableOp_1в#sequential/q_dense/ReadVariableOp_2в#sequential/q_dense/ReadVariableOp_3в#sequential/q_dense/ReadVariableOp_4в#sequential/q_dense/ReadVariableOp_5в#sequential/q_dense_1/ReadVariableOpв%sequential/q_dense_1/ReadVariableOp_1в%sequential/q_dense_1/ReadVariableOp_2в%sequential/q_dense_1/ReadVariableOp_3в%sequential/q_dense_1/ReadVariableOp_4в%sequential/q_dense_1/ReadVariableOp_5в#sequential/q_dense_2/ReadVariableOpв%sequential/q_dense_2/ReadVariableOp_1в%sequential/q_dense_2/ReadVariableOp_2в%sequential/q_dense_2/ReadVariableOp_3в%sequential/q_dense_2/ReadVariableOp_4в%sequential/q_dense_2/ReadVariableOp_5в%sequential_1/q_dense_3/ReadVariableOpв'sequential_1/q_dense_3/ReadVariableOp_1в'sequential_1/q_dense_3/ReadVariableOp_2в'sequential_1/q_dense_3/ReadVariableOp_3в'sequential_1/q_dense_3/ReadVariableOp_4в'sequential_1/q_dense_3/ReadVariableOp_5в%sequential_1/q_dense_4/ReadVariableOpв'sequential_1/q_dense_4/ReadVariableOp_1в'sequential_1/q_dense_4/ReadVariableOp_2в'sequential_1/q_dense_4/ReadVariableOp_3в'sequential_1/q_dense_4/ReadVariableOp_4в'sequential_1/q_dense_4/ReadVariableOp_5Z
sequential/q_dense/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :Z
sequential/q_dense/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : Д
sequential/q_dense/PowPow!sequential/q_dense/Pow/x:output:0!sequential/q_dense/Pow/y:output:0*
T0*
_output_shapes
: k
sequential/q_dense/CastCastsequential/q_dense/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: М
!sequential/q_dense/ReadVariableOpReadVariableOp*sequential_q_dense_readvariableop_resource*
_output_shapes

: *
dtype0]
sequential/q_dense/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFФ
sequential/q_dense/mulMul)sequential/q_dense/ReadVariableOp:value:0!sequential/q_dense/mul/y:output:0*
T0*
_output_shapes

: З
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

: В
sequential/q_dense/addAddV2sequential/q_dense/Neg:y:0sequential/q_dense/Round:y:0*
T0*
_output_shapes

: t
sequential/q_dense/StopGradientStopGradientsequential/q_dense/add:z:0*
T0*
_output_shapes

: Ф
sequential/q_dense/add_1AddV2sequential/q_dense/truediv:z:0(sequential/q_dense/StopGradient:output:0*
T0*
_output_shapes

: o
*sequential/q_dense/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * №Fп
(sequential/q_dense/clip_by_value/MinimumMinimumsequential/q_dense/add_1:z:03sequential/q_dense/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: g
"sequential/q_dense/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞п
 sequential/q_dense/clip_by_valueMaximum,sequential/q_dense/clip_by_value/Minimum:z:0+sequential/q_dense/clip_by_value/y:output:0*
T0*
_output_shapes

: Л
sequential/q_dense/mul_1Mulsequential/q_dense/Cast:y:0$sequential/q_dense/clip_by_value:z:0*
T0*
_output_shapes

: c
sequential/q_dense/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFЧ
sequential/q_dense/truediv_1RealDivsequential/q_dense/mul_1:z:0'sequential/q_dense/truediv_1/y:output:0*
T0*
_output_shapes

: _
sequential/q_dense/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?П
sequential/q_dense/mul_2Mul#sequential/q_dense/mul_2/x:output:0 sequential/q_dense/truediv_1:z:0*
T0*
_output_shapes

: О
#sequential/q_dense/ReadVariableOp_1ReadVariableOp*sequential_q_dense_readvariableop_resource*
_output_shapes

: *
dtype0u
sequential/q_dense/Neg_1Neg+sequential/q_dense/ReadVariableOp_1:value:0*
T0*
_output_shapes

: Ж
sequential/q_dense/add_2AddV2sequential/q_dense/Neg_1:y:0sequential/q_dense/mul_2:z:0*
T0*
_output_shapes

: _
sequential/q_dense/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Л
sequential/q_dense/mul_3Mul#sequential/q_dense/mul_3/x:output:0sequential/q_dense/add_2:z:0*
T0*
_output_shapes

: x
!sequential/q_dense/StopGradient_1StopGradientsequential/q_dense/mul_3:z:0*
T0*
_output_shapes

: О
#sequential/q_dense/ReadVariableOp_2ReadVariableOp*sequential_q_dense_readvariableop_resource*
_output_shapes

: *
dtype0г
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
valueB"       К
sequential/q_dense/ReshapeReshapeinputs)sequential/q_dense/Reshape/shape:output:0*
T0*'
_output_shapes
:         r
!sequential/q_dense/transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       Ь
sequential/q_dense/transpose	Transposesequential/q_dense/add_3:z:0*sequential/q_dense/transpose/perm:output:0*
T0*
_output_shapes

: s
"sequential/q_dense/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"       Я
sequential/q_dense/Reshape_1Reshape sequential/q_dense/transpose:y:0+sequential/q_dense/Reshape_1/shape:output:0*
T0*
_output_shapes

: б
sequential/q_dense/MatMulMatMul#sequential/q_dense/Reshape:output:0%sequential/q_dense/Reshape_1:output:0*
T0*'
_output_shapes
:          f
$sequential/q_dense/Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :f
$sequential/q_dense/Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : █
"sequential/q_dense/Reshape_2/shapePack#sequential/q_dense/unstack:output:0-sequential/q_dense/Reshape_2/shape/1:output:0-sequential/q_dense/Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:п
sequential/q_dense/Reshape_2Reshape#sequential/q_dense/MatMul:product:0+sequential/q_dense/Reshape_2/shape:output:0*
T0*+
_output_shapes
:          \
sequential/q_dense/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :\
sequential/q_dense/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : К
sequential/q_dense/Pow_1Pow#sequential/q_dense/Pow_1/x:output:0#sequential/q_dense/Pow_1/y:output:0*
T0*
_output_shapes
: o
sequential/q_dense/Cast_1Castsequential/q_dense/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: М
#sequential/q_dense/ReadVariableOp_3ReadVariableOp,sequential_q_dense_readvariableop_3_resource*
_output_shapes
: *
dtype0_
sequential/q_dense/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFЦ
sequential/q_dense/mul_4Mul+sequential/q_dense/ReadVariableOp_3:value:0#sequential/q_dense/mul_4/y:output:0*
T0*
_output_shapes
: Й
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
: Д
sequential/q_dense/add_4AddV2sequential/q_dense/Neg_2:y:0sequential/q_dense/Round_1:y:0*
T0*
_output_shapes
: t
!sequential/q_dense/StopGradient_2StopGradientsequential/q_dense/add_4:z:0*
T0*
_output_shapes
: Ф
sequential/q_dense/add_5AddV2 sequential/q_dense/truediv_2:z:0*sequential/q_dense/StopGradient_2:output:0*
T0*
_output_shapes
: q
,sequential/q_dense/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * №Fп
*sequential/q_dense/clip_by_value_1/MinimumMinimumsequential/q_dense/add_5:z:05sequential/q_dense/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: i
$sequential/q_dense/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞▒
"sequential/q_dense/clip_by_value_1Maximum.sequential/q_dense/clip_by_value_1/Minimum:z:0-sequential/q_dense/clip_by_value_1/y:output:0*
T0*
_output_shapes
: Л
sequential/q_dense/mul_5Mulsequential/q_dense/Cast_1:y:0&sequential/q_dense/clip_by_value_1:z:0*
T0*
_output_shapes
: c
sequential/q_dense/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFУ
sequential/q_dense/truediv_3RealDivsequential/q_dense/mul_5:z:0'sequential/q_dense/truediv_3/y:output:0*
T0*
_output_shapes
: _
sequential/q_dense/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Л
sequential/q_dense/mul_6Mul#sequential/q_dense/mul_6/x:output:0 sequential/q_dense/truediv_3:z:0*
T0*
_output_shapes
: М
#sequential/q_dense/ReadVariableOp_4ReadVariableOp,sequential_q_dense_readvariableop_3_resource*
_output_shapes
: *
dtype0q
sequential/q_dense/Neg_3Neg+sequential/q_dense/ReadVariableOp_4:value:0*
T0*
_output_shapes
: В
sequential/q_dense/add_6AddV2sequential/q_dense/Neg_3:y:0sequential/q_dense/mul_6:z:0*
T0*
_output_shapes
: _
sequential/q_dense/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?З
sequential/q_dense/mul_7Mul#sequential/q_dense/mul_7/x:output:0sequential/q_dense/add_6:z:0*
T0*
_output_shapes
: t
!sequential/q_dense/StopGradient_3StopGradientsequential/q_dense/mul_7:z:0*
T0*
_output_shapes
: М
#sequential/q_dense/ReadVariableOp_5ReadVariableOp,sequential_q_dense_readvariableop_3_resource*
_output_shapes
: *
dtype0Я
sequential/q_dense/add_7AddV2+sequential/q_dense/ReadVariableOp_5:value:0*sequential/q_dense/StopGradient_3:output:0*
T0*
_output_shapes
: а
sequential/q_dense/BiasAddBiasAdd%sequential/q_dense/Reshape_2:output:0sequential/q_dense/add_7:z:0*
T0*+
_output_shapes
:          _
sequential/q_activation/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :_
sequential/q_activation/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :У
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
value	B : Щ
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
value	B : Б
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
 *   AП
sequential/q_activation/subSub"sequential/q_activation/Cast_2:y:0&sequential/q_activation/sub/y:output:0*
T0*
_output_shapes
: О
sequential/q_activation/Pow_2Pow&sequential/q_activation/Const:output:0sequential/q_activation/sub:z:0*
T0*
_output_shapes
: М
sequential/q_activation/sub_1Sub"sequential/q_activation/Cast_1:y:0!sequential/q_activation/Pow_2:z:0*
T0*
_output_shapes
: м
!sequential/q_activation/LessEqual	LessEqual#sequential/q_dense/BiasAdd:output:0!sequential/q_activation/sub_1:z:0*
T0*+
_output_shapes
:          
sequential/q_activation/ReluRelu#sequential/q_dense/BiasAdd:output:0*
T0*+
_output_shapes
:          z
'sequential/q_activation/ones_like/ShapeShape#sequential/q_dense/BiasAdd:output:0*
T0*
_output_shapes
:l
'sequential/q_activation/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  А?├
!sequential/q_activation/ones_likeFill0sequential/q_activation/ones_like/Shape:output:00sequential/q_activation/ones_like/Const:output:0*
T0*+
_output_shapes
:          М
sequential/q_activation/sub_2Sub"sequential/q_activation/Cast_1:y:0!sequential/q_activation/Pow_2:z:0*
T0*
_output_shapes
: з
sequential/q_activation/mulMul*sequential/q_activation/ones_like:output:0!sequential/q_activation/sub_2:z:0*
T0*+
_output_shapes
:          ╓
 sequential/q_activation/SelectV2SelectV2%sequential/q_activation/LessEqual:z:0*sequential/q_activation/Relu:activations:0sequential/q_activation/mul:z:0*
T0*+
_output_shapes
:          б
sequential/q_activation/mul_1Mul#sequential/q_dense/BiasAdd:output:0 sequential/q_activation/Cast:y:0*
T0*+
_output_shapes
:          з
sequential/q_activation/truedivRealDiv!sequential/q_activation/mul_1:z:0"sequential/q_activation/Cast_1:y:0*
T0*+
_output_shapes
:          }
sequential/q_activation/NegNeg#sequential/q_activation/truediv:z:0*
T0*+
_output_shapes
:          Б
sequential/q_activation/RoundRound#sequential/q_activation/truediv:z:0*
T0*+
_output_shapes
:          Ю
sequential/q_activation/addAddV2sequential/q_activation/Neg:y:0!sequential/q_activation/Round:y:0*
T0*+
_output_shapes
:          Л
$sequential/q_activation/StopGradientStopGradientsequential/q_activation/add:z:0*
T0*+
_output_shapes
:          ░
sequential/q_activation/add_1AddV2#sequential/q_activation/truediv:z:0-sequential/q_activation/StopGradient:output:0*
T0*+
_output_shapes
:          з
!sequential/q_activation/truediv_1RealDiv!sequential/q_activation/add_1:z:0 sequential/q_activation/Cast:y:0*
T0*+
_output_shapes
:          h
#sequential/q_activation/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Э
!sequential/q_activation/truediv_2RealDiv,sequential/q_activation/truediv_2/x:output:0 sequential/q_activation/Cast:y:0*
T0*
_output_shapes
: d
sequential/q_activation/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ц
sequential/q_activation/sub_3Sub(sequential/q_activation/sub_3/x:output:0%sequential/q_activation/truediv_2:z:0*
T0*
_output_shapes
: ╕
-sequential/q_activation/clip_by_value/MinimumMinimum%sequential/q_activation/truediv_1:z:0!sequential/q_activation/sub_3:z:0*
T0*+
_output_shapes
:          l
'sequential/q_activation/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    ╦
%sequential/q_activation/clip_by_valueMaximum1sequential/q_activation/clip_by_value/Minimum:z:00sequential/q_activation/clip_by_value/y:output:0*
T0*+
_output_shapes
:          й
sequential/q_activation/mul_2Mul"sequential/q_activation/Cast_1:y:0)sequential/q_activation/clip_by_value:z:0*
T0*+
_output_shapes
:          Е
sequential/q_activation/Neg_1Neg)sequential/q_activation/SelectV2:output:0*
T0*+
_output_shapes
:          в
sequential/q_activation/add_2AddV2!sequential/q_activation/Neg_1:y:0!sequential/q_activation/mul_2:z:0*
T0*+
_output_shapes
:          d
sequential/q_activation/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?з
sequential/q_activation/mul_3Mul(sequential/q_activation/mul_3/x:output:0!sequential/q_activation/add_2:z:0*
T0*+
_output_shapes
:          П
&sequential/q_activation/StopGradient_1StopGradient!sequential/q_activation/mul_3:z:0*
T0*+
_output_shapes
:          ╕
sequential/q_activation/add_3AddV2)sequential/q_activation/SelectV2:output:0/sequential/q_activation/StopGradient_1:output:0*
T0*+
_output_shapes
:          \
sequential/q_dense_1/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :\
sequential/q_dense_1/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : К
sequential/q_dense_1/PowPow#sequential/q_dense_1/Pow/x:output:0#sequential/q_dense_1/Pow/y:output:0*
T0*
_output_shapes
: o
sequential/q_dense_1/CastCastsequential/q_dense_1/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: Р
#sequential/q_dense_1/ReadVariableOpReadVariableOp,sequential_q_dense_1_readvariableop_resource*
_output_shapes

:  *
dtype0_
sequential/q_dense_1/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFЪ
sequential/q_dense_1/mulMul+sequential/q_dense_1/ReadVariableOp:value:0#sequential/q_dense_1/mul/y:output:0*
T0*
_output_shapes

:  Н
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

:  И
sequential/q_dense_1/addAddV2sequential/q_dense_1/Neg:y:0sequential/q_dense_1/Round:y:0*
T0*
_output_shapes

:  x
!sequential/q_dense_1/StopGradientStopGradientsequential/q_dense_1/add:z:0*
T0*
_output_shapes

:  Ъ
sequential/q_dense_1/add_1AddV2 sequential/q_dense_1/truediv:z:0*sequential/q_dense_1/StopGradient:output:0*
T0*
_output_shapes

:  q
,sequential/q_dense_1/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * №F╡
*sequential/q_dense_1/clip_by_value/MinimumMinimumsequential/q_dense_1/add_1:z:05sequential/q_dense_1/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  i
$sequential/q_dense_1/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞╡
"sequential/q_dense_1/clip_by_valueMaximum.sequential/q_dense_1/clip_by_value/Minimum:z:0-sequential/q_dense_1/clip_by_value/y:output:0*
T0*
_output_shapes

:  С
sequential/q_dense_1/mul_1Mulsequential/q_dense_1/Cast:y:0&sequential/q_dense_1/clip_by_value:z:0*
T0*
_output_shapes

:  e
 sequential/q_dense_1/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFЭ
sequential/q_dense_1/truediv_1RealDivsequential/q_dense_1/mul_1:z:0)sequential/q_dense_1/truediv_1/y:output:0*
T0*
_output_shapes

:  a
sequential/q_dense_1/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Х
sequential/q_dense_1/mul_2Mul%sequential/q_dense_1/mul_2/x:output:0"sequential/q_dense_1/truediv_1:z:0*
T0*
_output_shapes

:  Т
%sequential/q_dense_1/ReadVariableOp_1ReadVariableOp,sequential_q_dense_1_readvariableop_resource*
_output_shapes

:  *
dtype0y
sequential/q_dense_1/Neg_1Neg-sequential/q_dense_1/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  М
sequential/q_dense_1/add_2AddV2sequential/q_dense_1/Neg_1:y:0sequential/q_dense_1/mul_2:z:0*
T0*
_output_shapes

:  a
sequential/q_dense_1/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?С
sequential/q_dense_1/mul_3Mul%sequential/q_dense_1/mul_3/x:output:0sequential/q_dense_1/add_2:z:0*
T0*
_output_shapes

:  |
#sequential/q_dense_1/StopGradient_1StopGradientsequential/q_dense_1/mul_3:z:0*
T0*
_output_shapes

:  Т
%sequential/q_dense_1/ReadVariableOp_2ReadVariableOp,sequential_q_dense_1_readvariableop_resource*
_output_shapes

:  *
dtype0й
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
valueB"        й
sequential/q_dense_1/ReshapeReshape!sequential/q_activation/add_3:z:0+sequential/q_dense_1/Reshape/shape:output:0*
T0*'
_output_shapes
:          t
#sequential/q_dense_1/transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       в
sequential/q_dense_1/transpose	Transposesequential/q_dense_1/add_3:z:0,sequential/q_dense_1/transpose/perm:output:0*
T0*
_output_shapes

:  u
$sequential/q_dense_1/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"        е
sequential/q_dense_1/Reshape_1Reshape"sequential/q_dense_1/transpose:y:0-sequential/q_dense_1/Reshape_1/shape:output:0*
T0*
_output_shapes

:  з
sequential/q_dense_1/MatMulMatMul%sequential/q_dense_1/Reshape:output:0'sequential/q_dense_1/Reshape_1:output:0*
T0*'
_output_shapes
:          h
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
:╡
sequential/q_dense_1/Reshape_2Reshape%sequential/q_dense_1/MatMul:product:0-sequential/q_dense_1/Reshape_2/shape:output:0*
T0*+
_output_shapes
:          ^
sequential/q_dense_1/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :^
sequential/q_dense_1/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Р
sequential/q_dense_1/Pow_1Pow%sequential/q_dense_1/Pow_1/x:output:0%sequential/q_dense_1/Pow_1/y:output:0*
T0*
_output_shapes
: s
sequential/q_dense_1/Cast_1Castsequential/q_dense_1/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: Р
%sequential/q_dense_1/ReadVariableOp_3ReadVariableOp.sequential_q_dense_1_readvariableop_3_resource*
_output_shapes
: *
dtype0a
sequential/q_dense_1/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFЬ
sequential/q_dense_1/mul_4Mul-sequential/q_dense_1/ReadVariableOp_3:value:0%sequential/q_dense_1/mul_4/y:output:0*
T0*
_output_shapes
: П
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
: К
sequential/q_dense_1/add_4AddV2sequential/q_dense_1/Neg_2:y:0 sequential/q_dense_1/Round_1:y:0*
T0*
_output_shapes
: x
#sequential/q_dense_1/StopGradient_2StopGradientsequential/q_dense_1/add_4:z:0*
T0*
_output_shapes
: Ъ
sequential/q_dense_1/add_5AddV2"sequential/q_dense_1/truediv_2:z:0,sequential/q_dense_1/StopGradient_2:output:0*
T0*
_output_shapes
: s
.sequential/q_dense_1/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * №F╡
,sequential/q_dense_1/clip_by_value_1/MinimumMinimumsequential/q_dense_1/add_5:z:07sequential/q_dense_1/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: k
&sequential/q_dense_1/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞╖
$sequential/q_dense_1/clip_by_value_1Maximum0sequential/q_dense_1/clip_by_value_1/Minimum:z:0/sequential/q_dense_1/clip_by_value_1/y:output:0*
T0*
_output_shapes
: С
sequential/q_dense_1/mul_5Mulsequential/q_dense_1/Cast_1:y:0(sequential/q_dense_1/clip_by_value_1:z:0*
T0*
_output_shapes
: e
 sequential/q_dense_1/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFЩ
sequential/q_dense_1/truediv_3RealDivsequential/q_dense_1/mul_5:z:0)sequential/q_dense_1/truediv_3/y:output:0*
T0*
_output_shapes
: a
sequential/q_dense_1/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?С
sequential/q_dense_1/mul_6Mul%sequential/q_dense_1/mul_6/x:output:0"sequential/q_dense_1/truediv_3:z:0*
T0*
_output_shapes
: Р
%sequential/q_dense_1/ReadVariableOp_4ReadVariableOp.sequential_q_dense_1_readvariableop_3_resource*
_output_shapes
: *
dtype0u
sequential/q_dense_1/Neg_3Neg-sequential/q_dense_1/ReadVariableOp_4:value:0*
T0*
_output_shapes
: И
sequential/q_dense_1/add_6AddV2sequential/q_dense_1/Neg_3:y:0sequential/q_dense_1/mul_6:z:0*
T0*
_output_shapes
: a
sequential/q_dense_1/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Н
sequential/q_dense_1/mul_7Mul%sequential/q_dense_1/mul_7/x:output:0sequential/q_dense_1/add_6:z:0*
T0*
_output_shapes
: x
#sequential/q_dense_1/StopGradient_3StopGradientsequential/q_dense_1/mul_7:z:0*
T0*
_output_shapes
: Р
%sequential/q_dense_1/ReadVariableOp_5ReadVariableOp.sequential_q_dense_1_readvariableop_3_resource*
_output_shapes
: *
dtype0е
sequential/q_dense_1/add_7AddV2-sequential/q_dense_1/ReadVariableOp_5:value:0,sequential/q_dense_1/StopGradient_3:output:0*
T0*
_output_shapes
: ж
sequential/q_dense_1/BiasAddBiasAdd'sequential/q_dense_1/Reshape_2:output:0sequential/q_dense_1/add_7:z:0*
T0*+
_output_shapes
:          a
sequential/q_activation_1/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :a
sequential/q_activation_1/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :Щ
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
value	B : Я
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
value	B : Е
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
 *   AХ
sequential/q_activation_1/subSub$sequential/q_activation_1/Cast_2:y:0(sequential/q_activation_1/sub/y:output:0*
T0*
_output_shapes
: Ф
sequential/q_activation_1/Pow_2Pow(sequential/q_activation_1/Const:output:0!sequential/q_activation_1/sub:z:0*
T0*
_output_shapes
: Т
sequential/q_activation_1/sub_1Sub$sequential/q_activation_1/Cast_1:y:0#sequential/q_activation_1/Pow_2:z:0*
T0*
_output_shapes
: ▓
#sequential/q_activation_1/LessEqual	LessEqual%sequential/q_dense_1/BiasAdd:output:0#sequential/q_activation_1/sub_1:z:0*
T0*+
_output_shapes
:          Г
sequential/q_activation_1/ReluRelu%sequential/q_dense_1/BiasAdd:output:0*
T0*+
_output_shapes
:          ~
)sequential/q_activation_1/ones_like/ShapeShape%sequential/q_dense_1/BiasAdd:output:0*
T0*
_output_shapes
:n
)sequential/q_activation_1/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  А?╔
#sequential/q_activation_1/ones_likeFill2sequential/q_activation_1/ones_like/Shape:output:02sequential/q_activation_1/ones_like/Const:output:0*
T0*+
_output_shapes
:          Т
sequential/q_activation_1/sub_2Sub$sequential/q_activation_1/Cast_1:y:0#sequential/q_activation_1/Pow_2:z:0*
T0*
_output_shapes
: н
sequential/q_activation_1/mulMul,sequential/q_activation_1/ones_like:output:0#sequential/q_activation_1/sub_2:z:0*
T0*+
_output_shapes
:          ▐
"sequential/q_activation_1/SelectV2SelectV2'sequential/q_activation_1/LessEqual:z:0,sequential/q_activation_1/Relu:activations:0!sequential/q_activation_1/mul:z:0*
T0*+
_output_shapes
:          з
sequential/q_activation_1/mul_1Mul%sequential/q_dense_1/BiasAdd:output:0"sequential/q_activation_1/Cast:y:0*
T0*+
_output_shapes
:          н
!sequential/q_activation_1/truedivRealDiv#sequential/q_activation_1/mul_1:z:0$sequential/q_activation_1/Cast_1:y:0*
T0*+
_output_shapes
:          Б
sequential/q_activation_1/NegNeg%sequential/q_activation_1/truediv:z:0*
T0*+
_output_shapes
:          Е
sequential/q_activation_1/RoundRound%sequential/q_activation_1/truediv:z:0*
T0*+
_output_shapes
:          д
sequential/q_activation_1/addAddV2!sequential/q_activation_1/Neg:y:0#sequential/q_activation_1/Round:y:0*
T0*+
_output_shapes
:          П
&sequential/q_activation_1/StopGradientStopGradient!sequential/q_activation_1/add:z:0*
T0*+
_output_shapes
:          ╢
sequential/q_activation_1/add_1AddV2%sequential/q_activation_1/truediv:z:0/sequential/q_activation_1/StopGradient:output:0*
T0*+
_output_shapes
:          н
#sequential/q_activation_1/truediv_1RealDiv#sequential/q_activation_1/add_1:z:0"sequential/q_activation_1/Cast:y:0*
T0*+
_output_shapes
:          j
%sequential/q_activation_1/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?г
#sequential/q_activation_1/truediv_2RealDiv.sequential/q_activation_1/truediv_2/x:output:0"sequential/q_activation_1/Cast:y:0*
T0*
_output_shapes
: f
!sequential/q_activation_1/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ь
sequential/q_activation_1/sub_3Sub*sequential/q_activation_1/sub_3/x:output:0'sequential/q_activation_1/truediv_2:z:0*
T0*
_output_shapes
: ╛
/sequential/q_activation_1/clip_by_value/MinimumMinimum'sequential/q_activation_1/truediv_1:z:0#sequential/q_activation_1/sub_3:z:0*
T0*+
_output_shapes
:          n
)sequential/q_activation_1/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    ╤
'sequential/q_activation_1/clip_by_valueMaximum3sequential/q_activation_1/clip_by_value/Minimum:z:02sequential/q_activation_1/clip_by_value/y:output:0*
T0*+
_output_shapes
:          п
sequential/q_activation_1/mul_2Mul$sequential/q_activation_1/Cast_1:y:0+sequential/q_activation_1/clip_by_value:z:0*
T0*+
_output_shapes
:          Й
sequential/q_activation_1/Neg_1Neg+sequential/q_activation_1/SelectV2:output:0*
T0*+
_output_shapes
:          и
sequential/q_activation_1/add_2AddV2#sequential/q_activation_1/Neg_1:y:0#sequential/q_activation_1/mul_2:z:0*
T0*+
_output_shapes
:          f
!sequential/q_activation_1/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?н
sequential/q_activation_1/mul_3Mul*sequential/q_activation_1/mul_3/x:output:0#sequential/q_activation_1/add_2:z:0*
T0*+
_output_shapes
:          У
(sequential/q_activation_1/StopGradient_1StopGradient#sequential/q_activation_1/mul_3:z:0*
T0*+
_output_shapes
:          ╛
sequential/q_activation_1/add_3AddV2+sequential/q_activation_1/SelectV2:output:01sequential/q_activation_1/StopGradient_1:output:0*
T0*+
_output_shapes
:          \
sequential/q_dense_2/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :\
sequential/q_dense_2/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : К
sequential/q_dense_2/PowPow#sequential/q_dense_2/Pow/x:output:0#sequential/q_dense_2/Pow/y:output:0*
T0*
_output_shapes
: o
sequential/q_dense_2/CastCastsequential/q_dense_2/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: Р
#sequential/q_dense_2/ReadVariableOpReadVariableOp,sequential_q_dense_2_readvariableop_resource*
_output_shapes

:  *
dtype0_
sequential/q_dense_2/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFЪ
sequential/q_dense_2/mulMul+sequential/q_dense_2/ReadVariableOp:value:0#sequential/q_dense_2/mul/y:output:0*
T0*
_output_shapes

:  Н
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

:  И
sequential/q_dense_2/addAddV2sequential/q_dense_2/Neg:y:0sequential/q_dense_2/Round:y:0*
T0*
_output_shapes

:  x
!sequential/q_dense_2/StopGradientStopGradientsequential/q_dense_2/add:z:0*
T0*
_output_shapes

:  Ъ
sequential/q_dense_2/add_1AddV2 sequential/q_dense_2/truediv:z:0*sequential/q_dense_2/StopGradient:output:0*
T0*
_output_shapes

:  q
,sequential/q_dense_2/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * №F╡
*sequential/q_dense_2/clip_by_value/MinimumMinimumsequential/q_dense_2/add_1:z:05sequential/q_dense_2/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  i
$sequential/q_dense_2/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞╡
"sequential/q_dense_2/clip_by_valueMaximum.sequential/q_dense_2/clip_by_value/Minimum:z:0-sequential/q_dense_2/clip_by_value/y:output:0*
T0*
_output_shapes

:  С
sequential/q_dense_2/mul_1Mulsequential/q_dense_2/Cast:y:0&sequential/q_dense_2/clip_by_value:z:0*
T0*
_output_shapes

:  e
 sequential/q_dense_2/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFЭ
sequential/q_dense_2/truediv_1RealDivsequential/q_dense_2/mul_1:z:0)sequential/q_dense_2/truediv_1/y:output:0*
T0*
_output_shapes

:  a
sequential/q_dense_2/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Х
sequential/q_dense_2/mul_2Mul%sequential/q_dense_2/mul_2/x:output:0"sequential/q_dense_2/truediv_1:z:0*
T0*
_output_shapes

:  Т
%sequential/q_dense_2/ReadVariableOp_1ReadVariableOp,sequential_q_dense_2_readvariableop_resource*
_output_shapes

:  *
dtype0y
sequential/q_dense_2/Neg_1Neg-sequential/q_dense_2/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  М
sequential/q_dense_2/add_2AddV2sequential/q_dense_2/Neg_1:y:0sequential/q_dense_2/mul_2:z:0*
T0*
_output_shapes

:  a
sequential/q_dense_2/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?С
sequential/q_dense_2/mul_3Mul%sequential/q_dense_2/mul_3/x:output:0sequential/q_dense_2/add_2:z:0*
T0*
_output_shapes

:  |
#sequential/q_dense_2/StopGradient_1StopGradientsequential/q_dense_2/mul_3:z:0*
T0*
_output_shapes

:  Т
%sequential/q_dense_2/ReadVariableOp_2ReadVariableOp,sequential_q_dense_2_readvariableop_resource*
_output_shapes

:  *
dtype0й
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
valueB"        л
sequential/q_dense_2/ReshapeReshape#sequential/q_activation_1/add_3:z:0+sequential/q_dense_2/Reshape/shape:output:0*
T0*'
_output_shapes
:          t
#sequential/q_dense_2/transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       в
sequential/q_dense_2/transpose	Transposesequential/q_dense_2/add_3:z:0,sequential/q_dense_2/transpose/perm:output:0*
T0*
_output_shapes

:  u
$sequential/q_dense_2/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"        е
sequential/q_dense_2/Reshape_1Reshape"sequential/q_dense_2/transpose:y:0-sequential/q_dense_2/Reshape_1/shape:output:0*
T0*
_output_shapes

:  з
sequential/q_dense_2/MatMulMatMul%sequential/q_dense_2/Reshape:output:0'sequential/q_dense_2/Reshape_1:output:0*
T0*'
_output_shapes
:          h
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
:╡
sequential/q_dense_2/Reshape_2Reshape%sequential/q_dense_2/MatMul:product:0-sequential/q_dense_2/Reshape_2/shape:output:0*
T0*+
_output_shapes
:          ^
sequential/q_dense_2/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :^
sequential/q_dense_2/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Р
sequential/q_dense_2/Pow_1Pow%sequential/q_dense_2/Pow_1/x:output:0%sequential/q_dense_2/Pow_1/y:output:0*
T0*
_output_shapes
: s
sequential/q_dense_2/Cast_1Castsequential/q_dense_2/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: Р
%sequential/q_dense_2/ReadVariableOp_3ReadVariableOp.sequential_q_dense_2_readvariableop_3_resource*
_output_shapes
: *
dtype0a
sequential/q_dense_2/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFЬ
sequential/q_dense_2/mul_4Mul-sequential/q_dense_2/ReadVariableOp_3:value:0%sequential/q_dense_2/mul_4/y:output:0*
T0*
_output_shapes
: П
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
: К
sequential/q_dense_2/add_4AddV2sequential/q_dense_2/Neg_2:y:0 sequential/q_dense_2/Round_1:y:0*
T0*
_output_shapes
: x
#sequential/q_dense_2/StopGradient_2StopGradientsequential/q_dense_2/add_4:z:0*
T0*
_output_shapes
: Ъ
sequential/q_dense_2/add_5AddV2"sequential/q_dense_2/truediv_2:z:0,sequential/q_dense_2/StopGradient_2:output:0*
T0*
_output_shapes
: s
.sequential/q_dense_2/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * №F╡
,sequential/q_dense_2/clip_by_value_1/MinimumMinimumsequential/q_dense_2/add_5:z:07sequential/q_dense_2/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: k
&sequential/q_dense_2/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞╖
$sequential/q_dense_2/clip_by_value_1Maximum0sequential/q_dense_2/clip_by_value_1/Minimum:z:0/sequential/q_dense_2/clip_by_value_1/y:output:0*
T0*
_output_shapes
: С
sequential/q_dense_2/mul_5Mulsequential/q_dense_2/Cast_1:y:0(sequential/q_dense_2/clip_by_value_1:z:0*
T0*
_output_shapes
: e
 sequential/q_dense_2/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFЩ
sequential/q_dense_2/truediv_3RealDivsequential/q_dense_2/mul_5:z:0)sequential/q_dense_2/truediv_3/y:output:0*
T0*
_output_shapes
: a
sequential/q_dense_2/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?С
sequential/q_dense_2/mul_6Mul%sequential/q_dense_2/mul_6/x:output:0"sequential/q_dense_2/truediv_3:z:0*
T0*
_output_shapes
: Р
%sequential/q_dense_2/ReadVariableOp_4ReadVariableOp.sequential_q_dense_2_readvariableop_3_resource*
_output_shapes
: *
dtype0u
sequential/q_dense_2/Neg_3Neg-sequential/q_dense_2/ReadVariableOp_4:value:0*
T0*
_output_shapes
: И
sequential/q_dense_2/add_6AddV2sequential/q_dense_2/Neg_3:y:0sequential/q_dense_2/mul_6:z:0*
T0*
_output_shapes
: a
sequential/q_dense_2/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Н
sequential/q_dense_2/mul_7Mul%sequential/q_dense_2/mul_7/x:output:0sequential/q_dense_2/add_6:z:0*
T0*
_output_shapes
: x
#sequential/q_dense_2/StopGradient_3StopGradientsequential/q_dense_2/mul_7:z:0*
T0*
_output_shapes
: Р
%sequential/q_dense_2/ReadVariableOp_5ReadVariableOp.sequential_q_dense_2_readvariableop_3_resource*
_output_shapes
: *
dtype0е
sequential/q_dense_2/add_7AddV2-sequential/q_dense_2/ReadVariableOp_5:value:0,sequential/q_dense_2/StopGradient_3:output:0*
T0*
_output_shapes
: ж
sequential/q_dense_2/BiasAddBiasAdd'sequential/q_dense_2/Reshape_2:output:0sequential/q_dense_2/add_7:z:0*
T0*+
_output_shapes
:          a
sequential/q_activation_2/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :a
sequential/q_activation_2/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :Щ
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
value	B : Я
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
value	B : Е
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
 *   AХ
sequential/q_activation_2/subSub$sequential/q_activation_2/Cast_2:y:0(sequential/q_activation_2/sub/y:output:0*
T0*
_output_shapes
: Ф
sequential/q_activation_2/Pow_2Pow(sequential/q_activation_2/Const:output:0!sequential/q_activation_2/sub:z:0*
T0*
_output_shapes
: Т
sequential/q_activation_2/sub_1Sub$sequential/q_activation_2/Cast_1:y:0#sequential/q_activation_2/Pow_2:z:0*
T0*
_output_shapes
: ▓
#sequential/q_activation_2/LessEqual	LessEqual%sequential/q_dense_2/BiasAdd:output:0#sequential/q_activation_2/sub_1:z:0*
T0*+
_output_shapes
:          Г
sequential/q_activation_2/ReluRelu%sequential/q_dense_2/BiasAdd:output:0*
T0*+
_output_shapes
:          ~
)sequential/q_activation_2/ones_like/ShapeShape%sequential/q_dense_2/BiasAdd:output:0*
T0*
_output_shapes
:n
)sequential/q_activation_2/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  А?╔
#sequential/q_activation_2/ones_likeFill2sequential/q_activation_2/ones_like/Shape:output:02sequential/q_activation_2/ones_like/Const:output:0*
T0*+
_output_shapes
:          Т
sequential/q_activation_2/sub_2Sub$sequential/q_activation_2/Cast_1:y:0#sequential/q_activation_2/Pow_2:z:0*
T0*
_output_shapes
: н
sequential/q_activation_2/mulMul,sequential/q_activation_2/ones_like:output:0#sequential/q_activation_2/sub_2:z:0*
T0*+
_output_shapes
:          ▐
"sequential/q_activation_2/SelectV2SelectV2'sequential/q_activation_2/LessEqual:z:0,sequential/q_activation_2/Relu:activations:0!sequential/q_activation_2/mul:z:0*
T0*+
_output_shapes
:          з
sequential/q_activation_2/mul_1Mul%sequential/q_dense_2/BiasAdd:output:0"sequential/q_activation_2/Cast:y:0*
T0*+
_output_shapes
:          н
!sequential/q_activation_2/truedivRealDiv#sequential/q_activation_2/mul_1:z:0$sequential/q_activation_2/Cast_1:y:0*
T0*+
_output_shapes
:          Б
sequential/q_activation_2/NegNeg%sequential/q_activation_2/truediv:z:0*
T0*+
_output_shapes
:          Е
sequential/q_activation_2/RoundRound%sequential/q_activation_2/truediv:z:0*
T0*+
_output_shapes
:          д
sequential/q_activation_2/addAddV2!sequential/q_activation_2/Neg:y:0#sequential/q_activation_2/Round:y:0*
T0*+
_output_shapes
:          П
&sequential/q_activation_2/StopGradientStopGradient!sequential/q_activation_2/add:z:0*
T0*+
_output_shapes
:          ╢
sequential/q_activation_2/add_1AddV2%sequential/q_activation_2/truediv:z:0/sequential/q_activation_2/StopGradient:output:0*
T0*+
_output_shapes
:          н
#sequential/q_activation_2/truediv_1RealDiv#sequential/q_activation_2/add_1:z:0"sequential/q_activation_2/Cast:y:0*
T0*+
_output_shapes
:          j
%sequential/q_activation_2/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?г
#sequential/q_activation_2/truediv_2RealDiv.sequential/q_activation_2/truediv_2/x:output:0"sequential/q_activation_2/Cast:y:0*
T0*
_output_shapes
: f
!sequential/q_activation_2/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ь
sequential/q_activation_2/sub_3Sub*sequential/q_activation_2/sub_3/x:output:0'sequential/q_activation_2/truediv_2:z:0*
T0*
_output_shapes
: ╛
/sequential/q_activation_2/clip_by_value/MinimumMinimum'sequential/q_activation_2/truediv_1:z:0#sequential/q_activation_2/sub_3:z:0*
T0*+
_output_shapes
:          n
)sequential/q_activation_2/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    ╤
'sequential/q_activation_2/clip_by_valueMaximum3sequential/q_activation_2/clip_by_value/Minimum:z:02sequential/q_activation_2/clip_by_value/y:output:0*
T0*+
_output_shapes
:          п
sequential/q_activation_2/mul_2Mul$sequential/q_activation_2/Cast_1:y:0+sequential/q_activation_2/clip_by_value:z:0*
T0*+
_output_shapes
:          Й
sequential/q_activation_2/Neg_1Neg+sequential/q_activation_2/SelectV2:output:0*
T0*+
_output_shapes
:          и
sequential/q_activation_2/add_2AddV2#sequential/q_activation_2/Neg_1:y:0#sequential/q_activation_2/mul_2:z:0*
T0*+
_output_shapes
:          f
!sequential/q_activation_2/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?н
sequential/q_activation_2/mul_3Mul*sequential/q_activation_2/mul_3/x:output:0#sequential/q_activation_2/add_2:z:0*
T0*+
_output_shapes
:          У
(sequential/q_activation_2/StopGradient_1StopGradient#sequential/q_activation_2/mul_3:z:0*
T0*+
_output_shapes
:          ╛
sequential/q_activation_2/add_3AddV2+sequential/q_activation_2/SelectV2:output:01sequential/q_activation_2/StopGradient_1:output:0*
T0*+
_output_shapes
:          X
Mean/reduction_indicesConst*
_output_shapes
: *
dtype0*
value	B :Д
MeanMean#sequential/q_activation_2/add_3:z:0Mean/reduction_indices:output:0*
T0*'
_output_shapes
:          ^
sequential_1/q_dense_3/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :^
sequential_1/q_dense_3/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : Р
sequential_1/q_dense_3/PowPow%sequential_1/q_dense_3/Pow/x:output:0%sequential_1/q_dense_3/Pow/y:output:0*
T0*
_output_shapes
: s
sequential_1/q_dense_3/CastCastsequential_1/q_dense_3/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: Ф
%sequential_1/q_dense_3/ReadVariableOpReadVariableOp.sequential_1_q_dense_3_readvariableop_resource*
_output_shapes

:  *
dtype0a
sequential_1/q_dense_3/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFа
sequential_1/q_dense_3/mulMul-sequential_1/q_dense_3/ReadVariableOp:value:0%sequential_1/q_dense_3/mul/y:output:0*
T0*
_output_shapes

:  У
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

:  О
sequential_1/q_dense_3/addAddV2sequential_1/q_dense_3/Neg:y:0 sequential_1/q_dense_3/Round:y:0*
T0*
_output_shapes

:  |
#sequential_1/q_dense_3/StopGradientStopGradientsequential_1/q_dense_3/add:z:0*
T0*
_output_shapes

:  а
sequential_1/q_dense_3/add_1AddV2"sequential_1/q_dense_3/truediv:z:0,sequential_1/q_dense_3/StopGradient:output:0*
T0*
_output_shapes

:  s
.sequential_1/q_dense_3/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * №F╗
,sequential_1/q_dense_3/clip_by_value/MinimumMinimum sequential_1/q_dense_3/add_1:z:07sequential_1/q_dense_3/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  k
&sequential_1/q_dense_3/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞╗
$sequential_1/q_dense_3/clip_by_valueMaximum0sequential_1/q_dense_3/clip_by_value/Minimum:z:0/sequential_1/q_dense_3/clip_by_value/y:output:0*
T0*
_output_shapes

:  Ч
sequential_1/q_dense_3/mul_1Mulsequential_1/q_dense_3/Cast:y:0(sequential_1/q_dense_3/clip_by_value:z:0*
T0*
_output_shapes

:  g
"sequential_1/q_dense_3/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFг
 sequential_1/q_dense_3/truediv_1RealDiv sequential_1/q_dense_3/mul_1:z:0+sequential_1/q_dense_3/truediv_1/y:output:0*
T0*
_output_shapes

:  c
sequential_1/q_dense_3/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ы
sequential_1/q_dense_3/mul_2Mul'sequential_1/q_dense_3/mul_2/x:output:0$sequential_1/q_dense_3/truediv_1:z:0*
T0*
_output_shapes

:  Ц
'sequential_1/q_dense_3/ReadVariableOp_1ReadVariableOp.sequential_1_q_dense_3_readvariableop_resource*
_output_shapes

:  *
dtype0}
sequential_1/q_dense_3/Neg_1Neg/sequential_1/q_dense_3/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  Т
sequential_1/q_dense_3/add_2AddV2 sequential_1/q_dense_3/Neg_1:y:0 sequential_1/q_dense_3/mul_2:z:0*
T0*
_output_shapes

:  c
sequential_1/q_dense_3/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ч
sequential_1/q_dense_3/mul_3Mul'sequential_1/q_dense_3/mul_3/x:output:0 sequential_1/q_dense_3/add_2:z:0*
T0*
_output_shapes

:  А
%sequential_1/q_dense_3/StopGradient_1StopGradient sequential_1/q_dense_3/mul_3:z:0*
T0*
_output_shapes

:  Ц
'sequential_1/q_dense_3/ReadVariableOp_2ReadVariableOp.sequential_1_q_dense_3_readvariableop_resource*
_output_shapes

:  *
dtype0п
sequential_1/q_dense_3/add_3AddV2/sequential_1/q_dense_3/ReadVariableOp_2:value:0.sequential_1/q_dense_3/StopGradient_1:output:0*
T0*
_output_shapes

:  К
sequential_1/q_dense_3/MatMulMatMulMean:output:0 sequential_1/q_dense_3/add_3:z:0*
T0*'
_output_shapes
:          `
sequential_1/q_dense_3/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :`
sequential_1/q_dense_3/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Ц
sequential_1/q_dense_3/Pow_1Pow'sequential_1/q_dense_3/Pow_1/x:output:0'sequential_1/q_dense_3/Pow_1/y:output:0*
T0*
_output_shapes
: w
sequential_1/q_dense_3/Cast_1Cast sequential_1/q_dense_3/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: Ф
'sequential_1/q_dense_3/ReadVariableOp_3ReadVariableOp0sequential_1_q_dense_3_readvariableop_3_resource*
_output_shapes
: *
dtype0c
sequential_1/q_dense_3/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFв
sequential_1/q_dense_3/mul_4Mul/sequential_1/q_dense_3/ReadVariableOp_3:value:0'sequential_1/q_dense_3/mul_4/y:output:0*
T0*
_output_shapes
: Х
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
: Р
sequential_1/q_dense_3/add_4AddV2 sequential_1/q_dense_3/Neg_2:y:0"sequential_1/q_dense_3/Round_1:y:0*
T0*
_output_shapes
: |
%sequential_1/q_dense_3/StopGradient_2StopGradient sequential_1/q_dense_3/add_4:z:0*
T0*
_output_shapes
: а
sequential_1/q_dense_3/add_5AddV2$sequential_1/q_dense_3/truediv_2:z:0.sequential_1/q_dense_3/StopGradient_2:output:0*
T0*
_output_shapes
: u
0sequential_1/q_dense_3/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * №F╗
.sequential_1/q_dense_3/clip_by_value_1/MinimumMinimum sequential_1/q_dense_3/add_5:z:09sequential_1/q_dense_3/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: m
(sequential_1/q_dense_3/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞╜
&sequential_1/q_dense_3/clip_by_value_1Maximum2sequential_1/q_dense_3/clip_by_value_1/Minimum:z:01sequential_1/q_dense_3/clip_by_value_1/y:output:0*
T0*
_output_shapes
: Ч
sequential_1/q_dense_3/mul_5Mul!sequential_1/q_dense_3/Cast_1:y:0*sequential_1/q_dense_3/clip_by_value_1:z:0*
T0*
_output_shapes
: g
"sequential_1/q_dense_3/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFЯ
 sequential_1/q_dense_3/truediv_3RealDiv sequential_1/q_dense_3/mul_5:z:0+sequential_1/q_dense_3/truediv_3/y:output:0*
T0*
_output_shapes
: c
sequential_1/q_dense_3/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ч
sequential_1/q_dense_3/mul_6Mul'sequential_1/q_dense_3/mul_6/x:output:0$sequential_1/q_dense_3/truediv_3:z:0*
T0*
_output_shapes
: Ф
'sequential_1/q_dense_3/ReadVariableOp_4ReadVariableOp0sequential_1_q_dense_3_readvariableop_3_resource*
_output_shapes
: *
dtype0y
sequential_1/q_dense_3/Neg_3Neg/sequential_1/q_dense_3/ReadVariableOp_4:value:0*
T0*
_output_shapes
: О
sequential_1/q_dense_3/add_6AddV2 sequential_1/q_dense_3/Neg_3:y:0 sequential_1/q_dense_3/mul_6:z:0*
T0*
_output_shapes
: c
sequential_1/q_dense_3/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?У
sequential_1/q_dense_3/mul_7Mul'sequential_1/q_dense_3/mul_7/x:output:0 sequential_1/q_dense_3/add_6:z:0*
T0*
_output_shapes
: |
%sequential_1/q_dense_3/StopGradient_3StopGradient sequential_1/q_dense_3/mul_7:z:0*
T0*
_output_shapes
: Ф
'sequential_1/q_dense_3/ReadVariableOp_5ReadVariableOp0sequential_1_q_dense_3_readvariableop_3_resource*
_output_shapes
: *
dtype0л
sequential_1/q_dense_3/add_7AddV2/sequential_1/q_dense_3/ReadVariableOp_5:value:0.sequential_1/q_dense_3/StopGradient_3:output:0*
T0*
_output_shapes
: ж
sequential_1/q_dense_3/BiasAddBiasAdd'sequential_1/q_dense_3/MatMul:product:0 sequential_1/q_dense_3/add_7:z:0*
T0*'
_output_shapes
:          c
!sequential_1/q_activation_3/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :c
!sequential_1/q_activation_3/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :Я
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
value	B : е
!sequential_1/q_activation_3/Pow_1Pow,sequential_1/q_activation_3/Pow_1/x:output:0,sequential_1/q_activation_3/Pow_1/y:output:0*
T0*
_output_shapes
: Б
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
value	B : Й
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
 *   AЫ
sequential_1/q_activation_3/subSub&sequential_1/q_activation_3/Cast_2:y:0*sequential_1/q_activation_3/sub/y:output:0*
T0*
_output_shapes
: Ъ
!sequential_1/q_activation_3/Pow_2Pow*sequential_1/q_activation_3/Const:output:0#sequential_1/q_activation_3/sub:z:0*
T0*
_output_shapes
: Ш
!sequential_1/q_activation_3/sub_1Sub&sequential_1/q_activation_3/Cast_1:y:0%sequential_1/q_activation_3/Pow_2:z:0*
T0*
_output_shapes
: ┤
%sequential_1/q_activation_3/LessEqual	LessEqual'sequential_1/q_dense_3/BiasAdd:output:0%sequential_1/q_activation_3/sub_1:z:0*
T0*'
_output_shapes
:          Г
 sequential_1/q_activation_3/ReluRelu'sequential_1/q_dense_3/BiasAdd:output:0*
T0*'
_output_shapes
:          В
+sequential_1/q_activation_3/ones_like/ShapeShape'sequential_1/q_dense_3/BiasAdd:output:0*
T0*
_output_shapes
:p
+sequential_1/q_activation_3/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  А?╦
%sequential_1/q_activation_3/ones_likeFill4sequential_1/q_activation_3/ones_like/Shape:output:04sequential_1/q_activation_3/ones_like/Const:output:0*
T0*'
_output_shapes
:          Ш
!sequential_1/q_activation_3/sub_2Sub&sequential_1/q_activation_3/Cast_1:y:0%sequential_1/q_activation_3/Pow_2:z:0*
T0*
_output_shapes
: п
sequential_1/q_activation_3/mulMul.sequential_1/q_activation_3/ones_like:output:0%sequential_1/q_activation_3/sub_2:z:0*
T0*'
_output_shapes
:          т
$sequential_1/q_activation_3/SelectV2SelectV2)sequential_1/q_activation_3/LessEqual:z:0.sequential_1/q_activation_3/Relu:activations:0#sequential_1/q_activation_3/mul:z:0*
T0*'
_output_shapes
:          й
!sequential_1/q_activation_3/mul_1Mul'sequential_1/q_dense_3/BiasAdd:output:0$sequential_1/q_activation_3/Cast:y:0*
T0*'
_output_shapes
:          п
#sequential_1/q_activation_3/truedivRealDiv%sequential_1/q_activation_3/mul_1:z:0&sequential_1/q_activation_3/Cast_1:y:0*
T0*'
_output_shapes
:          Б
sequential_1/q_activation_3/NegNeg'sequential_1/q_activation_3/truediv:z:0*
T0*'
_output_shapes
:          Е
!sequential_1/q_activation_3/RoundRound'sequential_1/q_activation_3/truediv:z:0*
T0*'
_output_shapes
:          ж
sequential_1/q_activation_3/addAddV2#sequential_1/q_activation_3/Neg:y:0%sequential_1/q_activation_3/Round:y:0*
T0*'
_output_shapes
:          П
(sequential_1/q_activation_3/StopGradientStopGradient#sequential_1/q_activation_3/add:z:0*
T0*'
_output_shapes
:          ╕
!sequential_1/q_activation_3/add_1AddV2'sequential_1/q_activation_3/truediv:z:01sequential_1/q_activation_3/StopGradient:output:0*
T0*'
_output_shapes
:          п
%sequential_1/q_activation_3/truediv_1RealDiv%sequential_1/q_activation_3/add_1:z:0$sequential_1/q_activation_3/Cast:y:0*
T0*'
_output_shapes
:          l
'sequential_1/q_activation_3/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?й
%sequential_1/q_activation_3/truediv_2RealDiv0sequential_1/q_activation_3/truediv_2/x:output:0$sequential_1/q_activation_3/Cast:y:0*
T0*
_output_shapes
: h
#sequential_1/q_activation_3/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?в
!sequential_1/q_activation_3/sub_3Sub,sequential_1/q_activation_3/sub_3/x:output:0)sequential_1/q_activation_3/truediv_2:z:0*
T0*
_output_shapes
: └
1sequential_1/q_activation_3/clip_by_value/MinimumMinimum)sequential_1/q_activation_3/truediv_1:z:0%sequential_1/q_activation_3/sub_3:z:0*
T0*'
_output_shapes
:          p
+sequential_1/q_activation_3/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    ╙
)sequential_1/q_activation_3/clip_by_valueMaximum5sequential_1/q_activation_3/clip_by_value/Minimum:z:04sequential_1/q_activation_3/clip_by_value/y:output:0*
T0*'
_output_shapes
:          ▒
!sequential_1/q_activation_3/mul_2Mul&sequential_1/q_activation_3/Cast_1:y:0-sequential_1/q_activation_3/clip_by_value:z:0*
T0*'
_output_shapes
:          Й
!sequential_1/q_activation_3/Neg_1Neg-sequential_1/q_activation_3/SelectV2:output:0*
T0*'
_output_shapes
:          к
!sequential_1/q_activation_3/add_2AddV2%sequential_1/q_activation_3/Neg_1:y:0%sequential_1/q_activation_3/mul_2:z:0*
T0*'
_output_shapes
:          h
#sequential_1/q_activation_3/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?п
!sequential_1/q_activation_3/mul_3Mul,sequential_1/q_activation_3/mul_3/x:output:0%sequential_1/q_activation_3/add_2:z:0*
T0*'
_output_shapes
:          У
*sequential_1/q_activation_3/StopGradient_1StopGradient%sequential_1/q_activation_3/mul_3:z:0*
T0*'
_output_shapes
:          └
!sequential_1/q_activation_3/add_3AddV2-sequential_1/q_activation_3/SelectV2:output:03sequential_1/q_activation_3/StopGradient_1:output:0*
T0*'
_output_shapes
:          ^
sequential_1/q_dense_4/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :^
sequential_1/q_dense_4/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : Р
sequential_1/q_dense_4/PowPow%sequential_1/q_dense_4/Pow/x:output:0%sequential_1/q_dense_4/Pow/y:output:0*
T0*
_output_shapes
: s
sequential_1/q_dense_4/CastCastsequential_1/q_dense_4/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: Ф
%sequential_1/q_dense_4/ReadVariableOpReadVariableOp.sequential_1_q_dense_4_readvariableop_resource*
_output_shapes

: *
dtype0a
sequential_1/q_dense_4/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFа
sequential_1/q_dense_4/mulMul-sequential_1/q_dense_4/ReadVariableOp:value:0%sequential_1/q_dense_4/mul/y:output:0*
T0*
_output_shapes

: У
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

: О
sequential_1/q_dense_4/addAddV2sequential_1/q_dense_4/Neg:y:0 sequential_1/q_dense_4/Round:y:0*
T0*
_output_shapes

: |
#sequential_1/q_dense_4/StopGradientStopGradientsequential_1/q_dense_4/add:z:0*
T0*
_output_shapes

: а
sequential_1/q_dense_4/add_1AddV2"sequential_1/q_dense_4/truediv:z:0,sequential_1/q_dense_4/StopGradient:output:0*
T0*
_output_shapes

: s
.sequential_1/q_dense_4/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * №F╗
,sequential_1/q_dense_4/clip_by_value/MinimumMinimum sequential_1/q_dense_4/add_1:z:07sequential_1/q_dense_4/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: k
&sequential_1/q_dense_4/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞╗
$sequential_1/q_dense_4/clip_by_valueMaximum0sequential_1/q_dense_4/clip_by_value/Minimum:z:0/sequential_1/q_dense_4/clip_by_value/y:output:0*
T0*
_output_shapes

: Ч
sequential_1/q_dense_4/mul_1Mulsequential_1/q_dense_4/Cast:y:0(sequential_1/q_dense_4/clip_by_value:z:0*
T0*
_output_shapes

: g
"sequential_1/q_dense_4/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFг
 sequential_1/q_dense_4/truediv_1RealDiv sequential_1/q_dense_4/mul_1:z:0+sequential_1/q_dense_4/truediv_1/y:output:0*
T0*
_output_shapes

: c
sequential_1/q_dense_4/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ы
sequential_1/q_dense_4/mul_2Mul'sequential_1/q_dense_4/mul_2/x:output:0$sequential_1/q_dense_4/truediv_1:z:0*
T0*
_output_shapes

: Ц
'sequential_1/q_dense_4/ReadVariableOp_1ReadVariableOp.sequential_1_q_dense_4_readvariableop_resource*
_output_shapes

: *
dtype0}
sequential_1/q_dense_4/Neg_1Neg/sequential_1/q_dense_4/ReadVariableOp_1:value:0*
T0*
_output_shapes

: Т
sequential_1/q_dense_4/add_2AddV2 sequential_1/q_dense_4/Neg_1:y:0 sequential_1/q_dense_4/mul_2:z:0*
T0*
_output_shapes

: c
sequential_1/q_dense_4/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ч
sequential_1/q_dense_4/mul_3Mul'sequential_1/q_dense_4/mul_3/x:output:0 sequential_1/q_dense_4/add_2:z:0*
T0*
_output_shapes

: А
%sequential_1/q_dense_4/StopGradient_1StopGradient sequential_1/q_dense_4/mul_3:z:0*
T0*
_output_shapes

: Ц
'sequential_1/q_dense_4/ReadVariableOp_2ReadVariableOp.sequential_1_q_dense_4_readvariableop_resource*
_output_shapes

: *
dtype0п
sequential_1/q_dense_4/add_3AddV2/sequential_1/q_dense_4/ReadVariableOp_2:value:0.sequential_1/q_dense_4/StopGradient_1:output:0*
T0*
_output_shapes

: в
sequential_1/q_dense_4/MatMulMatMul%sequential_1/q_activation_3/add_3:z:0 sequential_1/q_dense_4/add_3:z:0*
T0*'
_output_shapes
:         `
sequential_1/q_dense_4/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :`
sequential_1/q_dense_4/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Ц
sequential_1/q_dense_4/Pow_1Pow'sequential_1/q_dense_4/Pow_1/x:output:0'sequential_1/q_dense_4/Pow_1/y:output:0*
T0*
_output_shapes
: w
sequential_1/q_dense_4/Cast_1Cast sequential_1/q_dense_4/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: Ф
'sequential_1/q_dense_4/ReadVariableOp_3ReadVariableOp0sequential_1_q_dense_4_readvariableop_3_resource*
_output_shapes
:*
dtype0c
sequential_1/q_dense_4/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFв
sequential_1/q_dense_4/mul_4Mul/sequential_1/q_dense_4/ReadVariableOp_3:value:0'sequential_1/q_dense_4/mul_4/y:output:0*
T0*
_output_shapes
:Х
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
:Р
sequential_1/q_dense_4/add_4AddV2 sequential_1/q_dense_4/Neg_2:y:0"sequential_1/q_dense_4/Round_1:y:0*
T0*
_output_shapes
:|
%sequential_1/q_dense_4/StopGradient_2StopGradient sequential_1/q_dense_4/add_4:z:0*
T0*
_output_shapes
:а
sequential_1/q_dense_4/add_5AddV2$sequential_1/q_dense_4/truediv_2:z:0.sequential_1/q_dense_4/StopGradient_2:output:0*
T0*
_output_shapes
:u
0sequential_1/q_dense_4/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * №F╗
.sequential_1/q_dense_4/clip_by_value_1/MinimumMinimum sequential_1/q_dense_4/add_5:z:09sequential_1/q_dense_4/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
:m
(sequential_1/q_dense_4/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞╜
&sequential_1/q_dense_4/clip_by_value_1Maximum2sequential_1/q_dense_4/clip_by_value_1/Minimum:z:01sequential_1/q_dense_4/clip_by_value_1/y:output:0*
T0*
_output_shapes
:Ч
sequential_1/q_dense_4/mul_5Mul!sequential_1/q_dense_4/Cast_1:y:0*sequential_1/q_dense_4/clip_by_value_1:z:0*
T0*
_output_shapes
:g
"sequential_1/q_dense_4/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFЯ
 sequential_1/q_dense_4/truediv_3RealDiv sequential_1/q_dense_4/mul_5:z:0+sequential_1/q_dense_4/truediv_3/y:output:0*
T0*
_output_shapes
:c
sequential_1/q_dense_4/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ч
sequential_1/q_dense_4/mul_6Mul'sequential_1/q_dense_4/mul_6/x:output:0$sequential_1/q_dense_4/truediv_3:z:0*
T0*
_output_shapes
:Ф
'sequential_1/q_dense_4/ReadVariableOp_4ReadVariableOp0sequential_1_q_dense_4_readvariableop_3_resource*
_output_shapes
:*
dtype0y
sequential_1/q_dense_4/Neg_3Neg/sequential_1/q_dense_4/ReadVariableOp_4:value:0*
T0*
_output_shapes
:О
sequential_1/q_dense_4/add_6AddV2 sequential_1/q_dense_4/Neg_3:y:0 sequential_1/q_dense_4/mul_6:z:0*
T0*
_output_shapes
:c
sequential_1/q_dense_4/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?У
sequential_1/q_dense_4/mul_7Mul'sequential_1/q_dense_4/mul_7/x:output:0 sequential_1/q_dense_4/add_6:z:0*
T0*
_output_shapes
:|
%sequential_1/q_dense_4/StopGradient_3StopGradient sequential_1/q_dense_4/mul_7:z:0*
T0*
_output_shapes
:Ф
'sequential_1/q_dense_4/ReadVariableOp_5ReadVariableOp0sequential_1_q_dense_4_readvariableop_3_resource*
_output_shapes
:*
dtype0л
sequential_1/q_dense_4/add_7AddV2/sequential_1/q_dense_4/ReadVariableOp_5:value:0.sequential_1/q_dense_4/StopGradient_3:output:0*
T0*
_output_shapes
:ж
sequential_1/q_dense_4/BiasAddBiasAdd'sequential_1/q_dense_4/MatMul:product:0 sequential_1/q_dense_4/add_7:z:0*
T0*'
_output_shapes
:         v
IdentityIdentity'sequential_1/q_dense_4/BiasAdd:output:0^NoOp*
T0*'
_output_shapes
:         °	
NoOpNoOp"^sequential/q_dense/ReadVariableOp$^sequential/q_dense/ReadVariableOp_1$^sequential/q_dense/ReadVariableOp_2$^sequential/q_dense/ReadVariableOp_3$^sequential/q_dense/ReadVariableOp_4$^sequential/q_dense/ReadVariableOp_5$^sequential/q_dense_1/ReadVariableOp&^sequential/q_dense_1/ReadVariableOp_1&^sequential/q_dense_1/ReadVariableOp_2&^sequential/q_dense_1/ReadVariableOp_3&^sequential/q_dense_1/ReadVariableOp_4&^sequential/q_dense_1/ReadVariableOp_5$^sequential/q_dense_2/ReadVariableOp&^sequential/q_dense_2/ReadVariableOp_1&^sequential/q_dense_2/ReadVariableOp_2&^sequential/q_dense_2/ReadVariableOp_3&^sequential/q_dense_2/ReadVariableOp_4&^sequential/q_dense_2/ReadVariableOp_5&^sequential_1/q_dense_3/ReadVariableOp(^sequential_1/q_dense_3/ReadVariableOp_1(^sequential_1/q_dense_3/ReadVariableOp_2(^sequential_1/q_dense_3/ReadVariableOp_3(^sequential_1/q_dense_3/ReadVariableOp_4(^sequential_1/q_dense_3/ReadVariableOp_5&^sequential_1/q_dense_4/ReadVariableOp(^sequential_1/q_dense_4/ReadVariableOp_1(^sequential_1/q_dense_4/ReadVariableOp_2(^sequential_1/q_dense_4/ReadVariableOp_3(^sequential_1/q_dense_4/ReadVariableOp_4(^sequential_1/q_dense_4/ReadVariableOp_5*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:         : : : : : : : : : : 2F
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
:         
 
_user_specified_nameinputs
╣
P
$__inference__update_step_xla_1242608
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
Ф
Ю
G__inference_sequential_layer_call_and_return_conditional_losses_1240688

inputs!
q_dense_1240347: 
q_dense_1240349: #
q_dense_1_1240489:  
q_dense_1_1240491: #
q_dense_2_1240631:  
q_dense_2_1240633: 
identityИвq_dense/StatefulPartitionedCallв!q_dense_1/StatefulPartitionedCallв!q_dense_2/StatefulPartitionedCall°
q_dense/StatefulPartitionedCallStatefulPartitionedCallinputsq_dense_1240347q_dense_1240349*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *M
fHRF
D__inference_q_dense_layer_call_and_return_conditional_losses_1240346ь
q_activation/PartitionedCallPartitionedCall(q_dense/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *R
fMRK
I__inference_q_activation_layer_call_and_return_conditional_losses_1240401Я
!q_dense_1/StatefulPartitionedCallStatefulPartitionedCall%q_activation/PartitionedCall:output:0q_dense_1_1240489q_dense_1_1240491*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *O
fJRH
F__inference_q_dense_1_layer_call_and_return_conditional_losses_1240488Є
q_activation_1/PartitionedCallPartitionedCall*q_dense_1/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *T
fORM
K__inference_q_activation_1_layer_call_and_return_conditional_losses_1240543б
!q_dense_2/StatefulPartitionedCallStatefulPartitionedCall'q_activation_1/PartitionedCall:output:0q_dense_2_1240631q_dense_2_1240633*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *O
fJRH
F__inference_q_dense_2_layer_call_and_return_conditional_losses_1240630Є
q_activation_2/PartitionedCallPartitionedCall*q_dense_2/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *T
fORM
K__inference_q_activation_2_layer_call_and_return_conditional_losses_1240685z
IdentityIdentity'q_activation_2/PartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:          ░
NoOpNoOp ^q_dense/StatefulPartitionedCall"^q_dense_1/StatefulPartitionedCall"^q_dense_2/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*6
_input_shapes%
#:         : : : : : : 2B
q_dense/StatefulPartitionedCallq_dense/StatefulPartitionedCall2F
!q_dense_1/StatefulPartitionedCall!q_dense_1/StatefulPartitionedCall2F
!q_dense_2/StatefulPartitionedCall!q_dense_2/StatefulPartitionedCall:S O
+
_output_shapes
:         
 
_user_specified_nameinputs
ш<
з
D__inference_q_dense_layer_call_and_return_conditional_losses_1243925

inputs)
readvariableop_resource: '
readvariableop_3_resource: 
identityИвReadVariableOpвReadVariableOp_1вReadVariableOp_2вReadVariableOp_3вReadVariableOp_4вReadVariableOp_5G
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
 *  АF[
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
 * №Fv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞v
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
 *  АF^
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
valueB"       d
ReshapeReshapeinputsReshape/shape:output:0*
T0*'
_output_shapes
:         _
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
valueB"       f
	Reshape_1Reshapetranspose:y:0Reshape_1/shape:output:0*
T0*
_output_shapes

: h
MatMulMatMulReshape:output:0Reshape_1:output:0*
T0*'
_output_shapes
:          S
Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :S
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
:          I
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
 *  АF]
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
 * №Fv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞x
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
 *  АFZ
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
:          c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:          ╢
NoOpNoOp^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:         : : 2 
ReadVariableOpReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_5:S O
+
_output_shapes
:         
 
_user_specified_nameinputs
ъ<
й
F__inference_q_dense_1_layer_call_and_return_conditional_losses_1240488

inputs)
readvariableop_resource:  '
readvariableop_3_resource: 
identityИвReadVariableOpвReadVariableOp_1вReadVariableOp_2вReadVariableOp_3вReadVariableOp_4вReadVariableOp_5G
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
 *  АF[
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
 * №Fv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞v
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
 *  АF^
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
valueB"        d
ReshapeReshapeinputsReshape/shape:output:0*
T0*'
_output_shapes
:          _
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
valueB"        f
	Reshape_1Reshapetranspose:y:0Reshape_1/shape:output:0*
T0*
_output_shapes

:  h
MatMulMatMulReshape:output:0Reshape_1:output:0*
T0*'
_output_shapes
:          S
Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :S
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
:          I
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
 *  АF]
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
 * №Fv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞x
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
 *  АFZ
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
:          c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:          ╢
NoOpNoOp^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:          : : 2 
ReadVariableOpReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_5:S O
+
_output_shapes
:          
 
_user_specified_nameinputs
╦
Ш
+__inference_q_dense_4_layer_call_fn_1244415

inputs
unknown: 
	unknown_0:
identityИвStatefulPartitionedCallр
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:         *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *O
fJRH
F__inference_q_dense_4_layer_call_and_return_conditional_losses_1241068o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:         `
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:          : : 22
StatefulPartitionedCallStatefulPartitionedCall:O K
'
_output_shapes
:          
 
_user_specified_nameinputs
й
е
G__inference_sequential_layer_call_and_return_conditional_losses_1240846
q_dense_input!
q_dense_1240827: 
q_dense_1240829: #
q_dense_1_1240833:  
q_dense_1_1240835: #
q_dense_2_1240839:  
q_dense_2_1240841: 
identityИвq_dense/StatefulPartitionedCallв!q_dense_1/StatefulPartitionedCallв!q_dense_2/StatefulPartitionedCall 
q_dense/StatefulPartitionedCallStatefulPartitionedCallq_dense_inputq_dense_1240827q_dense_1240829*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *M
fHRF
D__inference_q_dense_layer_call_and_return_conditional_losses_1240346ь
q_activation/PartitionedCallPartitionedCall(q_dense/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *R
fMRK
I__inference_q_activation_layer_call_and_return_conditional_losses_1240401Я
!q_dense_1/StatefulPartitionedCallStatefulPartitionedCall%q_activation/PartitionedCall:output:0q_dense_1_1240833q_dense_1_1240835*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *O
fJRH
F__inference_q_dense_1_layer_call_and_return_conditional_losses_1240488Є
q_activation_1/PartitionedCallPartitionedCall*q_dense_1/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *T
fORM
K__inference_q_activation_1_layer_call_and_return_conditional_losses_1240543б
!q_dense_2/StatefulPartitionedCallStatefulPartitionedCall'q_activation_1/PartitionedCall:output:0q_dense_2_1240839q_dense_2_1240841*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *O
fJRH
F__inference_q_dense_2_layer_call_and_return_conditional_losses_1240630Є
q_activation_2/PartitionedCallPartitionedCall*q_dense_2/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *T
fORM
K__inference_q_activation_2_layer_call_and_return_conditional_losses_1240685z
IdentityIdentity'q_activation_2/PartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:          ░
NoOpNoOp ^q_dense/StatefulPartitionedCall"^q_dense_1/StatefulPartitionedCall"^q_dense_2/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*6
_input_shapes%
#:         : : : : : : 2B
q_dense/StatefulPartitionedCallq_dense/StatefulPartitionedCall2F
!q_dense_1/StatefulPartitionedCall!q_dense_1/StatefulPartitionedCall2F
!q_dense_2/StatefulPartitionedCall!q_dense_2/StatefulPartitionedCall:Z V
+
_output_shapes
:         
'
_user_specified_nameq_dense_input
╦
Ш
+__inference_q_dense_3_layer_call_fn_1244284

inputs
unknown:  
	unknown_0: 
identityИвStatefulPartitionedCallр
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:          *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *O
fJRH
F__inference_q_dense_3_layer_call_and_return_conditional_losses_1240943o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:          `
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:          : : 22
StatefulPartitionedCallStatefulPartitionedCall:O K
'
_output_shapes
:          
 
_user_specified_nameinputs
█
Ш
+__inference_q_dense_1_layer_call_fn_1243988

inputs
unknown:  
	unknown_0: 
identityИвStatefulPartitionedCallф
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *O
fJRH
F__inference_q_dense_1_layer_call_and_return_conditional_losses_1240488s
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:          `
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:          : : 22
StatefulPartitionedCallStatefulPartitionedCall:S O
+
_output_shapes
:          
 
_user_specified_nameinputs
е
╤
.__inference_sequential_1_layer_call_fn_1243477

inputs
unknown:  
	unknown_0: 
	unknown_1: 
	unknown_2:
identityИвStatefulPartitionedCall¤
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0	unknown_1	unknown_2*
Tin	
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:         *&
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *R
fMRK
I__inference_sequential_1_layer_call_and_return_conditional_losses_1241142o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:         `
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:          : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:O K
'
_output_shapes
:          
 
_user_specified_nameinputs
█
Ш
+__inference_q_dense_2_layer_call_fn_1244136

inputs
unknown:  
	unknown_0: 
identityИвStatefulPartitionedCallф
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *O
fJRH
F__inference_q_dense_2_layer_call_and_return_conditional_losses_1240630s
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:          `
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:          : : 22
StatefulPartitionedCallStatefulPartitionedCall:S O
+
_output_shapes
:          
 
_user_specified_nameinputs
н
L
$__inference__update_step_xla_1242643
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
╣

√
6__inference_DeepSetsInvQuantised_layer_call_fn_1241489

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
identityИвStatefulPartitionedCall╙
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4	unknown_5	unknown_6	unknown_7	unknown_8*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:         *,
_read_only_resource_inputs

	
*2
config_proto" 

CPU

GPU2 *0J 8В *Z
fURS
Q__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_1241306o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:         `
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:         : : : : : : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:S O
+
_output_shapes
:         
 
_user_specified_nameinputs
╣
P
$__inference__update_step_xla_1242618
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
▄!
e
I__inference_q_activation_layer_call_and_return_conditional_losses_1240401

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
:          J
ReluReluinputs*
T0*+
_output_shapes
:          E
ones_like/ShapeShapeinputs*
T0*
_output_shapes
:T
ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  А?{
	ones_likeFillones_like/Shape:output:0ones_like/Const:output:0*
T0*+
_output_shapes
:          D
sub_2Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: _
mulMulones_like:output:0	sub_2:z:0*
T0*+
_output_shapes
:          v
SelectV2SelectV2LessEqual:z:0Relu:activations:0mul:z:0*
T0*+
_output_shapes
:          T
mul_1MulinputsCast:y:0*
T0*+
_output_shapes
:          _
truedivRealDiv	mul_1:z:0
Cast_1:y:0*
T0*+
_output_shapes
:          M
NegNegtruediv:z:0*
T0*+
_output_shapes
:          Q
RoundRoundtruediv:z:0*
T0*+
_output_shapes
:          V
addAddV2Neg:y:0	Round:y:0*
T0*+
_output_shapes
:          [
StopGradientStopGradientadd:z:0*
T0*+
_output_shapes
:          h
add_1AddV2truediv:z:0StopGradient:output:0*
T0*+
_output_shapes
:          _
	truediv_1RealDiv	add_1:z:0Cast:y:0*
T0*+
_output_shapes
:          P
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
:          T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    Г
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*+
_output_shapes
:          a
mul_2Mul
Cast_1:y:0clip_by_value:z:0*
T0*+
_output_shapes
:          U
Neg_1NegSelectV2:output:0*
T0*+
_output_shapes
:          Z
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*+
_output_shapes
:          L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?_
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*+
_output_shapes
:          _
StopGradient_1StopGradient	mul_3:z:0*
T0*+
_output_shapes
:          p
add_3AddV2SelectV2:output:0StopGradient_1:output:0*
T0*+
_output_shapes
:          U
IdentityIdentity	add_3:z:0*
T0*+
_output_shapes
:          "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:          :S O
+
_output_shapes
:          
 
_user_specified_nameinputs
ЕЄ
Ь
Q__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_1242046

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
identityИв!sequential/q_dense/ReadVariableOpв#sequential/q_dense/ReadVariableOp_1в#sequential/q_dense/ReadVariableOp_2в#sequential/q_dense/ReadVariableOp_3в#sequential/q_dense/ReadVariableOp_4в#sequential/q_dense/ReadVariableOp_5в#sequential/q_dense_1/ReadVariableOpв%sequential/q_dense_1/ReadVariableOp_1в%sequential/q_dense_1/ReadVariableOp_2в%sequential/q_dense_1/ReadVariableOp_3в%sequential/q_dense_1/ReadVariableOp_4в%sequential/q_dense_1/ReadVariableOp_5в#sequential/q_dense_2/ReadVariableOpв%sequential/q_dense_2/ReadVariableOp_1в%sequential/q_dense_2/ReadVariableOp_2в%sequential/q_dense_2/ReadVariableOp_3в%sequential/q_dense_2/ReadVariableOp_4в%sequential/q_dense_2/ReadVariableOp_5в%sequential_1/q_dense_3/ReadVariableOpв'sequential_1/q_dense_3/ReadVariableOp_1в'sequential_1/q_dense_3/ReadVariableOp_2в'sequential_1/q_dense_3/ReadVariableOp_3в'sequential_1/q_dense_3/ReadVariableOp_4в'sequential_1/q_dense_3/ReadVariableOp_5в%sequential_1/q_dense_4/ReadVariableOpв'sequential_1/q_dense_4/ReadVariableOp_1в'sequential_1/q_dense_4/ReadVariableOp_2в'sequential_1/q_dense_4/ReadVariableOp_3в'sequential_1/q_dense_4/ReadVariableOp_4в'sequential_1/q_dense_4/ReadVariableOp_5Z
sequential/q_dense/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :Z
sequential/q_dense/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : Д
sequential/q_dense/PowPow!sequential/q_dense/Pow/x:output:0!sequential/q_dense/Pow/y:output:0*
T0*
_output_shapes
: k
sequential/q_dense/CastCastsequential/q_dense/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: М
!sequential/q_dense/ReadVariableOpReadVariableOp*sequential_q_dense_readvariableop_resource*
_output_shapes

: *
dtype0]
sequential/q_dense/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFФ
sequential/q_dense/mulMul)sequential/q_dense/ReadVariableOp:value:0!sequential/q_dense/mul/y:output:0*
T0*
_output_shapes

: З
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

: В
sequential/q_dense/addAddV2sequential/q_dense/Neg:y:0sequential/q_dense/Round:y:0*
T0*
_output_shapes

: t
sequential/q_dense/StopGradientStopGradientsequential/q_dense/add:z:0*
T0*
_output_shapes

: Ф
sequential/q_dense/add_1AddV2sequential/q_dense/truediv:z:0(sequential/q_dense/StopGradient:output:0*
T0*
_output_shapes

: o
*sequential/q_dense/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * №Fп
(sequential/q_dense/clip_by_value/MinimumMinimumsequential/q_dense/add_1:z:03sequential/q_dense/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: g
"sequential/q_dense/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞п
 sequential/q_dense/clip_by_valueMaximum,sequential/q_dense/clip_by_value/Minimum:z:0+sequential/q_dense/clip_by_value/y:output:0*
T0*
_output_shapes

: Л
sequential/q_dense/mul_1Mulsequential/q_dense/Cast:y:0$sequential/q_dense/clip_by_value:z:0*
T0*
_output_shapes

: c
sequential/q_dense/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFЧ
sequential/q_dense/truediv_1RealDivsequential/q_dense/mul_1:z:0'sequential/q_dense/truediv_1/y:output:0*
T0*
_output_shapes

: _
sequential/q_dense/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?П
sequential/q_dense/mul_2Mul#sequential/q_dense/mul_2/x:output:0 sequential/q_dense/truediv_1:z:0*
T0*
_output_shapes

: О
#sequential/q_dense/ReadVariableOp_1ReadVariableOp*sequential_q_dense_readvariableop_resource*
_output_shapes

: *
dtype0u
sequential/q_dense/Neg_1Neg+sequential/q_dense/ReadVariableOp_1:value:0*
T0*
_output_shapes

: Ж
sequential/q_dense/add_2AddV2sequential/q_dense/Neg_1:y:0sequential/q_dense/mul_2:z:0*
T0*
_output_shapes

: _
sequential/q_dense/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Л
sequential/q_dense/mul_3Mul#sequential/q_dense/mul_3/x:output:0sequential/q_dense/add_2:z:0*
T0*
_output_shapes

: x
!sequential/q_dense/StopGradient_1StopGradientsequential/q_dense/mul_3:z:0*
T0*
_output_shapes

: О
#sequential/q_dense/ReadVariableOp_2ReadVariableOp*sequential_q_dense_readvariableop_resource*
_output_shapes

: *
dtype0г
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
valueB"       К
sequential/q_dense/ReshapeReshapeinputs)sequential/q_dense/Reshape/shape:output:0*
T0*'
_output_shapes
:         r
!sequential/q_dense/transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       Ь
sequential/q_dense/transpose	Transposesequential/q_dense/add_3:z:0*sequential/q_dense/transpose/perm:output:0*
T0*
_output_shapes

: s
"sequential/q_dense/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"       Я
sequential/q_dense/Reshape_1Reshape sequential/q_dense/transpose:y:0+sequential/q_dense/Reshape_1/shape:output:0*
T0*
_output_shapes

: б
sequential/q_dense/MatMulMatMul#sequential/q_dense/Reshape:output:0%sequential/q_dense/Reshape_1:output:0*
T0*'
_output_shapes
:          f
$sequential/q_dense/Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :f
$sequential/q_dense/Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : █
"sequential/q_dense/Reshape_2/shapePack#sequential/q_dense/unstack:output:0-sequential/q_dense/Reshape_2/shape/1:output:0-sequential/q_dense/Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:п
sequential/q_dense/Reshape_2Reshape#sequential/q_dense/MatMul:product:0+sequential/q_dense/Reshape_2/shape:output:0*
T0*+
_output_shapes
:          \
sequential/q_dense/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :\
sequential/q_dense/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : К
sequential/q_dense/Pow_1Pow#sequential/q_dense/Pow_1/x:output:0#sequential/q_dense/Pow_1/y:output:0*
T0*
_output_shapes
: o
sequential/q_dense/Cast_1Castsequential/q_dense/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: М
#sequential/q_dense/ReadVariableOp_3ReadVariableOp,sequential_q_dense_readvariableop_3_resource*
_output_shapes
: *
dtype0_
sequential/q_dense/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFЦ
sequential/q_dense/mul_4Mul+sequential/q_dense/ReadVariableOp_3:value:0#sequential/q_dense/mul_4/y:output:0*
T0*
_output_shapes
: Й
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
: Д
sequential/q_dense/add_4AddV2sequential/q_dense/Neg_2:y:0sequential/q_dense/Round_1:y:0*
T0*
_output_shapes
: t
!sequential/q_dense/StopGradient_2StopGradientsequential/q_dense/add_4:z:0*
T0*
_output_shapes
: Ф
sequential/q_dense/add_5AddV2 sequential/q_dense/truediv_2:z:0*sequential/q_dense/StopGradient_2:output:0*
T0*
_output_shapes
: q
,sequential/q_dense/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * №Fп
*sequential/q_dense/clip_by_value_1/MinimumMinimumsequential/q_dense/add_5:z:05sequential/q_dense/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: i
$sequential/q_dense/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞▒
"sequential/q_dense/clip_by_value_1Maximum.sequential/q_dense/clip_by_value_1/Minimum:z:0-sequential/q_dense/clip_by_value_1/y:output:0*
T0*
_output_shapes
: Л
sequential/q_dense/mul_5Mulsequential/q_dense/Cast_1:y:0&sequential/q_dense/clip_by_value_1:z:0*
T0*
_output_shapes
: c
sequential/q_dense/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFУ
sequential/q_dense/truediv_3RealDivsequential/q_dense/mul_5:z:0'sequential/q_dense/truediv_3/y:output:0*
T0*
_output_shapes
: _
sequential/q_dense/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Л
sequential/q_dense/mul_6Mul#sequential/q_dense/mul_6/x:output:0 sequential/q_dense/truediv_3:z:0*
T0*
_output_shapes
: М
#sequential/q_dense/ReadVariableOp_4ReadVariableOp,sequential_q_dense_readvariableop_3_resource*
_output_shapes
: *
dtype0q
sequential/q_dense/Neg_3Neg+sequential/q_dense/ReadVariableOp_4:value:0*
T0*
_output_shapes
: В
sequential/q_dense/add_6AddV2sequential/q_dense/Neg_3:y:0sequential/q_dense/mul_6:z:0*
T0*
_output_shapes
: _
sequential/q_dense/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?З
sequential/q_dense/mul_7Mul#sequential/q_dense/mul_7/x:output:0sequential/q_dense/add_6:z:0*
T0*
_output_shapes
: t
!sequential/q_dense/StopGradient_3StopGradientsequential/q_dense/mul_7:z:0*
T0*
_output_shapes
: М
#sequential/q_dense/ReadVariableOp_5ReadVariableOp,sequential_q_dense_readvariableop_3_resource*
_output_shapes
: *
dtype0Я
sequential/q_dense/add_7AddV2+sequential/q_dense/ReadVariableOp_5:value:0*sequential/q_dense/StopGradient_3:output:0*
T0*
_output_shapes
: а
sequential/q_dense/BiasAddBiasAdd%sequential/q_dense/Reshape_2:output:0sequential/q_dense/add_7:z:0*
T0*+
_output_shapes
:          _
sequential/q_activation/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :_
sequential/q_activation/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :У
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
value	B : Щ
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
value	B : Б
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
 *   AП
sequential/q_activation/subSub"sequential/q_activation/Cast_2:y:0&sequential/q_activation/sub/y:output:0*
T0*
_output_shapes
: О
sequential/q_activation/Pow_2Pow&sequential/q_activation/Const:output:0sequential/q_activation/sub:z:0*
T0*
_output_shapes
: М
sequential/q_activation/sub_1Sub"sequential/q_activation/Cast_1:y:0!sequential/q_activation/Pow_2:z:0*
T0*
_output_shapes
: м
!sequential/q_activation/LessEqual	LessEqual#sequential/q_dense/BiasAdd:output:0!sequential/q_activation/sub_1:z:0*
T0*+
_output_shapes
:          
sequential/q_activation/ReluRelu#sequential/q_dense/BiasAdd:output:0*
T0*+
_output_shapes
:          z
'sequential/q_activation/ones_like/ShapeShape#sequential/q_dense/BiasAdd:output:0*
T0*
_output_shapes
:l
'sequential/q_activation/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  А?├
!sequential/q_activation/ones_likeFill0sequential/q_activation/ones_like/Shape:output:00sequential/q_activation/ones_like/Const:output:0*
T0*+
_output_shapes
:          М
sequential/q_activation/sub_2Sub"sequential/q_activation/Cast_1:y:0!sequential/q_activation/Pow_2:z:0*
T0*
_output_shapes
: з
sequential/q_activation/mulMul*sequential/q_activation/ones_like:output:0!sequential/q_activation/sub_2:z:0*
T0*+
_output_shapes
:          ╓
 sequential/q_activation/SelectV2SelectV2%sequential/q_activation/LessEqual:z:0*sequential/q_activation/Relu:activations:0sequential/q_activation/mul:z:0*
T0*+
_output_shapes
:          б
sequential/q_activation/mul_1Mul#sequential/q_dense/BiasAdd:output:0 sequential/q_activation/Cast:y:0*
T0*+
_output_shapes
:          з
sequential/q_activation/truedivRealDiv!sequential/q_activation/mul_1:z:0"sequential/q_activation/Cast_1:y:0*
T0*+
_output_shapes
:          }
sequential/q_activation/NegNeg#sequential/q_activation/truediv:z:0*
T0*+
_output_shapes
:          Б
sequential/q_activation/RoundRound#sequential/q_activation/truediv:z:0*
T0*+
_output_shapes
:          Ю
sequential/q_activation/addAddV2sequential/q_activation/Neg:y:0!sequential/q_activation/Round:y:0*
T0*+
_output_shapes
:          Л
$sequential/q_activation/StopGradientStopGradientsequential/q_activation/add:z:0*
T0*+
_output_shapes
:          ░
sequential/q_activation/add_1AddV2#sequential/q_activation/truediv:z:0-sequential/q_activation/StopGradient:output:0*
T0*+
_output_shapes
:          з
!sequential/q_activation/truediv_1RealDiv!sequential/q_activation/add_1:z:0 sequential/q_activation/Cast:y:0*
T0*+
_output_shapes
:          h
#sequential/q_activation/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Э
!sequential/q_activation/truediv_2RealDiv,sequential/q_activation/truediv_2/x:output:0 sequential/q_activation/Cast:y:0*
T0*
_output_shapes
: d
sequential/q_activation/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ц
sequential/q_activation/sub_3Sub(sequential/q_activation/sub_3/x:output:0%sequential/q_activation/truediv_2:z:0*
T0*
_output_shapes
: ╕
-sequential/q_activation/clip_by_value/MinimumMinimum%sequential/q_activation/truediv_1:z:0!sequential/q_activation/sub_3:z:0*
T0*+
_output_shapes
:          l
'sequential/q_activation/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    ╦
%sequential/q_activation/clip_by_valueMaximum1sequential/q_activation/clip_by_value/Minimum:z:00sequential/q_activation/clip_by_value/y:output:0*
T0*+
_output_shapes
:          й
sequential/q_activation/mul_2Mul"sequential/q_activation/Cast_1:y:0)sequential/q_activation/clip_by_value:z:0*
T0*+
_output_shapes
:          Е
sequential/q_activation/Neg_1Neg)sequential/q_activation/SelectV2:output:0*
T0*+
_output_shapes
:          в
sequential/q_activation/add_2AddV2!sequential/q_activation/Neg_1:y:0!sequential/q_activation/mul_2:z:0*
T0*+
_output_shapes
:          d
sequential/q_activation/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?з
sequential/q_activation/mul_3Mul(sequential/q_activation/mul_3/x:output:0!sequential/q_activation/add_2:z:0*
T0*+
_output_shapes
:          П
&sequential/q_activation/StopGradient_1StopGradient!sequential/q_activation/mul_3:z:0*
T0*+
_output_shapes
:          ╕
sequential/q_activation/add_3AddV2)sequential/q_activation/SelectV2:output:0/sequential/q_activation/StopGradient_1:output:0*
T0*+
_output_shapes
:          \
sequential/q_dense_1/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :\
sequential/q_dense_1/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : К
sequential/q_dense_1/PowPow#sequential/q_dense_1/Pow/x:output:0#sequential/q_dense_1/Pow/y:output:0*
T0*
_output_shapes
: o
sequential/q_dense_1/CastCastsequential/q_dense_1/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: Р
#sequential/q_dense_1/ReadVariableOpReadVariableOp,sequential_q_dense_1_readvariableop_resource*
_output_shapes

:  *
dtype0_
sequential/q_dense_1/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFЪ
sequential/q_dense_1/mulMul+sequential/q_dense_1/ReadVariableOp:value:0#sequential/q_dense_1/mul/y:output:0*
T0*
_output_shapes

:  Н
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

:  И
sequential/q_dense_1/addAddV2sequential/q_dense_1/Neg:y:0sequential/q_dense_1/Round:y:0*
T0*
_output_shapes

:  x
!sequential/q_dense_1/StopGradientStopGradientsequential/q_dense_1/add:z:0*
T0*
_output_shapes

:  Ъ
sequential/q_dense_1/add_1AddV2 sequential/q_dense_1/truediv:z:0*sequential/q_dense_1/StopGradient:output:0*
T0*
_output_shapes

:  q
,sequential/q_dense_1/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * №F╡
*sequential/q_dense_1/clip_by_value/MinimumMinimumsequential/q_dense_1/add_1:z:05sequential/q_dense_1/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  i
$sequential/q_dense_1/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞╡
"sequential/q_dense_1/clip_by_valueMaximum.sequential/q_dense_1/clip_by_value/Minimum:z:0-sequential/q_dense_1/clip_by_value/y:output:0*
T0*
_output_shapes

:  С
sequential/q_dense_1/mul_1Mulsequential/q_dense_1/Cast:y:0&sequential/q_dense_1/clip_by_value:z:0*
T0*
_output_shapes

:  e
 sequential/q_dense_1/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFЭ
sequential/q_dense_1/truediv_1RealDivsequential/q_dense_1/mul_1:z:0)sequential/q_dense_1/truediv_1/y:output:0*
T0*
_output_shapes

:  a
sequential/q_dense_1/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Х
sequential/q_dense_1/mul_2Mul%sequential/q_dense_1/mul_2/x:output:0"sequential/q_dense_1/truediv_1:z:0*
T0*
_output_shapes

:  Т
%sequential/q_dense_1/ReadVariableOp_1ReadVariableOp,sequential_q_dense_1_readvariableop_resource*
_output_shapes

:  *
dtype0y
sequential/q_dense_1/Neg_1Neg-sequential/q_dense_1/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  М
sequential/q_dense_1/add_2AddV2sequential/q_dense_1/Neg_1:y:0sequential/q_dense_1/mul_2:z:0*
T0*
_output_shapes

:  a
sequential/q_dense_1/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?С
sequential/q_dense_1/mul_3Mul%sequential/q_dense_1/mul_3/x:output:0sequential/q_dense_1/add_2:z:0*
T0*
_output_shapes

:  |
#sequential/q_dense_1/StopGradient_1StopGradientsequential/q_dense_1/mul_3:z:0*
T0*
_output_shapes

:  Т
%sequential/q_dense_1/ReadVariableOp_2ReadVariableOp,sequential_q_dense_1_readvariableop_resource*
_output_shapes

:  *
dtype0й
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
valueB"        й
sequential/q_dense_1/ReshapeReshape!sequential/q_activation/add_3:z:0+sequential/q_dense_1/Reshape/shape:output:0*
T0*'
_output_shapes
:          t
#sequential/q_dense_1/transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       в
sequential/q_dense_1/transpose	Transposesequential/q_dense_1/add_3:z:0,sequential/q_dense_1/transpose/perm:output:0*
T0*
_output_shapes

:  u
$sequential/q_dense_1/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"        е
sequential/q_dense_1/Reshape_1Reshape"sequential/q_dense_1/transpose:y:0-sequential/q_dense_1/Reshape_1/shape:output:0*
T0*
_output_shapes

:  з
sequential/q_dense_1/MatMulMatMul%sequential/q_dense_1/Reshape:output:0'sequential/q_dense_1/Reshape_1:output:0*
T0*'
_output_shapes
:          h
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
:╡
sequential/q_dense_1/Reshape_2Reshape%sequential/q_dense_1/MatMul:product:0-sequential/q_dense_1/Reshape_2/shape:output:0*
T0*+
_output_shapes
:          ^
sequential/q_dense_1/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :^
sequential/q_dense_1/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Р
sequential/q_dense_1/Pow_1Pow%sequential/q_dense_1/Pow_1/x:output:0%sequential/q_dense_1/Pow_1/y:output:0*
T0*
_output_shapes
: s
sequential/q_dense_1/Cast_1Castsequential/q_dense_1/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: Р
%sequential/q_dense_1/ReadVariableOp_3ReadVariableOp.sequential_q_dense_1_readvariableop_3_resource*
_output_shapes
: *
dtype0a
sequential/q_dense_1/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFЬ
sequential/q_dense_1/mul_4Mul-sequential/q_dense_1/ReadVariableOp_3:value:0%sequential/q_dense_1/mul_4/y:output:0*
T0*
_output_shapes
: П
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
: К
sequential/q_dense_1/add_4AddV2sequential/q_dense_1/Neg_2:y:0 sequential/q_dense_1/Round_1:y:0*
T0*
_output_shapes
: x
#sequential/q_dense_1/StopGradient_2StopGradientsequential/q_dense_1/add_4:z:0*
T0*
_output_shapes
: Ъ
sequential/q_dense_1/add_5AddV2"sequential/q_dense_1/truediv_2:z:0,sequential/q_dense_1/StopGradient_2:output:0*
T0*
_output_shapes
: s
.sequential/q_dense_1/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * №F╡
,sequential/q_dense_1/clip_by_value_1/MinimumMinimumsequential/q_dense_1/add_5:z:07sequential/q_dense_1/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: k
&sequential/q_dense_1/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞╖
$sequential/q_dense_1/clip_by_value_1Maximum0sequential/q_dense_1/clip_by_value_1/Minimum:z:0/sequential/q_dense_1/clip_by_value_1/y:output:0*
T0*
_output_shapes
: С
sequential/q_dense_1/mul_5Mulsequential/q_dense_1/Cast_1:y:0(sequential/q_dense_1/clip_by_value_1:z:0*
T0*
_output_shapes
: e
 sequential/q_dense_1/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFЩ
sequential/q_dense_1/truediv_3RealDivsequential/q_dense_1/mul_5:z:0)sequential/q_dense_1/truediv_3/y:output:0*
T0*
_output_shapes
: a
sequential/q_dense_1/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?С
sequential/q_dense_1/mul_6Mul%sequential/q_dense_1/mul_6/x:output:0"sequential/q_dense_1/truediv_3:z:0*
T0*
_output_shapes
: Р
%sequential/q_dense_1/ReadVariableOp_4ReadVariableOp.sequential_q_dense_1_readvariableop_3_resource*
_output_shapes
: *
dtype0u
sequential/q_dense_1/Neg_3Neg-sequential/q_dense_1/ReadVariableOp_4:value:0*
T0*
_output_shapes
: И
sequential/q_dense_1/add_6AddV2sequential/q_dense_1/Neg_3:y:0sequential/q_dense_1/mul_6:z:0*
T0*
_output_shapes
: a
sequential/q_dense_1/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Н
sequential/q_dense_1/mul_7Mul%sequential/q_dense_1/mul_7/x:output:0sequential/q_dense_1/add_6:z:0*
T0*
_output_shapes
: x
#sequential/q_dense_1/StopGradient_3StopGradientsequential/q_dense_1/mul_7:z:0*
T0*
_output_shapes
: Р
%sequential/q_dense_1/ReadVariableOp_5ReadVariableOp.sequential_q_dense_1_readvariableop_3_resource*
_output_shapes
: *
dtype0е
sequential/q_dense_1/add_7AddV2-sequential/q_dense_1/ReadVariableOp_5:value:0,sequential/q_dense_1/StopGradient_3:output:0*
T0*
_output_shapes
: ж
sequential/q_dense_1/BiasAddBiasAdd'sequential/q_dense_1/Reshape_2:output:0sequential/q_dense_1/add_7:z:0*
T0*+
_output_shapes
:          a
sequential/q_activation_1/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :a
sequential/q_activation_1/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :Щ
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
value	B : Я
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
value	B : Е
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
 *   AХ
sequential/q_activation_1/subSub$sequential/q_activation_1/Cast_2:y:0(sequential/q_activation_1/sub/y:output:0*
T0*
_output_shapes
: Ф
sequential/q_activation_1/Pow_2Pow(sequential/q_activation_1/Const:output:0!sequential/q_activation_1/sub:z:0*
T0*
_output_shapes
: Т
sequential/q_activation_1/sub_1Sub$sequential/q_activation_1/Cast_1:y:0#sequential/q_activation_1/Pow_2:z:0*
T0*
_output_shapes
: ▓
#sequential/q_activation_1/LessEqual	LessEqual%sequential/q_dense_1/BiasAdd:output:0#sequential/q_activation_1/sub_1:z:0*
T0*+
_output_shapes
:          Г
sequential/q_activation_1/ReluRelu%sequential/q_dense_1/BiasAdd:output:0*
T0*+
_output_shapes
:          ~
)sequential/q_activation_1/ones_like/ShapeShape%sequential/q_dense_1/BiasAdd:output:0*
T0*
_output_shapes
:n
)sequential/q_activation_1/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  А?╔
#sequential/q_activation_1/ones_likeFill2sequential/q_activation_1/ones_like/Shape:output:02sequential/q_activation_1/ones_like/Const:output:0*
T0*+
_output_shapes
:          Т
sequential/q_activation_1/sub_2Sub$sequential/q_activation_1/Cast_1:y:0#sequential/q_activation_1/Pow_2:z:0*
T0*
_output_shapes
: н
sequential/q_activation_1/mulMul,sequential/q_activation_1/ones_like:output:0#sequential/q_activation_1/sub_2:z:0*
T0*+
_output_shapes
:          ▐
"sequential/q_activation_1/SelectV2SelectV2'sequential/q_activation_1/LessEqual:z:0,sequential/q_activation_1/Relu:activations:0!sequential/q_activation_1/mul:z:0*
T0*+
_output_shapes
:          з
sequential/q_activation_1/mul_1Mul%sequential/q_dense_1/BiasAdd:output:0"sequential/q_activation_1/Cast:y:0*
T0*+
_output_shapes
:          н
!sequential/q_activation_1/truedivRealDiv#sequential/q_activation_1/mul_1:z:0$sequential/q_activation_1/Cast_1:y:0*
T0*+
_output_shapes
:          Б
sequential/q_activation_1/NegNeg%sequential/q_activation_1/truediv:z:0*
T0*+
_output_shapes
:          Е
sequential/q_activation_1/RoundRound%sequential/q_activation_1/truediv:z:0*
T0*+
_output_shapes
:          д
sequential/q_activation_1/addAddV2!sequential/q_activation_1/Neg:y:0#sequential/q_activation_1/Round:y:0*
T0*+
_output_shapes
:          П
&sequential/q_activation_1/StopGradientStopGradient!sequential/q_activation_1/add:z:0*
T0*+
_output_shapes
:          ╢
sequential/q_activation_1/add_1AddV2%sequential/q_activation_1/truediv:z:0/sequential/q_activation_1/StopGradient:output:0*
T0*+
_output_shapes
:          н
#sequential/q_activation_1/truediv_1RealDiv#sequential/q_activation_1/add_1:z:0"sequential/q_activation_1/Cast:y:0*
T0*+
_output_shapes
:          j
%sequential/q_activation_1/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?г
#sequential/q_activation_1/truediv_2RealDiv.sequential/q_activation_1/truediv_2/x:output:0"sequential/q_activation_1/Cast:y:0*
T0*
_output_shapes
: f
!sequential/q_activation_1/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ь
sequential/q_activation_1/sub_3Sub*sequential/q_activation_1/sub_3/x:output:0'sequential/q_activation_1/truediv_2:z:0*
T0*
_output_shapes
: ╛
/sequential/q_activation_1/clip_by_value/MinimumMinimum'sequential/q_activation_1/truediv_1:z:0#sequential/q_activation_1/sub_3:z:0*
T0*+
_output_shapes
:          n
)sequential/q_activation_1/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    ╤
'sequential/q_activation_1/clip_by_valueMaximum3sequential/q_activation_1/clip_by_value/Minimum:z:02sequential/q_activation_1/clip_by_value/y:output:0*
T0*+
_output_shapes
:          п
sequential/q_activation_1/mul_2Mul$sequential/q_activation_1/Cast_1:y:0+sequential/q_activation_1/clip_by_value:z:0*
T0*+
_output_shapes
:          Й
sequential/q_activation_1/Neg_1Neg+sequential/q_activation_1/SelectV2:output:0*
T0*+
_output_shapes
:          и
sequential/q_activation_1/add_2AddV2#sequential/q_activation_1/Neg_1:y:0#sequential/q_activation_1/mul_2:z:0*
T0*+
_output_shapes
:          f
!sequential/q_activation_1/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?н
sequential/q_activation_1/mul_3Mul*sequential/q_activation_1/mul_3/x:output:0#sequential/q_activation_1/add_2:z:0*
T0*+
_output_shapes
:          У
(sequential/q_activation_1/StopGradient_1StopGradient#sequential/q_activation_1/mul_3:z:0*
T0*+
_output_shapes
:          ╛
sequential/q_activation_1/add_3AddV2+sequential/q_activation_1/SelectV2:output:01sequential/q_activation_1/StopGradient_1:output:0*
T0*+
_output_shapes
:          \
sequential/q_dense_2/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :\
sequential/q_dense_2/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : К
sequential/q_dense_2/PowPow#sequential/q_dense_2/Pow/x:output:0#sequential/q_dense_2/Pow/y:output:0*
T0*
_output_shapes
: o
sequential/q_dense_2/CastCastsequential/q_dense_2/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: Р
#sequential/q_dense_2/ReadVariableOpReadVariableOp,sequential_q_dense_2_readvariableop_resource*
_output_shapes

:  *
dtype0_
sequential/q_dense_2/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFЪ
sequential/q_dense_2/mulMul+sequential/q_dense_2/ReadVariableOp:value:0#sequential/q_dense_2/mul/y:output:0*
T0*
_output_shapes

:  Н
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

:  И
sequential/q_dense_2/addAddV2sequential/q_dense_2/Neg:y:0sequential/q_dense_2/Round:y:0*
T0*
_output_shapes

:  x
!sequential/q_dense_2/StopGradientStopGradientsequential/q_dense_2/add:z:0*
T0*
_output_shapes

:  Ъ
sequential/q_dense_2/add_1AddV2 sequential/q_dense_2/truediv:z:0*sequential/q_dense_2/StopGradient:output:0*
T0*
_output_shapes

:  q
,sequential/q_dense_2/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * №F╡
*sequential/q_dense_2/clip_by_value/MinimumMinimumsequential/q_dense_2/add_1:z:05sequential/q_dense_2/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  i
$sequential/q_dense_2/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞╡
"sequential/q_dense_2/clip_by_valueMaximum.sequential/q_dense_2/clip_by_value/Minimum:z:0-sequential/q_dense_2/clip_by_value/y:output:0*
T0*
_output_shapes

:  С
sequential/q_dense_2/mul_1Mulsequential/q_dense_2/Cast:y:0&sequential/q_dense_2/clip_by_value:z:0*
T0*
_output_shapes

:  e
 sequential/q_dense_2/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFЭ
sequential/q_dense_2/truediv_1RealDivsequential/q_dense_2/mul_1:z:0)sequential/q_dense_2/truediv_1/y:output:0*
T0*
_output_shapes

:  a
sequential/q_dense_2/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Х
sequential/q_dense_2/mul_2Mul%sequential/q_dense_2/mul_2/x:output:0"sequential/q_dense_2/truediv_1:z:0*
T0*
_output_shapes

:  Т
%sequential/q_dense_2/ReadVariableOp_1ReadVariableOp,sequential_q_dense_2_readvariableop_resource*
_output_shapes

:  *
dtype0y
sequential/q_dense_2/Neg_1Neg-sequential/q_dense_2/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  М
sequential/q_dense_2/add_2AddV2sequential/q_dense_2/Neg_1:y:0sequential/q_dense_2/mul_2:z:0*
T0*
_output_shapes

:  a
sequential/q_dense_2/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?С
sequential/q_dense_2/mul_3Mul%sequential/q_dense_2/mul_3/x:output:0sequential/q_dense_2/add_2:z:0*
T0*
_output_shapes

:  |
#sequential/q_dense_2/StopGradient_1StopGradientsequential/q_dense_2/mul_3:z:0*
T0*
_output_shapes

:  Т
%sequential/q_dense_2/ReadVariableOp_2ReadVariableOp,sequential_q_dense_2_readvariableop_resource*
_output_shapes

:  *
dtype0й
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
valueB"        л
sequential/q_dense_2/ReshapeReshape#sequential/q_activation_1/add_3:z:0+sequential/q_dense_2/Reshape/shape:output:0*
T0*'
_output_shapes
:          t
#sequential/q_dense_2/transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       в
sequential/q_dense_2/transpose	Transposesequential/q_dense_2/add_3:z:0,sequential/q_dense_2/transpose/perm:output:0*
T0*
_output_shapes

:  u
$sequential/q_dense_2/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"        е
sequential/q_dense_2/Reshape_1Reshape"sequential/q_dense_2/transpose:y:0-sequential/q_dense_2/Reshape_1/shape:output:0*
T0*
_output_shapes

:  з
sequential/q_dense_2/MatMulMatMul%sequential/q_dense_2/Reshape:output:0'sequential/q_dense_2/Reshape_1:output:0*
T0*'
_output_shapes
:          h
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
:╡
sequential/q_dense_2/Reshape_2Reshape%sequential/q_dense_2/MatMul:product:0-sequential/q_dense_2/Reshape_2/shape:output:0*
T0*+
_output_shapes
:          ^
sequential/q_dense_2/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :^
sequential/q_dense_2/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Р
sequential/q_dense_2/Pow_1Pow%sequential/q_dense_2/Pow_1/x:output:0%sequential/q_dense_2/Pow_1/y:output:0*
T0*
_output_shapes
: s
sequential/q_dense_2/Cast_1Castsequential/q_dense_2/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: Р
%sequential/q_dense_2/ReadVariableOp_3ReadVariableOp.sequential_q_dense_2_readvariableop_3_resource*
_output_shapes
: *
dtype0a
sequential/q_dense_2/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFЬ
sequential/q_dense_2/mul_4Mul-sequential/q_dense_2/ReadVariableOp_3:value:0%sequential/q_dense_2/mul_4/y:output:0*
T0*
_output_shapes
: П
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
: К
sequential/q_dense_2/add_4AddV2sequential/q_dense_2/Neg_2:y:0 sequential/q_dense_2/Round_1:y:0*
T0*
_output_shapes
: x
#sequential/q_dense_2/StopGradient_2StopGradientsequential/q_dense_2/add_4:z:0*
T0*
_output_shapes
: Ъ
sequential/q_dense_2/add_5AddV2"sequential/q_dense_2/truediv_2:z:0,sequential/q_dense_2/StopGradient_2:output:0*
T0*
_output_shapes
: s
.sequential/q_dense_2/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * №F╡
,sequential/q_dense_2/clip_by_value_1/MinimumMinimumsequential/q_dense_2/add_5:z:07sequential/q_dense_2/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: k
&sequential/q_dense_2/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞╖
$sequential/q_dense_2/clip_by_value_1Maximum0sequential/q_dense_2/clip_by_value_1/Minimum:z:0/sequential/q_dense_2/clip_by_value_1/y:output:0*
T0*
_output_shapes
: С
sequential/q_dense_2/mul_5Mulsequential/q_dense_2/Cast_1:y:0(sequential/q_dense_2/clip_by_value_1:z:0*
T0*
_output_shapes
: e
 sequential/q_dense_2/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFЩ
sequential/q_dense_2/truediv_3RealDivsequential/q_dense_2/mul_5:z:0)sequential/q_dense_2/truediv_3/y:output:0*
T0*
_output_shapes
: a
sequential/q_dense_2/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?С
sequential/q_dense_2/mul_6Mul%sequential/q_dense_2/mul_6/x:output:0"sequential/q_dense_2/truediv_3:z:0*
T0*
_output_shapes
: Р
%sequential/q_dense_2/ReadVariableOp_4ReadVariableOp.sequential_q_dense_2_readvariableop_3_resource*
_output_shapes
: *
dtype0u
sequential/q_dense_2/Neg_3Neg-sequential/q_dense_2/ReadVariableOp_4:value:0*
T0*
_output_shapes
: И
sequential/q_dense_2/add_6AddV2sequential/q_dense_2/Neg_3:y:0sequential/q_dense_2/mul_6:z:0*
T0*
_output_shapes
: a
sequential/q_dense_2/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Н
sequential/q_dense_2/mul_7Mul%sequential/q_dense_2/mul_7/x:output:0sequential/q_dense_2/add_6:z:0*
T0*
_output_shapes
: x
#sequential/q_dense_2/StopGradient_3StopGradientsequential/q_dense_2/mul_7:z:0*
T0*
_output_shapes
: Р
%sequential/q_dense_2/ReadVariableOp_5ReadVariableOp.sequential_q_dense_2_readvariableop_3_resource*
_output_shapes
: *
dtype0е
sequential/q_dense_2/add_7AddV2-sequential/q_dense_2/ReadVariableOp_5:value:0,sequential/q_dense_2/StopGradient_3:output:0*
T0*
_output_shapes
: ж
sequential/q_dense_2/BiasAddBiasAdd'sequential/q_dense_2/Reshape_2:output:0sequential/q_dense_2/add_7:z:0*
T0*+
_output_shapes
:          a
sequential/q_activation_2/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :a
sequential/q_activation_2/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :Щ
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
value	B : Я
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
value	B : Е
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
 *   AХ
sequential/q_activation_2/subSub$sequential/q_activation_2/Cast_2:y:0(sequential/q_activation_2/sub/y:output:0*
T0*
_output_shapes
: Ф
sequential/q_activation_2/Pow_2Pow(sequential/q_activation_2/Const:output:0!sequential/q_activation_2/sub:z:0*
T0*
_output_shapes
: Т
sequential/q_activation_2/sub_1Sub$sequential/q_activation_2/Cast_1:y:0#sequential/q_activation_2/Pow_2:z:0*
T0*
_output_shapes
: ▓
#sequential/q_activation_2/LessEqual	LessEqual%sequential/q_dense_2/BiasAdd:output:0#sequential/q_activation_2/sub_1:z:0*
T0*+
_output_shapes
:          Г
sequential/q_activation_2/ReluRelu%sequential/q_dense_2/BiasAdd:output:0*
T0*+
_output_shapes
:          ~
)sequential/q_activation_2/ones_like/ShapeShape%sequential/q_dense_2/BiasAdd:output:0*
T0*
_output_shapes
:n
)sequential/q_activation_2/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  А?╔
#sequential/q_activation_2/ones_likeFill2sequential/q_activation_2/ones_like/Shape:output:02sequential/q_activation_2/ones_like/Const:output:0*
T0*+
_output_shapes
:          Т
sequential/q_activation_2/sub_2Sub$sequential/q_activation_2/Cast_1:y:0#sequential/q_activation_2/Pow_2:z:0*
T0*
_output_shapes
: н
sequential/q_activation_2/mulMul,sequential/q_activation_2/ones_like:output:0#sequential/q_activation_2/sub_2:z:0*
T0*+
_output_shapes
:          ▐
"sequential/q_activation_2/SelectV2SelectV2'sequential/q_activation_2/LessEqual:z:0,sequential/q_activation_2/Relu:activations:0!sequential/q_activation_2/mul:z:0*
T0*+
_output_shapes
:          з
sequential/q_activation_2/mul_1Mul%sequential/q_dense_2/BiasAdd:output:0"sequential/q_activation_2/Cast:y:0*
T0*+
_output_shapes
:          н
!sequential/q_activation_2/truedivRealDiv#sequential/q_activation_2/mul_1:z:0$sequential/q_activation_2/Cast_1:y:0*
T0*+
_output_shapes
:          Б
sequential/q_activation_2/NegNeg%sequential/q_activation_2/truediv:z:0*
T0*+
_output_shapes
:          Е
sequential/q_activation_2/RoundRound%sequential/q_activation_2/truediv:z:0*
T0*+
_output_shapes
:          д
sequential/q_activation_2/addAddV2!sequential/q_activation_2/Neg:y:0#sequential/q_activation_2/Round:y:0*
T0*+
_output_shapes
:          П
&sequential/q_activation_2/StopGradientStopGradient!sequential/q_activation_2/add:z:0*
T0*+
_output_shapes
:          ╢
sequential/q_activation_2/add_1AddV2%sequential/q_activation_2/truediv:z:0/sequential/q_activation_2/StopGradient:output:0*
T0*+
_output_shapes
:          н
#sequential/q_activation_2/truediv_1RealDiv#sequential/q_activation_2/add_1:z:0"sequential/q_activation_2/Cast:y:0*
T0*+
_output_shapes
:          j
%sequential/q_activation_2/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?г
#sequential/q_activation_2/truediv_2RealDiv.sequential/q_activation_2/truediv_2/x:output:0"sequential/q_activation_2/Cast:y:0*
T0*
_output_shapes
: f
!sequential/q_activation_2/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ь
sequential/q_activation_2/sub_3Sub*sequential/q_activation_2/sub_3/x:output:0'sequential/q_activation_2/truediv_2:z:0*
T0*
_output_shapes
: ╛
/sequential/q_activation_2/clip_by_value/MinimumMinimum'sequential/q_activation_2/truediv_1:z:0#sequential/q_activation_2/sub_3:z:0*
T0*+
_output_shapes
:          n
)sequential/q_activation_2/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    ╤
'sequential/q_activation_2/clip_by_valueMaximum3sequential/q_activation_2/clip_by_value/Minimum:z:02sequential/q_activation_2/clip_by_value/y:output:0*
T0*+
_output_shapes
:          п
sequential/q_activation_2/mul_2Mul$sequential/q_activation_2/Cast_1:y:0+sequential/q_activation_2/clip_by_value:z:0*
T0*+
_output_shapes
:          Й
sequential/q_activation_2/Neg_1Neg+sequential/q_activation_2/SelectV2:output:0*
T0*+
_output_shapes
:          и
sequential/q_activation_2/add_2AddV2#sequential/q_activation_2/Neg_1:y:0#sequential/q_activation_2/mul_2:z:0*
T0*+
_output_shapes
:          f
!sequential/q_activation_2/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?н
sequential/q_activation_2/mul_3Mul*sequential/q_activation_2/mul_3/x:output:0#sequential/q_activation_2/add_2:z:0*
T0*+
_output_shapes
:          У
(sequential/q_activation_2/StopGradient_1StopGradient#sequential/q_activation_2/mul_3:z:0*
T0*+
_output_shapes
:          ╛
sequential/q_activation_2/add_3AddV2+sequential/q_activation_2/SelectV2:output:01sequential/q_activation_2/StopGradient_1:output:0*
T0*+
_output_shapes
:          X
Mean/reduction_indicesConst*
_output_shapes
: *
dtype0*
value	B :Д
MeanMean#sequential/q_activation_2/add_3:z:0Mean/reduction_indices:output:0*
T0*'
_output_shapes
:          ^
sequential_1/q_dense_3/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :^
sequential_1/q_dense_3/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : Р
sequential_1/q_dense_3/PowPow%sequential_1/q_dense_3/Pow/x:output:0%sequential_1/q_dense_3/Pow/y:output:0*
T0*
_output_shapes
: s
sequential_1/q_dense_3/CastCastsequential_1/q_dense_3/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: Ф
%sequential_1/q_dense_3/ReadVariableOpReadVariableOp.sequential_1_q_dense_3_readvariableop_resource*
_output_shapes

:  *
dtype0a
sequential_1/q_dense_3/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFа
sequential_1/q_dense_3/mulMul-sequential_1/q_dense_3/ReadVariableOp:value:0%sequential_1/q_dense_3/mul/y:output:0*
T0*
_output_shapes

:  У
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

:  О
sequential_1/q_dense_3/addAddV2sequential_1/q_dense_3/Neg:y:0 sequential_1/q_dense_3/Round:y:0*
T0*
_output_shapes

:  |
#sequential_1/q_dense_3/StopGradientStopGradientsequential_1/q_dense_3/add:z:0*
T0*
_output_shapes

:  а
sequential_1/q_dense_3/add_1AddV2"sequential_1/q_dense_3/truediv:z:0,sequential_1/q_dense_3/StopGradient:output:0*
T0*
_output_shapes

:  s
.sequential_1/q_dense_3/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * №F╗
,sequential_1/q_dense_3/clip_by_value/MinimumMinimum sequential_1/q_dense_3/add_1:z:07sequential_1/q_dense_3/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  k
&sequential_1/q_dense_3/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞╗
$sequential_1/q_dense_3/clip_by_valueMaximum0sequential_1/q_dense_3/clip_by_value/Minimum:z:0/sequential_1/q_dense_3/clip_by_value/y:output:0*
T0*
_output_shapes

:  Ч
sequential_1/q_dense_3/mul_1Mulsequential_1/q_dense_3/Cast:y:0(sequential_1/q_dense_3/clip_by_value:z:0*
T0*
_output_shapes

:  g
"sequential_1/q_dense_3/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFг
 sequential_1/q_dense_3/truediv_1RealDiv sequential_1/q_dense_3/mul_1:z:0+sequential_1/q_dense_3/truediv_1/y:output:0*
T0*
_output_shapes

:  c
sequential_1/q_dense_3/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ы
sequential_1/q_dense_3/mul_2Mul'sequential_1/q_dense_3/mul_2/x:output:0$sequential_1/q_dense_3/truediv_1:z:0*
T0*
_output_shapes

:  Ц
'sequential_1/q_dense_3/ReadVariableOp_1ReadVariableOp.sequential_1_q_dense_3_readvariableop_resource*
_output_shapes

:  *
dtype0}
sequential_1/q_dense_3/Neg_1Neg/sequential_1/q_dense_3/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  Т
sequential_1/q_dense_3/add_2AddV2 sequential_1/q_dense_3/Neg_1:y:0 sequential_1/q_dense_3/mul_2:z:0*
T0*
_output_shapes

:  c
sequential_1/q_dense_3/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ч
sequential_1/q_dense_3/mul_3Mul'sequential_1/q_dense_3/mul_3/x:output:0 sequential_1/q_dense_3/add_2:z:0*
T0*
_output_shapes

:  А
%sequential_1/q_dense_3/StopGradient_1StopGradient sequential_1/q_dense_3/mul_3:z:0*
T0*
_output_shapes

:  Ц
'sequential_1/q_dense_3/ReadVariableOp_2ReadVariableOp.sequential_1_q_dense_3_readvariableop_resource*
_output_shapes

:  *
dtype0п
sequential_1/q_dense_3/add_3AddV2/sequential_1/q_dense_3/ReadVariableOp_2:value:0.sequential_1/q_dense_3/StopGradient_1:output:0*
T0*
_output_shapes

:  К
sequential_1/q_dense_3/MatMulMatMulMean:output:0 sequential_1/q_dense_3/add_3:z:0*
T0*'
_output_shapes
:          `
sequential_1/q_dense_3/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :`
sequential_1/q_dense_3/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Ц
sequential_1/q_dense_3/Pow_1Pow'sequential_1/q_dense_3/Pow_1/x:output:0'sequential_1/q_dense_3/Pow_1/y:output:0*
T0*
_output_shapes
: w
sequential_1/q_dense_3/Cast_1Cast sequential_1/q_dense_3/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: Ф
'sequential_1/q_dense_3/ReadVariableOp_3ReadVariableOp0sequential_1_q_dense_3_readvariableop_3_resource*
_output_shapes
: *
dtype0c
sequential_1/q_dense_3/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFв
sequential_1/q_dense_3/mul_4Mul/sequential_1/q_dense_3/ReadVariableOp_3:value:0'sequential_1/q_dense_3/mul_4/y:output:0*
T0*
_output_shapes
: Х
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
: Р
sequential_1/q_dense_3/add_4AddV2 sequential_1/q_dense_3/Neg_2:y:0"sequential_1/q_dense_3/Round_1:y:0*
T0*
_output_shapes
: |
%sequential_1/q_dense_3/StopGradient_2StopGradient sequential_1/q_dense_3/add_4:z:0*
T0*
_output_shapes
: а
sequential_1/q_dense_3/add_5AddV2$sequential_1/q_dense_3/truediv_2:z:0.sequential_1/q_dense_3/StopGradient_2:output:0*
T0*
_output_shapes
: u
0sequential_1/q_dense_3/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * №F╗
.sequential_1/q_dense_3/clip_by_value_1/MinimumMinimum sequential_1/q_dense_3/add_5:z:09sequential_1/q_dense_3/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: m
(sequential_1/q_dense_3/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞╜
&sequential_1/q_dense_3/clip_by_value_1Maximum2sequential_1/q_dense_3/clip_by_value_1/Minimum:z:01sequential_1/q_dense_3/clip_by_value_1/y:output:0*
T0*
_output_shapes
: Ч
sequential_1/q_dense_3/mul_5Mul!sequential_1/q_dense_3/Cast_1:y:0*sequential_1/q_dense_3/clip_by_value_1:z:0*
T0*
_output_shapes
: g
"sequential_1/q_dense_3/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFЯ
 sequential_1/q_dense_3/truediv_3RealDiv sequential_1/q_dense_3/mul_5:z:0+sequential_1/q_dense_3/truediv_3/y:output:0*
T0*
_output_shapes
: c
sequential_1/q_dense_3/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ч
sequential_1/q_dense_3/mul_6Mul'sequential_1/q_dense_3/mul_6/x:output:0$sequential_1/q_dense_3/truediv_3:z:0*
T0*
_output_shapes
: Ф
'sequential_1/q_dense_3/ReadVariableOp_4ReadVariableOp0sequential_1_q_dense_3_readvariableop_3_resource*
_output_shapes
: *
dtype0y
sequential_1/q_dense_3/Neg_3Neg/sequential_1/q_dense_3/ReadVariableOp_4:value:0*
T0*
_output_shapes
: О
sequential_1/q_dense_3/add_6AddV2 sequential_1/q_dense_3/Neg_3:y:0 sequential_1/q_dense_3/mul_6:z:0*
T0*
_output_shapes
: c
sequential_1/q_dense_3/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?У
sequential_1/q_dense_3/mul_7Mul'sequential_1/q_dense_3/mul_7/x:output:0 sequential_1/q_dense_3/add_6:z:0*
T0*
_output_shapes
: |
%sequential_1/q_dense_3/StopGradient_3StopGradient sequential_1/q_dense_3/mul_7:z:0*
T0*
_output_shapes
: Ф
'sequential_1/q_dense_3/ReadVariableOp_5ReadVariableOp0sequential_1_q_dense_3_readvariableop_3_resource*
_output_shapes
: *
dtype0л
sequential_1/q_dense_3/add_7AddV2/sequential_1/q_dense_3/ReadVariableOp_5:value:0.sequential_1/q_dense_3/StopGradient_3:output:0*
T0*
_output_shapes
: ж
sequential_1/q_dense_3/BiasAddBiasAdd'sequential_1/q_dense_3/MatMul:product:0 sequential_1/q_dense_3/add_7:z:0*
T0*'
_output_shapes
:          c
!sequential_1/q_activation_3/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :c
!sequential_1/q_activation_3/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :Я
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
value	B : е
!sequential_1/q_activation_3/Pow_1Pow,sequential_1/q_activation_3/Pow_1/x:output:0,sequential_1/q_activation_3/Pow_1/y:output:0*
T0*
_output_shapes
: Б
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
value	B : Й
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
 *   AЫ
sequential_1/q_activation_3/subSub&sequential_1/q_activation_3/Cast_2:y:0*sequential_1/q_activation_3/sub/y:output:0*
T0*
_output_shapes
: Ъ
!sequential_1/q_activation_3/Pow_2Pow*sequential_1/q_activation_3/Const:output:0#sequential_1/q_activation_3/sub:z:0*
T0*
_output_shapes
: Ш
!sequential_1/q_activation_3/sub_1Sub&sequential_1/q_activation_3/Cast_1:y:0%sequential_1/q_activation_3/Pow_2:z:0*
T0*
_output_shapes
: ┤
%sequential_1/q_activation_3/LessEqual	LessEqual'sequential_1/q_dense_3/BiasAdd:output:0%sequential_1/q_activation_3/sub_1:z:0*
T0*'
_output_shapes
:          Г
 sequential_1/q_activation_3/ReluRelu'sequential_1/q_dense_3/BiasAdd:output:0*
T0*'
_output_shapes
:          В
+sequential_1/q_activation_3/ones_like/ShapeShape'sequential_1/q_dense_3/BiasAdd:output:0*
T0*
_output_shapes
:p
+sequential_1/q_activation_3/ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  А?╦
%sequential_1/q_activation_3/ones_likeFill4sequential_1/q_activation_3/ones_like/Shape:output:04sequential_1/q_activation_3/ones_like/Const:output:0*
T0*'
_output_shapes
:          Ш
!sequential_1/q_activation_3/sub_2Sub&sequential_1/q_activation_3/Cast_1:y:0%sequential_1/q_activation_3/Pow_2:z:0*
T0*
_output_shapes
: п
sequential_1/q_activation_3/mulMul.sequential_1/q_activation_3/ones_like:output:0%sequential_1/q_activation_3/sub_2:z:0*
T0*'
_output_shapes
:          т
$sequential_1/q_activation_3/SelectV2SelectV2)sequential_1/q_activation_3/LessEqual:z:0.sequential_1/q_activation_3/Relu:activations:0#sequential_1/q_activation_3/mul:z:0*
T0*'
_output_shapes
:          й
!sequential_1/q_activation_3/mul_1Mul'sequential_1/q_dense_3/BiasAdd:output:0$sequential_1/q_activation_3/Cast:y:0*
T0*'
_output_shapes
:          п
#sequential_1/q_activation_3/truedivRealDiv%sequential_1/q_activation_3/mul_1:z:0&sequential_1/q_activation_3/Cast_1:y:0*
T0*'
_output_shapes
:          Б
sequential_1/q_activation_3/NegNeg'sequential_1/q_activation_3/truediv:z:0*
T0*'
_output_shapes
:          Е
!sequential_1/q_activation_3/RoundRound'sequential_1/q_activation_3/truediv:z:0*
T0*'
_output_shapes
:          ж
sequential_1/q_activation_3/addAddV2#sequential_1/q_activation_3/Neg:y:0%sequential_1/q_activation_3/Round:y:0*
T0*'
_output_shapes
:          П
(sequential_1/q_activation_3/StopGradientStopGradient#sequential_1/q_activation_3/add:z:0*
T0*'
_output_shapes
:          ╕
!sequential_1/q_activation_3/add_1AddV2'sequential_1/q_activation_3/truediv:z:01sequential_1/q_activation_3/StopGradient:output:0*
T0*'
_output_shapes
:          п
%sequential_1/q_activation_3/truediv_1RealDiv%sequential_1/q_activation_3/add_1:z:0$sequential_1/q_activation_3/Cast:y:0*
T0*'
_output_shapes
:          l
'sequential_1/q_activation_3/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?й
%sequential_1/q_activation_3/truediv_2RealDiv0sequential_1/q_activation_3/truediv_2/x:output:0$sequential_1/q_activation_3/Cast:y:0*
T0*
_output_shapes
: h
#sequential_1/q_activation_3/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?в
!sequential_1/q_activation_3/sub_3Sub,sequential_1/q_activation_3/sub_3/x:output:0)sequential_1/q_activation_3/truediv_2:z:0*
T0*
_output_shapes
: └
1sequential_1/q_activation_3/clip_by_value/MinimumMinimum)sequential_1/q_activation_3/truediv_1:z:0%sequential_1/q_activation_3/sub_3:z:0*
T0*'
_output_shapes
:          p
+sequential_1/q_activation_3/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    ╙
)sequential_1/q_activation_3/clip_by_valueMaximum5sequential_1/q_activation_3/clip_by_value/Minimum:z:04sequential_1/q_activation_3/clip_by_value/y:output:0*
T0*'
_output_shapes
:          ▒
!sequential_1/q_activation_3/mul_2Mul&sequential_1/q_activation_3/Cast_1:y:0-sequential_1/q_activation_3/clip_by_value:z:0*
T0*'
_output_shapes
:          Й
!sequential_1/q_activation_3/Neg_1Neg-sequential_1/q_activation_3/SelectV2:output:0*
T0*'
_output_shapes
:          к
!sequential_1/q_activation_3/add_2AddV2%sequential_1/q_activation_3/Neg_1:y:0%sequential_1/q_activation_3/mul_2:z:0*
T0*'
_output_shapes
:          h
#sequential_1/q_activation_3/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?п
!sequential_1/q_activation_3/mul_3Mul,sequential_1/q_activation_3/mul_3/x:output:0%sequential_1/q_activation_3/add_2:z:0*
T0*'
_output_shapes
:          У
*sequential_1/q_activation_3/StopGradient_1StopGradient%sequential_1/q_activation_3/mul_3:z:0*
T0*'
_output_shapes
:          └
!sequential_1/q_activation_3/add_3AddV2-sequential_1/q_activation_3/SelectV2:output:03sequential_1/q_activation_3/StopGradient_1:output:0*
T0*'
_output_shapes
:          ^
sequential_1/q_dense_4/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :^
sequential_1/q_dense_4/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : Р
sequential_1/q_dense_4/PowPow%sequential_1/q_dense_4/Pow/x:output:0%sequential_1/q_dense_4/Pow/y:output:0*
T0*
_output_shapes
: s
sequential_1/q_dense_4/CastCastsequential_1/q_dense_4/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: Ф
%sequential_1/q_dense_4/ReadVariableOpReadVariableOp.sequential_1_q_dense_4_readvariableop_resource*
_output_shapes

: *
dtype0a
sequential_1/q_dense_4/mul/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFа
sequential_1/q_dense_4/mulMul-sequential_1/q_dense_4/ReadVariableOp:value:0%sequential_1/q_dense_4/mul/y:output:0*
T0*
_output_shapes

: У
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

: О
sequential_1/q_dense_4/addAddV2sequential_1/q_dense_4/Neg:y:0 sequential_1/q_dense_4/Round:y:0*
T0*
_output_shapes

: |
#sequential_1/q_dense_4/StopGradientStopGradientsequential_1/q_dense_4/add:z:0*
T0*
_output_shapes

: а
sequential_1/q_dense_4/add_1AddV2"sequential_1/q_dense_4/truediv:z:0,sequential_1/q_dense_4/StopGradient:output:0*
T0*
_output_shapes

: s
.sequential_1/q_dense_4/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * №F╗
,sequential_1/q_dense_4/clip_by_value/MinimumMinimum sequential_1/q_dense_4/add_1:z:07sequential_1/q_dense_4/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: k
&sequential_1/q_dense_4/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞╗
$sequential_1/q_dense_4/clip_by_valueMaximum0sequential_1/q_dense_4/clip_by_value/Minimum:z:0/sequential_1/q_dense_4/clip_by_value/y:output:0*
T0*
_output_shapes

: Ч
sequential_1/q_dense_4/mul_1Mulsequential_1/q_dense_4/Cast:y:0(sequential_1/q_dense_4/clip_by_value:z:0*
T0*
_output_shapes

: g
"sequential_1/q_dense_4/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFг
 sequential_1/q_dense_4/truediv_1RealDiv sequential_1/q_dense_4/mul_1:z:0+sequential_1/q_dense_4/truediv_1/y:output:0*
T0*
_output_shapes

: c
sequential_1/q_dense_4/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ы
sequential_1/q_dense_4/mul_2Mul'sequential_1/q_dense_4/mul_2/x:output:0$sequential_1/q_dense_4/truediv_1:z:0*
T0*
_output_shapes

: Ц
'sequential_1/q_dense_4/ReadVariableOp_1ReadVariableOp.sequential_1_q_dense_4_readvariableop_resource*
_output_shapes

: *
dtype0}
sequential_1/q_dense_4/Neg_1Neg/sequential_1/q_dense_4/ReadVariableOp_1:value:0*
T0*
_output_shapes

: Т
sequential_1/q_dense_4/add_2AddV2 sequential_1/q_dense_4/Neg_1:y:0 sequential_1/q_dense_4/mul_2:z:0*
T0*
_output_shapes

: c
sequential_1/q_dense_4/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ч
sequential_1/q_dense_4/mul_3Mul'sequential_1/q_dense_4/mul_3/x:output:0 sequential_1/q_dense_4/add_2:z:0*
T0*
_output_shapes

: А
%sequential_1/q_dense_4/StopGradient_1StopGradient sequential_1/q_dense_4/mul_3:z:0*
T0*
_output_shapes

: Ц
'sequential_1/q_dense_4/ReadVariableOp_2ReadVariableOp.sequential_1_q_dense_4_readvariableop_resource*
_output_shapes

: *
dtype0п
sequential_1/q_dense_4/add_3AddV2/sequential_1/q_dense_4/ReadVariableOp_2:value:0.sequential_1/q_dense_4/StopGradient_1:output:0*
T0*
_output_shapes

: в
sequential_1/q_dense_4/MatMulMatMul%sequential_1/q_activation_3/add_3:z:0 sequential_1/q_dense_4/add_3:z:0*
T0*'
_output_shapes
:         `
sequential_1/q_dense_4/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :`
sequential_1/q_dense_4/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : Ц
sequential_1/q_dense_4/Pow_1Pow'sequential_1/q_dense_4/Pow_1/x:output:0'sequential_1/q_dense_4/Pow_1/y:output:0*
T0*
_output_shapes
: w
sequential_1/q_dense_4/Cast_1Cast sequential_1/q_dense_4/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: Ф
'sequential_1/q_dense_4/ReadVariableOp_3ReadVariableOp0sequential_1_q_dense_4_readvariableop_3_resource*
_output_shapes
:*
dtype0c
sequential_1/q_dense_4/mul_4/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFв
sequential_1/q_dense_4/mul_4Mul/sequential_1/q_dense_4/ReadVariableOp_3:value:0'sequential_1/q_dense_4/mul_4/y:output:0*
T0*
_output_shapes
:Х
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
:Р
sequential_1/q_dense_4/add_4AddV2 sequential_1/q_dense_4/Neg_2:y:0"sequential_1/q_dense_4/Round_1:y:0*
T0*
_output_shapes
:|
%sequential_1/q_dense_4/StopGradient_2StopGradient sequential_1/q_dense_4/add_4:z:0*
T0*
_output_shapes
:а
sequential_1/q_dense_4/add_5AddV2$sequential_1/q_dense_4/truediv_2:z:0.sequential_1/q_dense_4/StopGradient_2:output:0*
T0*
_output_shapes
:u
0sequential_1/q_dense_4/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * №F╗
.sequential_1/q_dense_4/clip_by_value_1/MinimumMinimum sequential_1/q_dense_4/add_5:z:09sequential_1/q_dense_4/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
:m
(sequential_1/q_dense_4/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞╜
&sequential_1/q_dense_4/clip_by_value_1Maximum2sequential_1/q_dense_4/clip_by_value_1/Minimum:z:01sequential_1/q_dense_4/clip_by_value_1/y:output:0*
T0*
_output_shapes
:Ч
sequential_1/q_dense_4/mul_5Mul!sequential_1/q_dense_4/Cast_1:y:0*sequential_1/q_dense_4/clip_by_value_1:z:0*
T0*
_output_shapes
:g
"sequential_1/q_dense_4/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *  АFЯ
 sequential_1/q_dense_4/truediv_3RealDiv sequential_1/q_dense_4/mul_5:z:0+sequential_1/q_dense_4/truediv_3/y:output:0*
T0*
_output_shapes
:c
sequential_1/q_dense_4/mul_6/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?Ч
sequential_1/q_dense_4/mul_6Mul'sequential_1/q_dense_4/mul_6/x:output:0$sequential_1/q_dense_4/truediv_3:z:0*
T0*
_output_shapes
:Ф
'sequential_1/q_dense_4/ReadVariableOp_4ReadVariableOp0sequential_1_q_dense_4_readvariableop_3_resource*
_output_shapes
:*
dtype0y
sequential_1/q_dense_4/Neg_3Neg/sequential_1/q_dense_4/ReadVariableOp_4:value:0*
T0*
_output_shapes
:О
sequential_1/q_dense_4/add_6AddV2 sequential_1/q_dense_4/Neg_3:y:0 sequential_1/q_dense_4/mul_6:z:0*
T0*
_output_shapes
:c
sequential_1/q_dense_4/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?У
sequential_1/q_dense_4/mul_7Mul'sequential_1/q_dense_4/mul_7/x:output:0 sequential_1/q_dense_4/add_6:z:0*
T0*
_output_shapes
:|
%sequential_1/q_dense_4/StopGradient_3StopGradient sequential_1/q_dense_4/mul_7:z:0*
T0*
_output_shapes
:Ф
'sequential_1/q_dense_4/ReadVariableOp_5ReadVariableOp0sequential_1_q_dense_4_readvariableop_3_resource*
_output_shapes
:*
dtype0л
sequential_1/q_dense_4/add_7AddV2/sequential_1/q_dense_4/ReadVariableOp_5:value:0.sequential_1/q_dense_4/StopGradient_3:output:0*
T0*
_output_shapes
:ж
sequential_1/q_dense_4/BiasAddBiasAdd'sequential_1/q_dense_4/MatMul:product:0 sequential_1/q_dense_4/add_7:z:0*
T0*'
_output_shapes
:         v
IdentityIdentity'sequential_1/q_dense_4/BiasAdd:output:0^NoOp*
T0*'
_output_shapes
:         °	
NoOpNoOp"^sequential/q_dense/ReadVariableOp$^sequential/q_dense/ReadVariableOp_1$^sequential/q_dense/ReadVariableOp_2$^sequential/q_dense/ReadVariableOp_3$^sequential/q_dense/ReadVariableOp_4$^sequential/q_dense/ReadVariableOp_5$^sequential/q_dense_1/ReadVariableOp&^sequential/q_dense_1/ReadVariableOp_1&^sequential/q_dense_1/ReadVariableOp_2&^sequential/q_dense_1/ReadVariableOp_3&^sequential/q_dense_1/ReadVariableOp_4&^sequential/q_dense_1/ReadVariableOp_5$^sequential/q_dense_2/ReadVariableOp&^sequential/q_dense_2/ReadVariableOp_1&^sequential/q_dense_2/ReadVariableOp_2&^sequential/q_dense_2/ReadVariableOp_3&^sequential/q_dense_2/ReadVariableOp_4&^sequential/q_dense_2/ReadVariableOp_5&^sequential_1/q_dense_3/ReadVariableOp(^sequential_1/q_dense_3/ReadVariableOp_1(^sequential_1/q_dense_3/ReadVariableOp_2(^sequential_1/q_dense_3/ReadVariableOp_3(^sequential_1/q_dense_3/ReadVariableOp_4(^sequential_1/q_dense_3/ReadVariableOp_5&^sequential_1/q_dense_4/ReadVariableOp(^sequential_1/q_dense_4/ReadVariableOp_1(^sequential_1/q_dense_4/ReadVariableOp_2(^sequential_1/q_dense_4/ReadVariableOp_3(^sequential_1/q_dense_4/ReadVariableOp_4(^sequential_1/q_dense_4/ReadVariableOp_5*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:         : : : : : : : : : : 2F
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
:         
 
_user_specified_nameinputs
▄!
e
I__inference_q_activation_layer_call_and_return_conditional_losses_1243979

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
:          J
ReluReluinputs*
T0*+
_output_shapes
:          E
ones_like/ShapeShapeinputs*
T0*
_output_shapes
:T
ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  А?{
	ones_likeFillones_like/Shape:output:0ones_like/Const:output:0*
T0*+
_output_shapes
:          D
sub_2Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: _
mulMulones_like:output:0	sub_2:z:0*
T0*+
_output_shapes
:          v
SelectV2SelectV2LessEqual:z:0Relu:activations:0mul:z:0*
T0*+
_output_shapes
:          T
mul_1MulinputsCast:y:0*
T0*+
_output_shapes
:          _
truedivRealDiv	mul_1:z:0
Cast_1:y:0*
T0*+
_output_shapes
:          M
NegNegtruediv:z:0*
T0*+
_output_shapes
:          Q
RoundRoundtruediv:z:0*
T0*+
_output_shapes
:          V
addAddV2Neg:y:0	Round:y:0*
T0*+
_output_shapes
:          [
StopGradientStopGradientadd:z:0*
T0*+
_output_shapes
:          h
add_1AddV2truediv:z:0StopGradient:output:0*
T0*+
_output_shapes
:          _
	truediv_1RealDiv	add_1:z:0Cast:y:0*
T0*+
_output_shapes
:          P
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
:          T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    Г
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*+
_output_shapes
:          a
mul_2Mul
Cast_1:y:0clip_by_value:z:0*
T0*+
_output_shapes
:          U
Neg_1NegSelectV2:output:0*
T0*+
_output_shapes
:          Z
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*+
_output_shapes
:          L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?_
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*+
_output_shapes
:          _
StopGradient_1StopGradient	mul_3:z:0*
T0*+
_output_shapes
:          p
add_3AddV2SelectV2:output:0StopGradient_1:output:0*
T0*+
_output_shapes
:          U
IdentityIdentity	add_3:z:0*
T0*+
_output_shapes
:          "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:          :S O
+
_output_shapes
:          
 
_user_specified_nameinputs
Ъ	
М
,__inference_sequential_layer_call_fn_1240703
q_dense_input
unknown: 
	unknown_0: 
	unknown_1:  
	unknown_2: 
	unknown_3:  
	unknown_4: 
identityИвStatefulPartitionedCallа
StatefulPartitionedCallStatefulPartitionedCallq_dense_inputunknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4*
Tin
	2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          *(
_read_only_resource_inputs

*2
config_proto" 

CPU

GPU2 *0J 8В *P
fKRI
G__inference_sequential_layer_call_and_return_conditional_losses_1240688s
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:          `
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*6
_input_shapes%
#:         : : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:Z V
+
_output_shapes
:         
'
_user_specified_nameq_dense_input
ъ<
й
F__inference_q_dense_1_layer_call_and_return_conditional_losses_1244073

inputs)
readvariableop_resource:  '
readvariableop_3_resource: 
identityИвReadVariableOpвReadVariableOp_1вReadVariableOp_2вReadVariableOp_3вReadVariableOp_4вReadVariableOp_5G
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
 *  АF[
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
 * №Fv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞v
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
 *  АF^
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
valueB"        d
ReshapeReshapeinputsReshape/shape:output:0*
T0*'
_output_shapes
:          _
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
valueB"        f
	Reshape_1Reshapetranspose:y:0Reshape_1/shape:output:0*
T0*
_output_shapes

:  h
MatMulMatMulReshape:output:0Reshape_1:output:0*
T0*'
_output_shapes
:          S
Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :S
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
:          I
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
 *  АF]
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
 * №Fv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞x
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
 *  АFZ
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
:          c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:          ╢
NoOpNoOp^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:          : : 2 
ReadVariableOpReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_5:S O
+
_output_shapes
:          
 
_user_specified_nameinputs
└
L
0__inference_q_activation_2_layer_call_fn_1244226

inputs
identity┐
PartitionedCallPartitionedCallinputs*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *T
fORM
K__inference_q_activation_2_layer_call_and_return_conditional_losses_1240685d
IdentityIdentityPartitionedCall:output:0*
T0*+
_output_shapes
:          "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:          :S O
+
_output_shapes
:          
 
_user_specified_nameinputs
Ъ	
М
,__inference_sequential_layer_call_fn_1240824
q_dense_input
unknown: 
	unknown_0: 
	unknown_1:  
	unknown_2: 
	unknown_3:  
	unknown_4: 
identityИвStatefulPartitionedCallа
StatefulPartitionedCallStatefulPartitionedCallq_dense_inputunknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4*
Tin
	2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          *(
_read_only_resource_inputs

*2
config_proto" 

CPU

GPU2 *0J 8В *P
fKRI
G__inference_sequential_layer_call_and_return_conditional_losses_1240792s
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:          `
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*6
_input_shapes%
#:         : : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:Z V
+
_output_shapes
:         
'
_user_specified_nameq_dense_input
┼
н
Q__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_1241410
input_1$
sequential_1241385:  
sequential_1241387: $
sequential_1241389:   
sequential_1241391: $
sequential_1241393:   
sequential_1241395: &
sequential_1_1241400:  "
sequential_1_1241402: &
sequential_1_1241404: "
sequential_1_1241406:
identityИв"sequential/StatefulPartitionedCallв$sequential_1/StatefulPartitionedCall▌
"sequential/StatefulPartitionedCallStatefulPartitionedCallinput_1sequential_1241385sequential_1241387sequential_1241389sequential_1241391sequential_1241393sequential_1241395*
Tin
	2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          *(
_read_only_resource_inputs

*2
config_proto" 

CPU

GPU2 *0J 8В *P
fKRI
G__inference_sequential_layer_call_and_return_conditional_losses_1240792X
Mean/reduction_indicesConst*
_output_shapes
: *
dtype0*
value	B :М
MeanMean+sequential/StatefulPartitionedCall:output:0Mean/reduction_indices:output:0*
T0*'
_output_shapes
:          ┐
$sequential_1/StatefulPartitionedCallStatefulPartitionedCallMean:output:0sequential_1_1241400sequential_1_1241402sequential_1_1241404sequential_1_1241406*
Tin	
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:         *&
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *R
fMRK
I__inference_sequential_1_layer_call_and_return_conditional_losses_1241142|
IdentityIdentity-sequential_1/StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:         Т
NoOpNoOp#^sequential/StatefulPartitionedCall%^sequential_1/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:         : : : : : : : : : : 2H
"sequential/StatefulPartitionedCall"sequential/StatefulPartitionedCall2L
$sequential_1/StatefulPartitionedCall$sequential_1/StatefulPartitionedCall:T P
+
_output_shapes
:         
!
_user_specified_name	input_1
▐!
g
K__inference_q_activation_2_layer_call_and_return_conditional_losses_1240685

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
:          J
ReluReluinputs*
T0*+
_output_shapes
:          E
ones_like/ShapeShapeinputs*
T0*
_output_shapes
:T
ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  А?{
	ones_likeFillones_like/Shape:output:0ones_like/Const:output:0*
T0*+
_output_shapes
:          D
sub_2Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: _
mulMulones_like:output:0	sub_2:z:0*
T0*+
_output_shapes
:          v
SelectV2SelectV2LessEqual:z:0Relu:activations:0mul:z:0*
T0*+
_output_shapes
:          T
mul_1MulinputsCast:y:0*
T0*+
_output_shapes
:          _
truedivRealDiv	mul_1:z:0
Cast_1:y:0*
T0*+
_output_shapes
:          M
NegNegtruediv:z:0*
T0*+
_output_shapes
:          Q
RoundRoundtruediv:z:0*
T0*+
_output_shapes
:          V
addAddV2Neg:y:0	Round:y:0*
T0*+
_output_shapes
:          [
StopGradientStopGradientadd:z:0*
T0*+
_output_shapes
:          h
add_1AddV2truediv:z:0StopGradient:output:0*
T0*+
_output_shapes
:          _
	truediv_1RealDiv	add_1:z:0Cast:y:0*
T0*+
_output_shapes
:          P
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
:          T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    Г
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*+
_output_shapes
:          a
mul_2Mul
Cast_1:y:0clip_by_value:z:0*
T0*+
_output_shapes
:          U
Neg_1NegSelectV2:output:0*
T0*+
_output_shapes
:          Z
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*+
_output_shapes
:          L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?_
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*+
_output_shapes
:          _
StopGradient_1StopGradient	mul_3:z:0*
T0*+
_output_shapes
:          p
add_3AddV2SelectV2:output:0StopGradient_1:output:0*
T0*+
_output_shapes
:          U
IdentityIdentity	add_3:z:0*
T0*+
_output_shapes
:          "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:          :S O
+
_output_shapes
:          
 
_user_specified_nameinputs
№	
ы
%__inference_signature_wrapper_1241439
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
identityИвStatefulPartitionedCallе
StatefulPartitionedCallStatefulPartitionedCallinput_1unknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4	unknown_5	unknown_6	unknown_7	unknown_8*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:         *,
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
"__inference__wrapped_model_1240254o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:         `
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:         : : : : : : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:T P
+
_output_shapes
:         
!
_user_specified_name	input_1
н
L
$__inference__update_step_xla_1242613
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
ъ<
й
F__inference_q_dense_2_layer_call_and_return_conditional_losses_1244221

inputs)
readvariableop_resource:  '
readvariableop_3_resource: 
identityИвReadVariableOpвReadVariableOp_1вReadVariableOp_2вReadVariableOp_3вReadVariableOp_4вReadVariableOp_5G
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
 *  АF[
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
 * №Fv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞v
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
 *  АF^
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
valueB"        d
ReshapeReshapeinputsReshape/shape:output:0*
T0*'
_output_shapes
:          _
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
valueB"        f
	Reshape_1Reshapetranspose:y:0Reshape_1/shape:output:0*
T0*
_output_shapes

:  h
MatMulMatMulReshape:output:0Reshape_1:output:0*
T0*'
_output_shapes
:          S
Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B :S
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
:          I
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
 *  АF]
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
 * №Fv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *  А╞x
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
 *  АFZ
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
:          c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:          ╢
NoOpNoOp^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:          : : 2 
ReadVariableOpReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_5:S O
+
_output_shapes
:          
 
_user_specified_nameinputs
▐!
g
K__inference_q_activation_1_layer_call_and_return_conditional_losses_1240543

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
:          J
ReluReluinputs*
T0*+
_output_shapes
:          E
ones_like/ShapeShapeinputs*
T0*
_output_shapes
:T
ones_like/ConstConst*
_output_shapes
: *
dtype0*
valueB
 *  А?{
	ones_likeFillones_like/Shape:output:0ones_like/Const:output:0*
T0*+
_output_shapes
:          D
sub_2Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: _
mulMulones_like:output:0	sub_2:z:0*
T0*+
_output_shapes
:          v
SelectV2SelectV2LessEqual:z:0Relu:activations:0mul:z:0*
T0*+
_output_shapes
:          T
mul_1MulinputsCast:y:0*
T0*+
_output_shapes
:          _
truedivRealDiv	mul_1:z:0
Cast_1:y:0*
T0*+
_output_shapes
:          M
NegNegtruediv:z:0*
T0*+
_output_shapes
:          Q
RoundRoundtruediv:z:0*
T0*+
_output_shapes
:          V
addAddV2Neg:y:0	Round:y:0*
T0*+
_output_shapes
:          [
StopGradientStopGradientadd:z:0*
T0*+
_output_shapes
:          h
add_1AddV2truediv:z:0StopGradient:output:0*
T0*+
_output_shapes
:          _
	truediv_1RealDiv	add_1:z:0Cast:y:0*
T0*+
_output_shapes
:          P
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
:          T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    Г
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*+
_output_shapes
:          a
mul_2Mul
Cast_1:y:0clip_by_value:z:0*
T0*+
_output_shapes
:          U
Neg_1NegSelectV2:output:0*
T0*+
_output_shapes
:          Z
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*+
_output_shapes
:          L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  А?_
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*+
_output_shapes
:          _
StopGradient_1StopGradient	mul_3:z:0*
T0*+
_output_shapes
:          p
add_3AddV2SelectV2:output:0StopGradient_1:output:0*
T0*+
_output_shapes
:          U
IdentityIdentity	add_3:z:0*
T0*+
_output_shapes
:          "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:          :S O
+
_output_shapes
:          
 
_user_specified_nameinputs
╡
╝
I__inference_sequential_1_layer_call_and_return_conditional_losses_1241142

inputs#
q_dense_3_1241130:  
q_dense_3_1241132: #
q_dense_4_1241136: 
q_dense_4_1241138:
identityИв!q_dense_3/StatefulPartitionedCallв!q_dense_4/StatefulPartitionedCall№
!q_dense_3/StatefulPartitionedCallStatefulPartitionedCallinputsq_dense_3_1241130q_dense_3_1241132*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:          *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *O
fJRH
F__inference_q_dense_3_layer_call_and_return_conditional_losses_1240943ю
q_activation_3/PartitionedCallPartitionedCall*q_dense_3/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:          * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *T
fORM
K__inference_q_activation_3_layer_call_and_return_conditional_losses_1240998Э
!q_dense_4/StatefulPartitionedCallStatefulPartitionedCall'q_activation_3/PartitionedCall:output:0q_dense_4_1241136q_dense_4_1241138*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:         *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *O
fJRH
F__inference_q_dense_4_layer_call_and_return_conditional_losses_1241068y
IdentityIdentity*q_dense_4/StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:         О
NoOpNoOp"^q_dense_3/StatefulPartitionedCall"^q_dense_4/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:          : : : : 2F
!q_dense_3/StatefulPartitionedCall!q_dense_3/StatefulPartitionedCall2F
!q_dense_4/StatefulPartitionedCall!q_dense_4/StatefulPartitionedCall:O K
'
_output_shapes
:          
 
_user_specified_nameinputs
Ф
Ю
G__inference_sequential_layer_call_and_return_conditional_losses_1240792

inputs!
q_dense_1240773: 
q_dense_1240775: #
q_dense_1_1240779:  
q_dense_1_1240781: #
q_dense_2_1240785:  
q_dense_2_1240787: 
identityИвq_dense/StatefulPartitionedCallв!q_dense_1/StatefulPartitionedCallв!q_dense_2/StatefulPartitionedCall°
q_dense/StatefulPartitionedCallStatefulPartitionedCallinputsq_dense_1240773q_dense_1240775*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *M
fHRF
D__inference_q_dense_layer_call_and_return_conditional_losses_1240346ь
q_activation/PartitionedCallPartitionedCall(q_dense/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *R
fMRK
I__inference_q_activation_layer_call_and_return_conditional_losses_1240401Я
!q_dense_1/StatefulPartitionedCallStatefulPartitionedCall%q_activation/PartitionedCall:output:0q_dense_1_1240779q_dense_1_1240781*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *O
fJRH
F__inference_q_dense_1_layer_call_and_return_conditional_losses_1240488Є
q_activation_1/PartitionedCallPartitionedCall*q_dense_1/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *T
fORM
K__inference_q_activation_1_layer_call_and_return_conditional_losses_1240543б
!q_dense_2/StatefulPartitionedCallStatefulPartitionedCall'q_activation_1/PartitionedCall:output:0q_dense_2_1240785q_dense_2_1240787*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *O
fJRH
F__inference_q_dense_2_layer_call_and_return_conditional_losses_1240630Є
q_activation_2/PartitionedCallPartitionedCall*q_dense_2/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:          * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *T
fORM
K__inference_q_activation_2_layer_call_and_return_conditional_losses_1240685z
IdentityIdentity'q_activation_2/PartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:          ░
NoOpNoOp ^q_dense/StatefulPartitionedCall"^q_dense_1/StatefulPartitionedCall"^q_dense_2/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*6
_input_shapes%
#:         : : : : : : 2B
q_dense/StatefulPartitionedCallq_dense/StatefulPartitionedCall2F
!q_dense_1/StatefulPartitionedCall!q_dense_1/StatefulPartitionedCall2F
!q_dense_2/StatefulPartitionedCall!q_dense_2/StatefulPartitionedCall:S O
+
_output_shapes
:         
 
_user_specified_nameinputs"Ж
L
saver_filename:0StatefulPartitionedCall_1:0StatefulPartitionedCall_28"
saved_model_main_op

NoOp*>
__saved_model_init_op%#
__saved_model_init_op

NoOp*п
serving_defaultЫ
?
input_14
serving_default_input_1:0         <
output_10
StatefulPartitionedCall:0         tensorflow/serving/predict:Лу
є
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
╩
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
У
trace_0
trace_1
trace_2
trace_32и
6__inference_DeepSetsInvQuantised_layer_call_fn_1241251
6__inference_DeepSetsInvQuantised_layer_call_fn_1241464
6__inference_DeepSetsInvQuantised_layer_call_fn_1241489
6__inference_DeepSetsInvQuantised_layer_call_fn_1241354┼
╝▓╕
FullArgSpec
argsЪ
jself
jinputs
varargs
 
varkwjkwargs
defaults
 

kwonlyargsЪ

jtraining%
kwonlydefaultsк

trainingp 
annotationsк *
 ztrace_0ztrace_1ztrace_2ztrace_3
 
trace_0
 trace_1
!trace_2
"trace_32Ф
Q__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_1242046
Q__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_1242603
Q__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_1241382
Q__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_1241410┼
╝▓╕
FullArgSpec
argsЪ
jself
jinputs
varargs
 
varkwjkwargs
defaults
 

kwonlyargsЪ

jtraining%
kwonlydefaultsк

trainingp 
annotationsк *
 ztrace_0z trace_1z!trace_2z"trace_3
═B╩
"__inference__wrapped_model_1240254input_1"Ш
С▓Н
FullArgSpec
argsЪ 
varargsjargs
varkwjkwargs
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotationsк *
 
╞
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
Е
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
Ь
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
ОBЛ
6__inference_DeepSetsInvQuantised_layer_call_fn_1241251input_1"┼
╝▓╕
FullArgSpec
argsЪ
jself
jinputs
varargs
 
varkwjkwargs
defaults
 

kwonlyargsЪ

jtraining%
kwonlydefaultsк

trainingp 
annotationsк *
 
НBК
6__inference_DeepSetsInvQuantised_layer_call_fn_1241464inputs"┼
╝▓╕
FullArgSpec
argsЪ
jself
jinputs
varargs
 
varkwjkwargs
defaults
 

kwonlyargsЪ

jtraining%
kwonlydefaultsк

trainingp 
annotationsк *
 
НBК
6__inference_DeepSetsInvQuantised_layer_call_fn_1241489inputs"┼
╝▓╕
FullArgSpec
argsЪ
jself
jinputs
varargs
 
varkwjkwargs
defaults
 

kwonlyargsЪ

jtraining%
kwonlydefaultsк

trainingp 
annotationsк *
 
ОBЛ
6__inference_DeepSetsInvQuantised_layer_call_fn_1241354input_1"┼
╝▓╕
FullArgSpec
argsЪ
jself
jinputs
varargs
 
varkwjkwargs
defaults
 

kwonlyargsЪ

jtraining%
kwonlydefaultsк

trainingp 
annotationsк *
 
иBе
Q__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_1242046inputs"┼
╝▓╕
FullArgSpec
argsЪ
jself
jinputs
varargs
 
varkwjkwargs
defaults
 

kwonlyargsЪ

jtraining%
kwonlydefaultsк

trainingp 
annotationsк *
 
иBе
Q__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_1242603inputs"┼
╝▓╕
FullArgSpec
argsЪ
jself
jinputs
varargs
 
varkwjkwargs
defaults
 

kwonlyargsЪ

jtraining%
kwonlydefaultsк

trainingp 
annotationsк *
 
йBж
Q__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_1241382input_1"┼
╝▓╕
FullArgSpec
argsЪ
jself
jinputs
varargs
 
varkwjkwargs
defaults
 

kwonlyargsЪ

jtraining%
kwonlydefaultsк

trainingp 
annotationsк *
 
йBж
Q__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_1241410input_1"┼
╝▓╕
FullArgSpec
argsЪ
jself
jinputs
varargs
 
varkwjkwargs
defaults
 

kwonlyargsЪ

jtraining%
kwonlydefaultsк

trainingp 
annotationsк *
 
З
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
┤
K	variables
Ltrainable_variables
Mregularization_losses
N	keras_api
O__call__
*P&call_and_return_all_conditional_losses
Q	quantizer"
_tf_keras_layer
З
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
┤
[	variables
\trainable_variables
]regularization_losses
^	keras_api
___call__
*`&call_and_return_all_conditional_losses
a	quantizer"
_tf_keras_layer
З
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
┤
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
н
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
х
wtrace_0
xtrace_1
ytrace_2
ztrace_32·
,__inference_sequential_layer_call_fn_1240703
,__inference_sequential_layer_call_fn_1242670
,__inference_sequential_layer_call_fn_1242687
,__inference_sequential_layer_call_fn_1240824┐
╢▓▓
FullArgSpec1
args)Ъ&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaultsЪ
p 

 

kwonlyargsЪ 
kwonlydefaults
 
annotationsк *
 zwtrace_0zxtrace_1zytrace_2zztrace_3
╤
{trace_0
|trace_1
}trace_2
~trace_32ц
G__inference_sequential_layer_call_and_return_conditional_losses_1243069
G__inference_sequential_layer_call_and_return_conditional_losses_1243451
G__inference_sequential_layer_call_and_return_conditional_losses_1240846
G__inference_sequential_layer_call_and_return_conditional_losses_1240868┐
╢▓▓
FullArgSpec1
args)Ъ&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaultsЪ
p 

 

kwonlyargsЪ 
kwonlydefaults
 
annotationsк *
 z{trace_0z|trace_1z}trace_2z~trace_3
П
	variables
Аtrainable_variables
Бregularization_losses
В	keras_api
Г__call__
+Д&call_and_return_all_conditional_losses
Еkernel_quantizer_internal
Жbias_quantizer_internal
З
quantizers

kernel
bias"
_tf_keras_layer
╗
И	variables
Йtrainable_variables
Кregularization_losses
Л	keras_api
М__call__
+Н&call_and_return_all_conditional_losses
О	quantizer"
_tf_keras_layer
Р
П	variables
Рtrainable_variables
Сregularization_losses
Т	keras_api
У__call__
+Ф&call_and_return_all_conditional_losses
Хkernel_quantizer_internal
Цbias_quantizer_internal
Ч
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
▓
Шnon_trainable_variables
Щlayers
Ъmetrics
 Ыlayer_regularization_losses
Ьlayer_metrics
2	variables
3trainable_variables
4regularization_losses
6__call__
*7&call_and_return_all_conditional_losses
&7"call_and_return_conditional_losses"
_generic_user_object
ї
Эtrace_0
Юtrace_1
Яtrace_2
аtrace_32В
.__inference_sequential_1_layer_call_fn_1241086
.__inference_sequential_1_layer_call_fn_1243464
.__inference_sequential_1_layer_call_fn_1243477
.__inference_sequential_1_layer_call_fn_1241166┐
╢▓▓
FullArgSpec1
args)Ъ&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaultsЪ
p 

 

kwonlyargsЪ 
kwonlydefaults
 
annotationsк *
 zЭtrace_0zЮtrace_1zЯtrace_2zаtrace_3
с
бtrace_0
вtrace_1
гtrace_2
дtrace_32ю
I__inference_sequential_1_layer_call_and_return_conditional_losses_1243654
I__inference_sequential_1_layer_call_and_return_conditional_losses_1243831
I__inference_sequential_1_layer_call_and_return_conditional_losses_1241181
I__inference_sequential_1_layer_call_and_return_conditional_losses_1241196┐
╢▓▓
FullArgSpec1
args)Ъ&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaultsЪ
p 

 

kwonlyargsЪ 
kwonlydefaults
 
annotationsк *
 zбtrace_0zвtrace_1zгtrace_2zдtrace_3
╥
90
е1
ж2
з3
и4
й5
к6
л7
м8
н9
о10
п11
░12
▒13
▓14
│15
┤16
╡17
╢18
╖19
╕20"
trackable_list_wrapper
:	 2	iteration
: 2learning_rate
 "
trackable_dict_wrapper
p
е0
з1
й2
л3
н4
п5
▒6
│7
╡8
╖9"
trackable_list_wrapper
p
ж0
и1
к2
м3
о4
░5
▓6
┤7
╢8
╕9"
trackable_list_wrapper
╙
╣trace_0
║trace_1
╗trace_2
╝trace_3
╜trace_4
╛trace_5
┐trace_6
└trace_7
┴trace_8
┬trace_92╕
$__inference__update_step_xla_1242608
$__inference__update_step_xla_1242613
$__inference__update_step_xla_1242618
$__inference__update_step_xla_1242623
$__inference__update_step_xla_1242628
$__inference__update_step_xla_1242633
$__inference__update_step_xla_1242638
$__inference__update_step_xla_1242643
$__inference__update_step_xla_1242648
$__inference__update_step_xla_1242653╣
о▓к
FullArgSpec2
args*Ъ'
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

kwonlyargsЪ 
kwonlydefaults
 
annotationsк *
 0z╣trace_0z║trace_1z╗trace_2z╝trace_3z╜trace_4z╛trace_5z┐trace_6z└trace_7z┴trace_8z┬trace_9
╠B╔
%__inference_signature_wrapper_1241439input_1"Ф
Н▓Й
FullArgSpec
argsЪ 
varargs
 
varkwjkwargs
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotationsк *
 
R
├	variables
─	keras_api

┼total

╞count"
_tf_keras_metric
c
╟	variables
╚	keras_api

╔total

╩count
╦
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
▓
╠non_trainable_variables
═layers
╬metrics
 ╧layer_regularization_losses
╨layer_metrics
B	variables
Ctrainable_variables
Dregularization_losses
F__call__
*G&call_and_return_all_conditional_losses
&G"call_and_return_conditional_losses"
_generic_user_object
я
╤trace_02╨
)__inference_q_dense_layer_call_fn_1243840в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
 z╤trace_0
К
╥trace_02ы
D__inference_q_dense_layer_call_and_return_conditional_losses_1243925в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
 z╥trace_0
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
▓
╙non_trainable_variables
╘layers
╒metrics
 ╓layer_regularization_losses
╫layer_metrics
K	variables
Ltrainable_variables
Mregularization_losses
O__call__
*P&call_and_return_all_conditional_losses
&P"call_and_return_conditional_losses"
_generic_user_object
Ї
╪trace_02╒
.__inference_q_activation_layer_call_fn_1243930в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
 z╪trace_0
П
┘trace_02Ё
I__inference_q_activation_layer_call_and_return_conditional_losses_1243979в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
 z┘trace_0
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
▓
┌non_trainable_variables
█layers
▄metrics
 ▌layer_regularization_losses
▐layer_metrics
R	variables
Strainable_variables
Tregularization_losses
V__call__
*W&call_and_return_all_conditional_losses
&W"call_and_return_conditional_losses"
_generic_user_object
ё
▀trace_02╥
+__inference_q_dense_1_layer_call_fn_1243988в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
 z▀trace_0
М
рtrace_02э
F__inference_q_dense_1_layer_call_and_return_conditional_losses_1244073в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
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
▓
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
Ў
цtrace_02╫
0__inference_q_activation_1_layer_call_fn_1244078в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
 zцtrace_0
С
чtrace_02Є
K__inference_q_activation_1_layer_call_and_return_conditional_losses_1244127в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
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
▓
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
ё
эtrace_02╥
+__inference_q_dense_2_layer_call_fn_1244136в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
 zэtrace_0
М
юtrace_02э
F__inference_q_dense_2_layer_call_and_return_conditional_losses_1244221в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
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
▓
яnon_trainable_variables
Ёlayers
ёmetrics
 Єlayer_regularization_losses
єlayer_metrics
k	variables
ltrainable_variables
mregularization_losses
o__call__
*p&call_and_return_all_conditional_losses
&p"call_and_return_conditional_losses"
_generic_user_object
Ў
Їtrace_02╫
0__inference_q_activation_2_layer_call_fn_1244226в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
 zЇtrace_0
С
їtrace_02Є
K__inference_q_activation_2_layer_call_and_return_conditional_losses_1244275в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
 zїtrace_0
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
ДBБ
,__inference_sequential_layer_call_fn_1240703q_dense_input"┐
╢▓▓
FullArgSpec1
args)Ъ&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaultsЪ
p 

 

kwonlyargsЪ 
kwonlydefaults
 
annotationsк *
 
¤B·
,__inference_sequential_layer_call_fn_1242670inputs"┐
╢▓▓
FullArgSpec1
args)Ъ&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaultsЪ
p 

 

kwonlyargsЪ 
kwonlydefaults
 
annotationsк *
 
¤B·
,__inference_sequential_layer_call_fn_1242687inputs"┐
╢▓▓
FullArgSpec1
args)Ъ&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaultsЪ
p 

 

kwonlyargsЪ 
kwonlydefaults
 
annotationsк *
 
ДBБ
,__inference_sequential_layer_call_fn_1240824q_dense_input"┐
╢▓▓
FullArgSpec1
args)Ъ&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaultsЪ
p 

 

kwonlyargsЪ 
kwonlydefaults
 
annotationsк *
 
ШBХ
G__inference_sequential_layer_call_and_return_conditional_losses_1243069inputs"┐
╢▓▓
FullArgSpec1
args)Ъ&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaultsЪ
p 

 

kwonlyargsЪ 
kwonlydefaults
 
annotationsк *
 
ШBХ
G__inference_sequential_layer_call_and_return_conditional_losses_1243451inputs"┐
╢▓▓
FullArgSpec1
args)Ъ&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaultsЪ
p 

 

kwonlyargsЪ 
kwonlydefaults
 
annotationsк *
 
ЯBЬ
G__inference_sequential_layer_call_and_return_conditional_losses_1240846q_dense_input"┐
╢▓▓
FullArgSpec1
args)Ъ&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaultsЪ
p 

 

kwonlyargsЪ 
kwonlydefaults
 
annotationsк *
 
ЯBЬ
G__inference_sequential_layer_call_and_return_conditional_losses_1240868q_dense_input"┐
╢▓▓
FullArgSpec1
args)Ъ&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaultsЪ
p 

 

kwonlyargsЪ 
kwonlydefaults
 
annotationsк *
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
╖
Ўnon_trainable_variables
ўlayers
°metrics
 ∙layer_regularization_losses
·layer_metrics
	variables
Аtrainable_variables
Бregularization_losses
Г__call__
+Д&call_and_return_all_conditional_losses
'Д"call_and_return_conditional_losses"
_generic_user_object
ё
√trace_02╥
+__inference_q_dense_3_layer_call_fn_1244284в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
 z√trace_0
М
№trace_02э
F__inference_q_dense_3_layer_call_and_return_conditional_losses_1244352в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
 z№trace_0
"
_generic_user_object
"
_generic_user_object
0
Е0
Ж1"
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
╕
¤non_trainable_variables
■layers
 metrics
 Аlayer_regularization_losses
Бlayer_metrics
И	variables
Йtrainable_variables
Кregularization_losses
М__call__
+Н&call_and_return_all_conditional_losses
'Н"call_and_return_conditional_losses"
_generic_user_object
Ў
Вtrace_02╫
0__inference_q_activation_3_layer_call_fn_1244357в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
 zВtrace_0
С
Гtrace_02Є
K__inference_q_activation_3_layer_call_and_return_conditional_losses_1244406в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
 zГtrace_0
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
╕
Дnon_trainable_variables
Еlayers
Жmetrics
 Зlayer_regularization_losses
Иlayer_metrics
П	variables
Рtrainable_variables
Сregularization_losses
У__call__
+Ф&call_and_return_all_conditional_losses
'Ф"call_and_return_conditional_losses"
_generic_user_object
ё
Йtrace_02╥
+__inference_q_dense_4_layer_call_fn_1244415в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
 zЙtrace_0
М
Кtrace_02э
F__inference_q_dense_4_layer_call_and_return_conditional_losses_1244483в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
 zКtrace_0
"
_generic_user_object
"
_generic_user_object
0
Х0
Ц1"
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
ИBЕ
.__inference_sequential_1_layer_call_fn_1241086q_dense_3_input"┐
╢▓▓
FullArgSpec1
args)Ъ&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaultsЪ
p 

 

kwonlyargsЪ 
kwonlydefaults
 
annotationsк *
 
 B№
.__inference_sequential_1_layer_call_fn_1243464inputs"┐
╢▓▓
FullArgSpec1
args)Ъ&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaultsЪ
p 

 

kwonlyargsЪ 
kwonlydefaults
 
annotationsк *
 
 B№
.__inference_sequential_1_layer_call_fn_1243477inputs"┐
╢▓▓
FullArgSpec1
args)Ъ&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaultsЪ
p 

 

kwonlyargsЪ 
kwonlydefaults
 
annotationsк *
 
ИBЕ
.__inference_sequential_1_layer_call_fn_1241166q_dense_3_input"┐
╢▓▓
FullArgSpec1
args)Ъ&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaultsЪ
p 

 

kwonlyargsЪ 
kwonlydefaults
 
annotationsк *
 
ЪBЧ
I__inference_sequential_1_layer_call_and_return_conditional_losses_1243654inputs"┐
╢▓▓
FullArgSpec1
args)Ъ&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaultsЪ
p 

 

kwonlyargsЪ 
kwonlydefaults
 
annotationsк *
 
ЪBЧ
I__inference_sequential_1_layer_call_and_return_conditional_losses_1243831inputs"┐
╢▓▓
FullArgSpec1
args)Ъ&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaultsЪ
p 

 

kwonlyargsЪ 
kwonlydefaults
 
annotationsк *
 
гBа
I__inference_sequential_1_layer_call_and_return_conditional_losses_1241181q_dense_3_input"┐
╢▓▓
FullArgSpec1
args)Ъ&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaultsЪ
p 

 

kwonlyargsЪ 
kwonlydefaults
 
annotationsк *
 
гBа
I__inference_sequential_1_layer_call_and_return_conditional_losses_1241196q_dense_3_input"┐
╢▓▓
FullArgSpec1
args)Ъ&
jself
jinputs

jtraining
jmask
varargs
 
varkw
 
defaultsЪ
p 

 

kwonlyargsЪ 
kwonlydefaults
 
annotationsк *
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
∙BЎ
$__inference__update_step_xla_1242608gradientvariable"╖
о▓к
FullArgSpec2
args*Ъ'
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

kwonlyargsЪ 
kwonlydefaults
 
annotationsк *
 
∙BЎ
$__inference__update_step_xla_1242613gradientvariable"╖
о▓к
FullArgSpec2
args*Ъ'
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

kwonlyargsЪ 
kwonlydefaults
 
annotationsк *
 
∙BЎ
$__inference__update_step_xla_1242618gradientvariable"╖
о▓к
FullArgSpec2
args*Ъ'
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

kwonlyargsЪ 
kwonlydefaults
 
annotationsк *
 
∙BЎ
$__inference__update_step_xla_1242623gradientvariable"╖
о▓к
FullArgSpec2
args*Ъ'
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

kwonlyargsЪ 
kwonlydefaults
 
annotationsк *
 
∙BЎ
$__inference__update_step_xla_1242628gradientvariable"╖
о▓к
FullArgSpec2
args*Ъ'
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

kwonlyargsЪ 
kwonlydefaults
 
annotationsк *
 
∙BЎ
$__inference__update_step_xla_1242633gradientvariable"╖
о▓к
FullArgSpec2
args*Ъ'
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

kwonlyargsЪ 
kwonlydefaults
 
annotationsк *
 
∙BЎ
$__inference__update_step_xla_1242638gradientvariable"╖
о▓к
FullArgSpec2
args*Ъ'
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

kwonlyargsЪ 
kwonlydefaults
 
annotationsк *
 
∙BЎ
$__inference__update_step_xla_1242643gradientvariable"╖
о▓к
FullArgSpec2
args*Ъ'
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

kwonlyargsЪ 
kwonlydefaults
 
annotationsк *
 
∙BЎ
$__inference__update_step_xla_1242648gradientvariable"╖
о▓к
FullArgSpec2
args*Ъ'
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

kwonlyargsЪ 
kwonlydefaults
 
annotationsк *
 
∙BЎ
$__inference__update_step_xla_1242653gradientvariable"╖
о▓к
FullArgSpec2
args*Ъ'
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

kwonlyargsЪ 
kwonlydefaults
 
annotationsк *
 
0
┼0
╞1"
trackable_list_wrapper
.
├	variables"
_generic_user_object
:  (2total
:  (2count
0
╔0
╩1"
trackable_list_wrapper
.
╟	variables"
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
▌B┌
)__inference_q_dense_layer_call_fn_1243840inputs"в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
 
°Bї
D__inference_q_dense_layer_call_and_return_conditional_losses_1243925inputs"в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
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
тB▀
.__inference_q_activation_layer_call_fn_1243930inputs"в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
 
¤B·
I__inference_q_activation_layer_call_and_return_conditional_losses_1243979inputs"в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
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
▀B▄
+__inference_q_dense_1_layer_call_fn_1243988inputs"в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
 
·Bў
F__inference_q_dense_1_layer_call_and_return_conditional_losses_1244073inputs"в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
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
фBс
0__inference_q_activation_1_layer_call_fn_1244078inputs"в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
 
 B№
K__inference_q_activation_1_layer_call_and_return_conditional_losses_1244127inputs"в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
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
▀B▄
+__inference_q_dense_2_layer_call_fn_1244136inputs"в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
 
·Bў
F__inference_q_dense_2_layer_call_and_return_conditional_losses_1244221inputs"в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
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
фBс
0__inference_q_activation_2_layer_call_fn_1244226inputs"в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
 
 B№
K__inference_q_activation_2_layer_call_and_return_conditional_losses_1244275inputs"в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
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
▀B▄
+__inference_q_dense_3_layer_call_fn_1244284inputs"в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
 
·Bў
F__inference_q_dense_3_layer_call_and_return_conditional_losses_1244352inputs"в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
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
фBс
0__inference_q_activation_3_layer_call_fn_1244357inputs"в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
 
 B№
K__inference_q_activation_3_layer_call_and_return_conditional_losses_1244406inputs"в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
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
▀B▄
+__inference_q_dense_4_layer_call_fn_1244415inputs"в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
 
·Bў
F__inference_q_dense_4_layer_call_and_return_conditional_losses_1244483inputs"в
Щ▓Х
FullArgSpec
argsЪ
jself
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
annotationsк *
 ╓
Q__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_1241382А
DвA
*в'
%К"
input_1         
к

trainingp ",в)
"К
tensor_0         
Ъ ╓
Q__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_1241410А
DвA
*в'
%К"
input_1         
к

trainingp",в)
"К
tensor_0         
Ъ ╘
Q__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_1242046
Cв@
)в&
$К!
inputs         
к

trainingp ",в)
"К
tensor_0         
Ъ ╘
Q__inference_DeepSetsInvQuantised_layer_call_and_return_conditional_losses_1242603
Cв@
)в&
$К!
inputs         
к

trainingp",в)
"К
tensor_0         
Ъ п
6__inference_DeepSetsInvQuantised_layer_call_fn_1241251u
DвA
*в'
%К"
input_1         
к

trainingp "!К
unknown         п
6__inference_DeepSetsInvQuantised_layer_call_fn_1241354u
DвA
*в'
%К"
input_1         
к

trainingp"!К
unknown         о
6__inference_DeepSetsInvQuantised_layer_call_fn_1241464t
Cв@
)в&
$К!
inputs         
к

trainingp "!К
unknown         о
6__inference_DeepSetsInvQuantised_layer_call_fn_1241489t
Cв@
)в&
$К!
inputs         
к

trainingp"!К
unknown         Ц
$__inference__update_step_xla_1242608nhвe
^в[
К
gradient 
4Т1	в
· 
А
p
` VariableSpec 
`аЧг└Хщ?
к "
 О
$__inference__update_step_xla_1242613f`в]
VвS
К
gradient 
0Т-	в
· 
А
p
` VariableSpec 
`аНи└Хщ?
к "
 Ц
$__inference__update_step_xla_1242618nhвe
^в[
К
gradient  
4Т1	в
·  
А
p
` VariableSpec 
`рПдАФщ?
к "
 О
$__inference__update_step_xla_1242623f`в]
VвS
К
gradient 
0Т-	в
· 
А
p
` VariableSpec 
`аЧдАФщ?
к "
 Ц
$__inference__update_step_xla_1242628nhвe
^в[
К
gradient  
4Т1	в
·  
А
p
` VariableSpec 
`АС├¤Кщ?
к "
 О
$__inference__update_step_xla_1242633f`в]
VвS
К
gradient 
0Т-	в
· 
А
p
` VariableSpec 
`аН├¤Кщ?
к "
 Ц
$__inference__update_step_xla_1242638nhвe
^в[
К
gradient  
4Т1	в
·  
А
p
` VariableSpec 
`а║├¤Кщ?
к "
 О
$__inference__update_step_xla_1242643f`в]
VвS
К
gradient 
0Т-	в
· 
А
p
` VariableSpec 
`р╝├¤Кщ?
к "
 Ц
$__inference__update_step_xla_1242648nhвe
^в[
К
gradient 
4Т1	в
· 
А
p
` VariableSpec 
`└╢└¤Кщ?
к "
 О
$__inference__update_step_xla_1242653f`в]
VвS
К
gradient
0Т-	в
·
А
p
` VariableSpec 
`А╣└¤Кщ?
к "
 Э
"__inference__wrapped_model_1240254w
4в1
*в'
%К"
input_1         
к "3к0
.
output_1"К
output_1         ╢
K__inference_q_activation_1_layer_call_and_return_conditional_losses_1244127g3в0
)в&
$К!
inputs          
к "0в-
&К#
tensor_0          
Ъ Р
0__inference_q_activation_1_layer_call_fn_1244078\3в0
)в&
$К!
inputs          
к "%К"
unknown          ╢
K__inference_q_activation_2_layer_call_and_return_conditional_losses_1244275g3в0
)в&
$К!
inputs          
к "0в-
&К#
tensor_0          
Ъ Р
0__inference_q_activation_2_layer_call_fn_1244226\3в0
)в&
$К!
inputs          
к "%К"
unknown          о
K__inference_q_activation_3_layer_call_and_return_conditional_losses_1244406_/в,
%в"
 К
inputs          
к ",в)
"К
tensor_0          
Ъ И
0__inference_q_activation_3_layer_call_fn_1244357T/в,
%в"
 К
inputs          
к "!К
unknown          ┤
I__inference_q_activation_layer_call_and_return_conditional_losses_1243979g3в0
)в&
$К!
inputs          
к "0в-
&К#
tensor_0          
Ъ О
.__inference_q_activation_layer_call_fn_1243930\3в0
)в&
$К!
inputs          
к "%К"
unknown          ╡
F__inference_q_dense_1_layer_call_and_return_conditional_losses_1244073k3в0
)в&
$К!
inputs          
к "0в-
&К#
tensor_0          
Ъ П
+__inference_q_dense_1_layer_call_fn_1243988`3в0
)в&
$К!
inputs          
к "%К"
unknown          ╡
F__inference_q_dense_2_layer_call_and_return_conditional_losses_1244221k3в0
)в&
$К!
inputs          
к "0в-
&К#
tensor_0          
Ъ П
+__inference_q_dense_2_layer_call_fn_1244136`3в0
)в&
$К!
inputs          
к "%К"
unknown          н
F__inference_q_dense_3_layer_call_and_return_conditional_losses_1244352c/в,
%в"
 К
inputs          
к ",в)
"К
tensor_0          
Ъ З
+__inference_q_dense_3_layer_call_fn_1244284X/в,
%в"
 К
inputs          
к "!К
unknown          н
F__inference_q_dense_4_layer_call_and_return_conditional_losses_1244483c/в,
%в"
 К
inputs          
к ",в)
"К
tensor_0         
Ъ З
+__inference_q_dense_4_layer_call_fn_1244415X/в,
%в"
 К
inputs          
к "!К
unknown         │
D__inference_q_dense_layer_call_and_return_conditional_losses_1243925k3в0
)в&
$К!
inputs         
к "0в-
&К#
tensor_0          
Ъ Н
)__inference_q_dense_layer_call_fn_1243840`3в0
)в&
$К!
inputs         
к "%К"
unknown          ├
I__inference_sequential_1_layer_call_and_return_conditional_losses_1241181v@в=
6в3
)К&
q_dense_3_input          
p 

 
к ",в)
"К
tensor_0         
Ъ ├
I__inference_sequential_1_layer_call_and_return_conditional_losses_1241196v@в=
6в3
)К&
q_dense_3_input          
p

 
к ",в)
"К
tensor_0         
Ъ ║
I__inference_sequential_1_layer_call_and_return_conditional_losses_1243654m7в4
-в*
 К
inputs          
p 

 
к ",в)
"К
tensor_0         
Ъ ║
I__inference_sequential_1_layer_call_and_return_conditional_losses_1243831m7в4
-в*
 К
inputs          
p

 
к ",в)
"К
tensor_0         
Ъ Э
.__inference_sequential_1_layer_call_fn_1241086k@в=
6в3
)К&
q_dense_3_input          
p 

 
к "!К
unknown         Э
.__inference_sequential_1_layer_call_fn_1241166k@в=
6в3
)К&
q_dense_3_input          
p

 
к "!К
unknown         Ф
.__inference_sequential_1_layer_call_fn_1243464b7в4
-в*
 К
inputs          
p 

 
к "!К
unknown         Ф
.__inference_sequential_1_layer_call_fn_1243477b7в4
-в*
 К
inputs          
p

 
к "!К
unknown         ╔
G__inference_sequential_layer_call_and_return_conditional_losses_1240846~Bв?
8в5
+К(
q_dense_input         
p 

 
к "0в-
&К#
tensor_0          
Ъ ╔
G__inference_sequential_layer_call_and_return_conditional_losses_1240868~Bв?
8в5
+К(
q_dense_input         
p

 
к "0в-
&К#
tensor_0          
Ъ ┬
G__inference_sequential_layer_call_and_return_conditional_losses_1243069w;в8
1в.
$К!
inputs         
p 

 
к "0в-
&К#
tensor_0          
Ъ ┬
G__inference_sequential_layer_call_and_return_conditional_losses_1243451w;в8
1в.
$К!
inputs         
p

 
к "0в-
&К#
tensor_0          
Ъ г
,__inference_sequential_layer_call_fn_1240703sBв?
8в5
+К(
q_dense_input         
p 

 
к "%К"
unknown          г
,__inference_sequential_layer_call_fn_1240824sBв?
8в5
+К(
q_dense_input         
p

 
к "%К"
unknown          Ь
,__inference_sequential_layer_call_fn_1242670l;в8
1в.
$К!
inputs         
p 

 
к "%К"
unknown          Ь
,__inference_sequential_layer_call_fn_1242687l;в8
1в.
$К!
inputs         
p

 
к "%К"
unknown          м
%__inference_signature_wrapper_1241439В
?в<
в 
5к2
0
input_1%К"
input_1         "3к0
.
output_1"К
output_1         
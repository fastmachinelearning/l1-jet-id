ЅЙ
±А
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
h
ConcatV2
values"T*N
axis"Tidx
output"T"
Nint(0"	
Ttype"
Tidxtype0:
2	
8
Const
output"dtype"
valuetensor"
dtypetype
Ѓ
GatherV2
params"Tparams
indices"Tindices
axis"Taxis
output"Tparams"

batch_dimsint "
Tparamstype"
Tindicestype:
2	"
Taxistype:
2	
.
Identity

input"T
output"T"	
Ttype
q
MatMul
a"T
b"T
product"T"
transpose_abool( "
transpose_bbool( "
Ttype:

2	
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
Н
Prod

input"T
reduction_indices"Tidx
output"T"
	keep_dimsbool( " 
Ttype:
2	"
Tidxtype0:
2	
@
ReadVariableOp
resource
value"dtype"
dtypetypeИ
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
N

StringJoin
inputs*N

output"
Nint(0"
	separatorstring 
P
	Transpose
x"T
perm"Tperm
y"T"	
Ttype"
Tpermtype0:
2	
Ц
VarHandleOp
resource"
	containerstring "
shared_namestring "
dtypetype"
shapeshape"#
allowed_deviceslist(string)
 И"serve*2.11.02v2.11.0-rc2-17-gd5b57ca93e58№Ђ
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
~
Adam/v/dense_4/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape:*$
shared_nameAdam/v/dense_4/bias
w
'Adam/v/dense_4/bias/Read/ReadVariableOpReadVariableOpAdam/v/dense_4/bias*
_output_shapes
:*
dtype0
~
Adam/m/dense_4/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape:*$
shared_nameAdam/m/dense_4/bias
w
'Adam/m/dense_4/bias/Read/ReadVariableOpReadVariableOpAdam/m/dense_4/bias*
_output_shapes
:*
dtype0
Ж
Adam/v/dense_4/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
: *&
shared_nameAdam/v/dense_4/kernel

)Adam/v/dense_4/kernel/Read/ReadVariableOpReadVariableOpAdam/v/dense_4/kernel*
_output_shapes

: *
dtype0
Ж
Adam/m/dense_4/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
: *&
shared_nameAdam/m/dense_4/kernel

)Adam/m/dense_4/kernel/Read/ReadVariableOpReadVariableOpAdam/m/dense_4/kernel*
_output_shapes

: *
dtype0
~
Adam/v/dense_3/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: *$
shared_nameAdam/v/dense_3/bias
w
'Adam/v/dense_3/bias/Read/ReadVariableOpReadVariableOpAdam/v/dense_3/bias*
_output_shapes
: *
dtype0
~
Adam/m/dense_3/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: *$
shared_nameAdam/m/dense_3/bias
w
'Adam/m/dense_3/bias/Read/ReadVariableOpReadVariableOpAdam/m/dense_3/bias*
_output_shapes
: *
dtype0
Ж
Adam/v/dense_3/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *&
shared_nameAdam/v/dense_3/kernel

)Adam/v/dense_3/kernel/Read/ReadVariableOpReadVariableOpAdam/v/dense_3/kernel*
_output_shapes

:  *
dtype0
Ж
Adam/m/dense_3/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *&
shared_nameAdam/m/dense_3/kernel

)Adam/m/dense_3/kernel/Read/ReadVariableOpReadVariableOpAdam/m/dense_3/kernel*
_output_shapes

:  *
dtype0
~
Adam/v/dense_2/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: *$
shared_nameAdam/v/dense_2/bias
w
'Adam/v/dense_2/bias/Read/ReadVariableOpReadVariableOpAdam/v/dense_2/bias*
_output_shapes
: *
dtype0
~
Adam/m/dense_2/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: *$
shared_nameAdam/m/dense_2/bias
w
'Adam/m/dense_2/bias/Read/ReadVariableOpReadVariableOpAdam/m/dense_2/bias*
_output_shapes
: *
dtype0
Ж
Adam/v/dense_2/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *&
shared_nameAdam/v/dense_2/kernel

)Adam/v/dense_2/kernel/Read/ReadVariableOpReadVariableOpAdam/v/dense_2/kernel*
_output_shapes

:  *
dtype0
Ж
Adam/m/dense_2/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *&
shared_nameAdam/m/dense_2/kernel

)Adam/m/dense_2/kernel/Read/ReadVariableOpReadVariableOpAdam/m/dense_2/kernel*
_output_shapes

:  *
dtype0
~
Adam/v/dense_1/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: *$
shared_nameAdam/v/dense_1/bias
w
'Adam/v/dense_1/bias/Read/ReadVariableOpReadVariableOpAdam/v/dense_1/bias*
_output_shapes
: *
dtype0
~
Adam/m/dense_1/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: *$
shared_nameAdam/m/dense_1/bias
w
'Adam/m/dense_1/bias/Read/ReadVariableOpReadVariableOpAdam/m/dense_1/bias*
_output_shapes
: *
dtype0
Ж
Adam/v/dense_1/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *&
shared_nameAdam/v/dense_1/kernel

)Adam/v/dense_1/kernel/Read/ReadVariableOpReadVariableOpAdam/v/dense_1/kernel*
_output_shapes

:  *
dtype0
Ж
Adam/m/dense_1/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *&
shared_nameAdam/m/dense_1/kernel

)Adam/m/dense_1/kernel/Read/ReadVariableOpReadVariableOpAdam/m/dense_1/kernel*
_output_shapes

:  *
dtype0
z
Adam/v/dense/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: *"
shared_nameAdam/v/dense/bias
s
%Adam/v/dense/bias/Read/ReadVariableOpReadVariableOpAdam/v/dense/bias*
_output_shapes
: *
dtype0
z
Adam/m/dense/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: *"
shared_nameAdam/m/dense/bias
s
%Adam/m/dense/bias/Read/ReadVariableOpReadVariableOpAdam/m/dense/bias*
_output_shapes
: *
dtype0
В
Adam/v/dense/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
: *$
shared_nameAdam/v/dense/kernel
{
'Adam/v/dense/kernel/Read/ReadVariableOpReadVariableOpAdam/v/dense/kernel*
_output_shapes

: *
dtype0
В
Adam/m/dense/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
: *$
shared_nameAdam/m/dense/kernel
{
'Adam/m/dense/kernel/Read/ReadVariableOpReadVariableOpAdam/m/dense/kernel*
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
p
dense_4/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape:*
shared_namedense_4/bias
i
 dense_4/bias/Read/ReadVariableOpReadVariableOpdense_4/bias*
_output_shapes
:*
dtype0
x
dense_4/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
: *
shared_namedense_4/kernel
q
"dense_4/kernel/Read/ReadVariableOpReadVariableOpdense_4/kernel*
_output_shapes

: *
dtype0
p
dense_3/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: *
shared_namedense_3/bias
i
 dense_3/bias/Read/ReadVariableOpReadVariableOpdense_3/bias*
_output_shapes
: *
dtype0
x
dense_3/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *
shared_namedense_3/kernel
q
"dense_3/kernel/Read/ReadVariableOpReadVariableOpdense_3/kernel*
_output_shapes

:  *
dtype0
p
dense_2/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: *
shared_namedense_2/bias
i
 dense_2/bias/Read/ReadVariableOpReadVariableOpdense_2/bias*
_output_shapes
: *
dtype0
x
dense_2/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *
shared_namedense_2/kernel
q
"dense_2/kernel/Read/ReadVariableOpReadVariableOpdense_2/kernel*
_output_shapes

:  *
dtype0
p
dense_1/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: *
shared_namedense_1/bias
i
 dense_1/bias/Read/ReadVariableOpReadVariableOpdense_1/bias*
_output_shapes
: *
dtype0
x
dense_1/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *
shared_namedense_1/kernel
q
"dense_1/kernel/Read/ReadVariableOpReadVariableOpdense_1/kernel*
_output_shapes

:  *
dtype0
l

dense/biasVarHandleOp*
_output_shapes
: *
dtype0*
shape: *
shared_name
dense/bias
e
dense/bias/Read/ReadVariableOpReadVariableOp
dense/bias*
_output_shapes
: *
dtype0
t
dense/kernelVarHandleOp*
_output_shapes
: *
dtype0*
shape
: *
shared_namedense/kernel
m
 dense/kernel/Read/ReadVariableOpReadVariableOpdense/kernel*
_output_shapes

: *
dtype0
В
serving_default_input_1Placeholder*+
_output_shapes
:€€€€€€€€€*
dtype0* 
shape:€€€€€€€€€
ё
StatefulPartitionedCallStatefulPartitionedCallserving_default_input_1dense/kernel
dense/biasdense_1/kerneldense_1/biasdense_2/kerneldense_2/biasdense_3/kerneldense_3/biasdense_4/kerneldense_4/bias*
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
%__inference_signature_wrapper_1621288

NoOpNoOp
шV
ConstConst"/device:CPU:0*
_output_shapes
: *
dtype0*≥V
value©VB¶V BЯV
ё
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
∞
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
ђ
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
ё
/layer_with_weights-0
/layer-0
0layer_with_weights-1
0layer-1
1	variables
2trainable_variables
3regularization_losses
4	keras_api
5__call__
*6&call_and_return_all_conditional_losses*
Б
7
_variables
8_iterations
9_learning_rate
:_index_dict
;
_momentums
<_velocities
=_update_step_xla*

>serving_default* 
LF
VARIABLE_VALUEdense/kernel&variables/0/.ATTRIBUTES/VARIABLE_VALUE*
JD
VARIABLE_VALUE
dense/bias&variables/1/.ATTRIBUTES/VARIABLE_VALUE*
NH
VARIABLE_VALUEdense_1/kernel&variables/2/.ATTRIBUTES/VARIABLE_VALUE*
LF
VARIABLE_VALUEdense_1/bias&variables/3/.ATTRIBUTES/VARIABLE_VALUE*
NH
VARIABLE_VALUEdense_2/kernel&variables/4/.ATTRIBUTES/VARIABLE_VALUE*
LF
VARIABLE_VALUEdense_2/bias&variables/5/.ATTRIBUTES/VARIABLE_VALUE*
NH
VARIABLE_VALUEdense_3/kernel&variables/6/.ATTRIBUTES/VARIABLE_VALUE*
LF
VARIABLE_VALUEdense_3/bias&variables/7/.ATTRIBUTES/VARIABLE_VALUE*
NH
VARIABLE_VALUEdense_4/kernel&variables/8/.ATTRIBUTES/VARIABLE_VALUE*
LF
VARIABLE_VALUEdense_4/bias&variables/9/.ATTRIBUTES/VARIABLE_VALUE*
* 

0
	1*

?0
@1*
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
¶
A	variables
Btrainable_variables
Cregularization_losses
D	keras_api
E__call__
*F&call_and_return_all_conditional_losses

kernel
bias*
О
G	variables
Htrainable_variables
Iregularization_losses
J	keras_api
K__call__
*L&call_and_return_all_conditional_losses* 
¶
M	variables
Ntrainable_variables
Oregularization_losses
P	keras_api
Q__call__
*R&call_and_return_all_conditional_losses

kernel
bias*
О
S	variables
Ttrainable_variables
Uregularization_losses
V	keras_api
W__call__
*X&call_and_return_all_conditional_losses* 
¶
Y	variables
Ztrainable_variables
[regularization_losses
\	keras_api
]__call__
*^&call_and_return_all_conditional_losses

kernel
bias*
О
_	variables
`trainable_variables
aregularization_losses
b	keras_api
c__call__
*d&call_and_return_all_conditional_losses* 
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
enon_trainable_variables

flayers
gmetrics
hlayer_regularization_losses
ilayer_metrics
)	variables
*trainable_variables
+regularization_losses
-__call__
*.&call_and_return_all_conditional_losses
&."call_and_return_conditional_losses*
6
jtrace_0
ktrace_1
ltrace_2
mtrace_3* 
6
ntrace_0
otrace_1
ptrace_2
qtrace_3* 
¶
r	variables
strainable_variables
tregularization_losses
u	keras_api
v__call__
*w&call_and_return_all_conditional_losses

kernel
bias*
¶
x	variables
ytrainable_variables
zregularization_losses
{	keras_api
|__call__
*}&call_and_return_all_conditional_losses

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
Ц
~non_trainable_variables

layers
Аmetrics
 Бlayer_regularization_losses
Вlayer_metrics
1	variables
2trainable_variables
3regularization_losses
5__call__
*6&call_and_return_all_conditional_losses
&6"call_and_return_conditional_losses*
:
Гtrace_0
Дtrace_1
Еtrace_2
Жtrace_3* 
:
Зtrace_0
Иtrace_1
Йtrace_2
Кtrace_3* 
ґ
80
Л1
М2
Н3
О4
П5
Р6
С7
Т8
У9
Ф10
Х11
Ц12
Ч13
Ш14
Щ15
Ъ16
Ы17
Ь18
Э19
Ю20*
SM
VARIABLE_VALUE	iteration0optimizer/_iterations/.ATTRIBUTES/VARIABLE_VALUE*
ZT
VARIABLE_VALUElearning_rate3optimizer/_learning_rate/.ATTRIBUTES/VARIABLE_VALUE*
* 
T
Л0
Н1
П2
С3
У4
Х5
Ч6
Щ7
Ы8
Э9*
T
М0
О1
Р2
Т3
Ф4
Ц5
Ш6
Ъ7
Ь8
Ю9*
О
Яtrace_0
†trace_1
°trace_2
Ґtrace_3
£trace_4
§trace_5
•trace_6
¶trace_7
Іtrace_8
®trace_9* 
* 
<
©	variables
™	keras_api

Ђtotal

ђcount*
M
≠	variables
Ѓ	keras_api

ѓtotal

∞count
±
_fn_kwargs*

0
1*

0
1*
* 
Ш
≤non_trainable_variables
≥layers
іmetrics
 µlayer_regularization_losses
ґlayer_metrics
A	variables
Btrainable_variables
Cregularization_losses
E__call__
*F&call_and_return_all_conditional_losses
&F"call_and_return_conditional_losses*

Јtrace_0* 

Єtrace_0* 
* 
* 
* 
Ц
єnon_trainable_variables
Їlayers
їmetrics
 Љlayer_regularization_losses
љlayer_metrics
G	variables
Htrainable_variables
Iregularization_losses
K__call__
*L&call_and_return_all_conditional_losses
&L"call_and_return_conditional_losses* 

Њtrace_0* 

њtrace_0* 

0
1*

0
1*
* 
Ш
јnon_trainable_variables
Ѕlayers
¬metrics
 √layer_regularization_losses
ƒlayer_metrics
M	variables
Ntrainable_variables
Oregularization_losses
Q__call__
*R&call_and_return_all_conditional_losses
&R"call_and_return_conditional_losses*

≈trace_0* 

∆trace_0* 
* 
* 
* 
Ц
«non_trainable_variables
»layers
…metrics
  layer_regularization_losses
Ћlayer_metrics
S	variables
Ttrainable_variables
Uregularization_losses
W__call__
*X&call_and_return_all_conditional_losses
&X"call_and_return_conditional_losses* 

ћtrace_0* 

Ќtrace_0* 

0
1*

0
1*
* 
Ш
ќnon_trainable_variables
ѕlayers
–metrics
 —layer_regularization_losses
“layer_metrics
Y	variables
Ztrainable_variables
[regularization_losses
]__call__
*^&call_and_return_all_conditional_losses
&^"call_and_return_conditional_losses*

”trace_0* 

‘trace_0* 
* 
* 
* 
Ц
’non_trainable_variables
÷layers
„metrics
 Ўlayer_regularization_losses
ўlayer_metrics
_	variables
`trainable_variables
aregularization_losses
c__call__
*d&call_and_return_all_conditional_losses
&d"call_and_return_conditional_losses* 

Џtrace_0* 

џtrace_0* 
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
Ш
№non_trainable_variables
Ёlayers
ёmetrics
 яlayer_regularization_losses
аlayer_metrics
r	variables
strainable_variables
tregularization_losses
v__call__
*w&call_and_return_all_conditional_losses
&w"call_and_return_conditional_losses*

бtrace_0* 

вtrace_0* 

0
1*

0
1*
* 
Ш
гnon_trainable_variables
дlayers
еmetrics
 жlayer_regularization_losses
зlayer_metrics
x	variables
ytrainable_variables
zregularization_losses
|__call__
*}&call_and_return_all_conditional_losses
&}"call_and_return_conditional_losses*

иtrace_0* 

йtrace_0* 
* 

/0
01*
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
^X
VARIABLE_VALUEAdam/m/dense/kernel1optimizer/_variables/1/.ATTRIBUTES/VARIABLE_VALUE*
^X
VARIABLE_VALUEAdam/v/dense/kernel1optimizer/_variables/2/.ATTRIBUTES/VARIABLE_VALUE*
\V
VARIABLE_VALUEAdam/m/dense/bias1optimizer/_variables/3/.ATTRIBUTES/VARIABLE_VALUE*
\V
VARIABLE_VALUEAdam/v/dense/bias1optimizer/_variables/4/.ATTRIBUTES/VARIABLE_VALUE*
`Z
VARIABLE_VALUEAdam/m/dense_1/kernel1optimizer/_variables/5/.ATTRIBUTES/VARIABLE_VALUE*
`Z
VARIABLE_VALUEAdam/v/dense_1/kernel1optimizer/_variables/6/.ATTRIBUTES/VARIABLE_VALUE*
^X
VARIABLE_VALUEAdam/m/dense_1/bias1optimizer/_variables/7/.ATTRIBUTES/VARIABLE_VALUE*
^X
VARIABLE_VALUEAdam/v/dense_1/bias1optimizer/_variables/8/.ATTRIBUTES/VARIABLE_VALUE*
`Z
VARIABLE_VALUEAdam/m/dense_2/kernel1optimizer/_variables/9/.ATTRIBUTES/VARIABLE_VALUE*
a[
VARIABLE_VALUEAdam/v/dense_2/kernel2optimizer/_variables/10/.ATTRIBUTES/VARIABLE_VALUE*
_Y
VARIABLE_VALUEAdam/m/dense_2/bias2optimizer/_variables/11/.ATTRIBUTES/VARIABLE_VALUE*
_Y
VARIABLE_VALUEAdam/v/dense_2/bias2optimizer/_variables/12/.ATTRIBUTES/VARIABLE_VALUE*
a[
VARIABLE_VALUEAdam/m/dense_3/kernel2optimizer/_variables/13/.ATTRIBUTES/VARIABLE_VALUE*
a[
VARIABLE_VALUEAdam/v/dense_3/kernel2optimizer/_variables/14/.ATTRIBUTES/VARIABLE_VALUE*
_Y
VARIABLE_VALUEAdam/m/dense_3/bias2optimizer/_variables/15/.ATTRIBUTES/VARIABLE_VALUE*
_Y
VARIABLE_VALUEAdam/v/dense_3/bias2optimizer/_variables/16/.ATTRIBUTES/VARIABLE_VALUE*
a[
VARIABLE_VALUEAdam/m/dense_4/kernel2optimizer/_variables/17/.ATTRIBUTES/VARIABLE_VALUE*
a[
VARIABLE_VALUEAdam/v/dense_4/kernel2optimizer/_variables/18/.ATTRIBUTES/VARIABLE_VALUE*
_Y
VARIABLE_VALUEAdam/m/dense_4/bias2optimizer/_variables/19/.ATTRIBUTES/VARIABLE_VALUE*
_Y
VARIABLE_VALUEAdam/v/dense_4/bias2optimizer/_variables/20/.ATTRIBUTES/VARIABLE_VALUE*
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
Ђ0
ђ1*

©	variables*
UO
VARIABLE_VALUEtotal_14keras_api/metrics/0/total/.ATTRIBUTES/VARIABLE_VALUE*
UO
VARIABLE_VALUEcount_14keras_api/metrics/0/count/.ATTRIBUTES/VARIABLE_VALUE*

ѓ0
∞1*

≠	variables*
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
O
saver_filenamePlaceholder*
_output_shapes
: *
dtype0*
shape: 
С
StatefulPartitionedCall_1StatefulPartitionedCallsaver_filename dense/kernel/Read/ReadVariableOpdense/bias/Read/ReadVariableOp"dense_1/kernel/Read/ReadVariableOp dense_1/bias/Read/ReadVariableOp"dense_2/kernel/Read/ReadVariableOp dense_2/bias/Read/ReadVariableOp"dense_3/kernel/Read/ReadVariableOp dense_3/bias/Read/ReadVariableOp"dense_4/kernel/Read/ReadVariableOp dense_4/bias/Read/ReadVariableOpiteration/Read/ReadVariableOp!learning_rate/Read/ReadVariableOp'Adam/m/dense/kernel/Read/ReadVariableOp'Adam/v/dense/kernel/Read/ReadVariableOp%Adam/m/dense/bias/Read/ReadVariableOp%Adam/v/dense/bias/Read/ReadVariableOp)Adam/m/dense_1/kernel/Read/ReadVariableOp)Adam/v/dense_1/kernel/Read/ReadVariableOp'Adam/m/dense_1/bias/Read/ReadVariableOp'Adam/v/dense_1/bias/Read/ReadVariableOp)Adam/m/dense_2/kernel/Read/ReadVariableOp)Adam/v/dense_2/kernel/Read/ReadVariableOp'Adam/m/dense_2/bias/Read/ReadVariableOp'Adam/v/dense_2/bias/Read/ReadVariableOp)Adam/m/dense_3/kernel/Read/ReadVariableOp)Adam/v/dense_3/kernel/Read/ReadVariableOp'Adam/m/dense_3/bias/Read/ReadVariableOp'Adam/v/dense_3/bias/Read/ReadVariableOp)Adam/m/dense_4/kernel/Read/ReadVariableOp)Adam/v/dense_4/kernel/Read/ReadVariableOp'Adam/m/dense_4/bias/Read/ReadVariableOp'Adam/v/dense_4/bias/Read/ReadVariableOptotal_1/Read/ReadVariableOpcount_1/Read/ReadVariableOptotal/Read/ReadVariableOpcount/Read/ReadVariableOpConst*1
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
 __inference__traced_save_1622169
Љ
StatefulPartitionedCall_2StatefulPartitionedCallsaver_filenamedense/kernel
dense/biasdense_1/kerneldense_1/biasdense_2/kerneldense_2/biasdense_3/kerneldense_3/biasdense_4/kerneldense_4/bias	iterationlearning_rateAdam/m/dense/kernelAdam/v/dense/kernelAdam/m/dense/biasAdam/v/dense/biasAdam/m/dense_1/kernelAdam/v/dense_1/kernelAdam/m/dense_1/biasAdam/v/dense_1/biasAdam/m/dense_2/kernelAdam/v/dense_2/kernelAdam/m/dense_2/biasAdam/v/dense_2/biasAdam/m/dense_3/kernelAdam/v/dense_3/kernelAdam/m/dense_3/biasAdam/v/dense_3/biasAdam/m/dense_4/kernelAdam/v/dense_4/kernelAdam/m/dense_4/biasAdam/v/dense_4/biastotal_1count_1totalcount*0
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
#__inference__traced_restore_1622287»ч
Ћ
ы
D__inference_dense_1_layer_call_and_return_conditional_losses_1620655

inputs3
!tensordot_readvariableop_resource:  -
biasadd_readvariableop_resource: 
identityИҐBiasAdd/ReadVariableOpҐTensordot/ReadVariableOpz
Tensordot/ReadVariableOpReadVariableOp!tensordot_readvariableop_resource*
_output_shapes

:  *
dtype0X
Tensordot/axesConst*
_output_shapes
:*
dtype0*
valueB:_
Tensordot/freeConst*
_output_shapes
:*
dtype0*
valueB"       E
Tensordot/ShapeShapeinputs*
T0*
_output_shapes
:Y
Tensordot/GatherV2/axisConst*
_output_shapes
: *
dtype0*
value	B : ї
Tensordot/GatherV2GatherV2Tensordot/Shape:output:0Tensordot/free:output:0 Tensordot/GatherV2/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:[
Tensordot/GatherV2_1/axisConst*
_output_shapes
: *
dtype0*
value	B : њ
Tensordot/GatherV2_1GatherV2Tensordot/Shape:output:0Tensordot/axes:output:0"Tensordot/GatherV2_1/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:Y
Tensordot/ConstConst*
_output_shapes
:*
dtype0*
valueB: n
Tensordot/ProdProdTensordot/GatherV2:output:0Tensordot/Const:output:0*
T0*
_output_shapes
: [
Tensordot/Const_1Const*
_output_shapes
:*
dtype0*
valueB: t
Tensordot/Prod_1ProdTensordot/GatherV2_1:output:0Tensordot/Const_1:output:0*
T0*
_output_shapes
: W
Tensordot/concat/axisConst*
_output_shapes
: *
dtype0*
value	B : Ь
Tensordot/concatConcatV2Tensordot/free:output:0Tensordot/axes:output:0Tensordot/concat/axis:output:0*
N*
T0*
_output_shapes
:y
Tensordot/stackPackTensordot/Prod:output:0Tensordot/Prod_1:output:0*
N*
T0*
_output_shapes
:y
Tensordot/transpose	TransposeinputsTensordot/concat:output:0*
T0*+
_output_shapes
:€€€€€€€€€ К
Tensordot/ReshapeReshapeTensordot/transpose:y:0Tensordot/stack:output:0*
T0*0
_output_shapes
:€€€€€€€€€€€€€€€€€€К
Tensordot/MatMulMatMulTensordot/Reshape:output:0 Tensordot/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€ [
Tensordot/Const_2Const*
_output_shapes
:*
dtype0*
valueB: Y
Tensordot/concat_1/axisConst*
_output_shapes
: *
dtype0*
value	B : І
Tensordot/concat_1ConcatV2Tensordot/GatherV2:output:0Tensordot/Const_2:output:0 Tensordot/concat_1/axis:output:0*
N*
T0*
_output_shapes
:Г
	TensordotReshapeTensordot/MatMul:product:0Tensordot/concat_1:output:0*
T0*+
_output_shapes
:€€€€€€€€€ r
BiasAdd/ReadVariableOpReadVariableOpbiasadd_readvariableop_resource*
_output_shapes
: *
dtype0|
BiasAddBiasAddTensordot:output:0BiasAdd/ReadVariableOp:value:0*
T0*+
_output_shapes
:€€€€€€€€€ c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:€€€€€€€€€ z
NoOpNoOp^BiasAdd/ReadVariableOp^Tensordot/ReadVariableOp*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:€€€€€€€€€ : : 20
BiasAdd/ReadVariableOpBiasAdd/ReadVariableOp24
Tensordot/ReadVariableOpTensordot/ReadVariableOp:S O
+
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
«	
х
D__inference_dense_4_layer_call_and_return_conditional_losses_1620926

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
:€€€€€€€€€w
NoOpNoOp^BiasAdd/ReadVariableOp^MatMul/ReadVariableOp*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:€€€€€€€€€ : : 20
BiasAdd/ReadVariableOpBiasAdd/ReadVariableOp2.
MatMul/ReadVariableOpMatMul/ReadVariableOp:O K
'
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
”
Ф
'__inference_dense_layer_call_fn_1621861

inputs
unknown: 
	unknown_0: 
identityИҐStatefulPartitionedCallа
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *K
fFRD
B__inference_dense_layer_call_and_return_conditional_losses_1620612s
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:€€€€€€€€€ `
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:€€€€€€€€€: : 22
StatefulPartitionedCallStatefulPartitionedCall:S O
+
_output_shapes
:€€€€€€€€€
 
_user_specified_nameinputs
ј
М
G__inference_sequential_layer_call_and_return_conditional_losses_1620712

inputs
dense_1620613: 
dense_1620615: !
dense_1_1620656:  
dense_1_1620658: !
dense_2_1620699:  
dense_2_1620701: 
identityИҐdense/StatefulPartitionedCallҐdense_1/StatefulPartitionedCallҐdense_2/StatefulPartitionedCallр
dense/StatefulPartitionedCallStatefulPartitionedCallinputsdense_1620613dense_1620615*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *K
fFRD
B__inference_dense_layer_call_and_return_conditional_losses_1620612ж
activation/PartitionedCallPartitionedCall&dense/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *P
fKRI
G__inference_activation_layer_call_and_return_conditional_losses_1620623Х
dense_1/StatefulPartitionedCallStatefulPartitionedCall#activation/PartitionedCall:output:0dense_1_1620656dense_1_1620658*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *M
fHRF
D__inference_dense_1_layer_call_and_return_conditional_losses_1620655м
activation_1/PartitionedCallPartitionedCall(dense_1/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *R
fMRK
I__inference_activation_1_layer_call_and_return_conditional_losses_1620666Ч
dense_2/StatefulPartitionedCallStatefulPartitionedCall%activation_1/PartitionedCall:output:0dense_2_1620699dense_2_1620701*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *M
fHRF
D__inference_dense_2_layer_call_and_return_conditional_losses_1620698м
activation_2/PartitionedCallPartitionedCall(dense_2/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *R
fMRK
I__inference_activation_2_layer_call_and_return_conditional_losses_1620709x
IdentityIdentity%activation_2/PartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:€€€€€€€€€ ™
NoOpNoOp^dense/StatefulPartitionedCall ^dense_1/StatefulPartitionedCall ^dense_2/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*6
_input_shapes%
#:€€€€€€€€€: : : : : : 2>
dense/StatefulPartitionedCalldense/StatefulPartitionedCall2B
dense_1/StatefulPartitionedCalldense_1/StatefulPartitionedCall2B
dense_2/StatefulPartitionedCalldense_2/StatefulPartitionedCall:S O
+
_output_shapes
:€€€€€€€€€
 
_user_specified_nameinputs
Ћ
ы
D__inference_dense_2_layer_call_and_return_conditional_losses_1620698

inputs3
!tensordot_readvariableop_resource:  -
biasadd_readvariableop_resource: 
identityИҐBiasAdd/ReadVariableOpҐTensordot/ReadVariableOpz
Tensordot/ReadVariableOpReadVariableOp!tensordot_readvariableop_resource*
_output_shapes

:  *
dtype0X
Tensordot/axesConst*
_output_shapes
:*
dtype0*
valueB:_
Tensordot/freeConst*
_output_shapes
:*
dtype0*
valueB"       E
Tensordot/ShapeShapeinputs*
T0*
_output_shapes
:Y
Tensordot/GatherV2/axisConst*
_output_shapes
: *
dtype0*
value	B : ї
Tensordot/GatherV2GatherV2Tensordot/Shape:output:0Tensordot/free:output:0 Tensordot/GatherV2/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:[
Tensordot/GatherV2_1/axisConst*
_output_shapes
: *
dtype0*
value	B : њ
Tensordot/GatherV2_1GatherV2Tensordot/Shape:output:0Tensordot/axes:output:0"Tensordot/GatherV2_1/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:Y
Tensordot/ConstConst*
_output_shapes
:*
dtype0*
valueB: n
Tensordot/ProdProdTensordot/GatherV2:output:0Tensordot/Const:output:0*
T0*
_output_shapes
: [
Tensordot/Const_1Const*
_output_shapes
:*
dtype0*
valueB: t
Tensordot/Prod_1ProdTensordot/GatherV2_1:output:0Tensordot/Const_1:output:0*
T0*
_output_shapes
: W
Tensordot/concat/axisConst*
_output_shapes
: *
dtype0*
value	B : Ь
Tensordot/concatConcatV2Tensordot/free:output:0Tensordot/axes:output:0Tensordot/concat/axis:output:0*
N*
T0*
_output_shapes
:y
Tensordot/stackPackTensordot/Prod:output:0Tensordot/Prod_1:output:0*
N*
T0*
_output_shapes
:y
Tensordot/transpose	TransposeinputsTensordot/concat:output:0*
T0*+
_output_shapes
:€€€€€€€€€ К
Tensordot/ReshapeReshapeTensordot/transpose:y:0Tensordot/stack:output:0*
T0*0
_output_shapes
:€€€€€€€€€€€€€€€€€€К
Tensordot/MatMulMatMulTensordot/Reshape:output:0 Tensordot/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€ [
Tensordot/Const_2Const*
_output_shapes
:*
dtype0*
valueB: Y
Tensordot/concat_1/axisConst*
_output_shapes
: *
dtype0*
value	B : І
Tensordot/concat_1ConcatV2Tensordot/GatherV2:output:0Tensordot/Const_2:output:0 Tensordot/concat_1/axis:output:0*
N*
T0*
_output_shapes
:Г
	TensordotReshapeTensordot/MatMul:product:0Tensordot/concat_1:output:0*
T0*+
_output_shapes
:€€€€€€€€€ r
BiasAdd/ReadVariableOpReadVariableOpbiasadd_readvariableop_resource*
_output_shapes
: *
dtype0|
BiasAddBiasAddTensordot:output:0BiasAdd/ReadVariableOp:value:0*
T0*+
_output_shapes
:€€€€€€€€€ c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:€€€€€€€€€ z
NoOpNoOp^BiasAdd/ReadVariableOp^Tensordot/ReadVariableOp*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:€€€€€€€€€ : : 20
BiasAdd/ReadVariableOpBiasAdd/ReadVariableOp24
Tensordot/ReadVariableOpTensordot/ReadVariableOp:S O
+
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
ѕ
С
G__inference_sequential_layer_call_and_return_conditional_losses_1620870
dense_input
dense_1620851: 
dense_1620853: !
dense_1_1620857:  
dense_1_1620859: !
dense_2_1620863:  
dense_2_1620865: 
identityИҐdense/StatefulPartitionedCallҐdense_1/StatefulPartitionedCallҐdense_2/StatefulPartitionedCallх
dense/StatefulPartitionedCallStatefulPartitionedCalldense_inputdense_1620851dense_1620853*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *K
fFRD
B__inference_dense_layer_call_and_return_conditional_losses_1620612ж
activation/PartitionedCallPartitionedCall&dense/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *P
fKRI
G__inference_activation_layer_call_and_return_conditional_losses_1620623Х
dense_1/StatefulPartitionedCallStatefulPartitionedCall#activation/PartitionedCall:output:0dense_1_1620857dense_1_1620859*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *M
fHRF
D__inference_dense_1_layer_call_and_return_conditional_losses_1620655м
activation_1/PartitionedCallPartitionedCall(dense_1/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *R
fMRK
I__inference_activation_1_layer_call_and_return_conditional_losses_1620666Ч
dense_2/StatefulPartitionedCallStatefulPartitionedCall%activation_1/PartitionedCall:output:0dense_2_1620863dense_2_1620865*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *M
fHRF
D__inference_dense_2_layer_call_and_return_conditional_losses_1620698м
activation_2/PartitionedCallPartitionedCall(dense_2/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *R
fMRK
I__inference_activation_2_layer_call_and_return_conditional_losses_1620709x
IdentityIdentity%activation_2/PartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:€€€€€€€€€ ™
NoOpNoOp^dense/StatefulPartitionedCall ^dense_1/StatefulPartitionedCall ^dense_2/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*6
_input_shapes%
#:€€€€€€€€€: : : : : : 2>
dense/StatefulPartitionedCalldense/StatefulPartitionedCall2B
dense_1/StatefulPartitionedCalldense_1/StatefulPartitionedCall2B
dense_2/StatefulPartitionedCalldense_2/StatefulPartitionedCall:X T
+
_output_shapes
:€€€€€€€€€
%
_user_specified_namedense_input
•
—
.__inference_sequential_1_layer_call_fn_1621805

inputs
unknown:  
	unknown_0: 
	unknown_1: 
	unknown_2:
identityИҐStatefulPartitionedCallэ
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0	unknown_1	unknown_2*
Tin	
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:€€€€€€€€€*&
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *R
fMRK
I__inference_sequential_1_layer_call_and_return_conditional_losses_1620933o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€`
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:€€€€€€€€€ : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:O K
'
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
±F
≈
 __inference__traced_save_1622169
file_prefix+
'savev2_dense_kernel_read_readvariableop)
%savev2_dense_bias_read_readvariableop-
)savev2_dense_1_kernel_read_readvariableop+
'savev2_dense_1_bias_read_readvariableop-
)savev2_dense_2_kernel_read_readvariableop+
'savev2_dense_2_bias_read_readvariableop-
)savev2_dense_3_kernel_read_readvariableop+
'savev2_dense_3_bias_read_readvariableop-
)savev2_dense_4_kernel_read_readvariableop+
'savev2_dense_4_bias_read_readvariableop(
$savev2_iteration_read_readvariableop	,
(savev2_learning_rate_read_readvariableop2
.savev2_adam_m_dense_kernel_read_readvariableop2
.savev2_adam_v_dense_kernel_read_readvariableop0
,savev2_adam_m_dense_bias_read_readvariableop0
,savev2_adam_v_dense_bias_read_readvariableop4
0savev2_adam_m_dense_1_kernel_read_readvariableop4
0savev2_adam_v_dense_1_kernel_read_readvariableop2
.savev2_adam_m_dense_1_bias_read_readvariableop2
.savev2_adam_v_dense_1_bias_read_readvariableop4
0savev2_adam_m_dense_2_kernel_read_readvariableop4
0savev2_adam_v_dense_2_kernel_read_readvariableop2
.savev2_adam_m_dense_2_bias_read_readvariableop2
.savev2_adam_v_dense_2_bias_read_readvariableop4
0savev2_adam_m_dense_3_kernel_read_readvariableop4
0savev2_adam_v_dense_3_kernel_read_readvariableop2
.savev2_adam_m_dense_3_bias_read_readvariableop2
.savev2_adam_v_dense_3_bias_read_readvariableop4
0savev2_adam_m_dense_4_kernel_read_readvariableop4
0savev2_adam_v_dense_4_kernel_read_readvariableop2
.savev2_adam_m_dense_4_bias_read_readvariableop2
.savev2_adam_v_dense_4_bias_read_readvariableop&
"savev2_total_1_read_readvariableop&
"savev2_count_1_read_readvariableop$
 savev2_total_read_readvariableop$
 savev2_count_read_readvariableop
savev2_const

identity_1ИҐMergeV2Checkpointsw
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
: а
SaveV2/tensor_namesConst"/device:CPU:0*
_output_shapes
:%*
dtype0*Й
value€Bь%B&variables/0/.ATTRIBUTES/VARIABLE_VALUEB&variables/1/.ATTRIBUTES/VARIABLE_VALUEB&variables/2/.ATTRIBUTES/VARIABLE_VALUEB&variables/3/.ATTRIBUTES/VARIABLE_VALUEB&variables/4/.ATTRIBUTES/VARIABLE_VALUEB&variables/5/.ATTRIBUTES/VARIABLE_VALUEB&variables/6/.ATTRIBUTES/VARIABLE_VALUEB&variables/7/.ATTRIBUTES/VARIABLE_VALUEB&variables/8/.ATTRIBUTES/VARIABLE_VALUEB&variables/9/.ATTRIBUTES/VARIABLE_VALUEB0optimizer/_iterations/.ATTRIBUTES/VARIABLE_VALUEB3optimizer/_learning_rate/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/1/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/2/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/3/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/4/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/5/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/6/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/7/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/8/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/9/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/10/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/11/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/12/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/13/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/14/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/15/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/16/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/17/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/18/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/19/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/20/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/0/total/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/0/count/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/1/total/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/1/count/.ATTRIBUTES/VARIABLE_VALUEB_CHECKPOINTABLE_OBJECT_GRAPHЈ
SaveV2/shape_and_slicesConst"/device:CPU:0*
_output_shapes
:%*
dtype0*]
valueTBR%B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B ƒ
SaveV2SaveV2ShardedFilename:filename:0SaveV2/tensor_names:output:0 SaveV2/shape_and_slices:output:0'savev2_dense_kernel_read_readvariableop%savev2_dense_bias_read_readvariableop)savev2_dense_1_kernel_read_readvariableop'savev2_dense_1_bias_read_readvariableop)savev2_dense_2_kernel_read_readvariableop'savev2_dense_2_bias_read_readvariableop)savev2_dense_3_kernel_read_readvariableop'savev2_dense_3_bias_read_readvariableop)savev2_dense_4_kernel_read_readvariableop'savev2_dense_4_bias_read_readvariableop$savev2_iteration_read_readvariableop(savev2_learning_rate_read_readvariableop.savev2_adam_m_dense_kernel_read_readvariableop.savev2_adam_v_dense_kernel_read_readvariableop,savev2_adam_m_dense_bias_read_readvariableop,savev2_adam_v_dense_bias_read_readvariableop0savev2_adam_m_dense_1_kernel_read_readvariableop0savev2_adam_v_dense_1_kernel_read_readvariableop.savev2_adam_m_dense_1_bias_read_readvariableop.savev2_adam_v_dense_1_bias_read_readvariableop0savev2_adam_m_dense_2_kernel_read_readvariableop0savev2_adam_v_dense_2_kernel_read_readvariableop.savev2_adam_m_dense_2_bias_read_readvariableop.savev2_adam_v_dense_2_bias_read_readvariableop0savev2_adam_m_dense_3_kernel_read_readvariableop0savev2_adam_v_dense_3_kernel_read_readvariableop.savev2_adam_m_dense_3_bias_read_readvariableop.savev2_adam_v_dense_3_bias_read_readvariableop0savev2_adam_m_dense_4_kernel_read_readvariableop0savev2_adam_v_dense_4_kernel_read_readvariableop.savev2_adam_m_dense_4_bias_read_readvariableop.savev2_adam_v_dense_4_bias_read_readvariableop"savev2_total_1_read_readvariableop"savev2_count_1_read_readvariableop savev2_total_read_readvariableop savev2_count_read_readvariableopsavev2_const"/device:CPU:0*&
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
йХ
≤
#__inference__traced_restore_1622287
file_prefix/
assignvariableop_dense_kernel: +
assignvariableop_1_dense_bias: 3
!assignvariableop_2_dense_1_kernel:  -
assignvariableop_3_dense_1_bias: 3
!assignvariableop_4_dense_2_kernel:  -
assignvariableop_5_dense_2_bias: 3
!assignvariableop_6_dense_3_kernel:  -
assignvariableop_7_dense_3_bias: 3
!assignvariableop_8_dense_4_kernel: -
assignvariableop_9_dense_4_bias:'
assignvariableop_10_iteration:	 +
!assignvariableop_11_learning_rate: 9
'assignvariableop_12_adam_m_dense_kernel: 9
'assignvariableop_13_adam_v_dense_kernel: 3
%assignvariableop_14_adam_m_dense_bias: 3
%assignvariableop_15_adam_v_dense_bias: ;
)assignvariableop_16_adam_m_dense_1_kernel:  ;
)assignvariableop_17_adam_v_dense_1_kernel:  5
'assignvariableop_18_adam_m_dense_1_bias: 5
'assignvariableop_19_adam_v_dense_1_bias: ;
)assignvariableop_20_adam_m_dense_2_kernel:  ;
)assignvariableop_21_adam_v_dense_2_kernel:  5
'assignvariableop_22_adam_m_dense_2_bias: 5
'assignvariableop_23_adam_v_dense_2_bias: ;
)assignvariableop_24_adam_m_dense_3_kernel:  ;
)assignvariableop_25_adam_v_dense_3_kernel:  5
'assignvariableop_26_adam_m_dense_3_bias: 5
'assignvariableop_27_adam_v_dense_3_bias: ;
)assignvariableop_28_adam_m_dense_4_kernel: ;
)assignvariableop_29_adam_v_dense_4_kernel: 5
'assignvariableop_30_adam_m_dense_4_bias:5
'assignvariableop_31_adam_v_dense_4_bias:%
assignvariableop_32_total_1: %
assignvariableop_33_count_1: #
assignvariableop_34_total: #
assignvariableop_35_count: 
identity_37ИҐAssignVariableOpҐAssignVariableOp_1ҐAssignVariableOp_10ҐAssignVariableOp_11ҐAssignVariableOp_12ҐAssignVariableOp_13ҐAssignVariableOp_14ҐAssignVariableOp_15ҐAssignVariableOp_16ҐAssignVariableOp_17ҐAssignVariableOp_18ҐAssignVariableOp_19ҐAssignVariableOp_2ҐAssignVariableOp_20ҐAssignVariableOp_21ҐAssignVariableOp_22ҐAssignVariableOp_23ҐAssignVariableOp_24ҐAssignVariableOp_25ҐAssignVariableOp_26ҐAssignVariableOp_27ҐAssignVariableOp_28ҐAssignVariableOp_29ҐAssignVariableOp_3ҐAssignVariableOp_30ҐAssignVariableOp_31ҐAssignVariableOp_32ҐAssignVariableOp_33ҐAssignVariableOp_34ҐAssignVariableOp_35ҐAssignVariableOp_4ҐAssignVariableOp_5ҐAssignVariableOp_6ҐAssignVariableOp_7ҐAssignVariableOp_8ҐAssignVariableOp_9г
RestoreV2/tensor_namesConst"/device:CPU:0*
_output_shapes
:%*
dtype0*Й
value€Bь%B&variables/0/.ATTRIBUTES/VARIABLE_VALUEB&variables/1/.ATTRIBUTES/VARIABLE_VALUEB&variables/2/.ATTRIBUTES/VARIABLE_VALUEB&variables/3/.ATTRIBUTES/VARIABLE_VALUEB&variables/4/.ATTRIBUTES/VARIABLE_VALUEB&variables/5/.ATTRIBUTES/VARIABLE_VALUEB&variables/6/.ATTRIBUTES/VARIABLE_VALUEB&variables/7/.ATTRIBUTES/VARIABLE_VALUEB&variables/8/.ATTRIBUTES/VARIABLE_VALUEB&variables/9/.ATTRIBUTES/VARIABLE_VALUEB0optimizer/_iterations/.ATTRIBUTES/VARIABLE_VALUEB3optimizer/_learning_rate/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/1/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/2/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/3/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/4/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/5/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/6/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/7/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/8/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/9/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/10/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/11/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/12/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/13/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/14/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/15/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/16/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/17/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/18/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/19/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/20/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/0/total/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/0/count/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/1/total/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/1/count/.ATTRIBUTES/VARIABLE_VALUEB_CHECKPOINTABLE_OBJECT_GRAPHЇ
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
:∞
AssignVariableOpAssignVariableOpassignvariableop_dense_kernelIdentity:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_1IdentityRestoreV2:tensors:1"/device:CPU:0*
T0*
_output_shapes
:і
AssignVariableOp_1AssignVariableOpassignvariableop_1_dense_biasIdentity_1:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_2IdentityRestoreV2:tensors:2"/device:CPU:0*
T0*
_output_shapes
:Є
AssignVariableOp_2AssignVariableOp!assignvariableop_2_dense_1_kernelIdentity_2:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_3IdentityRestoreV2:tensors:3"/device:CPU:0*
T0*
_output_shapes
:ґ
AssignVariableOp_3AssignVariableOpassignvariableop_3_dense_1_biasIdentity_3:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_4IdentityRestoreV2:tensors:4"/device:CPU:0*
T0*
_output_shapes
:Є
AssignVariableOp_4AssignVariableOp!assignvariableop_4_dense_2_kernelIdentity_4:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_5IdentityRestoreV2:tensors:5"/device:CPU:0*
T0*
_output_shapes
:ґ
AssignVariableOp_5AssignVariableOpassignvariableop_5_dense_2_biasIdentity_5:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_6IdentityRestoreV2:tensors:6"/device:CPU:0*
T0*
_output_shapes
:Є
AssignVariableOp_6AssignVariableOp!assignvariableop_6_dense_3_kernelIdentity_6:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_7IdentityRestoreV2:tensors:7"/device:CPU:0*
T0*
_output_shapes
:ґ
AssignVariableOp_7AssignVariableOpassignvariableop_7_dense_3_biasIdentity_7:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_8IdentityRestoreV2:tensors:8"/device:CPU:0*
T0*
_output_shapes
:Є
AssignVariableOp_8AssignVariableOp!assignvariableop_8_dense_4_kernelIdentity_8:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_9IdentityRestoreV2:tensors:9"/device:CPU:0*
T0*
_output_shapes
:ґ
AssignVariableOp_9AssignVariableOpassignvariableop_9_dense_4_biasIdentity_9:output:0"/device:CPU:0*&
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
:ј
AssignVariableOp_12AssignVariableOp'assignvariableop_12_adam_m_dense_kernelIdentity_12:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_13IdentityRestoreV2:tensors:13"/device:CPU:0*
T0*
_output_shapes
:ј
AssignVariableOp_13AssignVariableOp'assignvariableop_13_adam_v_dense_kernelIdentity_13:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_14IdentityRestoreV2:tensors:14"/device:CPU:0*
T0*
_output_shapes
:Њ
AssignVariableOp_14AssignVariableOp%assignvariableop_14_adam_m_dense_biasIdentity_14:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_15IdentityRestoreV2:tensors:15"/device:CPU:0*
T0*
_output_shapes
:Њ
AssignVariableOp_15AssignVariableOp%assignvariableop_15_adam_v_dense_biasIdentity_15:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_16IdentityRestoreV2:tensors:16"/device:CPU:0*
T0*
_output_shapes
:¬
AssignVariableOp_16AssignVariableOp)assignvariableop_16_adam_m_dense_1_kernelIdentity_16:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_17IdentityRestoreV2:tensors:17"/device:CPU:0*
T0*
_output_shapes
:¬
AssignVariableOp_17AssignVariableOp)assignvariableop_17_adam_v_dense_1_kernelIdentity_17:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_18IdentityRestoreV2:tensors:18"/device:CPU:0*
T0*
_output_shapes
:ј
AssignVariableOp_18AssignVariableOp'assignvariableop_18_adam_m_dense_1_biasIdentity_18:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_19IdentityRestoreV2:tensors:19"/device:CPU:0*
T0*
_output_shapes
:ј
AssignVariableOp_19AssignVariableOp'assignvariableop_19_adam_v_dense_1_biasIdentity_19:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_20IdentityRestoreV2:tensors:20"/device:CPU:0*
T0*
_output_shapes
:¬
AssignVariableOp_20AssignVariableOp)assignvariableop_20_adam_m_dense_2_kernelIdentity_20:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_21IdentityRestoreV2:tensors:21"/device:CPU:0*
T0*
_output_shapes
:¬
AssignVariableOp_21AssignVariableOp)assignvariableop_21_adam_v_dense_2_kernelIdentity_21:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_22IdentityRestoreV2:tensors:22"/device:CPU:0*
T0*
_output_shapes
:ј
AssignVariableOp_22AssignVariableOp'assignvariableop_22_adam_m_dense_2_biasIdentity_22:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_23IdentityRestoreV2:tensors:23"/device:CPU:0*
T0*
_output_shapes
:ј
AssignVariableOp_23AssignVariableOp'assignvariableop_23_adam_v_dense_2_biasIdentity_23:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_24IdentityRestoreV2:tensors:24"/device:CPU:0*
T0*
_output_shapes
:¬
AssignVariableOp_24AssignVariableOp)assignvariableop_24_adam_m_dense_3_kernelIdentity_24:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_25IdentityRestoreV2:tensors:25"/device:CPU:0*
T0*
_output_shapes
:¬
AssignVariableOp_25AssignVariableOp)assignvariableop_25_adam_v_dense_3_kernelIdentity_25:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_26IdentityRestoreV2:tensors:26"/device:CPU:0*
T0*
_output_shapes
:ј
AssignVariableOp_26AssignVariableOp'assignvariableop_26_adam_m_dense_3_biasIdentity_26:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_27IdentityRestoreV2:tensors:27"/device:CPU:0*
T0*
_output_shapes
:ј
AssignVariableOp_27AssignVariableOp'assignvariableop_27_adam_v_dense_3_biasIdentity_27:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_28IdentityRestoreV2:tensors:28"/device:CPU:0*
T0*
_output_shapes
:¬
AssignVariableOp_28AssignVariableOp)assignvariableop_28_adam_m_dense_4_kernelIdentity_28:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_29IdentityRestoreV2:tensors:29"/device:CPU:0*
T0*
_output_shapes
:¬
AssignVariableOp_29AssignVariableOp)assignvariableop_29_adam_v_dense_4_kernelIdentity_29:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_30IdentityRestoreV2:tensors:30"/device:CPU:0*
T0*
_output_shapes
:ј
AssignVariableOp_30AssignVariableOp'assignvariableop_30_adam_m_dense_4_biasIdentity_30:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_31IdentityRestoreV2:tensors:31"/device:CPU:0*
T0*
_output_shapes
:ј
AssignVariableOp_31AssignVariableOp'assignvariableop_31_adam_v_dense_4_biasIdentity_31:output:0"/device:CPU:0*&
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
: ‘
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
Ћ
P
$__inference__update_step_xla_1621563
gradient
variable:  *
_XlaMustCompile(*(
_construction_contextkEagerRuntime*(
_input_shapes
:€€€€€€€€€ : *
	_noinline(:Q M
'
_output_shapes
:€€€€€€€€€ 
"
_user_specified_name
gradient:($
"
_user_specified_name
variable
ДГ
„	
H__inference_DeepSetsInv_layer_call_and_return_conditional_losses_1621438

inputsD
2sequential_dense_tensordot_readvariableop_resource: >
0sequential_dense_biasadd_readvariableop_resource: F
4sequential_dense_1_tensordot_readvariableop_resource:  @
2sequential_dense_1_biasadd_readvariableop_resource: F
4sequential_dense_2_tensordot_readvariableop_resource:  @
2sequential_dense_2_biasadd_readvariableop_resource: E
3sequential_1_dense_3_matmul_readvariableop_resource:  B
4sequential_1_dense_3_biasadd_readvariableop_resource: E
3sequential_1_dense_4_matmul_readvariableop_resource: B
4sequential_1_dense_4_biasadd_readvariableop_resource:
identityИҐ'sequential/dense/BiasAdd/ReadVariableOpҐ)sequential/dense/Tensordot/ReadVariableOpҐ)sequential/dense_1/BiasAdd/ReadVariableOpҐ+sequential/dense_1/Tensordot/ReadVariableOpҐ)sequential/dense_2/BiasAdd/ReadVariableOpҐ+sequential/dense_2/Tensordot/ReadVariableOpҐ+sequential_1/dense_3/BiasAdd/ReadVariableOpҐ*sequential_1/dense_3/MatMul/ReadVariableOpҐ+sequential_1/dense_4/BiasAdd/ReadVariableOpҐ*sequential_1/dense_4/MatMul/ReadVariableOpЬ
)sequential/dense/Tensordot/ReadVariableOpReadVariableOp2sequential_dense_tensordot_readvariableop_resource*
_output_shapes

: *
dtype0i
sequential/dense/Tensordot/axesConst*
_output_shapes
:*
dtype0*
valueB:p
sequential/dense/Tensordot/freeConst*
_output_shapes
:*
dtype0*
valueB"       V
 sequential/dense/Tensordot/ShapeShapeinputs*
T0*
_output_shapes
:j
(sequential/dense/Tensordot/GatherV2/axisConst*
_output_shapes
: *
dtype0*
value	B : €
#sequential/dense/Tensordot/GatherV2GatherV2)sequential/dense/Tensordot/Shape:output:0(sequential/dense/Tensordot/free:output:01sequential/dense/Tensordot/GatherV2/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:l
*sequential/dense/Tensordot/GatherV2_1/axisConst*
_output_shapes
: *
dtype0*
value	B : Г
%sequential/dense/Tensordot/GatherV2_1GatherV2)sequential/dense/Tensordot/Shape:output:0(sequential/dense/Tensordot/axes:output:03sequential/dense/Tensordot/GatherV2_1/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:j
 sequential/dense/Tensordot/ConstConst*
_output_shapes
:*
dtype0*
valueB: °
sequential/dense/Tensordot/ProdProd,sequential/dense/Tensordot/GatherV2:output:0)sequential/dense/Tensordot/Const:output:0*
T0*
_output_shapes
: l
"sequential/dense/Tensordot/Const_1Const*
_output_shapes
:*
dtype0*
valueB: І
!sequential/dense/Tensordot/Prod_1Prod.sequential/dense/Tensordot/GatherV2_1:output:0+sequential/dense/Tensordot/Const_1:output:0*
T0*
_output_shapes
: h
&sequential/dense/Tensordot/concat/axisConst*
_output_shapes
: *
dtype0*
value	B : а
!sequential/dense/Tensordot/concatConcatV2(sequential/dense/Tensordot/free:output:0(sequential/dense/Tensordot/axes:output:0/sequential/dense/Tensordot/concat/axis:output:0*
N*
T0*
_output_shapes
:ђ
 sequential/dense/Tensordot/stackPack(sequential/dense/Tensordot/Prod:output:0*sequential/dense/Tensordot/Prod_1:output:0*
N*
T0*
_output_shapes
:Ы
$sequential/dense/Tensordot/transpose	Transposeinputs*sequential/dense/Tensordot/concat:output:0*
T0*+
_output_shapes
:€€€€€€€€€љ
"sequential/dense/Tensordot/ReshapeReshape(sequential/dense/Tensordot/transpose:y:0)sequential/dense/Tensordot/stack:output:0*
T0*0
_output_shapes
:€€€€€€€€€€€€€€€€€€љ
!sequential/dense/Tensordot/MatMulMatMul+sequential/dense/Tensordot/Reshape:output:01sequential/dense/Tensordot/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€ l
"sequential/dense/Tensordot/Const_2Const*
_output_shapes
:*
dtype0*
valueB: j
(sequential/dense/Tensordot/concat_1/axisConst*
_output_shapes
: *
dtype0*
value	B : л
#sequential/dense/Tensordot/concat_1ConcatV2,sequential/dense/Tensordot/GatherV2:output:0+sequential/dense/Tensordot/Const_2:output:01sequential/dense/Tensordot/concat_1/axis:output:0*
N*
T0*
_output_shapes
:ґ
sequential/dense/TensordotReshape+sequential/dense/Tensordot/MatMul:product:0,sequential/dense/Tensordot/concat_1:output:0*
T0*+
_output_shapes
:€€€€€€€€€ Ф
'sequential/dense/BiasAdd/ReadVariableOpReadVariableOp0sequential_dense_biasadd_readvariableop_resource*
_output_shapes
: *
dtype0ѓ
sequential/dense/BiasAddBiasAdd#sequential/dense/Tensordot:output:0/sequential/dense/BiasAdd/ReadVariableOp:value:0*
T0*+
_output_shapes
:€€€€€€€€€ {
sequential/activation/ReluRelu!sequential/dense/BiasAdd:output:0*
T0*+
_output_shapes
:€€€€€€€€€ †
+sequential/dense_1/Tensordot/ReadVariableOpReadVariableOp4sequential_dense_1_tensordot_readvariableop_resource*
_output_shapes

:  *
dtype0k
!sequential/dense_1/Tensordot/axesConst*
_output_shapes
:*
dtype0*
valueB:r
!sequential/dense_1/Tensordot/freeConst*
_output_shapes
:*
dtype0*
valueB"       z
"sequential/dense_1/Tensordot/ShapeShape(sequential/activation/Relu:activations:0*
T0*
_output_shapes
:l
*sequential/dense_1/Tensordot/GatherV2/axisConst*
_output_shapes
: *
dtype0*
value	B : З
%sequential/dense_1/Tensordot/GatherV2GatherV2+sequential/dense_1/Tensordot/Shape:output:0*sequential/dense_1/Tensordot/free:output:03sequential/dense_1/Tensordot/GatherV2/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:n
,sequential/dense_1/Tensordot/GatherV2_1/axisConst*
_output_shapes
: *
dtype0*
value	B : Л
'sequential/dense_1/Tensordot/GatherV2_1GatherV2+sequential/dense_1/Tensordot/Shape:output:0*sequential/dense_1/Tensordot/axes:output:05sequential/dense_1/Tensordot/GatherV2_1/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:l
"sequential/dense_1/Tensordot/ConstConst*
_output_shapes
:*
dtype0*
valueB: І
!sequential/dense_1/Tensordot/ProdProd.sequential/dense_1/Tensordot/GatherV2:output:0+sequential/dense_1/Tensordot/Const:output:0*
T0*
_output_shapes
: n
$sequential/dense_1/Tensordot/Const_1Const*
_output_shapes
:*
dtype0*
valueB: ≠
#sequential/dense_1/Tensordot/Prod_1Prod0sequential/dense_1/Tensordot/GatherV2_1:output:0-sequential/dense_1/Tensordot/Const_1:output:0*
T0*
_output_shapes
: j
(sequential/dense_1/Tensordot/concat/axisConst*
_output_shapes
: *
dtype0*
value	B : и
#sequential/dense_1/Tensordot/concatConcatV2*sequential/dense_1/Tensordot/free:output:0*sequential/dense_1/Tensordot/axes:output:01sequential/dense_1/Tensordot/concat/axis:output:0*
N*
T0*
_output_shapes
:≤
"sequential/dense_1/Tensordot/stackPack*sequential/dense_1/Tensordot/Prod:output:0,sequential/dense_1/Tensordot/Prod_1:output:0*
N*
T0*
_output_shapes
:Ѕ
&sequential/dense_1/Tensordot/transpose	Transpose(sequential/activation/Relu:activations:0,sequential/dense_1/Tensordot/concat:output:0*
T0*+
_output_shapes
:€€€€€€€€€ √
$sequential/dense_1/Tensordot/ReshapeReshape*sequential/dense_1/Tensordot/transpose:y:0+sequential/dense_1/Tensordot/stack:output:0*
T0*0
_output_shapes
:€€€€€€€€€€€€€€€€€€√
#sequential/dense_1/Tensordot/MatMulMatMul-sequential/dense_1/Tensordot/Reshape:output:03sequential/dense_1/Tensordot/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€ n
$sequential/dense_1/Tensordot/Const_2Const*
_output_shapes
:*
dtype0*
valueB: l
*sequential/dense_1/Tensordot/concat_1/axisConst*
_output_shapes
: *
dtype0*
value	B : у
%sequential/dense_1/Tensordot/concat_1ConcatV2.sequential/dense_1/Tensordot/GatherV2:output:0-sequential/dense_1/Tensordot/Const_2:output:03sequential/dense_1/Tensordot/concat_1/axis:output:0*
N*
T0*
_output_shapes
:Љ
sequential/dense_1/TensordotReshape-sequential/dense_1/Tensordot/MatMul:product:0.sequential/dense_1/Tensordot/concat_1:output:0*
T0*+
_output_shapes
:€€€€€€€€€ Ш
)sequential/dense_1/BiasAdd/ReadVariableOpReadVariableOp2sequential_dense_1_biasadd_readvariableop_resource*
_output_shapes
: *
dtype0µ
sequential/dense_1/BiasAddBiasAdd%sequential/dense_1/Tensordot:output:01sequential/dense_1/BiasAdd/ReadVariableOp:value:0*
T0*+
_output_shapes
:€€€€€€€€€ 
sequential/activation_1/ReluRelu#sequential/dense_1/BiasAdd:output:0*
T0*+
_output_shapes
:€€€€€€€€€ †
+sequential/dense_2/Tensordot/ReadVariableOpReadVariableOp4sequential_dense_2_tensordot_readvariableop_resource*
_output_shapes

:  *
dtype0k
!sequential/dense_2/Tensordot/axesConst*
_output_shapes
:*
dtype0*
valueB:r
!sequential/dense_2/Tensordot/freeConst*
_output_shapes
:*
dtype0*
valueB"       |
"sequential/dense_2/Tensordot/ShapeShape*sequential/activation_1/Relu:activations:0*
T0*
_output_shapes
:l
*sequential/dense_2/Tensordot/GatherV2/axisConst*
_output_shapes
: *
dtype0*
value	B : З
%sequential/dense_2/Tensordot/GatherV2GatherV2+sequential/dense_2/Tensordot/Shape:output:0*sequential/dense_2/Tensordot/free:output:03sequential/dense_2/Tensordot/GatherV2/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:n
,sequential/dense_2/Tensordot/GatherV2_1/axisConst*
_output_shapes
: *
dtype0*
value	B : Л
'sequential/dense_2/Tensordot/GatherV2_1GatherV2+sequential/dense_2/Tensordot/Shape:output:0*sequential/dense_2/Tensordot/axes:output:05sequential/dense_2/Tensordot/GatherV2_1/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:l
"sequential/dense_2/Tensordot/ConstConst*
_output_shapes
:*
dtype0*
valueB: І
!sequential/dense_2/Tensordot/ProdProd.sequential/dense_2/Tensordot/GatherV2:output:0+sequential/dense_2/Tensordot/Const:output:0*
T0*
_output_shapes
: n
$sequential/dense_2/Tensordot/Const_1Const*
_output_shapes
:*
dtype0*
valueB: ≠
#sequential/dense_2/Tensordot/Prod_1Prod0sequential/dense_2/Tensordot/GatherV2_1:output:0-sequential/dense_2/Tensordot/Const_1:output:0*
T0*
_output_shapes
: j
(sequential/dense_2/Tensordot/concat/axisConst*
_output_shapes
: *
dtype0*
value	B : и
#sequential/dense_2/Tensordot/concatConcatV2*sequential/dense_2/Tensordot/free:output:0*sequential/dense_2/Tensordot/axes:output:01sequential/dense_2/Tensordot/concat/axis:output:0*
N*
T0*
_output_shapes
:≤
"sequential/dense_2/Tensordot/stackPack*sequential/dense_2/Tensordot/Prod:output:0,sequential/dense_2/Tensordot/Prod_1:output:0*
N*
T0*
_output_shapes
:√
&sequential/dense_2/Tensordot/transpose	Transpose*sequential/activation_1/Relu:activations:0,sequential/dense_2/Tensordot/concat:output:0*
T0*+
_output_shapes
:€€€€€€€€€ √
$sequential/dense_2/Tensordot/ReshapeReshape*sequential/dense_2/Tensordot/transpose:y:0+sequential/dense_2/Tensordot/stack:output:0*
T0*0
_output_shapes
:€€€€€€€€€€€€€€€€€€√
#sequential/dense_2/Tensordot/MatMulMatMul-sequential/dense_2/Tensordot/Reshape:output:03sequential/dense_2/Tensordot/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€ n
$sequential/dense_2/Tensordot/Const_2Const*
_output_shapes
:*
dtype0*
valueB: l
*sequential/dense_2/Tensordot/concat_1/axisConst*
_output_shapes
: *
dtype0*
value	B : у
%sequential/dense_2/Tensordot/concat_1ConcatV2.sequential/dense_2/Tensordot/GatherV2:output:0-sequential/dense_2/Tensordot/Const_2:output:03sequential/dense_2/Tensordot/concat_1/axis:output:0*
N*
T0*
_output_shapes
:Љ
sequential/dense_2/TensordotReshape-sequential/dense_2/Tensordot/MatMul:product:0.sequential/dense_2/Tensordot/concat_1:output:0*
T0*+
_output_shapes
:€€€€€€€€€ Ш
)sequential/dense_2/BiasAdd/ReadVariableOpReadVariableOp2sequential_dense_2_biasadd_readvariableop_resource*
_output_shapes
: *
dtype0µ
sequential/dense_2/BiasAddBiasAdd%sequential/dense_2/Tensordot:output:01sequential/dense_2/BiasAdd/ReadVariableOp:value:0*
T0*+
_output_shapes
:€€€€€€€€€ 
sequential/activation_2/ReluRelu#sequential/dense_2/BiasAdd:output:0*
T0*+
_output_shapes
:€€€€€€€€€ X
Mean/reduction_indicesConst*
_output_shapes
: *
dtype0*
value	B :Л
MeanMean*sequential/activation_2/Relu:activations:0Mean/reduction_indices:output:0*
T0*'
_output_shapes
:€€€€€€€€€ Ю
*sequential_1/dense_3/MatMul/ReadVariableOpReadVariableOp3sequential_1_dense_3_matmul_readvariableop_resource*
_output_shapes

:  *
dtype0Ъ
sequential_1/dense_3/MatMulMatMulMean:output:02sequential_1/dense_3/MatMul/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€ Ь
+sequential_1/dense_3/BiasAdd/ReadVariableOpReadVariableOp4sequential_1_dense_3_biasadd_readvariableop_resource*
_output_shapes
: *
dtype0µ
sequential_1/dense_3/BiasAddBiasAdd%sequential_1/dense_3/MatMul:product:03sequential_1/dense_3/BiasAdd/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€ z
sequential_1/dense_3/ReluRelu%sequential_1/dense_3/BiasAdd:output:0*
T0*'
_output_shapes
:€€€€€€€€€ Ю
*sequential_1/dense_4/MatMul/ReadVariableOpReadVariableOp3sequential_1_dense_4_matmul_readvariableop_resource*
_output_shapes

: *
dtype0і
sequential_1/dense_4/MatMulMatMul'sequential_1/dense_3/Relu:activations:02sequential_1/dense_4/MatMul/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€Ь
+sequential_1/dense_4/BiasAdd/ReadVariableOpReadVariableOp4sequential_1_dense_4_biasadd_readvariableop_resource*
_output_shapes
:*
dtype0µ
sequential_1/dense_4/BiasAddBiasAdd%sequential_1/dense_4/MatMul:product:03sequential_1/dense_4/BiasAdd/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€t
IdentityIdentity%sequential_1/dense_4/BiasAdd:output:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€Ж
NoOpNoOp(^sequential/dense/BiasAdd/ReadVariableOp*^sequential/dense/Tensordot/ReadVariableOp*^sequential/dense_1/BiasAdd/ReadVariableOp,^sequential/dense_1/Tensordot/ReadVariableOp*^sequential/dense_2/BiasAdd/ReadVariableOp,^sequential/dense_2/Tensordot/ReadVariableOp,^sequential_1/dense_3/BiasAdd/ReadVariableOp+^sequential_1/dense_3/MatMul/ReadVariableOp,^sequential_1/dense_4/BiasAdd/ReadVariableOp+^sequential_1/dense_4/MatMul/ReadVariableOp*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:€€€€€€€€€: : : : : : : : : : 2R
'sequential/dense/BiasAdd/ReadVariableOp'sequential/dense/BiasAdd/ReadVariableOp2V
)sequential/dense/Tensordot/ReadVariableOp)sequential/dense/Tensordot/ReadVariableOp2V
)sequential/dense_1/BiasAdd/ReadVariableOp)sequential/dense_1/BiasAdd/ReadVariableOp2Z
+sequential/dense_1/Tensordot/ReadVariableOp+sequential/dense_1/Tensordot/ReadVariableOp2V
)sequential/dense_2/BiasAdd/ReadVariableOp)sequential/dense_2/BiasAdd/ReadVariableOp2Z
+sequential/dense_2/Tensordot/ReadVariableOp+sequential/dense_2/Tensordot/ReadVariableOp2Z
+sequential_1/dense_3/BiasAdd/ReadVariableOp+sequential_1/dense_3/BiasAdd/ReadVariableOp2X
*sequential_1/dense_3/MatMul/ReadVariableOp*sequential_1/dense_3/MatMul/ReadVariableOp2Z
+sequential_1/dense_4/BiasAdd/ReadVariableOp+sequential_1/dense_4/BiasAdd/ReadVariableOp2X
*sequential_1/dense_4/MatMul/ReadVariableOp*sequential_1/dense_4/MatMul/ReadVariableOp:S O
+
_output_shapes
:€€€€€€€€€
 
_user_specified_nameinputs
Ё
e
I__inference_activation_2_layer_call_and_return_conditional_losses_1620709

inputs
identityJ
ReluReluinputs*
T0*+
_output_shapes
:€€€€€€€€€ ^
IdentityIdentityRelu:activations:0*
T0*+
_output_shapes
:€€€€€€€€€ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:€€€€€€€€€ :S O
+
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
Ћ
P
$__inference__update_step_xla_1621543
gradient
variable: *
_XlaMustCompile(*(
_construction_contextkEagerRuntime*(
_input_shapes
:€€€€€€€€€ : *
	_noinline(:Q M
'
_output_shapes
:€€€€€€€€€ 
"
_user_specified_name
gradient:($
"
_user_specified_name
variable
ѕ
С
G__inference_sequential_layer_call_and_return_conditional_losses_1620892
dense_input
dense_1620873: 
dense_1620875: !
dense_1_1620879:  
dense_1_1620881: !
dense_2_1620885:  
dense_2_1620887: 
identityИҐdense/StatefulPartitionedCallҐdense_1/StatefulPartitionedCallҐdense_2/StatefulPartitionedCallх
dense/StatefulPartitionedCallStatefulPartitionedCalldense_inputdense_1620873dense_1620875*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *K
fFRD
B__inference_dense_layer_call_and_return_conditional_losses_1620612ж
activation/PartitionedCallPartitionedCall&dense/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *P
fKRI
G__inference_activation_layer_call_and_return_conditional_losses_1620623Х
dense_1/StatefulPartitionedCallStatefulPartitionedCall#activation/PartitionedCall:output:0dense_1_1620879dense_1_1620881*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *M
fHRF
D__inference_dense_1_layer_call_and_return_conditional_losses_1620655м
activation_1/PartitionedCallPartitionedCall(dense_1/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *R
fMRK
I__inference_activation_1_layer_call_and_return_conditional_losses_1620666Ч
dense_2/StatefulPartitionedCallStatefulPartitionedCall%activation_1/PartitionedCall:output:0dense_2_1620885dense_2_1620887*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *M
fHRF
D__inference_dense_2_layer_call_and_return_conditional_losses_1620698м
activation_2/PartitionedCallPartitionedCall(dense_2/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *R
fMRK
I__inference_activation_2_layer_call_and_return_conditional_losses_1620709x
IdentityIdentity%activation_2/PartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:€€€€€€€€€ ™
NoOpNoOp^dense/StatefulPartitionedCall ^dense_1/StatefulPartitionedCall ^dense_2/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*6
_input_shapes%
#:€€€€€€€€€: : : : : : 2>
dense/StatefulPartitionedCalldense/StatefulPartitionedCall2B
dense_1/StatefulPartitionedCalldense_1/StatefulPartitionedCall2B
dense_2/StatefulPartitionedCalldense_2/StatefulPartitionedCall:X T
+
_output_shapes
:€€€€€€€€€
%
_user_specified_namedense_input
Ё
e
I__inference_activation_1_layer_call_and_return_conditional_losses_1620666

inputs
identityJ
ReluReluinputs*
T0*+
_output_shapes
:€€€€€€€€€ ^
IdentityIdentityRelu:activations:0*
T0*+
_output_shapes
:€€€€€€€€€ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:€€€€€€€€€ :S O
+
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
≠
L
$__inference__update_step_xla_1621548
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
є
£
H__inference_DeepSetsInv_layer_call_and_return_conditional_losses_1621077

inputs$
sequential_1621052:  
sequential_1621054: $
sequential_1621056:   
sequential_1621058: $
sequential_1621060:   
sequential_1621062: &
sequential_1_1621067:  "
sequential_1_1621069: &
sequential_1_1621071: "
sequential_1_1621073:
identityИҐ"sequential/StatefulPartitionedCallҐ$sequential_1/StatefulPartitionedCall№
"sequential/StatefulPartitionedCallStatefulPartitionedCallinputssequential_1621052sequential_1621054sequential_1621056sequential_1621058sequential_1621060sequential_1621062*
Tin
	2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ *(
_read_only_resource_inputs

*2
config_proto" 

CPU

GPU2 *0J 8В *P
fKRI
G__inference_sequential_layer_call_and_return_conditional_losses_1620712X
Mean/reduction_indicesConst*
_output_shapes
: *
dtype0*
value	B :М
MeanMean+sequential/StatefulPartitionedCall:output:0Mean/reduction_indices:output:0*
T0*'
_output_shapes
:€€€€€€€€€ њ
$sequential_1/StatefulPartitionedCallStatefulPartitionedCallMean:output:0sequential_1_1621067sequential_1_1621069sequential_1_1621071sequential_1_1621073*
Tin	
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:€€€€€€€€€*&
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *R
fMRK
I__inference_sequential_1_layer_call_and_return_conditional_losses_1620933|
IdentityIdentity-sequential_1/StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€Т
NoOpNoOp#^sequential/StatefulPartitionedCall%^sequential_1/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:€€€€€€€€€: : : : : : : : : : 2H
"sequential/StatefulPartitionedCall"sequential/StatefulPartitionedCall2L
$sequential_1/StatefulPartitionedCall$sequential_1/StatefulPartitionedCall:S O
+
_output_shapes
:€€€€€€€€€
 
_user_specified_nameinputs
„
Ц
)__inference_dense_1_layer_call_fn_1621910

inputs
unknown:  
	unknown_0: 
identityИҐStatefulPartitionedCallв
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *M
fHRF
D__inference_dense_1_layer_call_and_return_conditional_losses_1620655s
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:€€€€€€€€€ `
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:€€€€€€€€€ : : 22
StatefulPartitionedCallStatefulPartitionedCall:S O
+
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
∞
Ј
I__inference_sequential_1_layer_call_and_return_conditional_losses_1621045
dense_3_input!
dense_3_1621034:  
dense_3_1621036: !
dense_4_1621039: 
dense_4_1621041:
identityИҐdense_3/StatefulPartitionedCallҐdense_4/StatefulPartitionedCallы
dense_3/StatefulPartitionedCallStatefulPartitionedCalldense_3_inputdense_3_1621034dense_3_1621036*
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
GPU2 *0J 8В *M
fHRF
D__inference_dense_3_layer_call_and_return_conditional_losses_1620910Ц
dense_4/StatefulPartitionedCallStatefulPartitionedCall(dense_3/StatefulPartitionedCall:output:0dense_4_1621039dense_4_1621041*
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
GPU2 *0J 8В *M
fHRF
D__inference_dense_4_layer_call_and_return_conditional_losses_1620926w
IdentityIdentity(dense_4/StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€К
NoOpNoOp ^dense_3/StatefulPartitionedCall ^dense_4/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:€€€€€€€€€ : : : : 2B
dense_3/StatefulPartitionedCalldense_3/StatefulPartitionedCall2B
dense_4/StatefulPartitionedCalldense_4/StatefulPartitionedCall:V R
'
_output_shapes
:€€€€€€€€€ 
'
_user_specified_namedense_3_input
џ
c
G__inference_activation_layer_call_and_return_conditional_losses_1620623

inputs
identityJ
ReluReluinputs*
T0*+
_output_shapes
:€€€€€€€€€ ^
IdentityIdentityRelu:activations:0*
T0*+
_output_shapes
:€€€€€€€€€ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:€€€€€€€€€ :S O
+
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
ш
ћ
I__inference_sequential_1_layer_call_and_return_conditional_losses_1621835

inputs8
&dense_3_matmul_readvariableop_resource:  5
'dense_3_biasadd_readvariableop_resource: 8
&dense_4_matmul_readvariableop_resource: 5
'dense_4_biasadd_readvariableop_resource:
identityИҐdense_3/BiasAdd/ReadVariableOpҐdense_3/MatMul/ReadVariableOpҐdense_4/BiasAdd/ReadVariableOpҐdense_4/MatMul/ReadVariableOpД
dense_3/MatMul/ReadVariableOpReadVariableOp&dense_3_matmul_readvariableop_resource*
_output_shapes

:  *
dtype0y
dense_3/MatMulMatMulinputs%dense_3/MatMul/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€ В
dense_3/BiasAdd/ReadVariableOpReadVariableOp'dense_3_biasadd_readvariableop_resource*
_output_shapes
: *
dtype0О
dense_3/BiasAddBiasAdddense_3/MatMul:product:0&dense_3/BiasAdd/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€ `
dense_3/ReluReludense_3/BiasAdd:output:0*
T0*'
_output_shapes
:€€€€€€€€€ Д
dense_4/MatMul/ReadVariableOpReadVariableOp&dense_4_matmul_readvariableop_resource*
_output_shapes

: *
dtype0Н
dense_4/MatMulMatMuldense_3/Relu:activations:0%dense_4/MatMul/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€В
dense_4/BiasAdd/ReadVariableOpReadVariableOp'dense_4_biasadd_readvariableop_resource*
_output_shapes
:*
dtype0О
dense_4/BiasAddBiasAdddense_4/MatMul:product:0&dense_4/BiasAdd/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€g
IdentityIdentitydense_4/BiasAdd:output:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€»
NoOpNoOp^dense_3/BiasAdd/ReadVariableOp^dense_3/MatMul/ReadVariableOp^dense_4/BiasAdd/ReadVariableOp^dense_4/MatMul/ReadVariableOp*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:€€€€€€€€€ : : : : 2@
dense_3/BiasAdd/ReadVariableOpdense_3/BiasAdd/ReadVariableOp2>
dense_3/MatMul/ReadVariableOpdense_3/MatMul/ReadVariableOp2@
dense_4/BiasAdd/ReadVariableOpdense_4/BiasAdd/ReadVariableOp2>
dense_4/MatMul/ReadVariableOpdense_4/MatMul/ReadVariableOp:O K
'
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
Ы
∞
I__inference_sequential_1_layer_call_and_return_conditional_losses_1620993

inputs!
dense_3_1620982:  
dense_3_1620984: !
dense_4_1620987: 
dense_4_1620989:
identityИҐdense_3/StatefulPartitionedCallҐdense_4/StatefulPartitionedCallф
dense_3/StatefulPartitionedCallStatefulPartitionedCallinputsdense_3_1620982dense_3_1620984*
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
GPU2 *0J 8В *M
fHRF
D__inference_dense_3_layer_call_and_return_conditional_losses_1620910Ц
dense_4/StatefulPartitionedCallStatefulPartitionedCall(dense_3/StatefulPartitionedCall:output:0dense_4_1620987dense_4_1620989*
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
GPU2 *0J 8В *M
fHRF
D__inference_dense_4_layer_call_and_return_conditional_losses_1620926w
IdentityIdentity(dense_4/StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€К
NoOpNoOp ^dense_3/StatefulPartitionedCall ^dense_4/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:€€€€€€€€€ : : : : 2B
dense_3/StatefulPartitionedCalldense_3/StatefulPartitionedCall2B
dense_4/StatefulPartitionedCalldense_4/StatefulPartitionedCall:O K
'
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
І

т
-__inference_DeepSetsInv_layer_call_fn_1621313

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
identityИҐStatefulPartitionedCall 
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4	unknown_5	unknown_6	unknown_7	unknown_8*
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
GPU2 *0J 8В *Q
fLRJ
H__inference_DeepSetsInv_layer_call_and_return_conditional_losses_1621077o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€`
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:€€€€€€€€€: : : : : : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:S O
+
_output_shapes
:€€€€€€€€€
 
_user_specified_nameinputs
є
£
H__inference_DeepSetsInv_layer_call_and_return_conditional_losses_1621155

inputs$
sequential_1621130:  
sequential_1621132: $
sequential_1621134:   
sequential_1621136: $
sequential_1621138:   
sequential_1621140: &
sequential_1_1621145:  "
sequential_1_1621147: &
sequential_1_1621149: "
sequential_1_1621151:
identityИҐ"sequential/StatefulPartitionedCallҐ$sequential_1/StatefulPartitionedCall№
"sequential/StatefulPartitionedCallStatefulPartitionedCallinputssequential_1621130sequential_1621132sequential_1621134sequential_1621136sequential_1621138sequential_1621140*
Tin
	2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ *(
_read_only_resource_inputs

*2
config_proto" 

CPU

GPU2 *0J 8В *P
fKRI
G__inference_sequential_layer_call_and_return_conditional_losses_1620816X
Mean/reduction_indicesConst*
_output_shapes
: *
dtype0*
value	B :М
MeanMean+sequential/StatefulPartitionedCall:output:0Mean/reduction_indices:output:0*
T0*'
_output_shapes
:€€€€€€€€€ њ
$sequential_1/StatefulPartitionedCallStatefulPartitionedCallMean:output:0sequential_1_1621145sequential_1_1621147sequential_1_1621149sequential_1_1621151*
Tin	
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:€€€€€€€€€*&
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *R
fMRK
I__inference_sequential_1_layer_call_and_return_conditional_losses_1620993|
IdentityIdentity-sequential_1/StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€Т
NoOpNoOp#^sequential/StatefulPartitionedCall%^sequential_1/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:€€€€€€€€€: : : : : : : : : : 2H
"sequential/StatefulPartitionedCall"sequential/StatefulPartitionedCall2L
$sequential_1/StatefulPartitionedCall$sequential_1/StatefulPartitionedCall:S O
+
_output_shapes
:€€€€€€€€€
 
_user_specified_nameinputs
І

т
-__inference_DeepSetsInv_layer_call_fn_1621338

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
identityИҐStatefulPartitionedCall 
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4	unknown_5	unknown_6	unknown_7	unknown_8*
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
GPU2 *0J 8В *Q
fLRJ
H__inference_DeepSetsInv_layer_call_and_return_conditional_losses_1621155o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€`
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:€€€€€€€€€: : : : : : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:S O
+
_output_shapes
:€€€€€€€€€
 
_user_specified_nameinputs
Ё
e
I__inference_activation_1_layer_call_and_return_conditional_losses_1621950

inputs
identityJ
ReluReluinputs*
T0*+
_output_shapes
:€€€€€€€€€ ^
IdentityIdentityRelu:activations:0*
T0*+
_output_shapes
:€€€€€€€€€ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:€€€€€€€€€ :S O
+
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
«
Ц
)__inference_dense_4_layer_call_fn_1622028

inputs
unknown: 
	unknown_0:
identityИҐStatefulPartitionedCallё
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
GPU2 *0J 8В *M
fHRF
D__inference_dense_4_layer_call_and_return_conditional_losses_1620926o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€`
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:€€€€€€€€€ : : 22
StatefulPartitionedCallStatefulPartitionedCall:O K
'
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
≠
L
$__inference__update_step_xla_1621578
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
џ
c
G__inference_activation_layer_call_and_return_conditional_losses_1621901

inputs
identityJ
ReluReluinputs*
T0*+
_output_shapes
:€€€€€€€€€ ^
IdentityIdentityRelu:activations:0*
T0*+
_output_shapes
:€€€€€€€€€ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:€€€€€€€€€ :S O
+
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
Ы

х
D__inference_dense_3_layer_call_and_return_conditional_losses_1620910

inputs0
matmul_readvariableop_resource:  -
biasadd_readvariableop_resource: 
identityИҐBiasAdd/ReadVariableOpҐMatMul/ReadVariableOpt
MatMul/ReadVariableOpReadVariableOpmatmul_readvariableop_resource*
_output_shapes

:  *
dtype0i
MatMulMatMulinputsMatMul/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€ r
BiasAdd/ReadVariableOpReadVariableOpbiasadd_readvariableop_resource*
_output_shapes
: *
dtype0v
BiasAddBiasAddMatMul:product:0BiasAdd/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€ P
ReluReluBiasAdd:output:0*
T0*'
_output_shapes
:€€€€€€€€€ a
IdentityIdentityRelu:activations:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€ w
NoOpNoOp^BiasAdd/ReadVariableOp^MatMul/ReadVariableOp*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:€€€€€€€€€ : : 20
BiasAdd/ReadVariableOpBiasAdd/ReadVariableOp2.
MatMul/ReadVariableOpMatMul/ReadVariableOp:O K
'
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
«
Ц
)__inference_dense_3_layer_call_fn_1622008

inputs
unknown:  
	unknown_0: 
identityИҐStatefulPartitionedCallё
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
GPU2 *0J 8В *M
fHRF
D__inference_dense_3_layer_call_and_return_conditional_losses_1620910o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€ `
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:€€€€€€€€€ : : 22
StatefulPartitionedCallStatefulPartitionedCall:O K
'
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
ь	
л
%__inference_signature_wrapper_1621288
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
identityИҐStatefulPartitionedCall•
StatefulPartitionedCallStatefulPartitionedCallinput_1unknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4	unknown_5	unknown_6	unknown_7	unknown_8*
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
"__inference__wrapped_model_1620575o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€`
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:€€€€€€€€€: : : : : : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:T P
+
_output_shapes
:€€€€€€€€€
!
_user_specified_name	input_1
ј
М
G__inference_sequential_layer_call_and_return_conditional_losses_1620816

inputs
dense_1620797: 
dense_1620799: !
dense_1_1620803:  
dense_1_1620805: !
dense_2_1620809:  
dense_2_1620811: 
identityИҐdense/StatefulPartitionedCallҐdense_1/StatefulPartitionedCallҐdense_2/StatefulPartitionedCallр
dense/StatefulPartitionedCallStatefulPartitionedCallinputsdense_1620797dense_1620799*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *K
fFRD
B__inference_dense_layer_call_and_return_conditional_losses_1620612ж
activation/PartitionedCallPartitionedCall&dense/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *P
fKRI
G__inference_activation_layer_call_and_return_conditional_losses_1620623Х
dense_1/StatefulPartitionedCallStatefulPartitionedCall#activation/PartitionedCall:output:0dense_1_1620803dense_1_1620805*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *M
fHRF
D__inference_dense_1_layer_call_and_return_conditional_losses_1620655м
activation_1/PartitionedCallPartitionedCall(dense_1/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *R
fMRK
I__inference_activation_1_layer_call_and_return_conditional_losses_1620666Ч
dense_2/StatefulPartitionedCallStatefulPartitionedCall%activation_1/PartitionedCall:output:0dense_2_1620809dense_2_1620811*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *M
fHRF
D__inference_dense_2_layer_call_and_return_conditional_losses_1620698м
activation_2/PartitionedCallPartitionedCall(dense_2/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *R
fMRK
I__inference_activation_2_layer_call_and_return_conditional_losses_1620709x
IdentityIdentity%activation_2/PartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:€€€€€€€€€ ™
NoOpNoOp^dense/StatefulPartitionedCall ^dense_1/StatefulPartitionedCall ^dense_2/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*6
_input_shapes%
#:€€€€€€€€€: : : : : : 2>
dense/StatefulPartitionedCalldense/StatefulPartitionedCall2B
dense_1/StatefulPartitionedCalldense_1/StatefulPartitionedCall2B
dense_2/StatefulPartitionedCalldense_2/StatefulPartitionedCall:S O
+
_output_shapes
:€€€€€€€€€
 
_user_specified_nameinputs
є
P
$__inference__update_step_xla_1621573
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
Ё
e
I__inference_activation_2_layer_call_and_return_conditional_losses_1621999

inputs
identityJ
ReluReluinputs*
T0*+
_output_shapes
:€€€€€€€€€ ^
IdentityIdentityRelu:activations:0*
T0*+
_output_shapes
:€€€€€€€€€ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:€€€€€€€€€ :S O
+
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
…
щ
B__inference_dense_layer_call_and_return_conditional_losses_1621891

inputs3
!tensordot_readvariableop_resource: -
biasadd_readvariableop_resource: 
identityИҐBiasAdd/ReadVariableOpҐTensordot/ReadVariableOpz
Tensordot/ReadVariableOpReadVariableOp!tensordot_readvariableop_resource*
_output_shapes

: *
dtype0X
Tensordot/axesConst*
_output_shapes
:*
dtype0*
valueB:_
Tensordot/freeConst*
_output_shapes
:*
dtype0*
valueB"       E
Tensordot/ShapeShapeinputs*
T0*
_output_shapes
:Y
Tensordot/GatherV2/axisConst*
_output_shapes
: *
dtype0*
value	B : ї
Tensordot/GatherV2GatherV2Tensordot/Shape:output:0Tensordot/free:output:0 Tensordot/GatherV2/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:[
Tensordot/GatherV2_1/axisConst*
_output_shapes
: *
dtype0*
value	B : њ
Tensordot/GatherV2_1GatherV2Tensordot/Shape:output:0Tensordot/axes:output:0"Tensordot/GatherV2_1/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:Y
Tensordot/ConstConst*
_output_shapes
:*
dtype0*
valueB: n
Tensordot/ProdProdTensordot/GatherV2:output:0Tensordot/Const:output:0*
T0*
_output_shapes
: [
Tensordot/Const_1Const*
_output_shapes
:*
dtype0*
valueB: t
Tensordot/Prod_1ProdTensordot/GatherV2_1:output:0Tensordot/Const_1:output:0*
T0*
_output_shapes
: W
Tensordot/concat/axisConst*
_output_shapes
: *
dtype0*
value	B : Ь
Tensordot/concatConcatV2Tensordot/free:output:0Tensordot/axes:output:0Tensordot/concat/axis:output:0*
N*
T0*
_output_shapes
:y
Tensordot/stackPackTensordot/Prod:output:0Tensordot/Prod_1:output:0*
N*
T0*
_output_shapes
:y
Tensordot/transpose	TransposeinputsTensordot/concat:output:0*
T0*+
_output_shapes
:€€€€€€€€€К
Tensordot/ReshapeReshapeTensordot/transpose:y:0Tensordot/stack:output:0*
T0*0
_output_shapes
:€€€€€€€€€€€€€€€€€€К
Tensordot/MatMulMatMulTensordot/Reshape:output:0 Tensordot/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€ [
Tensordot/Const_2Const*
_output_shapes
:*
dtype0*
valueB: Y
Tensordot/concat_1/axisConst*
_output_shapes
: *
dtype0*
value	B : І
Tensordot/concat_1ConcatV2Tensordot/GatherV2:output:0Tensordot/Const_2:output:0 Tensordot/concat_1/axis:output:0*
N*
T0*
_output_shapes
:Г
	TensordotReshapeTensordot/MatMul:product:0Tensordot/concat_1:output:0*
T0*+
_output_shapes
:€€€€€€€€€ r
BiasAdd/ReadVariableOpReadVariableOpbiasadd_readvariableop_resource*
_output_shapes
: *
dtype0|
BiasAddBiasAddTensordot:output:0BiasAdd/ReadVariableOp:value:0*
T0*+
_output_shapes
:€€€€€€€€€ c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:€€€€€€€€€ z
NoOpNoOp^BiasAdd/ReadVariableOp^Tensordot/ReadVariableOp*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:€€€€€€€€€: : 20
BiasAdd/ReadVariableOpBiasAdd/ReadVariableOp24
Tensordot/ReadVariableOpTensordot/ReadVariableOp:S O
+
_output_shapes
:€€€€€€€€€
 
_user_specified_nameinputs
Ћ
P
$__inference__update_step_xla_1621553
gradient
variable:  *
_XlaMustCompile(*(
_construction_contextkEagerRuntime*(
_input_shapes
:€€€€€€€€€ : *
	_noinline(:Q M
'
_output_shapes
:€€€€€€€€€ 
"
_user_specified_name
gradient:($
"
_user_specified_name
variable
≠
L
$__inference__update_step_xla_1621588
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
Љ
J
.__inference_activation_1_layer_call_fn_1621945

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
:€€€€€€€€€ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *R
fMRK
I__inference_activation_1_layer_call_and_return_conditional_losses_1620666d
IdentityIdentityPartitionedCall:output:0*
T0*+
_output_shapes
:€€€€€€€€€ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:€€€€€€€€€ :S O
+
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
Ы
∞
I__inference_sequential_1_layer_call_and_return_conditional_losses_1620933

inputs!
dense_3_1620911:  
dense_3_1620913: !
dense_4_1620927: 
dense_4_1620929:
identityИҐdense_3/StatefulPartitionedCallҐdense_4/StatefulPartitionedCallф
dense_3/StatefulPartitionedCallStatefulPartitionedCallinputsdense_3_1620911dense_3_1620913*
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
GPU2 *0J 8В *M
fHRF
D__inference_dense_3_layer_call_and_return_conditional_losses_1620910Ц
dense_4/StatefulPartitionedCallStatefulPartitionedCall(dense_3/StatefulPartitionedCall:output:0dense_4_1620927dense_4_1620929*
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
GPU2 *0J 8В *M
fHRF
D__inference_dense_4_layer_call_and_return_conditional_losses_1620926w
IdentityIdentity(dense_4/StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€К
NoOpNoOp ^dense_3/StatefulPartitionedCall ^dense_4/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:€€€€€€€€€ : : : : 2B
dense_3/StatefulPartitionedCalldense_3/StatefulPartitionedCall2B
dense_4/StatefulPartitionedCalldense_4/StatefulPartitionedCall:O K
'
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
є
P
$__inference__update_step_xla_1621583
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
Љ
§
H__inference_DeepSetsInv_layer_call_and_return_conditional_losses_1621259
input_1$
sequential_1621234:  
sequential_1621236: $
sequential_1621238:   
sequential_1621240: $
sequential_1621242:   
sequential_1621244: &
sequential_1_1621249:  "
sequential_1_1621251: &
sequential_1_1621253: "
sequential_1_1621255:
identityИҐ"sequential/StatefulPartitionedCallҐ$sequential_1/StatefulPartitionedCallЁ
"sequential/StatefulPartitionedCallStatefulPartitionedCallinput_1sequential_1621234sequential_1621236sequential_1621238sequential_1621240sequential_1621242sequential_1621244*
Tin
	2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ *(
_read_only_resource_inputs

*2
config_proto" 

CPU

GPU2 *0J 8В *P
fKRI
G__inference_sequential_layer_call_and_return_conditional_losses_1620816X
Mean/reduction_indicesConst*
_output_shapes
: *
dtype0*
value	B :М
MeanMean+sequential/StatefulPartitionedCall:output:0Mean/reduction_indices:output:0*
T0*'
_output_shapes
:€€€€€€€€€ њ
$sequential_1/StatefulPartitionedCallStatefulPartitionedCallMean:output:0sequential_1_1621249sequential_1_1621251sequential_1_1621253sequential_1_1621255*
Tin	
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:€€€€€€€€€*&
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *R
fMRK
I__inference_sequential_1_layer_call_and_return_conditional_losses_1620993|
IdentityIdentity-sequential_1/StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€Т
NoOpNoOp#^sequential/StatefulPartitionedCall%^sequential_1/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:€€€€€€€€€: : : : : : : : : : 2H
"sequential/StatefulPartitionedCall"sequential/StatefulPartitionedCall2L
$sequential_1/StatefulPartitionedCall$sequential_1/StatefulPartitionedCall:T P
+
_output_shapes
:€€€€€€€€€
!
_user_specified_name	input_1
≠
L
$__inference__update_step_xla_1621558
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
∞
Ј
I__inference_sequential_1_layer_call_and_return_conditional_losses_1621031
dense_3_input!
dense_3_1621020:  
dense_3_1621022: !
dense_4_1621025: 
dense_4_1621027:
identityИҐdense_3/StatefulPartitionedCallҐdense_4/StatefulPartitionedCallы
dense_3/StatefulPartitionedCallStatefulPartitionedCalldense_3_inputdense_3_1621020dense_3_1621022*
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
GPU2 *0J 8В *M
fHRF
D__inference_dense_3_layer_call_and_return_conditional_losses_1620910Ц
dense_4/StatefulPartitionedCallStatefulPartitionedCall(dense_3/StatefulPartitionedCall:output:0dense_4_1621025dense_4_1621027*
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
GPU2 *0J 8В *M
fHRF
D__inference_dense_4_layer_call_and_return_conditional_losses_1620926w
IdentityIdentity(dense_4/StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€К
NoOpNoOp ^dense_3/StatefulPartitionedCall ^dense_4/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:€€€€€€€€€ : : : : 2B
dense_3/StatefulPartitionedCalldense_3/StatefulPartitionedCall2B
dense_4/StatefulPartitionedCalldense_4/StatefulPartitionedCall:V R
'
_output_shapes
:€€€€€€€€€ 
'
_user_specified_namedense_3_input
Ћ
ы
D__inference_dense_2_layer_call_and_return_conditional_losses_1621989

inputs3
!tensordot_readvariableop_resource:  -
biasadd_readvariableop_resource: 
identityИҐBiasAdd/ReadVariableOpҐTensordot/ReadVariableOpz
Tensordot/ReadVariableOpReadVariableOp!tensordot_readvariableop_resource*
_output_shapes

:  *
dtype0X
Tensordot/axesConst*
_output_shapes
:*
dtype0*
valueB:_
Tensordot/freeConst*
_output_shapes
:*
dtype0*
valueB"       E
Tensordot/ShapeShapeinputs*
T0*
_output_shapes
:Y
Tensordot/GatherV2/axisConst*
_output_shapes
: *
dtype0*
value	B : ї
Tensordot/GatherV2GatherV2Tensordot/Shape:output:0Tensordot/free:output:0 Tensordot/GatherV2/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:[
Tensordot/GatherV2_1/axisConst*
_output_shapes
: *
dtype0*
value	B : њ
Tensordot/GatherV2_1GatherV2Tensordot/Shape:output:0Tensordot/axes:output:0"Tensordot/GatherV2_1/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:Y
Tensordot/ConstConst*
_output_shapes
:*
dtype0*
valueB: n
Tensordot/ProdProdTensordot/GatherV2:output:0Tensordot/Const:output:0*
T0*
_output_shapes
: [
Tensordot/Const_1Const*
_output_shapes
:*
dtype0*
valueB: t
Tensordot/Prod_1ProdTensordot/GatherV2_1:output:0Tensordot/Const_1:output:0*
T0*
_output_shapes
: W
Tensordot/concat/axisConst*
_output_shapes
: *
dtype0*
value	B : Ь
Tensordot/concatConcatV2Tensordot/free:output:0Tensordot/axes:output:0Tensordot/concat/axis:output:0*
N*
T0*
_output_shapes
:y
Tensordot/stackPackTensordot/Prod:output:0Tensordot/Prod_1:output:0*
N*
T0*
_output_shapes
:y
Tensordot/transpose	TransposeinputsTensordot/concat:output:0*
T0*+
_output_shapes
:€€€€€€€€€ К
Tensordot/ReshapeReshapeTensordot/transpose:y:0Tensordot/stack:output:0*
T0*0
_output_shapes
:€€€€€€€€€€€€€€€€€€К
Tensordot/MatMulMatMulTensordot/Reshape:output:0 Tensordot/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€ [
Tensordot/Const_2Const*
_output_shapes
:*
dtype0*
valueB: Y
Tensordot/concat_1/axisConst*
_output_shapes
: *
dtype0*
value	B : І
Tensordot/concat_1ConcatV2Tensordot/GatherV2:output:0Tensordot/Const_2:output:0 Tensordot/concat_1/axis:output:0*
N*
T0*
_output_shapes
:Г
	TensordotReshapeTensordot/MatMul:product:0Tensordot/concat_1:output:0*
T0*+
_output_shapes
:€€€€€€€€€ r
BiasAdd/ReadVariableOpReadVariableOpbiasadd_readvariableop_resource*
_output_shapes
: *
dtype0|
BiasAddBiasAddTensordot:output:0BiasAdd/ReadVariableOp:value:0*
T0*+
_output_shapes
:€€€€€€€€€ c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:€€€€€€€€€ z
NoOpNoOp^BiasAdd/ReadVariableOp^Tensordot/ReadVariableOp*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:€€€€€€€€€ : : 20
BiasAdd/ReadVariableOpBiasAdd/ReadVariableOp24
Tensordot/ReadVariableOpTensordot/ReadVariableOp:S O
+
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
≠
L
$__inference__update_step_xla_1621568
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
Љ
J
.__inference_activation_2_layer_call_fn_1621994

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
:€€€€€€€€€ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *R
fMRK
I__inference_activation_2_layer_call_and_return_conditional_losses_1620709d
IdentityIdentityPartitionedCall:output:0*
T0*+
_output_shapes
:€€€€€€€€€ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:€€€€€€€€€ :S O
+
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
Е	
Е
,__inference_sequential_layer_call_fn_1621605

inputs
unknown: 
	unknown_0: 
	unknown_1:  
	unknown_2: 
	unknown_3:  
	unknown_4: 
identityИҐStatefulPartitionedCallЩ
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4*
Tin
	2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ *(
_read_only_resource_inputs

*2
config_proto" 

CPU

GPU2 *0J 8В *P
fKRI
G__inference_sequential_layer_call_and_return_conditional_losses_1620712s
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:€€€€€€€€€ `
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*6
_input_shapes%
#:€€€€€€€€€: : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:S O
+
_output_shapes
:€€€€€€€€€
 
_user_specified_nameinputs
’\
Ж
G__inference_sequential_layer_call_and_return_conditional_losses_1621792

inputs9
'dense_tensordot_readvariableop_resource: 3
%dense_biasadd_readvariableop_resource: ;
)dense_1_tensordot_readvariableop_resource:  5
'dense_1_biasadd_readvariableop_resource: ;
)dense_2_tensordot_readvariableop_resource:  5
'dense_2_biasadd_readvariableop_resource: 
identityИҐdense/BiasAdd/ReadVariableOpҐdense/Tensordot/ReadVariableOpҐdense_1/BiasAdd/ReadVariableOpҐ dense_1/Tensordot/ReadVariableOpҐdense_2/BiasAdd/ReadVariableOpҐ dense_2/Tensordot/ReadVariableOpЖ
dense/Tensordot/ReadVariableOpReadVariableOp'dense_tensordot_readvariableop_resource*
_output_shapes

: *
dtype0^
dense/Tensordot/axesConst*
_output_shapes
:*
dtype0*
valueB:e
dense/Tensordot/freeConst*
_output_shapes
:*
dtype0*
valueB"       K
dense/Tensordot/ShapeShapeinputs*
T0*
_output_shapes
:_
dense/Tensordot/GatherV2/axisConst*
_output_shapes
: *
dtype0*
value	B : ”
dense/Tensordot/GatherV2GatherV2dense/Tensordot/Shape:output:0dense/Tensordot/free:output:0&dense/Tensordot/GatherV2/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:a
dense/Tensordot/GatherV2_1/axisConst*
_output_shapes
: *
dtype0*
value	B : „
dense/Tensordot/GatherV2_1GatherV2dense/Tensordot/Shape:output:0dense/Tensordot/axes:output:0(dense/Tensordot/GatherV2_1/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:_
dense/Tensordot/ConstConst*
_output_shapes
:*
dtype0*
valueB: А
dense/Tensordot/ProdProd!dense/Tensordot/GatherV2:output:0dense/Tensordot/Const:output:0*
T0*
_output_shapes
: a
dense/Tensordot/Const_1Const*
_output_shapes
:*
dtype0*
valueB: Ж
dense/Tensordot/Prod_1Prod#dense/Tensordot/GatherV2_1:output:0 dense/Tensordot/Const_1:output:0*
T0*
_output_shapes
: ]
dense/Tensordot/concat/axisConst*
_output_shapes
: *
dtype0*
value	B : і
dense/Tensordot/concatConcatV2dense/Tensordot/free:output:0dense/Tensordot/axes:output:0$dense/Tensordot/concat/axis:output:0*
N*
T0*
_output_shapes
:Л
dense/Tensordot/stackPackdense/Tensordot/Prod:output:0dense/Tensordot/Prod_1:output:0*
N*
T0*
_output_shapes
:Е
dense/Tensordot/transpose	Transposeinputsdense/Tensordot/concat:output:0*
T0*+
_output_shapes
:€€€€€€€€€Ь
dense/Tensordot/ReshapeReshapedense/Tensordot/transpose:y:0dense/Tensordot/stack:output:0*
T0*0
_output_shapes
:€€€€€€€€€€€€€€€€€€Ь
dense/Tensordot/MatMulMatMul dense/Tensordot/Reshape:output:0&dense/Tensordot/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€ a
dense/Tensordot/Const_2Const*
_output_shapes
:*
dtype0*
valueB: _
dense/Tensordot/concat_1/axisConst*
_output_shapes
: *
dtype0*
value	B : њ
dense/Tensordot/concat_1ConcatV2!dense/Tensordot/GatherV2:output:0 dense/Tensordot/Const_2:output:0&dense/Tensordot/concat_1/axis:output:0*
N*
T0*
_output_shapes
:Х
dense/TensordotReshape dense/Tensordot/MatMul:product:0!dense/Tensordot/concat_1:output:0*
T0*+
_output_shapes
:€€€€€€€€€ ~
dense/BiasAdd/ReadVariableOpReadVariableOp%dense_biasadd_readvariableop_resource*
_output_shapes
: *
dtype0О
dense/BiasAddBiasAdddense/Tensordot:output:0$dense/BiasAdd/ReadVariableOp:value:0*
T0*+
_output_shapes
:€€€€€€€€€ e
activation/ReluReludense/BiasAdd:output:0*
T0*+
_output_shapes
:€€€€€€€€€ К
 dense_1/Tensordot/ReadVariableOpReadVariableOp)dense_1_tensordot_readvariableop_resource*
_output_shapes

:  *
dtype0`
dense_1/Tensordot/axesConst*
_output_shapes
:*
dtype0*
valueB:g
dense_1/Tensordot/freeConst*
_output_shapes
:*
dtype0*
valueB"       d
dense_1/Tensordot/ShapeShapeactivation/Relu:activations:0*
T0*
_output_shapes
:a
dense_1/Tensordot/GatherV2/axisConst*
_output_shapes
: *
dtype0*
value	B : џ
dense_1/Tensordot/GatherV2GatherV2 dense_1/Tensordot/Shape:output:0dense_1/Tensordot/free:output:0(dense_1/Tensordot/GatherV2/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:c
!dense_1/Tensordot/GatherV2_1/axisConst*
_output_shapes
: *
dtype0*
value	B : я
dense_1/Tensordot/GatherV2_1GatherV2 dense_1/Tensordot/Shape:output:0dense_1/Tensordot/axes:output:0*dense_1/Tensordot/GatherV2_1/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:a
dense_1/Tensordot/ConstConst*
_output_shapes
:*
dtype0*
valueB: Ж
dense_1/Tensordot/ProdProd#dense_1/Tensordot/GatherV2:output:0 dense_1/Tensordot/Const:output:0*
T0*
_output_shapes
: c
dense_1/Tensordot/Const_1Const*
_output_shapes
:*
dtype0*
valueB: М
dense_1/Tensordot/Prod_1Prod%dense_1/Tensordot/GatherV2_1:output:0"dense_1/Tensordot/Const_1:output:0*
T0*
_output_shapes
: _
dense_1/Tensordot/concat/axisConst*
_output_shapes
: *
dtype0*
value	B : Љ
dense_1/Tensordot/concatConcatV2dense_1/Tensordot/free:output:0dense_1/Tensordot/axes:output:0&dense_1/Tensordot/concat/axis:output:0*
N*
T0*
_output_shapes
:С
dense_1/Tensordot/stackPackdense_1/Tensordot/Prod:output:0!dense_1/Tensordot/Prod_1:output:0*
N*
T0*
_output_shapes
:†
dense_1/Tensordot/transpose	Transposeactivation/Relu:activations:0!dense_1/Tensordot/concat:output:0*
T0*+
_output_shapes
:€€€€€€€€€ Ґ
dense_1/Tensordot/ReshapeReshapedense_1/Tensordot/transpose:y:0 dense_1/Tensordot/stack:output:0*
T0*0
_output_shapes
:€€€€€€€€€€€€€€€€€€Ґ
dense_1/Tensordot/MatMulMatMul"dense_1/Tensordot/Reshape:output:0(dense_1/Tensordot/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€ c
dense_1/Tensordot/Const_2Const*
_output_shapes
:*
dtype0*
valueB: a
dense_1/Tensordot/concat_1/axisConst*
_output_shapes
: *
dtype0*
value	B : «
dense_1/Tensordot/concat_1ConcatV2#dense_1/Tensordot/GatherV2:output:0"dense_1/Tensordot/Const_2:output:0(dense_1/Tensordot/concat_1/axis:output:0*
N*
T0*
_output_shapes
:Ы
dense_1/TensordotReshape"dense_1/Tensordot/MatMul:product:0#dense_1/Tensordot/concat_1:output:0*
T0*+
_output_shapes
:€€€€€€€€€ В
dense_1/BiasAdd/ReadVariableOpReadVariableOp'dense_1_biasadd_readvariableop_resource*
_output_shapes
: *
dtype0Ф
dense_1/BiasAddBiasAdddense_1/Tensordot:output:0&dense_1/BiasAdd/ReadVariableOp:value:0*
T0*+
_output_shapes
:€€€€€€€€€ i
activation_1/ReluReludense_1/BiasAdd:output:0*
T0*+
_output_shapes
:€€€€€€€€€ К
 dense_2/Tensordot/ReadVariableOpReadVariableOp)dense_2_tensordot_readvariableop_resource*
_output_shapes

:  *
dtype0`
dense_2/Tensordot/axesConst*
_output_shapes
:*
dtype0*
valueB:g
dense_2/Tensordot/freeConst*
_output_shapes
:*
dtype0*
valueB"       f
dense_2/Tensordot/ShapeShapeactivation_1/Relu:activations:0*
T0*
_output_shapes
:a
dense_2/Tensordot/GatherV2/axisConst*
_output_shapes
: *
dtype0*
value	B : џ
dense_2/Tensordot/GatherV2GatherV2 dense_2/Tensordot/Shape:output:0dense_2/Tensordot/free:output:0(dense_2/Tensordot/GatherV2/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:c
!dense_2/Tensordot/GatherV2_1/axisConst*
_output_shapes
: *
dtype0*
value	B : я
dense_2/Tensordot/GatherV2_1GatherV2 dense_2/Tensordot/Shape:output:0dense_2/Tensordot/axes:output:0*dense_2/Tensordot/GatherV2_1/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:a
dense_2/Tensordot/ConstConst*
_output_shapes
:*
dtype0*
valueB: Ж
dense_2/Tensordot/ProdProd#dense_2/Tensordot/GatherV2:output:0 dense_2/Tensordot/Const:output:0*
T0*
_output_shapes
: c
dense_2/Tensordot/Const_1Const*
_output_shapes
:*
dtype0*
valueB: М
dense_2/Tensordot/Prod_1Prod%dense_2/Tensordot/GatherV2_1:output:0"dense_2/Tensordot/Const_1:output:0*
T0*
_output_shapes
: _
dense_2/Tensordot/concat/axisConst*
_output_shapes
: *
dtype0*
value	B : Љ
dense_2/Tensordot/concatConcatV2dense_2/Tensordot/free:output:0dense_2/Tensordot/axes:output:0&dense_2/Tensordot/concat/axis:output:0*
N*
T0*
_output_shapes
:С
dense_2/Tensordot/stackPackdense_2/Tensordot/Prod:output:0!dense_2/Tensordot/Prod_1:output:0*
N*
T0*
_output_shapes
:Ґ
dense_2/Tensordot/transpose	Transposeactivation_1/Relu:activations:0!dense_2/Tensordot/concat:output:0*
T0*+
_output_shapes
:€€€€€€€€€ Ґ
dense_2/Tensordot/ReshapeReshapedense_2/Tensordot/transpose:y:0 dense_2/Tensordot/stack:output:0*
T0*0
_output_shapes
:€€€€€€€€€€€€€€€€€€Ґ
dense_2/Tensordot/MatMulMatMul"dense_2/Tensordot/Reshape:output:0(dense_2/Tensordot/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€ c
dense_2/Tensordot/Const_2Const*
_output_shapes
:*
dtype0*
valueB: a
dense_2/Tensordot/concat_1/axisConst*
_output_shapes
: *
dtype0*
value	B : «
dense_2/Tensordot/concat_1ConcatV2#dense_2/Tensordot/GatherV2:output:0"dense_2/Tensordot/Const_2:output:0(dense_2/Tensordot/concat_1/axis:output:0*
N*
T0*
_output_shapes
:Ы
dense_2/TensordotReshape"dense_2/Tensordot/MatMul:product:0#dense_2/Tensordot/concat_1:output:0*
T0*+
_output_shapes
:€€€€€€€€€ В
dense_2/BiasAdd/ReadVariableOpReadVariableOp'dense_2_biasadd_readvariableop_resource*
_output_shapes
: *
dtype0Ф
dense_2/BiasAddBiasAdddense_2/Tensordot:output:0&dense_2/BiasAdd/ReadVariableOp:value:0*
T0*+
_output_shapes
:€€€€€€€€€ i
activation_2/ReluReludense_2/BiasAdd:output:0*
T0*+
_output_shapes
:€€€€€€€€€ r
IdentityIdentityactivation_2/Relu:activations:0^NoOp*
T0*+
_output_shapes
:€€€€€€€€€ О
NoOpNoOp^dense/BiasAdd/ReadVariableOp^dense/Tensordot/ReadVariableOp^dense_1/BiasAdd/ReadVariableOp!^dense_1/Tensordot/ReadVariableOp^dense_2/BiasAdd/ReadVariableOp!^dense_2/Tensordot/ReadVariableOp*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*6
_input_shapes%
#:€€€€€€€€€: : : : : : 2<
dense/BiasAdd/ReadVariableOpdense/BiasAdd/ReadVariableOp2@
dense/Tensordot/ReadVariableOpdense/Tensordot/ReadVariableOp2@
dense_1/BiasAdd/ReadVariableOpdense_1/BiasAdd/ReadVariableOp2D
 dense_1/Tensordot/ReadVariableOp dense_1/Tensordot/ReadVariableOp2@
dense_2/BiasAdd/ReadVariableOpdense_2/BiasAdd/ReadVariableOp2D
 dense_2/Tensordot/ReadVariableOp dense_2/Tensordot/ReadVariableOp:S O
+
_output_shapes
:€€€€€€€€€
 
_user_specified_nameinputs
Ф	
К
,__inference_sequential_layer_call_fn_1620727
dense_input
unknown: 
	unknown_0: 
	unknown_1:  
	unknown_2: 
	unknown_3:  
	unknown_4: 
identityИҐStatefulPartitionedCallЮ
StatefulPartitionedCallStatefulPartitionedCalldense_inputunknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4*
Tin
	2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ *(
_read_only_resource_inputs

*2
config_proto" 

CPU

GPU2 *0J 8В *P
fKRI
G__inference_sequential_layer_call_and_return_conditional_losses_1620712s
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:€€€€€€€€€ `
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*6
_input_shapes%
#:€€€€€€€€€: : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:X T
+
_output_shapes
:€€€€€€€€€
%
_user_specified_namedense_input
…
щ
B__inference_dense_layer_call_and_return_conditional_losses_1620612

inputs3
!tensordot_readvariableop_resource: -
biasadd_readvariableop_resource: 
identityИҐBiasAdd/ReadVariableOpҐTensordot/ReadVariableOpz
Tensordot/ReadVariableOpReadVariableOp!tensordot_readvariableop_resource*
_output_shapes

: *
dtype0X
Tensordot/axesConst*
_output_shapes
:*
dtype0*
valueB:_
Tensordot/freeConst*
_output_shapes
:*
dtype0*
valueB"       E
Tensordot/ShapeShapeinputs*
T0*
_output_shapes
:Y
Tensordot/GatherV2/axisConst*
_output_shapes
: *
dtype0*
value	B : ї
Tensordot/GatherV2GatherV2Tensordot/Shape:output:0Tensordot/free:output:0 Tensordot/GatherV2/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:[
Tensordot/GatherV2_1/axisConst*
_output_shapes
: *
dtype0*
value	B : њ
Tensordot/GatherV2_1GatherV2Tensordot/Shape:output:0Tensordot/axes:output:0"Tensordot/GatherV2_1/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:Y
Tensordot/ConstConst*
_output_shapes
:*
dtype0*
valueB: n
Tensordot/ProdProdTensordot/GatherV2:output:0Tensordot/Const:output:0*
T0*
_output_shapes
: [
Tensordot/Const_1Const*
_output_shapes
:*
dtype0*
valueB: t
Tensordot/Prod_1ProdTensordot/GatherV2_1:output:0Tensordot/Const_1:output:0*
T0*
_output_shapes
: W
Tensordot/concat/axisConst*
_output_shapes
: *
dtype0*
value	B : Ь
Tensordot/concatConcatV2Tensordot/free:output:0Tensordot/axes:output:0Tensordot/concat/axis:output:0*
N*
T0*
_output_shapes
:y
Tensordot/stackPackTensordot/Prod:output:0Tensordot/Prod_1:output:0*
N*
T0*
_output_shapes
:y
Tensordot/transpose	TransposeinputsTensordot/concat:output:0*
T0*+
_output_shapes
:€€€€€€€€€К
Tensordot/ReshapeReshapeTensordot/transpose:y:0Tensordot/stack:output:0*
T0*0
_output_shapes
:€€€€€€€€€€€€€€€€€€К
Tensordot/MatMulMatMulTensordot/Reshape:output:0 Tensordot/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€ [
Tensordot/Const_2Const*
_output_shapes
:*
dtype0*
valueB: Y
Tensordot/concat_1/axisConst*
_output_shapes
: *
dtype0*
value	B : І
Tensordot/concat_1ConcatV2Tensordot/GatherV2:output:0Tensordot/Const_2:output:0 Tensordot/concat_1/axis:output:0*
N*
T0*
_output_shapes
:Г
	TensordotReshapeTensordot/MatMul:product:0Tensordot/concat_1:output:0*
T0*+
_output_shapes
:€€€€€€€€€ r
BiasAdd/ReadVariableOpReadVariableOpbiasadd_readvariableop_resource*
_output_shapes
: *
dtype0|
BiasAddBiasAddTensordot:output:0BiasAdd/ReadVariableOp:value:0*
T0*+
_output_shapes
:€€€€€€€€€ c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:€€€€€€€€€ z
NoOpNoOp^BiasAdd/ReadVariableOp^Tensordot/ReadVariableOp*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:€€€€€€€€€: : 20
BiasAdd/ReadVariableOpBiasAdd/ReadVariableOp24
Tensordot/ReadVariableOpTensordot/ReadVariableOp:S O
+
_output_shapes
:€€€€€€€€€
 
_user_specified_nameinputs
сЩ
Ґ
"__inference__wrapped_model_1620575
input_1P
>deepsetsinv_sequential_dense_tensordot_readvariableop_resource: J
<deepsetsinv_sequential_dense_biasadd_readvariableop_resource: R
@deepsetsinv_sequential_dense_1_tensordot_readvariableop_resource:  L
>deepsetsinv_sequential_dense_1_biasadd_readvariableop_resource: R
@deepsetsinv_sequential_dense_2_tensordot_readvariableop_resource:  L
>deepsetsinv_sequential_dense_2_biasadd_readvariableop_resource: Q
?deepsetsinv_sequential_1_dense_3_matmul_readvariableop_resource:  N
@deepsetsinv_sequential_1_dense_3_biasadd_readvariableop_resource: Q
?deepsetsinv_sequential_1_dense_4_matmul_readvariableop_resource: N
@deepsetsinv_sequential_1_dense_4_biasadd_readvariableop_resource:
identityИҐ3DeepSetsInv/sequential/dense/BiasAdd/ReadVariableOpҐ5DeepSetsInv/sequential/dense/Tensordot/ReadVariableOpҐ5DeepSetsInv/sequential/dense_1/BiasAdd/ReadVariableOpҐ7DeepSetsInv/sequential/dense_1/Tensordot/ReadVariableOpҐ5DeepSetsInv/sequential/dense_2/BiasAdd/ReadVariableOpҐ7DeepSetsInv/sequential/dense_2/Tensordot/ReadVariableOpҐ7DeepSetsInv/sequential_1/dense_3/BiasAdd/ReadVariableOpҐ6DeepSetsInv/sequential_1/dense_3/MatMul/ReadVariableOpҐ7DeepSetsInv/sequential_1/dense_4/BiasAdd/ReadVariableOpҐ6DeepSetsInv/sequential_1/dense_4/MatMul/ReadVariableOpі
5DeepSetsInv/sequential/dense/Tensordot/ReadVariableOpReadVariableOp>deepsetsinv_sequential_dense_tensordot_readvariableop_resource*
_output_shapes

: *
dtype0u
+DeepSetsInv/sequential/dense/Tensordot/axesConst*
_output_shapes
:*
dtype0*
valueB:|
+DeepSetsInv/sequential/dense/Tensordot/freeConst*
_output_shapes
:*
dtype0*
valueB"       c
,DeepSetsInv/sequential/dense/Tensordot/ShapeShapeinput_1*
T0*
_output_shapes
:v
4DeepSetsInv/sequential/dense/Tensordot/GatherV2/axisConst*
_output_shapes
: *
dtype0*
value	B : ѓ
/DeepSetsInv/sequential/dense/Tensordot/GatherV2GatherV25DeepSetsInv/sequential/dense/Tensordot/Shape:output:04DeepSetsInv/sequential/dense/Tensordot/free:output:0=DeepSetsInv/sequential/dense/Tensordot/GatherV2/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:x
6DeepSetsInv/sequential/dense/Tensordot/GatherV2_1/axisConst*
_output_shapes
: *
dtype0*
value	B : ≥
1DeepSetsInv/sequential/dense/Tensordot/GatherV2_1GatherV25DeepSetsInv/sequential/dense/Tensordot/Shape:output:04DeepSetsInv/sequential/dense/Tensordot/axes:output:0?DeepSetsInv/sequential/dense/Tensordot/GatherV2_1/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:v
,DeepSetsInv/sequential/dense/Tensordot/ConstConst*
_output_shapes
:*
dtype0*
valueB: ≈
+DeepSetsInv/sequential/dense/Tensordot/ProdProd8DeepSetsInv/sequential/dense/Tensordot/GatherV2:output:05DeepSetsInv/sequential/dense/Tensordot/Const:output:0*
T0*
_output_shapes
: x
.DeepSetsInv/sequential/dense/Tensordot/Const_1Const*
_output_shapes
:*
dtype0*
valueB: Ћ
-DeepSetsInv/sequential/dense/Tensordot/Prod_1Prod:DeepSetsInv/sequential/dense/Tensordot/GatherV2_1:output:07DeepSetsInv/sequential/dense/Tensordot/Const_1:output:0*
T0*
_output_shapes
: t
2DeepSetsInv/sequential/dense/Tensordot/concat/axisConst*
_output_shapes
: *
dtype0*
value	B : Р
-DeepSetsInv/sequential/dense/Tensordot/concatConcatV24DeepSetsInv/sequential/dense/Tensordot/free:output:04DeepSetsInv/sequential/dense/Tensordot/axes:output:0;DeepSetsInv/sequential/dense/Tensordot/concat/axis:output:0*
N*
T0*
_output_shapes
:–
,DeepSetsInv/sequential/dense/Tensordot/stackPack4DeepSetsInv/sequential/dense/Tensordot/Prod:output:06DeepSetsInv/sequential/dense/Tensordot/Prod_1:output:0*
N*
T0*
_output_shapes
:і
0DeepSetsInv/sequential/dense/Tensordot/transpose	Transposeinput_16DeepSetsInv/sequential/dense/Tensordot/concat:output:0*
T0*+
_output_shapes
:€€€€€€€€€б
.DeepSetsInv/sequential/dense/Tensordot/ReshapeReshape4DeepSetsInv/sequential/dense/Tensordot/transpose:y:05DeepSetsInv/sequential/dense/Tensordot/stack:output:0*
T0*0
_output_shapes
:€€€€€€€€€€€€€€€€€€б
-DeepSetsInv/sequential/dense/Tensordot/MatMulMatMul7DeepSetsInv/sequential/dense/Tensordot/Reshape:output:0=DeepSetsInv/sequential/dense/Tensordot/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€ x
.DeepSetsInv/sequential/dense/Tensordot/Const_2Const*
_output_shapes
:*
dtype0*
valueB: v
4DeepSetsInv/sequential/dense/Tensordot/concat_1/axisConst*
_output_shapes
: *
dtype0*
value	B : Ы
/DeepSetsInv/sequential/dense/Tensordot/concat_1ConcatV28DeepSetsInv/sequential/dense/Tensordot/GatherV2:output:07DeepSetsInv/sequential/dense/Tensordot/Const_2:output:0=DeepSetsInv/sequential/dense/Tensordot/concat_1/axis:output:0*
N*
T0*
_output_shapes
:Џ
&DeepSetsInv/sequential/dense/TensordotReshape7DeepSetsInv/sequential/dense/Tensordot/MatMul:product:08DeepSetsInv/sequential/dense/Tensordot/concat_1:output:0*
T0*+
_output_shapes
:€€€€€€€€€ ђ
3DeepSetsInv/sequential/dense/BiasAdd/ReadVariableOpReadVariableOp<deepsetsinv_sequential_dense_biasadd_readvariableop_resource*
_output_shapes
: *
dtype0”
$DeepSetsInv/sequential/dense/BiasAddBiasAdd/DeepSetsInv/sequential/dense/Tensordot:output:0;DeepSetsInv/sequential/dense/BiasAdd/ReadVariableOp:value:0*
T0*+
_output_shapes
:€€€€€€€€€ У
&DeepSetsInv/sequential/activation/ReluRelu-DeepSetsInv/sequential/dense/BiasAdd:output:0*
T0*+
_output_shapes
:€€€€€€€€€ Є
7DeepSetsInv/sequential/dense_1/Tensordot/ReadVariableOpReadVariableOp@deepsetsinv_sequential_dense_1_tensordot_readvariableop_resource*
_output_shapes

:  *
dtype0w
-DeepSetsInv/sequential/dense_1/Tensordot/axesConst*
_output_shapes
:*
dtype0*
valueB:~
-DeepSetsInv/sequential/dense_1/Tensordot/freeConst*
_output_shapes
:*
dtype0*
valueB"       Т
.DeepSetsInv/sequential/dense_1/Tensordot/ShapeShape4DeepSetsInv/sequential/activation/Relu:activations:0*
T0*
_output_shapes
:x
6DeepSetsInv/sequential/dense_1/Tensordot/GatherV2/axisConst*
_output_shapes
: *
dtype0*
value	B : Ј
1DeepSetsInv/sequential/dense_1/Tensordot/GatherV2GatherV27DeepSetsInv/sequential/dense_1/Tensordot/Shape:output:06DeepSetsInv/sequential/dense_1/Tensordot/free:output:0?DeepSetsInv/sequential/dense_1/Tensordot/GatherV2/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:z
8DeepSetsInv/sequential/dense_1/Tensordot/GatherV2_1/axisConst*
_output_shapes
: *
dtype0*
value	B : ї
3DeepSetsInv/sequential/dense_1/Tensordot/GatherV2_1GatherV27DeepSetsInv/sequential/dense_1/Tensordot/Shape:output:06DeepSetsInv/sequential/dense_1/Tensordot/axes:output:0ADeepSetsInv/sequential/dense_1/Tensordot/GatherV2_1/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:x
.DeepSetsInv/sequential/dense_1/Tensordot/ConstConst*
_output_shapes
:*
dtype0*
valueB: Ћ
-DeepSetsInv/sequential/dense_1/Tensordot/ProdProd:DeepSetsInv/sequential/dense_1/Tensordot/GatherV2:output:07DeepSetsInv/sequential/dense_1/Tensordot/Const:output:0*
T0*
_output_shapes
: z
0DeepSetsInv/sequential/dense_1/Tensordot/Const_1Const*
_output_shapes
:*
dtype0*
valueB: —
/DeepSetsInv/sequential/dense_1/Tensordot/Prod_1Prod<DeepSetsInv/sequential/dense_1/Tensordot/GatherV2_1:output:09DeepSetsInv/sequential/dense_1/Tensordot/Const_1:output:0*
T0*
_output_shapes
: v
4DeepSetsInv/sequential/dense_1/Tensordot/concat/axisConst*
_output_shapes
: *
dtype0*
value	B : Ш
/DeepSetsInv/sequential/dense_1/Tensordot/concatConcatV26DeepSetsInv/sequential/dense_1/Tensordot/free:output:06DeepSetsInv/sequential/dense_1/Tensordot/axes:output:0=DeepSetsInv/sequential/dense_1/Tensordot/concat/axis:output:0*
N*
T0*
_output_shapes
:÷
.DeepSetsInv/sequential/dense_1/Tensordot/stackPack6DeepSetsInv/sequential/dense_1/Tensordot/Prod:output:08DeepSetsInv/sequential/dense_1/Tensordot/Prod_1:output:0*
N*
T0*
_output_shapes
:е
2DeepSetsInv/sequential/dense_1/Tensordot/transpose	Transpose4DeepSetsInv/sequential/activation/Relu:activations:08DeepSetsInv/sequential/dense_1/Tensordot/concat:output:0*
T0*+
_output_shapes
:€€€€€€€€€ з
0DeepSetsInv/sequential/dense_1/Tensordot/ReshapeReshape6DeepSetsInv/sequential/dense_1/Tensordot/transpose:y:07DeepSetsInv/sequential/dense_1/Tensordot/stack:output:0*
T0*0
_output_shapes
:€€€€€€€€€€€€€€€€€€з
/DeepSetsInv/sequential/dense_1/Tensordot/MatMulMatMul9DeepSetsInv/sequential/dense_1/Tensordot/Reshape:output:0?DeepSetsInv/sequential/dense_1/Tensordot/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€ z
0DeepSetsInv/sequential/dense_1/Tensordot/Const_2Const*
_output_shapes
:*
dtype0*
valueB: x
6DeepSetsInv/sequential/dense_1/Tensordot/concat_1/axisConst*
_output_shapes
: *
dtype0*
value	B : £
1DeepSetsInv/sequential/dense_1/Tensordot/concat_1ConcatV2:DeepSetsInv/sequential/dense_1/Tensordot/GatherV2:output:09DeepSetsInv/sequential/dense_1/Tensordot/Const_2:output:0?DeepSetsInv/sequential/dense_1/Tensordot/concat_1/axis:output:0*
N*
T0*
_output_shapes
:а
(DeepSetsInv/sequential/dense_1/TensordotReshape9DeepSetsInv/sequential/dense_1/Tensordot/MatMul:product:0:DeepSetsInv/sequential/dense_1/Tensordot/concat_1:output:0*
T0*+
_output_shapes
:€€€€€€€€€ ∞
5DeepSetsInv/sequential/dense_1/BiasAdd/ReadVariableOpReadVariableOp>deepsetsinv_sequential_dense_1_biasadd_readvariableop_resource*
_output_shapes
: *
dtype0ў
&DeepSetsInv/sequential/dense_1/BiasAddBiasAdd1DeepSetsInv/sequential/dense_1/Tensordot:output:0=DeepSetsInv/sequential/dense_1/BiasAdd/ReadVariableOp:value:0*
T0*+
_output_shapes
:€€€€€€€€€ Ч
(DeepSetsInv/sequential/activation_1/ReluRelu/DeepSetsInv/sequential/dense_1/BiasAdd:output:0*
T0*+
_output_shapes
:€€€€€€€€€ Є
7DeepSetsInv/sequential/dense_2/Tensordot/ReadVariableOpReadVariableOp@deepsetsinv_sequential_dense_2_tensordot_readvariableop_resource*
_output_shapes

:  *
dtype0w
-DeepSetsInv/sequential/dense_2/Tensordot/axesConst*
_output_shapes
:*
dtype0*
valueB:~
-DeepSetsInv/sequential/dense_2/Tensordot/freeConst*
_output_shapes
:*
dtype0*
valueB"       Ф
.DeepSetsInv/sequential/dense_2/Tensordot/ShapeShape6DeepSetsInv/sequential/activation_1/Relu:activations:0*
T0*
_output_shapes
:x
6DeepSetsInv/sequential/dense_2/Tensordot/GatherV2/axisConst*
_output_shapes
: *
dtype0*
value	B : Ј
1DeepSetsInv/sequential/dense_2/Tensordot/GatherV2GatherV27DeepSetsInv/sequential/dense_2/Tensordot/Shape:output:06DeepSetsInv/sequential/dense_2/Tensordot/free:output:0?DeepSetsInv/sequential/dense_2/Tensordot/GatherV2/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:z
8DeepSetsInv/sequential/dense_2/Tensordot/GatherV2_1/axisConst*
_output_shapes
: *
dtype0*
value	B : ї
3DeepSetsInv/sequential/dense_2/Tensordot/GatherV2_1GatherV27DeepSetsInv/sequential/dense_2/Tensordot/Shape:output:06DeepSetsInv/sequential/dense_2/Tensordot/axes:output:0ADeepSetsInv/sequential/dense_2/Tensordot/GatherV2_1/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:x
.DeepSetsInv/sequential/dense_2/Tensordot/ConstConst*
_output_shapes
:*
dtype0*
valueB: Ћ
-DeepSetsInv/sequential/dense_2/Tensordot/ProdProd:DeepSetsInv/sequential/dense_2/Tensordot/GatherV2:output:07DeepSetsInv/sequential/dense_2/Tensordot/Const:output:0*
T0*
_output_shapes
: z
0DeepSetsInv/sequential/dense_2/Tensordot/Const_1Const*
_output_shapes
:*
dtype0*
valueB: —
/DeepSetsInv/sequential/dense_2/Tensordot/Prod_1Prod<DeepSetsInv/sequential/dense_2/Tensordot/GatherV2_1:output:09DeepSetsInv/sequential/dense_2/Tensordot/Const_1:output:0*
T0*
_output_shapes
: v
4DeepSetsInv/sequential/dense_2/Tensordot/concat/axisConst*
_output_shapes
: *
dtype0*
value	B : Ш
/DeepSetsInv/sequential/dense_2/Tensordot/concatConcatV26DeepSetsInv/sequential/dense_2/Tensordot/free:output:06DeepSetsInv/sequential/dense_2/Tensordot/axes:output:0=DeepSetsInv/sequential/dense_2/Tensordot/concat/axis:output:0*
N*
T0*
_output_shapes
:÷
.DeepSetsInv/sequential/dense_2/Tensordot/stackPack6DeepSetsInv/sequential/dense_2/Tensordot/Prod:output:08DeepSetsInv/sequential/dense_2/Tensordot/Prod_1:output:0*
N*
T0*
_output_shapes
:з
2DeepSetsInv/sequential/dense_2/Tensordot/transpose	Transpose6DeepSetsInv/sequential/activation_1/Relu:activations:08DeepSetsInv/sequential/dense_2/Tensordot/concat:output:0*
T0*+
_output_shapes
:€€€€€€€€€ з
0DeepSetsInv/sequential/dense_2/Tensordot/ReshapeReshape6DeepSetsInv/sequential/dense_2/Tensordot/transpose:y:07DeepSetsInv/sequential/dense_2/Tensordot/stack:output:0*
T0*0
_output_shapes
:€€€€€€€€€€€€€€€€€€з
/DeepSetsInv/sequential/dense_2/Tensordot/MatMulMatMul9DeepSetsInv/sequential/dense_2/Tensordot/Reshape:output:0?DeepSetsInv/sequential/dense_2/Tensordot/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€ z
0DeepSetsInv/sequential/dense_2/Tensordot/Const_2Const*
_output_shapes
:*
dtype0*
valueB: x
6DeepSetsInv/sequential/dense_2/Tensordot/concat_1/axisConst*
_output_shapes
: *
dtype0*
value	B : £
1DeepSetsInv/sequential/dense_2/Tensordot/concat_1ConcatV2:DeepSetsInv/sequential/dense_2/Tensordot/GatherV2:output:09DeepSetsInv/sequential/dense_2/Tensordot/Const_2:output:0?DeepSetsInv/sequential/dense_2/Tensordot/concat_1/axis:output:0*
N*
T0*
_output_shapes
:а
(DeepSetsInv/sequential/dense_2/TensordotReshape9DeepSetsInv/sequential/dense_2/Tensordot/MatMul:product:0:DeepSetsInv/sequential/dense_2/Tensordot/concat_1:output:0*
T0*+
_output_shapes
:€€€€€€€€€ ∞
5DeepSetsInv/sequential/dense_2/BiasAdd/ReadVariableOpReadVariableOp>deepsetsinv_sequential_dense_2_biasadd_readvariableop_resource*
_output_shapes
: *
dtype0ў
&DeepSetsInv/sequential/dense_2/BiasAddBiasAdd1DeepSetsInv/sequential/dense_2/Tensordot:output:0=DeepSetsInv/sequential/dense_2/BiasAdd/ReadVariableOp:value:0*
T0*+
_output_shapes
:€€€€€€€€€ Ч
(DeepSetsInv/sequential/activation_2/ReluRelu/DeepSetsInv/sequential/dense_2/BiasAdd:output:0*
T0*+
_output_shapes
:€€€€€€€€€ d
"DeepSetsInv/Mean/reduction_indicesConst*
_output_shapes
: *
dtype0*
value	B :ѓ
DeepSetsInv/MeanMean6DeepSetsInv/sequential/activation_2/Relu:activations:0+DeepSetsInv/Mean/reduction_indices:output:0*
T0*'
_output_shapes
:€€€€€€€€€ ґ
6DeepSetsInv/sequential_1/dense_3/MatMul/ReadVariableOpReadVariableOp?deepsetsinv_sequential_1_dense_3_matmul_readvariableop_resource*
_output_shapes

:  *
dtype0Њ
'DeepSetsInv/sequential_1/dense_3/MatMulMatMulDeepSetsInv/Mean:output:0>DeepSetsInv/sequential_1/dense_3/MatMul/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€ і
7DeepSetsInv/sequential_1/dense_3/BiasAdd/ReadVariableOpReadVariableOp@deepsetsinv_sequential_1_dense_3_biasadd_readvariableop_resource*
_output_shapes
: *
dtype0ў
(DeepSetsInv/sequential_1/dense_3/BiasAddBiasAdd1DeepSetsInv/sequential_1/dense_3/MatMul:product:0?DeepSetsInv/sequential_1/dense_3/BiasAdd/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€ Т
%DeepSetsInv/sequential_1/dense_3/ReluRelu1DeepSetsInv/sequential_1/dense_3/BiasAdd:output:0*
T0*'
_output_shapes
:€€€€€€€€€ ґ
6DeepSetsInv/sequential_1/dense_4/MatMul/ReadVariableOpReadVariableOp?deepsetsinv_sequential_1_dense_4_matmul_readvariableop_resource*
_output_shapes

: *
dtype0Ў
'DeepSetsInv/sequential_1/dense_4/MatMulMatMul3DeepSetsInv/sequential_1/dense_3/Relu:activations:0>DeepSetsInv/sequential_1/dense_4/MatMul/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€і
7DeepSetsInv/sequential_1/dense_4/BiasAdd/ReadVariableOpReadVariableOp@deepsetsinv_sequential_1_dense_4_biasadd_readvariableop_resource*
_output_shapes
:*
dtype0ў
(DeepSetsInv/sequential_1/dense_4/BiasAddBiasAdd1DeepSetsInv/sequential_1/dense_4/MatMul:product:0?DeepSetsInv/sequential_1/dense_4/BiasAdd/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€А
IdentityIdentity1DeepSetsInv/sequential_1/dense_4/BiasAdd:output:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€ю
NoOpNoOp4^DeepSetsInv/sequential/dense/BiasAdd/ReadVariableOp6^DeepSetsInv/sequential/dense/Tensordot/ReadVariableOp6^DeepSetsInv/sequential/dense_1/BiasAdd/ReadVariableOp8^DeepSetsInv/sequential/dense_1/Tensordot/ReadVariableOp6^DeepSetsInv/sequential/dense_2/BiasAdd/ReadVariableOp8^DeepSetsInv/sequential/dense_2/Tensordot/ReadVariableOp8^DeepSetsInv/sequential_1/dense_3/BiasAdd/ReadVariableOp7^DeepSetsInv/sequential_1/dense_3/MatMul/ReadVariableOp8^DeepSetsInv/sequential_1/dense_4/BiasAdd/ReadVariableOp7^DeepSetsInv/sequential_1/dense_4/MatMul/ReadVariableOp*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:€€€€€€€€€: : : : : : : : : : 2j
3DeepSetsInv/sequential/dense/BiasAdd/ReadVariableOp3DeepSetsInv/sequential/dense/BiasAdd/ReadVariableOp2n
5DeepSetsInv/sequential/dense/Tensordot/ReadVariableOp5DeepSetsInv/sequential/dense/Tensordot/ReadVariableOp2n
5DeepSetsInv/sequential/dense_1/BiasAdd/ReadVariableOp5DeepSetsInv/sequential/dense_1/BiasAdd/ReadVariableOp2r
7DeepSetsInv/sequential/dense_1/Tensordot/ReadVariableOp7DeepSetsInv/sequential/dense_1/Tensordot/ReadVariableOp2n
5DeepSetsInv/sequential/dense_2/BiasAdd/ReadVariableOp5DeepSetsInv/sequential/dense_2/BiasAdd/ReadVariableOp2r
7DeepSetsInv/sequential/dense_2/Tensordot/ReadVariableOp7DeepSetsInv/sequential/dense_2/Tensordot/ReadVariableOp2r
7DeepSetsInv/sequential_1/dense_3/BiasAdd/ReadVariableOp7DeepSetsInv/sequential_1/dense_3/BiasAdd/ReadVariableOp2p
6DeepSetsInv/sequential_1/dense_3/MatMul/ReadVariableOp6DeepSetsInv/sequential_1/dense_3/MatMul/ReadVariableOp2r
7DeepSetsInv/sequential_1/dense_4/BiasAdd/ReadVariableOp7DeepSetsInv/sequential_1/dense_4/BiasAdd/ReadVariableOp2p
6DeepSetsInv/sequential_1/dense_4/MatMul/ReadVariableOp6DeepSetsInv/sequential_1/dense_4/MatMul/ReadVariableOp:T P
+
_output_shapes
:€€€€€€€€€
!
_user_specified_name	input_1
«	
х
D__inference_dense_4_layer_call_and_return_conditional_losses_1622038

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
:€€€€€€€€€w
NoOpNoOp^BiasAdd/ReadVariableOp^MatMul/ReadVariableOp*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:€€€€€€€€€ : : 20
BiasAdd/ReadVariableOpBiasAdd/ReadVariableOp2.
MatMul/ReadVariableOpMatMul/ReadVariableOp:O K
'
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
Є
H
,__inference_activation_layer_call_fn_1621896

inputs
identityї
PartitionedCallPartitionedCallinputs*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8В *P
fKRI
G__inference_activation_layer_call_and_return_conditional_losses_1620623d
IdentityIdentityPartitionedCall:output:0*
T0*+
_output_shapes
:€€€€€€€€€ "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:€€€€€€€€€ :S O
+
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
ш
ћ
I__inference_sequential_1_layer_call_and_return_conditional_losses_1621852

inputs8
&dense_3_matmul_readvariableop_resource:  5
'dense_3_biasadd_readvariableop_resource: 8
&dense_4_matmul_readvariableop_resource: 5
'dense_4_biasadd_readvariableop_resource:
identityИҐdense_3/BiasAdd/ReadVariableOpҐdense_3/MatMul/ReadVariableOpҐdense_4/BiasAdd/ReadVariableOpҐdense_4/MatMul/ReadVariableOpД
dense_3/MatMul/ReadVariableOpReadVariableOp&dense_3_matmul_readvariableop_resource*
_output_shapes

:  *
dtype0y
dense_3/MatMulMatMulinputs%dense_3/MatMul/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€ В
dense_3/BiasAdd/ReadVariableOpReadVariableOp'dense_3_biasadd_readvariableop_resource*
_output_shapes
: *
dtype0О
dense_3/BiasAddBiasAdddense_3/MatMul:product:0&dense_3/BiasAdd/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€ `
dense_3/ReluReludense_3/BiasAdd:output:0*
T0*'
_output_shapes
:€€€€€€€€€ Д
dense_4/MatMul/ReadVariableOpReadVariableOp&dense_4_matmul_readvariableop_resource*
_output_shapes

: *
dtype0Н
dense_4/MatMulMatMuldense_3/Relu:activations:0%dense_4/MatMul/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€В
dense_4/BiasAdd/ReadVariableOpReadVariableOp'dense_4_biasadd_readvariableop_resource*
_output_shapes
:*
dtype0О
dense_4/BiasAddBiasAdddense_4/MatMul:product:0&dense_4/BiasAdd/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€g
IdentityIdentitydense_4/BiasAdd:output:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€»
NoOpNoOp^dense_3/BiasAdd/ReadVariableOp^dense_3/MatMul/ReadVariableOp^dense_4/BiasAdd/ReadVariableOp^dense_4/MatMul/ReadVariableOp*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:€€€€€€€€€ : : : : 2@
dense_3/BiasAdd/ReadVariableOpdense_3/BiasAdd/ReadVariableOp2>
dense_3/MatMul/ReadVariableOpdense_3/MatMul/ReadVariableOp2@
dense_4/BiasAdd/ReadVariableOpdense_4/BiasAdd/ReadVariableOp2>
dense_4/MatMul/ReadVariableOpdense_4/MatMul/ReadVariableOp:O K
'
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
Е	
Е
,__inference_sequential_layer_call_fn_1621622

inputs
unknown: 
	unknown_0: 
	unknown_1:  
	unknown_2: 
	unknown_3:  
	unknown_4: 
identityИҐStatefulPartitionedCallЩ
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4*
Tin
	2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ *(
_read_only_resource_inputs

*2
config_proto" 

CPU

GPU2 *0J 8В *P
fKRI
G__inference_sequential_layer_call_and_return_conditional_losses_1620816s
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:€€€€€€€€€ `
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*6
_input_shapes%
#:€€€€€€€€€: : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:S O
+
_output_shapes
:€€€€€€€€€
 
_user_specified_nameinputs
™

у
-__inference_DeepSetsInv_layer_call_fn_1621203
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
identityИҐStatefulPartitionedCallЋ
StatefulPartitionedCallStatefulPartitionedCallinput_1unknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4	unknown_5	unknown_6	unknown_7	unknown_8*
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
GPU2 *0J 8В *Q
fLRJ
H__inference_DeepSetsInv_layer_call_and_return_conditional_losses_1621155o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€`
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:€€€€€€€€€: : : : : : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:T P
+
_output_shapes
:€€€€€€€€€
!
_user_specified_name	input_1
Ф	
К
,__inference_sequential_layer_call_fn_1620848
dense_input
unknown: 
	unknown_0: 
	unknown_1:  
	unknown_2: 
	unknown_3:  
	unknown_4: 
identityИҐStatefulPartitionedCallЮ
StatefulPartitionedCallStatefulPartitionedCalldense_inputunknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4*
Tin
	2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ *(
_read_only_resource_inputs

*2
config_proto" 

CPU

GPU2 *0J 8В *P
fKRI
G__inference_sequential_layer_call_and_return_conditional_losses_1620816s
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:€€€€€€€€€ `
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*6
_input_shapes%
#:€€€€€€€€€: : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:X T
+
_output_shapes
:€€€€€€€€€
%
_user_specified_namedense_input
Ы

х
D__inference_dense_3_layer_call_and_return_conditional_losses_1622019

inputs0
matmul_readvariableop_resource:  -
biasadd_readvariableop_resource: 
identityИҐBiasAdd/ReadVariableOpҐMatMul/ReadVariableOpt
MatMul/ReadVariableOpReadVariableOpmatmul_readvariableop_resource*
_output_shapes

:  *
dtype0i
MatMulMatMulinputsMatMul/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€ r
BiasAdd/ReadVariableOpReadVariableOpbiasadd_readvariableop_resource*
_output_shapes
: *
dtype0v
BiasAddBiasAddMatMul:product:0BiasAdd/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€ P
ReluReluBiasAdd:output:0*
T0*'
_output_shapes
:€€€€€€€€€ a
IdentityIdentityRelu:activations:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€ w
NoOpNoOp^BiasAdd/ReadVariableOp^MatMul/ReadVariableOp*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:€€€€€€€€€ : : 20
BiasAdd/ReadVariableOpBiasAdd/ReadVariableOp2.
MatMul/ReadVariableOpMatMul/ReadVariableOp:O K
'
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
•
—
.__inference_sequential_1_layer_call_fn_1621818

inputs
unknown:  
	unknown_0: 
	unknown_1: 
	unknown_2:
identityИҐStatefulPartitionedCallэ
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0	unknown_1	unknown_2*
Tin	
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:€€€€€€€€€*&
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *R
fMRK
I__inference_sequential_1_layer_call_and_return_conditional_losses_1620993o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€`
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:€€€€€€€€€ : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:O K
'
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
ДГ
„	
H__inference_DeepSetsInv_layer_call_and_return_conditional_losses_1621538

inputsD
2sequential_dense_tensordot_readvariableop_resource: >
0sequential_dense_biasadd_readvariableop_resource: F
4sequential_dense_1_tensordot_readvariableop_resource:  @
2sequential_dense_1_biasadd_readvariableop_resource: F
4sequential_dense_2_tensordot_readvariableop_resource:  @
2sequential_dense_2_biasadd_readvariableop_resource: E
3sequential_1_dense_3_matmul_readvariableop_resource:  B
4sequential_1_dense_3_biasadd_readvariableop_resource: E
3sequential_1_dense_4_matmul_readvariableop_resource: B
4sequential_1_dense_4_biasadd_readvariableop_resource:
identityИҐ'sequential/dense/BiasAdd/ReadVariableOpҐ)sequential/dense/Tensordot/ReadVariableOpҐ)sequential/dense_1/BiasAdd/ReadVariableOpҐ+sequential/dense_1/Tensordot/ReadVariableOpҐ)sequential/dense_2/BiasAdd/ReadVariableOpҐ+sequential/dense_2/Tensordot/ReadVariableOpҐ+sequential_1/dense_3/BiasAdd/ReadVariableOpҐ*sequential_1/dense_3/MatMul/ReadVariableOpҐ+sequential_1/dense_4/BiasAdd/ReadVariableOpҐ*sequential_1/dense_4/MatMul/ReadVariableOpЬ
)sequential/dense/Tensordot/ReadVariableOpReadVariableOp2sequential_dense_tensordot_readvariableop_resource*
_output_shapes

: *
dtype0i
sequential/dense/Tensordot/axesConst*
_output_shapes
:*
dtype0*
valueB:p
sequential/dense/Tensordot/freeConst*
_output_shapes
:*
dtype0*
valueB"       V
 sequential/dense/Tensordot/ShapeShapeinputs*
T0*
_output_shapes
:j
(sequential/dense/Tensordot/GatherV2/axisConst*
_output_shapes
: *
dtype0*
value	B : €
#sequential/dense/Tensordot/GatherV2GatherV2)sequential/dense/Tensordot/Shape:output:0(sequential/dense/Tensordot/free:output:01sequential/dense/Tensordot/GatherV2/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:l
*sequential/dense/Tensordot/GatherV2_1/axisConst*
_output_shapes
: *
dtype0*
value	B : Г
%sequential/dense/Tensordot/GatherV2_1GatherV2)sequential/dense/Tensordot/Shape:output:0(sequential/dense/Tensordot/axes:output:03sequential/dense/Tensordot/GatherV2_1/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:j
 sequential/dense/Tensordot/ConstConst*
_output_shapes
:*
dtype0*
valueB: °
sequential/dense/Tensordot/ProdProd,sequential/dense/Tensordot/GatherV2:output:0)sequential/dense/Tensordot/Const:output:0*
T0*
_output_shapes
: l
"sequential/dense/Tensordot/Const_1Const*
_output_shapes
:*
dtype0*
valueB: І
!sequential/dense/Tensordot/Prod_1Prod.sequential/dense/Tensordot/GatherV2_1:output:0+sequential/dense/Tensordot/Const_1:output:0*
T0*
_output_shapes
: h
&sequential/dense/Tensordot/concat/axisConst*
_output_shapes
: *
dtype0*
value	B : а
!sequential/dense/Tensordot/concatConcatV2(sequential/dense/Tensordot/free:output:0(sequential/dense/Tensordot/axes:output:0/sequential/dense/Tensordot/concat/axis:output:0*
N*
T0*
_output_shapes
:ђ
 sequential/dense/Tensordot/stackPack(sequential/dense/Tensordot/Prod:output:0*sequential/dense/Tensordot/Prod_1:output:0*
N*
T0*
_output_shapes
:Ы
$sequential/dense/Tensordot/transpose	Transposeinputs*sequential/dense/Tensordot/concat:output:0*
T0*+
_output_shapes
:€€€€€€€€€љ
"sequential/dense/Tensordot/ReshapeReshape(sequential/dense/Tensordot/transpose:y:0)sequential/dense/Tensordot/stack:output:0*
T0*0
_output_shapes
:€€€€€€€€€€€€€€€€€€љ
!sequential/dense/Tensordot/MatMulMatMul+sequential/dense/Tensordot/Reshape:output:01sequential/dense/Tensordot/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€ l
"sequential/dense/Tensordot/Const_2Const*
_output_shapes
:*
dtype0*
valueB: j
(sequential/dense/Tensordot/concat_1/axisConst*
_output_shapes
: *
dtype0*
value	B : л
#sequential/dense/Tensordot/concat_1ConcatV2,sequential/dense/Tensordot/GatherV2:output:0+sequential/dense/Tensordot/Const_2:output:01sequential/dense/Tensordot/concat_1/axis:output:0*
N*
T0*
_output_shapes
:ґ
sequential/dense/TensordotReshape+sequential/dense/Tensordot/MatMul:product:0,sequential/dense/Tensordot/concat_1:output:0*
T0*+
_output_shapes
:€€€€€€€€€ Ф
'sequential/dense/BiasAdd/ReadVariableOpReadVariableOp0sequential_dense_biasadd_readvariableop_resource*
_output_shapes
: *
dtype0ѓ
sequential/dense/BiasAddBiasAdd#sequential/dense/Tensordot:output:0/sequential/dense/BiasAdd/ReadVariableOp:value:0*
T0*+
_output_shapes
:€€€€€€€€€ {
sequential/activation/ReluRelu!sequential/dense/BiasAdd:output:0*
T0*+
_output_shapes
:€€€€€€€€€ †
+sequential/dense_1/Tensordot/ReadVariableOpReadVariableOp4sequential_dense_1_tensordot_readvariableop_resource*
_output_shapes

:  *
dtype0k
!sequential/dense_1/Tensordot/axesConst*
_output_shapes
:*
dtype0*
valueB:r
!sequential/dense_1/Tensordot/freeConst*
_output_shapes
:*
dtype0*
valueB"       z
"sequential/dense_1/Tensordot/ShapeShape(sequential/activation/Relu:activations:0*
T0*
_output_shapes
:l
*sequential/dense_1/Tensordot/GatherV2/axisConst*
_output_shapes
: *
dtype0*
value	B : З
%sequential/dense_1/Tensordot/GatherV2GatherV2+sequential/dense_1/Tensordot/Shape:output:0*sequential/dense_1/Tensordot/free:output:03sequential/dense_1/Tensordot/GatherV2/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:n
,sequential/dense_1/Tensordot/GatherV2_1/axisConst*
_output_shapes
: *
dtype0*
value	B : Л
'sequential/dense_1/Tensordot/GatherV2_1GatherV2+sequential/dense_1/Tensordot/Shape:output:0*sequential/dense_1/Tensordot/axes:output:05sequential/dense_1/Tensordot/GatherV2_1/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:l
"sequential/dense_1/Tensordot/ConstConst*
_output_shapes
:*
dtype0*
valueB: І
!sequential/dense_1/Tensordot/ProdProd.sequential/dense_1/Tensordot/GatherV2:output:0+sequential/dense_1/Tensordot/Const:output:0*
T0*
_output_shapes
: n
$sequential/dense_1/Tensordot/Const_1Const*
_output_shapes
:*
dtype0*
valueB: ≠
#sequential/dense_1/Tensordot/Prod_1Prod0sequential/dense_1/Tensordot/GatherV2_1:output:0-sequential/dense_1/Tensordot/Const_1:output:0*
T0*
_output_shapes
: j
(sequential/dense_1/Tensordot/concat/axisConst*
_output_shapes
: *
dtype0*
value	B : и
#sequential/dense_1/Tensordot/concatConcatV2*sequential/dense_1/Tensordot/free:output:0*sequential/dense_1/Tensordot/axes:output:01sequential/dense_1/Tensordot/concat/axis:output:0*
N*
T0*
_output_shapes
:≤
"sequential/dense_1/Tensordot/stackPack*sequential/dense_1/Tensordot/Prod:output:0,sequential/dense_1/Tensordot/Prod_1:output:0*
N*
T0*
_output_shapes
:Ѕ
&sequential/dense_1/Tensordot/transpose	Transpose(sequential/activation/Relu:activations:0,sequential/dense_1/Tensordot/concat:output:0*
T0*+
_output_shapes
:€€€€€€€€€ √
$sequential/dense_1/Tensordot/ReshapeReshape*sequential/dense_1/Tensordot/transpose:y:0+sequential/dense_1/Tensordot/stack:output:0*
T0*0
_output_shapes
:€€€€€€€€€€€€€€€€€€√
#sequential/dense_1/Tensordot/MatMulMatMul-sequential/dense_1/Tensordot/Reshape:output:03sequential/dense_1/Tensordot/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€ n
$sequential/dense_1/Tensordot/Const_2Const*
_output_shapes
:*
dtype0*
valueB: l
*sequential/dense_1/Tensordot/concat_1/axisConst*
_output_shapes
: *
dtype0*
value	B : у
%sequential/dense_1/Tensordot/concat_1ConcatV2.sequential/dense_1/Tensordot/GatherV2:output:0-sequential/dense_1/Tensordot/Const_2:output:03sequential/dense_1/Tensordot/concat_1/axis:output:0*
N*
T0*
_output_shapes
:Љ
sequential/dense_1/TensordotReshape-sequential/dense_1/Tensordot/MatMul:product:0.sequential/dense_1/Tensordot/concat_1:output:0*
T0*+
_output_shapes
:€€€€€€€€€ Ш
)sequential/dense_1/BiasAdd/ReadVariableOpReadVariableOp2sequential_dense_1_biasadd_readvariableop_resource*
_output_shapes
: *
dtype0µ
sequential/dense_1/BiasAddBiasAdd%sequential/dense_1/Tensordot:output:01sequential/dense_1/BiasAdd/ReadVariableOp:value:0*
T0*+
_output_shapes
:€€€€€€€€€ 
sequential/activation_1/ReluRelu#sequential/dense_1/BiasAdd:output:0*
T0*+
_output_shapes
:€€€€€€€€€ †
+sequential/dense_2/Tensordot/ReadVariableOpReadVariableOp4sequential_dense_2_tensordot_readvariableop_resource*
_output_shapes

:  *
dtype0k
!sequential/dense_2/Tensordot/axesConst*
_output_shapes
:*
dtype0*
valueB:r
!sequential/dense_2/Tensordot/freeConst*
_output_shapes
:*
dtype0*
valueB"       |
"sequential/dense_2/Tensordot/ShapeShape*sequential/activation_1/Relu:activations:0*
T0*
_output_shapes
:l
*sequential/dense_2/Tensordot/GatherV2/axisConst*
_output_shapes
: *
dtype0*
value	B : З
%sequential/dense_2/Tensordot/GatherV2GatherV2+sequential/dense_2/Tensordot/Shape:output:0*sequential/dense_2/Tensordot/free:output:03sequential/dense_2/Tensordot/GatherV2/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:n
,sequential/dense_2/Tensordot/GatherV2_1/axisConst*
_output_shapes
: *
dtype0*
value	B : Л
'sequential/dense_2/Tensordot/GatherV2_1GatherV2+sequential/dense_2/Tensordot/Shape:output:0*sequential/dense_2/Tensordot/axes:output:05sequential/dense_2/Tensordot/GatherV2_1/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:l
"sequential/dense_2/Tensordot/ConstConst*
_output_shapes
:*
dtype0*
valueB: І
!sequential/dense_2/Tensordot/ProdProd.sequential/dense_2/Tensordot/GatherV2:output:0+sequential/dense_2/Tensordot/Const:output:0*
T0*
_output_shapes
: n
$sequential/dense_2/Tensordot/Const_1Const*
_output_shapes
:*
dtype0*
valueB: ≠
#sequential/dense_2/Tensordot/Prod_1Prod0sequential/dense_2/Tensordot/GatherV2_1:output:0-sequential/dense_2/Tensordot/Const_1:output:0*
T0*
_output_shapes
: j
(sequential/dense_2/Tensordot/concat/axisConst*
_output_shapes
: *
dtype0*
value	B : и
#sequential/dense_2/Tensordot/concatConcatV2*sequential/dense_2/Tensordot/free:output:0*sequential/dense_2/Tensordot/axes:output:01sequential/dense_2/Tensordot/concat/axis:output:0*
N*
T0*
_output_shapes
:≤
"sequential/dense_2/Tensordot/stackPack*sequential/dense_2/Tensordot/Prod:output:0,sequential/dense_2/Tensordot/Prod_1:output:0*
N*
T0*
_output_shapes
:√
&sequential/dense_2/Tensordot/transpose	Transpose*sequential/activation_1/Relu:activations:0,sequential/dense_2/Tensordot/concat:output:0*
T0*+
_output_shapes
:€€€€€€€€€ √
$sequential/dense_2/Tensordot/ReshapeReshape*sequential/dense_2/Tensordot/transpose:y:0+sequential/dense_2/Tensordot/stack:output:0*
T0*0
_output_shapes
:€€€€€€€€€€€€€€€€€€√
#sequential/dense_2/Tensordot/MatMulMatMul-sequential/dense_2/Tensordot/Reshape:output:03sequential/dense_2/Tensordot/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€ n
$sequential/dense_2/Tensordot/Const_2Const*
_output_shapes
:*
dtype0*
valueB: l
*sequential/dense_2/Tensordot/concat_1/axisConst*
_output_shapes
: *
dtype0*
value	B : у
%sequential/dense_2/Tensordot/concat_1ConcatV2.sequential/dense_2/Tensordot/GatherV2:output:0-sequential/dense_2/Tensordot/Const_2:output:03sequential/dense_2/Tensordot/concat_1/axis:output:0*
N*
T0*
_output_shapes
:Љ
sequential/dense_2/TensordotReshape-sequential/dense_2/Tensordot/MatMul:product:0.sequential/dense_2/Tensordot/concat_1:output:0*
T0*+
_output_shapes
:€€€€€€€€€ Ш
)sequential/dense_2/BiasAdd/ReadVariableOpReadVariableOp2sequential_dense_2_biasadd_readvariableop_resource*
_output_shapes
: *
dtype0µ
sequential/dense_2/BiasAddBiasAdd%sequential/dense_2/Tensordot:output:01sequential/dense_2/BiasAdd/ReadVariableOp:value:0*
T0*+
_output_shapes
:€€€€€€€€€ 
sequential/activation_2/ReluRelu#sequential/dense_2/BiasAdd:output:0*
T0*+
_output_shapes
:€€€€€€€€€ X
Mean/reduction_indicesConst*
_output_shapes
: *
dtype0*
value	B :Л
MeanMean*sequential/activation_2/Relu:activations:0Mean/reduction_indices:output:0*
T0*'
_output_shapes
:€€€€€€€€€ Ю
*sequential_1/dense_3/MatMul/ReadVariableOpReadVariableOp3sequential_1_dense_3_matmul_readvariableop_resource*
_output_shapes

:  *
dtype0Ъ
sequential_1/dense_3/MatMulMatMulMean:output:02sequential_1/dense_3/MatMul/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€ Ь
+sequential_1/dense_3/BiasAdd/ReadVariableOpReadVariableOp4sequential_1_dense_3_biasadd_readvariableop_resource*
_output_shapes
: *
dtype0µ
sequential_1/dense_3/BiasAddBiasAdd%sequential_1/dense_3/MatMul:product:03sequential_1/dense_3/BiasAdd/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€ z
sequential_1/dense_3/ReluRelu%sequential_1/dense_3/BiasAdd:output:0*
T0*'
_output_shapes
:€€€€€€€€€ Ю
*sequential_1/dense_4/MatMul/ReadVariableOpReadVariableOp3sequential_1_dense_4_matmul_readvariableop_resource*
_output_shapes

: *
dtype0і
sequential_1/dense_4/MatMulMatMul'sequential_1/dense_3/Relu:activations:02sequential_1/dense_4/MatMul/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€Ь
+sequential_1/dense_4/BiasAdd/ReadVariableOpReadVariableOp4sequential_1_dense_4_biasadd_readvariableop_resource*
_output_shapes
:*
dtype0µ
sequential_1/dense_4/BiasAddBiasAdd%sequential_1/dense_4/MatMul:product:03sequential_1/dense_4/BiasAdd/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€t
IdentityIdentity%sequential_1/dense_4/BiasAdd:output:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€Ж
NoOpNoOp(^sequential/dense/BiasAdd/ReadVariableOp*^sequential/dense/Tensordot/ReadVariableOp*^sequential/dense_1/BiasAdd/ReadVariableOp,^sequential/dense_1/Tensordot/ReadVariableOp*^sequential/dense_2/BiasAdd/ReadVariableOp,^sequential/dense_2/Tensordot/ReadVariableOp,^sequential_1/dense_3/BiasAdd/ReadVariableOp+^sequential_1/dense_3/MatMul/ReadVariableOp,^sequential_1/dense_4/BiasAdd/ReadVariableOp+^sequential_1/dense_4/MatMul/ReadVariableOp*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:€€€€€€€€€: : : : : : : : : : 2R
'sequential/dense/BiasAdd/ReadVariableOp'sequential/dense/BiasAdd/ReadVariableOp2V
)sequential/dense/Tensordot/ReadVariableOp)sequential/dense/Tensordot/ReadVariableOp2V
)sequential/dense_1/BiasAdd/ReadVariableOp)sequential/dense_1/BiasAdd/ReadVariableOp2Z
+sequential/dense_1/Tensordot/ReadVariableOp+sequential/dense_1/Tensordot/ReadVariableOp2V
)sequential/dense_2/BiasAdd/ReadVariableOp)sequential/dense_2/BiasAdd/ReadVariableOp2Z
+sequential/dense_2/Tensordot/ReadVariableOp+sequential/dense_2/Tensordot/ReadVariableOp2Z
+sequential_1/dense_3/BiasAdd/ReadVariableOp+sequential_1/dense_3/BiasAdd/ReadVariableOp2X
*sequential_1/dense_3/MatMul/ReadVariableOp*sequential_1/dense_3/MatMul/ReadVariableOp2Z
+sequential_1/dense_4/BiasAdd/ReadVariableOp+sequential_1/dense_4/BiasAdd/ReadVariableOp2X
*sequential_1/dense_4/MatMul/ReadVariableOp*sequential_1/dense_4/MatMul/ReadVariableOp:S O
+
_output_shapes
:€€€€€€€€€
 
_user_specified_nameinputs
Љ
§
H__inference_DeepSetsInv_layer_call_and_return_conditional_losses_1621231
input_1$
sequential_1621206:  
sequential_1621208: $
sequential_1621210:   
sequential_1621212: $
sequential_1621214:   
sequential_1621216: &
sequential_1_1621221:  "
sequential_1_1621223: &
sequential_1_1621225: "
sequential_1_1621227:
identityИҐ"sequential/StatefulPartitionedCallҐ$sequential_1/StatefulPartitionedCallЁ
"sequential/StatefulPartitionedCallStatefulPartitionedCallinput_1sequential_1621206sequential_1621208sequential_1621210sequential_1621212sequential_1621214sequential_1621216*
Tin
	2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ *(
_read_only_resource_inputs

*2
config_proto" 

CPU

GPU2 *0J 8В *P
fKRI
G__inference_sequential_layer_call_and_return_conditional_losses_1620712X
Mean/reduction_indicesConst*
_output_shapes
: *
dtype0*
value	B :М
MeanMean+sequential/StatefulPartitionedCall:output:0Mean/reduction_indices:output:0*
T0*'
_output_shapes
:€€€€€€€€€ њ
$sequential_1/StatefulPartitionedCallStatefulPartitionedCallMean:output:0sequential_1_1621221sequential_1_1621223sequential_1_1621225sequential_1_1621227*
Tin	
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:€€€€€€€€€*&
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *R
fMRK
I__inference_sequential_1_layer_call_and_return_conditional_losses_1620933|
IdentityIdentity-sequential_1/StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€Т
NoOpNoOp#^sequential/StatefulPartitionedCall%^sequential_1/StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:€€€€€€€€€: : : : : : : : : : 2H
"sequential/StatefulPartitionedCall"sequential/StatefulPartitionedCall2L
$sequential_1/StatefulPartitionedCall$sequential_1/StatefulPartitionedCall:T P
+
_output_shapes
:€€€€€€€€€
!
_user_specified_name	input_1
’\
Ж
G__inference_sequential_layer_call_and_return_conditional_losses_1621707

inputs9
'dense_tensordot_readvariableop_resource: 3
%dense_biasadd_readvariableop_resource: ;
)dense_1_tensordot_readvariableop_resource:  5
'dense_1_biasadd_readvariableop_resource: ;
)dense_2_tensordot_readvariableop_resource:  5
'dense_2_biasadd_readvariableop_resource: 
identityИҐdense/BiasAdd/ReadVariableOpҐdense/Tensordot/ReadVariableOpҐdense_1/BiasAdd/ReadVariableOpҐ dense_1/Tensordot/ReadVariableOpҐdense_2/BiasAdd/ReadVariableOpҐ dense_2/Tensordot/ReadVariableOpЖ
dense/Tensordot/ReadVariableOpReadVariableOp'dense_tensordot_readvariableop_resource*
_output_shapes

: *
dtype0^
dense/Tensordot/axesConst*
_output_shapes
:*
dtype0*
valueB:e
dense/Tensordot/freeConst*
_output_shapes
:*
dtype0*
valueB"       K
dense/Tensordot/ShapeShapeinputs*
T0*
_output_shapes
:_
dense/Tensordot/GatherV2/axisConst*
_output_shapes
: *
dtype0*
value	B : ”
dense/Tensordot/GatherV2GatherV2dense/Tensordot/Shape:output:0dense/Tensordot/free:output:0&dense/Tensordot/GatherV2/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:a
dense/Tensordot/GatherV2_1/axisConst*
_output_shapes
: *
dtype0*
value	B : „
dense/Tensordot/GatherV2_1GatherV2dense/Tensordot/Shape:output:0dense/Tensordot/axes:output:0(dense/Tensordot/GatherV2_1/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:_
dense/Tensordot/ConstConst*
_output_shapes
:*
dtype0*
valueB: А
dense/Tensordot/ProdProd!dense/Tensordot/GatherV2:output:0dense/Tensordot/Const:output:0*
T0*
_output_shapes
: a
dense/Tensordot/Const_1Const*
_output_shapes
:*
dtype0*
valueB: Ж
dense/Tensordot/Prod_1Prod#dense/Tensordot/GatherV2_1:output:0 dense/Tensordot/Const_1:output:0*
T0*
_output_shapes
: ]
dense/Tensordot/concat/axisConst*
_output_shapes
: *
dtype0*
value	B : і
dense/Tensordot/concatConcatV2dense/Tensordot/free:output:0dense/Tensordot/axes:output:0$dense/Tensordot/concat/axis:output:0*
N*
T0*
_output_shapes
:Л
dense/Tensordot/stackPackdense/Tensordot/Prod:output:0dense/Tensordot/Prod_1:output:0*
N*
T0*
_output_shapes
:Е
dense/Tensordot/transpose	Transposeinputsdense/Tensordot/concat:output:0*
T0*+
_output_shapes
:€€€€€€€€€Ь
dense/Tensordot/ReshapeReshapedense/Tensordot/transpose:y:0dense/Tensordot/stack:output:0*
T0*0
_output_shapes
:€€€€€€€€€€€€€€€€€€Ь
dense/Tensordot/MatMulMatMul dense/Tensordot/Reshape:output:0&dense/Tensordot/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€ a
dense/Tensordot/Const_2Const*
_output_shapes
:*
dtype0*
valueB: _
dense/Tensordot/concat_1/axisConst*
_output_shapes
: *
dtype0*
value	B : њ
dense/Tensordot/concat_1ConcatV2!dense/Tensordot/GatherV2:output:0 dense/Tensordot/Const_2:output:0&dense/Tensordot/concat_1/axis:output:0*
N*
T0*
_output_shapes
:Х
dense/TensordotReshape dense/Tensordot/MatMul:product:0!dense/Tensordot/concat_1:output:0*
T0*+
_output_shapes
:€€€€€€€€€ ~
dense/BiasAdd/ReadVariableOpReadVariableOp%dense_biasadd_readvariableop_resource*
_output_shapes
: *
dtype0О
dense/BiasAddBiasAdddense/Tensordot:output:0$dense/BiasAdd/ReadVariableOp:value:0*
T0*+
_output_shapes
:€€€€€€€€€ e
activation/ReluReludense/BiasAdd:output:0*
T0*+
_output_shapes
:€€€€€€€€€ К
 dense_1/Tensordot/ReadVariableOpReadVariableOp)dense_1_tensordot_readvariableop_resource*
_output_shapes

:  *
dtype0`
dense_1/Tensordot/axesConst*
_output_shapes
:*
dtype0*
valueB:g
dense_1/Tensordot/freeConst*
_output_shapes
:*
dtype0*
valueB"       d
dense_1/Tensordot/ShapeShapeactivation/Relu:activations:0*
T0*
_output_shapes
:a
dense_1/Tensordot/GatherV2/axisConst*
_output_shapes
: *
dtype0*
value	B : џ
dense_1/Tensordot/GatherV2GatherV2 dense_1/Tensordot/Shape:output:0dense_1/Tensordot/free:output:0(dense_1/Tensordot/GatherV2/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:c
!dense_1/Tensordot/GatherV2_1/axisConst*
_output_shapes
: *
dtype0*
value	B : я
dense_1/Tensordot/GatherV2_1GatherV2 dense_1/Tensordot/Shape:output:0dense_1/Tensordot/axes:output:0*dense_1/Tensordot/GatherV2_1/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:a
dense_1/Tensordot/ConstConst*
_output_shapes
:*
dtype0*
valueB: Ж
dense_1/Tensordot/ProdProd#dense_1/Tensordot/GatherV2:output:0 dense_1/Tensordot/Const:output:0*
T0*
_output_shapes
: c
dense_1/Tensordot/Const_1Const*
_output_shapes
:*
dtype0*
valueB: М
dense_1/Tensordot/Prod_1Prod%dense_1/Tensordot/GatherV2_1:output:0"dense_1/Tensordot/Const_1:output:0*
T0*
_output_shapes
: _
dense_1/Tensordot/concat/axisConst*
_output_shapes
: *
dtype0*
value	B : Љ
dense_1/Tensordot/concatConcatV2dense_1/Tensordot/free:output:0dense_1/Tensordot/axes:output:0&dense_1/Tensordot/concat/axis:output:0*
N*
T0*
_output_shapes
:С
dense_1/Tensordot/stackPackdense_1/Tensordot/Prod:output:0!dense_1/Tensordot/Prod_1:output:0*
N*
T0*
_output_shapes
:†
dense_1/Tensordot/transpose	Transposeactivation/Relu:activations:0!dense_1/Tensordot/concat:output:0*
T0*+
_output_shapes
:€€€€€€€€€ Ґ
dense_1/Tensordot/ReshapeReshapedense_1/Tensordot/transpose:y:0 dense_1/Tensordot/stack:output:0*
T0*0
_output_shapes
:€€€€€€€€€€€€€€€€€€Ґ
dense_1/Tensordot/MatMulMatMul"dense_1/Tensordot/Reshape:output:0(dense_1/Tensordot/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€ c
dense_1/Tensordot/Const_2Const*
_output_shapes
:*
dtype0*
valueB: a
dense_1/Tensordot/concat_1/axisConst*
_output_shapes
: *
dtype0*
value	B : «
dense_1/Tensordot/concat_1ConcatV2#dense_1/Tensordot/GatherV2:output:0"dense_1/Tensordot/Const_2:output:0(dense_1/Tensordot/concat_1/axis:output:0*
N*
T0*
_output_shapes
:Ы
dense_1/TensordotReshape"dense_1/Tensordot/MatMul:product:0#dense_1/Tensordot/concat_1:output:0*
T0*+
_output_shapes
:€€€€€€€€€ В
dense_1/BiasAdd/ReadVariableOpReadVariableOp'dense_1_biasadd_readvariableop_resource*
_output_shapes
: *
dtype0Ф
dense_1/BiasAddBiasAdddense_1/Tensordot:output:0&dense_1/BiasAdd/ReadVariableOp:value:0*
T0*+
_output_shapes
:€€€€€€€€€ i
activation_1/ReluReludense_1/BiasAdd:output:0*
T0*+
_output_shapes
:€€€€€€€€€ К
 dense_2/Tensordot/ReadVariableOpReadVariableOp)dense_2_tensordot_readvariableop_resource*
_output_shapes

:  *
dtype0`
dense_2/Tensordot/axesConst*
_output_shapes
:*
dtype0*
valueB:g
dense_2/Tensordot/freeConst*
_output_shapes
:*
dtype0*
valueB"       f
dense_2/Tensordot/ShapeShapeactivation_1/Relu:activations:0*
T0*
_output_shapes
:a
dense_2/Tensordot/GatherV2/axisConst*
_output_shapes
: *
dtype0*
value	B : џ
dense_2/Tensordot/GatherV2GatherV2 dense_2/Tensordot/Shape:output:0dense_2/Tensordot/free:output:0(dense_2/Tensordot/GatherV2/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:c
!dense_2/Tensordot/GatherV2_1/axisConst*
_output_shapes
: *
dtype0*
value	B : я
dense_2/Tensordot/GatherV2_1GatherV2 dense_2/Tensordot/Shape:output:0dense_2/Tensordot/axes:output:0*dense_2/Tensordot/GatherV2_1/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:a
dense_2/Tensordot/ConstConst*
_output_shapes
:*
dtype0*
valueB: Ж
dense_2/Tensordot/ProdProd#dense_2/Tensordot/GatherV2:output:0 dense_2/Tensordot/Const:output:0*
T0*
_output_shapes
: c
dense_2/Tensordot/Const_1Const*
_output_shapes
:*
dtype0*
valueB: М
dense_2/Tensordot/Prod_1Prod%dense_2/Tensordot/GatherV2_1:output:0"dense_2/Tensordot/Const_1:output:0*
T0*
_output_shapes
: _
dense_2/Tensordot/concat/axisConst*
_output_shapes
: *
dtype0*
value	B : Љ
dense_2/Tensordot/concatConcatV2dense_2/Tensordot/free:output:0dense_2/Tensordot/axes:output:0&dense_2/Tensordot/concat/axis:output:0*
N*
T0*
_output_shapes
:С
dense_2/Tensordot/stackPackdense_2/Tensordot/Prod:output:0!dense_2/Tensordot/Prod_1:output:0*
N*
T0*
_output_shapes
:Ґ
dense_2/Tensordot/transpose	Transposeactivation_1/Relu:activations:0!dense_2/Tensordot/concat:output:0*
T0*+
_output_shapes
:€€€€€€€€€ Ґ
dense_2/Tensordot/ReshapeReshapedense_2/Tensordot/transpose:y:0 dense_2/Tensordot/stack:output:0*
T0*0
_output_shapes
:€€€€€€€€€€€€€€€€€€Ґ
dense_2/Tensordot/MatMulMatMul"dense_2/Tensordot/Reshape:output:0(dense_2/Tensordot/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€ c
dense_2/Tensordot/Const_2Const*
_output_shapes
:*
dtype0*
valueB: a
dense_2/Tensordot/concat_1/axisConst*
_output_shapes
: *
dtype0*
value	B : «
dense_2/Tensordot/concat_1ConcatV2#dense_2/Tensordot/GatherV2:output:0"dense_2/Tensordot/Const_2:output:0(dense_2/Tensordot/concat_1/axis:output:0*
N*
T0*
_output_shapes
:Ы
dense_2/TensordotReshape"dense_2/Tensordot/MatMul:product:0#dense_2/Tensordot/concat_1:output:0*
T0*+
_output_shapes
:€€€€€€€€€ В
dense_2/BiasAdd/ReadVariableOpReadVariableOp'dense_2_biasadd_readvariableop_resource*
_output_shapes
: *
dtype0Ф
dense_2/BiasAddBiasAdddense_2/Tensordot:output:0&dense_2/BiasAdd/ReadVariableOp:value:0*
T0*+
_output_shapes
:€€€€€€€€€ i
activation_2/ReluReludense_2/BiasAdd:output:0*
T0*+
_output_shapes
:€€€€€€€€€ r
IdentityIdentityactivation_2/Relu:activations:0^NoOp*
T0*+
_output_shapes
:€€€€€€€€€ О
NoOpNoOp^dense/BiasAdd/ReadVariableOp^dense/Tensordot/ReadVariableOp^dense_1/BiasAdd/ReadVariableOp!^dense_1/Tensordot/ReadVariableOp^dense_2/BiasAdd/ReadVariableOp!^dense_2/Tensordot/ReadVariableOp*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*6
_input_shapes%
#:€€€€€€€€€: : : : : : 2<
dense/BiasAdd/ReadVariableOpdense/BiasAdd/ReadVariableOp2@
dense/Tensordot/ReadVariableOpdense/Tensordot/ReadVariableOp2@
dense_1/BiasAdd/ReadVariableOpdense_1/BiasAdd/ReadVariableOp2D
 dense_1/Tensordot/ReadVariableOp dense_1/Tensordot/ReadVariableOp2@
dense_2/BiasAdd/ReadVariableOpdense_2/BiasAdd/ReadVariableOp2D
 dense_2/Tensordot/ReadVariableOp dense_2/Tensordot/ReadVariableOp:S O
+
_output_shapes
:€€€€€€€€€
 
_user_specified_nameinputs
Ћ
ы
D__inference_dense_1_layer_call_and_return_conditional_losses_1621940

inputs3
!tensordot_readvariableop_resource:  -
biasadd_readvariableop_resource: 
identityИҐBiasAdd/ReadVariableOpҐTensordot/ReadVariableOpz
Tensordot/ReadVariableOpReadVariableOp!tensordot_readvariableop_resource*
_output_shapes

:  *
dtype0X
Tensordot/axesConst*
_output_shapes
:*
dtype0*
valueB:_
Tensordot/freeConst*
_output_shapes
:*
dtype0*
valueB"       E
Tensordot/ShapeShapeinputs*
T0*
_output_shapes
:Y
Tensordot/GatherV2/axisConst*
_output_shapes
: *
dtype0*
value	B : ї
Tensordot/GatherV2GatherV2Tensordot/Shape:output:0Tensordot/free:output:0 Tensordot/GatherV2/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:[
Tensordot/GatherV2_1/axisConst*
_output_shapes
: *
dtype0*
value	B : њ
Tensordot/GatherV2_1GatherV2Tensordot/Shape:output:0Tensordot/axes:output:0"Tensordot/GatherV2_1/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
:Y
Tensordot/ConstConst*
_output_shapes
:*
dtype0*
valueB: n
Tensordot/ProdProdTensordot/GatherV2:output:0Tensordot/Const:output:0*
T0*
_output_shapes
: [
Tensordot/Const_1Const*
_output_shapes
:*
dtype0*
valueB: t
Tensordot/Prod_1ProdTensordot/GatherV2_1:output:0Tensordot/Const_1:output:0*
T0*
_output_shapes
: W
Tensordot/concat/axisConst*
_output_shapes
: *
dtype0*
value	B : Ь
Tensordot/concatConcatV2Tensordot/free:output:0Tensordot/axes:output:0Tensordot/concat/axis:output:0*
N*
T0*
_output_shapes
:y
Tensordot/stackPackTensordot/Prod:output:0Tensordot/Prod_1:output:0*
N*
T0*
_output_shapes
:y
Tensordot/transpose	TransposeinputsTensordot/concat:output:0*
T0*+
_output_shapes
:€€€€€€€€€ К
Tensordot/ReshapeReshapeTensordot/transpose:y:0Tensordot/stack:output:0*
T0*0
_output_shapes
:€€€€€€€€€€€€€€€€€€К
Tensordot/MatMulMatMulTensordot/Reshape:output:0 Tensordot/ReadVariableOp:value:0*
T0*'
_output_shapes
:€€€€€€€€€ [
Tensordot/Const_2Const*
_output_shapes
:*
dtype0*
valueB: Y
Tensordot/concat_1/axisConst*
_output_shapes
: *
dtype0*
value	B : І
Tensordot/concat_1ConcatV2Tensordot/GatherV2:output:0Tensordot/Const_2:output:0 Tensordot/concat_1/axis:output:0*
N*
T0*
_output_shapes
:Г
	TensordotReshapeTensordot/MatMul:product:0Tensordot/concat_1:output:0*
T0*+
_output_shapes
:€€€€€€€€€ r
BiasAdd/ReadVariableOpReadVariableOpbiasadd_readvariableop_resource*
_output_shapes
: *
dtype0|
BiasAddBiasAddTensordot:output:0BiasAdd/ReadVariableOp:value:0*
T0*+
_output_shapes
:€€€€€€€€€ c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:€€€€€€€€€ z
NoOpNoOp^BiasAdd/ReadVariableOp^Tensordot/ReadVariableOp*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:€€€€€€€€€ : : 20
BiasAdd/ReadVariableOpBiasAdd/ReadVariableOp24
Tensordot/ReadVariableOpTensordot/ReadVariableOp:S O
+
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
„
Ц
)__inference_dense_2_layer_call_fn_1621959

inputs
unknown:  
	unknown_0: 
identityИҐStatefulPartitionedCallв
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:€€€€€€€€€ *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *M
fHRF
D__inference_dense_2_layer_call_and_return_conditional_losses_1620698s
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:€€€€€€€€€ `
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:€€€€€€€€€ : : 22
StatefulPartitionedCallStatefulPartitionedCall:S O
+
_output_shapes
:€€€€€€€€€ 
 
_user_specified_nameinputs
Ї
Ў
.__inference_sequential_1_layer_call_fn_1621017
dense_3_input
unknown:  
	unknown_0: 
	unknown_1: 
	unknown_2:
identityИҐStatefulPartitionedCallД
StatefulPartitionedCallStatefulPartitionedCalldense_3_inputunknown	unknown_0	unknown_1	unknown_2*
Tin	
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:€€€€€€€€€*&
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *R
fMRK
I__inference_sequential_1_layer_call_and_return_conditional_losses_1620993o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€`
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:€€€€€€€€€ : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:V R
'
_output_shapes
:€€€€€€€€€ 
'
_user_specified_namedense_3_input
Ї
Ў
.__inference_sequential_1_layer_call_fn_1620944
dense_3_input
unknown:  
	unknown_0: 
	unknown_1: 
	unknown_2:
identityИҐStatefulPartitionedCallД
StatefulPartitionedCallStatefulPartitionedCalldense_3_inputunknown	unknown_0	unknown_1	unknown_2*
Tin	
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:€€€€€€€€€*&
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8В *R
fMRK
I__inference_sequential_1_layer_call_and_return_conditional_losses_1620933o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€`
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*.
_input_shapes
:€€€€€€€€€ : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:V R
'
_output_shapes
:€€€€€€€€€ 
'
_user_specified_namedense_3_input
™

у
-__inference_DeepSetsInv_layer_call_fn_1621100
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
identityИҐStatefulPartitionedCallЋ
StatefulPartitionedCallStatefulPartitionedCallinput_1unknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4	unknown_5	unknown_6	unknown_7	unknown_8*
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
GPU2 *0J 8В *Q
fLRJ
H__inference_DeepSetsInv_layer_call_and_return_conditional_losses_1621077o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:€€€€€€€€€`
NoOpNoOp^StatefulPartitionedCall*"
_acd_function_control_output(*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*>
_input_shapes-
+:€€€€€€€€€: : : : : : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:T P
+
_output_shapes
:€€€€€€€€€
!
_user_specified_name	input_1"Ж
L
saver_filename:0StatefulPartitionedCall_1:0StatefulPartitionedCall_28"
saved_model_main_op

NoOp*>
__saved_model_init_op%#
__saved_model_init_op

NoOp*ѓ
serving_defaultЫ
?
input_14
serving_default_input_1:0€€€€€€€€€<
output_10
StatefulPartitionedCall:0€€€€€€€€€tensorflow/serving/predict:»∆
у
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
 
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
п
trace_0
trace_1
trace_2
trace_32Д
-__inference_DeepSetsInv_layer_call_fn_1621100
-__inference_DeepSetsInv_layer_call_fn_1621313
-__inference_DeepSetsInv_layer_call_fn_1621338
-__inference_DeepSetsInv_layer_call_fn_1621203≈
Љ≤Є
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
kwonlydefaults™

trainingp 
annotations™ *
 ztrace_0ztrace_1ztrace_2ztrace_3
џ
trace_0
 trace_1
!trace_2
"trace_32р
H__inference_DeepSetsInv_layer_call_and_return_conditional_losses_1621438
H__inference_DeepSetsInv_layer_call_and_return_conditional_losses_1621538
H__inference_DeepSetsInv_layer_call_and_return_conditional_losses_1621231
H__inference_DeepSetsInv_layer_call_and_return_conditional_losses_1621259≈
Љ≤Є
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
kwonlydefaults™

trainingp 
annotations™ *
 ztrace_0z trace_1z!trace_2z"trace_3
ЌB 
"__inference__wrapped_model_1620575input_1"Ш
С≤Н
FullArgSpec
argsЪ 
varargsjargs
varkwjkwargs
defaults
 

kwonlyargsЪ 
kwonlydefaults
 
annotations™ *
 
∆
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
ш
/layer_with_weights-0
/layer-0
0layer_with_weights-1
0layer-1
1	variables
2trainable_variables
3regularization_losses
4	keras_api
5__call__
*6&call_and_return_all_conditional_losses"
_tf_keras_sequential
Ь
7
_variables
8_iterations
9_learning_rate
:_index_dict
;
_momentums
<_velocities
=_update_step_xla"
experimentalOptimizer
,
>serving_default"
signature_map
: 2dense/kernel
: 2
dense/bias
 :  2dense_1/kernel
: 2dense_1/bias
 :  2dense_2/kernel
: 2dense_2/bias
 :  2dense_3/kernel
: 2dense_3/bias
 : 2dense_4/kernel
:2dense_4/bias
 "
trackable_list_wrapper
.
0
	1"
trackable_list_wrapper
.
?0
@1"
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_dict_wrapper
ЕBВ
-__inference_DeepSetsInv_layer_call_fn_1621100input_1"≈
Љ≤Є
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
kwonlydefaults™

trainingp 
annotations™ *
 
ДBБ
-__inference_DeepSetsInv_layer_call_fn_1621313inputs"≈
Љ≤Є
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
kwonlydefaults™

trainingp 
annotations™ *
 
ДBБ
-__inference_DeepSetsInv_layer_call_fn_1621338inputs"≈
Љ≤Є
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
kwonlydefaults™

trainingp 
annotations™ *
 
ЕBВ
-__inference_DeepSetsInv_layer_call_fn_1621203input_1"≈
Љ≤Є
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
kwonlydefaults™

trainingp 
annotations™ *
 
ЯBЬ
H__inference_DeepSetsInv_layer_call_and_return_conditional_losses_1621438inputs"≈
Љ≤Є
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
kwonlydefaults™

trainingp 
annotations™ *
 
ЯBЬ
H__inference_DeepSetsInv_layer_call_and_return_conditional_losses_1621538inputs"≈
Љ≤Є
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
kwonlydefaults™

trainingp 
annotations™ *
 
†BЭ
H__inference_DeepSetsInv_layer_call_and_return_conditional_losses_1621231input_1"≈
Љ≤Є
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
kwonlydefaults™

trainingp 
annotations™ *
 
†BЭ
H__inference_DeepSetsInv_layer_call_and_return_conditional_losses_1621259input_1"≈
Љ≤Є
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
kwonlydefaults™

trainingp 
annotations™ *
 
ї
A	variables
Btrainable_variables
Cregularization_losses
D	keras_api
E__call__
*F&call_and_return_all_conditional_losses

kernel
bias"
_tf_keras_layer
•
G	variables
Htrainable_variables
Iregularization_losses
J	keras_api
K__call__
*L&call_and_return_all_conditional_losses"
_tf_keras_layer
ї
M	variables
Ntrainable_variables
Oregularization_losses
P	keras_api
Q__call__
*R&call_and_return_all_conditional_losses

kernel
bias"
_tf_keras_layer
•
S	variables
Ttrainable_variables
Uregularization_losses
V	keras_api
W__call__
*X&call_and_return_all_conditional_losses"
_tf_keras_layer
ї
Y	variables
Ztrainable_variables
[regularization_losses
\	keras_api
]__call__
*^&call_and_return_all_conditional_losses

kernel
bias"
_tf_keras_layer
•
_	variables
`trainable_variables
aregularization_losses
b	keras_api
c__call__
*d&call_and_return_all_conditional_losses"
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
≠
enon_trainable_variables

flayers
gmetrics
hlayer_regularization_losses
ilayer_metrics
)	variables
*trainable_variables
+regularization_losses
-__call__
*.&call_and_return_all_conditional_losses
&."call_and_return_conditional_losses"
_generic_user_object
е
jtrace_0
ktrace_1
ltrace_2
mtrace_32ъ
,__inference_sequential_layer_call_fn_1620727
,__inference_sequential_layer_call_fn_1621605
,__inference_sequential_layer_call_fn_1621622
,__inference_sequential_layer_call_fn_1620848њ
ґ≤≤
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
annotations™ *
 zjtrace_0zktrace_1zltrace_2zmtrace_3
—
ntrace_0
otrace_1
ptrace_2
qtrace_32ж
G__inference_sequential_layer_call_and_return_conditional_losses_1621707
G__inference_sequential_layer_call_and_return_conditional_losses_1621792
G__inference_sequential_layer_call_and_return_conditional_losses_1620870
G__inference_sequential_layer_call_and_return_conditional_losses_1620892њ
ґ≤≤
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
annotations™ *
 zntrace_0zotrace_1zptrace_2zqtrace_3
ї
r	variables
strainable_variables
tregularization_losses
u	keras_api
v__call__
*w&call_and_return_all_conditional_losses

kernel
bias"
_tf_keras_layer
ї
x	variables
ytrainable_variables
zregularization_losses
{	keras_api
|__call__
*}&call_and_return_all_conditional_losses

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
∞
~non_trainable_variables

layers
Аmetrics
 Бlayer_regularization_losses
Вlayer_metrics
1	variables
2trainable_variables
3regularization_losses
5__call__
*6&call_and_return_all_conditional_losses
&6"call_and_return_conditional_losses"
_generic_user_object
х
Гtrace_0
Дtrace_1
Еtrace_2
Жtrace_32В
.__inference_sequential_1_layer_call_fn_1620944
.__inference_sequential_1_layer_call_fn_1621805
.__inference_sequential_1_layer_call_fn_1621818
.__inference_sequential_1_layer_call_fn_1621017њ
ґ≤≤
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
annotations™ *
 zГtrace_0zДtrace_1zЕtrace_2zЖtrace_3
б
Зtrace_0
Иtrace_1
Йtrace_2
Кtrace_32о
I__inference_sequential_1_layer_call_and_return_conditional_losses_1621835
I__inference_sequential_1_layer_call_and_return_conditional_losses_1621852
I__inference_sequential_1_layer_call_and_return_conditional_losses_1621031
I__inference_sequential_1_layer_call_and_return_conditional_losses_1621045њ
ґ≤≤
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
annotations™ *
 zЗtrace_0zИtrace_1zЙtrace_2zКtrace_3
“
80
Л1
М2
Н3
О4
П5
Р6
С7
Т8
У9
Ф10
Х11
Ц12
Ч13
Ш14
Щ15
Ъ16
Ы17
Ь18
Э19
Ю20"
trackable_list_wrapper
:	 2	iteration
: 2learning_rate
 "
trackable_dict_wrapper
p
Л0
Н1
П2
С3
У4
Х5
Ч6
Щ7
Ы8
Э9"
trackable_list_wrapper
p
М0
О1
Р2
Т3
Ф4
Ц5
Ш6
Ъ7
Ь8
Ю9"
trackable_list_wrapper
”
Яtrace_0
†trace_1
°trace_2
Ґtrace_3
£trace_4
§trace_5
•trace_6
¶trace_7
Іtrace_8
®trace_92Є
$__inference__update_step_xla_1621543
$__inference__update_step_xla_1621548
$__inference__update_step_xla_1621553
$__inference__update_step_xla_1621558
$__inference__update_step_xla_1621563
$__inference__update_step_xla_1621568
$__inference__update_step_xla_1621573
$__inference__update_step_xla_1621578
$__inference__update_step_xla_1621583
$__inference__update_step_xla_1621588є
Ѓ≤™
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
annotations™ *
 0zЯtrace_0z†trace_1z°trace_2zҐtrace_3z£trace_4z§trace_5z•trace_6z¶trace_7zІtrace_8z®trace_9
ћB…
%__inference_signature_wrapper_1621288input_1"Ф
Н≤Й
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
annotations™ *
 
R
©	variables
™	keras_api

Ђtotal

ђcount"
_tf_keras_metric
c
≠	variables
Ѓ	keras_api

ѓtotal

∞count
±
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
≤
≤non_trainable_variables
≥layers
іmetrics
 µlayer_regularization_losses
ґlayer_metrics
A	variables
Btrainable_variables
Cregularization_losses
E__call__
*F&call_and_return_all_conditional_losses
&F"call_and_return_conditional_losses"
_generic_user_object
н
Јtrace_02ќ
'__inference_dense_layer_call_fn_1621861Ґ
Щ≤Х
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
annotations™ *
 zЈtrace_0
И
Єtrace_02й
B__inference_dense_layer_call_and_return_conditional_losses_1621891Ґ
Щ≤Х
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
annotations™ *
 zЄtrace_0
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
≤
єnon_trainable_variables
Їlayers
їmetrics
 Љlayer_regularization_losses
љlayer_metrics
G	variables
Htrainable_variables
Iregularization_losses
K__call__
*L&call_and_return_all_conditional_losses
&L"call_and_return_conditional_losses"
_generic_user_object
т
Њtrace_02”
,__inference_activation_layer_call_fn_1621896Ґ
Щ≤Х
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
annotations™ *
 zЊtrace_0
Н
њtrace_02о
G__inference_activation_layer_call_and_return_conditional_losses_1621901Ґ
Щ≤Х
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
annotations™ *
 zњtrace_0
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
≤
јnon_trainable_variables
Ѕlayers
¬metrics
 √layer_regularization_losses
ƒlayer_metrics
M	variables
Ntrainable_variables
Oregularization_losses
Q__call__
*R&call_and_return_all_conditional_losses
&R"call_and_return_conditional_losses"
_generic_user_object
п
≈trace_02–
)__inference_dense_1_layer_call_fn_1621910Ґ
Щ≤Х
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
annotations™ *
 z≈trace_0
К
∆trace_02л
D__inference_dense_1_layer_call_and_return_conditional_losses_1621940Ґ
Щ≤Х
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
annotations™ *
 z∆trace_0
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
≤
«non_trainable_variables
»layers
…metrics
  layer_regularization_losses
Ћlayer_metrics
S	variables
Ttrainable_variables
Uregularization_losses
W__call__
*X&call_and_return_all_conditional_losses
&X"call_and_return_conditional_losses"
_generic_user_object
ф
ћtrace_02’
.__inference_activation_1_layer_call_fn_1621945Ґ
Щ≤Х
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
annotations™ *
 zћtrace_0
П
Ќtrace_02р
I__inference_activation_1_layer_call_and_return_conditional_losses_1621950Ґ
Щ≤Х
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
annotations™ *
 zЌtrace_0
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
≤
ќnon_trainable_variables
ѕlayers
–metrics
 —layer_regularization_losses
“layer_metrics
Y	variables
Ztrainable_variables
[regularization_losses
]__call__
*^&call_and_return_all_conditional_losses
&^"call_and_return_conditional_losses"
_generic_user_object
п
”trace_02–
)__inference_dense_2_layer_call_fn_1621959Ґ
Щ≤Х
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
annotations™ *
 z”trace_0
К
‘trace_02л
D__inference_dense_2_layer_call_and_return_conditional_losses_1621989Ґ
Щ≤Х
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
annotations™ *
 z‘trace_0
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
≤
’non_trainable_variables
÷layers
„metrics
 Ўlayer_regularization_losses
ўlayer_metrics
_	variables
`trainable_variables
aregularization_losses
c__call__
*d&call_and_return_all_conditional_losses
&d"call_and_return_conditional_losses"
_generic_user_object
ф
Џtrace_02’
.__inference_activation_2_layer_call_fn_1621994Ґ
Щ≤Х
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
annotations™ *
 zЏtrace_0
П
џtrace_02р
I__inference_activation_2_layer_call_and_return_conditional_losses_1621999Ґ
Щ≤Х
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
annotations™ *
 zџtrace_0
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
ВB€
,__inference_sequential_layer_call_fn_1620727dense_input"њ
ґ≤≤
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
annotations™ *
 
эBъ
,__inference_sequential_layer_call_fn_1621605inputs"њ
ґ≤≤
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
annotations™ *
 
эBъ
,__inference_sequential_layer_call_fn_1621622inputs"њ
ґ≤≤
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
annotations™ *
 
ВB€
,__inference_sequential_layer_call_fn_1620848dense_input"њ
ґ≤≤
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
annotations™ *
 
ШBХ
G__inference_sequential_layer_call_and_return_conditional_losses_1621707inputs"њ
ґ≤≤
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
annotations™ *
 
ШBХ
G__inference_sequential_layer_call_and_return_conditional_losses_1621792inputs"њ
ґ≤≤
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
annotations™ *
 
ЭBЪ
G__inference_sequential_layer_call_and_return_conditional_losses_1620870dense_input"њ
ґ≤≤
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
annotations™ *
 
ЭBЪ
G__inference_sequential_layer_call_and_return_conditional_losses_1620892dense_input"њ
ґ≤≤
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
annotations™ *
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
≤
№non_trainable_variables
Ёlayers
ёmetrics
 яlayer_regularization_losses
аlayer_metrics
r	variables
strainable_variables
tregularization_losses
v__call__
*w&call_and_return_all_conditional_losses
&w"call_and_return_conditional_losses"
_generic_user_object
п
бtrace_02–
)__inference_dense_3_layer_call_fn_1622008Ґ
Щ≤Х
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
annotations™ *
 zбtrace_0
К
вtrace_02л
D__inference_dense_3_layer_call_and_return_conditional_losses_1622019Ґ
Щ≤Х
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
annotations™ *
 zвtrace_0
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
≤
гnon_trainable_variables
дlayers
еmetrics
 жlayer_regularization_losses
зlayer_metrics
x	variables
ytrainable_variables
zregularization_losses
|__call__
*}&call_and_return_all_conditional_losses
&}"call_and_return_conditional_losses"
_generic_user_object
п
иtrace_02–
)__inference_dense_4_layer_call_fn_1622028Ґ
Щ≤Х
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
annotations™ *
 zиtrace_0
К
йtrace_02л
D__inference_dense_4_layer_call_and_return_conditional_losses_1622038Ґ
Щ≤Х
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
annotations™ *
 zйtrace_0
 "
trackable_list_wrapper
.
/0
01"
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_dict_wrapper
ЖBГ
.__inference_sequential_1_layer_call_fn_1620944dense_3_input"њ
ґ≤≤
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
annotations™ *
 
€Bь
.__inference_sequential_1_layer_call_fn_1621805inputs"њ
ґ≤≤
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
annotations™ *
 
€Bь
.__inference_sequential_1_layer_call_fn_1621818inputs"њ
ґ≤≤
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
annotations™ *
 
ЖBГ
.__inference_sequential_1_layer_call_fn_1621017dense_3_input"њ
ґ≤≤
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
annotations™ *
 
ЪBЧ
I__inference_sequential_1_layer_call_and_return_conditional_losses_1621835inputs"њ
ґ≤≤
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
annotations™ *
 
ЪBЧ
I__inference_sequential_1_layer_call_and_return_conditional_losses_1621852inputs"њ
ґ≤≤
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
annotations™ *
 
°BЮ
I__inference_sequential_1_layer_call_and_return_conditional_losses_1621031dense_3_input"њ
ґ≤≤
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
annotations™ *
 
°BЮ
I__inference_sequential_1_layer_call_and_return_conditional_losses_1621045dense_3_input"њ
ґ≤≤
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
annotations™ *
 
#:! 2Adam/m/dense/kernel
#:! 2Adam/v/dense/kernel
: 2Adam/m/dense/bias
: 2Adam/v/dense/bias
%:#  2Adam/m/dense_1/kernel
%:#  2Adam/v/dense_1/kernel
: 2Adam/m/dense_1/bias
: 2Adam/v/dense_1/bias
%:#  2Adam/m/dense_2/kernel
%:#  2Adam/v/dense_2/kernel
: 2Adam/m/dense_2/bias
: 2Adam/v/dense_2/bias
%:#  2Adam/m/dense_3/kernel
%:#  2Adam/v/dense_3/kernel
: 2Adam/m/dense_3/bias
: 2Adam/v/dense_3/bias
%:# 2Adam/m/dense_4/kernel
%:# 2Adam/v/dense_4/kernel
:2Adam/m/dense_4/bias
:2Adam/v/dense_4/bias
щBц
$__inference__update_step_xla_1621543gradientvariable"Ј
Ѓ≤™
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
annotations™ *
 
щBц
$__inference__update_step_xla_1621548gradientvariable"Ј
Ѓ≤™
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
annotations™ *
 
щBц
$__inference__update_step_xla_1621553gradientvariable"Ј
Ѓ≤™
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
annotations™ *
 
щBц
$__inference__update_step_xla_1621558gradientvariable"Ј
Ѓ≤™
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
annotations™ *
 
щBц
$__inference__update_step_xla_1621563gradientvariable"Ј
Ѓ≤™
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
annotations™ *
 
щBц
$__inference__update_step_xla_1621568gradientvariable"Ј
Ѓ≤™
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
annotations™ *
 
щBц
$__inference__update_step_xla_1621573gradientvariable"Ј
Ѓ≤™
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
annotations™ *
 
щBц
$__inference__update_step_xla_1621578gradientvariable"Ј
Ѓ≤™
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
annotations™ *
 
щBц
$__inference__update_step_xla_1621583gradientvariable"Ј
Ѓ≤™
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
annotations™ *
 
щBц
$__inference__update_step_xla_1621588gradientvariable"Ј
Ѓ≤™
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
annotations™ *
 
0
Ђ0
ђ1"
trackable_list_wrapper
.
©	variables"
_generic_user_object
:  (2total
:  (2count
0
ѓ0
∞1"
trackable_list_wrapper
.
≠	variables"
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
џBЎ
'__inference_dense_layer_call_fn_1621861inputs"Ґ
Щ≤Х
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
annotations™ *
 
цBу
B__inference_dense_layer_call_and_return_conditional_losses_1621891inputs"Ґ
Щ≤Х
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
annotations™ *
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
аBЁ
,__inference_activation_layer_call_fn_1621896inputs"Ґ
Щ≤Х
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
annotations™ *
 
ыBш
G__inference_activation_layer_call_and_return_conditional_losses_1621901inputs"Ґ
Щ≤Х
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
annotations™ *
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
ЁBЏ
)__inference_dense_1_layer_call_fn_1621910inputs"Ґ
Щ≤Х
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
annotations™ *
 
шBх
D__inference_dense_1_layer_call_and_return_conditional_losses_1621940inputs"Ґ
Щ≤Х
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
annotations™ *
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
вBя
.__inference_activation_1_layer_call_fn_1621945inputs"Ґ
Щ≤Х
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
annotations™ *
 
эBъ
I__inference_activation_1_layer_call_and_return_conditional_losses_1621950inputs"Ґ
Щ≤Х
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
annotations™ *
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
ЁBЏ
)__inference_dense_2_layer_call_fn_1621959inputs"Ґ
Щ≤Х
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
annotations™ *
 
шBх
D__inference_dense_2_layer_call_and_return_conditional_losses_1621989inputs"Ґ
Щ≤Х
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
annotations™ *
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
вBя
.__inference_activation_2_layer_call_fn_1621994inputs"Ґ
Щ≤Х
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
annotations™ *
 
эBъ
I__inference_activation_2_layer_call_and_return_conditional_losses_1621999inputs"Ґ
Щ≤Х
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
annotations™ *
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
ЁBЏ
)__inference_dense_3_layer_call_fn_1622008inputs"Ґ
Щ≤Х
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
annotations™ *
 
шBх
D__inference_dense_3_layer_call_and_return_conditional_losses_1622019inputs"Ґ
Щ≤Х
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
annotations™ *
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
ЁBЏ
)__inference_dense_4_layer_call_fn_1622028inputs"Ґ
Щ≤Х
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
annotations™ *
 
шBх
D__inference_dense_4_layer_call_and_return_conditional_losses_1622038inputs"Ґ
Щ≤Х
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
annotations™ *
 Ќ
H__inference_DeepSetsInv_layer_call_and_return_conditional_losses_1621231А
DҐA
*Ґ'
%К"
input_1€€€€€€€€€
™

trainingp ",Ґ)
"К
tensor_0€€€€€€€€€
Ъ Ќ
H__inference_DeepSetsInv_layer_call_and_return_conditional_losses_1621259А
DҐA
*Ґ'
%К"
input_1€€€€€€€€€
™

trainingp",Ґ)
"К
tensor_0€€€€€€€€€
Ъ Ћ
H__inference_DeepSetsInv_layer_call_and_return_conditional_losses_1621438
CҐ@
)Ґ&
$К!
inputs€€€€€€€€€
™

trainingp ",Ґ)
"К
tensor_0€€€€€€€€€
Ъ Ћ
H__inference_DeepSetsInv_layer_call_and_return_conditional_losses_1621538
CҐ@
)Ґ&
$К!
inputs€€€€€€€€€
™

trainingp",Ґ)
"К
tensor_0€€€€€€€€€
Ъ ¶
-__inference_DeepSetsInv_layer_call_fn_1621100u
DҐA
*Ґ'
%К"
input_1€€€€€€€€€
™

trainingp "!К
unknown€€€€€€€€€¶
-__inference_DeepSetsInv_layer_call_fn_1621203u
DҐA
*Ґ'
%К"
input_1€€€€€€€€€
™

trainingp"!К
unknown€€€€€€€€€•
-__inference_DeepSetsInv_layer_call_fn_1621313t
CҐ@
)Ґ&
$К!
inputs€€€€€€€€€
™

trainingp "!К
unknown€€€€€€€€€•
-__inference_DeepSetsInv_layer_call_fn_1621338t
CҐ@
)Ґ&
$К!
inputs€€€€€€€€€
™

trainingp"!К
unknown€€€€€€€€€Я
$__inference__update_step_xla_1621543wqҐn
gҐd
"К
gradient€€€€€€€€€ 
4Т1	Ґ
ъ 
А
p
` VariableSpec 
`ај≠√ў∆?
™ "
 О
$__inference__update_step_xla_1621548f`Ґ]
VҐS
К
gradient 
0Т-	Ґ
ъ 
А
p
` VariableSpec 
`аљђ√ў∆?
™ "
 Я
$__inference__update_step_xla_1621553wqҐn
gҐd
"К
gradient€€€€€€€€€ 
4Т1	Ґ
ъ  
А
p
` VariableSpec 
`†ж∆√ў∆?
™ "
 О
$__inference__update_step_xla_1621558f`Ґ]
VҐS
К
gradient 
0Т-	Ґ
ъ 
А
p
` VariableSpec 
`ан∆√ў∆?
™ "
 Я
$__inference__update_step_xla_1621563wqҐn
gҐd
"К
gradient€€€€€€€€€ 
4Т1	Ґ
ъ  
А
p
` VariableSpec 
`†ЬН√ў∆?
™ "
 О
$__inference__update_step_xla_1621568f`Ґ]
VҐS
К
gradient 
0Т-	Ґ
ъ 
А
p
` VariableSpec 
`а£Н√ў∆?
™ "
 Ц
$__inference__update_step_xla_1621573nhҐe
^Ґ[
К
gradient  
4Т1	Ґ
ъ  
А
p
` VariableSpec 
`АіШ√ў∆?
™ "
 О
$__inference__update_step_xla_1621578f`Ґ]
VҐS
К
gradient 
0Т-	Ґ
ъ 
А
p
` VariableSpec 
`јїШ√ў∆?
™ "
 Ц
$__inference__update_step_xla_1621583nhҐe
^Ґ[
К
gradient 
4Т1	Ґ
ъ 
А
p
` VariableSpec 
`аЮЭ√ў∆?
™ "
 О
$__inference__update_step_xla_1621588f`Ґ]
VҐS
К
gradient
0Т-	Ґ
ъ
А
p
` VariableSpec 
`†¶Э√ў∆?
™ "
 Э
"__inference__wrapped_model_1620575w
4Ґ1
*Ґ'
%К"
input_1€€€€€€€€€
™ "3™0
.
output_1"К
output_1€€€€€€€€€і
I__inference_activation_1_layer_call_and_return_conditional_losses_1621950g3Ґ0
)Ґ&
$К!
inputs€€€€€€€€€ 
™ "0Ґ-
&К#
tensor_0€€€€€€€€€ 
Ъ О
.__inference_activation_1_layer_call_fn_1621945\3Ґ0
)Ґ&
$К!
inputs€€€€€€€€€ 
™ "%К"
unknown€€€€€€€€€ і
I__inference_activation_2_layer_call_and_return_conditional_losses_1621999g3Ґ0
)Ґ&
$К!
inputs€€€€€€€€€ 
™ "0Ґ-
&К#
tensor_0€€€€€€€€€ 
Ъ О
.__inference_activation_2_layer_call_fn_1621994\3Ґ0
)Ґ&
$К!
inputs€€€€€€€€€ 
™ "%К"
unknown€€€€€€€€€ ≤
G__inference_activation_layer_call_and_return_conditional_losses_1621901g3Ґ0
)Ґ&
$К!
inputs€€€€€€€€€ 
™ "0Ґ-
&К#
tensor_0€€€€€€€€€ 
Ъ М
,__inference_activation_layer_call_fn_1621896\3Ґ0
)Ґ&
$К!
inputs€€€€€€€€€ 
™ "%К"
unknown€€€€€€€€€ ≥
D__inference_dense_1_layer_call_and_return_conditional_losses_1621940k3Ґ0
)Ґ&
$К!
inputs€€€€€€€€€ 
™ "0Ґ-
&К#
tensor_0€€€€€€€€€ 
Ъ Н
)__inference_dense_1_layer_call_fn_1621910`3Ґ0
)Ґ&
$К!
inputs€€€€€€€€€ 
™ "%К"
unknown€€€€€€€€€ ≥
D__inference_dense_2_layer_call_and_return_conditional_losses_1621989k3Ґ0
)Ґ&
$К!
inputs€€€€€€€€€ 
™ "0Ґ-
&К#
tensor_0€€€€€€€€€ 
Ъ Н
)__inference_dense_2_layer_call_fn_1621959`3Ґ0
)Ґ&
$К!
inputs€€€€€€€€€ 
™ "%К"
unknown€€€€€€€€€ Ђ
D__inference_dense_3_layer_call_and_return_conditional_losses_1622019c/Ґ,
%Ґ"
 К
inputs€€€€€€€€€ 
™ ",Ґ)
"К
tensor_0€€€€€€€€€ 
Ъ Е
)__inference_dense_3_layer_call_fn_1622008X/Ґ,
%Ґ"
 К
inputs€€€€€€€€€ 
™ "!К
unknown€€€€€€€€€ Ђ
D__inference_dense_4_layer_call_and_return_conditional_losses_1622038c/Ґ,
%Ґ"
 К
inputs€€€€€€€€€ 
™ ",Ґ)
"К
tensor_0€€€€€€€€€
Ъ Е
)__inference_dense_4_layer_call_fn_1622028X/Ґ,
%Ґ"
 К
inputs€€€€€€€€€ 
™ "!К
unknown€€€€€€€€€±
B__inference_dense_layer_call_and_return_conditional_losses_1621891k3Ґ0
)Ґ&
$К!
inputs€€€€€€€€€
™ "0Ґ-
&К#
tensor_0€€€€€€€€€ 
Ъ Л
'__inference_dense_layer_call_fn_1621861`3Ґ0
)Ґ&
$К!
inputs€€€€€€€€€
™ "%К"
unknown€€€€€€€€€ Ѕ
I__inference_sequential_1_layer_call_and_return_conditional_losses_1621031t>Ґ;
4Ґ1
'К$
dense_3_input€€€€€€€€€ 
p 

 
™ ",Ґ)
"К
tensor_0€€€€€€€€€
Ъ Ѕ
I__inference_sequential_1_layer_call_and_return_conditional_losses_1621045t>Ґ;
4Ґ1
'К$
dense_3_input€€€€€€€€€ 
p

 
™ ",Ґ)
"К
tensor_0€€€€€€€€€
Ъ Ї
I__inference_sequential_1_layer_call_and_return_conditional_losses_1621835m7Ґ4
-Ґ*
 К
inputs€€€€€€€€€ 
p 

 
™ ",Ґ)
"К
tensor_0€€€€€€€€€
Ъ Ї
I__inference_sequential_1_layer_call_and_return_conditional_losses_1621852m7Ґ4
-Ґ*
 К
inputs€€€€€€€€€ 
p

 
™ ",Ґ)
"К
tensor_0€€€€€€€€€
Ъ Ы
.__inference_sequential_1_layer_call_fn_1620944i>Ґ;
4Ґ1
'К$
dense_3_input€€€€€€€€€ 
p 

 
™ "!К
unknown€€€€€€€€€Ы
.__inference_sequential_1_layer_call_fn_1621017i>Ґ;
4Ґ1
'К$
dense_3_input€€€€€€€€€ 
p

 
™ "!К
unknown€€€€€€€€€Ф
.__inference_sequential_1_layer_call_fn_1621805b7Ґ4
-Ґ*
 К
inputs€€€€€€€€€ 
p 

 
™ "!К
unknown€€€€€€€€€Ф
.__inference_sequential_1_layer_call_fn_1621818b7Ґ4
-Ґ*
 К
inputs€€€€€€€€€ 
p

 
™ "!К
unknown€€€€€€€€€«
G__inference_sequential_layer_call_and_return_conditional_losses_1620870|@Ґ=
6Ґ3
)К&
dense_input€€€€€€€€€
p 

 
™ "0Ґ-
&К#
tensor_0€€€€€€€€€ 
Ъ «
G__inference_sequential_layer_call_and_return_conditional_losses_1620892|@Ґ=
6Ґ3
)К&
dense_input€€€€€€€€€
p

 
™ "0Ґ-
&К#
tensor_0€€€€€€€€€ 
Ъ ¬
G__inference_sequential_layer_call_and_return_conditional_losses_1621707w;Ґ8
1Ґ.
$К!
inputs€€€€€€€€€
p 

 
™ "0Ґ-
&К#
tensor_0€€€€€€€€€ 
Ъ ¬
G__inference_sequential_layer_call_and_return_conditional_losses_1621792w;Ґ8
1Ґ.
$К!
inputs€€€€€€€€€
p

 
™ "0Ґ-
&К#
tensor_0€€€€€€€€€ 
Ъ °
,__inference_sequential_layer_call_fn_1620727q@Ґ=
6Ґ3
)К&
dense_input€€€€€€€€€
p 

 
™ "%К"
unknown€€€€€€€€€ °
,__inference_sequential_layer_call_fn_1620848q@Ґ=
6Ґ3
)К&
dense_input€€€€€€€€€
p

 
™ "%К"
unknown€€€€€€€€€ Ь
,__inference_sequential_layer_call_fn_1621605l;Ґ8
1Ґ.
$К!
inputs€€€€€€€€€
p 

 
™ "%К"
unknown€€€€€€€€€ Ь
,__inference_sequential_layer_call_fn_1621622l;Ґ8
1Ґ.
$К!
inputs€€€€€€€€€
p

 
™ "%К"
unknown€€€€€€€€€ ђ
%__inference_signature_wrapper_1621288В
?Ґ<
Ґ 
5™2
0
input_1%К"
input_1€€€€€€€€€"3™0
.
output_1"К
output_1€€€€€€€€€
ƒ/
��
D
AddV2
x"T
y"T
z"T"
Ttype:
2	��
^
AssignVariableOp
resource
value"dtype"
dtypetype"
validate_shapebool( �
�
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
resource�
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
�
Mean

input"T
reduction_indices"Tidx
output"T"
	keep_dimsbool( ""
Ttype:
2	"
Tidxtype0:
2	
�
MergeV2Checkpoints
checkpoint_prefixes
destination_prefix"
delete_old_dirsbool("
allow_missing_filesbool( �
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
2	�
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
dtypetype�
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
list(type)(0�
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
list(type)(0�
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
output"out_type��out_type"	
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
�
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
executor_typestring ��
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
�
VarHandleOp
resource"
	containerstring "
shared_namestring "
dtypetype"
shapeshape"#
allowed_deviceslist(string)
 �"serve*2.14.02v2.14.0-rc1-21-g4dacf3f368e8��+
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
�
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
�
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
�
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
�
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
�
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
�
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
�
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
�
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
�
&prune_low_magnitude_dense/pruning_stepVarHandleOp*
_output_shapes
: *
dtype0	*
shape: *7
shared_name(&prune_low_magnitude_dense/pruning_step
�
:prune_low_magnitude_dense/pruning_step/Read/ReadVariableOpReadVariableOp&prune_low_magnitude_dense/pruning_step*
_output_shapes
: *
dtype0	
�
#prune_low_magnitude_dense/thresholdVarHandleOp*
_output_shapes
: *
dtype0*
shape: *4
shared_name%#prune_low_magnitude_dense/threshold
�
7prune_low_magnitude_dense/threshold/Read/ReadVariableOpReadVariableOp#prune_low_magnitude_dense/threshold*
_output_shapes
: *
dtype0
�
prune_low_magnitude_dense/maskVarHandleOp*
_output_shapes
: *
dtype0*
shape
: */
shared_name prune_low_magnitude_dense/mask
�
2prune_low_magnitude_dense/mask/Read/ReadVariableOpReadVariableOpprune_low_magnitude_dense/mask*
_output_shapes

: *
dtype0
�
$prune_low_magnitude_rho/pruning_stepVarHandleOp*
_output_shapes
: *
dtype0	*
shape: *5
shared_name&$prune_low_magnitude_rho/pruning_step
�
8prune_low_magnitude_rho/pruning_step/Read/ReadVariableOpReadVariableOp$prune_low_magnitude_rho/pruning_step*
_output_shapes
: *
dtype0	
�
!prune_low_magnitude_rho/thresholdVarHandleOp*
_output_shapes
: *
dtype0*
shape: *2
shared_name#!prune_low_magnitude_rho/threshold
�
5prune_low_magnitude_rho/threshold/Read/ReadVariableOpReadVariableOp!prune_low_magnitude_rho/threshold*
_output_shapes
: *
dtype0
�
prune_low_magnitude_rho/maskVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *-
shared_nameprune_low_magnitude_rho/mask
�
0prune_low_magnitude_rho/mask/Read/ReadVariableOpReadVariableOpprune_low_magnitude_rho/mask*
_output_shapes

:  *
dtype0
�
%prune_low_magnitude_phi3/pruning_stepVarHandleOp*
_output_shapes
: *
dtype0	*
shape: *6
shared_name'%prune_low_magnitude_phi3/pruning_step
�
9prune_low_magnitude_phi3/pruning_step/Read/ReadVariableOpReadVariableOp%prune_low_magnitude_phi3/pruning_step*
_output_shapes
: *
dtype0	
�
"prune_low_magnitude_phi3/thresholdVarHandleOp*
_output_shapes
: *
dtype0*
shape: *3
shared_name$"prune_low_magnitude_phi3/threshold
�
6prune_low_magnitude_phi3/threshold/Read/ReadVariableOpReadVariableOp"prune_low_magnitude_phi3/threshold*
_output_shapes
: *
dtype0
�
prune_low_magnitude_phi3/maskVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *.
shared_nameprune_low_magnitude_phi3/mask
�
1prune_low_magnitude_phi3/mask/Read/ReadVariableOpReadVariableOpprune_low_magnitude_phi3/mask*
_output_shapes

:  *
dtype0
�
%prune_low_magnitude_phi2/pruning_stepVarHandleOp*
_output_shapes
: *
dtype0	*
shape: *6
shared_name'%prune_low_magnitude_phi2/pruning_step
�
9prune_low_magnitude_phi2/pruning_step/Read/ReadVariableOpReadVariableOp%prune_low_magnitude_phi2/pruning_step*
_output_shapes
: *
dtype0	
�
"prune_low_magnitude_phi2/thresholdVarHandleOp*
_output_shapes
: *
dtype0*
shape: *3
shared_name$"prune_low_magnitude_phi2/threshold
�
6prune_low_magnitude_phi2/threshold/Read/ReadVariableOpReadVariableOp"prune_low_magnitude_phi2/threshold*
_output_shapes
: *
dtype0
�
prune_low_magnitude_phi2/maskVarHandleOp*
_output_shapes
: *
dtype0*
shape
:  *.
shared_nameprune_low_magnitude_phi2/mask
�
1prune_low_magnitude_phi2/mask/Read/ReadVariableOpReadVariableOpprune_low_magnitude_phi2/mask*
_output_shapes

:  *
dtype0
�
%prune_low_magnitude_phi1/pruning_stepVarHandleOp*
_output_shapes
: *
dtype0	*
shape: *6
shared_name'%prune_low_magnitude_phi1/pruning_step
�
9prune_low_magnitude_phi1/pruning_step/Read/ReadVariableOpReadVariableOp%prune_low_magnitude_phi1/pruning_step*
_output_shapes
: *
dtype0	
�
"prune_low_magnitude_phi1/thresholdVarHandleOp*
_output_shapes
: *
dtype0*
shape: *3
shared_name$"prune_low_magnitude_phi1/threshold
�
6prune_low_magnitude_phi1/threshold/Read/ReadVariableOpReadVariableOp"prune_low_magnitude_phi1/threshold*
_output_shapes
: *
dtype0
�
prune_low_magnitude_phi1/maskVarHandleOp*
_output_shapes
: *
dtype0*
shape
: *.
shared_nameprune_low_magnitude_phi1/mask
�
1prune_low_magnitude_phi1/mask/Read/ReadVariableOpReadVariableOpprune_low_magnitude_phi1/mask*
_output_shapes

: *
dtype0
�
serving_default_input_layerPlaceholder*+
_output_shapes
:��������� *
dtype0* 
shape:��������� 
�
StatefulPartitionedCallStatefulPartitionedCallserving_default_input_layerphi1/kernelprune_low_magnitude_phi1/mask	phi1/biasphi2/kernelprune_low_magnitude_phi2/mask	phi2/biasphi3/kernelprune_low_magnitude_phi3/mask	phi3/bias
rho/kernelprune_low_magnitude_rho/maskrho/biasdense/kernelprune_low_magnitude_dense/mask
dense/bias*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:���������*,
_read_only_resource_inputs

	*2
config_proto" 

CPU

GPU2 *0J 8� *-
f(R&
$__inference_signature_wrapper_566064

NoOpNoOp
��
ConstConst"/device:CPU:0*
_output_shapes
: *
dtype0*��
value�B� B�
�
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
�
	variables
trainable_variables
regularization_losses
	keras_api
__call__
*&call_and_return_all_conditional_losses
pruning_vars
	layer
prunable_weights
 mask
!	threshold
"pruning_step*
�
#	variables
$trainable_variables
%regularization_losses
&	keras_api
'__call__
*(&call_and_return_all_conditional_losses
)	quantizer* 
�
*	variables
+trainable_variables
,regularization_losses
-	keras_api
.__call__
*/&call_and_return_all_conditional_losses
0pruning_vars
	1layer
2prunable_weights
3mask
4	threshold
5pruning_step*
�
6	variables
7trainable_variables
8regularization_losses
9	keras_api
:__call__
*;&call_and_return_all_conditional_losses
<	quantizer* 
�
=	variables
>trainable_variables
?regularization_losses
@	keras_api
A__call__
*B&call_and_return_all_conditional_losses
Cpruning_vars
	Dlayer
Eprunable_weights
Fmask
G	threshold
Hpruning_step*
�
I	variables
Jtrainable_variables
Kregularization_losses
L	keras_api
M__call__
*N&call_and_return_all_conditional_losses
O	quantizer* 
�
P	variables
Qtrainable_variables
Rregularization_losses
S	keras_api
T__call__
*U&call_and_return_all_conditional_losses
V
activation
V	quantizer* 
�
W	variables
Xtrainable_variables
Yregularization_losses
Z	keras_api
[__call__
*\&call_and_return_all_conditional_losses* 
�
]	variables
^trainable_variables
_regularization_losses
`	keras_api
a__call__
*b&call_and_return_all_conditional_losses
cpruning_vars
	dlayer
eprunable_weights
fmask
g	threshold
hpruning_step*
�
i	variables
jtrainable_variables
kregularization_losses
l	keras_api
m__call__
*n&call_and_return_all_conditional_losses
o	quantizer* 
�
p	variables
qtrainable_variables
rregularization_losses
s	keras_api
t__call__
*u&call_and_return_all_conditional_losses
vpruning_vars
	wlayer
xprunable_weights
ymask
z	threshold
{pruning_step*
�
|	variables
}trainable_variables
~regularization_losses
	keras_api
�__call__
+�&call_and_return_all_conditional_losses* 
�
�0
�1
 2
!3
"4
�5
�6
37
48
59
�10
�11
F12
G13
H14
�15
�16
f17
g18
h19
�20
�21
y22
z23
{24*
T
�0
�1
�2
�3
�4
�5
�6
�7
�8
�9*
* 
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
	variables
trainable_variables
regularization_losses
__call__
_default_save_signature
*&call_and_return_all_conditional_losses
&"call_and_return_conditional_losses*

�trace_0
�trace_1* 

�trace_0
�trace_1* 
* 
�
�
_variables
�_iterations
�_learning_rate
�_index_dict
�
_momentums
�_velocities
�_update_step_xla*

�serving_default* 
)
�0
�1
 2
!3
"4*

�0
�1*
* 
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
	variables
trainable_variables
regularization_losses
__call__
*&call_and_return_all_conditional_losses
&"call_and_return_conditional_losses*

�trace_0
�trace_1* 

�trace_0
�trace_1* 

�0*
�
�	variables
�trainable_variables
�regularization_losses
�	keras_api
�__call__
+�&call_and_return_all_conditional_losses
�kernel_quantizer_internal
�bias_quantizer_internal
�
quantizers
�kernel
	�bias*

�0*
ke
VARIABLE_VALUEprune_low_magnitude_phi1/mask4layer_with_weights-0/mask/.ATTRIBUTES/VARIABLE_VALUE*
uo
VARIABLE_VALUE"prune_low_magnitude_phi1/threshold9layer_with_weights-0/threshold/.ATTRIBUTES/VARIABLE_VALUE*
{u
VARIABLE_VALUE%prune_low_magnitude_phi1/pruning_step<layer_with_weights-0/pruning_step/.ATTRIBUTES/VARIABLE_VALUE*
* 
* 
* 
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
#	variables
$trainable_variables
%regularization_losses
'__call__
*(&call_and_return_all_conditional_losses
&("call_and_return_conditional_losses* 

�trace_0* 

�trace_0* 
* 
)
�0
�1
32
43
54*

�0
�1*
* 
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
*	variables
+trainable_variables
,regularization_losses
.__call__
*/&call_and_return_all_conditional_losses
&/"call_and_return_conditional_losses*

�trace_0
�trace_1* 

�trace_0
�trace_1* 

�0*
�
�	variables
�trainable_variables
�regularization_losses
�	keras_api
�__call__
+�&call_and_return_all_conditional_losses
�kernel_quantizer_internal
�bias_quantizer_internal
�
quantizers
�kernel
	�bias*

�0*
ke
VARIABLE_VALUEprune_low_magnitude_phi2/mask4layer_with_weights-1/mask/.ATTRIBUTES/VARIABLE_VALUE*
uo
VARIABLE_VALUE"prune_low_magnitude_phi2/threshold9layer_with_weights-1/threshold/.ATTRIBUTES/VARIABLE_VALUE*
{u
VARIABLE_VALUE%prune_low_magnitude_phi2/pruning_step<layer_with_weights-1/pruning_step/.ATTRIBUTES/VARIABLE_VALUE*
* 
* 
* 
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
6	variables
7trainable_variables
8regularization_losses
:__call__
*;&call_and_return_all_conditional_losses
&;"call_and_return_conditional_losses* 

�trace_0* 

�trace_0* 
* 
)
�0
�1
F2
G3
H4*

�0
�1*
* 
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
=	variables
>trainable_variables
?regularization_losses
A__call__
*B&call_and_return_all_conditional_losses
&B"call_and_return_conditional_losses*

�trace_0
�trace_1* 

�trace_0
�trace_1* 

�0*
�
�	variables
�trainable_variables
�regularization_losses
�	keras_api
�__call__
+�&call_and_return_all_conditional_losses
�kernel_quantizer_internal
�bias_quantizer_internal
�
quantizers
�kernel
	�bias*

�0*
ke
VARIABLE_VALUEprune_low_magnitude_phi3/mask4layer_with_weights-2/mask/.ATTRIBUTES/VARIABLE_VALUE*
uo
VARIABLE_VALUE"prune_low_magnitude_phi3/threshold9layer_with_weights-2/threshold/.ATTRIBUTES/VARIABLE_VALUE*
{u
VARIABLE_VALUE%prune_low_magnitude_phi3/pruning_step<layer_with_weights-2/pruning_step/.ATTRIBUTES/VARIABLE_VALUE*
* 
* 
* 
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
I	variables
Jtrainable_variables
Kregularization_losses
M__call__
*N&call_and_return_all_conditional_losses
&N"call_and_return_conditional_losses* 

�trace_0* 

�trace_0* 
* 
* 
* 
* 
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
P	variables
Qtrainable_variables
Rregularization_losses
T__call__
*U&call_and_return_all_conditional_losses
&U"call_and_return_conditional_losses* 

�trace_0* 

�trace_0* 
* 
* 
* 
* 
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
W	variables
Xtrainable_variables
Yregularization_losses
[__call__
*\&call_and_return_all_conditional_losses
&\"call_and_return_conditional_losses* 

�trace_0* 

�trace_0* 
)
�0
�1
f2
g3
h4*

�0
�1*
* 
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
]	variables
^trainable_variables
_regularization_losses
a__call__
*b&call_and_return_all_conditional_losses
&b"call_and_return_conditional_losses*

�trace_0
�trace_1* 

�trace_0
�trace_1* 

�0*
�
�	variables
�trainable_variables
�regularization_losses
�	keras_api
�__call__
+�&call_and_return_all_conditional_losses
�kernel_quantizer_internal
�bias_quantizer_internal
�
quantizers
�kernel
	�bias*

�0*
jd
VARIABLE_VALUEprune_low_magnitude_rho/mask4layer_with_weights-3/mask/.ATTRIBUTES/VARIABLE_VALUE*
tn
VARIABLE_VALUE!prune_low_magnitude_rho/threshold9layer_with_weights-3/threshold/.ATTRIBUTES/VARIABLE_VALUE*
zt
VARIABLE_VALUE$prune_low_magnitude_rho/pruning_step<layer_with_weights-3/pruning_step/.ATTRIBUTES/VARIABLE_VALUE*
* 
* 
* 
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
i	variables
jtrainable_variables
kregularization_losses
m__call__
*n&call_and_return_all_conditional_losses
&n"call_and_return_conditional_losses* 

�trace_0* 

�trace_0* 
* 
)
�0
�1
y2
z3
{4*

�0
�1*
* 
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
p	variables
qtrainable_variables
rregularization_losses
t__call__
*u&call_and_return_all_conditional_losses
&u"call_and_return_conditional_losses*

�trace_0
�trace_1* 

�trace_0
�trace_1* 

�0*
�
�	variables
�trainable_variables
�regularization_losses
�	keras_api
�__call__
+�&call_and_return_all_conditional_losses
�kernel
	�bias*

�0*
lf
VARIABLE_VALUEprune_low_magnitude_dense/mask4layer_with_weights-4/mask/.ATTRIBUTES/VARIABLE_VALUE*
vp
VARIABLE_VALUE#prune_low_magnitude_dense/threshold9layer_with_weights-4/threshold/.ATTRIBUTES/VARIABLE_VALUE*
|v
VARIABLE_VALUE&prune_low_magnitude_dense/pruning_step<layer_with_weights-4/pruning_step/.ATTRIBUTES/VARIABLE_VALUE*
* 
* 
* 
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
|	variables
}trainable_variables
~regularization_losses
�__call__
+�&call_and_return_all_conditional_losses
'�"call_and_return_conditional_losses* 

�trace_0* 

�trace_0* 
KE
VARIABLE_VALUEphi1/kernel&variables/0/.ATTRIBUTES/VARIABLE_VALUE*
IC
VARIABLE_VALUE	phi1/bias&variables/1/.ATTRIBUTES/VARIABLE_VALUE*
KE
VARIABLE_VALUEphi2/kernel&variables/5/.ATTRIBUTES/VARIABLE_VALUE*
IC
VARIABLE_VALUE	phi2/bias&variables/6/.ATTRIBUTES/VARIABLE_VALUE*
LF
VARIABLE_VALUEphi3/kernel'variables/10/.ATTRIBUTES/VARIABLE_VALUE*
JD
VARIABLE_VALUE	phi3/bias'variables/11/.ATTRIBUTES/VARIABLE_VALUE*
KE
VARIABLE_VALUE
rho/kernel'variables/15/.ATTRIBUTES/VARIABLE_VALUE*
IC
VARIABLE_VALUErho/bias'variables/16/.ATTRIBUTES/VARIABLE_VALUE*
MG
VARIABLE_VALUEdense/kernel'variables/20/.ATTRIBUTES/VARIABLE_VALUE*
KE
VARIABLE_VALUE
dense/bias'variables/21/.ATTRIBUTES/VARIABLE_VALUE*
r
 0
!1
"2
33
44
55
F6
G7
H8
f9
g10
h11
y12
z13
{14*
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
�0
�1*
* 
* 
* 
* 
* 
* 
�
�0
�1
�2
�3
�4
�5
�6
�7
�8
�9
�10
�11
�12
�13
�14
�15
�16
�17
�18
�19
�20*
SM
VARIABLE_VALUE	iteration0optimizer/_iterations/.ATTRIBUTES/VARIABLE_VALUE*
ZT
VARIABLE_VALUElearning_rate3optimizer/_learning_rate/.ATTRIBUTES/VARIABLE_VALUE*
* 
T
�0
�1
�2
�3
�4
�5
�6
�7
�8
�9*
T
�0
�1
�2
�3
�4
�5
�6
�7
�8
�9*
�
�trace_0
�trace_1
�trace_2
�trace_3
�trace_4
�trace_5
�trace_6
�trace_7
�trace_8
�trace_9* 
* 

 0
!1
"2*

0*
* 
* 
* 
* 
* 
* 
* 

�0
 1
!2*

�0
�1*

�0
�1*
* 
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
�	variables
�trainable_variables
�regularization_losses
�__call__
+�&call_and_return_all_conditional_losses
'�"call_and_return_conditional_losses*
* 
* 
* 
* 

�0
�1* 
* 
* 
* 
* 
* 
* 
* 

30
41
52*

10*
* 
* 
* 
* 
* 
* 
* 

�0
31
42*

�0
�1*

�0
�1*
* 
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
�	variables
�trainable_variables
�regularization_losses
�__call__
+�&call_and_return_all_conditional_losses
'�"call_and_return_conditional_losses*
* 
* 
* 
* 

�0
�1* 
* 
* 
* 
* 
* 
* 
* 

F0
G1
H2*

D0*
* 
* 
* 
* 
* 
* 
* 

�0
F1
G2*

�0
�1*

�0
�1*
* 
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
�	variables
�trainable_variables
�regularization_losses
�__call__
+�&call_and_return_all_conditional_losses
'�"call_and_return_conditional_losses*
* 
* 
* 
* 

�0
�1* 
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

f0
g1
h2*

d0*
* 
* 
* 
* 
* 
* 
* 

�0
f1
g2*

�0
�1*

�0
�1*
* 
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
�	variables
�trainable_variables
�regularization_losses
�__call__
+�&call_and_return_all_conditional_losses
'�"call_and_return_conditional_losses*
* 
* 
* 
* 

�0
�1* 
* 
* 
* 
* 
* 
* 
* 

y0
z1
{2*

w0*
* 
* 
* 
* 
* 
* 
* 

�0
y1
z2*

�0
�1*

�0
�1*
* 
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
�	variables
�trainable_variables
�regularization_losses
�__call__
+�&call_and_return_all_conditional_losses
'�"call_and_return_conditional_losses*
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
�	variables
�	keras_api

�total

�count*
M
�	variables
�	keras_api

�total

�count
�
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

�0
�1*

�	variables*
UO
VARIABLE_VALUEtotal_14keras_api/metrics/0/total/.ATTRIBUTES/VARIABLE_VALUE*
UO
VARIABLE_VALUEcount_14keras_api/metrics/0/count/.ATTRIBUTES/VARIABLE_VALUE*

�0
�1*

�	variables*
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
�
StatefulPartitionedCall_1StatefulPartitionedCallsaver_filenameprune_low_magnitude_phi1/mask"prune_low_magnitude_phi1/threshold%prune_low_magnitude_phi1/pruning_stepprune_low_magnitude_phi2/mask"prune_low_magnitude_phi2/threshold%prune_low_magnitude_phi2/pruning_stepprune_low_magnitude_phi3/mask"prune_low_magnitude_phi3/threshold%prune_low_magnitude_phi3/pruning_stepprune_low_magnitude_rho/mask!prune_low_magnitude_rho/threshold$prune_low_magnitude_rho/pruning_stepprune_low_magnitude_dense/mask#prune_low_magnitude_dense/threshold&prune_low_magnitude_dense/pruning_stepphi1/kernel	phi1/biasphi2/kernel	phi2/biasphi3/kernel	phi3/bias
rho/kernelrho/biasdense/kernel
dense/bias	iterationlearning_rateAdam/m/phi1/kernelAdam/v/phi1/kernelAdam/m/phi1/biasAdam/v/phi1/biasAdam/m/phi2/kernelAdam/v/phi2/kernelAdam/m/phi2/biasAdam/v/phi2/biasAdam/m/phi3/kernelAdam/v/phi3/kernelAdam/m/phi3/biasAdam/v/phi3/biasAdam/m/rho/kernelAdam/v/rho/kernelAdam/m/rho/biasAdam/v/rho/biasAdam/m/dense/kernelAdam/v/dense/kernelAdam/m/dense/biasAdam/v/dense/biastotal_1count_1totalcountConst*@
Tin9
725*
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
GPU2 *0J 8� *(
f#R!
__inference__traced_save_568363
�
StatefulPartitionedCall_2StatefulPartitionedCallsaver_filenameprune_low_magnitude_phi1/mask"prune_low_magnitude_phi1/threshold%prune_low_magnitude_phi1/pruning_stepprune_low_magnitude_phi2/mask"prune_low_magnitude_phi2/threshold%prune_low_magnitude_phi2/pruning_stepprune_low_magnitude_phi3/mask"prune_low_magnitude_phi3/threshold%prune_low_magnitude_phi3/pruning_stepprune_low_magnitude_rho/mask!prune_low_magnitude_rho/threshold$prune_low_magnitude_rho/pruning_stepprune_low_magnitude_dense/mask#prune_low_magnitude_dense/threshold&prune_low_magnitude_dense/pruning_stepphi1/kernel	phi1/biasphi2/kernel	phi2/biasphi3/kernel	phi3/bias
rho/kernelrho/biasdense/kernel
dense/bias	iterationlearning_rateAdam/m/phi1/kernelAdam/v/phi1/kernelAdam/m/phi1/biasAdam/v/phi1/biasAdam/m/phi2/kernelAdam/v/phi2/kernelAdam/m/phi2/biasAdam/v/phi2/biasAdam/m/phi3/kernelAdam/v/phi3/kernelAdam/m/phi3/biasAdam/v/phi3/biasAdam/m/rho/kernelAdam/v/rho/kernelAdam/m/rho/biasAdam/v/rho/biasAdam/m/dense/kernelAdam/v/dense/kernelAdam/m/dense/biasAdam/v/dense/biastotal_1count_1totalcount*?
Tin8
624*
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
GPU2 *0J 8� *+
f&R$
"__inference__traced_restore_568525��)
�
�
3assert_greater_equal_Assert_AssertGuard_true_565199M
Iassert_greater_equal_assert_assertguard_identity_assert_greater_equal_all
7
3assert_greater_equal_assert_assertguard_placeholder	9
5assert_greater_equal_assert_assertguard_placeholder_1	6
2assert_greater_equal_assert_assertguard_identity_1
r
,assert_greater_equal/Assert/AssertGuard/NoOpNoOp*&
 _has_manual_control_dependencies(*
_output_shapes
 �
0assert_greater_equal/Assert/AssertGuard/IdentityIdentityIassert_greater_equal_assert_assertguard_identity_assert_greater_equal_all-^assert_greater_equal/Assert/AssertGuard/NoOp*
T0
*
_output_shapes
: �
2assert_greater_equal/Assert/AssertGuard/Identity_1Identity9assert_greater_equal/Assert/AssertGuard/Identity:output:0*
T0
*
_output_shapes
: "q
2assert_greater_equal_assert_assertguard_identity_1;assert_greater_equal/Assert/AssertGuard/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes
: : : :

_output_shapes
: :

_output_shapes
: :P L

_output_shapes
: 
2
_user_specified_nameassert_greater_equal/All
�
�
cond_false_566637
cond_placeholder
cond_placeholder_1
cond_placeholder_2
cond_placeholder_3
cond_identity_logicaland_1

cond_identity_1
O
	cond/NoOpNoOp*&
 _has_manual_control_dependencies(*
_output_shapes
 b
cond/IdentityIdentitycond_identity_logicaland_1
^cond/NoOp*
T0
*
_output_shapes
: T
cond/Identity_1Identitycond/Identity:output:0*
T0
*
_output_shapes
: "+
cond_identity_1cond/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes

: : : : : :D@

_output_shapes
: 
&
_user_specified_nameLogicalAnd_1
�
p
T__inference_global_average_pooling1d_layer_call_and_return_conditional_losses_563909

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
:������������������^
IdentityIdentityMean:output:0*
T0*0
_output_shapes
:������������������"
identityIdentity:output:0*(
_construction_contextkEagerRuntime*<
_input_shapes+
):'���������������������������:e a
=
_output_shapes+
):'���������������������������
 
_user_specified_nameinputs
� 
d
H__inference_q_activation_layer_call_and_return_conditional_losses_566534

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
:���������  J
ReluReluinputs*
T0*+
_output_shapes
:���������  S
	ones_likeOnesLikeinputs*
T0*+
_output_shapes
:���������  D
sub_2Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: Z
mulMulones_like:y:0	sub_2:z:0*
T0*+
_output_shapes
:���������  v
SelectV2SelectV2LessEqual:z:0Relu:activations:0mul:z:0*
T0*+
_output_shapes
:���������  T
mul_1MulinputsCast:y:0*
T0*+
_output_shapes
:���������  _
truedivRealDiv	mul_1:z:0
Cast_1:y:0*
T0*+
_output_shapes
:���������  M
NegNegtruediv:z:0*
T0*+
_output_shapes
:���������  Q
RoundRoundtruediv:z:0*
T0*+
_output_shapes
:���������  V
addAddV2Neg:y:0	Round:y:0*
T0*+
_output_shapes
:���������  [
StopGradientStopGradientadd:z:0*
T0*+
_output_shapes
:���������  h
add_1AddV2truediv:z:0StopGradient:output:0*
T0*+
_output_shapes
:���������  _
	truediv_1RealDiv	add_1:z:0Cast:y:0*
T0*+
_output_shapes
:���������  P
truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?U
	truediv_2RealDivtruediv_2/x:output:0Cast:y:0*
T0*
_output_shapes
: L
sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?N
sub_3Subsub_3/x:output:0truediv_2:z:0*
T0*
_output_shapes
: p
clip_by_value/MinimumMinimumtruediv_1:z:0	sub_3:z:0*
T0*+
_output_shapes
:���������  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    �
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*+
_output_shapes
:���������  a
mul_2Mul
Cast_1:y:0clip_by_value:z:0*
T0*+
_output_shapes
:���������  U
Neg_1NegSelectV2:output:0*
T0*+
_output_shapes
:���������  Z
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*+
_output_shapes
:���������  L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?_
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*+
_output_shapes
:���������  _
StopGradient_1StopGradient	mul_3:z:0*
T0*+
_output_shapes
:���������  p
add_3AddV2SelectV2:output:0StopGradient_1:output:0*
T0*+
_output_shapes
:���������  U
IdentityIdentity	add_3:z:0*
T0*+
_output_shapes
:���������  "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:���������  :S O
+
_output_shapes
:���������  
 
_user_specified_nameinputs
�X
�
cond_true_566636H
>cond_polynomial_decay_pruning_schedule_readvariableop_resource:	 >
,cond_pruning_ops_abs_readvariableop_resource:  0
cond_assignvariableop_resource:  *
 cond_assignvariableop_1_resource: 
cond_identity_logicaland_1

cond_identity_1
��cond/AssignVariableOp�cond/AssignVariableOp_1� cond/GreaterEqual/ReadVariableOp�cond/LessEqual/ReadVariableOp�cond/Sub/ReadVariableOp�5cond/polynomial_decay_pruning_schedule/ReadVariableOp�#cond/pruning_ops/Abs/ReadVariableOp�
5cond/polynomial_decay_pruning_schedule/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	o
,cond/polynomial_decay_pruning_schedule/sub/yConst*
_output_shapes
: *
dtype0	*
value
B	 R��
*cond/polynomial_decay_pruning_schedule/subSub=cond/polynomial_decay_pruning_schedule/ReadVariableOp:value:05cond/polynomial_decay_pruning_schedule/sub/y:output:0*
T0	*
_output_shapes
: �
+cond/polynomial_decay_pruning_schedule/CastCast.cond/polynomial_decay_pruning_schedule/sub:z:0*

DstT0*

SrcT0	*
_output_shapes
: u
0cond/polynomial_decay_pruning_schedule/truediv/yConst*
_output_shapes
: *
dtype0*
valueB
 * �jF�
.cond/polynomial_decay_pruning_schedule/truedivRealDiv/cond/polynomial_decay_pruning_schedule/Cast:y:09cond/polynomial_decay_pruning_schedule/truediv/y:output:0*
T0*
_output_shapes
: u
0cond/polynomial_decay_pruning_schedule/Maximum/xConst*
_output_shapes
: *
dtype0*
valueB
 *    �
.cond/polynomial_decay_pruning_schedule/MaximumMaximum9cond/polynomial_decay_pruning_schedule/Maximum/x:output:02cond/polynomial_decay_pruning_schedule/truediv:z:0*
T0*
_output_shapes
: u
0cond/polynomial_decay_pruning_schedule/Minimum/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
.cond/polynomial_decay_pruning_schedule/MinimumMinimum9cond/polynomial_decay_pruning_schedule/Minimum/x:output:02cond/polynomial_decay_pruning_schedule/Maximum:z:0*
T0*
_output_shapes
: s
.cond/polynomial_decay_pruning_schedule/sub_1/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
,cond/polynomial_decay_pruning_schedule/sub_1Sub7cond/polynomial_decay_pruning_schedule/sub_1/x:output:02cond/polynomial_decay_pruning_schedule/Minimum:z:0*
T0*
_output_shapes
: q
,cond/polynomial_decay_pruning_schedule/Pow/yConst*
_output_shapes
: *
dtype0*
valueB
 *  @@�
*cond/polynomial_decay_pruning_schedule/PowPow0cond/polynomial_decay_pruning_schedule/sub_1:z:05cond/polynomial_decay_pruning_schedule/Pow/y:output:0*
T0*
_output_shapes
: q
,cond/polynomial_decay_pruning_schedule/Mul/xConst*
_output_shapes
: *
dtype0*
valueB
 *   ��
*cond/polynomial_decay_pruning_schedule/MulMul5cond/polynomial_decay_pruning_schedule/Mul/x:output:0.cond/polynomial_decay_pruning_schedule/Pow:z:0*
T0*
_output_shapes
: v
1cond/polynomial_decay_pruning_schedule/sparsity/yConst*
_output_shapes
: *
dtype0*
valueB
 *   ?�
/cond/polynomial_decay_pruning_schedule/sparsityAddV2.cond/polynomial_decay_pruning_schedule/Mul:z:0:cond/polynomial_decay_pruning_schedule/sparsity/y:output:0*
T0*
_output_shapes
: �
 cond/GreaterEqual/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	V
cond/GreaterEqual/yConst*
_output_shapes
: *
dtype0	*
value
B	 R��
cond/GreaterEqualGreaterEqual(cond/GreaterEqual/ReadVariableOp:value:0cond/GreaterEqual/y:output:0*
T0	*
_output_shapes
: �
cond/LessEqual/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	T
cond/LessEqual/yConst*
_output_shapes
: *
dtype0	*
valueB		 Rܒ~
cond/LessEqual	LessEqual%cond/LessEqual/ReadVariableOp:value:0cond/LessEqual/y:output:0*
T0	*
_output_shapes
: O
cond/Less/xConst*
_output_shapes
: *
dtype0*
valueB	 :ܒM
cond/Less/yConst*
_output_shapes
: *
dtype0*
value	B : ^
	cond/LessLesscond/Less/x:output:0cond/Less/y:output:0*
T0*
_output_shapes
: V
cond/LogicalOr	LogicalOrcond/LessEqual:z:0cond/Less:z:0*
_output_shapes
: `
cond/LogicalAnd
LogicalAndcond/GreaterEqual:z:0cond/LogicalOr:z:0*
_output_shapes
: �
cond/Sub/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	M

cond/Sub/yConst*
_output_shapes
: *
dtype0	*
value
B	 R�f
cond/SubSubcond/Sub/ReadVariableOp:value:0cond/Sub/y:output:0*
T0	*
_output_shapes
: R
cond/FloorMod/yConst*
_output_shapes
: *
dtype0	*
value
B	 R�b
cond/FloorModFloorModcond/Sub:z:0cond/FloorMod/y:output:0*
T0	*
_output_shapes
: N
cond/Equal/yConst*
_output_shapes
: *
dtype0	*
value	B	 R ^

cond/EqualEqualcond/FloorMod:z:0cond/Equal/y:output:0*
T0	*
_output_shapes
: \
cond/LogicalAnd_1
LogicalAndcond/LogicalAnd:z:0cond/Equal:z:0*
_output_shapes
: �
#cond/pruning_ops/Abs/ReadVariableOpReadVariableOp,cond_pruning_ops_abs_readvariableop_resource*
_output_shapes

:  *
dtype0q
cond/pruning_ops/AbsAbs+cond/pruning_ops/Abs/ReadVariableOp:value:0*
T0*
_output_shapes

:  X
cond/pruning_ops/SizeConst*
_output_shapes
: *
dtype0*
value
B :�m
cond/pruning_ops/CastCastcond/pruning_ops/Size:output:0*

DstT0*

SrcT0*
_output_shapes
: [
cond/pruning_ops/sub/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
cond/pruning_ops/subSubcond/pruning_ops/sub/x:output:03cond/polynomial_decay_pruning_schedule/sparsity:z:0*
T0*
_output_shapes
: q
cond/pruning_ops/mulMulcond/pruning_ops/Cast:y:0cond/pruning_ops/sub:z:0*
T0*
_output_shapes
: Z
cond/pruning_ops/RoundRoundcond/pruning_ops/mul:z:0*
T0*
_output_shapes
: _
cond/pruning_ops/Maximum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
cond/pruning_ops/MaximumMaximumcond/pruning_ops/Round:y:0#cond/pruning_ops/Maximum/y:output:0*
T0*
_output_shapes
: m
cond/pruning_ops/Cast_1Castcond/pruning_ops/Maximum:z:0*

DstT0*

SrcT0*
_output_shapes
: q
cond/pruning_ops/Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB:
����������
cond/pruning_ops/ReshapeReshapecond/pruning_ops/Abs:y:0'cond/pruning_ops/Reshape/shape:output:0*
T0*
_output_shapes	
:�Z
cond/pruning_ops/Size_1Const*
_output_shapes
: *
dtype0*
value
B :��
cond/pruning_ops/TopKV2TopKV2!cond/pruning_ops/Reshape:output:0 cond/pruning_ops/Size_1:output:0*
T0*"
_output_shapes
:�:�Z
cond/pruning_ops/sub_1/yConst*
_output_shapes
: *
dtype0*
value	B :~
cond/pruning_ops/sub_1Subcond/pruning_ops/Cast_1:y:0!cond/pruning_ops/sub_1/y:output:0*
T0*
_output_shapes
: `
cond/pruning_ops/GatherV2/axisConst*
_output_shapes
: *
dtype0*
value	B : �
cond/pruning_ops/GatherV2GatherV2 cond/pruning_ops/TopKV2:values:0cond/pruning_ops/sub_1:z:0'cond/pruning_ops/GatherV2/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
: Z
cond/pruning_ops/sub_2/yConst*
_output_shapes
: *
dtype0*
value	B :~
cond/pruning_ops/sub_2Subcond/pruning_ops/Cast_1:y:0!cond/pruning_ops/sub_2/y:output:0*
T0*
_output_shapes
: b
 cond/pruning_ops/GatherV2_1/axisConst*
_output_shapes
: *
dtype0*
value	B : �
cond/pruning_ops/GatherV2_1GatherV2!cond/pruning_ops/TopKV2:indices:0cond/pruning_ops/sub_2:z:0)cond/pruning_ops/GatherV2_1/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
: �
cond/pruning_ops/GreaterEqualGreaterEqualcond/pruning_ops/Abs:y:0"cond/pruning_ops/GatherV2:output:0*
T0*
_output_shapes

:  Z
cond/pruning_ops/Size_2Const*
_output_shapes
: *
dtype0*
value
B :�`
cond/pruning_ops/one_hot/ConstConst*
_output_shapes
: *
dtype0
*
value	B
 Zb
 cond/pruning_ops/one_hot/Const_1Const*
_output_shapes
: *
dtype0
*
value	B
 Z �
cond/pruning_ops/one_hotOneHot$cond/pruning_ops/GatherV2_1:output:0 cond/pruning_ops/Size_2:output:0'cond/pruning_ops/one_hot/Const:output:0)cond/pruning_ops/one_hot/Const_1:output:0*
TI0*
T0
*
_output_shapes	
:�q
 cond/pruning_ops/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"        �
cond/pruning_ops/Reshape_1Reshape!cond/pruning_ops/one_hot:output:0)cond/pruning_ops/Reshape_1/shape:output:0*
T0
*
_output_shapes

:  �
cond/pruning_ops/LogicalOr	LogicalOr!cond/pruning_ops/GreaterEqual:z:0#cond/pruning_ops/Reshape_1:output:0*
_output_shapes

:  i
	cond/CastCastcond/pruning_ops/LogicalOr:z:0*

DstT0*

SrcT0
*
_output_shapes

:  �
cond/AssignVariableOpAssignVariableOpcond_assignvariableop_resourcecond/Cast:y:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�
cond/AssignVariableOp_1AssignVariableOp cond_assignvariableop_1_resource"cond/pruning_ops/GatherV2:output:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�
cond/group_depsNoOp^cond/AssignVariableOp^cond/AssignVariableOp_1",/job:localhost/replica:0/task:0/device:GPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 h
cond/IdentityIdentitycond_identity_logicaland_1^cond/group_deps*
T0
*
_output_shapes
: `
cond/Identity_1Identitycond/Identity:output:0
^cond/NoOp*
T0
*
_output_shapes
: �
	cond/NoOpNoOp^cond/AssignVariableOp^cond/AssignVariableOp_1!^cond/GreaterEqual/ReadVariableOp^cond/LessEqual/ReadVariableOp^cond/Sub/ReadVariableOp6^cond/polynomial_decay_pruning_schedule/ReadVariableOp$^cond/pruning_ops/Abs/ReadVariableOp*
_output_shapes
 "+
cond_identity_1cond/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes

: : : : : 22
cond/AssignVariableOp_1cond/AssignVariableOp_12.
cond/AssignVariableOpcond/AssignVariableOp2D
 cond/GreaterEqual/ReadVariableOp cond/GreaterEqual/ReadVariableOp2>
cond/LessEqual/ReadVariableOpcond/LessEqual/ReadVariableOp22
cond/Sub/ReadVariableOpcond/Sub/ReadVariableOp2n
5cond/polynomial_decay_pruning_schedule/ReadVariableOp5cond/polynomial_decay_pruning_schedule/ReadVariableOp2J
#cond/pruning_ops/Abs/ReadVariableOp#cond/pruning_ops/Abs/ReadVariableOp:D@

_output_shapes
: 
&
_user_specified_nameLogicalAnd_1:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:( $
"
_user_specified_name
resource
�
�
cond_false_567524
cond_placeholder
cond_placeholder_1
cond_placeholder_2
cond_placeholder_3
cond_identity_logicaland_1

cond_identity_1
O
	cond/NoOpNoOp*&
 _has_manual_control_dependencies(*
_output_shapes
 b
cond/IdentityIdentitycond_identity_logicaland_1
^cond/NoOp*
T0
*
_output_shapes
: T
cond/Identity_1Identitycond/Identity:output:0*
T0
*
_output_shapes
: "+
cond_identity_1cond/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes

: : : : : :D@

_output_shapes
: 
&
_user_specified_nameLogicalAnd_1
��
�.
__inference__traced_save_568363
file_prefixF
4read_disablecopyonread_prune_low_magnitude_phi1_mask: E
;read_1_disablecopyonread_prune_low_magnitude_phi1_threshold: H
>read_2_disablecopyonread_prune_low_magnitude_phi1_pruning_step:	 H
6read_3_disablecopyonread_prune_low_magnitude_phi2_mask:  E
;read_4_disablecopyonread_prune_low_magnitude_phi2_threshold: H
>read_5_disablecopyonread_prune_low_magnitude_phi2_pruning_step:	 H
6read_6_disablecopyonread_prune_low_magnitude_phi3_mask:  E
;read_7_disablecopyonread_prune_low_magnitude_phi3_threshold: H
>read_8_disablecopyonread_prune_low_magnitude_phi3_pruning_step:	 G
5read_9_disablecopyonread_prune_low_magnitude_rho_mask:  E
;read_10_disablecopyonread_prune_low_magnitude_rho_threshold: H
>read_11_disablecopyonread_prune_low_magnitude_rho_pruning_step:	 J
8read_12_disablecopyonread_prune_low_magnitude_dense_mask: G
=read_13_disablecopyonread_prune_low_magnitude_dense_threshold: J
@read_14_disablecopyonread_prune_low_magnitude_dense_pruning_step:	 7
%read_15_disablecopyonread_phi1_kernel: 1
#read_16_disablecopyonread_phi1_bias: 7
%read_17_disablecopyonread_phi2_kernel:  1
#read_18_disablecopyonread_phi2_bias: 7
%read_19_disablecopyonread_phi3_kernel:  1
#read_20_disablecopyonread_phi3_bias: 6
$read_21_disablecopyonread_rho_kernel:  0
"read_22_disablecopyonread_rho_bias: 8
&read_23_disablecopyonread_dense_kernel: 2
$read_24_disablecopyonread_dense_bias:-
#read_25_disablecopyonread_iteration:	 1
'read_26_disablecopyonread_learning_rate: >
,read_27_disablecopyonread_adam_m_phi1_kernel: >
,read_28_disablecopyonread_adam_v_phi1_kernel: 8
*read_29_disablecopyonread_adam_m_phi1_bias: 8
*read_30_disablecopyonread_adam_v_phi1_bias: >
,read_31_disablecopyonread_adam_m_phi2_kernel:  >
,read_32_disablecopyonread_adam_v_phi2_kernel:  8
*read_33_disablecopyonread_adam_m_phi2_bias: 8
*read_34_disablecopyonread_adam_v_phi2_bias: >
,read_35_disablecopyonread_adam_m_phi3_kernel:  >
,read_36_disablecopyonread_adam_v_phi3_kernel:  8
*read_37_disablecopyonread_adam_m_phi3_bias: 8
*read_38_disablecopyonread_adam_v_phi3_bias: =
+read_39_disablecopyonread_adam_m_rho_kernel:  =
+read_40_disablecopyonread_adam_v_rho_kernel:  7
)read_41_disablecopyonread_adam_m_rho_bias: 7
)read_42_disablecopyonread_adam_v_rho_bias: ?
-read_43_disablecopyonread_adam_m_dense_kernel: ?
-read_44_disablecopyonread_adam_v_dense_kernel: 9
+read_45_disablecopyonread_adam_m_dense_bias:9
+read_46_disablecopyonread_adam_v_dense_bias:+
!read_47_disablecopyonread_total_1: +
!read_48_disablecopyonread_count_1: )
read_49_disablecopyonread_total: )
read_50_disablecopyonread_count: 
savev2_const
identity_103��MergeV2Checkpoints�Read/DisableCopyOnRead�Read/ReadVariableOp�Read_1/DisableCopyOnRead�Read_1/ReadVariableOp�Read_10/DisableCopyOnRead�Read_10/ReadVariableOp�Read_11/DisableCopyOnRead�Read_11/ReadVariableOp�Read_12/DisableCopyOnRead�Read_12/ReadVariableOp�Read_13/DisableCopyOnRead�Read_13/ReadVariableOp�Read_14/DisableCopyOnRead�Read_14/ReadVariableOp�Read_15/DisableCopyOnRead�Read_15/ReadVariableOp�Read_16/DisableCopyOnRead�Read_16/ReadVariableOp�Read_17/DisableCopyOnRead�Read_17/ReadVariableOp�Read_18/DisableCopyOnRead�Read_18/ReadVariableOp�Read_19/DisableCopyOnRead�Read_19/ReadVariableOp�Read_2/DisableCopyOnRead�Read_2/ReadVariableOp�Read_20/DisableCopyOnRead�Read_20/ReadVariableOp�Read_21/DisableCopyOnRead�Read_21/ReadVariableOp�Read_22/DisableCopyOnRead�Read_22/ReadVariableOp�Read_23/DisableCopyOnRead�Read_23/ReadVariableOp�Read_24/DisableCopyOnRead�Read_24/ReadVariableOp�Read_25/DisableCopyOnRead�Read_25/ReadVariableOp�Read_26/DisableCopyOnRead�Read_26/ReadVariableOp�Read_27/DisableCopyOnRead�Read_27/ReadVariableOp�Read_28/DisableCopyOnRead�Read_28/ReadVariableOp�Read_29/DisableCopyOnRead�Read_29/ReadVariableOp�Read_3/DisableCopyOnRead�Read_3/ReadVariableOp�Read_30/DisableCopyOnRead�Read_30/ReadVariableOp�Read_31/DisableCopyOnRead�Read_31/ReadVariableOp�Read_32/DisableCopyOnRead�Read_32/ReadVariableOp�Read_33/DisableCopyOnRead�Read_33/ReadVariableOp�Read_34/DisableCopyOnRead�Read_34/ReadVariableOp�Read_35/DisableCopyOnRead�Read_35/ReadVariableOp�Read_36/DisableCopyOnRead�Read_36/ReadVariableOp�Read_37/DisableCopyOnRead�Read_37/ReadVariableOp�Read_38/DisableCopyOnRead�Read_38/ReadVariableOp�Read_39/DisableCopyOnRead�Read_39/ReadVariableOp�Read_4/DisableCopyOnRead�Read_4/ReadVariableOp�Read_40/DisableCopyOnRead�Read_40/ReadVariableOp�Read_41/DisableCopyOnRead�Read_41/ReadVariableOp�Read_42/DisableCopyOnRead�Read_42/ReadVariableOp�Read_43/DisableCopyOnRead�Read_43/ReadVariableOp�Read_44/DisableCopyOnRead�Read_44/ReadVariableOp�Read_45/DisableCopyOnRead�Read_45/ReadVariableOp�Read_46/DisableCopyOnRead�Read_46/ReadVariableOp�Read_47/DisableCopyOnRead�Read_47/ReadVariableOp�Read_48/DisableCopyOnRead�Read_48/ReadVariableOp�Read_49/DisableCopyOnRead�Read_49/ReadVariableOp�Read_5/DisableCopyOnRead�Read_5/ReadVariableOp�Read_50/DisableCopyOnRead�Read_50/ReadVariableOp�Read_6/DisableCopyOnRead�Read_6/ReadVariableOp�Read_7/DisableCopyOnRead�Read_7/ReadVariableOp�Read_8/DisableCopyOnRead�Read_8/ReadVariableOp�Read_9/DisableCopyOnRead�Read_9/ReadVariableOpw
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
_temp/part�
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
value	B : �
ShardedFilenameShardedFilenameStringJoin:output:0ShardedFilename/shard:output:0num_shards:output:0"/device:CPU:0*
_output_shapes
: �
Read/DisableCopyOnReadDisableCopyOnRead4read_disablecopyonread_prune_low_magnitude_phi1_mask"/device:CPU:0*
_output_shapes
 �
Read/ReadVariableOpReadVariableOp4read_disablecopyonread_prune_low_magnitude_phi1_mask^Read/DisableCopyOnRead"/device:CPU:0*
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

: �
Read_1/DisableCopyOnReadDisableCopyOnRead;read_1_disablecopyonread_prune_low_magnitude_phi1_threshold"/device:CPU:0*
_output_shapes
 �
Read_1/ReadVariableOpReadVariableOp;read_1_disablecopyonread_prune_low_magnitude_phi1_threshold^Read_1/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0e

Identity_2IdentityRead_1/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: [

Identity_3IdentityIdentity_2:output:0"/device:CPU:0*
T0*
_output_shapes
: �
Read_2/DisableCopyOnReadDisableCopyOnRead>read_2_disablecopyonread_prune_low_magnitude_phi1_pruning_step"/device:CPU:0*
_output_shapes
 �
Read_2/ReadVariableOpReadVariableOp>read_2_disablecopyonread_prune_low_magnitude_phi1_pruning_step^Read_2/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0	e

Identity_4IdentityRead_2/ReadVariableOp:value:0"/device:CPU:0*
T0	*
_output_shapes
: [

Identity_5IdentityIdentity_4:output:0"/device:CPU:0*
T0	*
_output_shapes
: �
Read_3/DisableCopyOnReadDisableCopyOnRead6read_3_disablecopyonread_prune_low_magnitude_phi2_mask"/device:CPU:0*
_output_shapes
 �
Read_3/ReadVariableOpReadVariableOp6read_3_disablecopyonread_prune_low_magnitude_phi2_mask^Read_3/DisableCopyOnRead"/device:CPU:0*
_output_shapes

:  *
dtype0m

Identity_6IdentityRead_3/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes

:  c

Identity_7IdentityIdentity_6:output:0"/device:CPU:0*
T0*
_output_shapes

:  �
Read_4/DisableCopyOnReadDisableCopyOnRead;read_4_disablecopyonread_prune_low_magnitude_phi2_threshold"/device:CPU:0*
_output_shapes
 �
Read_4/ReadVariableOpReadVariableOp;read_4_disablecopyonread_prune_low_magnitude_phi2_threshold^Read_4/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0e

Identity_8IdentityRead_4/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: [

Identity_9IdentityIdentity_8:output:0"/device:CPU:0*
T0*
_output_shapes
: �
Read_5/DisableCopyOnReadDisableCopyOnRead>read_5_disablecopyonread_prune_low_magnitude_phi2_pruning_step"/device:CPU:0*
_output_shapes
 �
Read_5/ReadVariableOpReadVariableOp>read_5_disablecopyonread_prune_low_magnitude_phi2_pruning_step^Read_5/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0	f
Identity_10IdentityRead_5/ReadVariableOp:value:0"/device:CPU:0*
T0	*
_output_shapes
: ]
Identity_11IdentityIdentity_10:output:0"/device:CPU:0*
T0	*
_output_shapes
: �
Read_6/DisableCopyOnReadDisableCopyOnRead6read_6_disablecopyonread_prune_low_magnitude_phi3_mask"/device:CPU:0*
_output_shapes
 �
Read_6/ReadVariableOpReadVariableOp6read_6_disablecopyonread_prune_low_magnitude_phi3_mask^Read_6/DisableCopyOnRead"/device:CPU:0*
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

:  �
Read_7/DisableCopyOnReadDisableCopyOnRead;read_7_disablecopyonread_prune_low_magnitude_phi3_threshold"/device:CPU:0*
_output_shapes
 �
Read_7/ReadVariableOpReadVariableOp;read_7_disablecopyonread_prune_low_magnitude_phi3_threshold^Read_7/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0f
Identity_14IdentityRead_7/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: ]
Identity_15IdentityIdentity_14:output:0"/device:CPU:0*
T0*
_output_shapes
: �
Read_8/DisableCopyOnReadDisableCopyOnRead>read_8_disablecopyonread_prune_low_magnitude_phi3_pruning_step"/device:CPU:0*
_output_shapes
 �
Read_8/ReadVariableOpReadVariableOp>read_8_disablecopyonread_prune_low_magnitude_phi3_pruning_step^Read_8/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0	f
Identity_16IdentityRead_8/ReadVariableOp:value:0"/device:CPU:0*
T0	*
_output_shapes
: ]
Identity_17IdentityIdentity_16:output:0"/device:CPU:0*
T0	*
_output_shapes
: �
Read_9/DisableCopyOnReadDisableCopyOnRead5read_9_disablecopyonread_prune_low_magnitude_rho_mask"/device:CPU:0*
_output_shapes
 �
Read_9/ReadVariableOpReadVariableOp5read_9_disablecopyonread_prune_low_magnitude_rho_mask^Read_9/DisableCopyOnRead"/device:CPU:0*
_output_shapes

:  *
dtype0n
Identity_18IdentityRead_9/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes

:  e
Identity_19IdentityIdentity_18:output:0"/device:CPU:0*
T0*
_output_shapes

:  �
Read_10/DisableCopyOnReadDisableCopyOnRead;read_10_disablecopyonread_prune_low_magnitude_rho_threshold"/device:CPU:0*
_output_shapes
 �
Read_10/ReadVariableOpReadVariableOp;read_10_disablecopyonread_prune_low_magnitude_rho_threshold^Read_10/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0g
Identity_20IdentityRead_10/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: ]
Identity_21IdentityIdentity_20:output:0"/device:CPU:0*
T0*
_output_shapes
: �
Read_11/DisableCopyOnReadDisableCopyOnRead>read_11_disablecopyonread_prune_low_magnitude_rho_pruning_step"/device:CPU:0*
_output_shapes
 �
Read_11/ReadVariableOpReadVariableOp>read_11_disablecopyonread_prune_low_magnitude_rho_pruning_step^Read_11/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0	g
Identity_22IdentityRead_11/ReadVariableOp:value:0"/device:CPU:0*
T0	*
_output_shapes
: ]
Identity_23IdentityIdentity_22:output:0"/device:CPU:0*
T0	*
_output_shapes
: �
Read_12/DisableCopyOnReadDisableCopyOnRead8read_12_disablecopyonread_prune_low_magnitude_dense_mask"/device:CPU:0*
_output_shapes
 �
Read_12/ReadVariableOpReadVariableOp8read_12_disablecopyonread_prune_low_magnitude_dense_mask^Read_12/DisableCopyOnRead"/device:CPU:0*
_output_shapes

: *
dtype0o
Identity_24IdentityRead_12/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes

: e
Identity_25IdentityIdentity_24:output:0"/device:CPU:0*
T0*
_output_shapes

: �
Read_13/DisableCopyOnReadDisableCopyOnRead=read_13_disablecopyonread_prune_low_magnitude_dense_threshold"/device:CPU:0*
_output_shapes
 �
Read_13/ReadVariableOpReadVariableOp=read_13_disablecopyonread_prune_low_magnitude_dense_threshold^Read_13/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0g
Identity_26IdentityRead_13/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: ]
Identity_27IdentityIdentity_26:output:0"/device:CPU:0*
T0*
_output_shapes
: �
Read_14/DisableCopyOnReadDisableCopyOnRead@read_14_disablecopyonread_prune_low_magnitude_dense_pruning_step"/device:CPU:0*
_output_shapes
 �
Read_14/ReadVariableOpReadVariableOp@read_14_disablecopyonread_prune_low_magnitude_dense_pruning_step^Read_14/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0	g
Identity_28IdentityRead_14/ReadVariableOp:value:0"/device:CPU:0*
T0	*
_output_shapes
: ]
Identity_29IdentityIdentity_28:output:0"/device:CPU:0*
T0	*
_output_shapes
: z
Read_15/DisableCopyOnReadDisableCopyOnRead%read_15_disablecopyonread_phi1_kernel"/device:CPU:0*
_output_shapes
 �
Read_15/ReadVariableOpReadVariableOp%read_15_disablecopyonread_phi1_kernel^Read_15/DisableCopyOnRead"/device:CPU:0*
_output_shapes

: *
dtype0o
Identity_30IdentityRead_15/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes

: e
Identity_31IdentityIdentity_30:output:0"/device:CPU:0*
T0*
_output_shapes

: x
Read_16/DisableCopyOnReadDisableCopyOnRead#read_16_disablecopyonread_phi1_bias"/device:CPU:0*
_output_shapes
 �
Read_16/ReadVariableOpReadVariableOp#read_16_disablecopyonread_phi1_bias^Read_16/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0k
Identity_32IdentityRead_16/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: a
Identity_33IdentityIdentity_32:output:0"/device:CPU:0*
T0*
_output_shapes
: z
Read_17/DisableCopyOnReadDisableCopyOnRead%read_17_disablecopyonread_phi2_kernel"/device:CPU:0*
_output_shapes
 �
Read_17/ReadVariableOpReadVariableOp%read_17_disablecopyonread_phi2_kernel^Read_17/DisableCopyOnRead"/device:CPU:0*
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

:  x
Read_18/DisableCopyOnReadDisableCopyOnRead#read_18_disablecopyonread_phi2_bias"/device:CPU:0*
_output_shapes
 �
Read_18/ReadVariableOpReadVariableOp#read_18_disablecopyonread_phi2_bias^Read_18/DisableCopyOnRead"/device:CPU:0*
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
: z
Read_19/DisableCopyOnReadDisableCopyOnRead%read_19_disablecopyonread_phi3_kernel"/device:CPU:0*
_output_shapes
 �
Read_19/ReadVariableOpReadVariableOp%read_19_disablecopyonread_phi3_kernel^Read_19/DisableCopyOnRead"/device:CPU:0*
_output_shapes

:  *
dtype0o
Identity_38IdentityRead_19/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes

:  e
Identity_39IdentityIdentity_38:output:0"/device:CPU:0*
T0*
_output_shapes

:  x
Read_20/DisableCopyOnReadDisableCopyOnRead#read_20_disablecopyonread_phi3_bias"/device:CPU:0*
_output_shapes
 �
Read_20/ReadVariableOpReadVariableOp#read_20_disablecopyonread_phi3_bias^Read_20/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0k
Identity_40IdentityRead_20/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: a
Identity_41IdentityIdentity_40:output:0"/device:CPU:0*
T0*
_output_shapes
: y
Read_21/DisableCopyOnReadDisableCopyOnRead$read_21_disablecopyonread_rho_kernel"/device:CPU:0*
_output_shapes
 �
Read_21/ReadVariableOpReadVariableOp$read_21_disablecopyonread_rho_kernel^Read_21/DisableCopyOnRead"/device:CPU:0*
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

:  w
Read_22/DisableCopyOnReadDisableCopyOnRead"read_22_disablecopyonread_rho_bias"/device:CPU:0*
_output_shapes
 �
Read_22/ReadVariableOpReadVariableOp"read_22_disablecopyonread_rho_bias^Read_22/DisableCopyOnRead"/device:CPU:0*
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
: {
Read_23/DisableCopyOnReadDisableCopyOnRead&read_23_disablecopyonread_dense_kernel"/device:CPU:0*
_output_shapes
 �
Read_23/ReadVariableOpReadVariableOp&read_23_disablecopyonread_dense_kernel^Read_23/DisableCopyOnRead"/device:CPU:0*
_output_shapes

: *
dtype0o
Identity_46IdentityRead_23/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes

: e
Identity_47IdentityIdentity_46:output:0"/device:CPU:0*
T0*
_output_shapes

: y
Read_24/DisableCopyOnReadDisableCopyOnRead$read_24_disablecopyonread_dense_bias"/device:CPU:0*
_output_shapes
 �
Read_24/ReadVariableOpReadVariableOp$read_24_disablecopyonread_dense_bias^Read_24/DisableCopyOnRead"/device:CPU:0*
_output_shapes
:*
dtype0k
Identity_48IdentityRead_24/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
:a
Identity_49IdentityIdentity_48:output:0"/device:CPU:0*
T0*
_output_shapes
:x
Read_25/DisableCopyOnReadDisableCopyOnRead#read_25_disablecopyonread_iteration"/device:CPU:0*
_output_shapes
 �
Read_25/ReadVariableOpReadVariableOp#read_25_disablecopyonread_iteration^Read_25/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0	g
Identity_50IdentityRead_25/ReadVariableOp:value:0"/device:CPU:0*
T0	*
_output_shapes
: ]
Identity_51IdentityIdentity_50:output:0"/device:CPU:0*
T0	*
_output_shapes
: |
Read_26/DisableCopyOnReadDisableCopyOnRead'read_26_disablecopyonread_learning_rate"/device:CPU:0*
_output_shapes
 �
Read_26/ReadVariableOpReadVariableOp'read_26_disablecopyonread_learning_rate^Read_26/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0g
Identity_52IdentityRead_26/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: ]
Identity_53IdentityIdentity_52:output:0"/device:CPU:0*
T0*
_output_shapes
: �
Read_27/DisableCopyOnReadDisableCopyOnRead,read_27_disablecopyonread_adam_m_phi1_kernel"/device:CPU:0*
_output_shapes
 �
Read_27/ReadVariableOpReadVariableOp,read_27_disablecopyonread_adam_m_phi1_kernel^Read_27/DisableCopyOnRead"/device:CPU:0*
_output_shapes

: *
dtype0o
Identity_54IdentityRead_27/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes

: e
Identity_55IdentityIdentity_54:output:0"/device:CPU:0*
T0*
_output_shapes

: �
Read_28/DisableCopyOnReadDisableCopyOnRead,read_28_disablecopyonread_adam_v_phi1_kernel"/device:CPU:0*
_output_shapes
 �
Read_28/ReadVariableOpReadVariableOp,read_28_disablecopyonread_adam_v_phi1_kernel^Read_28/DisableCopyOnRead"/device:CPU:0*
_output_shapes

: *
dtype0o
Identity_56IdentityRead_28/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes

: e
Identity_57IdentityIdentity_56:output:0"/device:CPU:0*
T0*
_output_shapes

: 
Read_29/DisableCopyOnReadDisableCopyOnRead*read_29_disablecopyonread_adam_m_phi1_bias"/device:CPU:0*
_output_shapes
 �
Read_29/ReadVariableOpReadVariableOp*read_29_disablecopyonread_adam_m_phi1_bias^Read_29/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0k
Identity_58IdentityRead_29/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: a
Identity_59IdentityIdentity_58:output:0"/device:CPU:0*
T0*
_output_shapes
: 
Read_30/DisableCopyOnReadDisableCopyOnRead*read_30_disablecopyonread_adam_v_phi1_bias"/device:CPU:0*
_output_shapes
 �
Read_30/ReadVariableOpReadVariableOp*read_30_disablecopyonread_adam_v_phi1_bias^Read_30/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0k
Identity_60IdentityRead_30/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: a
Identity_61IdentityIdentity_60:output:0"/device:CPU:0*
T0*
_output_shapes
: �
Read_31/DisableCopyOnReadDisableCopyOnRead,read_31_disablecopyonread_adam_m_phi2_kernel"/device:CPU:0*
_output_shapes
 �
Read_31/ReadVariableOpReadVariableOp,read_31_disablecopyonread_adam_m_phi2_kernel^Read_31/DisableCopyOnRead"/device:CPU:0*
_output_shapes

:  *
dtype0o
Identity_62IdentityRead_31/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes

:  e
Identity_63IdentityIdentity_62:output:0"/device:CPU:0*
T0*
_output_shapes

:  �
Read_32/DisableCopyOnReadDisableCopyOnRead,read_32_disablecopyonread_adam_v_phi2_kernel"/device:CPU:0*
_output_shapes
 �
Read_32/ReadVariableOpReadVariableOp,read_32_disablecopyonread_adam_v_phi2_kernel^Read_32/DisableCopyOnRead"/device:CPU:0*
_output_shapes

:  *
dtype0o
Identity_64IdentityRead_32/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes

:  e
Identity_65IdentityIdentity_64:output:0"/device:CPU:0*
T0*
_output_shapes

:  
Read_33/DisableCopyOnReadDisableCopyOnRead*read_33_disablecopyonread_adam_m_phi2_bias"/device:CPU:0*
_output_shapes
 �
Read_33/ReadVariableOpReadVariableOp*read_33_disablecopyonread_adam_m_phi2_bias^Read_33/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0k
Identity_66IdentityRead_33/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: a
Identity_67IdentityIdentity_66:output:0"/device:CPU:0*
T0*
_output_shapes
: 
Read_34/DisableCopyOnReadDisableCopyOnRead*read_34_disablecopyonread_adam_v_phi2_bias"/device:CPU:0*
_output_shapes
 �
Read_34/ReadVariableOpReadVariableOp*read_34_disablecopyonread_adam_v_phi2_bias^Read_34/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0k
Identity_68IdentityRead_34/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: a
Identity_69IdentityIdentity_68:output:0"/device:CPU:0*
T0*
_output_shapes
: �
Read_35/DisableCopyOnReadDisableCopyOnRead,read_35_disablecopyonread_adam_m_phi3_kernel"/device:CPU:0*
_output_shapes
 �
Read_35/ReadVariableOpReadVariableOp,read_35_disablecopyonread_adam_m_phi3_kernel^Read_35/DisableCopyOnRead"/device:CPU:0*
_output_shapes

:  *
dtype0o
Identity_70IdentityRead_35/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes

:  e
Identity_71IdentityIdentity_70:output:0"/device:CPU:0*
T0*
_output_shapes

:  �
Read_36/DisableCopyOnReadDisableCopyOnRead,read_36_disablecopyonread_adam_v_phi3_kernel"/device:CPU:0*
_output_shapes
 �
Read_36/ReadVariableOpReadVariableOp,read_36_disablecopyonread_adam_v_phi3_kernel^Read_36/DisableCopyOnRead"/device:CPU:0*
_output_shapes

:  *
dtype0o
Identity_72IdentityRead_36/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes

:  e
Identity_73IdentityIdentity_72:output:0"/device:CPU:0*
T0*
_output_shapes

:  
Read_37/DisableCopyOnReadDisableCopyOnRead*read_37_disablecopyonread_adam_m_phi3_bias"/device:CPU:0*
_output_shapes
 �
Read_37/ReadVariableOpReadVariableOp*read_37_disablecopyonread_adam_m_phi3_bias^Read_37/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0k
Identity_74IdentityRead_37/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: a
Identity_75IdentityIdentity_74:output:0"/device:CPU:0*
T0*
_output_shapes
: 
Read_38/DisableCopyOnReadDisableCopyOnRead*read_38_disablecopyonread_adam_v_phi3_bias"/device:CPU:0*
_output_shapes
 �
Read_38/ReadVariableOpReadVariableOp*read_38_disablecopyonread_adam_v_phi3_bias^Read_38/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0k
Identity_76IdentityRead_38/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: a
Identity_77IdentityIdentity_76:output:0"/device:CPU:0*
T0*
_output_shapes
: �
Read_39/DisableCopyOnReadDisableCopyOnRead+read_39_disablecopyonread_adam_m_rho_kernel"/device:CPU:0*
_output_shapes
 �
Read_39/ReadVariableOpReadVariableOp+read_39_disablecopyonread_adam_m_rho_kernel^Read_39/DisableCopyOnRead"/device:CPU:0*
_output_shapes

:  *
dtype0o
Identity_78IdentityRead_39/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes

:  e
Identity_79IdentityIdentity_78:output:0"/device:CPU:0*
T0*
_output_shapes

:  �
Read_40/DisableCopyOnReadDisableCopyOnRead+read_40_disablecopyonread_adam_v_rho_kernel"/device:CPU:0*
_output_shapes
 �
Read_40/ReadVariableOpReadVariableOp+read_40_disablecopyonread_adam_v_rho_kernel^Read_40/DisableCopyOnRead"/device:CPU:0*
_output_shapes

:  *
dtype0o
Identity_80IdentityRead_40/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes

:  e
Identity_81IdentityIdentity_80:output:0"/device:CPU:0*
T0*
_output_shapes

:  ~
Read_41/DisableCopyOnReadDisableCopyOnRead)read_41_disablecopyonread_adam_m_rho_bias"/device:CPU:0*
_output_shapes
 �
Read_41/ReadVariableOpReadVariableOp)read_41_disablecopyonread_adam_m_rho_bias^Read_41/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0k
Identity_82IdentityRead_41/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: a
Identity_83IdentityIdentity_82:output:0"/device:CPU:0*
T0*
_output_shapes
: ~
Read_42/DisableCopyOnReadDisableCopyOnRead)read_42_disablecopyonread_adam_v_rho_bias"/device:CPU:0*
_output_shapes
 �
Read_42/ReadVariableOpReadVariableOp)read_42_disablecopyonread_adam_v_rho_bias^Read_42/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0k
Identity_84IdentityRead_42/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: a
Identity_85IdentityIdentity_84:output:0"/device:CPU:0*
T0*
_output_shapes
: �
Read_43/DisableCopyOnReadDisableCopyOnRead-read_43_disablecopyonread_adam_m_dense_kernel"/device:CPU:0*
_output_shapes
 �
Read_43/ReadVariableOpReadVariableOp-read_43_disablecopyonread_adam_m_dense_kernel^Read_43/DisableCopyOnRead"/device:CPU:0*
_output_shapes

: *
dtype0o
Identity_86IdentityRead_43/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes

: e
Identity_87IdentityIdentity_86:output:0"/device:CPU:0*
T0*
_output_shapes

: �
Read_44/DisableCopyOnReadDisableCopyOnRead-read_44_disablecopyonread_adam_v_dense_kernel"/device:CPU:0*
_output_shapes
 �
Read_44/ReadVariableOpReadVariableOp-read_44_disablecopyonread_adam_v_dense_kernel^Read_44/DisableCopyOnRead"/device:CPU:0*
_output_shapes

: *
dtype0o
Identity_88IdentityRead_44/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes

: e
Identity_89IdentityIdentity_88:output:0"/device:CPU:0*
T0*
_output_shapes

: �
Read_45/DisableCopyOnReadDisableCopyOnRead+read_45_disablecopyonread_adam_m_dense_bias"/device:CPU:0*
_output_shapes
 �
Read_45/ReadVariableOpReadVariableOp+read_45_disablecopyonread_adam_m_dense_bias^Read_45/DisableCopyOnRead"/device:CPU:0*
_output_shapes
:*
dtype0k
Identity_90IdentityRead_45/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
:a
Identity_91IdentityIdentity_90:output:0"/device:CPU:0*
T0*
_output_shapes
:�
Read_46/DisableCopyOnReadDisableCopyOnRead+read_46_disablecopyonread_adam_v_dense_bias"/device:CPU:0*
_output_shapes
 �
Read_46/ReadVariableOpReadVariableOp+read_46_disablecopyonread_adam_v_dense_bias^Read_46/DisableCopyOnRead"/device:CPU:0*
_output_shapes
:*
dtype0k
Identity_92IdentityRead_46/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
:a
Identity_93IdentityIdentity_92:output:0"/device:CPU:0*
T0*
_output_shapes
:v
Read_47/DisableCopyOnReadDisableCopyOnRead!read_47_disablecopyonread_total_1"/device:CPU:0*
_output_shapes
 �
Read_47/ReadVariableOpReadVariableOp!read_47_disablecopyonread_total_1^Read_47/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0g
Identity_94IdentityRead_47/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: ]
Identity_95IdentityIdentity_94:output:0"/device:CPU:0*
T0*
_output_shapes
: v
Read_48/DisableCopyOnReadDisableCopyOnRead!read_48_disablecopyonread_count_1"/device:CPU:0*
_output_shapes
 �
Read_48/ReadVariableOpReadVariableOp!read_48_disablecopyonread_count_1^Read_48/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0g
Identity_96IdentityRead_48/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: ]
Identity_97IdentityIdentity_96:output:0"/device:CPU:0*
T0*
_output_shapes
: t
Read_49/DisableCopyOnReadDisableCopyOnReadread_49_disablecopyonread_total"/device:CPU:0*
_output_shapes
 �
Read_49/ReadVariableOpReadVariableOpread_49_disablecopyonread_total^Read_49/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0g
Identity_98IdentityRead_49/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: ]
Identity_99IdentityIdentity_98:output:0"/device:CPU:0*
T0*
_output_shapes
: t
Read_50/DisableCopyOnReadDisableCopyOnReadread_50_disablecopyonread_count"/device:CPU:0*
_output_shapes
 �
Read_50/ReadVariableOpReadVariableOpread_50_disablecopyonread_count^Read_50/DisableCopyOnRead"/device:CPU:0*
_output_shapes
: *
dtype0h
Identity_100IdentityRead_50/ReadVariableOp:value:0"/device:CPU:0*
T0*
_output_shapes
: _
Identity_101IdentityIdentity_100:output:0"/device:CPU:0*
T0*
_output_shapes
: �
SaveV2/tensor_namesConst"/device:CPU:0*
_output_shapes
:4*
dtype0*�
value�B�4B4layer_with_weights-0/mask/.ATTRIBUTES/VARIABLE_VALUEB9layer_with_weights-0/threshold/.ATTRIBUTES/VARIABLE_VALUEB<layer_with_weights-0/pruning_step/.ATTRIBUTES/VARIABLE_VALUEB4layer_with_weights-1/mask/.ATTRIBUTES/VARIABLE_VALUEB9layer_with_weights-1/threshold/.ATTRIBUTES/VARIABLE_VALUEB<layer_with_weights-1/pruning_step/.ATTRIBUTES/VARIABLE_VALUEB4layer_with_weights-2/mask/.ATTRIBUTES/VARIABLE_VALUEB9layer_with_weights-2/threshold/.ATTRIBUTES/VARIABLE_VALUEB<layer_with_weights-2/pruning_step/.ATTRIBUTES/VARIABLE_VALUEB4layer_with_weights-3/mask/.ATTRIBUTES/VARIABLE_VALUEB9layer_with_weights-3/threshold/.ATTRIBUTES/VARIABLE_VALUEB<layer_with_weights-3/pruning_step/.ATTRIBUTES/VARIABLE_VALUEB4layer_with_weights-4/mask/.ATTRIBUTES/VARIABLE_VALUEB9layer_with_weights-4/threshold/.ATTRIBUTES/VARIABLE_VALUEB<layer_with_weights-4/pruning_step/.ATTRIBUTES/VARIABLE_VALUEB&variables/0/.ATTRIBUTES/VARIABLE_VALUEB&variables/1/.ATTRIBUTES/VARIABLE_VALUEB&variables/5/.ATTRIBUTES/VARIABLE_VALUEB&variables/6/.ATTRIBUTES/VARIABLE_VALUEB'variables/10/.ATTRIBUTES/VARIABLE_VALUEB'variables/11/.ATTRIBUTES/VARIABLE_VALUEB'variables/15/.ATTRIBUTES/VARIABLE_VALUEB'variables/16/.ATTRIBUTES/VARIABLE_VALUEB'variables/20/.ATTRIBUTES/VARIABLE_VALUEB'variables/21/.ATTRIBUTES/VARIABLE_VALUEB0optimizer/_iterations/.ATTRIBUTES/VARIABLE_VALUEB3optimizer/_learning_rate/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/1/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/2/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/3/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/4/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/5/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/6/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/7/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/8/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/9/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/10/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/11/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/12/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/13/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/14/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/15/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/16/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/17/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/18/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/19/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/20/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/0/total/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/0/count/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/1/total/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/1/count/.ATTRIBUTES/VARIABLE_VALUEB_CHECKPOINTABLE_OBJECT_GRAPH�
SaveV2/shape_and_slicesConst"/device:CPU:0*
_output_shapes
:4*
dtype0*{
valuerBp4B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B �

SaveV2SaveV2ShardedFilename:filename:0SaveV2/tensor_names:output:0 SaveV2/shape_and_slices:output:0Identity_1:output:0Identity_3:output:0Identity_5:output:0Identity_7:output:0Identity_9:output:0Identity_11:output:0Identity_13:output:0Identity_15:output:0Identity_17:output:0Identity_19:output:0Identity_21:output:0Identity_23:output:0Identity_25:output:0Identity_27:output:0Identity_29:output:0Identity_31:output:0Identity_33:output:0Identity_35:output:0Identity_37:output:0Identity_39:output:0Identity_41:output:0Identity_43:output:0Identity_45:output:0Identity_47:output:0Identity_49:output:0Identity_51:output:0Identity_53:output:0Identity_55:output:0Identity_57:output:0Identity_59:output:0Identity_61:output:0Identity_63:output:0Identity_65:output:0Identity_67:output:0Identity_69:output:0Identity_71:output:0Identity_73:output:0Identity_75:output:0Identity_77:output:0Identity_79:output:0Identity_81:output:0Identity_83:output:0Identity_85:output:0Identity_87:output:0Identity_89:output:0Identity_91:output:0Identity_93:output:0Identity_95:output:0Identity_97:output:0Identity_99:output:0Identity_101:output:0savev2_const"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *B
dtypes8
624						�
&MergeV2Checkpoints/checkpoint_prefixesPackShardedFilename:filename:0^SaveV2"/device:CPU:0*
N*
T0*
_output_shapes
:�
MergeV2CheckpointsMergeV2Checkpoints/MergeV2Checkpoints/checkpoint_prefixes:output:0file_prefix"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 j
Identity_102Identityfile_prefix^MergeV2Checkpoints"/device:CPU:0*
T0*
_output_shapes
: W
Identity_103IdentityIdentity_102:output:0^NoOp*
T0*
_output_shapes
: �
NoOpNoOp^MergeV2Checkpoints^Read/DisableCopyOnRead^Read/ReadVariableOp^Read_1/DisableCopyOnRead^Read_1/ReadVariableOp^Read_10/DisableCopyOnRead^Read_10/ReadVariableOp^Read_11/DisableCopyOnRead^Read_11/ReadVariableOp^Read_12/DisableCopyOnRead^Read_12/ReadVariableOp^Read_13/DisableCopyOnRead^Read_13/ReadVariableOp^Read_14/DisableCopyOnRead^Read_14/ReadVariableOp^Read_15/DisableCopyOnRead^Read_15/ReadVariableOp^Read_16/DisableCopyOnRead^Read_16/ReadVariableOp^Read_17/DisableCopyOnRead^Read_17/ReadVariableOp^Read_18/DisableCopyOnRead^Read_18/ReadVariableOp^Read_19/DisableCopyOnRead^Read_19/ReadVariableOp^Read_2/DisableCopyOnRead^Read_2/ReadVariableOp^Read_20/DisableCopyOnRead^Read_20/ReadVariableOp^Read_21/DisableCopyOnRead^Read_21/ReadVariableOp^Read_22/DisableCopyOnRead^Read_22/ReadVariableOp^Read_23/DisableCopyOnRead^Read_23/ReadVariableOp^Read_24/DisableCopyOnRead^Read_24/ReadVariableOp^Read_25/DisableCopyOnRead^Read_25/ReadVariableOp^Read_26/DisableCopyOnRead^Read_26/ReadVariableOp^Read_27/DisableCopyOnRead^Read_27/ReadVariableOp^Read_28/DisableCopyOnRead^Read_28/ReadVariableOp^Read_29/DisableCopyOnRead^Read_29/ReadVariableOp^Read_3/DisableCopyOnRead^Read_3/ReadVariableOp^Read_30/DisableCopyOnRead^Read_30/ReadVariableOp^Read_31/DisableCopyOnRead^Read_31/ReadVariableOp^Read_32/DisableCopyOnRead^Read_32/ReadVariableOp^Read_33/DisableCopyOnRead^Read_33/ReadVariableOp^Read_34/DisableCopyOnRead^Read_34/ReadVariableOp^Read_35/DisableCopyOnRead^Read_35/ReadVariableOp^Read_36/DisableCopyOnRead^Read_36/ReadVariableOp^Read_37/DisableCopyOnRead^Read_37/ReadVariableOp^Read_38/DisableCopyOnRead^Read_38/ReadVariableOp^Read_39/DisableCopyOnRead^Read_39/ReadVariableOp^Read_4/DisableCopyOnRead^Read_4/ReadVariableOp^Read_40/DisableCopyOnRead^Read_40/ReadVariableOp^Read_41/DisableCopyOnRead^Read_41/ReadVariableOp^Read_42/DisableCopyOnRead^Read_42/ReadVariableOp^Read_43/DisableCopyOnRead^Read_43/ReadVariableOp^Read_44/DisableCopyOnRead^Read_44/ReadVariableOp^Read_45/DisableCopyOnRead^Read_45/ReadVariableOp^Read_46/DisableCopyOnRead^Read_46/ReadVariableOp^Read_47/DisableCopyOnRead^Read_47/ReadVariableOp^Read_48/DisableCopyOnRead^Read_48/ReadVariableOp^Read_49/DisableCopyOnRead^Read_49/ReadVariableOp^Read_5/DisableCopyOnRead^Read_5/ReadVariableOp^Read_50/DisableCopyOnRead^Read_50/ReadVariableOp^Read_6/DisableCopyOnRead^Read_6/ReadVariableOp^Read_7/DisableCopyOnRead^Read_7/ReadVariableOp^Read_8/DisableCopyOnRead^Read_8/ReadVariableOp^Read_9/DisableCopyOnRead^Read_9/ReadVariableOp*
_output_shapes
 "%
identity_103Identity_103:output:0*(
_construction_contextkEagerRuntime*}
_input_shapesl
j: : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : 2(
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
Read_35/ReadVariableOpRead_35/ReadVariableOp26
Read_36/DisableCopyOnReadRead_36/DisableCopyOnRead20
Read_36/ReadVariableOpRead_36/ReadVariableOp26
Read_37/DisableCopyOnReadRead_37/DisableCopyOnRead20
Read_37/ReadVariableOpRead_37/ReadVariableOp26
Read_38/DisableCopyOnReadRead_38/DisableCopyOnRead20
Read_38/ReadVariableOpRead_38/ReadVariableOp26
Read_39/DisableCopyOnReadRead_39/DisableCopyOnRead20
Read_39/ReadVariableOpRead_39/ReadVariableOp24
Read_4/DisableCopyOnReadRead_4/DisableCopyOnRead2.
Read_4/ReadVariableOpRead_4/ReadVariableOp26
Read_40/DisableCopyOnReadRead_40/DisableCopyOnRead20
Read_40/ReadVariableOpRead_40/ReadVariableOp26
Read_41/DisableCopyOnReadRead_41/DisableCopyOnRead20
Read_41/ReadVariableOpRead_41/ReadVariableOp26
Read_42/DisableCopyOnReadRead_42/DisableCopyOnRead20
Read_42/ReadVariableOpRead_42/ReadVariableOp26
Read_43/DisableCopyOnReadRead_43/DisableCopyOnRead20
Read_43/ReadVariableOpRead_43/ReadVariableOp26
Read_44/DisableCopyOnReadRead_44/DisableCopyOnRead20
Read_44/ReadVariableOpRead_44/ReadVariableOp26
Read_45/DisableCopyOnReadRead_45/DisableCopyOnRead20
Read_45/ReadVariableOpRead_45/ReadVariableOp26
Read_46/DisableCopyOnReadRead_46/DisableCopyOnRead20
Read_46/ReadVariableOpRead_46/ReadVariableOp26
Read_47/DisableCopyOnReadRead_47/DisableCopyOnRead20
Read_47/ReadVariableOpRead_47/ReadVariableOp26
Read_48/DisableCopyOnReadRead_48/DisableCopyOnRead20
Read_48/ReadVariableOpRead_48/ReadVariableOp26
Read_49/DisableCopyOnReadRead_49/DisableCopyOnRead20
Read_49/ReadVariableOpRead_49/ReadVariableOp24
Read_5/DisableCopyOnReadRead_5/DisableCopyOnRead2.
Read_5/ReadVariableOpRead_5/ReadVariableOp26
Read_50/DisableCopyOnReadRead_50/DisableCopyOnRead20
Read_50/ReadVariableOpRead_50/ReadVariableOp24
Read_6/DisableCopyOnReadRead_6/DisableCopyOnRead2.
Read_6/ReadVariableOpRead_6/ReadVariableOp24
Read_7/DisableCopyOnReadRead_7/DisableCopyOnRead2.
Read_7/ReadVariableOpRead_7/ReadVariableOp24
Read_8/DisableCopyOnReadRead_8/DisableCopyOnRead2.
Read_8/ReadVariableOpRead_8/ReadVariableOp24
Read_9/DisableCopyOnReadRead_9/DisableCopyOnRead2.
Read_9/ReadVariableOpRead_9/ReadVariableOp:=49

_output_shapes
: 

_user_specified_nameConst:%3!

_user_specified_namecount:%2!

_user_specified_nametotal:'1#
!
_user_specified_name	count_1:'0#
!
_user_specified_name	total_1:1/-
+
_user_specified_nameAdam/v/dense/bias:1.-
+
_user_specified_nameAdam/m/dense/bias:3-/
-
_user_specified_nameAdam/v/dense/kernel:3,/
-
_user_specified_nameAdam/m/dense/kernel:/++
)
_user_specified_nameAdam/v/rho/bias:/*+
)
_user_specified_nameAdam/m/rho/bias:1)-
+
_user_specified_nameAdam/v/rho/kernel:1(-
+
_user_specified_nameAdam/m/rho/kernel:0',
*
_user_specified_nameAdam/v/phi3/bias:0&,
*
_user_specified_nameAdam/m/phi3/bias:2%.
,
_user_specified_nameAdam/v/phi3/kernel:2$.
,
_user_specified_nameAdam/m/phi3/kernel:0#,
*
_user_specified_nameAdam/v/phi2/bias:0",
*
_user_specified_nameAdam/m/phi2/bias:2!.
,
_user_specified_nameAdam/v/phi2/kernel:2 .
,
_user_specified_nameAdam/m/phi2/kernel:0,
*
_user_specified_nameAdam/v/phi1/bias:0,
*
_user_specified_nameAdam/m/phi1/bias:2.
,
_user_specified_nameAdam/v/phi1/kernel:2.
,
_user_specified_nameAdam/m/phi1/kernel:-)
'
_user_specified_namelearning_rate:)%
#
_user_specified_name	iteration:*&
$
_user_specified_name
dense/bias:,(
&
_user_specified_namedense/kernel:($
"
_user_specified_name
rho/bias:*&
$
_user_specified_name
rho/kernel:)%
#
_user_specified_name	phi3/bias:+'
%
_user_specified_namephi3/kernel:)%
#
_user_specified_name	phi2/bias:+'
%
_user_specified_namephi2/kernel:)%
#
_user_specified_name	phi1/bias:+'
%
_user_specified_namephi1/kernel:FB
@
_user_specified_name(&prune_low_magnitude_dense/pruning_step:C?
=
_user_specified_name%#prune_low_magnitude_dense/threshold:>:
8
_user_specified_name prune_low_magnitude_dense/mask:D@
>
_user_specified_name&$prune_low_magnitude_rho/pruning_step:A=
;
_user_specified_name#!prune_low_magnitude_rho/threshold:<
8
6
_user_specified_nameprune_low_magnitude_rho/mask:E	A
?
_user_specified_name'%prune_low_magnitude_phi3/pruning_step:B>
<
_user_specified_name$"prune_low_magnitude_phi3/threshold:=9
7
_user_specified_nameprune_low_magnitude_phi3/mask:EA
?
_user_specified_name'%prune_low_magnitude_phi2/pruning_step:B>
<
_user_specified_name$"prune_low_magnitude_phi2/threshold:=9
7
_user_specified_nameprune_low_magnitude_phi2/mask:EA
?
_user_specified_name'%prune_low_magnitude_phi1/pruning_step:B>
<
_user_specified_name$"prune_low_magnitude_phi1/threshold:=9
7
_user_specified_nameprune_low_magnitude_phi1/mask:C ?

_output_shapes
: 
%
_user_specified_namefile_prefix
�
p
T__inference_global_average_pooling1d_layer_call_and_return_conditional_losses_567421

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
:������������������^
IdentityIdentityMean:output:0*
T0*0
_output_shapes
:������������������"
identityIdentity:output:0*(
_construction_contextkEagerRuntime*<
_input_shapes+
):'���������������������������:e a
=
_output_shapes+
):'���������������������������
 
_user_specified_nameinputs
�G
�
T__inference_prune_low_magnitude_phi2_layer_call_and_return_conditional_losses_566902

inputs-
mul_readvariableop_resource:  /
mul_readvariableop_1_resource:  '
readvariableop_3_resource: 
identity��AssignVariableOp�Mul/ReadVariableOp�Mul/ReadVariableOp_1�ReadVariableOp�ReadVariableOp_1�ReadVariableOp_2�ReadVariableOp_3�ReadVariableOp_4�ReadVariableOp_5'
	no_updateNoOp*
_output_shapes
 )
no_update_1NoOp*
_output_shapes
 n
Mul/ReadVariableOpReadVariableOpmul_readvariableop_resource*
_output_shapes

:  *
dtype0r
Mul/ReadVariableOp_1ReadVariableOpmul_readvariableop_1_resource*
_output_shapes

:  *
dtype0m
MulMulMul/ReadVariableOp:value:0Mul/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  �
AssignVariableOpAssignVariableOpmul_readvariableop_resourceMul:z:0^Mul/ReadVariableOp*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�

group_depsNoOp^AssignVariableOp",/job:localhost/replica:0/task:0/device:GPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 e
group_deps_1NoOp^group_deps",/job:localhost/replica:0/task:0/device:GPU:0*
_output_shapes
 G
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
: }
ReadVariableOpReadVariableOpmul_readvariableop_resource^AssignVariableOp*
_output_shapes

:  *
dtype0L
mul_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C_
mul_1MulReadVariableOp:value:0mul_1/y:output:0*
T0*
_output_shapes

:  P
truedivRealDiv	mul_1:z:0Cast:y:0*
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
 *  �Bv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   �v
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*
_output_shapes

:  R
mul_2MulCast:y:0clip_by_value:z:0*
T0*
_output_shapes

:  P
truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C^
	truediv_1RealDiv	mul_2:z:0truediv_1/y:output:0*
T0*
_output_shapes

:  L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?V
mul_3Mulmul_3/x:output:0truediv_1:z:0*
T0*
_output_shapes

:  
ReadVariableOp_1ReadVariableOpmul_readvariableop_resource^AssignVariableOp*
_output_shapes

:  *
dtype0O
Neg_1NegReadVariableOp_1:value:0*
T0*
_output_shapes

:  M
add_2AddV2	Neg_1:y:0	mul_3:z:0*
T0*
_output_shapes

:  L
mul_4/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?R
mul_4Mulmul_4/x:output:0	add_2:z:0*
T0*
_output_shapes

:  R
StopGradient_1StopGradient	mul_4:z:0*
T0*
_output_shapes

:  
ReadVariableOp_2ReadVariableOpmul_readvariableop_resource^AssignVariableOp*
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
::��Q
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
valueB"����    d
ReshapeReshapeinputsReshape/shape:output:0*
T0*'
_output_shapes
:��������� _
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
valueB"    ����f
	Reshape_1Reshapetranspose:y:0Reshape_1/shape:output:0*
T0*
_output_shapes

:  h
MatMulMatMulReshape:output:0Reshape_1:output:0*
T0*'
_output_shapes
:��������� S
Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B : S
Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : �
Reshape_2/shapePackunstack:output:0Reshape_2/shape/1:output:0Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:v
	Reshape_2ReshapeMatMul:product:0Reshape_2/shape:output:0*
T0*+
_output_shapes
:���������  I
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
mul_5/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C]
mul_5MulReadVariableOp_3:value:0mul_5/y:output:0*
T0*
_output_shapes
: P
	truediv_2RealDiv	mul_5:z:0
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
 *  �Bv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   �x
clip_by_value_1Maximumclip_by_value_1/Minimum:z:0clip_by_value_1/y:output:0*
T0*
_output_shapes
: R
mul_6Mul
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
	truediv_3RealDiv	mul_6:z:0truediv_3/y:output:0*
T0*
_output_shapes
: L
mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?R
mul_7Mulmul_7/x:output:0truediv_3:z:0*
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
add_6AddV2	Neg_3:y:0	mul_7:z:0*
T0*
_output_shapes
: L
mul_8/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?N
mul_8Mulmul_8/x:output:0	add_6:z:0*
T0*
_output_shapes
: N
StopGradient_3StopGradient	mul_8:z:0*
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
:���������  c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:���������  �
NoOpNoOp^AssignVariableOp^Mul/ReadVariableOp^Mul/ReadVariableOp_1^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*0
_input_shapes
:���������  : : : 2$
AssignVariableOpAssignVariableOp2,
Mul/ReadVariableOp_1Mul/ReadVariableOp_12(
Mul/ReadVariableOpMul/ReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_52 
ReadVariableOpReadVariableOp:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:S O
+
_output_shapes
:���������  
 
_user_specified_nameinputs
�
�
3assert_greater_equal_Assert_AssertGuard_true_564904M
Iassert_greater_equal_assert_assertguard_identity_assert_greater_equal_all
7
3assert_greater_equal_assert_assertguard_placeholder	9
5assert_greater_equal_assert_assertguard_placeholder_1	6
2assert_greater_equal_assert_assertguard_identity_1
r
,assert_greater_equal/Assert/AssertGuard/NoOpNoOp*&
 _has_manual_control_dependencies(*
_output_shapes
 �
0assert_greater_equal/Assert/AssertGuard/IdentityIdentityIassert_greater_equal_assert_assertguard_identity_assert_greater_equal_all-^assert_greater_equal/Assert/AssertGuard/NoOp*
T0
*
_output_shapes
: �
2assert_greater_equal/Assert/AssertGuard/Identity_1Identity9assert_greater_equal/Assert/AssertGuard/Identity:output:0*
T0
*
_output_shapes
: "q
2assert_greater_equal_assert_assertguard_identity_1;assert_greater_equal/Assert/AssertGuard/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes
: : : :

_output_shapes
: :

_output_shapes
: :P L

_output_shapes
: 
2
_user_specified_nameassert_greater_equal/All
�
I
-__inference_q_activation_layer_call_fn_566487

inputs
identity�
PartitionedCallPartitionedCallinputs*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:���������  * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8� *Q
fLRJ
H__inference_q_activation_layer_call_and_return_conditional_losses_564227d
IdentityIdentityPartitionedCall:output:0*
T0*+
_output_shapes
:���������  "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:���������  :S O
+
_output_shapes
:���������  
 
_user_specified_nameinputs
��
�
T__inference_prune_low_magnitude_phi2_layer_call_and_return_conditional_losses_564481

inputs!
readvariableop_resource:	 
cond_input_1:  
cond_input_2:  
cond_input_3: '
readvariableop_4_resource: 
identity��AssignVariableOp�AssignVariableOp_1�GreaterEqual/ReadVariableOp�LessEqual/ReadVariableOp�Mul/ReadVariableOp�Mul/ReadVariableOp_1�ReadVariableOp�ReadVariableOp_1�ReadVariableOp_2�ReadVariableOp_3�ReadVariableOp_4�ReadVariableOp_5�ReadVariableOp_6�Sub/ReadVariableOp�'assert_greater_equal/Assert/AssertGuard�#assert_greater_equal/ReadVariableOp�cond�0polynomial_decay_pruning_schedule/ReadVariableOp^
ReadVariableOpReadVariableOpreadvariableop_resource*
_output_shapes
: *
dtype0	G
add/yConst*
_output_shapes
: *
dtype0	*
value	B	 RU
addAddV2ReadVariableOp:value:0add/y:output:0*
T0	*
_output_shapes
: �
AssignVariableOpAssignVariableOpreadvariableop_resourceadd:z:0^ReadVariableOp*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0	*
validate_shape(7
updateNoOp^AssignVariableOp*
_output_shapes
 �
#assert_greater_equal/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp*
_output_shapes
: *
dtype0	X
assert_greater_equal/yConst*
_output_shapes
: *
dtype0	*
value	B	 R�
!assert_greater_equal/GreaterEqualGreaterEqual+assert_greater_equal/ReadVariableOp:value:0assert_greater_equal/y:output:0*
T0	*
_output_shapes
: [
assert_greater_equal/RankConst*
_output_shapes
: *
dtype0*
value	B : b
 assert_greater_equal/range/startConst*
_output_shapes
: *
dtype0*
value	B : b
 assert_greater_equal/range/deltaConst*
_output_shapes
: *
dtype0*
value	B :�
assert_greater_equal/rangeRange)assert_greater_equal/range/start:output:0"assert_greater_equal/Rank:output:0)assert_greater_equal/range/delta:output:0*
_output_shapes
: �
assert_greater_equal/AllAll%assert_greater_equal/GreaterEqual:z:0#assert_greater_equal/range:output:0*
_output_shapes
: �
!assert_greater_equal/Assert/ConstConst*
_output_shapes
: *
dtype0*�
value�B� B�Prune() wrapper requires the UpdatePruningStep callback to be provided during training. Please add it as a callback to your model.fit call.�
#assert_greater_equal/Assert/Const_1Const*
_output_shapes
: *
dtype0*<
value3B1 B+Condition x >= y did not hold element-wise:�
#assert_greater_equal/Assert/Const_2Const*
_output_shapes
: *
dtype0*=
value4B2 B,x (assert_greater_equal/ReadVariableOp:0) = �
#assert_greater_equal/Assert/Const_3Const*
_output_shapes
: *
dtype0*0
value'B% By (assert_greater_equal/y:0) = �
'assert_greater_equal/Assert/AssertGuardIf!assert_greater_equal/All:output:0!assert_greater_equal/All:output:0+assert_greater_equal/ReadVariableOp:value:0assert_greater_equal/y:output:0*
Tcond0
*
Tin
2
		*
Tout
2
*
_lower_using_switch_merge(*
_output_shapes
: * 
_read_only_resource_inputs
 *G
else_branch8R6
4assert_greater_equal_Assert_AssertGuard_false_564248*
output_shapes
: *F
then_branch7R5
3assert_greater_equal_Assert_AssertGuard_true_564247�
0assert_greater_equal/Assert/AssertGuard/IdentityIdentity0assert_greater_equal/Assert/AssertGuard:output:0*
T0
*&
 _has_manual_control_dependencies(*
_output_shapes
: �
0polynomial_decay_pruning_schedule/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	�
'polynomial_decay_pruning_schedule/sub/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R��
%polynomial_decay_pruning_schedule/subSub8polynomial_decay_pruning_schedule/ReadVariableOp:value:00polynomial_decay_pruning_schedule/sub/y:output:0*
T0	*
_output_shapes
: �
&polynomial_decay_pruning_schedule/CastCast)polynomial_decay_pruning_schedule/sub:z:0*

DstT0*

SrcT0	*
_output_shapes
: �
+polynomial_decay_pruning_schedule/truediv/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 * �jF�
)polynomial_decay_pruning_schedule/truedivRealDiv*polynomial_decay_pruning_schedule/Cast:y:04polynomial_decay_pruning_schedule/truediv/y:output:0*
T0*
_output_shapes
: �
+polynomial_decay_pruning_schedule/Maximum/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *    �
)polynomial_decay_pruning_schedule/MaximumMaximum4polynomial_decay_pruning_schedule/Maximum/x:output:0-polynomial_decay_pruning_schedule/truediv:z:0*
T0*
_output_shapes
: �
+polynomial_decay_pruning_schedule/Minimum/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *  �?�
)polynomial_decay_pruning_schedule/MinimumMinimum4polynomial_decay_pruning_schedule/Minimum/x:output:0-polynomial_decay_pruning_schedule/Maximum:z:0*
T0*
_output_shapes
: �
)polynomial_decay_pruning_schedule/sub_1/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *  �?�
'polynomial_decay_pruning_schedule/sub_1Sub2polynomial_decay_pruning_schedule/sub_1/x:output:0-polynomial_decay_pruning_schedule/Minimum:z:0*
T0*
_output_shapes
: �
'polynomial_decay_pruning_schedule/Pow/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *  @@�
%polynomial_decay_pruning_schedule/PowPow+polynomial_decay_pruning_schedule/sub_1:z:00polynomial_decay_pruning_schedule/Pow/y:output:0*
T0*
_output_shapes
: �
'polynomial_decay_pruning_schedule/Mul/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *   ��
%polynomial_decay_pruning_schedule/MulMul0polynomial_decay_pruning_schedule/Mul/x:output:0)polynomial_decay_pruning_schedule/Pow:z:0*
T0*
_output_shapes
: �
,polynomial_decay_pruning_schedule/sparsity/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *   ?�
*polynomial_decay_pruning_schedule/sparsityAddV2)polynomial_decay_pruning_schedule/Mul:z:05polynomial_decay_pruning_schedule/sparsity/y:output:0*
T0*
_output_shapes
: �
GreaterEqual/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	�
GreaterEqual/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R�{
GreaterEqualGreaterEqual#GreaterEqual/ReadVariableOp:value:0GreaterEqual/y:output:0*
T0	*
_output_shapes
: �
LessEqual/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	�
LessEqual/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
valueB		 Rܒo
	LessEqual	LessEqual LessEqual/ReadVariableOp:value:0LessEqual/y:output:0*
T0	*
_output_shapes
: }
Less/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB	 :ܒ{
Less/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
value	B : O
LessLessLess/x:output:0Less/y:output:0*
T0*
_output_shapes
: G
	LogicalOr	LogicalOrLessEqual:z:0Less:z:0*
_output_shapes
: Q

LogicalAnd
LogicalAndGreaterEqual:z:0LogicalOr:z:0*
_output_shapes
: �
Sub/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	{
Sub/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R�W
SubSubSub/ReadVariableOp:value:0Sub/y:output:0*
T0	*
_output_shapes
: �

FloorMod/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R�S
FloorModFloorModSub:z:0FloorMod/y:output:0*
T0	*
_output_shapes
: |
Equal/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value	B	 R O
EqualEqualFloorMod:z:0Equal/y:output:0*
T0	*
_output_shapes
: M
LogicalAnd_1
LogicalAndLogicalAnd:z:0	Equal:z:0*
_output_shapes
: �
condIfLogicalAnd_1:z:0readvariableop_resourcecond_input_1cond_input_2cond_input_3LogicalAnd_1:z:0^AssignVariableOp*
Tcond0
*
Tin	
2
*
Tout
2
*
_lower_using_switch_merge(*
_output_shapes
: *$
_read_only_resource_inputs
*$
else_branchR
cond_false_564305*
output_shapes
: *#
then_branchR
cond_true_564304q
cond/IdentityIdentitycond:output:0*
T0
*&
 _has_manual_control_dependencies(*
_output_shapes
: i
update_1NoOp1^assert_greater_equal/Assert/AssertGuard/Identity^cond/Identity*
_output_shapes
 _
Mul/ReadVariableOpReadVariableOpcond_input_1*
_output_shapes

:  *
dtype0h
Mul/ReadVariableOp_1ReadVariableOpcond_input_2^cond*
_output_shapes

:  *
dtype0m
MulMulMul/ReadVariableOp:value:0Mul/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  �
AssignVariableOp_1AssignVariableOpcond_input_1Mul:z:0^Mul/ReadVariableOp^cond*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�

group_depsNoOp^AssignVariableOp_1",/job:localhost/replica:0/task:0/device:GPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 e
group_deps_1NoOp^group_deps",/job:localhost/replica:0/task:0/device:GPU:0*
_output_shapes
 G
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
: r
ReadVariableOp_1ReadVariableOpcond_input_1^AssignVariableOp_1*
_output_shapes

:  *
dtype0L
mul_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   Ca
mul_1MulReadVariableOp_1:value:0mul_1/y:output:0*
T0*
_output_shapes

:  P
truedivRealDiv	mul_1:z:0Cast:y:0*
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

:  K
add_1AddV2Neg:y:0	Round:y:0*
T0*
_output_shapes

:  P
StopGradientStopGradient	add_1:z:0*
T0*
_output_shapes

:  [
add_2AddV2truediv:z:0StopGradient:output:0*
T0*
_output_shapes

:  \
clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  �Bv
clip_by_value/MinimumMinimum	add_2:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   �v
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*
_output_shapes

:  R
mul_2MulCast:y:0clip_by_value:z:0*
T0*
_output_shapes

:  P
truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C^
	truediv_1RealDiv	mul_2:z:0truediv_1/y:output:0*
T0*
_output_shapes

:  L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?V
mul_3Mulmul_3/x:output:0truediv_1:z:0*
T0*
_output_shapes

:  r
ReadVariableOp_2ReadVariableOpcond_input_1^AssignVariableOp_1*
_output_shapes

:  *
dtype0O
Neg_1NegReadVariableOp_2:value:0*
T0*
_output_shapes

:  M
add_3AddV2	Neg_1:y:0	mul_3:z:0*
T0*
_output_shapes

:  L
mul_4/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?R
mul_4Mulmul_4/x:output:0	add_3:z:0*
T0*
_output_shapes

:  R
StopGradient_1StopGradient	mul_4:z:0*
T0*
_output_shapes

:  r
ReadVariableOp_3ReadVariableOpcond_input_1^AssignVariableOp_1*
_output_shapes

:  *
dtype0j
add_4AddV2ReadVariableOp_3:value:0StopGradient_1:output:0*
T0*
_output_shapes

:  I
ShapeShapeinputs*
T0*
_output_shapes
::��Q
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
valueB"����    d
ReshapeReshapeinputsReshape/shape:output:0*
T0*'
_output_shapes
:��������� _
transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       c
	transpose	Transpose	add_4:z:0transpose/perm:output:0*
T0*
_output_shapes

:  `
Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"    ����f
	Reshape_1Reshapetranspose:y:0Reshape_1/shape:output:0*
T0*
_output_shapes

:  h
MatMulMatMulReshape:output:0Reshape_1:output:0*
T0*'
_output_shapes
:��������� S
Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B : S
Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : �
Reshape_2/shapePackunstack:output:0Reshape_2/shape/1:output:0Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:v
	Reshape_2ReshapeMatMul:product:0Reshape_2/shape:output:0*
T0*+
_output_shapes
:���������  I
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
ReadVariableOp_4ReadVariableOpreadvariableop_4_resource*
_output_shapes
: *
dtype0L
mul_5/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C]
mul_5MulReadVariableOp_4:value:0mul_5/y:output:0*
T0*
_output_shapes
: P
	truediv_2RealDiv	mul_5:z:0
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
add_5AddV2	Neg_2:y:0Round_1:y:0*
T0*
_output_shapes
: N
StopGradient_2StopGradient	add_5:z:0*
T0*
_output_shapes
: [
add_6AddV2truediv_2:z:0StopGradient_2:output:0*
T0*
_output_shapes
: ^
clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  �Bv
clip_by_value_1/MinimumMinimum	add_6:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   �x
clip_by_value_1Maximumclip_by_value_1/Minimum:z:0clip_by_value_1/y:output:0*
T0*
_output_shapes
: R
mul_6Mul
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
	truediv_3RealDiv	mul_6:z:0truediv_3/y:output:0*
T0*
_output_shapes
: L
mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?R
mul_7Mulmul_7/x:output:0truediv_3:z:0*
T0*
_output_shapes
: f
ReadVariableOp_5ReadVariableOpreadvariableop_4_resource*
_output_shapes
: *
dtype0K
Neg_3NegReadVariableOp_5:value:0*
T0*
_output_shapes
: I
add_7AddV2	Neg_3:y:0	mul_7:z:0*
T0*
_output_shapes
: L
mul_8/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?N
mul_8Mulmul_8/x:output:0	add_7:z:0*
T0*
_output_shapes
: N
StopGradient_3StopGradient	mul_8:z:0*
T0*
_output_shapes
: f
ReadVariableOp_6ReadVariableOpreadvariableop_4_resource*
_output_shapes
: *
dtype0f
add_8AddV2ReadVariableOp_6:value:0StopGradient_3:output:0*
T0*
_output_shapes
: g
BiasAddBiasAddReshape_2:output:0	add_8:z:0*
T0*+
_output_shapes
:���������  c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:���������  �
NoOpNoOp^AssignVariableOp^AssignVariableOp_1^GreaterEqual/ReadVariableOp^LessEqual/ReadVariableOp^Mul/ReadVariableOp^Mul/ReadVariableOp_1^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5^ReadVariableOp_6^Sub/ReadVariableOp(^assert_greater_equal/Assert/AssertGuard$^assert_greater_equal/ReadVariableOp^cond1^polynomial_decay_pruning_schedule/ReadVariableOp*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*4
_input_shapes#
!:���������  : : : : : 2(
AssignVariableOp_1AssignVariableOp_12$
AssignVariableOpAssignVariableOp2:
GreaterEqual/ReadVariableOpGreaterEqual/ReadVariableOp24
LessEqual/ReadVariableOpLessEqual/ReadVariableOp2,
Mul/ReadVariableOp_1Mul/ReadVariableOp_12(
Mul/ReadVariableOpMul/ReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_52$
ReadVariableOp_6ReadVariableOp_62 
ReadVariableOpReadVariableOp2(
Sub/ReadVariableOpSub/ReadVariableOp2R
'assert_greater_equal/Assert/AssertGuard'assert_greater_equal/Assert/AssertGuard2J
#assert_greater_equal/ReadVariableOp#assert_greater_equal/ReadVariableOp2
condcond2d
0polynomial_decay_pruning_schedule/ReadVariableOp0polynomial_decay_pruning_schedule/ReadVariableOp:($
"
_user_specified_name
resource:'#
!
_user_specified_name	input_3:'#
!
_user_specified_name	input_2:'#
!
_user_specified_name	input_1:($
"
_user_specified_name
resource:S O
+
_output_shapes
:���������  
 
_user_specified_nameinputs
�
�
U__inference_prune_low_magnitude_dense_layer_call_and_return_conditional_losses_568025

inputs-
mul_readvariableop_resource: /
mul_readvariableop_1_resource: -
biasadd_readvariableop_resource:
identity��AssignVariableOp�BiasAdd/ReadVariableOp�MatMul/ReadVariableOp�Mul/ReadVariableOp�Mul/ReadVariableOp_1'
	no_updateNoOp*
_output_shapes
 )
no_update_1NoOp*
_output_shapes
 n
Mul/ReadVariableOpReadVariableOpmul_readvariableop_resource*
_output_shapes

: *
dtype0r
Mul/ReadVariableOp_1ReadVariableOpmul_readvariableop_1_resource*
_output_shapes

: *
dtype0m
MulMulMul/ReadVariableOp:value:0Mul/ReadVariableOp_1:value:0*
T0*
_output_shapes

: �
AssignVariableOpAssignVariableOpmul_readvariableop_resourceMul:z:0^Mul/ReadVariableOp*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�

group_depsNoOp^AssignVariableOp",/job:localhost/replica:0/task:0/device:GPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 e
group_deps_1NoOp^group_deps",/job:localhost/replica:0/task:0/device:GPU:0*
_output_shapes
 �
MatMul/ReadVariableOpReadVariableOpmul_readvariableop_resource^AssignVariableOp*
_output_shapes

: *
dtype0i
MatMulMatMulinputsMatMul/ReadVariableOp:value:0*
T0*'
_output_shapes
:���������r
BiasAdd/ReadVariableOpReadVariableOpbiasadd_readvariableop_resource*
_output_shapes
:*
dtype0v
BiasAddBiasAddMatMul:product:0BiasAdd/ReadVariableOp:value:0*
T0*'
_output_shapes
:���������_
IdentityIdentityBiasAdd:output:0^NoOp*
T0*'
_output_shapes
:����������
NoOpNoOp^AssignVariableOp^BiasAdd/ReadVariableOp^MatMul/ReadVariableOp^Mul/ReadVariableOp^Mul/ReadVariableOp_1*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*,
_input_shapes
:��������� : : : 2$
AssignVariableOpAssignVariableOp20
BiasAdd/ReadVariableOpBiasAdd/ReadVariableOp2.
MatMul/ReadVariableOpMatMul/ReadVariableOp2,
Mul/ReadVariableOp_1Mul/ReadVariableOp_12(
Mul/ReadVariableOpMul/ReadVariableOp:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:O K
'
_output_shapes
:��������� 
 
_user_specified_nameinputs
��
�
T__inference_prune_low_magnitude_phi1_layer_call_and_return_conditional_losses_566393

inputs!
readvariableop_resource:	 
cond_input_1: 
cond_input_2: 
cond_input_3: '
readvariableop_4_resource: 
identity��AssignVariableOp�AssignVariableOp_1�GreaterEqual/ReadVariableOp�LessEqual/ReadVariableOp�Mul/ReadVariableOp�Mul/ReadVariableOp_1�ReadVariableOp�ReadVariableOp_1�ReadVariableOp_2�ReadVariableOp_3�ReadVariableOp_4�ReadVariableOp_5�ReadVariableOp_6�Sub/ReadVariableOp�'assert_greater_equal/Assert/AssertGuard�#assert_greater_equal/ReadVariableOp�cond�0polynomial_decay_pruning_schedule/ReadVariableOp^
ReadVariableOpReadVariableOpreadvariableop_resource*
_output_shapes
: *
dtype0	G
add/yConst*
_output_shapes
: *
dtype0	*
value	B	 RU
addAddV2ReadVariableOp:value:0add/y:output:0*
T0	*
_output_shapes
: �
AssignVariableOpAssignVariableOpreadvariableop_resourceadd:z:0^ReadVariableOp*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0	*
validate_shape(7
updateNoOp^AssignVariableOp*
_output_shapes
 �
#assert_greater_equal/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp*
_output_shapes
: *
dtype0	X
assert_greater_equal/yConst*
_output_shapes
: *
dtype0	*
value	B	 R�
!assert_greater_equal/GreaterEqualGreaterEqual+assert_greater_equal/ReadVariableOp:value:0assert_greater_equal/y:output:0*
T0	*
_output_shapes
: [
assert_greater_equal/RankConst*
_output_shapes
: *
dtype0*
value	B : b
 assert_greater_equal/range/startConst*
_output_shapes
: *
dtype0*
value	B : b
 assert_greater_equal/range/deltaConst*
_output_shapes
: *
dtype0*
value	B :�
assert_greater_equal/rangeRange)assert_greater_equal/range/start:output:0"assert_greater_equal/Rank:output:0)assert_greater_equal/range/delta:output:0*
_output_shapes
: �
assert_greater_equal/AllAll%assert_greater_equal/GreaterEqual:z:0#assert_greater_equal/range:output:0*
_output_shapes
: �
!assert_greater_equal/Assert/ConstConst*
_output_shapes
: *
dtype0*�
value�B� B�Prune() wrapper requires the UpdatePruningStep callback to be provided during training. Please add it as a callback to your model.fit call.�
#assert_greater_equal/Assert/Const_1Const*
_output_shapes
: *
dtype0*<
value3B1 B+Condition x >= y did not hold element-wise:�
#assert_greater_equal/Assert/Const_2Const*
_output_shapes
: *
dtype0*=
value4B2 B,x (assert_greater_equal/ReadVariableOp:0) = �
#assert_greater_equal/Assert/Const_3Const*
_output_shapes
: *
dtype0*0
value'B% By (assert_greater_equal/y:0) = �
'assert_greater_equal/Assert/AssertGuardIf!assert_greater_equal/All:output:0!assert_greater_equal/All:output:0+assert_greater_equal/ReadVariableOp:value:0assert_greater_equal/y:output:0*
Tcond0
*
Tin
2
		*
Tout
2
*
_lower_using_switch_merge(*
_output_shapes
: * 
_read_only_resource_inputs
 *G
else_branch8R6
4assert_greater_equal_Assert_AssertGuard_false_566160*
output_shapes
: *F
then_branch7R5
3assert_greater_equal_Assert_AssertGuard_true_566159�
0assert_greater_equal/Assert/AssertGuard/IdentityIdentity0assert_greater_equal/Assert/AssertGuard:output:0*
T0
*&
 _has_manual_control_dependencies(*
_output_shapes
: �
0polynomial_decay_pruning_schedule/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	�
'polynomial_decay_pruning_schedule/sub/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R��
%polynomial_decay_pruning_schedule/subSub8polynomial_decay_pruning_schedule/ReadVariableOp:value:00polynomial_decay_pruning_schedule/sub/y:output:0*
T0	*
_output_shapes
: �
&polynomial_decay_pruning_schedule/CastCast)polynomial_decay_pruning_schedule/sub:z:0*

DstT0*

SrcT0	*
_output_shapes
: �
+polynomial_decay_pruning_schedule/truediv/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 * �jF�
)polynomial_decay_pruning_schedule/truedivRealDiv*polynomial_decay_pruning_schedule/Cast:y:04polynomial_decay_pruning_schedule/truediv/y:output:0*
T0*
_output_shapes
: �
+polynomial_decay_pruning_schedule/Maximum/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *    �
)polynomial_decay_pruning_schedule/MaximumMaximum4polynomial_decay_pruning_schedule/Maximum/x:output:0-polynomial_decay_pruning_schedule/truediv:z:0*
T0*
_output_shapes
: �
+polynomial_decay_pruning_schedule/Minimum/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *  �?�
)polynomial_decay_pruning_schedule/MinimumMinimum4polynomial_decay_pruning_schedule/Minimum/x:output:0-polynomial_decay_pruning_schedule/Maximum:z:0*
T0*
_output_shapes
: �
)polynomial_decay_pruning_schedule/sub_1/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *  �?�
'polynomial_decay_pruning_schedule/sub_1Sub2polynomial_decay_pruning_schedule/sub_1/x:output:0-polynomial_decay_pruning_schedule/Minimum:z:0*
T0*
_output_shapes
: �
'polynomial_decay_pruning_schedule/Pow/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *  @@�
%polynomial_decay_pruning_schedule/PowPow+polynomial_decay_pruning_schedule/sub_1:z:00polynomial_decay_pruning_schedule/Pow/y:output:0*
T0*
_output_shapes
: �
'polynomial_decay_pruning_schedule/Mul/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *   ��
%polynomial_decay_pruning_schedule/MulMul0polynomial_decay_pruning_schedule/Mul/x:output:0)polynomial_decay_pruning_schedule/Pow:z:0*
T0*
_output_shapes
: �
,polynomial_decay_pruning_schedule/sparsity/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *   ?�
*polynomial_decay_pruning_schedule/sparsityAddV2)polynomial_decay_pruning_schedule/Mul:z:05polynomial_decay_pruning_schedule/sparsity/y:output:0*
T0*
_output_shapes
: �
GreaterEqual/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	�
GreaterEqual/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R�{
GreaterEqualGreaterEqual#GreaterEqual/ReadVariableOp:value:0GreaterEqual/y:output:0*
T0	*
_output_shapes
: �
LessEqual/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	�
LessEqual/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
valueB		 Rܒo
	LessEqual	LessEqual LessEqual/ReadVariableOp:value:0LessEqual/y:output:0*
T0	*
_output_shapes
: }
Less/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB	 :ܒ{
Less/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
value	B : O
LessLessLess/x:output:0Less/y:output:0*
T0*
_output_shapes
: G
	LogicalOr	LogicalOrLessEqual:z:0Less:z:0*
_output_shapes
: Q

LogicalAnd
LogicalAndGreaterEqual:z:0LogicalOr:z:0*
_output_shapes
: �
Sub/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	{
Sub/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R�W
SubSubSub/ReadVariableOp:value:0Sub/y:output:0*
T0	*
_output_shapes
: �

FloorMod/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R�S
FloorModFloorModSub:z:0FloorMod/y:output:0*
T0	*
_output_shapes
: |
Equal/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value	B	 R O
EqualEqualFloorMod:z:0Equal/y:output:0*
T0	*
_output_shapes
: M
LogicalAnd_1
LogicalAndLogicalAnd:z:0	Equal:z:0*
_output_shapes
: �
condIfLogicalAnd_1:z:0readvariableop_resourcecond_input_1cond_input_2cond_input_3LogicalAnd_1:z:0^AssignVariableOp*
Tcond0
*
Tin	
2
*
Tout
2
*
_lower_using_switch_merge(*
_output_shapes
: *$
_read_only_resource_inputs
*$
else_branchR
cond_false_566217*
output_shapes
: *#
then_branchR
cond_true_566216q
cond/IdentityIdentitycond:output:0*
T0
*&
 _has_manual_control_dependencies(*
_output_shapes
: i
update_1NoOp1^assert_greater_equal/Assert/AssertGuard/Identity^cond/Identity*
_output_shapes
 _
Mul/ReadVariableOpReadVariableOpcond_input_1*
_output_shapes

: *
dtype0h
Mul/ReadVariableOp_1ReadVariableOpcond_input_2^cond*
_output_shapes

: *
dtype0m
MulMulMul/ReadVariableOp:value:0Mul/ReadVariableOp_1:value:0*
T0*
_output_shapes

: �
AssignVariableOp_1AssignVariableOpcond_input_1Mul:z:0^Mul/ReadVariableOp^cond*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�

group_depsNoOp^AssignVariableOp_1",/job:localhost/replica:0/task:0/device:GPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 e
group_deps_1NoOp^group_deps",/job:localhost/replica:0/task:0/device:GPU:0*
_output_shapes
 G
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
: r
ReadVariableOp_1ReadVariableOpcond_input_1^AssignVariableOp_1*
_output_shapes

: *
dtype0L
mul_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   Ca
mul_1MulReadVariableOp_1:value:0mul_1/y:output:0*
T0*
_output_shapes

: P
truedivRealDiv	mul_1:z:0Cast:y:0*
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

: K
add_1AddV2Neg:y:0	Round:y:0*
T0*
_output_shapes

: P
StopGradientStopGradient	add_1:z:0*
T0*
_output_shapes

: [
add_2AddV2truediv:z:0StopGradient:output:0*
T0*
_output_shapes

: \
clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  �Bv
clip_by_value/MinimumMinimum	add_2:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   �v
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*
_output_shapes

: R
mul_2MulCast:y:0clip_by_value:z:0*
T0*
_output_shapes

: P
truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C^
	truediv_1RealDiv	mul_2:z:0truediv_1/y:output:0*
T0*
_output_shapes

: L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?V
mul_3Mulmul_3/x:output:0truediv_1:z:0*
T0*
_output_shapes

: r
ReadVariableOp_2ReadVariableOpcond_input_1^AssignVariableOp_1*
_output_shapes

: *
dtype0O
Neg_1NegReadVariableOp_2:value:0*
T0*
_output_shapes

: M
add_3AddV2	Neg_1:y:0	mul_3:z:0*
T0*
_output_shapes

: L
mul_4/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?R
mul_4Mulmul_4/x:output:0	add_3:z:0*
T0*
_output_shapes

: R
StopGradient_1StopGradient	mul_4:z:0*
T0*
_output_shapes

: r
ReadVariableOp_3ReadVariableOpcond_input_1^AssignVariableOp_1*
_output_shapes

: *
dtype0j
add_4AddV2ReadVariableOp_3:value:0StopGradient_1:output:0*
T0*
_output_shapes

: I
ShapeShapeinputs*
T0*
_output_shapes
::��Q
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
valueB"����   d
ReshapeReshapeinputsReshape/shape:output:0*
T0*'
_output_shapes
:���������_
transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       c
	transpose	Transpose	add_4:z:0transpose/perm:output:0*
T0*
_output_shapes

: `
Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"   ����f
	Reshape_1Reshapetranspose:y:0Reshape_1/shape:output:0*
T0*
_output_shapes

: h
MatMulMatMulReshape:output:0Reshape_1:output:0*
T0*'
_output_shapes
:��������� S
Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B : S
Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : �
Reshape_2/shapePackunstack:output:0Reshape_2/shape/1:output:0Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:v
	Reshape_2ReshapeMatMul:product:0Reshape_2/shape:output:0*
T0*+
_output_shapes
:���������  I
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
ReadVariableOp_4ReadVariableOpreadvariableop_4_resource*
_output_shapes
: *
dtype0L
mul_5/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C]
mul_5MulReadVariableOp_4:value:0mul_5/y:output:0*
T0*
_output_shapes
: P
	truediv_2RealDiv	mul_5:z:0
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
add_5AddV2	Neg_2:y:0Round_1:y:0*
T0*
_output_shapes
: N
StopGradient_2StopGradient	add_5:z:0*
T0*
_output_shapes
: [
add_6AddV2truediv_2:z:0StopGradient_2:output:0*
T0*
_output_shapes
: ^
clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  �Bv
clip_by_value_1/MinimumMinimum	add_6:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   �x
clip_by_value_1Maximumclip_by_value_1/Minimum:z:0clip_by_value_1/y:output:0*
T0*
_output_shapes
: R
mul_6Mul
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
	truediv_3RealDiv	mul_6:z:0truediv_3/y:output:0*
T0*
_output_shapes
: L
mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?R
mul_7Mulmul_7/x:output:0truediv_3:z:0*
T0*
_output_shapes
: f
ReadVariableOp_5ReadVariableOpreadvariableop_4_resource*
_output_shapes
: *
dtype0K
Neg_3NegReadVariableOp_5:value:0*
T0*
_output_shapes
: I
add_7AddV2	Neg_3:y:0	mul_7:z:0*
T0*
_output_shapes
: L
mul_8/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?N
mul_8Mulmul_8/x:output:0	add_7:z:0*
T0*
_output_shapes
: N
StopGradient_3StopGradient	mul_8:z:0*
T0*
_output_shapes
: f
ReadVariableOp_6ReadVariableOpreadvariableop_4_resource*
_output_shapes
: *
dtype0f
add_8AddV2ReadVariableOp_6:value:0StopGradient_3:output:0*
T0*
_output_shapes
: g
BiasAddBiasAddReshape_2:output:0	add_8:z:0*
T0*+
_output_shapes
:���������  c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:���������  �
NoOpNoOp^AssignVariableOp^AssignVariableOp_1^GreaterEqual/ReadVariableOp^LessEqual/ReadVariableOp^Mul/ReadVariableOp^Mul/ReadVariableOp_1^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5^ReadVariableOp_6^Sub/ReadVariableOp(^assert_greater_equal/Assert/AssertGuard$^assert_greater_equal/ReadVariableOp^cond1^polynomial_decay_pruning_schedule/ReadVariableOp*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*4
_input_shapes#
!:��������� : : : : : 2(
AssignVariableOp_1AssignVariableOp_12$
AssignVariableOpAssignVariableOp2:
GreaterEqual/ReadVariableOpGreaterEqual/ReadVariableOp24
LessEqual/ReadVariableOpLessEqual/ReadVariableOp2,
Mul/ReadVariableOp_1Mul/ReadVariableOp_12(
Mul/ReadVariableOpMul/ReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_52$
ReadVariableOp_6ReadVariableOp_62 
ReadVariableOpReadVariableOp2(
Sub/ReadVariableOpSub/ReadVariableOp2R
'assert_greater_equal/Assert/AssertGuard'assert_greater_equal/Assert/AssertGuard2J
#assert_greater_equal/ReadVariableOp#assert_greater_equal/ReadVariableOp2
condcond2d
0polynomial_decay_pruning_schedule/ReadVariableOp0polynomial_decay_pruning_schedule/ReadVariableOp:($
"
_user_specified_name
resource:'#
!
_user_specified_name	input_3:'#
!
_user_specified_name	input_2:'#
!
_user_specified_name	input_1:($
"
_user_specified_name
resource:S O
+
_output_shapes
:��������� 
 
_user_specified_nameinputs
�
K
/__inference_q_activation_4_layer_call_fn_567760

inputs
identity�
PartitionedCallPartitionedCallinputs*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:��������� * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8� *S
fNRL
J__inference_q_activation_4_layer_call_and_return_conditional_losses_565179`
IdentityIdentityPartitionedCall:output:0*
T0*'
_output_shapes
:��������� "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*&
_input_shapes
:��������� :O K
'
_output_shapes
:��������� 
 
_user_specified_nameinputs
�`
�
U__inference_prune_low_magnitude_dense_layer_call_and_return_conditional_losses_568011

inputs!
readvariableop_resource:	 
cond_input_1: 
cond_input_2: 
cond_input_3: -
biasadd_readvariableop_resource:
identity��AssignVariableOp�AssignVariableOp_1�BiasAdd/ReadVariableOp�GreaterEqual/ReadVariableOp�LessEqual/ReadVariableOp�MatMul/ReadVariableOp�Mul/ReadVariableOp�Mul/ReadVariableOp_1�ReadVariableOp�Sub/ReadVariableOp�'assert_greater_equal/Assert/AssertGuard�#assert_greater_equal/ReadVariableOp�cond�0polynomial_decay_pruning_schedule/ReadVariableOp^
ReadVariableOpReadVariableOpreadvariableop_resource*
_output_shapes
: *
dtype0	G
add/yConst*
_output_shapes
: *
dtype0	*
value	B	 RU
addAddV2ReadVariableOp:value:0add/y:output:0*
T0	*
_output_shapes
: �
AssignVariableOpAssignVariableOpreadvariableop_resourceadd:z:0^ReadVariableOp*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0	*
validate_shape(7
updateNoOp^AssignVariableOp*
_output_shapes
 �
#assert_greater_equal/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp*
_output_shapes
: *
dtype0	X
assert_greater_equal/yConst*
_output_shapes
: *
dtype0	*
value	B	 R�
!assert_greater_equal/GreaterEqualGreaterEqual+assert_greater_equal/ReadVariableOp:value:0assert_greater_equal/y:output:0*
T0	*
_output_shapes
: [
assert_greater_equal/RankConst*
_output_shapes
: *
dtype0*
value	B : b
 assert_greater_equal/range/startConst*
_output_shapes
: *
dtype0*
value	B : b
 assert_greater_equal/range/deltaConst*
_output_shapes
: *
dtype0*
value	B :�
assert_greater_equal/rangeRange)assert_greater_equal/range/start:output:0"assert_greater_equal/Rank:output:0)assert_greater_equal/range/delta:output:0*
_output_shapes
: �
assert_greater_equal/AllAll%assert_greater_equal/GreaterEqual:z:0#assert_greater_equal/range:output:0*
_output_shapes
: �
!assert_greater_equal/Assert/ConstConst*
_output_shapes
: *
dtype0*�
value�B� B�Prune() wrapper requires the UpdatePruningStep callback to be provided during training. Please add it as a callback to your model.fit call.�
#assert_greater_equal/Assert/Const_1Const*
_output_shapes
: *
dtype0*<
value3B1 B+Condition x >= y did not hold element-wise:�
#assert_greater_equal/Assert/Const_2Const*
_output_shapes
: *
dtype0*=
value4B2 B,x (assert_greater_equal/ReadVariableOp:0) = �
#assert_greater_equal/Assert/Const_3Const*
_output_shapes
: *
dtype0*0
value'B% By (assert_greater_equal/y:0) = �
'assert_greater_equal/Assert/AssertGuardIf!assert_greater_equal/All:output:0!assert_greater_equal/All:output:0+assert_greater_equal/ReadVariableOp:value:0assert_greater_equal/y:output:0*
Tcond0
*
Tin
2
		*
Tout
2
*
_lower_using_switch_merge(*
_output_shapes
: * 
_read_only_resource_inputs
 *G
else_branch8R6
4assert_greater_equal_Assert_AssertGuard_false_567853*
output_shapes
: *F
then_branch7R5
3assert_greater_equal_Assert_AssertGuard_true_567852�
0assert_greater_equal/Assert/AssertGuard/IdentityIdentity0assert_greater_equal/Assert/AssertGuard:output:0*
T0
*&
 _has_manual_control_dependencies(*
_output_shapes
: �
0polynomial_decay_pruning_schedule/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	�
'polynomial_decay_pruning_schedule/sub/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R��
%polynomial_decay_pruning_schedule/subSub8polynomial_decay_pruning_schedule/ReadVariableOp:value:00polynomial_decay_pruning_schedule/sub/y:output:0*
T0	*
_output_shapes
: �
&polynomial_decay_pruning_schedule/CastCast)polynomial_decay_pruning_schedule/sub:z:0*

DstT0*

SrcT0	*
_output_shapes
: �
+polynomial_decay_pruning_schedule/truediv/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 * �jF�
)polynomial_decay_pruning_schedule/truedivRealDiv*polynomial_decay_pruning_schedule/Cast:y:04polynomial_decay_pruning_schedule/truediv/y:output:0*
T0*
_output_shapes
: �
+polynomial_decay_pruning_schedule/Maximum/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *    �
)polynomial_decay_pruning_schedule/MaximumMaximum4polynomial_decay_pruning_schedule/Maximum/x:output:0-polynomial_decay_pruning_schedule/truediv:z:0*
T0*
_output_shapes
: �
+polynomial_decay_pruning_schedule/Minimum/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *  �?�
)polynomial_decay_pruning_schedule/MinimumMinimum4polynomial_decay_pruning_schedule/Minimum/x:output:0-polynomial_decay_pruning_schedule/Maximum:z:0*
T0*
_output_shapes
: �
)polynomial_decay_pruning_schedule/sub_1/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *  �?�
'polynomial_decay_pruning_schedule/sub_1Sub2polynomial_decay_pruning_schedule/sub_1/x:output:0-polynomial_decay_pruning_schedule/Minimum:z:0*
T0*
_output_shapes
: �
'polynomial_decay_pruning_schedule/Pow/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *  @@�
%polynomial_decay_pruning_schedule/PowPow+polynomial_decay_pruning_schedule/sub_1:z:00polynomial_decay_pruning_schedule/Pow/y:output:0*
T0*
_output_shapes
: �
'polynomial_decay_pruning_schedule/Mul/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *   ��
%polynomial_decay_pruning_schedule/MulMul0polynomial_decay_pruning_schedule/Mul/x:output:0)polynomial_decay_pruning_schedule/Pow:z:0*
T0*
_output_shapes
: �
,polynomial_decay_pruning_schedule/sparsity/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *   ?�
*polynomial_decay_pruning_schedule/sparsityAddV2)polynomial_decay_pruning_schedule/Mul:z:05polynomial_decay_pruning_schedule/sparsity/y:output:0*
T0*
_output_shapes
: �
GreaterEqual/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	�
GreaterEqual/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R�{
GreaterEqualGreaterEqual#GreaterEqual/ReadVariableOp:value:0GreaterEqual/y:output:0*
T0	*
_output_shapes
: �
LessEqual/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	�
LessEqual/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
valueB		 Rܒo
	LessEqual	LessEqual LessEqual/ReadVariableOp:value:0LessEqual/y:output:0*
T0	*
_output_shapes
: }
Less/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB	 :ܒ{
Less/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
value	B : O
LessLessLess/x:output:0Less/y:output:0*
T0*
_output_shapes
: G
	LogicalOr	LogicalOrLessEqual:z:0Less:z:0*
_output_shapes
: Q

LogicalAnd
LogicalAndGreaterEqual:z:0LogicalOr:z:0*
_output_shapes
: �
Sub/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	{
Sub/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R�W
SubSubSub/ReadVariableOp:value:0Sub/y:output:0*
T0	*
_output_shapes
: �

FloorMod/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R�S
FloorModFloorModSub:z:0FloorMod/y:output:0*
T0	*
_output_shapes
: |
Equal/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value	B	 R O
EqualEqualFloorMod:z:0Equal/y:output:0*
T0	*
_output_shapes
: M
LogicalAnd_1
LogicalAndLogicalAnd:z:0	Equal:z:0*
_output_shapes
: �
condIfLogicalAnd_1:z:0readvariableop_resourcecond_input_1cond_input_2cond_input_3LogicalAnd_1:z:0^AssignVariableOp*
Tcond0
*
Tin	
2
*
Tout
2
*
_lower_using_switch_merge(*
_output_shapes
: *$
_read_only_resource_inputs
*$
else_branchR
cond_false_567910*
output_shapes
: *#
then_branchR
cond_true_567909q
cond/IdentityIdentitycond:output:0*
T0
*&
 _has_manual_control_dependencies(*
_output_shapes
: i
update_1NoOp1^assert_greater_equal/Assert/AssertGuard/Identity^cond/Identity*
_output_shapes
 _
Mul/ReadVariableOpReadVariableOpcond_input_1*
_output_shapes

: *
dtype0h
Mul/ReadVariableOp_1ReadVariableOpcond_input_2^cond*
_output_shapes

: *
dtype0m
MulMulMul/ReadVariableOp:value:0Mul/ReadVariableOp_1:value:0*
T0*
_output_shapes

: �
AssignVariableOp_1AssignVariableOpcond_input_1Mul:z:0^Mul/ReadVariableOp^cond*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�

group_depsNoOp^AssignVariableOp_1",/job:localhost/replica:0/task:0/device:GPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 e
group_deps_1NoOp^group_deps",/job:localhost/replica:0/task:0/device:GPU:0*
_output_shapes
 w
MatMul/ReadVariableOpReadVariableOpcond_input_1^AssignVariableOp_1*
_output_shapes

: *
dtype0i
MatMulMatMulinputsMatMul/ReadVariableOp:value:0*
T0*'
_output_shapes
:���������r
BiasAdd/ReadVariableOpReadVariableOpbiasadd_readvariableop_resource*
_output_shapes
:*
dtype0v
BiasAddBiasAddMatMul:product:0BiasAdd/ReadVariableOp:value:0*
T0*'
_output_shapes
:���������_
IdentityIdentityBiasAdd:output:0^NoOp*
T0*'
_output_shapes
:����������
NoOpNoOp^AssignVariableOp^AssignVariableOp_1^BiasAdd/ReadVariableOp^GreaterEqual/ReadVariableOp^LessEqual/ReadVariableOp^MatMul/ReadVariableOp^Mul/ReadVariableOp^Mul/ReadVariableOp_1^ReadVariableOp^Sub/ReadVariableOp(^assert_greater_equal/Assert/AssertGuard$^assert_greater_equal/ReadVariableOp^cond1^polynomial_decay_pruning_schedule/ReadVariableOp*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*0
_input_shapes
:��������� : : : : : 2(
AssignVariableOp_1AssignVariableOp_12$
AssignVariableOpAssignVariableOp20
BiasAdd/ReadVariableOpBiasAdd/ReadVariableOp2:
GreaterEqual/ReadVariableOpGreaterEqual/ReadVariableOp24
LessEqual/ReadVariableOpLessEqual/ReadVariableOp2.
MatMul/ReadVariableOpMatMul/ReadVariableOp2,
Mul/ReadVariableOp_1Mul/ReadVariableOp_12(
Mul/ReadVariableOpMul/ReadVariableOp2 
ReadVariableOpReadVariableOp2(
Sub/ReadVariableOpSub/ReadVariableOp2R
'assert_greater_equal/Assert/AssertGuard'assert_greater_equal/Assert/AssertGuard2J
#assert_greater_equal/ReadVariableOp#assert_greater_equal/ReadVariableOp2
condcond2d
0polynomial_decay_pruning_schedule/ReadVariableOp0polynomial_decay_pruning_schedule/ReadVariableOp:($
"
_user_specified_name
resource:'#
!
_user_specified_name	input_3:'#
!
_user_specified_name	input_2:'#
!
_user_specified_name	input_1:($
"
_user_specified_name
resource:O K
'
_output_shapes
:��������� 
 
_user_specified_nameinputs
�
D
(__inference_softmax_layer_call_fn_568030

inputs
identity�
PartitionedCallPartitionedCallinputs*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:���������* 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8� *L
fGRE
C__inference_softmax_layer_call_and_return_conditional_losses_565374`
IdentityIdentityPartitionedCall:output:0*
T0*'
_output_shapes
:���������"
identityIdentity:output:0*(
_construction_contextkEagerRuntime*&
_input_shapes
:���������:O K
'
_output_shapes
:���������
 
_user_specified_nameinputs
� 
d
H__inference_q_activation_layer_call_and_return_conditional_losses_564227

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
:���������  J
ReluReluinputs*
T0*+
_output_shapes
:���������  S
	ones_likeOnesLikeinputs*
T0*+
_output_shapes
:���������  D
sub_2Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: Z
mulMulones_like:y:0	sub_2:z:0*
T0*+
_output_shapes
:���������  v
SelectV2SelectV2LessEqual:z:0Relu:activations:0mul:z:0*
T0*+
_output_shapes
:���������  T
mul_1MulinputsCast:y:0*
T0*+
_output_shapes
:���������  _
truedivRealDiv	mul_1:z:0
Cast_1:y:0*
T0*+
_output_shapes
:���������  M
NegNegtruediv:z:0*
T0*+
_output_shapes
:���������  Q
RoundRoundtruediv:z:0*
T0*+
_output_shapes
:���������  V
addAddV2Neg:y:0	Round:y:0*
T0*+
_output_shapes
:���������  [
StopGradientStopGradientadd:z:0*
T0*+
_output_shapes
:���������  h
add_1AddV2truediv:z:0StopGradient:output:0*
T0*+
_output_shapes
:���������  _
	truediv_1RealDiv	add_1:z:0Cast:y:0*
T0*+
_output_shapes
:���������  P
truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?U
	truediv_2RealDivtruediv_2/x:output:0Cast:y:0*
T0*
_output_shapes
: L
sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?N
sub_3Subsub_3/x:output:0truediv_2:z:0*
T0*
_output_shapes
: p
clip_by_value/MinimumMinimumtruediv_1:z:0	sub_3:z:0*
T0*+
_output_shapes
:���������  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    �
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*+
_output_shapes
:���������  a
mul_2Mul
Cast_1:y:0clip_by_value:z:0*
T0*+
_output_shapes
:���������  U
Neg_1NegSelectV2:output:0*
T0*+
_output_shapes
:���������  Z
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*+
_output_shapes
:���������  L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?_
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*+
_output_shapes
:���������  _
StopGradient_1StopGradient	mul_3:z:0*
T0*+
_output_shapes
:���������  p
add_3AddV2SelectV2:output:0StopGradient_1:output:0*
T0*+
_output_shapes
:���������  U
IdentityIdentity	add_3:z:0*
T0*+
_output_shapes
:���������  "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:���������  :S O
+
_output_shapes
:���������  
 
_user_specified_nameinputs
�
�
cond_false_567910
cond_placeholder
cond_placeholder_1
cond_placeholder_2
cond_placeholder_3
cond_identity_logicaland_1

cond_identity_1
O
	cond/NoOpNoOp*&
 _has_manual_control_dependencies(*
_output_shapes
 b
cond/IdentityIdentitycond_identity_logicaland_1
^cond/NoOp*
T0
*
_output_shapes
: T
cond/Identity_1Identitycond/Identity:output:0*
T0
*
_output_shapes
: "+
cond_identity_1cond/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes

: : : : : :D@

_output_shapes
: 
&
_user_specified_nameLogicalAnd_1
�
O
#__inference__update_step_xla_566099
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
�
U
9__inference_global_average_pooling1d_layer_call_fn_567415

inputs
identity�
PartitionedCallPartitionedCallinputs*
Tin
2*
Tout
2*
_collective_manager_ids
 *0
_output_shapes
:������������������* 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8� *]
fXRV
T__inference_global_average_pooling1d_layer_call_and_return_conditional_losses_563909i
IdentityIdentityPartitionedCall:output:0*
T0*0
_output_shapes
:������������������"
identityIdentity:output:0*(
_construction_contextkEagerRuntime*<
_input_shapes+
):'���������������������������:e a
=
_output_shapes+
):'���������������������������
 
_user_specified_nameinputs
�
�
3assert_greater_equal_Assert_AssertGuard_true_566159M
Iassert_greater_equal_assert_assertguard_identity_assert_greater_equal_all
7
3assert_greater_equal_assert_assertguard_placeholder	9
5assert_greater_equal_assert_assertguard_placeholder_1	6
2assert_greater_equal_assert_assertguard_identity_1
r
,assert_greater_equal/Assert/AssertGuard/NoOpNoOp*&
 _has_manual_control_dependencies(*
_output_shapes
 �
0assert_greater_equal/Assert/AssertGuard/IdentityIdentityIassert_greater_equal_assert_assertguard_identity_assert_greater_equal_all-^assert_greater_equal/Assert/AssertGuard/NoOp*
T0
*
_output_shapes
: �
2assert_greater_equal/Assert/AssertGuard/Identity_1Identity9assert_greater_equal/Assert/AssertGuard/Identity:output:0*
T0
*
_output_shapes
: "q
2assert_greater_equal_assert_assertguard_identity_1;assert_greater_equal/Assert/AssertGuard/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes
: : : :

_output_shapes
: :

_output_shapes
: :P L

_output_shapes
: 
2
_user_specified_nameassert_greater_equal/All
��
�
S__inference_prune_low_magnitude_rho_layer_call_and_return_conditional_losses_567683

inputs!
readvariableop_resource:	 
cond_input_1:  
cond_input_2:  
cond_input_3: '
readvariableop_4_resource: 
identity��AssignVariableOp�AssignVariableOp_1�GreaterEqual/ReadVariableOp�LessEqual/ReadVariableOp�Mul/ReadVariableOp�Mul/ReadVariableOp_1�ReadVariableOp�ReadVariableOp_1�ReadVariableOp_2�ReadVariableOp_3�ReadVariableOp_4�ReadVariableOp_5�ReadVariableOp_6�Sub/ReadVariableOp�'assert_greater_equal/Assert/AssertGuard�#assert_greater_equal/ReadVariableOp�cond�0polynomial_decay_pruning_schedule/ReadVariableOp^
ReadVariableOpReadVariableOpreadvariableop_resource*
_output_shapes
: *
dtype0	G
add/yConst*
_output_shapes
: *
dtype0	*
value	B	 RU
addAddV2ReadVariableOp:value:0add/y:output:0*
T0	*
_output_shapes
: �
AssignVariableOpAssignVariableOpreadvariableop_resourceadd:z:0^ReadVariableOp*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0	*
validate_shape(7
updateNoOp^AssignVariableOp*
_output_shapes
 �
#assert_greater_equal/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp*
_output_shapes
: *
dtype0	X
assert_greater_equal/yConst*
_output_shapes
: *
dtype0	*
value	B	 R�
!assert_greater_equal/GreaterEqualGreaterEqual+assert_greater_equal/ReadVariableOp:value:0assert_greater_equal/y:output:0*
T0	*
_output_shapes
: [
assert_greater_equal/RankConst*
_output_shapes
: *
dtype0*
value	B : b
 assert_greater_equal/range/startConst*
_output_shapes
: *
dtype0*
value	B : b
 assert_greater_equal/range/deltaConst*
_output_shapes
: *
dtype0*
value	B :�
assert_greater_equal/rangeRange)assert_greater_equal/range/start:output:0"assert_greater_equal/Rank:output:0)assert_greater_equal/range/delta:output:0*
_output_shapes
: �
assert_greater_equal/AllAll%assert_greater_equal/GreaterEqual:z:0#assert_greater_equal/range:output:0*
_output_shapes
: �
!assert_greater_equal/Assert/ConstConst*
_output_shapes
: *
dtype0*�
value�B� B�Prune() wrapper requires the UpdatePruningStep callback to be provided during training. Please add it as a callback to your model.fit call.�
#assert_greater_equal/Assert/Const_1Const*
_output_shapes
: *
dtype0*<
value3B1 B+Condition x >= y did not hold element-wise:�
#assert_greater_equal/Assert/Const_2Const*
_output_shapes
: *
dtype0*=
value4B2 B,x (assert_greater_equal/ReadVariableOp:0) = �
#assert_greater_equal/Assert/Const_3Const*
_output_shapes
: *
dtype0*0
value'B% By (assert_greater_equal/y:0) = �
'assert_greater_equal/Assert/AssertGuardIf!assert_greater_equal/All:output:0!assert_greater_equal/All:output:0+assert_greater_equal/ReadVariableOp:value:0assert_greater_equal/y:output:0*
Tcond0
*
Tin
2
		*
Tout
2
*
_lower_using_switch_merge(*
_output_shapes
: * 
_read_only_resource_inputs
 *G
else_branch8R6
4assert_greater_equal_Assert_AssertGuard_false_567467*
output_shapes
: *F
then_branch7R5
3assert_greater_equal_Assert_AssertGuard_true_567466�
0assert_greater_equal/Assert/AssertGuard/IdentityIdentity0assert_greater_equal/Assert/AssertGuard:output:0*
T0
*&
 _has_manual_control_dependencies(*
_output_shapes
: �
0polynomial_decay_pruning_schedule/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	�
'polynomial_decay_pruning_schedule/sub/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R��
%polynomial_decay_pruning_schedule/subSub8polynomial_decay_pruning_schedule/ReadVariableOp:value:00polynomial_decay_pruning_schedule/sub/y:output:0*
T0	*
_output_shapes
: �
&polynomial_decay_pruning_schedule/CastCast)polynomial_decay_pruning_schedule/sub:z:0*

DstT0*

SrcT0	*
_output_shapes
: �
+polynomial_decay_pruning_schedule/truediv/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 * �jF�
)polynomial_decay_pruning_schedule/truedivRealDiv*polynomial_decay_pruning_schedule/Cast:y:04polynomial_decay_pruning_schedule/truediv/y:output:0*
T0*
_output_shapes
: �
+polynomial_decay_pruning_schedule/Maximum/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *    �
)polynomial_decay_pruning_schedule/MaximumMaximum4polynomial_decay_pruning_schedule/Maximum/x:output:0-polynomial_decay_pruning_schedule/truediv:z:0*
T0*
_output_shapes
: �
+polynomial_decay_pruning_schedule/Minimum/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *  �?�
)polynomial_decay_pruning_schedule/MinimumMinimum4polynomial_decay_pruning_schedule/Minimum/x:output:0-polynomial_decay_pruning_schedule/Maximum:z:0*
T0*
_output_shapes
: �
)polynomial_decay_pruning_schedule/sub_1/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *  �?�
'polynomial_decay_pruning_schedule/sub_1Sub2polynomial_decay_pruning_schedule/sub_1/x:output:0-polynomial_decay_pruning_schedule/Minimum:z:0*
T0*
_output_shapes
: �
'polynomial_decay_pruning_schedule/Pow/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *  @@�
%polynomial_decay_pruning_schedule/PowPow+polynomial_decay_pruning_schedule/sub_1:z:00polynomial_decay_pruning_schedule/Pow/y:output:0*
T0*
_output_shapes
: �
'polynomial_decay_pruning_schedule/Mul/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *   ��
%polynomial_decay_pruning_schedule/MulMul0polynomial_decay_pruning_schedule/Mul/x:output:0)polynomial_decay_pruning_schedule/Pow:z:0*
T0*
_output_shapes
: �
,polynomial_decay_pruning_schedule/sparsity/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *   ?�
*polynomial_decay_pruning_schedule/sparsityAddV2)polynomial_decay_pruning_schedule/Mul:z:05polynomial_decay_pruning_schedule/sparsity/y:output:0*
T0*
_output_shapes
: �
GreaterEqual/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	�
GreaterEqual/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R�{
GreaterEqualGreaterEqual#GreaterEqual/ReadVariableOp:value:0GreaterEqual/y:output:0*
T0	*
_output_shapes
: �
LessEqual/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	�
LessEqual/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
valueB		 Rܒo
	LessEqual	LessEqual LessEqual/ReadVariableOp:value:0LessEqual/y:output:0*
T0	*
_output_shapes
: }
Less/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB	 :ܒ{
Less/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
value	B : O
LessLessLess/x:output:0Less/y:output:0*
T0*
_output_shapes
: G
	LogicalOr	LogicalOrLessEqual:z:0Less:z:0*
_output_shapes
: Q

LogicalAnd
LogicalAndGreaterEqual:z:0LogicalOr:z:0*
_output_shapes
: �
Sub/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	{
Sub/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R�W
SubSubSub/ReadVariableOp:value:0Sub/y:output:0*
T0	*
_output_shapes
: �

FloorMod/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R�S
FloorModFloorModSub:z:0FloorMod/y:output:0*
T0	*
_output_shapes
: |
Equal/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value	B	 R O
EqualEqualFloorMod:z:0Equal/y:output:0*
T0	*
_output_shapes
: M
LogicalAnd_1
LogicalAndLogicalAnd:z:0	Equal:z:0*
_output_shapes
: �
condIfLogicalAnd_1:z:0readvariableop_resourcecond_input_1cond_input_2cond_input_3LogicalAnd_1:z:0^AssignVariableOp*
Tcond0
*
Tin	
2
*
Tout
2
*
_lower_using_switch_merge(*
_output_shapes
: *$
_read_only_resource_inputs
*$
else_branchR
cond_false_567524*
output_shapes
: *#
then_branchR
cond_true_567523q
cond/IdentityIdentitycond:output:0*
T0
*&
 _has_manual_control_dependencies(*
_output_shapes
: i
update_1NoOp1^assert_greater_equal/Assert/AssertGuard/Identity^cond/Identity*
_output_shapes
 _
Mul/ReadVariableOpReadVariableOpcond_input_1*
_output_shapes

:  *
dtype0h
Mul/ReadVariableOp_1ReadVariableOpcond_input_2^cond*
_output_shapes

:  *
dtype0m
MulMulMul/ReadVariableOp:value:0Mul/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  �
AssignVariableOp_1AssignVariableOpcond_input_1Mul:z:0^Mul/ReadVariableOp^cond*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�

group_depsNoOp^AssignVariableOp_1",/job:localhost/replica:0/task:0/device:GPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 e
group_deps_1NoOp^group_deps",/job:localhost/replica:0/task:0/device:GPU:0*
_output_shapes
 G
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
: r
ReadVariableOp_1ReadVariableOpcond_input_1^AssignVariableOp_1*
_output_shapes

:  *
dtype0L
mul_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   Ca
mul_1MulReadVariableOp_1:value:0mul_1/y:output:0*
T0*
_output_shapes

:  P
truedivRealDiv	mul_1:z:0Cast:y:0*
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

:  K
add_1AddV2Neg:y:0	Round:y:0*
T0*
_output_shapes

:  P
StopGradientStopGradient	add_1:z:0*
T0*
_output_shapes

:  [
add_2AddV2truediv:z:0StopGradient:output:0*
T0*
_output_shapes

:  \
clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  �Bv
clip_by_value/MinimumMinimum	add_2:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   �v
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*
_output_shapes

:  R
mul_2MulCast:y:0clip_by_value:z:0*
T0*
_output_shapes

:  P
truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C^
	truediv_1RealDiv	mul_2:z:0truediv_1/y:output:0*
T0*
_output_shapes

:  L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?V
mul_3Mulmul_3/x:output:0truediv_1:z:0*
T0*
_output_shapes

:  r
ReadVariableOp_2ReadVariableOpcond_input_1^AssignVariableOp_1*
_output_shapes

:  *
dtype0O
Neg_1NegReadVariableOp_2:value:0*
T0*
_output_shapes

:  M
add_3AddV2	Neg_1:y:0	mul_3:z:0*
T0*
_output_shapes

:  L
mul_4/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?R
mul_4Mulmul_4/x:output:0	add_3:z:0*
T0*
_output_shapes

:  R
StopGradient_1StopGradient	mul_4:z:0*
T0*
_output_shapes

:  r
ReadVariableOp_3ReadVariableOpcond_input_1^AssignVariableOp_1*
_output_shapes

:  *
dtype0j
add_4AddV2ReadVariableOp_3:value:0StopGradient_1:output:0*
T0*
_output_shapes

:  U
MatMulMatMulinputs	add_4:z:0*
T0*'
_output_shapes
:��������� I
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
ReadVariableOp_4ReadVariableOpreadvariableop_4_resource*
_output_shapes
: *
dtype0L
mul_5/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C]
mul_5MulReadVariableOp_4:value:0mul_5/y:output:0*
T0*
_output_shapes
: P
	truediv_2RealDiv	mul_5:z:0
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
add_5AddV2	Neg_2:y:0Round_1:y:0*
T0*
_output_shapes
: N
StopGradient_2StopGradient	add_5:z:0*
T0*
_output_shapes
: [
add_6AddV2truediv_2:z:0StopGradient_2:output:0*
T0*
_output_shapes
: ^
clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  �Bv
clip_by_value_1/MinimumMinimum	add_6:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   �x
clip_by_value_1Maximumclip_by_value_1/Minimum:z:0clip_by_value_1/y:output:0*
T0*
_output_shapes
: R
mul_6Mul
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
	truediv_3RealDiv	mul_6:z:0truediv_3/y:output:0*
T0*
_output_shapes
: L
mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?R
mul_7Mulmul_7/x:output:0truediv_3:z:0*
T0*
_output_shapes
: f
ReadVariableOp_5ReadVariableOpreadvariableop_4_resource*
_output_shapes
: *
dtype0K
Neg_3NegReadVariableOp_5:value:0*
T0*
_output_shapes
: I
add_7AddV2	Neg_3:y:0	mul_7:z:0*
T0*
_output_shapes
: L
mul_8/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?N
mul_8Mulmul_8/x:output:0	add_7:z:0*
T0*
_output_shapes
: N
StopGradient_3StopGradient	mul_8:z:0*
T0*
_output_shapes
: f
ReadVariableOp_6ReadVariableOpreadvariableop_4_resource*
_output_shapes
: *
dtype0f
add_8AddV2ReadVariableOp_6:value:0StopGradient_3:output:0*
T0*
_output_shapes
: a
BiasAddBiasAddMatMul:product:0	add_8:z:0*
T0*'
_output_shapes
:��������� _
IdentityIdentityBiasAdd:output:0^NoOp*
T0*'
_output_shapes
:��������� �
NoOpNoOp^AssignVariableOp^AssignVariableOp_1^GreaterEqual/ReadVariableOp^LessEqual/ReadVariableOp^Mul/ReadVariableOp^Mul/ReadVariableOp_1^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5^ReadVariableOp_6^Sub/ReadVariableOp(^assert_greater_equal/Assert/AssertGuard$^assert_greater_equal/ReadVariableOp^cond1^polynomial_decay_pruning_schedule/ReadVariableOp*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*0
_input_shapes
:��������� : : : : : 2(
AssignVariableOp_1AssignVariableOp_12$
AssignVariableOpAssignVariableOp2:
GreaterEqual/ReadVariableOpGreaterEqual/ReadVariableOp24
LessEqual/ReadVariableOpLessEqual/ReadVariableOp2,
Mul/ReadVariableOp_1Mul/ReadVariableOp_12(
Mul/ReadVariableOpMul/ReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_52$
ReadVariableOp_6ReadVariableOp_62 
ReadVariableOpReadVariableOp2(
Sub/ReadVariableOpSub/ReadVariableOp2R
'assert_greater_equal/Assert/AssertGuard'assert_greater_equal/Assert/AssertGuard2J
#assert_greater_equal/ReadVariableOp#assert_greater_equal/ReadVariableOp2
condcond2d
0polynomial_decay_pruning_schedule/ReadVariableOp0polynomial_decay_pruning_schedule/ReadVariableOp:($
"
_user_specified_name
resource:'#
!
_user_specified_name	input_3:'#
!
_user_specified_name	input_2:'#
!
_user_specified_name	input_1:($
"
_user_specified_name
resource:O K
'
_output_shapes
:��������� 
 
_user_specified_nameinputs
�
K
#__inference__update_step_xla_566084
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
�
�
3assert_greater_equal_Assert_AssertGuard_true_566579M
Iassert_greater_equal_assert_assertguard_identity_assert_greater_equal_all
7
3assert_greater_equal_assert_assertguard_placeholder	9
5assert_greater_equal_assert_assertguard_placeholder_1	6
2assert_greater_equal_assert_assertguard_identity_1
r
,assert_greater_equal/Assert/AssertGuard/NoOpNoOp*&
 _has_manual_control_dependencies(*
_output_shapes
 �
0assert_greater_equal/Assert/AssertGuard/IdentityIdentityIassert_greater_equal_assert_assertguard_identity_assert_greater_equal_all-^assert_greater_equal/Assert/AssertGuard/NoOp*
T0
*
_output_shapes
: �
2assert_greater_equal/Assert/AssertGuard/Identity_1Identity9assert_greater_equal/Assert/AssertGuard/Identity:output:0*
T0
*
_output_shapes
: "q
2assert_greater_equal_assert_assertguard_identity_1;assert_greater_equal/Assert/AssertGuard/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes
: : : :

_output_shapes
: :

_output_shapes
: :P L

_output_shapes
: 
2
_user_specified_nameassert_greater_equal/All
�
�
:__inference_prune_low_magnitude_dense_layer_call_fn_567833

inputs
unknown: 
	unknown_0: 
	unknown_1:
identity��StatefulPartitionedCall�
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0	unknown_1*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:���������*$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8� *^
fYRW
U__inference_prune_low_magnitude_dense_layer_call_and_return_conditional_losses_565766o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:���������<
NoOpNoOp^StatefulPartitionedCall*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*,
_input_shapes
:��������� : : : 22
StatefulPartitionedCallStatefulPartitionedCall:&"
 
_user_specified_name567829:&"
 
_user_specified_name567827:&"
 
_user_specified_name567825:O K
'
_output_shapes
:��������� 
 
_user_specified_nameinputs
�

�
9__inference_prune_low_magnitude_phi1_layer_call_fn_566129

inputs
unknown:	 
	unknown_0: 
	unknown_1: 
	unknown_2: 
	unknown_3: 
identity��StatefulPartitionedCall�
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0	unknown_1	unknown_2	unknown_3*
Tin

2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:���������  *#
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8� *]
fXRV
T__inference_prune_low_magnitude_phi1_layer_call_and_return_conditional_losses_564169s
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:���������  <
NoOpNoOp^StatefulPartitionedCall*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*4
_input_shapes#
!:��������� : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:&"
 
_user_specified_name566125:&"
 
_user_specified_name566123:&"
 
_user_specified_name566121:&"
 
_user_specified_name566119:&"
 
_user_specified_name566117:S O
+
_output_shapes
:��������� 
 
_user_specified_nameinputs
�X
�
cond_true_563992H
>cond_polynomial_decay_pruning_schedule_readvariableop_resource:	 >
,cond_pruning_ops_abs_readvariableop_resource: 0
cond_assignvariableop_resource: *
 cond_assignvariableop_1_resource: 
cond_identity_logicaland_1

cond_identity_1
��cond/AssignVariableOp�cond/AssignVariableOp_1� cond/GreaterEqual/ReadVariableOp�cond/LessEqual/ReadVariableOp�cond/Sub/ReadVariableOp�5cond/polynomial_decay_pruning_schedule/ReadVariableOp�#cond/pruning_ops/Abs/ReadVariableOp�
5cond/polynomial_decay_pruning_schedule/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	o
,cond/polynomial_decay_pruning_schedule/sub/yConst*
_output_shapes
: *
dtype0	*
value
B	 R��
*cond/polynomial_decay_pruning_schedule/subSub=cond/polynomial_decay_pruning_schedule/ReadVariableOp:value:05cond/polynomial_decay_pruning_schedule/sub/y:output:0*
T0	*
_output_shapes
: �
+cond/polynomial_decay_pruning_schedule/CastCast.cond/polynomial_decay_pruning_schedule/sub:z:0*

DstT0*

SrcT0	*
_output_shapes
: u
0cond/polynomial_decay_pruning_schedule/truediv/yConst*
_output_shapes
: *
dtype0*
valueB
 * �jF�
.cond/polynomial_decay_pruning_schedule/truedivRealDiv/cond/polynomial_decay_pruning_schedule/Cast:y:09cond/polynomial_decay_pruning_schedule/truediv/y:output:0*
T0*
_output_shapes
: u
0cond/polynomial_decay_pruning_schedule/Maximum/xConst*
_output_shapes
: *
dtype0*
valueB
 *    �
.cond/polynomial_decay_pruning_schedule/MaximumMaximum9cond/polynomial_decay_pruning_schedule/Maximum/x:output:02cond/polynomial_decay_pruning_schedule/truediv:z:0*
T0*
_output_shapes
: u
0cond/polynomial_decay_pruning_schedule/Minimum/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
.cond/polynomial_decay_pruning_schedule/MinimumMinimum9cond/polynomial_decay_pruning_schedule/Minimum/x:output:02cond/polynomial_decay_pruning_schedule/Maximum:z:0*
T0*
_output_shapes
: s
.cond/polynomial_decay_pruning_schedule/sub_1/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
,cond/polynomial_decay_pruning_schedule/sub_1Sub7cond/polynomial_decay_pruning_schedule/sub_1/x:output:02cond/polynomial_decay_pruning_schedule/Minimum:z:0*
T0*
_output_shapes
: q
,cond/polynomial_decay_pruning_schedule/Pow/yConst*
_output_shapes
: *
dtype0*
valueB
 *  @@�
*cond/polynomial_decay_pruning_schedule/PowPow0cond/polynomial_decay_pruning_schedule/sub_1:z:05cond/polynomial_decay_pruning_schedule/Pow/y:output:0*
T0*
_output_shapes
: q
,cond/polynomial_decay_pruning_schedule/Mul/xConst*
_output_shapes
: *
dtype0*
valueB
 *   ��
*cond/polynomial_decay_pruning_schedule/MulMul5cond/polynomial_decay_pruning_schedule/Mul/x:output:0.cond/polynomial_decay_pruning_schedule/Pow:z:0*
T0*
_output_shapes
: v
1cond/polynomial_decay_pruning_schedule/sparsity/yConst*
_output_shapes
: *
dtype0*
valueB
 *   ?�
/cond/polynomial_decay_pruning_schedule/sparsityAddV2.cond/polynomial_decay_pruning_schedule/Mul:z:0:cond/polynomial_decay_pruning_schedule/sparsity/y:output:0*
T0*
_output_shapes
: �
 cond/GreaterEqual/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	V
cond/GreaterEqual/yConst*
_output_shapes
: *
dtype0	*
value
B	 R��
cond/GreaterEqualGreaterEqual(cond/GreaterEqual/ReadVariableOp:value:0cond/GreaterEqual/y:output:0*
T0	*
_output_shapes
: �
cond/LessEqual/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	T
cond/LessEqual/yConst*
_output_shapes
: *
dtype0	*
valueB		 Rܒ~
cond/LessEqual	LessEqual%cond/LessEqual/ReadVariableOp:value:0cond/LessEqual/y:output:0*
T0	*
_output_shapes
: O
cond/Less/xConst*
_output_shapes
: *
dtype0*
valueB	 :ܒM
cond/Less/yConst*
_output_shapes
: *
dtype0*
value	B : ^
	cond/LessLesscond/Less/x:output:0cond/Less/y:output:0*
T0*
_output_shapes
: V
cond/LogicalOr	LogicalOrcond/LessEqual:z:0cond/Less:z:0*
_output_shapes
: `
cond/LogicalAnd
LogicalAndcond/GreaterEqual:z:0cond/LogicalOr:z:0*
_output_shapes
: �
cond/Sub/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	M

cond/Sub/yConst*
_output_shapes
: *
dtype0	*
value
B	 R�f
cond/SubSubcond/Sub/ReadVariableOp:value:0cond/Sub/y:output:0*
T0	*
_output_shapes
: R
cond/FloorMod/yConst*
_output_shapes
: *
dtype0	*
value
B	 R�b
cond/FloorModFloorModcond/Sub:z:0cond/FloorMod/y:output:0*
T0	*
_output_shapes
: N
cond/Equal/yConst*
_output_shapes
: *
dtype0	*
value	B	 R ^

cond/EqualEqualcond/FloorMod:z:0cond/Equal/y:output:0*
T0	*
_output_shapes
: \
cond/LogicalAnd_1
LogicalAndcond/LogicalAnd:z:0cond/Equal:z:0*
_output_shapes
: �
#cond/pruning_ops/Abs/ReadVariableOpReadVariableOp,cond_pruning_ops_abs_readvariableop_resource*
_output_shapes

: *
dtype0q
cond/pruning_ops/AbsAbs+cond/pruning_ops/Abs/ReadVariableOp:value:0*
T0*
_output_shapes

: W
cond/pruning_ops/SizeConst*
_output_shapes
: *
dtype0*
value	B :`m
cond/pruning_ops/CastCastcond/pruning_ops/Size:output:0*

DstT0*

SrcT0*
_output_shapes
: [
cond/pruning_ops/sub/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
cond/pruning_ops/subSubcond/pruning_ops/sub/x:output:03cond/polynomial_decay_pruning_schedule/sparsity:z:0*
T0*
_output_shapes
: q
cond/pruning_ops/mulMulcond/pruning_ops/Cast:y:0cond/pruning_ops/sub:z:0*
T0*
_output_shapes
: Z
cond/pruning_ops/RoundRoundcond/pruning_ops/mul:z:0*
T0*
_output_shapes
: _
cond/pruning_ops/Maximum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
cond/pruning_ops/MaximumMaximumcond/pruning_ops/Round:y:0#cond/pruning_ops/Maximum/y:output:0*
T0*
_output_shapes
: m
cond/pruning_ops/Cast_1Castcond/pruning_ops/Maximum:z:0*

DstT0*

SrcT0*
_output_shapes
: q
cond/pruning_ops/Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB:
����������
cond/pruning_ops/ReshapeReshapecond/pruning_ops/Abs:y:0'cond/pruning_ops/Reshape/shape:output:0*
T0*
_output_shapes
:`Y
cond/pruning_ops/Size_1Const*
_output_shapes
: *
dtype0*
value	B :`�
cond/pruning_ops/TopKV2TopKV2!cond/pruning_ops/Reshape:output:0 cond/pruning_ops/Size_1:output:0*
T0* 
_output_shapes
:`:`Z
cond/pruning_ops/sub_1/yConst*
_output_shapes
: *
dtype0*
value	B :~
cond/pruning_ops/sub_1Subcond/pruning_ops/Cast_1:y:0!cond/pruning_ops/sub_1/y:output:0*
T0*
_output_shapes
: `
cond/pruning_ops/GatherV2/axisConst*
_output_shapes
: *
dtype0*
value	B : �
cond/pruning_ops/GatherV2GatherV2 cond/pruning_ops/TopKV2:values:0cond/pruning_ops/sub_1:z:0'cond/pruning_ops/GatherV2/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
: Z
cond/pruning_ops/sub_2/yConst*
_output_shapes
: *
dtype0*
value	B :~
cond/pruning_ops/sub_2Subcond/pruning_ops/Cast_1:y:0!cond/pruning_ops/sub_2/y:output:0*
T0*
_output_shapes
: b
 cond/pruning_ops/GatherV2_1/axisConst*
_output_shapes
: *
dtype0*
value	B : �
cond/pruning_ops/GatherV2_1GatherV2!cond/pruning_ops/TopKV2:indices:0cond/pruning_ops/sub_2:z:0)cond/pruning_ops/GatherV2_1/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
: �
cond/pruning_ops/GreaterEqualGreaterEqualcond/pruning_ops/Abs:y:0"cond/pruning_ops/GatherV2:output:0*
T0*
_output_shapes

: Y
cond/pruning_ops/Size_2Const*
_output_shapes
: *
dtype0*
value	B :``
cond/pruning_ops/one_hot/ConstConst*
_output_shapes
: *
dtype0
*
value	B
 Zb
 cond/pruning_ops/one_hot/Const_1Const*
_output_shapes
: *
dtype0
*
value	B
 Z �
cond/pruning_ops/one_hotOneHot$cond/pruning_ops/GatherV2_1:output:0 cond/pruning_ops/Size_2:output:0'cond/pruning_ops/one_hot/Const:output:0)cond/pruning_ops/one_hot/Const_1:output:0*
TI0*
T0
*
_output_shapes
:`q
 cond/pruning_ops/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"       �
cond/pruning_ops/Reshape_1Reshape!cond/pruning_ops/one_hot:output:0)cond/pruning_ops/Reshape_1/shape:output:0*
T0
*
_output_shapes

: �
cond/pruning_ops/LogicalOr	LogicalOr!cond/pruning_ops/GreaterEqual:z:0#cond/pruning_ops/Reshape_1:output:0*
_output_shapes

: i
	cond/CastCastcond/pruning_ops/LogicalOr:z:0*

DstT0*

SrcT0
*
_output_shapes

: �
cond/AssignVariableOpAssignVariableOpcond_assignvariableop_resourcecond/Cast:y:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�
cond/AssignVariableOp_1AssignVariableOp cond_assignvariableop_1_resource"cond/pruning_ops/GatherV2:output:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�
cond/group_depsNoOp^cond/AssignVariableOp^cond/AssignVariableOp_1",/job:localhost/replica:0/task:0/device:GPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 h
cond/IdentityIdentitycond_identity_logicaland_1^cond/group_deps*
T0
*
_output_shapes
: `
cond/Identity_1Identitycond/Identity:output:0
^cond/NoOp*
T0
*
_output_shapes
: �
	cond/NoOpNoOp^cond/AssignVariableOp^cond/AssignVariableOp_1!^cond/GreaterEqual/ReadVariableOp^cond/LessEqual/ReadVariableOp^cond/Sub/ReadVariableOp6^cond/polynomial_decay_pruning_schedule/ReadVariableOp$^cond/pruning_ops/Abs/ReadVariableOp*
_output_shapes
 "+
cond_identity_1cond/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes

: : : : : 22
cond/AssignVariableOp_1cond/AssignVariableOp_12.
cond/AssignVariableOpcond/AssignVariableOp2D
 cond/GreaterEqual/ReadVariableOp cond/GreaterEqual/ReadVariableOp2>
cond/LessEqual/ReadVariableOpcond/LessEqual/ReadVariableOp22
cond/Sub/ReadVariableOpcond/Sub/ReadVariableOp2n
5cond/polynomial_decay_pruning_schedule/ReadVariableOp5cond/polynomial_decay_pruning_schedule/ReadVariableOp2J
#cond/pruning_ops/Abs/ReadVariableOp#cond/pruning_ops/Abs/ReadVariableOp:D@

_output_shapes
: 
&
_user_specified_nameLogicalAnd_1:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:( $
"
_user_specified_name
resource
�
�
4assert_greater_equal_Assert_AssertGuard_false_566160K
Gassert_greater_equal_assert_assertguard_assert_assert_greater_equal_all
V
Rassert_greater_equal_assert_assertguard_assert_assert_greater_equal_readvariableop	I
Eassert_greater_equal_assert_assertguard_assert_assert_greater_equal_y	6
2assert_greater_equal_assert_assertguard_identity_1
��.assert_greater_equal/Assert/AssertGuard/Assert�
5assert_greater_equal/Assert/AssertGuard/Assert/data_0Const*
_output_shapes
: *
dtype0*�
value�B� B�Prune() wrapper requires the UpdatePruningStep callback to be provided during training. Please add it as a callback to your model.fit call.�
5assert_greater_equal/Assert/AssertGuard/Assert/data_1Const*
_output_shapes
: *
dtype0*<
value3B1 B+Condition x >= y did not hold element-wise:�
5assert_greater_equal/Assert/AssertGuard/Assert/data_2Const*
_output_shapes
: *
dtype0*=
value4B2 B,x (assert_greater_equal/ReadVariableOp:0) = �
5assert_greater_equal/Assert/AssertGuard/Assert/data_4Const*
_output_shapes
: *
dtype0*0
value'B% By (assert_greater_equal/y:0) = �
.assert_greater_equal/Assert/AssertGuard/AssertAssertGassert_greater_equal_assert_assertguard_assert_assert_greater_equal_all>assert_greater_equal/Assert/AssertGuard/Assert/data_0:output:0>assert_greater_equal/Assert/AssertGuard/Assert/data_1:output:0>assert_greater_equal/Assert/AssertGuard/Assert/data_2:output:0Rassert_greater_equal_assert_assertguard_assert_assert_greater_equal_readvariableop>assert_greater_equal/Assert/AssertGuard/Assert/data_4:output:0Eassert_greater_equal_assert_assertguard_assert_assert_greater_equal_y*
T

2		*&
 _has_manual_control_dependencies(*
_output_shapes
 �
0assert_greater_equal/Assert/AssertGuard/IdentityIdentityGassert_greater_equal_assert_assertguard_assert_assert_greater_equal_all/^assert_greater_equal/Assert/AssertGuard/Assert*
T0
*
_output_shapes
: �
2assert_greater_equal/Assert/AssertGuard/Identity_1Identity9assert_greater_equal/Assert/AssertGuard/Identity:output:0-^assert_greater_equal/Assert/AssertGuard/NoOp*
T0
*
_output_shapes
: {
,assert_greater_equal/Assert/AssertGuard/NoOpNoOp/^assert_greater_equal/Assert/AssertGuard/Assert*
_output_shapes
 "q
2assert_greater_equal_assert_assertguard_identity_1;assert_greater_equal/Assert/AssertGuard/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes
: : : 2`
.assert_greater_equal/Assert/AssertGuard/Assert.assert_greater_equal/Assert/AssertGuard/Assert:NJ

_output_shapes
: 
0
_user_specified_nameassert_greater_equal/y:[W

_output_shapes
: 
=
_user_specified_name%#assert_greater_equal/ReadVariableOp:P L

_output_shapes
: 
2
_user_specified_nameassert_greater_equal/All
�H
�
N__inference_deepsets_invariant_layer_call_and_return_conditional_losses_565377
input_layer)
prune_low_magnitude_phi1_564170:	 1
prune_low_magnitude_phi1_564172: 1
prune_low_magnitude_phi1_564174: )
prune_low_magnitude_phi1_564176: -
prune_low_magnitude_phi1_564178: )
prune_low_magnitude_phi2_564482:	 1
prune_low_magnitude_phi2_564484:  1
prune_low_magnitude_phi2_564486:  )
prune_low_magnitude_phi2_564488: -
prune_low_magnitude_phi2_564490: )
prune_low_magnitude_phi3_564794:	 1
prune_low_magnitude_phi3_564796:  1
prune_low_magnitude_phi3_564798:  )
prune_low_magnitude_phi3_564800: -
prune_low_magnitude_phi3_564802: (
prune_low_magnitude_rho_565122:	 0
prune_low_magnitude_rho_565124:  0
prune_low_magnitude_rho_565126:  (
prune_low_magnitude_rho_565128: ,
prune_low_magnitude_rho_565130: *
 prune_low_magnitude_dense_565359:	 2
 prune_low_magnitude_dense_565361: 2
 prune_low_magnitude_dense_565363: *
 prune_low_magnitude_dense_565365: .
 prune_low_magnitude_dense_565367:
identity��1prune_low_magnitude_dense/StatefulPartitionedCall�0prune_low_magnitude_phi1/StatefulPartitionedCall�0prune_low_magnitude_phi2/StatefulPartitionedCall�0prune_low_magnitude_phi3/StatefulPartitionedCall�/prune_low_magnitude_rho/StatefulPartitionedCall�
0prune_low_magnitude_phi1/StatefulPartitionedCallStatefulPartitionedCallinput_layerprune_low_magnitude_phi1_564170prune_low_magnitude_phi1_564172prune_low_magnitude_phi1_564174prune_low_magnitude_phi1_564176prune_low_magnitude_phi1_564178*
Tin

2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:���������  *#
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8� *]
fXRV
T__inference_prune_low_magnitude_phi1_layer_call_and_return_conditional_losses_564169�
q_activation/PartitionedCallPartitionedCall9prune_low_magnitude_phi1/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:���������  * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8� *Q
fLRJ
H__inference_q_activation_layer_call_and_return_conditional_losses_564227�
0prune_low_magnitude_phi2/StatefulPartitionedCallStatefulPartitionedCall%q_activation/PartitionedCall:output:0prune_low_magnitude_phi2_564482prune_low_magnitude_phi2_564484prune_low_magnitude_phi2_564486prune_low_magnitude_phi2_564488prune_low_magnitude_phi2_564490*
Tin

2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:���������  *#
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8� *]
fXRV
T__inference_prune_low_magnitude_phi2_layer_call_and_return_conditional_losses_564481�
q_activation_1/PartitionedCallPartitionedCall9prune_low_magnitude_phi2/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:���������  * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8� *S
fNRL
J__inference_q_activation_1_layer_call_and_return_conditional_losses_564539�
0prune_low_magnitude_phi3/StatefulPartitionedCallStatefulPartitionedCall'q_activation_1/PartitionedCall:output:0prune_low_magnitude_phi3_564794prune_low_magnitude_phi3_564796prune_low_magnitude_phi3_564798prune_low_magnitude_phi3_564800prune_low_magnitude_phi3_564802*
Tin

2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:���������  *#
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8� *]
fXRV
T__inference_prune_low_magnitude_phi3_layer_call_and_return_conditional_losses_564793�
q_activation_2/PartitionedCallPartitionedCall9prune_low_magnitude_phi3/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:���������  * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8� *S
fNRL
J__inference_q_activation_2_layer_call_and_return_conditional_losses_564851�
q_activation_3/PartitionedCallPartitionedCall'q_activation_2/PartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:���������  * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8� *S
fNRL
J__inference_q_activation_3_layer_call_and_return_conditional_losses_564883�
(global_average_pooling1d/PartitionedCallPartitionedCall'q_activation_3/PartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:��������� * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8� *]
fXRV
T__inference_global_average_pooling1d_layer_call_and_return_conditional_losses_563909�
/prune_low_magnitude_rho/StatefulPartitionedCallStatefulPartitionedCall1global_average_pooling1d/PartitionedCall:output:0prune_low_magnitude_rho_565122prune_low_magnitude_rho_565124prune_low_magnitude_rho_565126prune_low_magnitude_rho_565128prune_low_magnitude_rho_565130*
Tin

2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:��������� *#
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8� *\
fWRU
S__inference_prune_low_magnitude_rho_layer_call_and_return_conditional_losses_565121�
q_activation_4/PartitionedCallPartitionedCall8prune_low_magnitude_rho/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:��������� * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8� *S
fNRL
J__inference_q_activation_4_layer_call_and_return_conditional_losses_565179�
1prune_low_magnitude_dense/StatefulPartitionedCallStatefulPartitionedCall'q_activation_4/PartitionedCall:output:0 prune_low_magnitude_dense_565359 prune_low_magnitude_dense_565361 prune_low_magnitude_dense_565363 prune_low_magnitude_dense_565365 prune_low_magnitude_dense_565367*
Tin

2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:���������*#
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8� *^
fYRW
U__inference_prune_low_magnitude_dense_layer_call_and_return_conditional_losses_565358�
softmax/PartitionedCallPartitionedCall:prune_low_magnitude_dense/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:���������* 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8� *L
fGRE
C__inference_softmax_layer_call_and_return_conditional_losses_565374o
IdentityIdentity softmax/PartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:����������
NoOpNoOp2^prune_low_magnitude_dense/StatefulPartitionedCall1^prune_low_magnitude_phi1/StatefulPartitionedCall1^prune_low_magnitude_phi2/StatefulPartitionedCall1^prune_low_magnitude_phi3/StatefulPartitionedCall0^prune_low_magnitude_rho/StatefulPartitionedCall*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*\
_input_shapesK
I:��������� : : : : : : : : : : : : : : : : : : : : : : : : : 2f
1prune_low_magnitude_dense/StatefulPartitionedCall1prune_low_magnitude_dense/StatefulPartitionedCall2d
0prune_low_magnitude_phi1/StatefulPartitionedCall0prune_low_magnitude_phi1/StatefulPartitionedCall2d
0prune_low_magnitude_phi2/StatefulPartitionedCall0prune_low_magnitude_phi2/StatefulPartitionedCall2d
0prune_low_magnitude_phi3/StatefulPartitionedCall0prune_low_magnitude_phi3/StatefulPartitionedCall2b
/prune_low_magnitude_rho/StatefulPartitionedCall/prune_low_magnitude_rho/StatefulPartitionedCall:&"
 
_user_specified_name565367:&"
 
_user_specified_name565365:&"
 
_user_specified_name565363:&"
 
_user_specified_name565361:&"
 
_user_specified_name565359:&"
 
_user_specified_name565130:&"
 
_user_specified_name565128:&"
 
_user_specified_name565126:&"
 
_user_specified_name565124:&"
 
_user_specified_name565122:&"
 
_user_specified_name564802:&"
 
_user_specified_name564800:&"
 
_user_specified_name564798:&"
 
_user_specified_name564796:&"
 
_user_specified_name564794:&
"
 
_user_specified_name564490:&	"
 
_user_specified_name564488:&"
 
_user_specified_name564486:&"
 
_user_specified_name564484:&"
 
_user_specified_name564482:&"
 
_user_specified_name564178:&"
 
_user_specified_name564176:&"
 
_user_specified_name564174:&"
 
_user_specified_name564172:&"
 
_user_specified_name564170:X T
+
_output_shapes
:��������� 
%
_user_specified_nameinput_layer
�`
�
U__inference_prune_low_magnitude_dense_layer_call_and_return_conditional_losses_565358

inputs!
readvariableop_resource:	 
cond_input_1: 
cond_input_2: 
cond_input_3: -
biasadd_readvariableop_resource:
identity��AssignVariableOp�AssignVariableOp_1�BiasAdd/ReadVariableOp�GreaterEqual/ReadVariableOp�LessEqual/ReadVariableOp�MatMul/ReadVariableOp�Mul/ReadVariableOp�Mul/ReadVariableOp_1�ReadVariableOp�Sub/ReadVariableOp�'assert_greater_equal/Assert/AssertGuard�#assert_greater_equal/ReadVariableOp�cond�0polynomial_decay_pruning_schedule/ReadVariableOp^
ReadVariableOpReadVariableOpreadvariableop_resource*
_output_shapes
: *
dtype0	G
add/yConst*
_output_shapes
: *
dtype0	*
value	B	 RU
addAddV2ReadVariableOp:value:0add/y:output:0*
T0	*
_output_shapes
: �
AssignVariableOpAssignVariableOpreadvariableop_resourceadd:z:0^ReadVariableOp*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0	*
validate_shape(7
updateNoOp^AssignVariableOp*
_output_shapes
 �
#assert_greater_equal/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp*
_output_shapes
: *
dtype0	X
assert_greater_equal/yConst*
_output_shapes
: *
dtype0	*
value	B	 R�
!assert_greater_equal/GreaterEqualGreaterEqual+assert_greater_equal/ReadVariableOp:value:0assert_greater_equal/y:output:0*
T0	*
_output_shapes
: [
assert_greater_equal/RankConst*
_output_shapes
: *
dtype0*
value	B : b
 assert_greater_equal/range/startConst*
_output_shapes
: *
dtype0*
value	B : b
 assert_greater_equal/range/deltaConst*
_output_shapes
: *
dtype0*
value	B :�
assert_greater_equal/rangeRange)assert_greater_equal/range/start:output:0"assert_greater_equal/Rank:output:0)assert_greater_equal/range/delta:output:0*
_output_shapes
: �
assert_greater_equal/AllAll%assert_greater_equal/GreaterEqual:z:0#assert_greater_equal/range:output:0*
_output_shapes
: �
!assert_greater_equal/Assert/ConstConst*
_output_shapes
: *
dtype0*�
value�B� B�Prune() wrapper requires the UpdatePruningStep callback to be provided during training. Please add it as a callback to your model.fit call.�
#assert_greater_equal/Assert/Const_1Const*
_output_shapes
: *
dtype0*<
value3B1 B+Condition x >= y did not hold element-wise:�
#assert_greater_equal/Assert/Const_2Const*
_output_shapes
: *
dtype0*=
value4B2 B,x (assert_greater_equal/ReadVariableOp:0) = �
#assert_greater_equal/Assert/Const_3Const*
_output_shapes
: *
dtype0*0
value'B% By (assert_greater_equal/y:0) = �
'assert_greater_equal/Assert/AssertGuardIf!assert_greater_equal/All:output:0!assert_greater_equal/All:output:0+assert_greater_equal/ReadVariableOp:value:0assert_greater_equal/y:output:0*
Tcond0
*
Tin
2
		*
Tout
2
*
_lower_using_switch_merge(*
_output_shapes
: * 
_read_only_resource_inputs
 *G
else_branch8R6
4assert_greater_equal_Assert_AssertGuard_false_565200*
output_shapes
: *F
then_branch7R5
3assert_greater_equal_Assert_AssertGuard_true_565199�
0assert_greater_equal/Assert/AssertGuard/IdentityIdentity0assert_greater_equal/Assert/AssertGuard:output:0*
T0
*&
 _has_manual_control_dependencies(*
_output_shapes
: �
0polynomial_decay_pruning_schedule/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	�
'polynomial_decay_pruning_schedule/sub/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R��
%polynomial_decay_pruning_schedule/subSub8polynomial_decay_pruning_schedule/ReadVariableOp:value:00polynomial_decay_pruning_schedule/sub/y:output:0*
T0	*
_output_shapes
: �
&polynomial_decay_pruning_schedule/CastCast)polynomial_decay_pruning_schedule/sub:z:0*

DstT0*

SrcT0	*
_output_shapes
: �
+polynomial_decay_pruning_schedule/truediv/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 * �jF�
)polynomial_decay_pruning_schedule/truedivRealDiv*polynomial_decay_pruning_schedule/Cast:y:04polynomial_decay_pruning_schedule/truediv/y:output:0*
T0*
_output_shapes
: �
+polynomial_decay_pruning_schedule/Maximum/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *    �
)polynomial_decay_pruning_schedule/MaximumMaximum4polynomial_decay_pruning_schedule/Maximum/x:output:0-polynomial_decay_pruning_schedule/truediv:z:0*
T0*
_output_shapes
: �
+polynomial_decay_pruning_schedule/Minimum/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *  �?�
)polynomial_decay_pruning_schedule/MinimumMinimum4polynomial_decay_pruning_schedule/Minimum/x:output:0-polynomial_decay_pruning_schedule/Maximum:z:0*
T0*
_output_shapes
: �
)polynomial_decay_pruning_schedule/sub_1/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *  �?�
'polynomial_decay_pruning_schedule/sub_1Sub2polynomial_decay_pruning_schedule/sub_1/x:output:0-polynomial_decay_pruning_schedule/Minimum:z:0*
T0*
_output_shapes
: �
'polynomial_decay_pruning_schedule/Pow/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *  @@�
%polynomial_decay_pruning_schedule/PowPow+polynomial_decay_pruning_schedule/sub_1:z:00polynomial_decay_pruning_schedule/Pow/y:output:0*
T0*
_output_shapes
: �
'polynomial_decay_pruning_schedule/Mul/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *   ��
%polynomial_decay_pruning_schedule/MulMul0polynomial_decay_pruning_schedule/Mul/x:output:0)polynomial_decay_pruning_schedule/Pow:z:0*
T0*
_output_shapes
: �
,polynomial_decay_pruning_schedule/sparsity/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *   ?�
*polynomial_decay_pruning_schedule/sparsityAddV2)polynomial_decay_pruning_schedule/Mul:z:05polynomial_decay_pruning_schedule/sparsity/y:output:0*
T0*
_output_shapes
: �
GreaterEqual/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	�
GreaterEqual/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R�{
GreaterEqualGreaterEqual#GreaterEqual/ReadVariableOp:value:0GreaterEqual/y:output:0*
T0	*
_output_shapes
: �
LessEqual/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	�
LessEqual/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
valueB		 Rܒo
	LessEqual	LessEqual LessEqual/ReadVariableOp:value:0LessEqual/y:output:0*
T0	*
_output_shapes
: }
Less/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB	 :ܒ{
Less/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
value	B : O
LessLessLess/x:output:0Less/y:output:0*
T0*
_output_shapes
: G
	LogicalOr	LogicalOrLessEqual:z:0Less:z:0*
_output_shapes
: Q

LogicalAnd
LogicalAndGreaterEqual:z:0LogicalOr:z:0*
_output_shapes
: �
Sub/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	{
Sub/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R�W
SubSubSub/ReadVariableOp:value:0Sub/y:output:0*
T0	*
_output_shapes
: �

FloorMod/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R�S
FloorModFloorModSub:z:0FloorMod/y:output:0*
T0	*
_output_shapes
: |
Equal/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value	B	 R O
EqualEqualFloorMod:z:0Equal/y:output:0*
T0	*
_output_shapes
: M
LogicalAnd_1
LogicalAndLogicalAnd:z:0	Equal:z:0*
_output_shapes
: �
condIfLogicalAnd_1:z:0readvariableop_resourcecond_input_1cond_input_2cond_input_3LogicalAnd_1:z:0^AssignVariableOp*
Tcond0
*
Tin	
2
*
Tout
2
*
_lower_using_switch_merge(*
_output_shapes
: *$
_read_only_resource_inputs
*$
else_branchR
cond_false_565257*
output_shapes
: *#
then_branchR
cond_true_565256q
cond/IdentityIdentitycond:output:0*
T0
*&
 _has_manual_control_dependencies(*
_output_shapes
: i
update_1NoOp1^assert_greater_equal/Assert/AssertGuard/Identity^cond/Identity*
_output_shapes
 _
Mul/ReadVariableOpReadVariableOpcond_input_1*
_output_shapes

: *
dtype0h
Mul/ReadVariableOp_1ReadVariableOpcond_input_2^cond*
_output_shapes

: *
dtype0m
MulMulMul/ReadVariableOp:value:0Mul/ReadVariableOp_1:value:0*
T0*
_output_shapes

: �
AssignVariableOp_1AssignVariableOpcond_input_1Mul:z:0^Mul/ReadVariableOp^cond*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�

group_depsNoOp^AssignVariableOp_1",/job:localhost/replica:0/task:0/device:GPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 e
group_deps_1NoOp^group_deps",/job:localhost/replica:0/task:0/device:GPU:0*
_output_shapes
 w
MatMul/ReadVariableOpReadVariableOpcond_input_1^AssignVariableOp_1*
_output_shapes

: *
dtype0i
MatMulMatMulinputsMatMul/ReadVariableOp:value:0*
T0*'
_output_shapes
:���������r
BiasAdd/ReadVariableOpReadVariableOpbiasadd_readvariableop_resource*
_output_shapes
:*
dtype0v
BiasAddBiasAddMatMul:product:0BiasAdd/ReadVariableOp:value:0*
T0*'
_output_shapes
:���������_
IdentityIdentityBiasAdd:output:0^NoOp*
T0*'
_output_shapes
:����������
NoOpNoOp^AssignVariableOp^AssignVariableOp_1^BiasAdd/ReadVariableOp^GreaterEqual/ReadVariableOp^LessEqual/ReadVariableOp^MatMul/ReadVariableOp^Mul/ReadVariableOp^Mul/ReadVariableOp_1^ReadVariableOp^Sub/ReadVariableOp(^assert_greater_equal/Assert/AssertGuard$^assert_greater_equal/ReadVariableOp^cond1^polynomial_decay_pruning_schedule/ReadVariableOp*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*0
_input_shapes
:��������� : : : : : 2(
AssignVariableOp_1AssignVariableOp_12$
AssignVariableOpAssignVariableOp20
BiasAdd/ReadVariableOpBiasAdd/ReadVariableOp2:
GreaterEqual/ReadVariableOpGreaterEqual/ReadVariableOp24
LessEqual/ReadVariableOpLessEqual/ReadVariableOp2.
MatMul/ReadVariableOpMatMul/ReadVariableOp2,
Mul/ReadVariableOp_1Mul/ReadVariableOp_12(
Mul/ReadVariableOpMul/ReadVariableOp2 
ReadVariableOpReadVariableOp2(
Sub/ReadVariableOpSub/ReadVariableOp2R
'assert_greater_equal/Assert/AssertGuard'assert_greater_equal/Assert/AssertGuard2J
#assert_greater_equal/ReadVariableOp#assert_greater_equal/ReadVariableOp2
condcond2d
0polynomial_decay_pruning_schedule/ReadVariableOp0polynomial_decay_pruning_schedule/ReadVariableOp:($
"
_user_specified_name
resource:'#
!
_user_specified_name	input_3:'#
!
_user_specified_name	input_2:'#
!
_user_specified_name	input_1:($
"
_user_specified_name
resource:O K
'
_output_shapes
:��������� 
 
_user_specified_nameinputs
�
O
#__inference__update_step_xla_566079
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
�
�
3__inference_deepsets_invariant_layer_call_fn_565831
input_layer
unknown:	 
	unknown_0: 
	unknown_1: 
	unknown_2: 
	unknown_3: 
	unknown_4:	 
	unknown_5:  
	unknown_6:  
	unknown_7: 
	unknown_8: 
	unknown_9:	 

unknown_10:  

unknown_11:  

unknown_12: 

unknown_13: 

unknown_14:	 

unknown_15:  

unknown_16:  

unknown_17: 

unknown_18: 

unknown_19:	 

unknown_20: 

unknown_21: 

unknown_22: 

unknown_23:
identity��StatefulPartitionedCall�
StatefulPartitionedCallStatefulPartitionedCallinput_layerunknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4	unknown_5	unknown_6	unknown_7	unknown_8	unknown_9
unknown_10
unknown_11
unknown_12
unknown_13
unknown_14
unknown_15
unknown_16
unknown_17
unknown_18
unknown_19
unknown_20
unknown_21
unknown_22
unknown_23*%
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:���������*'
_read_only_resource_inputs	

*2
config_proto" 

CPU

GPU2 *0J 8� *W
fRRP
N__inference_deepsets_invariant_layer_call_and_return_conditional_losses_565377o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:���������<
NoOpNoOp^StatefulPartitionedCall*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*\
_input_shapesK
I:��������� : : : : : : : : : : : : : : : : : : : : : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:&"
 
_user_specified_name565827:&"
 
_user_specified_name565825:&"
 
_user_specified_name565823:&"
 
_user_specified_name565821:&"
 
_user_specified_name565819:&"
 
_user_specified_name565817:&"
 
_user_specified_name565815:&"
 
_user_specified_name565813:&"
 
_user_specified_name565811:&"
 
_user_specified_name565809:&"
 
_user_specified_name565807:&"
 
_user_specified_name565805:&"
 
_user_specified_name565803:&"
 
_user_specified_name565801:&"
 
_user_specified_name565799:&
"
 
_user_specified_name565797:&	"
 
_user_specified_name565795:&"
 
_user_specified_name565793:&"
 
_user_specified_name565791:&"
 
_user_specified_name565789:&"
 
_user_specified_name565787:&"
 
_user_specified_name565785:&"
 
_user_specified_name565783:&"
 
_user_specified_name565781:&"
 
_user_specified_name565779:X T
+
_output_shapes
:��������� 
%
_user_specified_nameinput_layer
�
�
cond_false_566217
cond_placeholder
cond_placeholder_1
cond_placeholder_2
cond_placeholder_3
cond_identity_logicaland_1

cond_identity_1
O
	cond/NoOpNoOp*&
 _has_manual_control_dependencies(*
_output_shapes
 b
cond/IdentityIdentitycond_identity_logicaland_1
^cond/NoOp*
T0
*
_output_shapes
: T
cond/Identity_1Identitycond/Identity:output:0*
T0
*
_output_shapes
: "+
cond_identity_1cond/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes

: : : : : :D@

_output_shapes
: 
&
_user_specified_nameLogicalAnd_1
��
�
T__inference_prune_low_magnitude_phi1_layer_call_and_return_conditional_losses_564169

inputs!
readvariableop_resource:	 
cond_input_1: 
cond_input_2: 
cond_input_3: '
readvariableop_4_resource: 
identity��AssignVariableOp�AssignVariableOp_1�GreaterEqual/ReadVariableOp�LessEqual/ReadVariableOp�Mul/ReadVariableOp�Mul/ReadVariableOp_1�ReadVariableOp�ReadVariableOp_1�ReadVariableOp_2�ReadVariableOp_3�ReadVariableOp_4�ReadVariableOp_5�ReadVariableOp_6�Sub/ReadVariableOp�'assert_greater_equal/Assert/AssertGuard�#assert_greater_equal/ReadVariableOp�cond�0polynomial_decay_pruning_schedule/ReadVariableOp^
ReadVariableOpReadVariableOpreadvariableop_resource*
_output_shapes
: *
dtype0	G
add/yConst*
_output_shapes
: *
dtype0	*
value	B	 RU
addAddV2ReadVariableOp:value:0add/y:output:0*
T0	*
_output_shapes
: �
AssignVariableOpAssignVariableOpreadvariableop_resourceadd:z:0^ReadVariableOp*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0	*
validate_shape(7
updateNoOp^AssignVariableOp*
_output_shapes
 �
#assert_greater_equal/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp*
_output_shapes
: *
dtype0	X
assert_greater_equal/yConst*
_output_shapes
: *
dtype0	*
value	B	 R�
!assert_greater_equal/GreaterEqualGreaterEqual+assert_greater_equal/ReadVariableOp:value:0assert_greater_equal/y:output:0*
T0	*
_output_shapes
: [
assert_greater_equal/RankConst*
_output_shapes
: *
dtype0*
value	B : b
 assert_greater_equal/range/startConst*
_output_shapes
: *
dtype0*
value	B : b
 assert_greater_equal/range/deltaConst*
_output_shapes
: *
dtype0*
value	B :�
assert_greater_equal/rangeRange)assert_greater_equal/range/start:output:0"assert_greater_equal/Rank:output:0)assert_greater_equal/range/delta:output:0*
_output_shapes
: �
assert_greater_equal/AllAll%assert_greater_equal/GreaterEqual:z:0#assert_greater_equal/range:output:0*
_output_shapes
: �
!assert_greater_equal/Assert/ConstConst*
_output_shapes
: *
dtype0*�
value�B� B�Prune() wrapper requires the UpdatePruningStep callback to be provided during training. Please add it as a callback to your model.fit call.�
#assert_greater_equal/Assert/Const_1Const*
_output_shapes
: *
dtype0*<
value3B1 B+Condition x >= y did not hold element-wise:�
#assert_greater_equal/Assert/Const_2Const*
_output_shapes
: *
dtype0*=
value4B2 B,x (assert_greater_equal/ReadVariableOp:0) = �
#assert_greater_equal/Assert/Const_3Const*
_output_shapes
: *
dtype0*0
value'B% By (assert_greater_equal/y:0) = �
'assert_greater_equal/Assert/AssertGuardIf!assert_greater_equal/All:output:0!assert_greater_equal/All:output:0+assert_greater_equal/ReadVariableOp:value:0assert_greater_equal/y:output:0*
Tcond0
*
Tin
2
		*
Tout
2
*
_lower_using_switch_merge(*
_output_shapes
: * 
_read_only_resource_inputs
 *G
else_branch8R6
4assert_greater_equal_Assert_AssertGuard_false_563936*
output_shapes
: *F
then_branch7R5
3assert_greater_equal_Assert_AssertGuard_true_563935�
0assert_greater_equal/Assert/AssertGuard/IdentityIdentity0assert_greater_equal/Assert/AssertGuard:output:0*
T0
*&
 _has_manual_control_dependencies(*
_output_shapes
: �
0polynomial_decay_pruning_schedule/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	�
'polynomial_decay_pruning_schedule/sub/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R��
%polynomial_decay_pruning_schedule/subSub8polynomial_decay_pruning_schedule/ReadVariableOp:value:00polynomial_decay_pruning_schedule/sub/y:output:0*
T0	*
_output_shapes
: �
&polynomial_decay_pruning_schedule/CastCast)polynomial_decay_pruning_schedule/sub:z:0*

DstT0*

SrcT0	*
_output_shapes
: �
+polynomial_decay_pruning_schedule/truediv/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 * �jF�
)polynomial_decay_pruning_schedule/truedivRealDiv*polynomial_decay_pruning_schedule/Cast:y:04polynomial_decay_pruning_schedule/truediv/y:output:0*
T0*
_output_shapes
: �
+polynomial_decay_pruning_schedule/Maximum/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *    �
)polynomial_decay_pruning_schedule/MaximumMaximum4polynomial_decay_pruning_schedule/Maximum/x:output:0-polynomial_decay_pruning_schedule/truediv:z:0*
T0*
_output_shapes
: �
+polynomial_decay_pruning_schedule/Minimum/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *  �?�
)polynomial_decay_pruning_schedule/MinimumMinimum4polynomial_decay_pruning_schedule/Minimum/x:output:0-polynomial_decay_pruning_schedule/Maximum:z:0*
T0*
_output_shapes
: �
)polynomial_decay_pruning_schedule/sub_1/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *  �?�
'polynomial_decay_pruning_schedule/sub_1Sub2polynomial_decay_pruning_schedule/sub_1/x:output:0-polynomial_decay_pruning_schedule/Minimum:z:0*
T0*
_output_shapes
: �
'polynomial_decay_pruning_schedule/Pow/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *  @@�
%polynomial_decay_pruning_schedule/PowPow+polynomial_decay_pruning_schedule/sub_1:z:00polynomial_decay_pruning_schedule/Pow/y:output:0*
T0*
_output_shapes
: �
'polynomial_decay_pruning_schedule/Mul/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *   ��
%polynomial_decay_pruning_schedule/MulMul0polynomial_decay_pruning_schedule/Mul/x:output:0)polynomial_decay_pruning_schedule/Pow:z:0*
T0*
_output_shapes
: �
,polynomial_decay_pruning_schedule/sparsity/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *   ?�
*polynomial_decay_pruning_schedule/sparsityAddV2)polynomial_decay_pruning_schedule/Mul:z:05polynomial_decay_pruning_schedule/sparsity/y:output:0*
T0*
_output_shapes
: �
GreaterEqual/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	�
GreaterEqual/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R�{
GreaterEqualGreaterEqual#GreaterEqual/ReadVariableOp:value:0GreaterEqual/y:output:0*
T0	*
_output_shapes
: �
LessEqual/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	�
LessEqual/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
valueB		 Rܒo
	LessEqual	LessEqual LessEqual/ReadVariableOp:value:0LessEqual/y:output:0*
T0	*
_output_shapes
: }
Less/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB	 :ܒ{
Less/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
value	B : O
LessLessLess/x:output:0Less/y:output:0*
T0*
_output_shapes
: G
	LogicalOr	LogicalOrLessEqual:z:0Less:z:0*
_output_shapes
: Q

LogicalAnd
LogicalAndGreaterEqual:z:0LogicalOr:z:0*
_output_shapes
: �
Sub/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	{
Sub/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R�W
SubSubSub/ReadVariableOp:value:0Sub/y:output:0*
T0	*
_output_shapes
: �

FloorMod/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R�S
FloorModFloorModSub:z:0FloorMod/y:output:0*
T0	*
_output_shapes
: |
Equal/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value	B	 R O
EqualEqualFloorMod:z:0Equal/y:output:0*
T0	*
_output_shapes
: M
LogicalAnd_1
LogicalAndLogicalAnd:z:0	Equal:z:0*
_output_shapes
: �
condIfLogicalAnd_1:z:0readvariableop_resourcecond_input_1cond_input_2cond_input_3LogicalAnd_1:z:0^AssignVariableOp*
Tcond0
*
Tin	
2
*
Tout
2
*
_lower_using_switch_merge(*
_output_shapes
: *$
_read_only_resource_inputs
*$
else_branchR
cond_false_563993*
output_shapes
: *#
then_branchR
cond_true_563992q
cond/IdentityIdentitycond:output:0*
T0
*&
 _has_manual_control_dependencies(*
_output_shapes
: i
update_1NoOp1^assert_greater_equal/Assert/AssertGuard/Identity^cond/Identity*
_output_shapes
 _
Mul/ReadVariableOpReadVariableOpcond_input_1*
_output_shapes

: *
dtype0h
Mul/ReadVariableOp_1ReadVariableOpcond_input_2^cond*
_output_shapes

: *
dtype0m
MulMulMul/ReadVariableOp:value:0Mul/ReadVariableOp_1:value:0*
T0*
_output_shapes

: �
AssignVariableOp_1AssignVariableOpcond_input_1Mul:z:0^Mul/ReadVariableOp^cond*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�

group_depsNoOp^AssignVariableOp_1",/job:localhost/replica:0/task:0/device:GPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 e
group_deps_1NoOp^group_deps",/job:localhost/replica:0/task:0/device:GPU:0*
_output_shapes
 G
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
: r
ReadVariableOp_1ReadVariableOpcond_input_1^AssignVariableOp_1*
_output_shapes

: *
dtype0L
mul_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   Ca
mul_1MulReadVariableOp_1:value:0mul_1/y:output:0*
T0*
_output_shapes

: P
truedivRealDiv	mul_1:z:0Cast:y:0*
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

: K
add_1AddV2Neg:y:0	Round:y:0*
T0*
_output_shapes

: P
StopGradientStopGradient	add_1:z:0*
T0*
_output_shapes

: [
add_2AddV2truediv:z:0StopGradient:output:0*
T0*
_output_shapes

: \
clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  �Bv
clip_by_value/MinimumMinimum	add_2:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   �v
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*
_output_shapes

: R
mul_2MulCast:y:0clip_by_value:z:0*
T0*
_output_shapes

: P
truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C^
	truediv_1RealDiv	mul_2:z:0truediv_1/y:output:0*
T0*
_output_shapes

: L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?V
mul_3Mulmul_3/x:output:0truediv_1:z:0*
T0*
_output_shapes

: r
ReadVariableOp_2ReadVariableOpcond_input_1^AssignVariableOp_1*
_output_shapes

: *
dtype0O
Neg_1NegReadVariableOp_2:value:0*
T0*
_output_shapes

: M
add_3AddV2	Neg_1:y:0	mul_3:z:0*
T0*
_output_shapes

: L
mul_4/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?R
mul_4Mulmul_4/x:output:0	add_3:z:0*
T0*
_output_shapes

: R
StopGradient_1StopGradient	mul_4:z:0*
T0*
_output_shapes

: r
ReadVariableOp_3ReadVariableOpcond_input_1^AssignVariableOp_1*
_output_shapes

: *
dtype0j
add_4AddV2ReadVariableOp_3:value:0StopGradient_1:output:0*
T0*
_output_shapes

: I
ShapeShapeinputs*
T0*
_output_shapes
::��Q
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
valueB"����   d
ReshapeReshapeinputsReshape/shape:output:0*
T0*'
_output_shapes
:���������_
transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       c
	transpose	Transpose	add_4:z:0transpose/perm:output:0*
T0*
_output_shapes

: `
Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"   ����f
	Reshape_1Reshapetranspose:y:0Reshape_1/shape:output:0*
T0*
_output_shapes

: h
MatMulMatMulReshape:output:0Reshape_1:output:0*
T0*'
_output_shapes
:��������� S
Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B : S
Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : �
Reshape_2/shapePackunstack:output:0Reshape_2/shape/1:output:0Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:v
	Reshape_2ReshapeMatMul:product:0Reshape_2/shape:output:0*
T0*+
_output_shapes
:���������  I
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
ReadVariableOp_4ReadVariableOpreadvariableop_4_resource*
_output_shapes
: *
dtype0L
mul_5/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C]
mul_5MulReadVariableOp_4:value:0mul_5/y:output:0*
T0*
_output_shapes
: P
	truediv_2RealDiv	mul_5:z:0
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
add_5AddV2	Neg_2:y:0Round_1:y:0*
T0*
_output_shapes
: N
StopGradient_2StopGradient	add_5:z:0*
T0*
_output_shapes
: [
add_6AddV2truediv_2:z:0StopGradient_2:output:0*
T0*
_output_shapes
: ^
clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  �Bv
clip_by_value_1/MinimumMinimum	add_6:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   �x
clip_by_value_1Maximumclip_by_value_1/Minimum:z:0clip_by_value_1/y:output:0*
T0*
_output_shapes
: R
mul_6Mul
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
	truediv_3RealDiv	mul_6:z:0truediv_3/y:output:0*
T0*
_output_shapes
: L
mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?R
mul_7Mulmul_7/x:output:0truediv_3:z:0*
T0*
_output_shapes
: f
ReadVariableOp_5ReadVariableOpreadvariableop_4_resource*
_output_shapes
: *
dtype0K
Neg_3NegReadVariableOp_5:value:0*
T0*
_output_shapes
: I
add_7AddV2	Neg_3:y:0	mul_7:z:0*
T0*
_output_shapes
: L
mul_8/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?N
mul_8Mulmul_8/x:output:0	add_7:z:0*
T0*
_output_shapes
: N
StopGradient_3StopGradient	mul_8:z:0*
T0*
_output_shapes
: f
ReadVariableOp_6ReadVariableOpreadvariableop_4_resource*
_output_shapes
: *
dtype0f
add_8AddV2ReadVariableOp_6:value:0StopGradient_3:output:0*
T0*
_output_shapes
: g
BiasAddBiasAddReshape_2:output:0	add_8:z:0*
T0*+
_output_shapes
:���������  c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:���������  �
NoOpNoOp^AssignVariableOp^AssignVariableOp_1^GreaterEqual/ReadVariableOp^LessEqual/ReadVariableOp^Mul/ReadVariableOp^Mul/ReadVariableOp_1^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5^ReadVariableOp_6^Sub/ReadVariableOp(^assert_greater_equal/Assert/AssertGuard$^assert_greater_equal/ReadVariableOp^cond1^polynomial_decay_pruning_schedule/ReadVariableOp*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*4
_input_shapes#
!:��������� : : : : : 2(
AssignVariableOp_1AssignVariableOp_12$
AssignVariableOpAssignVariableOp2:
GreaterEqual/ReadVariableOpGreaterEqual/ReadVariableOp24
LessEqual/ReadVariableOpLessEqual/ReadVariableOp2,
Mul/ReadVariableOp_1Mul/ReadVariableOp_12(
Mul/ReadVariableOpMul/ReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_52$
ReadVariableOp_6ReadVariableOp_62 
ReadVariableOpReadVariableOp2(
Sub/ReadVariableOpSub/ReadVariableOp2R
'assert_greater_equal/Assert/AssertGuard'assert_greater_equal/Assert/AssertGuard2J
#assert_greater_equal/ReadVariableOp#assert_greater_equal/ReadVariableOp2
condcond2d
0polynomial_decay_pruning_schedule/ReadVariableOp0polynomial_decay_pruning_schedule/ReadVariableOp:($
"
_user_specified_name
resource:'#
!
_user_specified_name	input_3:'#
!
_user_specified_name	input_2:'#
!
_user_specified_name	input_1:($
"
_user_specified_name
resource:S O
+
_output_shapes
:��������� 
 
_user_specified_nameinputs
�X
�
cond_true_566216H
>cond_polynomial_decay_pruning_schedule_readvariableop_resource:	 >
,cond_pruning_ops_abs_readvariableop_resource: 0
cond_assignvariableop_resource: *
 cond_assignvariableop_1_resource: 
cond_identity_logicaland_1

cond_identity_1
��cond/AssignVariableOp�cond/AssignVariableOp_1� cond/GreaterEqual/ReadVariableOp�cond/LessEqual/ReadVariableOp�cond/Sub/ReadVariableOp�5cond/polynomial_decay_pruning_schedule/ReadVariableOp�#cond/pruning_ops/Abs/ReadVariableOp�
5cond/polynomial_decay_pruning_schedule/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	o
,cond/polynomial_decay_pruning_schedule/sub/yConst*
_output_shapes
: *
dtype0	*
value
B	 R��
*cond/polynomial_decay_pruning_schedule/subSub=cond/polynomial_decay_pruning_schedule/ReadVariableOp:value:05cond/polynomial_decay_pruning_schedule/sub/y:output:0*
T0	*
_output_shapes
: �
+cond/polynomial_decay_pruning_schedule/CastCast.cond/polynomial_decay_pruning_schedule/sub:z:0*

DstT0*

SrcT0	*
_output_shapes
: u
0cond/polynomial_decay_pruning_schedule/truediv/yConst*
_output_shapes
: *
dtype0*
valueB
 * �jF�
.cond/polynomial_decay_pruning_schedule/truedivRealDiv/cond/polynomial_decay_pruning_schedule/Cast:y:09cond/polynomial_decay_pruning_schedule/truediv/y:output:0*
T0*
_output_shapes
: u
0cond/polynomial_decay_pruning_schedule/Maximum/xConst*
_output_shapes
: *
dtype0*
valueB
 *    �
.cond/polynomial_decay_pruning_schedule/MaximumMaximum9cond/polynomial_decay_pruning_schedule/Maximum/x:output:02cond/polynomial_decay_pruning_schedule/truediv:z:0*
T0*
_output_shapes
: u
0cond/polynomial_decay_pruning_schedule/Minimum/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
.cond/polynomial_decay_pruning_schedule/MinimumMinimum9cond/polynomial_decay_pruning_schedule/Minimum/x:output:02cond/polynomial_decay_pruning_schedule/Maximum:z:0*
T0*
_output_shapes
: s
.cond/polynomial_decay_pruning_schedule/sub_1/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
,cond/polynomial_decay_pruning_schedule/sub_1Sub7cond/polynomial_decay_pruning_schedule/sub_1/x:output:02cond/polynomial_decay_pruning_schedule/Minimum:z:0*
T0*
_output_shapes
: q
,cond/polynomial_decay_pruning_schedule/Pow/yConst*
_output_shapes
: *
dtype0*
valueB
 *  @@�
*cond/polynomial_decay_pruning_schedule/PowPow0cond/polynomial_decay_pruning_schedule/sub_1:z:05cond/polynomial_decay_pruning_schedule/Pow/y:output:0*
T0*
_output_shapes
: q
,cond/polynomial_decay_pruning_schedule/Mul/xConst*
_output_shapes
: *
dtype0*
valueB
 *   ��
*cond/polynomial_decay_pruning_schedule/MulMul5cond/polynomial_decay_pruning_schedule/Mul/x:output:0.cond/polynomial_decay_pruning_schedule/Pow:z:0*
T0*
_output_shapes
: v
1cond/polynomial_decay_pruning_schedule/sparsity/yConst*
_output_shapes
: *
dtype0*
valueB
 *   ?�
/cond/polynomial_decay_pruning_schedule/sparsityAddV2.cond/polynomial_decay_pruning_schedule/Mul:z:0:cond/polynomial_decay_pruning_schedule/sparsity/y:output:0*
T0*
_output_shapes
: �
 cond/GreaterEqual/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	V
cond/GreaterEqual/yConst*
_output_shapes
: *
dtype0	*
value
B	 R��
cond/GreaterEqualGreaterEqual(cond/GreaterEqual/ReadVariableOp:value:0cond/GreaterEqual/y:output:0*
T0	*
_output_shapes
: �
cond/LessEqual/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	T
cond/LessEqual/yConst*
_output_shapes
: *
dtype0	*
valueB		 Rܒ~
cond/LessEqual	LessEqual%cond/LessEqual/ReadVariableOp:value:0cond/LessEqual/y:output:0*
T0	*
_output_shapes
: O
cond/Less/xConst*
_output_shapes
: *
dtype0*
valueB	 :ܒM
cond/Less/yConst*
_output_shapes
: *
dtype0*
value	B : ^
	cond/LessLesscond/Less/x:output:0cond/Less/y:output:0*
T0*
_output_shapes
: V
cond/LogicalOr	LogicalOrcond/LessEqual:z:0cond/Less:z:0*
_output_shapes
: `
cond/LogicalAnd
LogicalAndcond/GreaterEqual:z:0cond/LogicalOr:z:0*
_output_shapes
: �
cond/Sub/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	M

cond/Sub/yConst*
_output_shapes
: *
dtype0	*
value
B	 R�f
cond/SubSubcond/Sub/ReadVariableOp:value:0cond/Sub/y:output:0*
T0	*
_output_shapes
: R
cond/FloorMod/yConst*
_output_shapes
: *
dtype0	*
value
B	 R�b
cond/FloorModFloorModcond/Sub:z:0cond/FloorMod/y:output:0*
T0	*
_output_shapes
: N
cond/Equal/yConst*
_output_shapes
: *
dtype0	*
value	B	 R ^

cond/EqualEqualcond/FloorMod:z:0cond/Equal/y:output:0*
T0	*
_output_shapes
: \
cond/LogicalAnd_1
LogicalAndcond/LogicalAnd:z:0cond/Equal:z:0*
_output_shapes
: �
#cond/pruning_ops/Abs/ReadVariableOpReadVariableOp,cond_pruning_ops_abs_readvariableop_resource*
_output_shapes

: *
dtype0q
cond/pruning_ops/AbsAbs+cond/pruning_ops/Abs/ReadVariableOp:value:0*
T0*
_output_shapes

: W
cond/pruning_ops/SizeConst*
_output_shapes
: *
dtype0*
value	B :`m
cond/pruning_ops/CastCastcond/pruning_ops/Size:output:0*

DstT0*

SrcT0*
_output_shapes
: [
cond/pruning_ops/sub/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
cond/pruning_ops/subSubcond/pruning_ops/sub/x:output:03cond/polynomial_decay_pruning_schedule/sparsity:z:0*
T0*
_output_shapes
: q
cond/pruning_ops/mulMulcond/pruning_ops/Cast:y:0cond/pruning_ops/sub:z:0*
T0*
_output_shapes
: Z
cond/pruning_ops/RoundRoundcond/pruning_ops/mul:z:0*
T0*
_output_shapes
: _
cond/pruning_ops/Maximum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
cond/pruning_ops/MaximumMaximumcond/pruning_ops/Round:y:0#cond/pruning_ops/Maximum/y:output:0*
T0*
_output_shapes
: m
cond/pruning_ops/Cast_1Castcond/pruning_ops/Maximum:z:0*

DstT0*

SrcT0*
_output_shapes
: q
cond/pruning_ops/Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB:
����������
cond/pruning_ops/ReshapeReshapecond/pruning_ops/Abs:y:0'cond/pruning_ops/Reshape/shape:output:0*
T0*
_output_shapes
:`Y
cond/pruning_ops/Size_1Const*
_output_shapes
: *
dtype0*
value	B :`�
cond/pruning_ops/TopKV2TopKV2!cond/pruning_ops/Reshape:output:0 cond/pruning_ops/Size_1:output:0*
T0* 
_output_shapes
:`:`Z
cond/pruning_ops/sub_1/yConst*
_output_shapes
: *
dtype0*
value	B :~
cond/pruning_ops/sub_1Subcond/pruning_ops/Cast_1:y:0!cond/pruning_ops/sub_1/y:output:0*
T0*
_output_shapes
: `
cond/pruning_ops/GatherV2/axisConst*
_output_shapes
: *
dtype0*
value	B : �
cond/pruning_ops/GatherV2GatherV2 cond/pruning_ops/TopKV2:values:0cond/pruning_ops/sub_1:z:0'cond/pruning_ops/GatherV2/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
: Z
cond/pruning_ops/sub_2/yConst*
_output_shapes
: *
dtype0*
value	B :~
cond/pruning_ops/sub_2Subcond/pruning_ops/Cast_1:y:0!cond/pruning_ops/sub_2/y:output:0*
T0*
_output_shapes
: b
 cond/pruning_ops/GatherV2_1/axisConst*
_output_shapes
: *
dtype0*
value	B : �
cond/pruning_ops/GatherV2_1GatherV2!cond/pruning_ops/TopKV2:indices:0cond/pruning_ops/sub_2:z:0)cond/pruning_ops/GatherV2_1/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
: �
cond/pruning_ops/GreaterEqualGreaterEqualcond/pruning_ops/Abs:y:0"cond/pruning_ops/GatherV2:output:0*
T0*
_output_shapes

: Y
cond/pruning_ops/Size_2Const*
_output_shapes
: *
dtype0*
value	B :``
cond/pruning_ops/one_hot/ConstConst*
_output_shapes
: *
dtype0
*
value	B
 Zb
 cond/pruning_ops/one_hot/Const_1Const*
_output_shapes
: *
dtype0
*
value	B
 Z �
cond/pruning_ops/one_hotOneHot$cond/pruning_ops/GatherV2_1:output:0 cond/pruning_ops/Size_2:output:0'cond/pruning_ops/one_hot/Const:output:0)cond/pruning_ops/one_hot/Const_1:output:0*
TI0*
T0
*
_output_shapes
:`q
 cond/pruning_ops/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"       �
cond/pruning_ops/Reshape_1Reshape!cond/pruning_ops/one_hot:output:0)cond/pruning_ops/Reshape_1/shape:output:0*
T0
*
_output_shapes

: �
cond/pruning_ops/LogicalOr	LogicalOr!cond/pruning_ops/GreaterEqual:z:0#cond/pruning_ops/Reshape_1:output:0*
_output_shapes

: i
	cond/CastCastcond/pruning_ops/LogicalOr:z:0*

DstT0*

SrcT0
*
_output_shapes

: �
cond/AssignVariableOpAssignVariableOpcond_assignvariableop_resourcecond/Cast:y:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�
cond/AssignVariableOp_1AssignVariableOp cond_assignvariableop_1_resource"cond/pruning_ops/GatherV2:output:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�
cond/group_depsNoOp^cond/AssignVariableOp^cond/AssignVariableOp_1",/job:localhost/replica:0/task:0/device:GPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 h
cond/IdentityIdentitycond_identity_logicaland_1^cond/group_deps*
T0
*
_output_shapes
: `
cond/Identity_1Identitycond/Identity:output:0
^cond/NoOp*
T0
*
_output_shapes
: �
	cond/NoOpNoOp^cond/AssignVariableOp^cond/AssignVariableOp_1!^cond/GreaterEqual/ReadVariableOp^cond/LessEqual/ReadVariableOp^cond/Sub/ReadVariableOp6^cond/polynomial_decay_pruning_schedule/ReadVariableOp$^cond/pruning_ops/Abs/ReadVariableOp*
_output_shapes
 "+
cond_identity_1cond/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes

: : : : : 22
cond/AssignVariableOp_1cond/AssignVariableOp_12.
cond/AssignVariableOpcond/AssignVariableOp2D
 cond/GreaterEqual/ReadVariableOp cond/GreaterEqual/ReadVariableOp2>
cond/LessEqual/ReadVariableOpcond/LessEqual/ReadVariableOp22
cond/Sub/ReadVariableOpcond/Sub/ReadVariableOp2n
5cond/polynomial_decay_pruning_schedule/ReadVariableOp5cond/polynomial_decay_pruning_schedule/ReadVariableOp2J
#cond/pruning_ops/Abs/ReadVariableOp#cond/pruning_ops/Abs/ReadVariableOp:D@

_output_shapes
: 
&
_user_specified_nameLogicalAnd_1:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:( $
"
_user_specified_name
resource
� 
f
J__inference_q_activation_2_layer_call_and_return_conditional_losses_567374

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
:���������  J
ReluReluinputs*
T0*+
_output_shapes
:���������  S
	ones_likeOnesLikeinputs*
T0*+
_output_shapes
:���������  D
sub_2Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: Z
mulMulones_like:y:0	sub_2:z:0*
T0*+
_output_shapes
:���������  v
SelectV2SelectV2LessEqual:z:0Relu:activations:0mul:z:0*
T0*+
_output_shapes
:���������  T
mul_1MulinputsCast:y:0*
T0*+
_output_shapes
:���������  _
truedivRealDiv	mul_1:z:0
Cast_1:y:0*
T0*+
_output_shapes
:���������  M
NegNegtruediv:z:0*
T0*+
_output_shapes
:���������  Q
RoundRoundtruediv:z:0*
T0*+
_output_shapes
:���������  V
addAddV2Neg:y:0	Round:y:0*
T0*+
_output_shapes
:���������  [
StopGradientStopGradientadd:z:0*
T0*+
_output_shapes
:���������  h
add_1AddV2truediv:z:0StopGradient:output:0*
T0*+
_output_shapes
:���������  _
	truediv_1RealDiv	add_1:z:0Cast:y:0*
T0*+
_output_shapes
:���������  P
truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?U
	truediv_2RealDivtruediv_2/x:output:0Cast:y:0*
T0*
_output_shapes
: L
sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?N
sub_3Subsub_3/x:output:0truediv_2:z:0*
T0*
_output_shapes
: p
clip_by_value/MinimumMinimumtruediv_1:z:0	sub_3:z:0*
T0*+
_output_shapes
:���������  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    �
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*+
_output_shapes
:���������  a
mul_2Mul
Cast_1:y:0clip_by_value:z:0*
T0*+
_output_shapes
:���������  U
Neg_1NegSelectV2:output:0*
T0*+
_output_shapes
:���������  Z
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*+
_output_shapes
:���������  L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?_
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*+
_output_shapes
:���������  _
StopGradient_1StopGradient	mul_3:z:0*
T0*+
_output_shapes
:���������  p
add_3AddV2SelectV2:output:0StopGradient_1:output:0*
T0*+
_output_shapes
:���������  U
IdentityIdentity	add_3:z:0*
T0*+
_output_shapes
:���������  "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:���������  :S O
+
_output_shapes
:���������  
 
_user_specified_nameinputs
��
�
T__inference_prune_low_magnitude_phi3_layer_call_and_return_conditional_losses_567233

inputs!
readvariableop_resource:	 
cond_input_1:  
cond_input_2:  
cond_input_3: '
readvariableop_4_resource: 
identity��AssignVariableOp�AssignVariableOp_1�GreaterEqual/ReadVariableOp�LessEqual/ReadVariableOp�Mul/ReadVariableOp�Mul/ReadVariableOp_1�ReadVariableOp�ReadVariableOp_1�ReadVariableOp_2�ReadVariableOp_3�ReadVariableOp_4�ReadVariableOp_5�ReadVariableOp_6�Sub/ReadVariableOp�'assert_greater_equal/Assert/AssertGuard�#assert_greater_equal/ReadVariableOp�cond�0polynomial_decay_pruning_schedule/ReadVariableOp^
ReadVariableOpReadVariableOpreadvariableop_resource*
_output_shapes
: *
dtype0	G
add/yConst*
_output_shapes
: *
dtype0	*
value	B	 RU
addAddV2ReadVariableOp:value:0add/y:output:0*
T0	*
_output_shapes
: �
AssignVariableOpAssignVariableOpreadvariableop_resourceadd:z:0^ReadVariableOp*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0	*
validate_shape(7
updateNoOp^AssignVariableOp*
_output_shapes
 �
#assert_greater_equal/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp*
_output_shapes
: *
dtype0	X
assert_greater_equal/yConst*
_output_shapes
: *
dtype0	*
value	B	 R�
!assert_greater_equal/GreaterEqualGreaterEqual+assert_greater_equal/ReadVariableOp:value:0assert_greater_equal/y:output:0*
T0	*
_output_shapes
: [
assert_greater_equal/RankConst*
_output_shapes
: *
dtype0*
value	B : b
 assert_greater_equal/range/startConst*
_output_shapes
: *
dtype0*
value	B : b
 assert_greater_equal/range/deltaConst*
_output_shapes
: *
dtype0*
value	B :�
assert_greater_equal/rangeRange)assert_greater_equal/range/start:output:0"assert_greater_equal/Rank:output:0)assert_greater_equal/range/delta:output:0*
_output_shapes
: �
assert_greater_equal/AllAll%assert_greater_equal/GreaterEqual:z:0#assert_greater_equal/range:output:0*
_output_shapes
: �
!assert_greater_equal/Assert/ConstConst*
_output_shapes
: *
dtype0*�
value�B� B�Prune() wrapper requires the UpdatePruningStep callback to be provided during training. Please add it as a callback to your model.fit call.�
#assert_greater_equal/Assert/Const_1Const*
_output_shapes
: *
dtype0*<
value3B1 B+Condition x >= y did not hold element-wise:�
#assert_greater_equal/Assert/Const_2Const*
_output_shapes
: *
dtype0*=
value4B2 B,x (assert_greater_equal/ReadVariableOp:0) = �
#assert_greater_equal/Assert/Const_3Const*
_output_shapes
: *
dtype0*0
value'B% By (assert_greater_equal/y:0) = �
'assert_greater_equal/Assert/AssertGuardIf!assert_greater_equal/All:output:0!assert_greater_equal/All:output:0+assert_greater_equal/ReadVariableOp:value:0assert_greater_equal/y:output:0*
Tcond0
*
Tin
2
		*
Tout
2
*
_lower_using_switch_merge(*
_output_shapes
: * 
_read_only_resource_inputs
 *G
else_branch8R6
4assert_greater_equal_Assert_AssertGuard_false_567000*
output_shapes
: *F
then_branch7R5
3assert_greater_equal_Assert_AssertGuard_true_566999�
0assert_greater_equal/Assert/AssertGuard/IdentityIdentity0assert_greater_equal/Assert/AssertGuard:output:0*
T0
*&
 _has_manual_control_dependencies(*
_output_shapes
: �
0polynomial_decay_pruning_schedule/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	�
'polynomial_decay_pruning_schedule/sub/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R��
%polynomial_decay_pruning_schedule/subSub8polynomial_decay_pruning_schedule/ReadVariableOp:value:00polynomial_decay_pruning_schedule/sub/y:output:0*
T0	*
_output_shapes
: �
&polynomial_decay_pruning_schedule/CastCast)polynomial_decay_pruning_schedule/sub:z:0*

DstT0*

SrcT0	*
_output_shapes
: �
+polynomial_decay_pruning_schedule/truediv/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 * �jF�
)polynomial_decay_pruning_schedule/truedivRealDiv*polynomial_decay_pruning_schedule/Cast:y:04polynomial_decay_pruning_schedule/truediv/y:output:0*
T0*
_output_shapes
: �
+polynomial_decay_pruning_schedule/Maximum/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *    �
)polynomial_decay_pruning_schedule/MaximumMaximum4polynomial_decay_pruning_schedule/Maximum/x:output:0-polynomial_decay_pruning_schedule/truediv:z:0*
T0*
_output_shapes
: �
+polynomial_decay_pruning_schedule/Minimum/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *  �?�
)polynomial_decay_pruning_schedule/MinimumMinimum4polynomial_decay_pruning_schedule/Minimum/x:output:0-polynomial_decay_pruning_schedule/Maximum:z:0*
T0*
_output_shapes
: �
)polynomial_decay_pruning_schedule/sub_1/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *  �?�
'polynomial_decay_pruning_schedule/sub_1Sub2polynomial_decay_pruning_schedule/sub_1/x:output:0-polynomial_decay_pruning_schedule/Minimum:z:0*
T0*
_output_shapes
: �
'polynomial_decay_pruning_schedule/Pow/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *  @@�
%polynomial_decay_pruning_schedule/PowPow+polynomial_decay_pruning_schedule/sub_1:z:00polynomial_decay_pruning_schedule/Pow/y:output:0*
T0*
_output_shapes
: �
'polynomial_decay_pruning_schedule/Mul/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *   ��
%polynomial_decay_pruning_schedule/MulMul0polynomial_decay_pruning_schedule/Mul/x:output:0)polynomial_decay_pruning_schedule/Pow:z:0*
T0*
_output_shapes
: �
,polynomial_decay_pruning_schedule/sparsity/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *   ?�
*polynomial_decay_pruning_schedule/sparsityAddV2)polynomial_decay_pruning_schedule/Mul:z:05polynomial_decay_pruning_schedule/sparsity/y:output:0*
T0*
_output_shapes
: �
GreaterEqual/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	�
GreaterEqual/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R�{
GreaterEqualGreaterEqual#GreaterEqual/ReadVariableOp:value:0GreaterEqual/y:output:0*
T0	*
_output_shapes
: �
LessEqual/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	�
LessEqual/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
valueB		 Rܒo
	LessEqual	LessEqual LessEqual/ReadVariableOp:value:0LessEqual/y:output:0*
T0	*
_output_shapes
: }
Less/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB	 :ܒ{
Less/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
value	B : O
LessLessLess/x:output:0Less/y:output:0*
T0*
_output_shapes
: G
	LogicalOr	LogicalOrLessEqual:z:0Less:z:0*
_output_shapes
: Q

LogicalAnd
LogicalAndGreaterEqual:z:0LogicalOr:z:0*
_output_shapes
: �
Sub/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	{
Sub/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R�W
SubSubSub/ReadVariableOp:value:0Sub/y:output:0*
T0	*
_output_shapes
: �

FloorMod/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R�S
FloorModFloorModSub:z:0FloorMod/y:output:0*
T0	*
_output_shapes
: |
Equal/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value	B	 R O
EqualEqualFloorMod:z:0Equal/y:output:0*
T0	*
_output_shapes
: M
LogicalAnd_1
LogicalAndLogicalAnd:z:0	Equal:z:0*
_output_shapes
: �
condIfLogicalAnd_1:z:0readvariableop_resourcecond_input_1cond_input_2cond_input_3LogicalAnd_1:z:0^AssignVariableOp*
Tcond0
*
Tin	
2
*
Tout
2
*
_lower_using_switch_merge(*
_output_shapes
: *$
_read_only_resource_inputs
*$
else_branchR
cond_false_567057*
output_shapes
: *#
then_branchR
cond_true_567056q
cond/IdentityIdentitycond:output:0*
T0
*&
 _has_manual_control_dependencies(*
_output_shapes
: i
update_1NoOp1^assert_greater_equal/Assert/AssertGuard/Identity^cond/Identity*
_output_shapes
 _
Mul/ReadVariableOpReadVariableOpcond_input_1*
_output_shapes

:  *
dtype0h
Mul/ReadVariableOp_1ReadVariableOpcond_input_2^cond*
_output_shapes

:  *
dtype0m
MulMulMul/ReadVariableOp:value:0Mul/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  �
AssignVariableOp_1AssignVariableOpcond_input_1Mul:z:0^Mul/ReadVariableOp^cond*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�

group_depsNoOp^AssignVariableOp_1",/job:localhost/replica:0/task:0/device:GPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 e
group_deps_1NoOp^group_deps",/job:localhost/replica:0/task:0/device:GPU:0*
_output_shapes
 G
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
: r
ReadVariableOp_1ReadVariableOpcond_input_1^AssignVariableOp_1*
_output_shapes

:  *
dtype0L
mul_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   Ca
mul_1MulReadVariableOp_1:value:0mul_1/y:output:0*
T0*
_output_shapes

:  P
truedivRealDiv	mul_1:z:0Cast:y:0*
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

:  K
add_1AddV2Neg:y:0	Round:y:0*
T0*
_output_shapes

:  P
StopGradientStopGradient	add_1:z:0*
T0*
_output_shapes

:  [
add_2AddV2truediv:z:0StopGradient:output:0*
T0*
_output_shapes

:  \
clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  �Bv
clip_by_value/MinimumMinimum	add_2:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   �v
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*
_output_shapes

:  R
mul_2MulCast:y:0clip_by_value:z:0*
T0*
_output_shapes

:  P
truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C^
	truediv_1RealDiv	mul_2:z:0truediv_1/y:output:0*
T0*
_output_shapes

:  L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?V
mul_3Mulmul_3/x:output:0truediv_1:z:0*
T0*
_output_shapes

:  r
ReadVariableOp_2ReadVariableOpcond_input_1^AssignVariableOp_1*
_output_shapes

:  *
dtype0O
Neg_1NegReadVariableOp_2:value:0*
T0*
_output_shapes

:  M
add_3AddV2	Neg_1:y:0	mul_3:z:0*
T0*
_output_shapes

:  L
mul_4/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?R
mul_4Mulmul_4/x:output:0	add_3:z:0*
T0*
_output_shapes

:  R
StopGradient_1StopGradient	mul_4:z:0*
T0*
_output_shapes

:  r
ReadVariableOp_3ReadVariableOpcond_input_1^AssignVariableOp_1*
_output_shapes

:  *
dtype0j
add_4AddV2ReadVariableOp_3:value:0StopGradient_1:output:0*
T0*
_output_shapes

:  I
ShapeShapeinputs*
T0*
_output_shapes
::��Q
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
valueB"����    d
ReshapeReshapeinputsReshape/shape:output:0*
T0*'
_output_shapes
:��������� _
transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       c
	transpose	Transpose	add_4:z:0transpose/perm:output:0*
T0*
_output_shapes

:  `
Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"    ����f
	Reshape_1Reshapetranspose:y:0Reshape_1/shape:output:0*
T0*
_output_shapes

:  h
MatMulMatMulReshape:output:0Reshape_1:output:0*
T0*'
_output_shapes
:��������� S
Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B : S
Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : �
Reshape_2/shapePackunstack:output:0Reshape_2/shape/1:output:0Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:v
	Reshape_2ReshapeMatMul:product:0Reshape_2/shape:output:0*
T0*+
_output_shapes
:���������  I
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
ReadVariableOp_4ReadVariableOpreadvariableop_4_resource*
_output_shapes
: *
dtype0L
mul_5/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C]
mul_5MulReadVariableOp_4:value:0mul_5/y:output:0*
T0*
_output_shapes
: P
	truediv_2RealDiv	mul_5:z:0
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
add_5AddV2	Neg_2:y:0Round_1:y:0*
T0*
_output_shapes
: N
StopGradient_2StopGradient	add_5:z:0*
T0*
_output_shapes
: [
add_6AddV2truediv_2:z:0StopGradient_2:output:0*
T0*
_output_shapes
: ^
clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  �Bv
clip_by_value_1/MinimumMinimum	add_6:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   �x
clip_by_value_1Maximumclip_by_value_1/Minimum:z:0clip_by_value_1/y:output:0*
T0*
_output_shapes
: R
mul_6Mul
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
	truediv_3RealDiv	mul_6:z:0truediv_3/y:output:0*
T0*
_output_shapes
: L
mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?R
mul_7Mulmul_7/x:output:0truediv_3:z:0*
T0*
_output_shapes
: f
ReadVariableOp_5ReadVariableOpreadvariableop_4_resource*
_output_shapes
: *
dtype0K
Neg_3NegReadVariableOp_5:value:0*
T0*
_output_shapes
: I
add_7AddV2	Neg_3:y:0	mul_7:z:0*
T0*
_output_shapes
: L
mul_8/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?N
mul_8Mulmul_8/x:output:0	add_7:z:0*
T0*
_output_shapes
: N
StopGradient_3StopGradient	mul_8:z:0*
T0*
_output_shapes
: f
ReadVariableOp_6ReadVariableOpreadvariableop_4_resource*
_output_shapes
: *
dtype0f
add_8AddV2ReadVariableOp_6:value:0StopGradient_3:output:0*
T0*
_output_shapes
: g
BiasAddBiasAddReshape_2:output:0	add_8:z:0*
T0*+
_output_shapes
:���������  c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:���������  �
NoOpNoOp^AssignVariableOp^AssignVariableOp_1^GreaterEqual/ReadVariableOp^LessEqual/ReadVariableOp^Mul/ReadVariableOp^Mul/ReadVariableOp_1^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5^ReadVariableOp_6^Sub/ReadVariableOp(^assert_greater_equal/Assert/AssertGuard$^assert_greater_equal/ReadVariableOp^cond1^polynomial_decay_pruning_schedule/ReadVariableOp*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*4
_input_shapes#
!:���������  : : : : : 2(
AssignVariableOp_1AssignVariableOp_12$
AssignVariableOpAssignVariableOp2:
GreaterEqual/ReadVariableOpGreaterEqual/ReadVariableOp24
LessEqual/ReadVariableOpLessEqual/ReadVariableOp2,
Mul/ReadVariableOp_1Mul/ReadVariableOp_12(
Mul/ReadVariableOpMul/ReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_52$
ReadVariableOp_6ReadVariableOp_62 
ReadVariableOpReadVariableOp2(
Sub/ReadVariableOpSub/ReadVariableOp2R
'assert_greater_equal/Assert/AssertGuard'assert_greater_equal/Assert/AssertGuard2J
#assert_greater_equal/ReadVariableOp#assert_greater_equal/ReadVariableOp2
condcond2d
0polynomial_decay_pruning_schedule/ReadVariableOp0polynomial_decay_pruning_schedule/ReadVariableOp:($
"
_user_specified_name
resource:'#
!
_user_specified_name	input_3:'#
!
_user_specified_name	input_2:'#
!
_user_specified_name	input_1:($
"
_user_specified_name
resource:S O
+
_output_shapes
:���������  
 
_user_specified_nameinputs
�
_
C__inference_softmax_layer_call_and_return_conditional_losses_565374

inputs
identityL
SoftmaxSoftmaxinputs*
T0*'
_output_shapes
:���������Y
IdentityIdentitySoftmax:softmax:0*
T0*'
_output_shapes
:���������"
identityIdentity:output:0*(
_construction_contextkEagerRuntime*&
_input_shapes
:���������:O K
'
_output_shapes
:���������
 
_user_specified_nameinputs
�G
�
T__inference_prune_low_magnitude_phi2_layer_call_and_return_conditional_losses_565565

inputs-
mul_readvariableop_resource:  /
mul_readvariableop_1_resource:  '
readvariableop_3_resource: 
identity��AssignVariableOp�Mul/ReadVariableOp�Mul/ReadVariableOp_1�ReadVariableOp�ReadVariableOp_1�ReadVariableOp_2�ReadVariableOp_3�ReadVariableOp_4�ReadVariableOp_5'
	no_updateNoOp*
_output_shapes
 )
no_update_1NoOp*
_output_shapes
 n
Mul/ReadVariableOpReadVariableOpmul_readvariableop_resource*
_output_shapes

:  *
dtype0r
Mul/ReadVariableOp_1ReadVariableOpmul_readvariableop_1_resource*
_output_shapes

:  *
dtype0m
MulMulMul/ReadVariableOp:value:0Mul/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  �
AssignVariableOpAssignVariableOpmul_readvariableop_resourceMul:z:0^Mul/ReadVariableOp*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�

group_depsNoOp^AssignVariableOp",/job:localhost/replica:0/task:0/device:GPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 e
group_deps_1NoOp^group_deps",/job:localhost/replica:0/task:0/device:GPU:0*
_output_shapes
 G
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
: }
ReadVariableOpReadVariableOpmul_readvariableop_resource^AssignVariableOp*
_output_shapes

:  *
dtype0L
mul_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C_
mul_1MulReadVariableOp:value:0mul_1/y:output:0*
T0*
_output_shapes

:  P
truedivRealDiv	mul_1:z:0Cast:y:0*
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
 *  �Bv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   �v
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*
_output_shapes

:  R
mul_2MulCast:y:0clip_by_value:z:0*
T0*
_output_shapes

:  P
truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C^
	truediv_1RealDiv	mul_2:z:0truediv_1/y:output:0*
T0*
_output_shapes

:  L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?V
mul_3Mulmul_3/x:output:0truediv_1:z:0*
T0*
_output_shapes

:  
ReadVariableOp_1ReadVariableOpmul_readvariableop_resource^AssignVariableOp*
_output_shapes

:  *
dtype0O
Neg_1NegReadVariableOp_1:value:0*
T0*
_output_shapes

:  M
add_2AddV2	Neg_1:y:0	mul_3:z:0*
T0*
_output_shapes

:  L
mul_4/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?R
mul_4Mulmul_4/x:output:0	add_2:z:0*
T0*
_output_shapes

:  R
StopGradient_1StopGradient	mul_4:z:0*
T0*
_output_shapes

:  
ReadVariableOp_2ReadVariableOpmul_readvariableop_resource^AssignVariableOp*
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
::��Q
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
valueB"����    d
ReshapeReshapeinputsReshape/shape:output:0*
T0*'
_output_shapes
:��������� _
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
valueB"    ����f
	Reshape_1Reshapetranspose:y:0Reshape_1/shape:output:0*
T0*
_output_shapes

:  h
MatMulMatMulReshape:output:0Reshape_1:output:0*
T0*'
_output_shapes
:��������� S
Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B : S
Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : �
Reshape_2/shapePackunstack:output:0Reshape_2/shape/1:output:0Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:v
	Reshape_2ReshapeMatMul:product:0Reshape_2/shape:output:0*
T0*+
_output_shapes
:���������  I
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
mul_5/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C]
mul_5MulReadVariableOp_3:value:0mul_5/y:output:0*
T0*
_output_shapes
: P
	truediv_2RealDiv	mul_5:z:0
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
 *  �Bv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   �x
clip_by_value_1Maximumclip_by_value_1/Minimum:z:0clip_by_value_1/y:output:0*
T0*
_output_shapes
: R
mul_6Mul
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
	truediv_3RealDiv	mul_6:z:0truediv_3/y:output:0*
T0*
_output_shapes
: L
mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?R
mul_7Mulmul_7/x:output:0truediv_3:z:0*
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
add_6AddV2	Neg_3:y:0	mul_7:z:0*
T0*
_output_shapes
: L
mul_8/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?N
mul_8Mulmul_8/x:output:0	add_6:z:0*
T0*
_output_shapes
: N
StopGradient_3StopGradient	mul_8:z:0*
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
:���������  c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:���������  �
NoOpNoOp^AssignVariableOp^Mul/ReadVariableOp^Mul/ReadVariableOp_1^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*0
_input_shapes
:���������  : : : 2$
AssignVariableOpAssignVariableOp2,
Mul/ReadVariableOp_1Mul/ReadVariableOp_12(
Mul/ReadVariableOpMul/ReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_52 
ReadVariableOpReadVariableOp:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:S O
+
_output_shapes
:���������  
 
_user_specified_nameinputs
�
�
9__inference_prune_low_magnitude_phi2_layer_call_fn_566560

inputs
unknown:  
	unknown_0:  
	unknown_1: 
identity��StatefulPartitionedCall�
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0	unknown_1*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:���������  *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8� *]
fXRV
T__inference_prune_low_magnitude_phi2_layer_call_and_return_conditional_losses_565565s
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:���������  <
NoOpNoOp^StatefulPartitionedCall*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*0
_input_shapes
:���������  : : : 22
StatefulPartitionedCallStatefulPartitionedCall:&"
 
_user_specified_name566556:&"
 
_user_specified_name566554:&"
 
_user_specified_name566552:S O
+
_output_shapes
:���������  
 
_user_specified_nameinputs
�

�
9__inference_prune_low_magnitude_phi3_layer_call_fn_566969

inputs
unknown:	 
	unknown_0:  
	unknown_1:  
	unknown_2: 
	unknown_3: 
identity��StatefulPartitionedCall�
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0	unknown_1	unknown_2	unknown_3*
Tin

2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:���������  *#
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8� *]
fXRV
T__inference_prune_low_magnitude_phi3_layer_call_and_return_conditional_losses_564793s
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:���������  <
NoOpNoOp^StatefulPartitionedCall*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*4
_input_shapes#
!:���������  : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:&"
 
_user_specified_name566965:&"
 
_user_specified_name566963:&"
 
_user_specified_name566961:&"
 
_user_specified_name566959:&"
 
_user_specified_name566957:S O
+
_output_shapes
:���������  
 
_user_specified_nameinputs
�
�
cond_false_564305
cond_placeholder
cond_placeholder_1
cond_placeholder_2
cond_placeholder_3
cond_identity_logicaland_1

cond_identity_1
O
	cond/NoOpNoOp*&
 _has_manual_control_dependencies(*
_output_shapes
 b
cond/IdentityIdentitycond_identity_logicaland_1
^cond/NoOp*
T0
*
_output_shapes
: T
cond/Identity_1Identitycond/Identity:output:0*
T0
*
_output_shapes
: "+
cond_identity_1cond/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes

: : : : : :D@

_output_shapes
: 
&
_user_specified_nameLogicalAnd_1
�X
�
cond_true_567909H
>cond_polynomial_decay_pruning_schedule_readvariableop_resource:	 >
,cond_pruning_ops_abs_readvariableop_resource: 0
cond_assignvariableop_resource: *
 cond_assignvariableop_1_resource: 
cond_identity_logicaland_1

cond_identity_1
��cond/AssignVariableOp�cond/AssignVariableOp_1� cond/GreaterEqual/ReadVariableOp�cond/LessEqual/ReadVariableOp�cond/Sub/ReadVariableOp�5cond/polynomial_decay_pruning_schedule/ReadVariableOp�#cond/pruning_ops/Abs/ReadVariableOp�
5cond/polynomial_decay_pruning_schedule/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	o
,cond/polynomial_decay_pruning_schedule/sub/yConst*
_output_shapes
: *
dtype0	*
value
B	 R��
*cond/polynomial_decay_pruning_schedule/subSub=cond/polynomial_decay_pruning_schedule/ReadVariableOp:value:05cond/polynomial_decay_pruning_schedule/sub/y:output:0*
T0	*
_output_shapes
: �
+cond/polynomial_decay_pruning_schedule/CastCast.cond/polynomial_decay_pruning_schedule/sub:z:0*

DstT0*

SrcT0	*
_output_shapes
: u
0cond/polynomial_decay_pruning_schedule/truediv/yConst*
_output_shapes
: *
dtype0*
valueB
 * �jF�
.cond/polynomial_decay_pruning_schedule/truedivRealDiv/cond/polynomial_decay_pruning_schedule/Cast:y:09cond/polynomial_decay_pruning_schedule/truediv/y:output:0*
T0*
_output_shapes
: u
0cond/polynomial_decay_pruning_schedule/Maximum/xConst*
_output_shapes
: *
dtype0*
valueB
 *    �
.cond/polynomial_decay_pruning_schedule/MaximumMaximum9cond/polynomial_decay_pruning_schedule/Maximum/x:output:02cond/polynomial_decay_pruning_schedule/truediv:z:0*
T0*
_output_shapes
: u
0cond/polynomial_decay_pruning_schedule/Minimum/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
.cond/polynomial_decay_pruning_schedule/MinimumMinimum9cond/polynomial_decay_pruning_schedule/Minimum/x:output:02cond/polynomial_decay_pruning_schedule/Maximum:z:0*
T0*
_output_shapes
: s
.cond/polynomial_decay_pruning_schedule/sub_1/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
,cond/polynomial_decay_pruning_schedule/sub_1Sub7cond/polynomial_decay_pruning_schedule/sub_1/x:output:02cond/polynomial_decay_pruning_schedule/Minimum:z:0*
T0*
_output_shapes
: q
,cond/polynomial_decay_pruning_schedule/Pow/yConst*
_output_shapes
: *
dtype0*
valueB
 *  @@�
*cond/polynomial_decay_pruning_schedule/PowPow0cond/polynomial_decay_pruning_schedule/sub_1:z:05cond/polynomial_decay_pruning_schedule/Pow/y:output:0*
T0*
_output_shapes
: q
,cond/polynomial_decay_pruning_schedule/Mul/xConst*
_output_shapes
: *
dtype0*
valueB
 *   ��
*cond/polynomial_decay_pruning_schedule/MulMul5cond/polynomial_decay_pruning_schedule/Mul/x:output:0.cond/polynomial_decay_pruning_schedule/Pow:z:0*
T0*
_output_shapes
: v
1cond/polynomial_decay_pruning_schedule/sparsity/yConst*
_output_shapes
: *
dtype0*
valueB
 *   ?�
/cond/polynomial_decay_pruning_schedule/sparsityAddV2.cond/polynomial_decay_pruning_schedule/Mul:z:0:cond/polynomial_decay_pruning_schedule/sparsity/y:output:0*
T0*
_output_shapes
: �
 cond/GreaterEqual/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	V
cond/GreaterEqual/yConst*
_output_shapes
: *
dtype0	*
value
B	 R��
cond/GreaterEqualGreaterEqual(cond/GreaterEqual/ReadVariableOp:value:0cond/GreaterEqual/y:output:0*
T0	*
_output_shapes
: �
cond/LessEqual/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	T
cond/LessEqual/yConst*
_output_shapes
: *
dtype0	*
valueB		 Rܒ~
cond/LessEqual	LessEqual%cond/LessEqual/ReadVariableOp:value:0cond/LessEqual/y:output:0*
T0	*
_output_shapes
: O
cond/Less/xConst*
_output_shapes
: *
dtype0*
valueB	 :ܒM
cond/Less/yConst*
_output_shapes
: *
dtype0*
value	B : ^
	cond/LessLesscond/Less/x:output:0cond/Less/y:output:0*
T0*
_output_shapes
: V
cond/LogicalOr	LogicalOrcond/LessEqual:z:0cond/Less:z:0*
_output_shapes
: `
cond/LogicalAnd
LogicalAndcond/GreaterEqual:z:0cond/LogicalOr:z:0*
_output_shapes
: �
cond/Sub/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	M

cond/Sub/yConst*
_output_shapes
: *
dtype0	*
value
B	 R�f
cond/SubSubcond/Sub/ReadVariableOp:value:0cond/Sub/y:output:0*
T0	*
_output_shapes
: R
cond/FloorMod/yConst*
_output_shapes
: *
dtype0	*
value
B	 R�b
cond/FloorModFloorModcond/Sub:z:0cond/FloorMod/y:output:0*
T0	*
_output_shapes
: N
cond/Equal/yConst*
_output_shapes
: *
dtype0	*
value	B	 R ^

cond/EqualEqualcond/FloorMod:z:0cond/Equal/y:output:0*
T0	*
_output_shapes
: \
cond/LogicalAnd_1
LogicalAndcond/LogicalAnd:z:0cond/Equal:z:0*
_output_shapes
: �
#cond/pruning_ops/Abs/ReadVariableOpReadVariableOp,cond_pruning_ops_abs_readvariableop_resource*
_output_shapes

: *
dtype0q
cond/pruning_ops/AbsAbs+cond/pruning_ops/Abs/ReadVariableOp:value:0*
T0*
_output_shapes

: X
cond/pruning_ops/SizeConst*
_output_shapes
: *
dtype0*
value
B :�m
cond/pruning_ops/CastCastcond/pruning_ops/Size:output:0*

DstT0*

SrcT0*
_output_shapes
: [
cond/pruning_ops/sub/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
cond/pruning_ops/subSubcond/pruning_ops/sub/x:output:03cond/polynomial_decay_pruning_schedule/sparsity:z:0*
T0*
_output_shapes
: q
cond/pruning_ops/mulMulcond/pruning_ops/Cast:y:0cond/pruning_ops/sub:z:0*
T0*
_output_shapes
: Z
cond/pruning_ops/RoundRoundcond/pruning_ops/mul:z:0*
T0*
_output_shapes
: _
cond/pruning_ops/Maximum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
cond/pruning_ops/MaximumMaximumcond/pruning_ops/Round:y:0#cond/pruning_ops/Maximum/y:output:0*
T0*
_output_shapes
: m
cond/pruning_ops/Cast_1Castcond/pruning_ops/Maximum:z:0*

DstT0*

SrcT0*
_output_shapes
: q
cond/pruning_ops/Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB:
����������
cond/pruning_ops/ReshapeReshapecond/pruning_ops/Abs:y:0'cond/pruning_ops/Reshape/shape:output:0*
T0*
_output_shapes	
:�Z
cond/pruning_ops/Size_1Const*
_output_shapes
: *
dtype0*
value
B :��
cond/pruning_ops/TopKV2TopKV2!cond/pruning_ops/Reshape:output:0 cond/pruning_ops/Size_1:output:0*
T0*"
_output_shapes
:�:�Z
cond/pruning_ops/sub_1/yConst*
_output_shapes
: *
dtype0*
value	B :~
cond/pruning_ops/sub_1Subcond/pruning_ops/Cast_1:y:0!cond/pruning_ops/sub_1/y:output:0*
T0*
_output_shapes
: `
cond/pruning_ops/GatherV2/axisConst*
_output_shapes
: *
dtype0*
value	B : �
cond/pruning_ops/GatherV2GatherV2 cond/pruning_ops/TopKV2:values:0cond/pruning_ops/sub_1:z:0'cond/pruning_ops/GatherV2/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
: Z
cond/pruning_ops/sub_2/yConst*
_output_shapes
: *
dtype0*
value	B :~
cond/pruning_ops/sub_2Subcond/pruning_ops/Cast_1:y:0!cond/pruning_ops/sub_2/y:output:0*
T0*
_output_shapes
: b
 cond/pruning_ops/GatherV2_1/axisConst*
_output_shapes
: *
dtype0*
value	B : �
cond/pruning_ops/GatherV2_1GatherV2!cond/pruning_ops/TopKV2:indices:0cond/pruning_ops/sub_2:z:0)cond/pruning_ops/GatherV2_1/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
: �
cond/pruning_ops/GreaterEqualGreaterEqualcond/pruning_ops/Abs:y:0"cond/pruning_ops/GatherV2:output:0*
T0*
_output_shapes

: Z
cond/pruning_ops/Size_2Const*
_output_shapes
: *
dtype0*
value
B :�`
cond/pruning_ops/one_hot/ConstConst*
_output_shapes
: *
dtype0
*
value	B
 Zb
 cond/pruning_ops/one_hot/Const_1Const*
_output_shapes
: *
dtype0
*
value	B
 Z �
cond/pruning_ops/one_hotOneHot$cond/pruning_ops/GatherV2_1:output:0 cond/pruning_ops/Size_2:output:0'cond/pruning_ops/one_hot/Const:output:0)cond/pruning_ops/one_hot/Const_1:output:0*
TI0*
T0
*
_output_shapes	
:�q
 cond/pruning_ops/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"       �
cond/pruning_ops/Reshape_1Reshape!cond/pruning_ops/one_hot:output:0)cond/pruning_ops/Reshape_1/shape:output:0*
T0
*
_output_shapes

: �
cond/pruning_ops/LogicalOr	LogicalOr!cond/pruning_ops/GreaterEqual:z:0#cond/pruning_ops/Reshape_1:output:0*
_output_shapes

: i
	cond/CastCastcond/pruning_ops/LogicalOr:z:0*

DstT0*

SrcT0
*
_output_shapes

: �
cond/AssignVariableOpAssignVariableOpcond_assignvariableop_resourcecond/Cast:y:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�
cond/AssignVariableOp_1AssignVariableOp cond_assignvariableop_1_resource"cond/pruning_ops/GatherV2:output:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�
cond/group_depsNoOp^cond/AssignVariableOp^cond/AssignVariableOp_1",/job:localhost/replica:0/task:0/device:GPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 h
cond/IdentityIdentitycond_identity_logicaland_1^cond/group_deps*
T0
*
_output_shapes
: `
cond/Identity_1Identitycond/Identity:output:0
^cond/NoOp*
T0
*
_output_shapes
: �
	cond/NoOpNoOp^cond/AssignVariableOp^cond/AssignVariableOp_1!^cond/GreaterEqual/ReadVariableOp^cond/LessEqual/ReadVariableOp^cond/Sub/ReadVariableOp6^cond/polynomial_decay_pruning_schedule/ReadVariableOp$^cond/pruning_ops/Abs/ReadVariableOp*
_output_shapes
 "+
cond_identity_1cond/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes

: : : : : 22
cond/AssignVariableOp_1cond/AssignVariableOp_12.
cond/AssignVariableOpcond/AssignVariableOp2D
 cond/GreaterEqual/ReadVariableOp cond/GreaterEqual/ReadVariableOp2>
cond/LessEqual/ReadVariableOpcond/LessEqual/ReadVariableOp22
cond/Sub/ReadVariableOpcond/Sub/ReadVariableOp2n
5cond/polynomial_decay_pruning_schedule/ReadVariableOp5cond/polynomial_decay_pruning_schedule/ReadVariableOp2J
#cond/pruning_ops/Abs/ReadVariableOp#cond/pruning_ops/Abs/ReadVariableOp:D@

_output_shapes
: 
&
_user_specified_nameLogicalAnd_1:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:( $
"
_user_specified_name
resource
�
K
#__inference__update_step_xla_566074
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
�G
�
T__inference_prune_low_magnitude_phi1_layer_call_and_return_conditional_losses_566482

inputs-
mul_readvariableop_resource: /
mul_readvariableop_1_resource: '
readvariableop_3_resource: 
identity��AssignVariableOp�Mul/ReadVariableOp�Mul/ReadVariableOp_1�ReadVariableOp�ReadVariableOp_1�ReadVariableOp_2�ReadVariableOp_3�ReadVariableOp_4�ReadVariableOp_5'
	no_updateNoOp*
_output_shapes
 )
no_update_1NoOp*
_output_shapes
 n
Mul/ReadVariableOpReadVariableOpmul_readvariableop_resource*
_output_shapes

: *
dtype0r
Mul/ReadVariableOp_1ReadVariableOpmul_readvariableop_1_resource*
_output_shapes

: *
dtype0m
MulMulMul/ReadVariableOp:value:0Mul/ReadVariableOp_1:value:0*
T0*
_output_shapes

: �
AssignVariableOpAssignVariableOpmul_readvariableop_resourceMul:z:0^Mul/ReadVariableOp*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�

group_depsNoOp^AssignVariableOp",/job:localhost/replica:0/task:0/device:GPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 e
group_deps_1NoOp^group_deps",/job:localhost/replica:0/task:0/device:GPU:0*
_output_shapes
 G
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
: }
ReadVariableOpReadVariableOpmul_readvariableop_resource^AssignVariableOp*
_output_shapes

: *
dtype0L
mul_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C_
mul_1MulReadVariableOp:value:0mul_1/y:output:0*
T0*
_output_shapes

: P
truedivRealDiv	mul_1:z:0Cast:y:0*
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
 *  �Bv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   �v
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*
_output_shapes

: R
mul_2MulCast:y:0clip_by_value:z:0*
T0*
_output_shapes

: P
truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C^
	truediv_1RealDiv	mul_2:z:0truediv_1/y:output:0*
T0*
_output_shapes

: L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?V
mul_3Mulmul_3/x:output:0truediv_1:z:0*
T0*
_output_shapes

: 
ReadVariableOp_1ReadVariableOpmul_readvariableop_resource^AssignVariableOp*
_output_shapes

: *
dtype0O
Neg_1NegReadVariableOp_1:value:0*
T0*
_output_shapes

: M
add_2AddV2	Neg_1:y:0	mul_3:z:0*
T0*
_output_shapes

: L
mul_4/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?R
mul_4Mulmul_4/x:output:0	add_2:z:0*
T0*
_output_shapes

: R
StopGradient_1StopGradient	mul_4:z:0*
T0*
_output_shapes

: 
ReadVariableOp_2ReadVariableOpmul_readvariableop_resource^AssignVariableOp*
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
::��Q
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
valueB"����   d
ReshapeReshapeinputsReshape/shape:output:0*
T0*'
_output_shapes
:���������_
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
valueB"   ����f
	Reshape_1Reshapetranspose:y:0Reshape_1/shape:output:0*
T0*
_output_shapes

: h
MatMulMatMulReshape:output:0Reshape_1:output:0*
T0*'
_output_shapes
:��������� S
Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B : S
Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : �
Reshape_2/shapePackunstack:output:0Reshape_2/shape/1:output:0Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:v
	Reshape_2ReshapeMatMul:product:0Reshape_2/shape:output:0*
T0*+
_output_shapes
:���������  I
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
mul_5/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C]
mul_5MulReadVariableOp_3:value:0mul_5/y:output:0*
T0*
_output_shapes
: P
	truediv_2RealDiv	mul_5:z:0
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
 *  �Bv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   �x
clip_by_value_1Maximumclip_by_value_1/Minimum:z:0clip_by_value_1/y:output:0*
T0*
_output_shapes
: R
mul_6Mul
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
	truediv_3RealDiv	mul_6:z:0truediv_3/y:output:0*
T0*
_output_shapes
: L
mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?R
mul_7Mulmul_7/x:output:0truediv_3:z:0*
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
add_6AddV2	Neg_3:y:0	mul_7:z:0*
T0*
_output_shapes
: L
mul_8/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?N
mul_8Mulmul_8/x:output:0	add_6:z:0*
T0*
_output_shapes
: N
StopGradient_3StopGradient	mul_8:z:0*
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
:���������  c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:���������  �
NoOpNoOp^AssignVariableOp^Mul/ReadVariableOp^Mul/ReadVariableOp_1^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*0
_input_shapes
:��������� : : : 2$
AssignVariableOpAssignVariableOp2,
Mul/ReadVariableOp_1Mul/ReadVariableOp_12(
Mul/ReadVariableOpMul/ReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_52 
ReadVariableOpReadVariableOp:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:S O
+
_output_shapes
:��������� 
 
_user_specified_nameinputs
�
�
4assert_greater_equal_Assert_AssertGuard_false_564560K
Gassert_greater_equal_assert_assertguard_assert_assert_greater_equal_all
V
Rassert_greater_equal_assert_assertguard_assert_assert_greater_equal_readvariableop	I
Eassert_greater_equal_assert_assertguard_assert_assert_greater_equal_y	6
2assert_greater_equal_assert_assertguard_identity_1
��.assert_greater_equal/Assert/AssertGuard/Assert�
5assert_greater_equal/Assert/AssertGuard/Assert/data_0Const*
_output_shapes
: *
dtype0*�
value�B� B�Prune() wrapper requires the UpdatePruningStep callback to be provided during training. Please add it as a callback to your model.fit call.�
5assert_greater_equal/Assert/AssertGuard/Assert/data_1Const*
_output_shapes
: *
dtype0*<
value3B1 B+Condition x >= y did not hold element-wise:�
5assert_greater_equal/Assert/AssertGuard/Assert/data_2Const*
_output_shapes
: *
dtype0*=
value4B2 B,x (assert_greater_equal/ReadVariableOp:0) = �
5assert_greater_equal/Assert/AssertGuard/Assert/data_4Const*
_output_shapes
: *
dtype0*0
value'B% By (assert_greater_equal/y:0) = �
.assert_greater_equal/Assert/AssertGuard/AssertAssertGassert_greater_equal_assert_assertguard_assert_assert_greater_equal_all>assert_greater_equal/Assert/AssertGuard/Assert/data_0:output:0>assert_greater_equal/Assert/AssertGuard/Assert/data_1:output:0>assert_greater_equal/Assert/AssertGuard/Assert/data_2:output:0Rassert_greater_equal_assert_assertguard_assert_assert_greater_equal_readvariableop>assert_greater_equal/Assert/AssertGuard/Assert/data_4:output:0Eassert_greater_equal_assert_assertguard_assert_assert_greater_equal_y*
T

2		*&
 _has_manual_control_dependencies(*
_output_shapes
 �
0assert_greater_equal/Assert/AssertGuard/IdentityIdentityGassert_greater_equal_assert_assertguard_assert_assert_greater_equal_all/^assert_greater_equal/Assert/AssertGuard/Assert*
T0
*
_output_shapes
: �
2assert_greater_equal/Assert/AssertGuard/Identity_1Identity9assert_greater_equal/Assert/AssertGuard/Identity:output:0-^assert_greater_equal/Assert/AssertGuard/NoOp*
T0
*
_output_shapes
: {
,assert_greater_equal/Assert/AssertGuard/NoOpNoOp/^assert_greater_equal/Assert/AssertGuard/Assert*
_output_shapes
 "q
2assert_greater_equal_assert_assertguard_identity_1;assert_greater_equal/Assert/AssertGuard/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes
: : : 2`
.assert_greater_equal/Assert/AssertGuard/Assert.assert_greater_equal/Assert/AssertGuard/Assert:NJ

_output_shapes
: 
0
_user_specified_nameassert_greater_equal/y:[W

_output_shapes
: 
=
_user_specified_name%#assert_greater_equal/ReadVariableOp:P L

_output_shapes
: 
2
_user_specified_nameassert_greater_equal/All
� 
f
J__inference_q_activation_2_layer_call_and_return_conditional_losses_564851

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
:���������  J
ReluReluinputs*
T0*+
_output_shapes
:���������  S
	ones_likeOnesLikeinputs*
T0*+
_output_shapes
:���������  D
sub_2Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: Z
mulMulones_like:y:0	sub_2:z:0*
T0*+
_output_shapes
:���������  v
SelectV2SelectV2LessEqual:z:0Relu:activations:0mul:z:0*
T0*+
_output_shapes
:���������  T
mul_1MulinputsCast:y:0*
T0*+
_output_shapes
:���������  _
truedivRealDiv	mul_1:z:0
Cast_1:y:0*
T0*+
_output_shapes
:���������  M
NegNegtruediv:z:0*
T0*+
_output_shapes
:���������  Q
RoundRoundtruediv:z:0*
T0*+
_output_shapes
:���������  V
addAddV2Neg:y:0	Round:y:0*
T0*+
_output_shapes
:���������  [
StopGradientStopGradientadd:z:0*
T0*+
_output_shapes
:���������  h
add_1AddV2truediv:z:0StopGradient:output:0*
T0*+
_output_shapes
:���������  _
	truediv_1RealDiv	add_1:z:0Cast:y:0*
T0*+
_output_shapes
:���������  P
truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?U
	truediv_2RealDivtruediv_2/x:output:0Cast:y:0*
T0*
_output_shapes
: L
sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?N
sub_3Subsub_3/x:output:0truediv_2:z:0*
T0*
_output_shapes
: p
clip_by_value/MinimumMinimumtruediv_1:z:0	sub_3:z:0*
T0*+
_output_shapes
:���������  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    �
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*+
_output_shapes
:���������  a
mul_2Mul
Cast_1:y:0clip_by_value:z:0*
T0*+
_output_shapes
:���������  U
Neg_1NegSelectV2:output:0*
T0*+
_output_shapes
:���������  Z
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*+
_output_shapes
:���������  L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?_
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*+
_output_shapes
:���������  _
StopGradient_1StopGradient	mul_3:z:0*
T0*+
_output_shapes
:���������  p
add_3AddV2SelectV2:output:0StopGradient_1:output:0*
T0*+
_output_shapes
:���������  U
IdentityIdentity	add_3:z:0*
T0*+
_output_shapes
:���������  "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:���������  :S O
+
_output_shapes
:���������  
 
_user_specified_nameinputs
�
�
cond_false_564617
cond_placeholder
cond_placeholder_1
cond_placeholder_2
cond_placeholder_3
cond_identity_logicaland_1

cond_identity_1
O
	cond/NoOpNoOp*&
 _has_manual_control_dependencies(*
_output_shapes
 b
cond/IdentityIdentitycond_identity_logicaland_1
^cond/NoOp*
T0
*
_output_shapes
: T
cond/Identity_1Identitycond/Identity:output:0*
T0
*
_output_shapes
: "+
cond_identity_1cond/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes

: : : : : :D@

_output_shapes
: 
&
_user_specified_nameLogicalAnd_1
�

�
9__inference_prune_low_magnitude_phi2_layer_call_fn_566549

inputs
unknown:	 
	unknown_0:  
	unknown_1:  
	unknown_2: 
	unknown_3: 
identity��StatefulPartitionedCall�
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0	unknown_1	unknown_2	unknown_3*
Tin

2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:���������  *#
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8� *]
fXRV
T__inference_prune_low_magnitude_phi2_layer_call_and_return_conditional_losses_564481s
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:���������  <
NoOpNoOp^StatefulPartitionedCall*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*4
_input_shapes#
!:���������  : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:&"
 
_user_specified_name566545:&"
 
_user_specified_name566543:&"
 
_user_specified_name566541:&"
 
_user_specified_name566539:&"
 
_user_specified_name566537:S O
+
_output_shapes
:���������  
 
_user_specified_nameinputs
�X
�
cond_true_565256H
>cond_polynomial_decay_pruning_schedule_readvariableop_resource:	 >
,cond_pruning_ops_abs_readvariableop_resource: 0
cond_assignvariableop_resource: *
 cond_assignvariableop_1_resource: 
cond_identity_logicaland_1

cond_identity_1
��cond/AssignVariableOp�cond/AssignVariableOp_1� cond/GreaterEqual/ReadVariableOp�cond/LessEqual/ReadVariableOp�cond/Sub/ReadVariableOp�5cond/polynomial_decay_pruning_schedule/ReadVariableOp�#cond/pruning_ops/Abs/ReadVariableOp�
5cond/polynomial_decay_pruning_schedule/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	o
,cond/polynomial_decay_pruning_schedule/sub/yConst*
_output_shapes
: *
dtype0	*
value
B	 R��
*cond/polynomial_decay_pruning_schedule/subSub=cond/polynomial_decay_pruning_schedule/ReadVariableOp:value:05cond/polynomial_decay_pruning_schedule/sub/y:output:0*
T0	*
_output_shapes
: �
+cond/polynomial_decay_pruning_schedule/CastCast.cond/polynomial_decay_pruning_schedule/sub:z:0*

DstT0*

SrcT0	*
_output_shapes
: u
0cond/polynomial_decay_pruning_schedule/truediv/yConst*
_output_shapes
: *
dtype0*
valueB
 * �jF�
.cond/polynomial_decay_pruning_schedule/truedivRealDiv/cond/polynomial_decay_pruning_schedule/Cast:y:09cond/polynomial_decay_pruning_schedule/truediv/y:output:0*
T0*
_output_shapes
: u
0cond/polynomial_decay_pruning_schedule/Maximum/xConst*
_output_shapes
: *
dtype0*
valueB
 *    �
.cond/polynomial_decay_pruning_schedule/MaximumMaximum9cond/polynomial_decay_pruning_schedule/Maximum/x:output:02cond/polynomial_decay_pruning_schedule/truediv:z:0*
T0*
_output_shapes
: u
0cond/polynomial_decay_pruning_schedule/Minimum/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
.cond/polynomial_decay_pruning_schedule/MinimumMinimum9cond/polynomial_decay_pruning_schedule/Minimum/x:output:02cond/polynomial_decay_pruning_schedule/Maximum:z:0*
T0*
_output_shapes
: s
.cond/polynomial_decay_pruning_schedule/sub_1/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
,cond/polynomial_decay_pruning_schedule/sub_1Sub7cond/polynomial_decay_pruning_schedule/sub_1/x:output:02cond/polynomial_decay_pruning_schedule/Minimum:z:0*
T0*
_output_shapes
: q
,cond/polynomial_decay_pruning_schedule/Pow/yConst*
_output_shapes
: *
dtype0*
valueB
 *  @@�
*cond/polynomial_decay_pruning_schedule/PowPow0cond/polynomial_decay_pruning_schedule/sub_1:z:05cond/polynomial_decay_pruning_schedule/Pow/y:output:0*
T0*
_output_shapes
: q
,cond/polynomial_decay_pruning_schedule/Mul/xConst*
_output_shapes
: *
dtype0*
valueB
 *   ��
*cond/polynomial_decay_pruning_schedule/MulMul5cond/polynomial_decay_pruning_schedule/Mul/x:output:0.cond/polynomial_decay_pruning_schedule/Pow:z:0*
T0*
_output_shapes
: v
1cond/polynomial_decay_pruning_schedule/sparsity/yConst*
_output_shapes
: *
dtype0*
valueB
 *   ?�
/cond/polynomial_decay_pruning_schedule/sparsityAddV2.cond/polynomial_decay_pruning_schedule/Mul:z:0:cond/polynomial_decay_pruning_schedule/sparsity/y:output:0*
T0*
_output_shapes
: �
 cond/GreaterEqual/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	V
cond/GreaterEqual/yConst*
_output_shapes
: *
dtype0	*
value
B	 R��
cond/GreaterEqualGreaterEqual(cond/GreaterEqual/ReadVariableOp:value:0cond/GreaterEqual/y:output:0*
T0	*
_output_shapes
: �
cond/LessEqual/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	T
cond/LessEqual/yConst*
_output_shapes
: *
dtype0	*
valueB		 Rܒ~
cond/LessEqual	LessEqual%cond/LessEqual/ReadVariableOp:value:0cond/LessEqual/y:output:0*
T0	*
_output_shapes
: O
cond/Less/xConst*
_output_shapes
: *
dtype0*
valueB	 :ܒM
cond/Less/yConst*
_output_shapes
: *
dtype0*
value	B : ^
	cond/LessLesscond/Less/x:output:0cond/Less/y:output:0*
T0*
_output_shapes
: V
cond/LogicalOr	LogicalOrcond/LessEqual:z:0cond/Less:z:0*
_output_shapes
: `
cond/LogicalAnd
LogicalAndcond/GreaterEqual:z:0cond/LogicalOr:z:0*
_output_shapes
: �
cond/Sub/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	M

cond/Sub/yConst*
_output_shapes
: *
dtype0	*
value
B	 R�f
cond/SubSubcond/Sub/ReadVariableOp:value:0cond/Sub/y:output:0*
T0	*
_output_shapes
: R
cond/FloorMod/yConst*
_output_shapes
: *
dtype0	*
value
B	 R�b
cond/FloorModFloorModcond/Sub:z:0cond/FloorMod/y:output:0*
T0	*
_output_shapes
: N
cond/Equal/yConst*
_output_shapes
: *
dtype0	*
value	B	 R ^

cond/EqualEqualcond/FloorMod:z:0cond/Equal/y:output:0*
T0	*
_output_shapes
: \
cond/LogicalAnd_1
LogicalAndcond/LogicalAnd:z:0cond/Equal:z:0*
_output_shapes
: �
#cond/pruning_ops/Abs/ReadVariableOpReadVariableOp,cond_pruning_ops_abs_readvariableop_resource*
_output_shapes

: *
dtype0q
cond/pruning_ops/AbsAbs+cond/pruning_ops/Abs/ReadVariableOp:value:0*
T0*
_output_shapes

: X
cond/pruning_ops/SizeConst*
_output_shapes
: *
dtype0*
value
B :�m
cond/pruning_ops/CastCastcond/pruning_ops/Size:output:0*

DstT0*

SrcT0*
_output_shapes
: [
cond/pruning_ops/sub/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
cond/pruning_ops/subSubcond/pruning_ops/sub/x:output:03cond/polynomial_decay_pruning_schedule/sparsity:z:0*
T0*
_output_shapes
: q
cond/pruning_ops/mulMulcond/pruning_ops/Cast:y:0cond/pruning_ops/sub:z:0*
T0*
_output_shapes
: Z
cond/pruning_ops/RoundRoundcond/pruning_ops/mul:z:0*
T0*
_output_shapes
: _
cond/pruning_ops/Maximum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
cond/pruning_ops/MaximumMaximumcond/pruning_ops/Round:y:0#cond/pruning_ops/Maximum/y:output:0*
T0*
_output_shapes
: m
cond/pruning_ops/Cast_1Castcond/pruning_ops/Maximum:z:0*

DstT0*

SrcT0*
_output_shapes
: q
cond/pruning_ops/Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB:
����������
cond/pruning_ops/ReshapeReshapecond/pruning_ops/Abs:y:0'cond/pruning_ops/Reshape/shape:output:0*
T0*
_output_shapes	
:�Z
cond/pruning_ops/Size_1Const*
_output_shapes
: *
dtype0*
value
B :��
cond/pruning_ops/TopKV2TopKV2!cond/pruning_ops/Reshape:output:0 cond/pruning_ops/Size_1:output:0*
T0*"
_output_shapes
:�:�Z
cond/pruning_ops/sub_1/yConst*
_output_shapes
: *
dtype0*
value	B :~
cond/pruning_ops/sub_1Subcond/pruning_ops/Cast_1:y:0!cond/pruning_ops/sub_1/y:output:0*
T0*
_output_shapes
: `
cond/pruning_ops/GatherV2/axisConst*
_output_shapes
: *
dtype0*
value	B : �
cond/pruning_ops/GatherV2GatherV2 cond/pruning_ops/TopKV2:values:0cond/pruning_ops/sub_1:z:0'cond/pruning_ops/GatherV2/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
: Z
cond/pruning_ops/sub_2/yConst*
_output_shapes
: *
dtype0*
value	B :~
cond/pruning_ops/sub_2Subcond/pruning_ops/Cast_1:y:0!cond/pruning_ops/sub_2/y:output:0*
T0*
_output_shapes
: b
 cond/pruning_ops/GatherV2_1/axisConst*
_output_shapes
: *
dtype0*
value	B : �
cond/pruning_ops/GatherV2_1GatherV2!cond/pruning_ops/TopKV2:indices:0cond/pruning_ops/sub_2:z:0)cond/pruning_ops/GatherV2_1/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
: �
cond/pruning_ops/GreaterEqualGreaterEqualcond/pruning_ops/Abs:y:0"cond/pruning_ops/GatherV2:output:0*
T0*
_output_shapes

: Z
cond/pruning_ops/Size_2Const*
_output_shapes
: *
dtype0*
value
B :�`
cond/pruning_ops/one_hot/ConstConst*
_output_shapes
: *
dtype0
*
value	B
 Zb
 cond/pruning_ops/one_hot/Const_1Const*
_output_shapes
: *
dtype0
*
value	B
 Z �
cond/pruning_ops/one_hotOneHot$cond/pruning_ops/GatherV2_1:output:0 cond/pruning_ops/Size_2:output:0'cond/pruning_ops/one_hot/Const:output:0)cond/pruning_ops/one_hot/Const_1:output:0*
TI0*
T0
*
_output_shapes	
:�q
 cond/pruning_ops/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"       �
cond/pruning_ops/Reshape_1Reshape!cond/pruning_ops/one_hot:output:0)cond/pruning_ops/Reshape_1/shape:output:0*
T0
*
_output_shapes

: �
cond/pruning_ops/LogicalOr	LogicalOr!cond/pruning_ops/GreaterEqual:z:0#cond/pruning_ops/Reshape_1:output:0*
_output_shapes

: i
	cond/CastCastcond/pruning_ops/LogicalOr:z:0*

DstT0*

SrcT0
*
_output_shapes

: �
cond/AssignVariableOpAssignVariableOpcond_assignvariableop_resourcecond/Cast:y:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�
cond/AssignVariableOp_1AssignVariableOp cond_assignvariableop_1_resource"cond/pruning_ops/GatherV2:output:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�
cond/group_depsNoOp^cond/AssignVariableOp^cond/AssignVariableOp_1",/job:localhost/replica:0/task:0/device:GPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 h
cond/IdentityIdentitycond_identity_logicaland_1^cond/group_deps*
T0
*
_output_shapes
: `
cond/Identity_1Identitycond/Identity:output:0
^cond/NoOp*
T0
*
_output_shapes
: �
	cond/NoOpNoOp^cond/AssignVariableOp^cond/AssignVariableOp_1!^cond/GreaterEqual/ReadVariableOp^cond/LessEqual/ReadVariableOp^cond/Sub/ReadVariableOp6^cond/polynomial_decay_pruning_schedule/ReadVariableOp$^cond/pruning_ops/Abs/ReadVariableOp*
_output_shapes
 "+
cond_identity_1cond/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes

: : : : : 22
cond/AssignVariableOp_1cond/AssignVariableOp_12.
cond/AssignVariableOpcond/AssignVariableOp2D
 cond/GreaterEqual/ReadVariableOp cond/GreaterEqual/ReadVariableOp2>
cond/LessEqual/ReadVariableOpcond/LessEqual/ReadVariableOp22
cond/Sub/ReadVariableOpcond/Sub/ReadVariableOp2n
5cond/polynomial_decay_pruning_schedule/ReadVariableOp5cond/polynomial_decay_pruning_schedule/ReadVariableOp2J
#cond/pruning_ops/Abs/ReadVariableOp#cond/pruning_ops/Abs/ReadVariableOp:D@

_output_shapes
: 
&
_user_specified_nameLogicalAnd_1:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:( $
"
_user_specified_name
resource
�
�
3assert_greater_equal_Assert_AssertGuard_true_564559M
Iassert_greater_equal_assert_assertguard_identity_assert_greater_equal_all
7
3assert_greater_equal_assert_assertguard_placeholder	9
5assert_greater_equal_assert_assertguard_placeholder_1	6
2assert_greater_equal_assert_assertguard_identity_1
r
,assert_greater_equal/Assert/AssertGuard/NoOpNoOp*&
 _has_manual_control_dependencies(*
_output_shapes
 �
0assert_greater_equal/Assert/AssertGuard/IdentityIdentityIassert_greater_equal_assert_assertguard_identity_assert_greater_equal_all-^assert_greater_equal/Assert/AssertGuard/NoOp*
T0
*
_output_shapes
: �
2assert_greater_equal/Assert/AssertGuard/Identity_1Identity9assert_greater_equal/Assert/AssertGuard/Identity:output:0*
T0
*
_output_shapes
: "q
2assert_greater_equal_assert_assertguard_identity_1;assert_greater_equal/Assert/AssertGuard/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes
: : : :

_output_shapes
: :

_output_shapes
: :P L

_output_shapes
: 
2
_user_specified_nameassert_greater_equal/All
�
�
9__inference_prune_low_magnitude_phi1_layer_call_fn_566140

inputs
unknown: 
	unknown_0: 
	unknown_1: 
identity��StatefulPartitionedCall�
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0	unknown_1*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:���������  *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8� *]
fXRV
T__inference_prune_low_magnitude_phi1_layer_call_and_return_conditional_losses_565468s
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:���������  <
NoOpNoOp^StatefulPartitionedCall*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*0
_input_shapes
:��������� : : : 22
StatefulPartitionedCallStatefulPartitionedCall:&"
 
_user_specified_name566136:&"
 
_user_specified_name566134:&"
 
_user_specified_name566132:S O
+
_output_shapes
:��������� 
 
_user_specified_nameinputs
� 
f
J__inference_q_activation_1_layer_call_and_return_conditional_losses_566954

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
:���������  J
ReluReluinputs*
T0*+
_output_shapes
:���������  S
	ones_likeOnesLikeinputs*
T0*+
_output_shapes
:���������  D
sub_2Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: Z
mulMulones_like:y:0	sub_2:z:0*
T0*+
_output_shapes
:���������  v
SelectV2SelectV2LessEqual:z:0Relu:activations:0mul:z:0*
T0*+
_output_shapes
:���������  T
mul_1MulinputsCast:y:0*
T0*+
_output_shapes
:���������  _
truedivRealDiv	mul_1:z:0
Cast_1:y:0*
T0*+
_output_shapes
:���������  M
NegNegtruediv:z:0*
T0*+
_output_shapes
:���������  Q
RoundRoundtruediv:z:0*
T0*+
_output_shapes
:���������  V
addAddV2Neg:y:0	Round:y:0*
T0*+
_output_shapes
:���������  [
StopGradientStopGradientadd:z:0*
T0*+
_output_shapes
:���������  h
add_1AddV2truediv:z:0StopGradient:output:0*
T0*+
_output_shapes
:���������  _
	truediv_1RealDiv	add_1:z:0Cast:y:0*
T0*+
_output_shapes
:���������  P
truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?U
	truediv_2RealDivtruediv_2/x:output:0Cast:y:0*
T0*
_output_shapes
: L
sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?N
sub_3Subsub_3/x:output:0truediv_2:z:0*
T0*
_output_shapes
: p
clip_by_value/MinimumMinimumtruediv_1:z:0	sub_3:z:0*
T0*+
_output_shapes
:���������  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    �
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*+
_output_shapes
:���������  a
mul_2Mul
Cast_1:y:0clip_by_value:z:0*
T0*+
_output_shapes
:���������  U
Neg_1NegSelectV2:output:0*
T0*+
_output_shapes
:���������  Z
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*+
_output_shapes
:���������  L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?_
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*+
_output_shapes
:���������  _
StopGradient_1StopGradient	mul_3:z:0*
T0*+
_output_shapes
:���������  p
add_3AddV2SelectV2:output:0StopGradient_1:output:0*
T0*+
_output_shapes
:���������  U
IdentityIdentity	add_3:z:0*
T0*+
_output_shapes
:���������  "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:���������  :S O
+
_output_shapes
:���������  
 
_user_specified_nameinputs
�
�
3assert_greater_equal_Assert_AssertGuard_true_567852M
Iassert_greater_equal_assert_assertguard_identity_assert_greater_equal_all
7
3assert_greater_equal_assert_assertguard_placeholder	9
5assert_greater_equal_assert_assertguard_placeholder_1	6
2assert_greater_equal_assert_assertguard_identity_1
r
,assert_greater_equal/Assert/AssertGuard/NoOpNoOp*&
 _has_manual_control_dependencies(*
_output_shapes
 �
0assert_greater_equal/Assert/AssertGuard/IdentityIdentityIassert_greater_equal_assert_assertguard_identity_assert_greater_equal_all-^assert_greater_equal/Assert/AssertGuard/NoOp*
T0
*
_output_shapes
: �
2assert_greater_equal/Assert/AssertGuard/Identity_1Identity9assert_greater_equal/Assert/AssertGuard/Identity:output:0*
T0
*
_output_shapes
: "q
2assert_greater_equal_assert_assertguard_identity_1;assert_greater_equal/Assert/AssertGuard/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes
: : : :

_output_shapes
: :

_output_shapes
: :P L

_output_shapes
: 
2
_user_specified_nameassert_greater_equal/All
�
K
#__inference__update_step_xla_566104
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
�
�
4assert_greater_equal_Assert_AssertGuard_false_565200K
Gassert_greater_equal_assert_assertguard_assert_assert_greater_equal_all
V
Rassert_greater_equal_assert_assertguard_assert_assert_greater_equal_readvariableop	I
Eassert_greater_equal_assert_assertguard_assert_assert_greater_equal_y	6
2assert_greater_equal_assert_assertguard_identity_1
��.assert_greater_equal/Assert/AssertGuard/Assert�
5assert_greater_equal/Assert/AssertGuard/Assert/data_0Const*
_output_shapes
: *
dtype0*�
value�B� B�Prune() wrapper requires the UpdatePruningStep callback to be provided during training. Please add it as a callback to your model.fit call.�
5assert_greater_equal/Assert/AssertGuard/Assert/data_1Const*
_output_shapes
: *
dtype0*<
value3B1 B+Condition x >= y did not hold element-wise:�
5assert_greater_equal/Assert/AssertGuard/Assert/data_2Const*
_output_shapes
: *
dtype0*=
value4B2 B,x (assert_greater_equal/ReadVariableOp:0) = �
5assert_greater_equal/Assert/AssertGuard/Assert/data_4Const*
_output_shapes
: *
dtype0*0
value'B% By (assert_greater_equal/y:0) = �
.assert_greater_equal/Assert/AssertGuard/AssertAssertGassert_greater_equal_assert_assertguard_assert_assert_greater_equal_all>assert_greater_equal/Assert/AssertGuard/Assert/data_0:output:0>assert_greater_equal/Assert/AssertGuard/Assert/data_1:output:0>assert_greater_equal/Assert/AssertGuard/Assert/data_2:output:0Rassert_greater_equal_assert_assertguard_assert_assert_greater_equal_readvariableop>assert_greater_equal/Assert/AssertGuard/Assert/data_4:output:0Eassert_greater_equal_assert_assertguard_assert_assert_greater_equal_y*
T

2		*&
 _has_manual_control_dependencies(*
_output_shapes
 �
0assert_greater_equal/Assert/AssertGuard/IdentityIdentityGassert_greater_equal_assert_assertguard_assert_assert_greater_equal_all/^assert_greater_equal/Assert/AssertGuard/Assert*
T0
*
_output_shapes
: �
2assert_greater_equal/Assert/AssertGuard/Identity_1Identity9assert_greater_equal/Assert/AssertGuard/Identity:output:0-^assert_greater_equal/Assert/AssertGuard/NoOp*
T0
*
_output_shapes
: {
,assert_greater_equal/Assert/AssertGuard/NoOpNoOp/^assert_greater_equal/Assert/AssertGuard/Assert*
_output_shapes
 "q
2assert_greater_equal_assert_assertguard_identity_1;assert_greater_equal/Assert/AssertGuard/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes
: : : 2`
.assert_greater_equal/Assert/AssertGuard/Assert.assert_greater_equal/Assert/AssertGuard/Assert:NJ

_output_shapes
: 
0
_user_specified_nameassert_greater_equal/y:[W

_output_shapes
: 
=
_user_specified_name%#assert_greater_equal/ReadVariableOp:P L

_output_shapes
: 
2
_user_specified_nameassert_greater_equal/All
�
�
4assert_greater_equal_Assert_AssertGuard_false_564905K
Gassert_greater_equal_assert_assertguard_assert_assert_greater_equal_all
V
Rassert_greater_equal_assert_assertguard_assert_assert_greater_equal_readvariableop	I
Eassert_greater_equal_assert_assertguard_assert_assert_greater_equal_y	6
2assert_greater_equal_assert_assertguard_identity_1
��.assert_greater_equal/Assert/AssertGuard/Assert�
5assert_greater_equal/Assert/AssertGuard/Assert/data_0Const*
_output_shapes
: *
dtype0*�
value�B� B�Prune() wrapper requires the UpdatePruningStep callback to be provided during training. Please add it as a callback to your model.fit call.�
5assert_greater_equal/Assert/AssertGuard/Assert/data_1Const*
_output_shapes
: *
dtype0*<
value3B1 B+Condition x >= y did not hold element-wise:�
5assert_greater_equal/Assert/AssertGuard/Assert/data_2Const*
_output_shapes
: *
dtype0*=
value4B2 B,x (assert_greater_equal/ReadVariableOp:0) = �
5assert_greater_equal/Assert/AssertGuard/Assert/data_4Const*
_output_shapes
: *
dtype0*0
value'B% By (assert_greater_equal/y:0) = �
.assert_greater_equal/Assert/AssertGuard/AssertAssertGassert_greater_equal_assert_assertguard_assert_assert_greater_equal_all>assert_greater_equal/Assert/AssertGuard/Assert/data_0:output:0>assert_greater_equal/Assert/AssertGuard/Assert/data_1:output:0>assert_greater_equal/Assert/AssertGuard/Assert/data_2:output:0Rassert_greater_equal_assert_assertguard_assert_assert_greater_equal_readvariableop>assert_greater_equal/Assert/AssertGuard/Assert/data_4:output:0Eassert_greater_equal_assert_assertguard_assert_assert_greater_equal_y*
T

2		*&
 _has_manual_control_dependencies(*
_output_shapes
 �
0assert_greater_equal/Assert/AssertGuard/IdentityIdentityGassert_greater_equal_assert_assertguard_assert_assert_greater_equal_all/^assert_greater_equal/Assert/AssertGuard/Assert*
T0
*
_output_shapes
: �
2assert_greater_equal/Assert/AssertGuard/Identity_1Identity9assert_greater_equal/Assert/AssertGuard/Identity:output:0-^assert_greater_equal/Assert/AssertGuard/NoOp*
T0
*
_output_shapes
: {
,assert_greater_equal/Assert/AssertGuard/NoOpNoOp/^assert_greater_equal/Assert/AssertGuard/Assert*
_output_shapes
 "q
2assert_greater_equal_assert_assertguard_identity_1;assert_greater_equal/Assert/AssertGuard/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes
: : : 2`
.assert_greater_equal/Assert/AssertGuard/Assert.assert_greater_equal/Assert/AssertGuard/Assert:NJ

_output_shapes
: 
0
_user_specified_nameassert_greater_equal/y:[W

_output_shapes
: 
=
_user_specified_name%#assert_greater_equal/ReadVariableOp:P L

_output_shapes
: 
2
_user_specified_nameassert_greater_equal/All
�
O
#__inference__update_step_xla_566089
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
�	
�
:__inference_prune_low_magnitude_dense_layer_call_fn_567822

inputs
unknown:	 
	unknown_0: 
	unknown_1: 
	unknown_2: 
	unknown_3:
identity��StatefulPartitionedCall�
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0	unknown_1	unknown_2	unknown_3*
Tin

2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:���������*#
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8� *^
fYRW
U__inference_prune_low_magnitude_dense_layer_call_and_return_conditional_losses_565358o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:���������<
NoOpNoOp^StatefulPartitionedCall*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*0
_input_shapes
:��������� : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:&"
 
_user_specified_name567818:&"
 
_user_specified_name567816:&"
 
_user_specified_name567814:&"
 
_user_specified_name567812:&"
 
_user_specified_name567810:O K
'
_output_shapes
:��������� 
 
_user_specified_nameinputs
�
�
4assert_greater_equal_Assert_AssertGuard_false_566580K
Gassert_greater_equal_assert_assertguard_assert_assert_greater_equal_all
V
Rassert_greater_equal_assert_assertguard_assert_assert_greater_equal_readvariableop	I
Eassert_greater_equal_assert_assertguard_assert_assert_greater_equal_y	6
2assert_greater_equal_assert_assertguard_identity_1
��.assert_greater_equal/Assert/AssertGuard/Assert�
5assert_greater_equal/Assert/AssertGuard/Assert/data_0Const*
_output_shapes
: *
dtype0*�
value�B� B�Prune() wrapper requires the UpdatePruningStep callback to be provided during training. Please add it as a callback to your model.fit call.�
5assert_greater_equal/Assert/AssertGuard/Assert/data_1Const*
_output_shapes
: *
dtype0*<
value3B1 B+Condition x >= y did not hold element-wise:�
5assert_greater_equal/Assert/AssertGuard/Assert/data_2Const*
_output_shapes
: *
dtype0*=
value4B2 B,x (assert_greater_equal/ReadVariableOp:0) = �
5assert_greater_equal/Assert/AssertGuard/Assert/data_4Const*
_output_shapes
: *
dtype0*0
value'B% By (assert_greater_equal/y:0) = �
.assert_greater_equal/Assert/AssertGuard/AssertAssertGassert_greater_equal_assert_assertguard_assert_assert_greater_equal_all>assert_greater_equal/Assert/AssertGuard/Assert/data_0:output:0>assert_greater_equal/Assert/AssertGuard/Assert/data_1:output:0>assert_greater_equal/Assert/AssertGuard/Assert/data_2:output:0Rassert_greater_equal_assert_assertguard_assert_assert_greater_equal_readvariableop>assert_greater_equal/Assert/AssertGuard/Assert/data_4:output:0Eassert_greater_equal_assert_assertguard_assert_assert_greater_equal_y*
T

2		*&
 _has_manual_control_dependencies(*
_output_shapes
 �
0assert_greater_equal/Assert/AssertGuard/IdentityIdentityGassert_greater_equal_assert_assertguard_assert_assert_greater_equal_all/^assert_greater_equal/Assert/AssertGuard/Assert*
T0
*
_output_shapes
: �
2assert_greater_equal/Assert/AssertGuard/Identity_1Identity9assert_greater_equal/Assert/AssertGuard/Identity:output:0-^assert_greater_equal/Assert/AssertGuard/NoOp*
T0
*
_output_shapes
: {
,assert_greater_equal/Assert/AssertGuard/NoOpNoOp/^assert_greater_equal/Assert/AssertGuard/Assert*
_output_shapes
 "q
2assert_greater_equal_assert_assertguard_identity_1;assert_greater_equal/Assert/AssertGuard/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes
: : : 2`
.assert_greater_equal/Assert/AssertGuard/Assert.assert_greater_equal/Assert/AssertGuard/Assert:NJ

_output_shapes
: 
0
_user_specified_nameassert_greater_equal/y:[W

_output_shapes
: 
=
_user_specified_name%#assert_greater_equal/ReadVariableOp:P L

_output_shapes
: 
2
_user_specified_nameassert_greater_equal/All
�
K
/__inference_q_activation_2_layer_call_fn_567327

inputs
identity�
PartitionedCallPartitionedCallinputs*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:���������  * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8� *S
fNRL
J__inference_q_activation_2_layer_call_and_return_conditional_losses_564851d
IdentityIdentityPartitionedCall:output:0*
T0*+
_output_shapes
:���������  "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:���������  :S O
+
_output_shapes
:���������  
 
_user_specified_nameinputs
�X
�
cond_true_564961H
>cond_polynomial_decay_pruning_schedule_readvariableop_resource:	 >
,cond_pruning_ops_abs_readvariableop_resource:  0
cond_assignvariableop_resource:  *
 cond_assignvariableop_1_resource: 
cond_identity_logicaland_1

cond_identity_1
��cond/AssignVariableOp�cond/AssignVariableOp_1� cond/GreaterEqual/ReadVariableOp�cond/LessEqual/ReadVariableOp�cond/Sub/ReadVariableOp�5cond/polynomial_decay_pruning_schedule/ReadVariableOp�#cond/pruning_ops/Abs/ReadVariableOp�
5cond/polynomial_decay_pruning_schedule/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	o
,cond/polynomial_decay_pruning_schedule/sub/yConst*
_output_shapes
: *
dtype0	*
value
B	 R��
*cond/polynomial_decay_pruning_schedule/subSub=cond/polynomial_decay_pruning_schedule/ReadVariableOp:value:05cond/polynomial_decay_pruning_schedule/sub/y:output:0*
T0	*
_output_shapes
: �
+cond/polynomial_decay_pruning_schedule/CastCast.cond/polynomial_decay_pruning_schedule/sub:z:0*

DstT0*

SrcT0	*
_output_shapes
: u
0cond/polynomial_decay_pruning_schedule/truediv/yConst*
_output_shapes
: *
dtype0*
valueB
 * �jF�
.cond/polynomial_decay_pruning_schedule/truedivRealDiv/cond/polynomial_decay_pruning_schedule/Cast:y:09cond/polynomial_decay_pruning_schedule/truediv/y:output:0*
T0*
_output_shapes
: u
0cond/polynomial_decay_pruning_schedule/Maximum/xConst*
_output_shapes
: *
dtype0*
valueB
 *    �
.cond/polynomial_decay_pruning_schedule/MaximumMaximum9cond/polynomial_decay_pruning_schedule/Maximum/x:output:02cond/polynomial_decay_pruning_schedule/truediv:z:0*
T0*
_output_shapes
: u
0cond/polynomial_decay_pruning_schedule/Minimum/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
.cond/polynomial_decay_pruning_schedule/MinimumMinimum9cond/polynomial_decay_pruning_schedule/Minimum/x:output:02cond/polynomial_decay_pruning_schedule/Maximum:z:0*
T0*
_output_shapes
: s
.cond/polynomial_decay_pruning_schedule/sub_1/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
,cond/polynomial_decay_pruning_schedule/sub_1Sub7cond/polynomial_decay_pruning_schedule/sub_1/x:output:02cond/polynomial_decay_pruning_schedule/Minimum:z:0*
T0*
_output_shapes
: q
,cond/polynomial_decay_pruning_schedule/Pow/yConst*
_output_shapes
: *
dtype0*
valueB
 *  @@�
*cond/polynomial_decay_pruning_schedule/PowPow0cond/polynomial_decay_pruning_schedule/sub_1:z:05cond/polynomial_decay_pruning_schedule/Pow/y:output:0*
T0*
_output_shapes
: q
,cond/polynomial_decay_pruning_schedule/Mul/xConst*
_output_shapes
: *
dtype0*
valueB
 *   ��
*cond/polynomial_decay_pruning_schedule/MulMul5cond/polynomial_decay_pruning_schedule/Mul/x:output:0.cond/polynomial_decay_pruning_schedule/Pow:z:0*
T0*
_output_shapes
: v
1cond/polynomial_decay_pruning_schedule/sparsity/yConst*
_output_shapes
: *
dtype0*
valueB
 *   ?�
/cond/polynomial_decay_pruning_schedule/sparsityAddV2.cond/polynomial_decay_pruning_schedule/Mul:z:0:cond/polynomial_decay_pruning_schedule/sparsity/y:output:0*
T0*
_output_shapes
: �
 cond/GreaterEqual/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	V
cond/GreaterEqual/yConst*
_output_shapes
: *
dtype0	*
value
B	 R��
cond/GreaterEqualGreaterEqual(cond/GreaterEqual/ReadVariableOp:value:0cond/GreaterEqual/y:output:0*
T0	*
_output_shapes
: �
cond/LessEqual/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	T
cond/LessEqual/yConst*
_output_shapes
: *
dtype0	*
valueB		 Rܒ~
cond/LessEqual	LessEqual%cond/LessEqual/ReadVariableOp:value:0cond/LessEqual/y:output:0*
T0	*
_output_shapes
: O
cond/Less/xConst*
_output_shapes
: *
dtype0*
valueB	 :ܒM
cond/Less/yConst*
_output_shapes
: *
dtype0*
value	B : ^
	cond/LessLesscond/Less/x:output:0cond/Less/y:output:0*
T0*
_output_shapes
: V
cond/LogicalOr	LogicalOrcond/LessEqual:z:0cond/Less:z:0*
_output_shapes
: `
cond/LogicalAnd
LogicalAndcond/GreaterEqual:z:0cond/LogicalOr:z:0*
_output_shapes
: �
cond/Sub/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	M

cond/Sub/yConst*
_output_shapes
: *
dtype0	*
value
B	 R�f
cond/SubSubcond/Sub/ReadVariableOp:value:0cond/Sub/y:output:0*
T0	*
_output_shapes
: R
cond/FloorMod/yConst*
_output_shapes
: *
dtype0	*
value
B	 R�b
cond/FloorModFloorModcond/Sub:z:0cond/FloorMod/y:output:0*
T0	*
_output_shapes
: N
cond/Equal/yConst*
_output_shapes
: *
dtype0	*
value	B	 R ^

cond/EqualEqualcond/FloorMod:z:0cond/Equal/y:output:0*
T0	*
_output_shapes
: \
cond/LogicalAnd_1
LogicalAndcond/LogicalAnd:z:0cond/Equal:z:0*
_output_shapes
: �
#cond/pruning_ops/Abs/ReadVariableOpReadVariableOp,cond_pruning_ops_abs_readvariableop_resource*
_output_shapes

:  *
dtype0q
cond/pruning_ops/AbsAbs+cond/pruning_ops/Abs/ReadVariableOp:value:0*
T0*
_output_shapes

:  X
cond/pruning_ops/SizeConst*
_output_shapes
: *
dtype0*
value
B :�m
cond/pruning_ops/CastCastcond/pruning_ops/Size:output:0*

DstT0*

SrcT0*
_output_shapes
: [
cond/pruning_ops/sub/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
cond/pruning_ops/subSubcond/pruning_ops/sub/x:output:03cond/polynomial_decay_pruning_schedule/sparsity:z:0*
T0*
_output_shapes
: q
cond/pruning_ops/mulMulcond/pruning_ops/Cast:y:0cond/pruning_ops/sub:z:0*
T0*
_output_shapes
: Z
cond/pruning_ops/RoundRoundcond/pruning_ops/mul:z:0*
T0*
_output_shapes
: _
cond/pruning_ops/Maximum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
cond/pruning_ops/MaximumMaximumcond/pruning_ops/Round:y:0#cond/pruning_ops/Maximum/y:output:0*
T0*
_output_shapes
: m
cond/pruning_ops/Cast_1Castcond/pruning_ops/Maximum:z:0*

DstT0*

SrcT0*
_output_shapes
: q
cond/pruning_ops/Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB:
����������
cond/pruning_ops/ReshapeReshapecond/pruning_ops/Abs:y:0'cond/pruning_ops/Reshape/shape:output:0*
T0*
_output_shapes	
:�Z
cond/pruning_ops/Size_1Const*
_output_shapes
: *
dtype0*
value
B :��
cond/pruning_ops/TopKV2TopKV2!cond/pruning_ops/Reshape:output:0 cond/pruning_ops/Size_1:output:0*
T0*"
_output_shapes
:�:�Z
cond/pruning_ops/sub_1/yConst*
_output_shapes
: *
dtype0*
value	B :~
cond/pruning_ops/sub_1Subcond/pruning_ops/Cast_1:y:0!cond/pruning_ops/sub_1/y:output:0*
T0*
_output_shapes
: `
cond/pruning_ops/GatherV2/axisConst*
_output_shapes
: *
dtype0*
value	B : �
cond/pruning_ops/GatherV2GatherV2 cond/pruning_ops/TopKV2:values:0cond/pruning_ops/sub_1:z:0'cond/pruning_ops/GatherV2/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
: Z
cond/pruning_ops/sub_2/yConst*
_output_shapes
: *
dtype0*
value	B :~
cond/pruning_ops/sub_2Subcond/pruning_ops/Cast_1:y:0!cond/pruning_ops/sub_2/y:output:0*
T0*
_output_shapes
: b
 cond/pruning_ops/GatherV2_1/axisConst*
_output_shapes
: *
dtype0*
value	B : �
cond/pruning_ops/GatherV2_1GatherV2!cond/pruning_ops/TopKV2:indices:0cond/pruning_ops/sub_2:z:0)cond/pruning_ops/GatherV2_1/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
: �
cond/pruning_ops/GreaterEqualGreaterEqualcond/pruning_ops/Abs:y:0"cond/pruning_ops/GatherV2:output:0*
T0*
_output_shapes

:  Z
cond/pruning_ops/Size_2Const*
_output_shapes
: *
dtype0*
value
B :�`
cond/pruning_ops/one_hot/ConstConst*
_output_shapes
: *
dtype0
*
value	B
 Zb
 cond/pruning_ops/one_hot/Const_1Const*
_output_shapes
: *
dtype0
*
value	B
 Z �
cond/pruning_ops/one_hotOneHot$cond/pruning_ops/GatherV2_1:output:0 cond/pruning_ops/Size_2:output:0'cond/pruning_ops/one_hot/Const:output:0)cond/pruning_ops/one_hot/Const_1:output:0*
TI0*
T0
*
_output_shapes	
:�q
 cond/pruning_ops/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"        �
cond/pruning_ops/Reshape_1Reshape!cond/pruning_ops/one_hot:output:0)cond/pruning_ops/Reshape_1/shape:output:0*
T0
*
_output_shapes

:  �
cond/pruning_ops/LogicalOr	LogicalOr!cond/pruning_ops/GreaterEqual:z:0#cond/pruning_ops/Reshape_1:output:0*
_output_shapes

:  i
	cond/CastCastcond/pruning_ops/LogicalOr:z:0*

DstT0*

SrcT0
*
_output_shapes

:  �
cond/AssignVariableOpAssignVariableOpcond_assignvariableop_resourcecond/Cast:y:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�
cond/AssignVariableOp_1AssignVariableOp cond_assignvariableop_1_resource"cond/pruning_ops/GatherV2:output:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�
cond/group_depsNoOp^cond/AssignVariableOp^cond/AssignVariableOp_1",/job:localhost/replica:0/task:0/device:GPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 h
cond/IdentityIdentitycond_identity_logicaland_1^cond/group_deps*
T0
*
_output_shapes
: `
cond/Identity_1Identitycond/Identity:output:0
^cond/NoOp*
T0
*
_output_shapes
: �
	cond/NoOpNoOp^cond/AssignVariableOp^cond/AssignVariableOp_1!^cond/GreaterEqual/ReadVariableOp^cond/LessEqual/ReadVariableOp^cond/Sub/ReadVariableOp6^cond/polynomial_decay_pruning_schedule/ReadVariableOp$^cond/pruning_ops/Abs/ReadVariableOp*
_output_shapes
 "+
cond_identity_1cond/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes

: : : : : 22
cond/AssignVariableOp_1cond/AssignVariableOp_12.
cond/AssignVariableOpcond/AssignVariableOp2D
 cond/GreaterEqual/ReadVariableOp cond/GreaterEqual/ReadVariableOp2>
cond/LessEqual/ReadVariableOpcond/LessEqual/ReadVariableOp22
cond/Sub/ReadVariableOpcond/Sub/ReadVariableOp2n
5cond/polynomial_decay_pruning_schedule/ReadVariableOp5cond/polynomial_decay_pruning_schedule/ReadVariableOp2J
#cond/pruning_ops/Abs/ReadVariableOp#cond/pruning_ops/Abs/ReadVariableOp:D@

_output_shapes
: 
&
_user_specified_nameLogicalAnd_1:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:( $
"
_user_specified_name
resource
�
f
J__inference_q_activation_3_layer_call_and_return_conditional_losses_567410

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
:���������  [
truedivRealDivmul:z:0Cast:y:0*
T0*+
_output_shapes
:���������  M
NegNegtruediv:z:0*
T0*+
_output_shapes
:���������  Q
RoundRoundtruediv:z:0*
T0*+
_output_shapes
:���������  V
addAddV2Neg:y:0	Round:y:0*
T0*+
_output_shapes
:���������  [
StopGradientStopGradientadd:z:0*
T0*+
_output_shapes
:���������  h
add_1AddV2truediv:z:0StopGradient:output:0*
T0*+
_output_shapes
:���������  \
clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * ��D�
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*+
_output_shapes
:���������  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   ��
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*+
_output_shapes
:���������  _
mul_1MulCast:y:0clip_by_value:z:0*
T0*+
_output_shapes
:���������  P
truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   Ek
	truediv_1RealDiv	mul_1:z:0truediv_1/y:output:0*
T0*+
_output_shapes
:���������  L
mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?c
mul_2Mulmul_2/x:output:0truediv_1:z:0*
T0*+
_output_shapes
:���������  J
Neg_1Neginputs*
T0*+
_output_shapes
:���������  Z
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*+
_output_shapes
:���������  L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?_
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*+
_output_shapes
:���������  _
StopGradient_1StopGradient	mul_3:z:0*
T0*+
_output_shapes
:���������  e
add_3AddV2inputsStopGradient_1:output:0*
T0*+
_output_shapes
:���������  U
IdentityIdentity	add_3:z:0*
T0*+
_output_shapes
:���������  "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:���������  :S O
+
_output_shapes
:���������  
 
_user_specified_nameinputs
�
�
9__inference_prune_low_magnitude_phi3_layer_call_fn_566980

inputs
unknown:  
	unknown_0:  
	unknown_1: 
identity��StatefulPartitionedCall�
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0	unknown_1*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:���������  *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8� *]
fXRV
T__inference_prune_low_magnitude_phi3_layer_call_and_return_conditional_losses_565662s
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*+
_output_shapes
:���������  <
NoOpNoOp^StatefulPartitionedCall*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*0
_input_shapes
:���������  : : : 22
StatefulPartitionedCallStatefulPartitionedCall:&"
 
_user_specified_name566976:&"
 
_user_specified_name566974:&"
 
_user_specified_name566972:S O
+
_output_shapes
:���������  
 
_user_specified_nameinputs
�G
�
T__inference_prune_low_magnitude_phi1_layer_call_and_return_conditional_losses_565468

inputs-
mul_readvariableop_resource: /
mul_readvariableop_1_resource: '
readvariableop_3_resource: 
identity��AssignVariableOp�Mul/ReadVariableOp�Mul/ReadVariableOp_1�ReadVariableOp�ReadVariableOp_1�ReadVariableOp_2�ReadVariableOp_3�ReadVariableOp_4�ReadVariableOp_5'
	no_updateNoOp*
_output_shapes
 )
no_update_1NoOp*
_output_shapes
 n
Mul/ReadVariableOpReadVariableOpmul_readvariableop_resource*
_output_shapes

: *
dtype0r
Mul/ReadVariableOp_1ReadVariableOpmul_readvariableop_1_resource*
_output_shapes

: *
dtype0m
MulMulMul/ReadVariableOp:value:0Mul/ReadVariableOp_1:value:0*
T0*
_output_shapes

: �
AssignVariableOpAssignVariableOpmul_readvariableop_resourceMul:z:0^Mul/ReadVariableOp*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�

group_depsNoOp^AssignVariableOp",/job:localhost/replica:0/task:0/device:GPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 e
group_deps_1NoOp^group_deps",/job:localhost/replica:0/task:0/device:GPU:0*
_output_shapes
 G
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
: }
ReadVariableOpReadVariableOpmul_readvariableop_resource^AssignVariableOp*
_output_shapes

: *
dtype0L
mul_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C_
mul_1MulReadVariableOp:value:0mul_1/y:output:0*
T0*
_output_shapes

: P
truedivRealDiv	mul_1:z:0Cast:y:0*
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
 *  �Bv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   �v
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*
_output_shapes

: R
mul_2MulCast:y:0clip_by_value:z:0*
T0*
_output_shapes

: P
truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C^
	truediv_1RealDiv	mul_2:z:0truediv_1/y:output:0*
T0*
_output_shapes

: L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?V
mul_3Mulmul_3/x:output:0truediv_1:z:0*
T0*
_output_shapes

: 
ReadVariableOp_1ReadVariableOpmul_readvariableop_resource^AssignVariableOp*
_output_shapes

: *
dtype0O
Neg_1NegReadVariableOp_1:value:0*
T0*
_output_shapes

: M
add_2AddV2	Neg_1:y:0	mul_3:z:0*
T0*
_output_shapes

: L
mul_4/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?R
mul_4Mulmul_4/x:output:0	add_2:z:0*
T0*
_output_shapes

: R
StopGradient_1StopGradient	mul_4:z:0*
T0*
_output_shapes

: 
ReadVariableOp_2ReadVariableOpmul_readvariableop_resource^AssignVariableOp*
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
::��Q
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
valueB"����   d
ReshapeReshapeinputsReshape/shape:output:0*
T0*'
_output_shapes
:���������_
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
valueB"   ����f
	Reshape_1Reshapetranspose:y:0Reshape_1/shape:output:0*
T0*
_output_shapes

: h
MatMulMatMulReshape:output:0Reshape_1:output:0*
T0*'
_output_shapes
:��������� S
Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B : S
Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : �
Reshape_2/shapePackunstack:output:0Reshape_2/shape/1:output:0Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:v
	Reshape_2ReshapeMatMul:product:0Reshape_2/shape:output:0*
T0*+
_output_shapes
:���������  I
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
mul_5/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C]
mul_5MulReadVariableOp_3:value:0mul_5/y:output:0*
T0*
_output_shapes
: P
	truediv_2RealDiv	mul_5:z:0
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
 *  �Bv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   �x
clip_by_value_1Maximumclip_by_value_1/Minimum:z:0clip_by_value_1/y:output:0*
T0*
_output_shapes
: R
mul_6Mul
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
	truediv_3RealDiv	mul_6:z:0truediv_3/y:output:0*
T0*
_output_shapes
: L
mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?R
mul_7Mulmul_7/x:output:0truediv_3:z:0*
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
add_6AddV2	Neg_3:y:0	mul_7:z:0*
T0*
_output_shapes
: L
mul_8/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?N
mul_8Mulmul_8/x:output:0	add_6:z:0*
T0*
_output_shapes
: N
StopGradient_3StopGradient	mul_8:z:0*
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
:���������  c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:���������  �
NoOpNoOp^AssignVariableOp^Mul/ReadVariableOp^Mul/ReadVariableOp_1^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*0
_input_shapes
:��������� : : : 2$
AssignVariableOpAssignVariableOp2,
Mul/ReadVariableOp_1Mul/ReadVariableOp_12(
Mul/ReadVariableOpMul/ReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_52 
ReadVariableOpReadVariableOp:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:S O
+
_output_shapes
:��������� 
 
_user_specified_nameinputs
�
�
cond_false_565257
cond_placeholder
cond_placeholder_1
cond_placeholder_2
cond_placeholder_3
cond_identity_logicaland_1

cond_identity_1
O
	cond/NoOpNoOp*&
 _has_manual_control_dependencies(*
_output_shapes
 b
cond/IdentityIdentitycond_identity_logicaland_1
^cond/NoOp*
T0
*
_output_shapes
: T
cond/Identity_1Identitycond/Identity:output:0*
T0
*
_output_shapes
: "+
cond_identity_1cond/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes

: : : : : :D@

_output_shapes
: 
&
_user_specified_nameLogicalAnd_1
�
f
J__inference_q_activation_4_layer_call_and_return_conditional_losses_565179

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
:��������� F
ReluReluinputs*
T0*'
_output_shapes
:��������� O
	ones_likeOnesLikeinputs*
T0*'
_output_shapes
:��������� D
sub_2Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: V
mulMulones_like:y:0	sub_2:z:0*
T0*'
_output_shapes
:��������� r
SelectV2SelectV2LessEqual:z:0Relu:activations:0mul:z:0*
T0*'
_output_shapes
:��������� P
mul_1MulinputsCast:y:0*
T0*'
_output_shapes
:��������� [
truedivRealDiv	mul_1:z:0
Cast_1:y:0*
T0*'
_output_shapes
:��������� I
NegNegtruediv:z:0*
T0*'
_output_shapes
:��������� M
RoundRoundtruediv:z:0*
T0*'
_output_shapes
:��������� R
addAddV2Neg:y:0	Round:y:0*
T0*'
_output_shapes
:��������� W
StopGradientStopGradientadd:z:0*
T0*'
_output_shapes
:��������� d
add_1AddV2truediv:z:0StopGradient:output:0*
T0*'
_output_shapes
:��������� [
	truediv_1RealDiv	add_1:z:0Cast:y:0*
T0*'
_output_shapes
:��������� P
truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?U
	truediv_2RealDivtruediv_2/x:output:0Cast:y:0*
T0*
_output_shapes
: L
sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?N
sub_3Subsub_3/x:output:0truediv_2:z:0*
T0*
_output_shapes
: l
clip_by_value/MinimumMinimumtruediv_1:z:0	sub_3:z:0*
T0*'
_output_shapes
:��������� T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*'
_output_shapes
:��������� ]
mul_2Mul
Cast_1:y:0clip_by_value:z:0*
T0*'
_output_shapes
:��������� Q
Neg_1NegSelectV2:output:0*
T0*'
_output_shapes
:��������� V
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*'
_output_shapes
:��������� L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?[
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*'
_output_shapes
:��������� [
StopGradient_1StopGradient	mul_3:z:0*
T0*'
_output_shapes
:��������� l
add_3AddV2SelectV2:output:0StopGradient_1:output:0*
T0*'
_output_shapes
:��������� Q
IdentityIdentity	add_3:z:0*
T0*'
_output_shapes
:��������� "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*&
_input_shapes
:��������� :O K
'
_output_shapes
:��������� 
 
_user_specified_nameinputs
� 
f
J__inference_q_activation_1_layer_call_and_return_conditional_losses_564539

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
:���������  J
ReluReluinputs*
T0*+
_output_shapes
:���������  S
	ones_likeOnesLikeinputs*
T0*+
_output_shapes
:���������  D
sub_2Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: Z
mulMulones_like:y:0	sub_2:z:0*
T0*+
_output_shapes
:���������  v
SelectV2SelectV2LessEqual:z:0Relu:activations:0mul:z:0*
T0*+
_output_shapes
:���������  T
mul_1MulinputsCast:y:0*
T0*+
_output_shapes
:���������  _
truedivRealDiv	mul_1:z:0
Cast_1:y:0*
T0*+
_output_shapes
:���������  M
NegNegtruediv:z:0*
T0*+
_output_shapes
:���������  Q
RoundRoundtruediv:z:0*
T0*+
_output_shapes
:���������  V
addAddV2Neg:y:0	Round:y:0*
T0*+
_output_shapes
:���������  [
StopGradientStopGradientadd:z:0*
T0*+
_output_shapes
:���������  h
add_1AddV2truediv:z:0StopGradient:output:0*
T0*+
_output_shapes
:���������  _
	truediv_1RealDiv	add_1:z:0Cast:y:0*
T0*+
_output_shapes
:���������  P
truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?U
	truediv_2RealDivtruediv_2/x:output:0Cast:y:0*
T0*
_output_shapes
: L
sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?N
sub_3Subsub_3/x:output:0truediv_2:z:0*
T0*
_output_shapes
: p
clip_by_value/MinimumMinimumtruediv_1:z:0	sub_3:z:0*
T0*+
_output_shapes
:���������  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    �
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*+
_output_shapes
:���������  a
mul_2Mul
Cast_1:y:0clip_by_value:z:0*
T0*+
_output_shapes
:���������  U
Neg_1NegSelectV2:output:0*
T0*+
_output_shapes
:���������  Z
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*+
_output_shapes
:���������  L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?_
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*+
_output_shapes
:���������  _
StopGradient_1StopGradient	mul_3:z:0*
T0*+
_output_shapes
:���������  p
add_3AddV2SelectV2:output:0StopGradient_1:output:0*
T0*+
_output_shapes
:���������  U
IdentityIdentity	add_3:z:0*
T0*+
_output_shapes
:���������  "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:���������  :S O
+
_output_shapes
:���������  
 
_user_specified_nameinputs
�
�
$__inference_signature_wrapper_566064
input_layer
unknown: 
	unknown_0: 
	unknown_1: 
	unknown_2:  
	unknown_3:  
	unknown_4: 
	unknown_5:  
	unknown_6:  
	unknown_7: 
	unknown_8:  
	unknown_9:  

unknown_10: 

unknown_11: 

unknown_12: 

unknown_13:
identity��StatefulPartitionedCall�
StatefulPartitionedCallStatefulPartitionedCallinput_layerunknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4	unknown_5	unknown_6	unknown_7	unknown_8	unknown_9
unknown_10
unknown_11
unknown_12
unknown_13*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:���������*,
_read_only_resource_inputs

	*2
config_proto" 

CPU

GPU2 *0J 8� **
f%R#
!__inference__wrapped_model_563903o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:���������<
NoOpNoOp^StatefulPartitionedCall*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*H
_input_shapes7
5:��������� : : : : : : : : : : : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:&"
 
_user_specified_name566060:&"
 
_user_specified_name566058:&"
 
_user_specified_name566056:&"
 
_user_specified_name566054:&"
 
_user_specified_name566052:&
"
 
_user_specified_name566050:&	"
 
_user_specified_name566048:&"
 
_user_specified_name566046:&"
 
_user_specified_name566044:&"
 
_user_specified_name566042:&"
 
_user_specified_name566040:&"
 
_user_specified_name566038:&"
 
_user_specified_name566036:&"
 
_user_specified_name566034:&"
 
_user_specified_name566032:X T
+
_output_shapes
:��������� 
%
_user_specified_nameinput_layer
�
�
8__inference_prune_low_magnitude_rho_layer_call_fn_567447

inputs
unknown:  
	unknown_0:  
	unknown_1: 
identity��StatefulPartitionedCall�
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0	unknown_1*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:��������� *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8� *\
fWRU
S__inference_prune_low_magnitude_rho_layer_call_and_return_conditional_losses_565744o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:��������� <
NoOpNoOp^StatefulPartitionedCall*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*,
_input_shapes
:��������� : : : 22
StatefulPartitionedCallStatefulPartitionedCall:&"
 
_user_specified_name567443:&"
 
_user_specified_name567441:&"
 
_user_specified_name567439:O K
'
_output_shapes
:��������� 
 
_user_specified_nameinputs
�
�
3assert_greater_equal_Assert_AssertGuard_true_567466M
Iassert_greater_equal_assert_assertguard_identity_assert_greater_equal_all
7
3assert_greater_equal_assert_assertguard_placeholder	9
5assert_greater_equal_assert_assertguard_placeholder_1	6
2assert_greater_equal_assert_assertguard_identity_1
r
,assert_greater_equal/Assert/AssertGuard/NoOpNoOp*&
 _has_manual_control_dependencies(*
_output_shapes
 �
0assert_greater_equal/Assert/AssertGuard/IdentityIdentityIassert_greater_equal_assert_assertguard_identity_assert_greater_equal_all-^assert_greater_equal/Assert/AssertGuard/NoOp*
T0
*
_output_shapes
: �
2assert_greater_equal/Assert/AssertGuard/Identity_1Identity9assert_greater_equal/Assert/AssertGuard/Identity:output:0*
T0
*
_output_shapes
: "q
2assert_greater_equal_assert_assertguard_identity_1;assert_greater_equal/Assert/AssertGuard/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes
: : : :

_output_shapes
: :

_output_shapes
: :P L

_output_shapes
: 
2
_user_specified_nameassert_greater_equal/All
�
�
3assert_greater_equal_Assert_AssertGuard_true_564247M
Iassert_greater_equal_assert_assertguard_identity_assert_greater_equal_all
7
3assert_greater_equal_assert_assertguard_placeholder	9
5assert_greater_equal_assert_assertguard_placeholder_1	6
2assert_greater_equal_assert_assertguard_identity_1
r
,assert_greater_equal/Assert/AssertGuard/NoOpNoOp*&
 _has_manual_control_dependencies(*
_output_shapes
 �
0assert_greater_equal/Assert/AssertGuard/IdentityIdentityIassert_greater_equal_assert_assertguard_identity_assert_greater_equal_all-^assert_greater_equal/Assert/AssertGuard/NoOp*
T0
*
_output_shapes
: �
2assert_greater_equal/Assert/AssertGuard/Identity_1Identity9assert_greater_equal/Assert/AssertGuard/Identity:output:0*
T0
*
_output_shapes
: "q
2assert_greater_equal_assert_assertguard_identity_1;assert_greater_equal/Assert/AssertGuard/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes
: : : :

_output_shapes
: :

_output_shapes
: :P L

_output_shapes
: 
2
_user_specified_nameassert_greater_equal/All
�
K
#__inference__update_step_xla_566114
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
�
_
C__inference_softmax_layer_call_and_return_conditional_losses_568035

inputs
identityL
SoftmaxSoftmaxinputs*
T0*'
_output_shapes
:���������Y
IdentityIdentitySoftmax:softmax:0*
T0*'
_output_shapes
:���������"
identityIdentity:output:0*(
_construction_contextkEagerRuntime*&
_input_shapes
:���������:O K
'
_output_shapes
:���������
 
_user_specified_nameinputs
�>
�
N__inference_deepsets_invariant_layer_call_and_return_conditional_losses_565776
input_layer1
prune_low_magnitude_phi1_565469: 1
prune_low_magnitude_phi1_565471: -
prune_low_magnitude_phi1_565473: 1
prune_low_magnitude_phi2_565566:  1
prune_low_magnitude_phi2_565568:  -
prune_low_magnitude_phi2_565570: 1
prune_low_magnitude_phi3_565663:  1
prune_low_magnitude_phi3_565665:  -
prune_low_magnitude_phi3_565667: 0
prune_low_magnitude_rho_565745:  0
prune_low_magnitude_rho_565747:  ,
prune_low_magnitude_rho_565749: 2
 prune_low_magnitude_dense_565767: 2
 prune_low_magnitude_dense_565769: .
 prune_low_magnitude_dense_565771:
identity��1prune_low_magnitude_dense/StatefulPartitionedCall�0prune_low_magnitude_phi1/StatefulPartitionedCall�0prune_low_magnitude_phi2/StatefulPartitionedCall�0prune_low_magnitude_phi3/StatefulPartitionedCall�/prune_low_magnitude_rho/StatefulPartitionedCall�
0prune_low_magnitude_phi1/StatefulPartitionedCallStatefulPartitionedCallinput_layerprune_low_magnitude_phi1_565469prune_low_magnitude_phi1_565471prune_low_magnitude_phi1_565473*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:���������  *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8� *]
fXRV
T__inference_prune_low_magnitude_phi1_layer_call_and_return_conditional_losses_565468�
q_activation/PartitionedCallPartitionedCall9prune_low_magnitude_phi1/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:���������  * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8� *Q
fLRJ
H__inference_q_activation_layer_call_and_return_conditional_losses_564227�
0prune_low_magnitude_phi2/StatefulPartitionedCallStatefulPartitionedCall%q_activation/PartitionedCall:output:0prune_low_magnitude_phi2_565566prune_low_magnitude_phi2_565568prune_low_magnitude_phi2_565570*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:���������  *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8� *]
fXRV
T__inference_prune_low_magnitude_phi2_layer_call_and_return_conditional_losses_565565�
q_activation_1/PartitionedCallPartitionedCall9prune_low_magnitude_phi2/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:���������  * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8� *S
fNRL
J__inference_q_activation_1_layer_call_and_return_conditional_losses_564539�
0prune_low_magnitude_phi3/StatefulPartitionedCallStatefulPartitionedCall'q_activation_1/PartitionedCall:output:0prune_low_magnitude_phi3_565663prune_low_magnitude_phi3_565665prune_low_magnitude_phi3_565667*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:���������  *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8� *]
fXRV
T__inference_prune_low_magnitude_phi3_layer_call_and_return_conditional_losses_565662�
q_activation_2/PartitionedCallPartitionedCall9prune_low_magnitude_phi3/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:���������  * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8� *S
fNRL
J__inference_q_activation_2_layer_call_and_return_conditional_losses_564851�
q_activation_3/PartitionedCallPartitionedCall'q_activation_2/PartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:���������  * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8� *S
fNRL
J__inference_q_activation_3_layer_call_and_return_conditional_losses_564883�
(global_average_pooling1d/PartitionedCallPartitionedCall'q_activation_3/PartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:��������� * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8� *]
fXRV
T__inference_global_average_pooling1d_layer_call_and_return_conditional_losses_563909�
/prune_low_magnitude_rho/StatefulPartitionedCallStatefulPartitionedCall1global_average_pooling1d/PartitionedCall:output:0prune_low_magnitude_rho_565745prune_low_magnitude_rho_565747prune_low_magnitude_rho_565749*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:��������� *$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8� *\
fWRU
S__inference_prune_low_magnitude_rho_layer_call_and_return_conditional_losses_565744�
q_activation_4/PartitionedCallPartitionedCall8prune_low_magnitude_rho/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:��������� * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8� *S
fNRL
J__inference_q_activation_4_layer_call_and_return_conditional_losses_565179�
1prune_low_magnitude_dense/StatefulPartitionedCallStatefulPartitionedCall'q_activation_4/PartitionedCall:output:0 prune_low_magnitude_dense_565767 prune_low_magnitude_dense_565769 prune_low_magnitude_dense_565771*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:���������*$
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8� *^
fYRW
U__inference_prune_low_magnitude_dense_layer_call_and_return_conditional_losses_565766�
softmax/PartitionedCallPartitionedCall:prune_low_magnitude_dense/StatefulPartitionedCall:output:0*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:���������* 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8� *L
fGRE
C__inference_softmax_layer_call_and_return_conditional_losses_565374o
IdentityIdentity softmax/PartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:����������
NoOpNoOp2^prune_low_magnitude_dense/StatefulPartitionedCall1^prune_low_magnitude_phi1/StatefulPartitionedCall1^prune_low_magnitude_phi2/StatefulPartitionedCall1^prune_low_magnitude_phi3/StatefulPartitionedCall0^prune_low_magnitude_rho/StatefulPartitionedCall*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*H
_input_shapes7
5:��������� : : : : : : : : : : : : : : : 2f
1prune_low_magnitude_dense/StatefulPartitionedCall1prune_low_magnitude_dense/StatefulPartitionedCall2d
0prune_low_magnitude_phi1/StatefulPartitionedCall0prune_low_magnitude_phi1/StatefulPartitionedCall2d
0prune_low_magnitude_phi2/StatefulPartitionedCall0prune_low_magnitude_phi2/StatefulPartitionedCall2d
0prune_low_magnitude_phi3/StatefulPartitionedCall0prune_low_magnitude_phi3/StatefulPartitionedCall2b
/prune_low_magnitude_rho/StatefulPartitionedCall/prune_low_magnitude_rho/StatefulPartitionedCall:&"
 
_user_specified_name565771:&"
 
_user_specified_name565769:&"
 
_user_specified_name565767:&"
 
_user_specified_name565749:&"
 
_user_specified_name565747:&
"
 
_user_specified_name565745:&	"
 
_user_specified_name565667:&"
 
_user_specified_name565665:&"
 
_user_specified_name565663:&"
 
_user_specified_name565570:&"
 
_user_specified_name565568:&"
 
_user_specified_name565566:&"
 
_user_specified_name565473:&"
 
_user_specified_name565471:&"
 
_user_specified_name565469:X T
+
_output_shapes
:��������� 
%
_user_specified_nameinput_layer
�<
�
S__inference_prune_low_magnitude_rho_layer_call_and_return_conditional_losses_567755

inputs-
mul_readvariableop_resource:  /
mul_readvariableop_1_resource:  '
readvariableop_3_resource: 
identity��AssignVariableOp�Mul/ReadVariableOp�Mul/ReadVariableOp_1�ReadVariableOp�ReadVariableOp_1�ReadVariableOp_2�ReadVariableOp_3�ReadVariableOp_4�ReadVariableOp_5'
	no_updateNoOp*
_output_shapes
 )
no_update_1NoOp*
_output_shapes
 n
Mul/ReadVariableOpReadVariableOpmul_readvariableop_resource*
_output_shapes

:  *
dtype0r
Mul/ReadVariableOp_1ReadVariableOpmul_readvariableop_1_resource*
_output_shapes

:  *
dtype0m
MulMulMul/ReadVariableOp:value:0Mul/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  �
AssignVariableOpAssignVariableOpmul_readvariableop_resourceMul:z:0^Mul/ReadVariableOp*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�

group_depsNoOp^AssignVariableOp",/job:localhost/replica:0/task:0/device:GPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 e
group_deps_1NoOp^group_deps",/job:localhost/replica:0/task:0/device:GPU:0*
_output_shapes
 G
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
: }
ReadVariableOpReadVariableOpmul_readvariableop_resource^AssignVariableOp*
_output_shapes

:  *
dtype0L
mul_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C_
mul_1MulReadVariableOp:value:0mul_1/y:output:0*
T0*
_output_shapes

:  P
truedivRealDiv	mul_1:z:0Cast:y:0*
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
 *  �Bv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   �v
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*
_output_shapes

:  R
mul_2MulCast:y:0clip_by_value:z:0*
T0*
_output_shapes

:  P
truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C^
	truediv_1RealDiv	mul_2:z:0truediv_1/y:output:0*
T0*
_output_shapes

:  L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?V
mul_3Mulmul_3/x:output:0truediv_1:z:0*
T0*
_output_shapes

:  
ReadVariableOp_1ReadVariableOpmul_readvariableop_resource^AssignVariableOp*
_output_shapes

:  *
dtype0O
Neg_1NegReadVariableOp_1:value:0*
T0*
_output_shapes

:  M
add_2AddV2	Neg_1:y:0	mul_3:z:0*
T0*
_output_shapes

:  L
mul_4/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?R
mul_4Mulmul_4/x:output:0	add_2:z:0*
T0*
_output_shapes

:  R
StopGradient_1StopGradient	mul_4:z:0*
T0*
_output_shapes

:  
ReadVariableOp_2ReadVariableOpmul_readvariableop_resource^AssignVariableOp*
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
:��������� I
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
mul_5/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C]
mul_5MulReadVariableOp_3:value:0mul_5/y:output:0*
T0*
_output_shapes
: P
	truediv_2RealDiv	mul_5:z:0
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
 *  �Bv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   �x
clip_by_value_1Maximumclip_by_value_1/Minimum:z:0clip_by_value_1/y:output:0*
T0*
_output_shapes
: R
mul_6Mul
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
	truediv_3RealDiv	mul_6:z:0truediv_3/y:output:0*
T0*
_output_shapes
: L
mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?R
mul_7Mulmul_7/x:output:0truediv_3:z:0*
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
add_6AddV2	Neg_3:y:0	mul_7:z:0*
T0*
_output_shapes
: L
mul_8/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?N
mul_8Mulmul_8/x:output:0	add_6:z:0*
T0*
_output_shapes
: N
StopGradient_3StopGradient	mul_8:z:0*
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
:��������� _
IdentityIdentityBiasAdd:output:0^NoOp*
T0*'
_output_shapes
:��������� �
NoOpNoOp^AssignVariableOp^Mul/ReadVariableOp^Mul/ReadVariableOp_1^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*,
_input_shapes
:��������� : : : 2$
AssignVariableOpAssignVariableOp2,
Mul/ReadVariableOp_1Mul/ReadVariableOp_12(
Mul/ReadVariableOpMul/ReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_52 
ReadVariableOpReadVariableOp:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:O K
'
_output_shapes
:��������� 
 
_user_specified_nameinputs
�
K
/__inference_q_activation_3_layer_call_fn_567379

inputs
identity�
PartitionedCallPartitionedCallinputs*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:���������  * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8� *S
fNRL
J__inference_q_activation_3_layer_call_and_return_conditional_losses_564883d
IdentityIdentityPartitionedCall:output:0*
T0*+
_output_shapes
:���������  "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:���������  :S O
+
_output_shapes
:���������  
 
_user_specified_nameinputs
�
�
4assert_greater_equal_Assert_AssertGuard_false_564248K
Gassert_greater_equal_assert_assertguard_assert_assert_greater_equal_all
V
Rassert_greater_equal_assert_assertguard_assert_assert_greater_equal_readvariableop	I
Eassert_greater_equal_assert_assertguard_assert_assert_greater_equal_y	6
2assert_greater_equal_assert_assertguard_identity_1
��.assert_greater_equal/Assert/AssertGuard/Assert�
5assert_greater_equal/Assert/AssertGuard/Assert/data_0Const*
_output_shapes
: *
dtype0*�
value�B� B�Prune() wrapper requires the UpdatePruningStep callback to be provided during training. Please add it as a callback to your model.fit call.�
5assert_greater_equal/Assert/AssertGuard/Assert/data_1Const*
_output_shapes
: *
dtype0*<
value3B1 B+Condition x >= y did not hold element-wise:�
5assert_greater_equal/Assert/AssertGuard/Assert/data_2Const*
_output_shapes
: *
dtype0*=
value4B2 B,x (assert_greater_equal/ReadVariableOp:0) = �
5assert_greater_equal/Assert/AssertGuard/Assert/data_4Const*
_output_shapes
: *
dtype0*0
value'B% By (assert_greater_equal/y:0) = �
.assert_greater_equal/Assert/AssertGuard/AssertAssertGassert_greater_equal_assert_assertguard_assert_assert_greater_equal_all>assert_greater_equal/Assert/AssertGuard/Assert/data_0:output:0>assert_greater_equal/Assert/AssertGuard/Assert/data_1:output:0>assert_greater_equal/Assert/AssertGuard/Assert/data_2:output:0Rassert_greater_equal_assert_assertguard_assert_assert_greater_equal_readvariableop>assert_greater_equal/Assert/AssertGuard/Assert/data_4:output:0Eassert_greater_equal_assert_assertguard_assert_assert_greater_equal_y*
T

2		*&
 _has_manual_control_dependencies(*
_output_shapes
 �
0assert_greater_equal/Assert/AssertGuard/IdentityIdentityGassert_greater_equal_assert_assertguard_assert_assert_greater_equal_all/^assert_greater_equal/Assert/AssertGuard/Assert*
T0
*
_output_shapes
: �
2assert_greater_equal/Assert/AssertGuard/Identity_1Identity9assert_greater_equal/Assert/AssertGuard/Identity:output:0-^assert_greater_equal/Assert/AssertGuard/NoOp*
T0
*
_output_shapes
: {
,assert_greater_equal/Assert/AssertGuard/NoOpNoOp/^assert_greater_equal/Assert/AssertGuard/Assert*
_output_shapes
 "q
2assert_greater_equal_assert_assertguard_identity_1;assert_greater_equal/Assert/AssertGuard/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes
: : : 2`
.assert_greater_equal/Assert/AssertGuard/Assert.assert_greater_equal/Assert/AssertGuard/Assert:NJ

_output_shapes
: 
0
_user_specified_nameassert_greater_equal/y:[W

_output_shapes
: 
=
_user_specified_name%#assert_greater_equal/ReadVariableOp:P L

_output_shapes
: 
2
_user_specified_nameassert_greater_equal/All
�
�
cond_false_564962
cond_placeholder
cond_placeholder_1
cond_placeholder_2
cond_placeholder_3
cond_identity_logicaland_1

cond_identity_1
O
	cond/NoOpNoOp*&
 _has_manual_control_dependencies(*
_output_shapes
 b
cond/IdentityIdentitycond_identity_logicaland_1
^cond/NoOp*
T0
*
_output_shapes
: T
cond/Identity_1Identitycond/Identity:output:0*
T0
*
_output_shapes
: "+
cond_identity_1cond/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes

: : : : : :D@

_output_shapes
: 
&
_user_specified_nameLogicalAnd_1
�
�
3assert_greater_equal_Assert_AssertGuard_true_566999M
Iassert_greater_equal_assert_assertguard_identity_assert_greater_equal_all
7
3assert_greater_equal_assert_assertguard_placeholder	9
5assert_greater_equal_assert_assertguard_placeholder_1	6
2assert_greater_equal_assert_assertguard_identity_1
r
,assert_greater_equal/Assert/AssertGuard/NoOpNoOp*&
 _has_manual_control_dependencies(*
_output_shapes
 �
0assert_greater_equal/Assert/AssertGuard/IdentityIdentityIassert_greater_equal_assert_assertguard_identity_assert_greater_equal_all-^assert_greater_equal/Assert/AssertGuard/NoOp*
T0
*
_output_shapes
: �
2assert_greater_equal/Assert/AssertGuard/Identity_1Identity9assert_greater_equal/Assert/AssertGuard/Identity:output:0*
T0
*
_output_shapes
: "q
2assert_greater_equal_assert_assertguard_identity_1;assert_greater_equal/Assert/AssertGuard/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes
: : : :

_output_shapes
: :

_output_shapes
: :P L

_output_shapes
: 
2
_user_specified_nameassert_greater_equal/All
�
�
4assert_greater_equal_Assert_AssertGuard_false_567853K
Gassert_greater_equal_assert_assertguard_assert_assert_greater_equal_all
V
Rassert_greater_equal_assert_assertguard_assert_assert_greater_equal_readvariableop	I
Eassert_greater_equal_assert_assertguard_assert_assert_greater_equal_y	6
2assert_greater_equal_assert_assertguard_identity_1
��.assert_greater_equal/Assert/AssertGuard/Assert�
5assert_greater_equal/Assert/AssertGuard/Assert/data_0Const*
_output_shapes
: *
dtype0*�
value�B� B�Prune() wrapper requires the UpdatePruningStep callback to be provided during training. Please add it as a callback to your model.fit call.�
5assert_greater_equal/Assert/AssertGuard/Assert/data_1Const*
_output_shapes
: *
dtype0*<
value3B1 B+Condition x >= y did not hold element-wise:�
5assert_greater_equal/Assert/AssertGuard/Assert/data_2Const*
_output_shapes
: *
dtype0*=
value4B2 B,x (assert_greater_equal/ReadVariableOp:0) = �
5assert_greater_equal/Assert/AssertGuard/Assert/data_4Const*
_output_shapes
: *
dtype0*0
value'B% By (assert_greater_equal/y:0) = �
.assert_greater_equal/Assert/AssertGuard/AssertAssertGassert_greater_equal_assert_assertguard_assert_assert_greater_equal_all>assert_greater_equal/Assert/AssertGuard/Assert/data_0:output:0>assert_greater_equal/Assert/AssertGuard/Assert/data_1:output:0>assert_greater_equal/Assert/AssertGuard/Assert/data_2:output:0Rassert_greater_equal_assert_assertguard_assert_assert_greater_equal_readvariableop>assert_greater_equal/Assert/AssertGuard/Assert/data_4:output:0Eassert_greater_equal_assert_assertguard_assert_assert_greater_equal_y*
T

2		*&
 _has_manual_control_dependencies(*
_output_shapes
 �
0assert_greater_equal/Assert/AssertGuard/IdentityIdentityGassert_greater_equal_assert_assertguard_assert_assert_greater_equal_all/^assert_greater_equal/Assert/AssertGuard/Assert*
T0
*
_output_shapes
: �
2assert_greater_equal/Assert/AssertGuard/Identity_1Identity9assert_greater_equal/Assert/AssertGuard/Identity:output:0-^assert_greater_equal/Assert/AssertGuard/NoOp*
T0
*
_output_shapes
: {
,assert_greater_equal/Assert/AssertGuard/NoOpNoOp/^assert_greater_equal/Assert/AssertGuard/Assert*
_output_shapes
 "q
2assert_greater_equal_assert_assertguard_identity_1;assert_greater_equal/Assert/AssertGuard/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes
: : : 2`
.assert_greater_equal/Assert/AssertGuard/Assert.assert_greater_equal/Assert/AssertGuard/Assert:NJ

_output_shapes
: 
0
_user_specified_nameassert_greater_equal/y:[W

_output_shapes
: 
=
_user_specified_name%#assert_greater_equal/ReadVariableOp:P L

_output_shapes
: 
2
_user_specified_nameassert_greater_equal/All
�X
�
cond_true_564616H
>cond_polynomial_decay_pruning_schedule_readvariableop_resource:	 >
,cond_pruning_ops_abs_readvariableop_resource:  0
cond_assignvariableop_resource:  *
 cond_assignvariableop_1_resource: 
cond_identity_logicaland_1

cond_identity_1
��cond/AssignVariableOp�cond/AssignVariableOp_1� cond/GreaterEqual/ReadVariableOp�cond/LessEqual/ReadVariableOp�cond/Sub/ReadVariableOp�5cond/polynomial_decay_pruning_schedule/ReadVariableOp�#cond/pruning_ops/Abs/ReadVariableOp�
5cond/polynomial_decay_pruning_schedule/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	o
,cond/polynomial_decay_pruning_schedule/sub/yConst*
_output_shapes
: *
dtype0	*
value
B	 R��
*cond/polynomial_decay_pruning_schedule/subSub=cond/polynomial_decay_pruning_schedule/ReadVariableOp:value:05cond/polynomial_decay_pruning_schedule/sub/y:output:0*
T0	*
_output_shapes
: �
+cond/polynomial_decay_pruning_schedule/CastCast.cond/polynomial_decay_pruning_schedule/sub:z:0*

DstT0*

SrcT0	*
_output_shapes
: u
0cond/polynomial_decay_pruning_schedule/truediv/yConst*
_output_shapes
: *
dtype0*
valueB
 * �jF�
.cond/polynomial_decay_pruning_schedule/truedivRealDiv/cond/polynomial_decay_pruning_schedule/Cast:y:09cond/polynomial_decay_pruning_schedule/truediv/y:output:0*
T0*
_output_shapes
: u
0cond/polynomial_decay_pruning_schedule/Maximum/xConst*
_output_shapes
: *
dtype0*
valueB
 *    �
.cond/polynomial_decay_pruning_schedule/MaximumMaximum9cond/polynomial_decay_pruning_schedule/Maximum/x:output:02cond/polynomial_decay_pruning_schedule/truediv:z:0*
T0*
_output_shapes
: u
0cond/polynomial_decay_pruning_schedule/Minimum/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
.cond/polynomial_decay_pruning_schedule/MinimumMinimum9cond/polynomial_decay_pruning_schedule/Minimum/x:output:02cond/polynomial_decay_pruning_schedule/Maximum:z:0*
T0*
_output_shapes
: s
.cond/polynomial_decay_pruning_schedule/sub_1/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
,cond/polynomial_decay_pruning_schedule/sub_1Sub7cond/polynomial_decay_pruning_schedule/sub_1/x:output:02cond/polynomial_decay_pruning_schedule/Minimum:z:0*
T0*
_output_shapes
: q
,cond/polynomial_decay_pruning_schedule/Pow/yConst*
_output_shapes
: *
dtype0*
valueB
 *  @@�
*cond/polynomial_decay_pruning_schedule/PowPow0cond/polynomial_decay_pruning_schedule/sub_1:z:05cond/polynomial_decay_pruning_schedule/Pow/y:output:0*
T0*
_output_shapes
: q
,cond/polynomial_decay_pruning_schedule/Mul/xConst*
_output_shapes
: *
dtype0*
valueB
 *   ��
*cond/polynomial_decay_pruning_schedule/MulMul5cond/polynomial_decay_pruning_schedule/Mul/x:output:0.cond/polynomial_decay_pruning_schedule/Pow:z:0*
T0*
_output_shapes
: v
1cond/polynomial_decay_pruning_schedule/sparsity/yConst*
_output_shapes
: *
dtype0*
valueB
 *   ?�
/cond/polynomial_decay_pruning_schedule/sparsityAddV2.cond/polynomial_decay_pruning_schedule/Mul:z:0:cond/polynomial_decay_pruning_schedule/sparsity/y:output:0*
T0*
_output_shapes
: �
 cond/GreaterEqual/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	V
cond/GreaterEqual/yConst*
_output_shapes
: *
dtype0	*
value
B	 R��
cond/GreaterEqualGreaterEqual(cond/GreaterEqual/ReadVariableOp:value:0cond/GreaterEqual/y:output:0*
T0	*
_output_shapes
: �
cond/LessEqual/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	T
cond/LessEqual/yConst*
_output_shapes
: *
dtype0	*
valueB		 Rܒ~
cond/LessEqual	LessEqual%cond/LessEqual/ReadVariableOp:value:0cond/LessEqual/y:output:0*
T0	*
_output_shapes
: O
cond/Less/xConst*
_output_shapes
: *
dtype0*
valueB	 :ܒM
cond/Less/yConst*
_output_shapes
: *
dtype0*
value	B : ^
	cond/LessLesscond/Less/x:output:0cond/Less/y:output:0*
T0*
_output_shapes
: V
cond/LogicalOr	LogicalOrcond/LessEqual:z:0cond/Less:z:0*
_output_shapes
: `
cond/LogicalAnd
LogicalAndcond/GreaterEqual:z:0cond/LogicalOr:z:0*
_output_shapes
: �
cond/Sub/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	M

cond/Sub/yConst*
_output_shapes
: *
dtype0	*
value
B	 R�f
cond/SubSubcond/Sub/ReadVariableOp:value:0cond/Sub/y:output:0*
T0	*
_output_shapes
: R
cond/FloorMod/yConst*
_output_shapes
: *
dtype0	*
value
B	 R�b
cond/FloorModFloorModcond/Sub:z:0cond/FloorMod/y:output:0*
T0	*
_output_shapes
: N
cond/Equal/yConst*
_output_shapes
: *
dtype0	*
value	B	 R ^

cond/EqualEqualcond/FloorMod:z:0cond/Equal/y:output:0*
T0	*
_output_shapes
: \
cond/LogicalAnd_1
LogicalAndcond/LogicalAnd:z:0cond/Equal:z:0*
_output_shapes
: �
#cond/pruning_ops/Abs/ReadVariableOpReadVariableOp,cond_pruning_ops_abs_readvariableop_resource*
_output_shapes

:  *
dtype0q
cond/pruning_ops/AbsAbs+cond/pruning_ops/Abs/ReadVariableOp:value:0*
T0*
_output_shapes

:  X
cond/pruning_ops/SizeConst*
_output_shapes
: *
dtype0*
value
B :�m
cond/pruning_ops/CastCastcond/pruning_ops/Size:output:0*

DstT0*

SrcT0*
_output_shapes
: [
cond/pruning_ops/sub/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
cond/pruning_ops/subSubcond/pruning_ops/sub/x:output:03cond/polynomial_decay_pruning_schedule/sparsity:z:0*
T0*
_output_shapes
: q
cond/pruning_ops/mulMulcond/pruning_ops/Cast:y:0cond/pruning_ops/sub:z:0*
T0*
_output_shapes
: Z
cond/pruning_ops/RoundRoundcond/pruning_ops/mul:z:0*
T0*
_output_shapes
: _
cond/pruning_ops/Maximum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
cond/pruning_ops/MaximumMaximumcond/pruning_ops/Round:y:0#cond/pruning_ops/Maximum/y:output:0*
T0*
_output_shapes
: m
cond/pruning_ops/Cast_1Castcond/pruning_ops/Maximum:z:0*

DstT0*

SrcT0*
_output_shapes
: q
cond/pruning_ops/Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB:
����������
cond/pruning_ops/ReshapeReshapecond/pruning_ops/Abs:y:0'cond/pruning_ops/Reshape/shape:output:0*
T0*
_output_shapes	
:�Z
cond/pruning_ops/Size_1Const*
_output_shapes
: *
dtype0*
value
B :��
cond/pruning_ops/TopKV2TopKV2!cond/pruning_ops/Reshape:output:0 cond/pruning_ops/Size_1:output:0*
T0*"
_output_shapes
:�:�Z
cond/pruning_ops/sub_1/yConst*
_output_shapes
: *
dtype0*
value	B :~
cond/pruning_ops/sub_1Subcond/pruning_ops/Cast_1:y:0!cond/pruning_ops/sub_1/y:output:0*
T0*
_output_shapes
: `
cond/pruning_ops/GatherV2/axisConst*
_output_shapes
: *
dtype0*
value	B : �
cond/pruning_ops/GatherV2GatherV2 cond/pruning_ops/TopKV2:values:0cond/pruning_ops/sub_1:z:0'cond/pruning_ops/GatherV2/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
: Z
cond/pruning_ops/sub_2/yConst*
_output_shapes
: *
dtype0*
value	B :~
cond/pruning_ops/sub_2Subcond/pruning_ops/Cast_1:y:0!cond/pruning_ops/sub_2/y:output:0*
T0*
_output_shapes
: b
 cond/pruning_ops/GatherV2_1/axisConst*
_output_shapes
: *
dtype0*
value	B : �
cond/pruning_ops/GatherV2_1GatherV2!cond/pruning_ops/TopKV2:indices:0cond/pruning_ops/sub_2:z:0)cond/pruning_ops/GatherV2_1/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
: �
cond/pruning_ops/GreaterEqualGreaterEqualcond/pruning_ops/Abs:y:0"cond/pruning_ops/GatherV2:output:0*
T0*
_output_shapes

:  Z
cond/pruning_ops/Size_2Const*
_output_shapes
: *
dtype0*
value
B :�`
cond/pruning_ops/one_hot/ConstConst*
_output_shapes
: *
dtype0
*
value	B
 Zb
 cond/pruning_ops/one_hot/Const_1Const*
_output_shapes
: *
dtype0
*
value	B
 Z �
cond/pruning_ops/one_hotOneHot$cond/pruning_ops/GatherV2_1:output:0 cond/pruning_ops/Size_2:output:0'cond/pruning_ops/one_hot/Const:output:0)cond/pruning_ops/one_hot/Const_1:output:0*
TI0*
T0
*
_output_shapes	
:�q
 cond/pruning_ops/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"        �
cond/pruning_ops/Reshape_1Reshape!cond/pruning_ops/one_hot:output:0)cond/pruning_ops/Reshape_1/shape:output:0*
T0
*
_output_shapes

:  �
cond/pruning_ops/LogicalOr	LogicalOr!cond/pruning_ops/GreaterEqual:z:0#cond/pruning_ops/Reshape_1:output:0*
_output_shapes

:  i
	cond/CastCastcond/pruning_ops/LogicalOr:z:0*

DstT0*

SrcT0
*
_output_shapes

:  �
cond/AssignVariableOpAssignVariableOpcond_assignvariableop_resourcecond/Cast:y:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�
cond/AssignVariableOp_1AssignVariableOp cond_assignvariableop_1_resource"cond/pruning_ops/GatherV2:output:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�
cond/group_depsNoOp^cond/AssignVariableOp^cond/AssignVariableOp_1",/job:localhost/replica:0/task:0/device:GPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 h
cond/IdentityIdentitycond_identity_logicaland_1^cond/group_deps*
T0
*
_output_shapes
: `
cond/Identity_1Identitycond/Identity:output:0
^cond/NoOp*
T0
*
_output_shapes
: �
	cond/NoOpNoOp^cond/AssignVariableOp^cond/AssignVariableOp_1!^cond/GreaterEqual/ReadVariableOp^cond/LessEqual/ReadVariableOp^cond/Sub/ReadVariableOp6^cond/polynomial_decay_pruning_schedule/ReadVariableOp$^cond/pruning_ops/Abs/ReadVariableOp*
_output_shapes
 "+
cond_identity_1cond/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes

: : : : : 22
cond/AssignVariableOp_1cond/AssignVariableOp_12.
cond/AssignVariableOpcond/AssignVariableOp2D
 cond/GreaterEqual/ReadVariableOp cond/GreaterEqual/ReadVariableOp2>
cond/LessEqual/ReadVariableOpcond/LessEqual/ReadVariableOp22
cond/Sub/ReadVariableOpcond/Sub/ReadVariableOp2n
5cond/polynomial_decay_pruning_schedule/ReadVariableOp5cond/polynomial_decay_pruning_schedule/ReadVariableOp2J
#cond/pruning_ops/Abs/ReadVariableOp#cond/pruning_ops/Abs/ReadVariableOp:D@

_output_shapes
: 
&
_user_specified_nameLogicalAnd_1:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:( $
"
_user_specified_name
resource
�
�
U__inference_prune_low_magnitude_dense_layer_call_and_return_conditional_losses_565766

inputs-
mul_readvariableop_resource: /
mul_readvariableop_1_resource: -
biasadd_readvariableop_resource:
identity��AssignVariableOp�BiasAdd/ReadVariableOp�MatMul/ReadVariableOp�Mul/ReadVariableOp�Mul/ReadVariableOp_1'
	no_updateNoOp*
_output_shapes
 )
no_update_1NoOp*
_output_shapes
 n
Mul/ReadVariableOpReadVariableOpmul_readvariableop_resource*
_output_shapes

: *
dtype0r
Mul/ReadVariableOp_1ReadVariableOpmul_readvariableop_1_resource*
_output_shapes

: *
dtype0m
MulMulMul/ReadVariableOp:value:0Mul/ReadVariableOp_1:value:0*
T0*
_output_shapes

: �
AssignVariableOpAssignVariableOpmul_readvariableop_resourceMul:z:0^Mul/ReadVariableOp*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�

group_depsNoOp^AssignVariableOp",/job:localhost/replica:0/task:0/device:GPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 e
group_deps_1NoOp^group_deps",/job:localhost/replica:0/task:0/device:GPU:0*
_output_shapes
 �
MatMul/ReadVariableOpReadVariableOpmul_readvariableop_resource^AssignVariableOp*
_output_shapes

: *
dtype0i
MatMulMatMulinputsMatMul/ReadVariableOp:value:0*
T0*'
_output_shapes
:���������r
BiasAdd/ReadVariableOpReadVariableOpbiasadd_readvariableop_resource*
_output_shapes
:*
dtype0v
BiasAddBiasAddMatMul:product:0BiasAdd/ReadVariableOp:value:0*
T0*'
_output_shapes
:���������_
IdentityIdentityBiasAdd:output:0^NoOp*
T0*'
_output_shapes
:����������
NoOpNoOp^AssignVariableOp^BiasAdd/ReadVariableOp^MatMul/ReadVariableOp^Mul/ReadVariableOp^Mul/ReadVariableOp_1*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*,
_input_shapes
:��������� : : : 2$
AssignVariableOpAssignVariableOp20
BiasAdd/ReadVariableOpBiasAdd/ReadVariableOp2.
MatMul/ReadVariableOpMatMul/ReadVariableOp2,
Mul/ReadVariableOp_1Mul/ReadVariableOp_12(
Mul/ReadVariableOpMul/ReadVariableOp:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:O K
'
_output_shapes
:��������� 
 
_user_specified_nameinputs
�<
�
S__inference_prune_low_magnitude_rho_layer_call_and_return_conditional_losses_565744

inputs-
mul_readvariableop_resource:  /
mul_readvariableop_1_resource:  '
readvariableop_3_resource: 
identity��AssignVariableOp�Mul/ReadVariableOp�Mul/ReadVariableOp_1�ReadVariableOp�ReadVariableOp_1�ReadVariableOp_2�ReadVariableOp_3�ReadVariableOp_4�ReadVariableOp_5'
	no_updateNoOp*
_output_shapes
 )
no_update_1NoOp*
_output_shapes
 n
Mul/ReadVariableOpReadVariableOpmul_readvariableop_resource*
_output_shapes

:  *
dtype0r
Mul/ReadVariableOp_1ReadVariableOpmul_readvariableop_1_resource*
_output_shapes

:  *
dtype0m
MulMulMul/ReadVariableOp:value:0Mul/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  �
AssignVariableOpAssignVariableOpmul_readvariableop_resourceMul:z:0^Mul/ReadVariableOp*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�

group_depsNoOp^AssignVariableOp",/job:localhost/replica:0/task:0/device:GPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 e
group_deps_1NoOp^group_deps",/job:localhost/replica:0/task:0/device:GPU:0*
_output_shapes
 G
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
: }
ReadVariableOpReadVariableOpmul_readvariableop_resource^AssignVariableOp*
_output_shapes

:  *
dtype0L
mul_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C_
mul_1MulReadVariableOp:value:0mul_1/y:output:0*
T0*
_output_shapes

:  P
truedivRealDiv	mul_1:z:0Cast:y:0*
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
 *  �Bv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   �v
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*
_output_shapes

:  R
mul_2MulCast:y:0clip_by_value:z:0*
T0*
_output_shapes

:  P
truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C^
	truediv_1RealDiv	mul_2:z:0truediv_1/y:output:0*
T0*
_output_shapes

:  L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?V
mul_3Mulmul_3/x:output:0truediv_1:z:0*
T0*
_output_shapes

:  
ReadVariableOp_1ReadVariableOpmul_readvariableop_resource^AssignVariableOp*
_output_shapes

:  *
dtype0O
Neg_1NegReadVariableOp_1:value:0*
T0*
_output_shapes

:  M
add_2AddV2	Neg_1:y:0	mul_3:z:0*
T0*
_output_shapes

:  L
mul_4/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?R
mul_4Mulmul_4/x:output:0	add_2:z:0*
T0*
_output_shapes

:  R
StopGradient_1StopGradient	mul_4:z:0*
T0*
_output_shapes

:  
ReadVariableOp_2ReadVariableOpmul_readvariableop_resource^AssignVariableOp*
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
:��������� I
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
mul_5/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C]
mul_5MulReadVariableOp_3:value:0mul_5/y:output:0*
T0*
_output_shapes
: P
	truediv_2RealDiv	mul_5:z:0
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
 *  �Bv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   �x
clip_by_value_1Maximumclip_by_value_1/Minimum:z:0clip_by_value_1/y:output:0*
T0*
_output_shapes
: R
mul_6Mul
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
	truediv_3RealDiv	mul_6:z:0truediv_3/y:output:0*
T0*
_output_shapes
: L
mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?R
mul_7Mulmul_7/x:output:0truediv_3:z:0*
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
add_6AddV2	Neg_3:y:0	mul_7:z:0*
T0*
_output_shapes
: L
mul_8/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?N
mul_8Mulmul_8/x:output:0	add_6:z:0*
T0*
_output_shapes
: N
StopGradient_3StopGradient	mul_8:z:0*
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
:��������� _
IdentityIdentityBiasAdd:output:0^NoOp*
T0*'
_output_shapes
:��������� �
NoOpNoOp^AssignVariableOp^Mul/ReadVariableOp^Mul/ReadVariableOp_1^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*,
_input_shapes
:��������� : : : 2$
AssignVariableOpAssignVariableOp2,
Mul/ReadVariableOp_1Mul/ReadVariableOp_12(
Mul/ReadVariableOpMul/ReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_52 
ReadVariableOpReadVariableOp:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:O K
'
_output_shapes
:��������� 
 
_user_specified_nameinputs
�
f
J__inference_q_activation_4_layer_call_and_return_conditional_losses_567807

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
:��������� F
ReluReluinputs*
T0*'
_output_shapes
:��������� O
	ones_likeOnesLikeinputs*
T0*'
_output_shapes
:��������� D
sub_2Sub
Cast_1:y:0	Pow_2:z:0*
T0*
_output_shapes
: V
mulMulones_like:y:0	sub_2:z:0*
T0*'
_output_shapes
:��������� r
SelectV2SelectV2LessEqual:z:0Relu:activations:0mul:z:0*
T0*'
_output_shapes
:��������� P
mul_1MulinputsCast:y:0*
T0*'
_output_shapes
:��������� [
truedivRealDiv	mul_1:z:0
Cast_1:y:0*
T0*'
_output_shapes
:��������� I
NegNegtruediv:z:0*
T0*'
_output_shapes
:��������� M
RoundRoundtruediv:z:0*
T0*'
_output_shapes
:��������� R
addAddV2Neg:y:0	Round:y:0*
T0*'
_output_shapes
:��������� W
StopGradientStopGradientadd:z:0*
T0*'
_output_shapes
:��������� d
add_1AddV2truediv:z:0StopGradient:output:0*
T0*'
_output_shapes
:��������� [
	truediv_1RealDiv	add_1:z:0Cast:y:0*
T0*'
_output_shapes
:��������� P
truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?U
	truediv_2RealDivtruediv_2/x:output:0Cast:y:0*
T0*
_output_shapes
: L
sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?N
sub_3Subsub_3/x:output:0truediv_2:z:0*
T0*
_output_shapes
: l
clip_by_value/MinimumMinimumtruediv_1:z:0	sub_3:z:0*
T0*'
_output_shapes
:��������� T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*'
_output_shapes
:��������� ]
mul_2Mul
Cast_1:y:0clip_by_value:z:0*
T0*'
_output_shapes
:��������� Q
Neg_1NegSelectV2:output:0*
T0*'
_output_shapes
:��������� V
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*'
_output_shapes
:��������� L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?[
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*'
_output_shapes
:��������� [
StopGradient_1StopGradient	mul_3:z:0*
T0*'
_output_shapes
:��������� l
add_3AddV2SelectV2:output:0StopGradient_1:output:0*
T0*'
_output_shapes
:��������� Q
IdentityIdentity	add_3:z:0*
T0*'
_output_shapes
:��������� "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*&
_input_shapes
:��������� :O K
'
_output_shapes
:��������� 
 
_user_specified_nameinputs
�
�
3__inference_deepsets_invariant_layer_call_fn_565866
input_layer
unknown: 
	unknown_0: 
	unknown_1: 
	unknown_2:  
	unknown_3:  
	unknown_4: 
	unknown_5:  
	unknown_6:  
	unknown_7: 
	unknown_8:  
	unknown_9:  

unknown_10: 

unknown_11: 

unknown_12: 

unknown_13:
identity��StatefulPartitionedCall�
StatefulPartitionedCallStatefulPartitionedCallinput_layerunknown	unknown_0	unknown_1	unknown_2	unknown_3	unknown_4	unknown_5	unknown_6	unknown_7	unknown_8	unknown_9
unknown_10
unknown_11
unknown_12
unknown_13*
Tin
2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:���������*,
_read_only_resource_inputs

	*2
config_proto" 

CPU

GPU2 *0J 8� *W
fRRP
N__inference_deepsets_invariant_layer_call_and_return_conditional_losses_565776o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:���������<
NoOpNoOp^StatefulPartitionedCall*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*H
_input_shapes7
5:��������� : : : : : : : : : : : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:&"
 
_user_specified_name565862:&"
 
_user_specified_name565860:&"
 
_user_specified_name565858:&"
 
_user_specified_name565856:&"
 
_user_specified_name565854:&
"
 
_user_specified_name565852:&	"
 
_user_specified_name565850:&"
 
_user_specified_name565848:&"
 
_user_specified_name565846:&"
 
_user_specified_name565844:&"
 
_user_specified_name565842:&"
 
_user_specified_name565840:&"
 
_user_specified_name565838:&"
 
_user_specified_name565836:&"
 
_user_specified_name565834:X T
+
_output_shapes
:��������� 
%
_user_specified_nameinput_layer
�
�
cond_false_567057
cond_placeholder
cond_placeholder_1
cond_placeholder_2
cond_placeholder_3
cond_identity_logicaland_1

cond_identity_1
O
	cond/NoOpNoOp*&
 _has_manual_control_dependencies(*
_output_shapes
 b
cond/IdentityIdentitycond_identity_logicaland_1
^cond/NoOp*
T0
*
_output_shapes
: T
cond/Identity_1Identitycond/Identity:output:0*
T0
*
_output_shapes
: "+
cond_identity_1cond/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes

: : : : : :D@

_output_shapes
: 
&
_user_specified_nameLogicalAnd_1
�G
�
T__inference_prune_low_magnitude_phi3_layer_call_and_return_conditional_losses_565662

inputs-
mul_readvariableop_resource:  /
mul_readvariableop_1_resource:  '
readvariableop_3_resource: 
identity��AssignVariableOp�Mul/ReadVariableOp�Mul/ReadVariableOp_1�ReadVariableOp�ReadVariableOp_1�ReadVariableOp_2�ReadVariableOp_3�ReadVariableOp_4�ReadVariableOp_5'
	no_updateNoOp*
_output_shapes
 )
no_update_1NoOp*
_output_shapes
 n
Mul/ReadVariableOpReadVariableOpmul_readvariableop_resource*
_output_shapes

:  *
dtype0r
Mul/ReadVariableOp_1ReadVariableOpmul_readvariableop_1_resource*
_output_shapes

:  *
dtype0m
MulMulMul/ReadVariableOp:value:0Mul/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  �
AssignVariableOpAssignVariableOpmul_readvariableop_resourceMul:z:0^Mul/ReadVariableOp*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�

group_depsNoOp^AssignVariableOp",/job:localhost/replica:0/task:0/device:GPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 e
group_deps_1NoOp^group_deps",/job:localhost/replica:0/task:0/device:GPU:0*
_output_shapes
 G
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
: }
ReadVariableOpReadVariableOpmul_readvariableop_resource^AssignVariableOp*
_output_shapes

:  *
dtype0L
mul_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C_
mul_1MulReadVariableOp:value:0mul_1/y:output:0*
T0*
_output_shapes

:  P
truedivRealDiv	mul_1:z:0Cast:y:0*
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
 *  �Bv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   �v
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*
_output_shapes

:  R
mul_2MulCast:y:0clip_by_value:z:0*
T0*
_output_shapes

:  P
truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C^
	truediv_1RealDiv	mul_2:z:0truediv_1/y:output:0*
T0*
_output_shapes

:  L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?V
mul_3Mulmul_3/x:output:0truediv_1:z:0*
T0*
_output_shapes

:  
ReadVariableOp_1ReadVariableOpmul_readvariableop_resource^AssignVariableOp*
_output_shapes

:  *
dtype0O
Neg_1NegReadVariableOp_1:value:0*
T0*
_output_shapes

:  M
add_2AddV2	Neg_1:y:0	mul_3:z:0*
T0*
_output_shapes

:  L
mul_4/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?R
mul_4Mulmul_4/x:output:0	add_2:z:0*
T0*
_output_shapes

:  R
StopGradient_1StopGradient	mul_4:z:0*
T0*
_output_shapes

:  
ReadVariableOp_2ReadVariableOpmul_readvariableop_resource^AssignVariableOp*
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
::��Q
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
valueB"����    d
ReshapeReshapeinputsReshape/shape:output:0*
T0*'
_output_shapes
:��������� _
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
valueB"    ����f
	Reshape_1Reshapetranspose:y:0Reshape_1/shape:output:0*
T0*
_output_shapes

:  h
MatMulMatMulReshape:output:0Reshape_1:output:0*
T0*'
_output_shapes
:��������� S
Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B : S
Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : �
Reshape_2/shapePackunstack:output:0Reshape_2/shape/1:output:0Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:v
	Reshape_2ReshapeMatMul:product:0Reshape_2/shape:output:0*
T0*+
_output_shapes
:���������  I
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
mul_5/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C]
mul_5MulReadVariableOp_3:value:0mul_5/y:output:0*
T0*
_output_shapes
: P
	truediv_2RealDiv	mul_5:z:0
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
 *  �Bv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   �x
clip_by_value_1Maximumclip_by_value_1/Minimum:z:0clip_by_value_1/y:output:0*
T0*
_output_shapes
: R
mul_6Mul
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
	truediv_3RealDiv	mul_6:z:0truediv_3/y:output:0*
T0*
_output_shapes
: L
mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?R
mul_7Mulmul_7/x:output:0truediv_3:z:0*
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
add_6AddV2	Neg_3:y:0	mul_7:z:0*
T0*
_output_shapes
: L
mul_8/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?N
mul_8Mulmul_8/x:output:0	add_6:z:0*
T0*
_output_shapes
: N
StopGradient_3StopGradient	mul_8:z:0*
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
:���������  c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:���������  �
NoOpNoOp^AssignVariableOp^Mul/ReadVariableOp^Mul/ReadVariableOp_1^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*0
_input_shapes
:���������  : : : 2$
AssignVariableOpAssignVariableOp2,
Mul/ReadVariableOp_1Mul/ReadVariableOp_12(
Mul/ReadVariableOpMul/ReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_52 
ReadVariableOpReadVariableOp:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:S O
+
_output_shapes
:���������  
 
_user_specified_nameinputs
��
�
T__inference_prune_low_magnitude_phi3_layer_call_and_return_conditional_losses_564793

inputs!
readvariableop_resource:	 
cond_input_1:  
cond_input_2:  
cond_input_3: '
readvariableop_4_resource: 
identity��AssignVariableOp�AssignVariableOp_1�GreaterEqual/ReadVariableOp�LessEqual/ReadVariableOp�Mul/ReadVariableOp�Mul/ReadVariableOp_1�ReadVariableOp�ReadVariableOp_1�ReadVariableOp_2�ReadVariableOp_3�ReadVariableOp_4�ReadVariableOp_5�ReadVariableOp_6�Sub/ReadVariableOp�'assert_greater_equal/Assert/AssertGuard�#assert_greater_equal/ReadVariableOp�cond�0polynomial_decay_pruning_schedule/ReadVariableOp^
ReadVariableOpReadVariableOpreadvariableop_resource*
_output_shapes
: *
dtype0	G
add/yConst*
_output_shapes
: *
dtype0	*
value	B	 RU
addAddV2ReadVariableOp:value:0add/y:output:0*
T0	*
_output_shapes
: �
AssignVariableOpAssignVariableOpreadvariableop_resourceadd:z:0^ReadVariableOp*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0	*
validate_shape(7
updateNoOp^AssignVariableOp*
_output_shapes
 �
#assert_greater_equal/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp*
_output_shapes
: *
dtype0	X
assert_greater_equal/yConst*
_output_shapes
: *
dtype0	*
value	B	 R�
!assert_greater_equal/GreaterEqualGreaterEqual+assert_greater_equal/ReadVariableOp:value:0assert_greater_equal/y:output:0*
T0	*
_output_shapes
: [
assert_greater_equal/RankConst*
_output_shapes
: *
dtype0*
value	B : b
 assert_greater_equal/range/startConst*
_output_shapes
: *
dtype0*
value	B : b
 assert_greater_equal/range/deltaConst*
_output_shapes
: *
dtype0*
value	B :�
assert_greater_equal/rangeRange)assert_greater_equal/range/start:output:0"assert_greater_equal/Rank:output:0)assert_greater_equal/range/delta:output:0*
_output_shapes
: �
assert_greater_equal/AllAll%assert_greater_equal/GreaterEqual:z:0#assert_greater_equal/range:output:0*
_output_shapes
: �
!assert_greater_equal/Assert/ConstConst*
_output_shapes
: *
dtype0*�
value�B� B�Prune() wrapper requires the UpdatePruningStep callback to be provided during training. Please add it as a callback to your model.fit call.�
#assert_greater_equal/Assert/Const_1Const*
_output_shapes
: *
dtype0*<
value3B1 B+Condition x >= y did not hold element-wise:�
#assert_greater_equal/Assert/Const_2Const*
_output_shapes
: *
dtype0*=
value4B2 B,x (assert_greater_equal/ReadVariableOp:0) = �
#assert_greater_equal/Assert/Const_3Const*
_output_shapes
: *
dtype0*0
value'B% By (assert_greater_equal/y:0) = �
'assert_greater_equal/Assert/AssertGuardIf!assert_greater_equal/All:output:0!assert_greater_equal/All:output:0+assert_greater_equal/ReadVariableOp:value:0assert_greater_equal/y:output:0*
Tcond0
*
Tin
2
		*
Tout
2
*
_lower_using_switch_merge(*
_output_shapes
: * 
_read_only_resource_inputs
 *G
else_branch8R6
4assert_greater_equal_Assert_AssertGuard_false_564560*
output_shapes
: *F
then_branch7R5
3assert_greater_equal_Assert_AssertGuard_true_564559�
0assert_greater_equal/Assert/AssertGuard/IdentityIdentity0assert_greater_equal/Assert/AssertGuard:output:0*
T0
*&
 _has_manual_control_dependencies(*
_output_shapes
: �
0polynomial_decay_pruning_schedule/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	�
'polynomial_decay_pruning_schedule/sub/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R��
%polynomial_decay_pruning_schedule/subSub8polynomial_decay_pruning_schedule/ReadVariableOp:value:00polynomial_decay_pruning_schedule/sub/y:output:0*
T0	*
_output_shapes
: �
&polynomial_decay_pruning_schedule/CastCast)polynomial_decay_pruning_schedule/sub:z:0*

DstT0*

SrcT0	*
_output_shapes
: �
+polynomial_decay_pruning_schedule/truediv/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 * �jF�
)polynomial_decay_pruning_schedule/truedivRealDiv*polynomial_decay_pruning_schedule/Cast:y:04polynomial_decay_pruning_schedule/truediv/y:output:0*
T0*
_output_shapes
: �
+polynomial_decay_pruning_schedule/Maximum/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *    �
)polynomial_decay_pruning_schedule/MaximumMaximum4polynomial_decay_pruning_schedule/Maximum/x:output:0-polynomial_decay_pruning_schedule/truediv:z:0*
T0*
_output_shapes
: �
+polynomial_decay_pruning_schedule/Minimum/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *  �?�
)polynomial_decay_pruning_schedule/MinimumMinimum4polynomial_decay_pruning_schedule/Minimum/x:output:0-polynomial_decay_pruning_schedule/Maximum:z:0*
T0*
_output_shapes
: �
)polynomial_decay_pruning_schedule/sub_1/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *  �?�
'polynomial_decay_pruning_schedule/sub_1Sub2polynomial_decay_pruning_schedule/sub_1/x:output:0-polynomial_decay_pruning_schedule/Minimum:z:0*
T0*
_output_shapes
: �
'polynomial_decay_pruning_schedule/Pow/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *  @@�
%polynomial_decay_pruning_schedule/PowPow+polynomial_decay_pruning_schedule/sub_1:z:00polynomial_decay_pruning_schedule/Pow/y:output:0*
T0*
_output_shapes
: �
'polynomial_decay_pruning_schedule/Mul/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *   ��
%polynomial_decay_pruning_schedule/MulMul0polynomial_decay_pruning_schedule/Mul/x:output:0)polynomial_decay_pruning_schedule/Pow:z:0*
T0*
_output_shapes
: �
,polynomial_decay_pruning_schedule/sparsity/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *   ?�
*polynomial_decay_pruning_schedule/sparsityAddV2)polynomial_decay_pruning_schedule/Mul:z:05polynomial_decay_pruning_schedule/sparsity/y:output:0*
T0*
_output_shapes
: �
GreaterEqual/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	�
GreaterEqual/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R�{
GreaterEqualGreaterEqual#GreaterEqual/ReadVariableOp:value:0GreaterEqual/y:output:0*
T0	*
_output_shapes
: �
LessEqual/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	�
LessEqual/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
valueB		 Rܒo
	LessEqual	LessEqual LessEqual/ReadVariableOp:value:0LessEqual/y:output:0*
T0	*
_output_shapes
: }
Less/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB	 :ܒ{
Less/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
value	B : O
LessLessLess/x:output:0Less/y:output:0*
T0*
_output_shapes
: G
	LogicalOr	LogicalOrLessEqual:z:0Less:z:0*
_output_shapes
: Q

LogicalAnd
LogicalAndGreaterEqual:z:0LogicalOr:z:0*
_output_shapes
: �
Sub/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	{
Sub/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R�W
SubSubSub/ReadVariableOp:value:0Sub/y:output:0*
T0	*
_output_shapes
: �

FloorMod/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R�S
FloorModFloorModSub:z:0FloorMod/y:output:0*
T0	*
_output_shapes
: |
Equal/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value	B	 R O
EqualEqualFloorMod:z:0Equal/y:output:0*
T0	*
_output_shapes
: M
LogicalAnd_1
LogicalAndLogicalAnd:z:0	Equal:z:0*
_output_shapes
: �
condIfLogicalAnd_1:z:0readvariableop_resourcecond_input_1cond_input_2cond_input_3LogicalAnd_1:z:0^AssignVariableOp*
Tcond0
*
Tin	
2
*
Tout
2
*
_lower_using_switch_merge(*
_output_shapes
: *$
_read_only_resource_inputs
*$
else_branchR
cond_false_564617*
output_shapes
: *#
then_branchR
cond_true_564616q
cond/IdentityIdentitycond:output:0*
T0
*&
 _has_manual_control_dependencies(*
_output_shapes
: i
update_1NoOp1^assert_greater_equal/Assert/AssertGuard/Identity^cond/Identity*
_output_shapes
 _
Mul/ReadVariableOpReadVariableOpcond_input_1*
_output_shapes

:  *
dtype0h
Mul/ReadVariableOp_1ReadVariableOpcond_input_2^cond*
_output_shapes

:  *
dtype0m
MulMulMul/ReadVariableOp:value:0Mul/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  �
AssignVariableOp_1AssignVariableOpcond_input_1Mul:z:0^Mul/ReadVariableOp^cond*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�

group_depsNoOp^AssignVariableOp_1",/job:localhost/replica:0/task:0/device:GPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 e
group_deps_1NoOp^group_deps",/job:localhost/replica:0/task:0/device:GPU:0*
_output_shapes
 G
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
: r
ReadVariableOp_1ReadVariableOpcond_input_1^AssignVariableOp_1*
_output_shapes

:  *
dtype0L
mul_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   Ca
mul_1MulReadVariableOp_1:value:0mul_1/y:output:0*
T0*
_output_shapes

:  P
truedivRealDiv	mul_1:z:0Cast:y:0*
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

:  K
add_1AddV2Neg:y:0	Round:y:0*
T0*
_output_shapes

:  P
StopGradientStopGradient	add_1:z:0*
T0*
_output_shapes

:  [
add_2AddV2truediv:z:0StopGradient:output:0*
T0*
_output_shapes

:  \
clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  �Bv
clip_by_value/MinimumMinimum	add_2:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   �v
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*
_output_shapes

:  R
mul_2MulCast:y:0clip_by_value:z:0*
T0*
_output_shapes

:  P
truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C^
	truediv_1RealDiv	mul_2:z:0truediv_1/y:output:0*
T0*
_output_shapes

:  L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?V
mul_3Mulmul_3/x:output:0truediv_1:z:0*
T0*
_output_shapes

:  r
ReadVariableOp_2ReadVariableOpcond_input_1^AssignVariableOp_1*
_output_shapes

:  *
dtype0O
Neg_1NegReadVariableOp_2:value:0*
T0*
_output_shapes

:  M
add_3AddV2	Neg_1:y:0	mul_3:z:0*
T0*
_output_shapes

:  L
mul_4/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?R
mul_4Mulmul_4/x:output:0	add_3:z:0*
T0*
_output_shapes

:  R
StopGradient_1StopGradient	mul_4:z:0*
T0*
_output_shapes

:  r
ReadVariableOp_3ReadVariableOpcond_input_1^AssignVariableOp_1*
_output_shapes

:  *
dtype0j
add_4AddV2ReadVariableOp_3:value:0StopGradient_1:output:0*
T0*
_output_shapes

:  I
ShapeShapeinputs*
T0*
_output_shapes
::��Q
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
valueB"����    d
ReshapeReshapeinputsReshape/shape:output:0*
T0*'
_output_shapes
:��������� _
transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       c
	transpose	Transpose	add_4:z:0transpose/perm:output:0*
T0*
_output_shapes

:  `
Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"    ����f
	Reshape_1Reshapetranspose:y:0Reshape_1/shape:output:0*
T0*
_output_shapes

:  h
MatMulMatMulReshape:output:0Reshape_1:output:0*
T0*'
_output_shapes
:��������� S
Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B : S
Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : �
Reshape_2/shapePackunstack:output:0Reshape_2/shape/1:output:0Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:v
	Reshape_2ReshapeMatMul:product:0Reshape_2/shape:output:0*
T0*+
_output_shapes
:���������  I
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
ReadVariableOp_4ReadVariableOpreadvariableop_4_resource*
_output_shapes
: *
dtype0L
mul_5/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C]
mul_5MulReadVariableOp_4:value:0mul_5/y:output:0*
T0*
_output_shapes
: P
	truediv_2RealDiv	mul_5:z:0
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
add_5AddV2	Neg_2:y:0Round_1:y:0*
T0*
_output_shapes
: N
StopGradient_2StopGradient	add_5:z:0*
T0*
_output_shapes
: [
add_6AddV2truediv_2:z:0StopGradient_2:output:0*
T0*
_output_shapes
: ^
clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  �Bv
clip_by_value_1/MinimumMinimum	add_6:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   �x
clip_by_value_1Maximumclip_by_value_1/Minimum:z:0clip_by_value_1/y:output:0*
T0*
_output_shapes
: R
mul_6Mul
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
	truediv_3RealDiv	mul_6:z:0truediv_3/y:output:0*
T0*
_output_shapes
: L
mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?R
mul_7Mulmul_7/x:output:0truediv_3:z:0*
T0*
_output_shapes
: f
ReadVariableOp_5ReadVariableOpreadvariableop_4_resource*
_output_shapes
: *
dtype0K
Neg_3NegReadVariableOp_5:value:0*
T0*
_output_shapes
: I
add_7AddV2	Neg_3:y:0	mul_7:z:0*
T0*
_output_shapes
: L
mul_8/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?N
mul_8Mulmul_8/x:output:0	add_7:z:0*
T0*
_output_shapes
: N
StopGradient_3StopGradient	mul_8:z:0*
T0*
_output_shapes
: f
ReadVariableOp_6ReadVariableOpreadvariableop_4_resource*
_output_shapes
: *
dtype0f
add_8AddV2ReadVariableOp_6:value:0StopGradient_3:output:0*
T0*
_output_shapes
: g
BiasAddBiasAddReshape_2:output:0	add_8:z:0*
T0*+
_output_shapes
:���������  c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:���������  �
NoOpNoOp^AssignVariableOp^AssignVariableOp_1^GreaterEqual/ReadVariableOp^LessEqual/ReadVariableOp^Mul/ReadVariableOp^Mul/ReadVariableOp_1^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5^ReadVariableOp_6^Sub/ReadVariableOp(^assert_greater_equal/Assert/AssertGuard$^assert_greater_equal/ReadVariableOp^cond1^polynomial_decay_pruning_schedule/ReadVariableOp*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*4
_input_shapes#
!:���������  : : : : : 2(
AssignVariableOp_1AssignVariableOp_12$
AssignVariableOpAssignVariableOp2:
GreaterEqual/ReadVariableOpGreaterEqual/ReadVariableOp24
LessEqual/ReadVariableOpLessEqual/ReadVariableOp2,
Mul/ReadVariableOp_1Mul/ReadVariableOp_12(
Mul/ReadVariableOpMul/ReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_52$
ReadVariableOp_6ReadVariableOp_62 
ReadVariableOpReadVariableOp2(
Sub/ReadVariableOpSub/ReadVariableOp2R
'assert_greater_equal/Assert/AssertGuard'assert_greater_equal/Assert/AssertGuard2J
#assert_greater_equal/ReadVariableOp#assert_greater_equal/ReadVariableOp2
condcond2d
0polynomial_decay_pruning_schedule/ReadVariableOp0polynomial_decay_pruning_schedule/ReadVariableOp:($
"
_user_specified_name
resource:'#
!
_user_specified_name	input_3:'#
!
_user_specified_name	input_2:'#
!
_user_specified_name	input_1:($
"
_user_specified_name
resource:S O
+
_output_shapes
:���������  
 
_user_specified_nameinputs
�
�
4assert_greater_equal_Assert_AssertGuard_false_563936K
Gassert_greater_equal_assert_assertguard_assert_assert_greater_equal_all
V
Rassert_greater_equal_assert_assertguard_assert_assert_greater_equal_readvariableop	I
Eassert_greater_equal_assert_assertguard_assert_assert_greater_equal_y	6
2assert_greater_equal_assert_assertguard_identity_1
��.assert_greater_equal/Assert/AssertGuard/Assert�
5assert_greater_equal/Assert/AssertGuard/Assert/data_0Const*
_output_shapes
: *
dtype0*�
value�B� B�Prune() wrapper requires the UpdatePruningStep callback to be provided during training. Please add it as a callback to your model.fit call.�
5assert_greater_equal/Assert/AssertGuard/Assert/data_1Const*
_output_shapes
: *
dtype0*<
value3B1 B+Condition x >= y did not hold element-wise:�
5assert_greater_equal/Assert/AssertGuard/Assert/data_2Const*
_output_shapes
: *
dtype0*=
value4B2 B,x (assert_greater_equal/ReadVariableOp:0) = �
5assert_greater_equal/Assert/AssertGuard/Assert/data_4Const*
_output_shapes
: *
dtype0*0
value'B% By (assert_greater_equal/y:0) = �
.assert_greater_equal/Assert/AssertGuard/AssertAssertGassert_greater_equal_assert_assertguard_assert_assert_greater_equal_all>assert_greater_equal/Assert/AssertGuard/Assert/data_0:output:0>assert_greater_equal/Assert/AssertGuard/Assert/data_1:output:0>assert_greater_equal/Assert/AssertGuard/Assert/data_2:output:0Rassert_greater_equal_assert_assertguard_assert_assert_greater_equal_readvariableop>assert_greater_equal/Assert/AssertGuard/Assert/data_4:output:0Eassert_greater_equal_assert_assertguard_assert_assert_greater_equal_y*
T

2		*&
 _has_manual_control_dependencies(*
_output_shapes
 �
0assert_greater_equal/Assert/AssertGuard/IdentityIdentityGassert_greater_equal_assert_assertguard_assert_assert_greater_equal_all/^assert_greater_equal/Assert/AssertGuard/Assert*
T0
*
_output_shapes
: �
2assert_greater_equal/Assert/AssertGuard/Identity_1Identity9assert_greater_equal/Assert/AssertGuard/Identity:output:0-^assert_greater_equal/Assert/AssertGuard/NoOp*
T0
*
_output_shapes
: {
,assert_greater_equal/Assert/AssertGuard/NoOpNoOp/^assert_greater_equal/Assert/AssertGuard/Assert*
_output_shapes
 "q
2assert_greater_equal_assert_assertguard_identity_1;assert_greater_equal/Assert/AssertGuard/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes
: : : 2`
.assert_greater_equal/Assert/AssertGuard/Assert.assert_greater_equal/Assert/AssertGuard/Assert:NJ

_output_shapes
: 
0
_user_specified_nameassert_greater_equal/y:[W

_output_shapes
: 
=
_user_specified_name%#assert_greater_equal/ReadVariableOp:P L

_output_shapes
: 
2
_user_specified_nameassert_greater_equal/All
�
f
J__inference_q_activation_3_layer_call_and_return_conditional_losses_564883

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
:���������  [
truedivRealDivmul:z:0Cast:y:0*
T0*+
_output_shapes
:���������  M
NegNegtruediv:z:0*
T0*+
_output_shapes
:���������  Q
RoundRoundtruediv:z:0*
T0*+
_output_shapes
:���������  V
addAddV2Neg:y:0	Round:y:0*
T0*+
_output_shapes
:���������  [
StopGradientStopGradientadd:z:0*
T0*+
_output_shapes
:���������  h
add_1AddV2truediv:z:0StopGradient:output:0*
T0*+
_output_shapes
:���������  \
clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * ��D�
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*+
_output_shapes
:���������  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   ��
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*+
_output_shapes
:���������  _
mul_1MulCast:y:0clip_by_value:z:0*
T0*+
_output_shapes
:���������  P
truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   Ek
	truediv_1RealDiv	mul_1:z:0truediv_1/y:output:0*
T0*+
_output_shapes
:���������  L
mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?c
mul_2Mulmul_2/x:output:0truediv_1:z:0*
T0*+
_output_shapes
:���������  J
Neg_1Neginputs*
T0*+
_output_shapes
:���������  Z
add_2AddV2	Neg_1:y:0	mul_2:z:0*
T0*+
_output_shapes
:���������  L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?_
mul_3Mulmul_3/x:output:0	add_2:z:0*
T0*+
_output_shapes
:���������  _
StopGradient_1StopGradient	mul_3:z:0*
T0*+
_output_shapes
:���������  e
add_3AddV2inputsStopGradient_1:output:0*
T0*+
_output_shapes
:���������  U
IdentityIdentity	add_3:z:0*
T0*+
_output_shapes
:���������  "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:���������  :S O
+
_output_shapes
:���������  
 
_user_specified_nameinputs
��
�
!__inference__wrapped_model_563903
input_layerY
Gdeepsets_invariant_prune_low_magnitude_phi1_mul_readvariableop_resource: [
Ideepsets_invariant_prune_low_magnitude_phi1_mul_readvariableop_1_resource: S
Edeepsets_invariant_prune_low_magnitude_phi1_readvariableop_3_resource: Y
Gdeepsets_invariant_prune_low_magnitude_phi2_mul_readvariableop_resource:  [
Ideepsets_invariant_prune_low_magnitude_phi2_mul_readvariableop_1_resource:  S
Edeepsets_invariant_prune_low_magnitude_phi2_readvariableop_3_resource: Y
Gdeepsets_invariant_prune_low_magnitude_phi3_mul_readvariableop_resource:  [
Ideepsets_invariant_prune_low_magnitude_phi3_mul_readvariableop_1_resource:  S
Edeepsets_invariant_prune_low_magnitude_phi3_readvariableop_3_resource: X
Fdeepsets_invariant_prune_low_magnitude_rho_mul_readvariableop_resource:  Z
Hdeepsets_invariant_prune_low_magnitude_rho_mul_readvariableop_1_resource:  R
Ddeepsets_invariant_prune_low_magnitude_rho_readvariableop_3_resource: Z
Hdeepsets_invariant_prune_low_magnitude_dense_mul_readvariableop_resource: \
Jdeepsets_invariant_prune_low_magnitude_dense_mul_readvariableop_1_resource: Z
Ldeepsets_invariant_prune_low_magnitude_dense_biasadd_readvariableop_resource:
identity��=deepsets_invariant/prune_low_magnitude_dense/AssignVariableOp�Cdeepsets_invariant/prune_low_magnitude_dense/BiasAdd/ReadVariableOp�Bdeepsets_invariant/prune_low_magnitude_dense/MatMul/ReadVariableOp�?deepsets_invariant/prune_low_magnitude_dense/Mul/ReadVariableOp�Adeepsets_invariant/prune_low_magnitude_dense/Mul/ReadVariableOp_1�<deepsets_invariant/prune_low_magnitude_phi1/AssignVariableOp�>deepsets_invariant/prune_low_magnitude_phi1/Mul/ReadVariableOp�@deepsets_invariant/prune_low_magnitude_phi1/Mul/ReadVariableOp_1�:deepsets_invariant/prune_low_magnitude_phi1/ReadVariableOp�<deepsets_invariant/prune_low_magnitude_phi1/ReadVariableOp_1�<deepsets_invariant/prune_low_magnitude_phi1/ReadVariableOp_2�<deepsets_invariant/prune_low_magnitude_phi1/ReadVariableOp_3�<deepsets_invariant/prune_low_magnitude_phi1/ReadVariableOp_4�<deepsets_invariant/prune_low_magnitude_phi1/ReadVariableOp_5�<deepsets_invariant/prune_low_magnitude_phi2/AssignVariableOp�>deepsets_invariant/prune_low_magnitude_phi2/Mul/ReadVariableOp�@deepsets_invariant/prune_low_magnitude_phi2/Mul/ReadVariableOp_1�:deepsets_invariant/prune_low_magnitude_phi2/ReadVariableOp�<deepsets_invariant/prune_low_magnitude_phi2/ReadVariableOp_1�<deepsets_invariant/prune_low_magnitude_phi2/ReadVariableOp_2�<deepsets_invariant/prune_low_magnitude_phi2/ReadVariableOp_3�<deepsets_invariant/prune_low_magnitude_phi2/ReadVariableOp_4�<deepsets_invariant/prune_low_magnitude_phi2/ReadVariableOp_5�<deepsets_invariant/prune_low_magnitude_phi3/AssignVariableOp�>deepsets_invariant/prune_low_magnitude_phi3/Mul/ReadVariableOp�@deepsets_invariant/prune_low_magnitude_phi3/Mul/ReadVariableOp_1�:deepsets_invariant/prune_low_magnitude_phi3/ReadVariableOp�<deepsets_invariant/prune_low_magnitude_phi3/ReadVariableOp_1�<deepsets_invariant/prune_low_magnitude_phi3/ReadVariableOp_2�<deepsets_invariant/prune_low_magnitude_phi3/ReadVariableOp_3�<deepsets_invariant/prune_low_magnitude_phi3/ReadVariableOp_4�<deepsets_invariant/prune_low_magnitude_phi3/ReadVariableOp_5�;deepsets_invariant/prune_low_magnitude_rho/AssignVariableOp�=deepsets_invariant/prune_low_magnitude_rho/Mul/ReadVariableOp�?deepsets_invariant/prune_low_magnitude_rho/Mul/ReadVariableOp_1�9deepsets_invariant/prune_low_magnitude_rho/ReadVariableOp�;deepsets_invariant/prune_low_magnitude_rho/ReadVariableOp_1�;deepsets_invariant/prune_low_magnitude_rho/ReadVariableOp_2�;deepsets_invariant/prune_low_magnitude_rho/ReadVariableOp_3�;deepsets_invariant/prune_low_magnitude_rho/ReadVariableOp_4�;deepsets_invariant/prune_low_magnitude_rho/ReadVariableOp_5S
5deepsets_invariant/prune_low_magnitude_phi1/no_updateNoOp*
_output_shapes
 U
7deepsets_invariant/prune_low_magnitude_phi1/no_update_1NoOp*
_output_shapes
 �
>deepsets_invariant/prune_low_magnitude_phi1/Mul/ReadVariableOpReadVariableOpGdeepsets_invariant_prune_low_magnitude_phi1_mul_readvariableop_resource*
_output_shapes

: *
dtype0�
@deepsets_invariant/prune_low_magnitude_phi1/Mul/ReadVariableOp_1ReadVariableOpIdeepsets_invariant_prune_low_magnitude_phi1_mul_readvariableop_1_resource*
_output_shapes

: *
dtype0�
/deepsets_invariant/prune_low_magnitude_phi1/MulMulFdeepsets_invariant/prune_low_magnitude_phi1/Mul/ReadVariableOp:value:0Hdeepsets_invariant/prune_low_magnitude_phi1/Mul/ReadVariableOp_1:value:0*
T0*
_output_shapes

: �
<deepsets_invariant/prune_low_magnitude_phi1/AssignVariableOpAssignVariableOpGdeepsets_invariant_prune_low_magnitude_phi1_mul_readvariableop_resource3deepsets_invariant/prune_low_magnitude_phi1/Mul:z:0?^deepsets_invariant/prune_low_magnitude_phi1/Mul/ReadVariableOp*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�
6deepsets_invariant/prune_low_magnitude_phi1/group_depsNoOp=^deepsets_invariant/prune_low_magnitude_phi1/AssignVariableOp",/job:localhost/replica:0/task:0/device:GPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 �
8deepsets_invariant/prune_low_magnitude_phi1/group_deps_1NoOp7^deepsets_invariant/prune_low_magnitude_phi1/group_deps",/job:localhost/replica:0/task:0/device:GPU:0*
_output_shapes
 s
1deepsets_invariant/prune_low_magnitude_phi1/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :s
1deepsets_invariant/prune_low_magnitude_phi1/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : �
/deepsets_invariant/prune_low_magnitude_phi1/PowPow:deepsets_invariant/prune_low_magnitude_phi1/Pow/x:output:0:deepsets_invariant/prune_low_magnitude_phi1/Pow/y:output:0*
T0*
_output_shapes
: �
0deepsets_invariant/prune_low_magnitude_phi1/CastCast3deepsets_invariant/prune_low_magnitude_phi1/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: �
:deepsets_invariant/prune_low_magnitude_phi1/ReadVariableOpReadVariableOpGdeepsets_invariant_prune_low_magnitude_phi1_mul_readvariableop_resource=^deepsets_invariant/prune_low_magnitude_phi1/AssignVariableOp*
_output_shapes

: *
dtype0x
3deepsets_invariant/prune_low_magnitude_phi1/mul_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C�
1deepsets_invariant/prune_low_magnitude_phi1/mul_1MulBdeepsets_invariant/prune_low_magnitude_phi1/ReadVariableOp:value:0<deepsets_invariant/prune_low_magnitude_phi1/mul_1/y:output:0*
T0*
_output_shapes

: �
3deepsets_invariant/prune_low_magnitude_phi1/truedivRealDiv5deepsets_invariant/prune_low_magnitude_phi1/mul_1:z:04deepsets_invariant/prune_low_magnitude_phi1/Cast:y:0*
T0*
_output_shapes

: �
/deepsets_invariant/prune_low_magnitude_phi1/NegNeg7deepsets_invariant/prune_low_magnitude_phi1/truediv:z:0*
T0*
_output_shapes

: �
1deepsets_invariant/prune_low_magnitude_phi1/RoundRound7deepsets_invariant/prune_low_magnitude_phi1/truediv:z:0*
T0*
_output_shapes

: �
/deepsets_invariant/prune_low_magnitude_phi1/addAddV23deepsets_invariant/prune_low_magnitude_phi1/Neg:y:05deepsets_invariant/prune_low_magnitude_phi1/Round:y:0*
T0*
_output_shapes

: �
8deepsets_invariant/prune_low_magnitude_phi1/StopGradientStopGradient3deepsets_invariant/prune_low_magnitude_phi1/add:z:0*
T0*
_output_shapes

: �
1deepsets_invariant/prune_low_magnitude_phi1/add_1AddV27deepsets_invariant/prune_low_magnitude_phi1/truediv:z:0Adeepsets_invariant/prune_low_magnitude_phi1/StopGradient:output:0*
T0*
_output_shapes

: �
Cdeepsets_invariant/prune_low_magnitude_phi1/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  �B�
Adeepsets_invariant/prune_low_magnitude_phi1/clip_by_value/MinimumMinimum5deepsets_invariant/prune_low_magnitude_phi1/add_1:z:0Ldeepsets_invariant/prune_low_magnitude_phi1/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

: �
;deepsets_invariant/prune_low_magnitude_phi1/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   ��
9deepsets_invariant/prune_low_magnitude_phi1/clip_by_valueMaximumEdeepsets_invariant/prune_low_magnitude_phi1/clip_by_value/Minimum:z:0Ddeepsets_invariant/prune_low_magnitude_phi1/clip_by_value/y:output:0*
T0*
_output_shapes

: �
1deepsets_invariant/prune_low_magnitude_phi1/mul_2Mul4deepsets_invariant/prune_low_magnitude_phi1/Cast:y:0=deepsets_invariant/prune_low_magnitude_phi1/clip_by_value:z:0*
T0*
_output_shapes

: |
7deepsets_invariant/prune_low_magnitude_phi1/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C�
5deepsets_invariant/prune_low_magnitude_phi1/truediv_1RealDiv5deepsets_invariant/prune_low_magnitude_phi1/mul_2:z:0@deepsets_invariant/prune_low_magnitude_phi1/truediv_1/y:output:0*
T0*
_output_shapes

: x
3deepsets_invariant/prune_low_magnitude_phi1/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
1deepsets_invariant/prune_low_magnitude_phi1/mul_3Mul<deepsets_invariant/prune_low_magnitude_phi1/mul_3/x:output:09deepsets_invariant/prune_low_magnitude_phi1/truediv_1:z:0*
T0*
_output_shapes

: �
<deepsets_invariant/prune_low_magnitude_phi1/ReadVariableOp_1ReadVariableOpGdeepsets_invariant_prune_low_magnitude_phi1_mul_readvariableop_resource=^deepsets_invariant/prune_low_magnitude_phi1/AssignVariableOp*
_output_shapes

: *
dtype0�
1deepsets_invariant/prune_low_magnitude_phi1/Neg_1NegDdeepsets_invariant/prune_low_magnitude_phi1/ReadVariableOp_1:value:0*
T0*
_output_shapes

: �
1deepsets_invariant/prune_low_magnitude_phi1/add_2AddV25deepsets_invariant/prune_low_magnitude_phi1/Neg_1:y:05deepsets_invariant/prune_low_magnitude_phi1/mul_3:z:0*
T0*
_output_shapes

: x
3deepsets_invariant/prune_low_magnitude_phi1/mul_4/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
1deepsets_invariant/prune_low_magnitude_phi1/mul_4Mul<deepsets_invariant/prune_low_magnitude_phi1/mul_4/x:output:05deepsets_invariant/prune_low_magnitude_phi1/add_2:z:0*
T0*
_output_shapes

: �
:deepsets_invariant/prune_low_magnitude_phi1/StopGradient_1StopGradient5deepsets_invariant/prune_low_magnitude_phi1/mul_4:z:0*
T0*
_output_shapes

: �
<deepsets_invariant/prune_low_magnitude_phi1/ReadVariableOp_2ReadVariableOpGdeepsets_invariant_prune_low_magnitude_phi1_mul_readvariableop_resource=^deepsets_invariant/prune_low_magnitude_phi1/AssignVariableOp*
_output_shapes

: *
dtype0�
1deepsets_invariant/prune_low_magnitude_phi1/add_3AddV2Ddeepsets_invariant/prune_low_magnitude_phi1/ReadVariableOp_2:value:0Cdeepsets_invariant/prune_low_magnitude_phi1/StopGradient_1:output:0*
T0*
_output_shapes

: z
1deepsets_invariant/prune_low_magnitude_phi1/ShapeShapeinput_layer*
T0*
_output_shapes
::���
3deepsets_invariant/prune_low_magnitude_phi1/unstackUnpack:deepsets_invariant/prune_low_magnitude_phi1/Shape:output:0*
T0*
_output_shapes
: : : *	
num�
3deepsets_invariant/prune_low_magnitude_phi1/Shape_1Const*
_output_shapes
:*
dtype0*
valueB"       �
5deepsets_invariant/prune_low_magnitude_phi1/unstack_1Unpack<deepsets_invariant/prune_low_magnitude_phi1/Shape_1:output:0*
T0*
_output_shapes
: : *	
num�
9deepsets_invariant/prune_low_magnitude_phi1/Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB"����   �
3deepsets_invariant/prune_low_magnitude_phi1/ReshapeReshapeinput_layerBdeepsets_invariant/prune_low_magnitude_phi1/Reshape/shape:output:0*
T0*'
_output_shapes
:����������
:deepsets_invariant/prune_low_magnitude_phi1/transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       �
5deepsets_invariant/prune_low_magnitude_phi1/transpose	Transpose5deepsets_invariant/prune_low_magnitude_phi1/add_3:z:0Cdeepsets_invariant/prune_low_magnitude_phi1/transpose/perm:output:0*
T0*
_output_shapes

: �
;deepsets_invariant/prune_low_magnitude_phi1/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"   �����
5deepsets_invariant/prune_low_magnitude_phi1/Reshape_1Reshape9deepsets_invariant/prune_low_magnitude_phi1/transpose:y:0Ddeepsets_invariant/prune_low_magnitude_phi1/Reshape_1/shape:output:0*
T0*
_output_shapes

: �
2deepsets_invariant/prune_low_magnitude_phi1/MatMulMatMul<deepsets_invariant/prune_low_magnitude_phi1/Reshape:output:0>deepsets_invariant/prune_low_magnitude_phi1/Reshape_1:output:0*
T0*'
_output_shapes
:��������� 
=deepsets_invariant/prune_low_magnitude_phi1/Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B : 
=deepsets_invariant/prune_low_magnitude_phi1/Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : �
;deepsets_invariant/prune_low_magnitude_phi1/Reshape_2/shapePack<deepsets_invariant/prune_low_magnitude_phi1/unstack:output:0Fdeepsets_invariant/prune_low_magnitude_phi1/Reshape_2/shape/1:output:0Fdeepsets_invariant/prune_low_magnitude_phi1/Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:�
5deepsets_invariant/prune_low_magnitude_phi1/Reshape_2Reshape<deepsets_invariant/prune_low_magnitude_phi1/MatMul:product:0Ddeepsets_invariant/prune_low_magnitude_phi1/Reshape_2/shape:output:0*
T0*+
_output_shapes
:���������  u
3deepsets_invariant/prune_low_magnitude_phi1/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :u
3deepsets_invariant/prune_low_magnitude_phi1/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : �
1deepsets_invariant/prune_low_magnitude_phi1/Pow_1Pow<deepsets_invariant/prune_low_magnitude_phi1/Pow_1/x:output:0<deepsets_invariant/prune_low_magnitude_phi1/Pow_1/y:output:0*
T0*
_output_shapes
: �
2deepsets_invariant/prune_low_magnitude_phi1/Cast_1Cast5deepsets_invariant/prune_low_magnitude_phi1/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: �
<deepsets_invariant/prune_low_magnitude_phi1/ReadVariableOp_3ReadVariableOpEdeepsets_invariant_prune_low_magnitude_phi1_readvariableop_3_resource*
_output_shapes
: *
dtype0x
3deepsets_invariant/prune_low_magnitude_phi1/mul_5/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C�
1deepsets_invariant/prune_low_magnitude_phi1/mul_5MulDdeepsets_invariant/prune_low_magnitude_phi1/ReadVariableOp_3:value:0<deepsets_invariant/prune_low_magnitude_phi1/mul_5/y:output:0*
T0*
_output_shapes
: �
5deepsets_invariant/prune_low_magnitude_phi1/truediv_2RealDiv5deepsets_invariant/prune_low_magnitude_phi1/mul_5:z:06deepsets_invariant/prune_low_magnitude_phi1/Cast_1:y:0*
T0*
_output_shapes
: �
1deepsets_invariant/prune_low_magnitude_phi1/Neg_2Neg9deepsets_invariant/prune_low_magnitude_phi1/truediv_2:z:0*
T0*
_output_shapes
: �
3deepsets_invariant/prune_low_magnitude_phi1/Round_1Round9deepsets_invariant/prune_low_magnitude_phi1/truediv_2:z:0*
T0*
_output_shapes
: �
1deepsets_invariant/prune_low_magnitude_phi1/add_4AddV25deepsets_invariant/prune_low_magnitude_phi1/Neg_2:y:07deepsets_invariant/prune_low_magnitude_phi1/Round_1:y:0*
T0*
_output_shapes
: �
:deepsets_invariant/prune_low_magnitude_phi1/StopGradient_2StopGradient5deepsets_invariant/prune_low_magnitude_phi1/add_4:z:0*
T0*
_output_shapes
: �
1deepsets_invariant/prune_low_magnitude_phi1/add_5AddV29deepsets_invariant/prune_low_magnitude_phi1/truediv_2:z:0Cdeepsets_invariant/prune_low_magnitude_phi1/StopGradient_2:output:0*
T0*
_output_shapes
: �
Edeepsets_invariant/prune_low_magnitude_phi1/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  �B�
Cdeepsets_invariant/prune_low_magnitude_phi1/clip_by_value_1/MinimumMinimum5deepsets_invariant/prune_low_magnitude_phi1/add_5:z:0Ndeepsets_invariant/prune_low_magnitude_phi1/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: �
=deepsets_invariant/prune_low_magnitude_phi1/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   ��
;deepsets_invariant/prune_low_magnitude_phi1/clip_by_value_1MaximumGdeepsets_invariant/prune_low_magnitude_phi1/clip_by_value_1/Minimum:z:0Fdeepsets_invariant/prune_low_magnitude_phi1/clip_by_value_1/y:output:0*
T0*
_output_shapes
: �
1deepsets_invariant/prune_low_magnitude_phi1/mul_6Mul6deepsets_invariant/prune_low_magnitude_phi1/Cast_1:y:0?deepsets_invariant/prune_low_magnitude_phi1/clip_by_value_1:z:0*
T0*
_output_shapes
: |
7deepsets_invariant/prune_low_magnitude_phi1/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C�
5deepsets_invariant/prune_low_magnitude_phi1/truediv_3RealDiv5deepsets_invariant/prune_low_magnitude_phi1/mul_6:z:0@deepsets_invariant/prune_low_magnitude_phi1/truediv_3/y:output:0*
T0*
_output_shapes
: x
3deepsets_invariant/prune_low_magnitude_phi1/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
1deepsets_invariant/prune_low_magnitude_phi1/mul_7Mul<deepsets_invariant/prune_low_magnitude_phi1/mul_7/x:output:09deepsets_invariant/prune_low_magnitude_phi1/truediv_3:z:0*
T0*
_output_shapes
: �
<deepsets_invariant/prune_low_magnitude_phi1/ReadVariableOp_4ReadVariableOpEdeepsets_invariant_prune_low_magnitude_phi1_readvariableop_3_resource*
_output_shapes
: *
dtype0�
1deepsets_invariant/prune_low_magnitude_phi1/Neg_3NegDdeepsets_invariant/prune_low_magnitude_phi1/ReadVariableOp_4:value:0*
T0*
_output_shapes
: �
1deepsets_invariant/prune_low_magnitude_phi1/add_6AddV25deepsets_invariant/prune_low_magnitude_phi1/Neg_3:y:05deepsets_invariant/prune_low_magnitude_phi1/mul_7:z:0*
T0*
_output_shapes
: x
3deepsets_invariant/prune_low_magnitude_phi1/mul_8/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
1deepsets_invariant/prune_low_magnitude_phi1/mul_8Mul<deepsets_invariant/prune_low_magnitude_phi1/mul_8/x:output:05deepsets_invariant/prune_low_magnitude_phi1/add_6:z:0*
T0*
_output_shapes
: �
:deepsets_invariant/prune_low_magnitude_phi1/StopGradient_3StopGradient5deepsets_invariant/prune_low_magnitude_phi1/mul_8:z:0*
T0*
_output_shapes
: �
<deepsets_invariant/prune_low_magnitude_phi1/ReadVariableOp_5ReadVariableOpEdeepsets_invariant_prune_low_magnitude_phi1_readvariableop_3_resource*
_output_shapes
: *
dtype0�
1deepsets_invariant/prune_low_magnitude_phi1/add_7AddV2Ddeepsets_invariant/prune_low_magnitude_phi1/ReadVariableOp_5:value:0Cdeepsets_invariant/prune_low_magnitude_phi1/StopGradient_3:output:0*
T0*
_output_shapes
: �
3deepsets_invariant/prune_low_magnitude_phi1/BiasAddBiasAdd>deepsets_invariant/prune_low_magnitude_phi1/Reshape_2:output:05deepsets_invariant/prune_low_magnitude_phi1/add_7:z:0*
T0*+
_output_shapes
:���������  g
%deepsets_invariant/q_activation/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :g
%deepsets_invariant/q_activation/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :�
#deepsets_invariant/q_activation/PowPow.deepsets_invariant/q_activation/Pow/x:output:0.deepsets_invariant/q_activation/Pow/y:output:0*
T0*
_output_shapes
: �
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
value	B : �
%deepsets_invariant/q_activation/Pow_1Pow0deepsets_invariant/q_activation/Pow_1/x:output:00deepsets_invariant/q_activation/Pow_1/y:output:0*
T0*
_output_shapes
: �
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
value	B : �
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
 *   A�
#deepsets_invariant/q_activation/subSub*deepsets_invariant/q_activation/Cast_2:y:0.deepsets_invariant/q_activation/sub/y:output:0*
T0*
_output_shapes
: �
%deepsets_invariant/q_activation/Pow_2Pow.deepsets_invariant/q_activation/Const:output:0'deepsets_invariant/q_activation/sub:z:0*
T0*
_output_shapes
: �
%deepsets_invariant/q_activation/sub_1Sub*deepsets_invariant/q_activation/Cast_1:y:0)deepsets_invariant/q_activation/Pow_2:z:0*
T0*
_output_shapes
: �
)deepsets_invariant/q_activation/LessEqual	LessEqual<deepsets_invariant/prune_low_magnitude_phi1/BiasAdd:output:0)deepsets_invariant/q_activation/sub_1:z:0*
T0*+
_output_shapes
:���������  �
$deepsets_invariant/q_activation/ReluRelu<deepsets_invariant/prune_low_magnitude_phi1/BiasAdd:output:0*
T0*+
_output_shapes
:���������  �
)deepsets_invariant/q_activation/ones_likeOnesLike<deepsets_invariant/prune_low_magnitude_phi1/BiasAdd:output:0*
T0*+
_output_shapes
:���������  �
%deepsets_invariant/q_activation/sub_2Sub*deepsets_invariant/q_activation/Cast_1:y:0)deepsets_invariant/q_activation/Pow_2:z:0*
T0*
_output_shapes
: �
#deepsets_invariant/q_activation/mulMul-deepsets_invariant/q_activation/ones_like:y:0)deepsets_invariant/q_activation/sub_2:z:0*
T0*+
_output_shapes
:���������  �
(deepsets_invariant/q_activation/SelectV2SelectV2-deepsets_invariant/q_activation/LessEqual:z:02deepsets_invariant/q_activation/Relu:activations:0'deepsets_invariant/q_activation/mul:z:0*
T0*+
_output_shapes
:���������  �
%deepsets_invariant/q_activation/mul_1Mul<deepsets_invariant/prune_low_magnitude_phi1/BiasAdd:output:0(deepsets_invariant/q_activation/Cast:y:0*
T0*+
_output_shapes
:���������  �
'deepsets_invariant/q_activation/truedivRealDiv)deepsets_invariant/q_activation/mul_1:z:0*deepsets_invariant/q_activation/Cast_1:y:0*
T0*+
_output_shapes
:���������  �
#deepsets_invariant/q_activation/NegNeg+deepsets_invariant/q_activation/truediv:z:0*
T0*+
_output_shapes
:���������  �
%deepsets_invariant/q_activation/RoundRound+deepsets_invariant/q_activation/truediv:z:0*
T0*+
_output_shapes
:���������  �
#deepsets_invariant/q_activation/addAddV2'deepsets_invariant/q_activation/Neg:y:0)deepsets_invariant/q_activation/Round:y:0*
T0*+
_output_shapes
:���������  �
,deepsets_invariant/q_activation/StopGradientStopGradient'deepsets_invariant/q_activation/add:z:0*
T0*+
_output_shapes
:���������  �
%deepsets_invariant/q_activation/add_1AddV2+deepsets_invariant/q_activation/truediv:z:05deepsets_invariant/q_activation/StopGradient:output:0*
T0*+
_output_shapes
:���������  �
)deepsets_invariant/q_activation/truediv_1RealDiv)deepsets_invariant/q_activation/add_1:z:0(deepsets_invariant/q_activation/Cast:y:0*
T0*+
_output_shapes
:���������  p
+deepsets_invariant/q_activation/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
)deepsets_invariant/q_activation/truediv_2RealDiv4deepsets_invariant/q_activation/truediv_2/x:output:0(deepsets_invariant/q_activation/Cast:y:0*
T0*
_output_shapes
: l
'deepsets_invariant/q_activation/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
%deepsets_invariant/q_activation/sub_3Sub0deepsets_invariant/q_activation/sub_3/x:output:0-deepsets_invariant/q_activation/truediv_2:z:0*
T0*
_output_shapes
: �
5deepsets_invariant/q_activation/clip_by_value/MinimumMinimum-deepsets_invariant/q_activation/truediv_1:z:0)deepsets_invariant/q_activation/sub_3:z:0*
T0*+
_output_shapes
:���������  t
/deepsets_invariant/q_activation/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    �
-deepsets_invariant/q_activation/clip_by_valueMaximum9deepsets_invariant/q_activation/clip_by_value/Minimum:z:08deepsets_invariant/q_activation/clip_by_value/y:output:0*
T0*+
_output_shapes
:���������  �
%deepsets_invariant/q_activation/mul_2Mul*deepsets_invariant/q_activation/Cast_1:y:01deepsets_invariant/q_activation/clip_by_value:z:0*
T0*+
_output_shapes
:���������  �
%deepsets_invariant/q_activation/Neg_1Neg1deepsets_invariant/q_activation/SelectV2:output:0*
T0*+
_output_shapes
:���������  �
%deepsets_invariant/q_activation/add_2AddV2)deepsets_invariant/q_activation/Neg_1:y:0)deepsets_invariant/q_activation/mul_2:z:0*
T0*+
_output_shapes
:���������  l
'deepsets_invariant/q_activation/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
%deepsets_invariant/q_activation/mul_3Mul0deepsets_invariant/q_activation/mul_3/x:output:0)deepsets_invariant/q_activation/add_2:z:0*
T0*+
_output_shapes
:���������  �
.deepsets_invariant/q_activation/StopGradient_1StopGradient)deepsets_invariant/q_activation/mul_3:z:0*
T0*+
_output_shapes
:���������  �
%deepsets_invariant/q_activation/add_3AddV21deepsets_invariant/q_activation/SelectV2:output:07deepsets_invariant/q_activation/StopGradient_1:output:0*
T0*+
_output_shapes
:���������  S
5deepsets_invariant/prune_low_magnitude_phi2/no_updateNoOp*
_output_shapes
 U
7deepsets_invariant/prune_low_magnitude_phi2/no_update_1NoOp*
_output_shapes
 �
>deepsets_invariant/prune_low_magnitude_phi2/Mul/ReadVariableOpReadVariableOpGdeepsets_invariant_prune_low_magnitude_phi2_mul_readvariableop_resource*
_output_shapes

:  *
dtype0�
@deepsets_invariant/prune_low_magnitude_phi2/Mul/ReadVariableOp_1ReadVariableOpIdeepsets_invariant_prune_low_magnitude_phi2_mul_readvariableop_1_resource*
_output_shapes

:  *
dtype0�
/deepsets_invariant/prune_low_magnitude_phi2/MulMulFdeepsets_invariant/prune_low_magnitude_phi2/Mul/ReadVariableOp:value:0Hdeepsets_invariant/prune_low_magnitude_phi2/Mul/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  �
<deepsets_invariant/prune_low_magnitude_phi2/AssignVariableOpAssignVariableOpGdeepsets_invariant_prune_low_magnitude_phi2_mul_readvariableop_resource3deepsets_invariant/prune_low_magnitude_phi2/Mul:z:0?^deepsets_invariant/prune_low_magnitude_phi2/Mul/ReadVariableOp*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�
6deepsets_invariant/prune_low_magnitude_phi2/group_depsNoOp=^deepsets_invariant/prune_low_magnitude_phi2/AssignVariableOp",/job:localhost/replica:0/task:0/device:GPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 �
8deepsets_invariant/prune_low_magnitude_phi2/group_deps_1NoOp7^deepsets_invariant/prune_low_magnitude_phi2/group_deps",/job:localhost/replica:0/task:0/device:GPU:0*
_output_shapes
 s
1deepsets_invariant/prune_low_magnitude_phi2/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :s
1deepsets_invariant/prune_low_magnitude_phi2/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : �
/deepsets_invariant/prune_low_magnitude_phi2/PowPow:deepsets_invariant/prune_low_magnitude_phi2/Pow/x:output:0:deepsets_invariant/prune_low_magnitude_phi2/Pow/y:output:0*
T0*
_output_shapes
: �
0deepsets_invariant/prune_low_magnitude_phi2/CastCast3deepsets_invariant/prune_low_magnitude_phi2/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: �
:deepsets_invariant/prune_low_magnitude_phi2/ReadVariableOpReadVariableOpGdeepsets_invariant_prune_low_magnitude_phi2_mul_readvariableop_resource=^deepsets_invariant/prune_low_magnitude_phi2/AssignVariableOp*
_output_shapes

:  *
dtype0x
3deepsets_invariant/prune_low_magnitude_phi2/mul_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C�
1deepsets_invariant/prune_low_magnitude_phi2/mul_1MulBdeepsets_invariant/prune_low_magnitude_phi2/ReadVariableOp:value:0<deepsets_invariant/prune_low_magnitude_phi2/mul_1/y:output:0*
T0*
_output_shapes

:  �
3deepsets_invariant/prune_low_magnitude_phi2/truedivRealDiv5deepsets_invariant/prune_low_magnitude_phi2/mul_1:z:04deepsets_invariant/prune_low_magnitude_phi2/Cast:y:0*
T0*
_output_shapes

:  �
/deepsets_invariant/prune_low_magnitude_phi2/NegNeg7deepsets_invariant/prune_low_magnitude_phi2/truediv:z:0*
T0*
_output_shapes

:  �
1deepsets_invariant/prune_low_magnitude_phi2/RoundRound7deepsets_invariant/prune_low_magnitude_phi2/truediv:z:0*
T0*
_output_shapes

:  �
/deepsets_invariant/prune_low_magnitude_phi2/addAddV23deepsets_invariant/prune_low_magnitude_phi2/Neg:y:05deepsets_invariant/prune_low_magnitude_phi2/Round:y:0*
T0*
_output_shapes

:  �
8deepsets_invariant/prune_low_magnitude_phi2/StopGradientStopGradient3deepsets_invariant/prune_low_magnitude_phi2/add:z:0*
T0*
_output_shapes

:  �
1deepsets_invariant/prune_low_magnitude_phi2/add_1AddV27deepsets_invariant/prune_low_magnitude_phi2/truediv:z:0Adeepsets_invariant/prune_low_magnitude_phi2/StopGradient:output:0*
T0*
_output_shapes

:  �
Cdeepsets_invariant/prune_low_magnitude_phi2/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  �B�
Adeepsets_invariant/prune_low_magnitude_phi2/clip_by_value/MinimumMinimum5deepsets_invariant/prune_low_magnitude_phi2/add_1:z:0Ldeepsets_invariant/prune_low_magnitude_phi2/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  �
;deepsets_invariant/prune_low_magnitude_phi2/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   ��
9deepsets_invariant/prune_low_magnitude_phi2/clip_by_valueMaximumEdeepsets_invariant/prune_low_magnitude_phi2/clip_by_value/Minimum:z:0Ddeepsets_invariant/prune_low_magnitude_phi2/clip_by_value/y:output:0*
T0*
_output_shapes

:  �
1deepsets_invariant/prune_low_magnitude_phi2/mul_2Mul4deepsets_invariant/prune_low_magnitude_phi2/Cast:y:0=deepsets_invariant/prune_low_magnitude_phi2/clip_by_value:z:0*
T0*
_output_shapes

:  |
7deepsets_invariant/prune_low_magnitude_phi2/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C�
5deepsets_invariant/prune_low_magnitude_phi2/truediv_1RealDiv5deepsets_invariant/prune_low_magnitude_phi2/mul_2:z:0@deepsets_invariant/prune_low_magnitude_phi2/truediv_1/y:output:0*
T0*
_output_shapes

:  x
3deepsets_invariant/prune_low_magnitude_phi2/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
1deepsets_invariant/prune_low_magnitude_phi2/mul_3Mul<deepsets_invariant/prune_low_magnitude_phi2/mul_3/x:output:09deepsets_invariant/prune_low_magnitude_phi2/truediv_1:z:0*
T0*
_output_shapes

:  �
<deepsets_invariant/prune_low_magnitude_phi2/ReadVariableOp_1ReadVariableOpGdeepsets_invariant_prune_low_magnitude_phi2_mul_readvariableop_resource=^deepsets_invariant/prune_low_magnitude_phi2/AssignVariableOp*
_output_shapes

:  *
dtype0�
1deepsets_invariant/prune_low_magnitude_phi2/Neg_1NegDdeepsets_invariant/prune_low_magnitude_phi2/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  �
1deepsets_invariant/prune_low_magnitude_phi2/add_2AddV25deepsets_invariant/prune_low_magnitude_phi2/Neg_1:y:05deepsets_invariant/prune_low_magnitude_phi2/mul_3:z:0*
T0*
_output_shapes

:  x
3deepsets_invariant/prune_low_magnitude_phi2/mul_4/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
1deepsets_invariant/prune_low_magnitude_phi2/mul_4Mul<deepsets_invariant/prune_low_magnitude_phi2/mul_4/x:output:05deepsets_invariant/prune_low_magnitude_phi2/add_2:z:0*
T0*
_output_shapes

:  �
:deepsets_invariant/prune_low_magnitude_phi2/StopGradient_1StopGradient5deepsets_invariant/prune_low_magnitude_phi2/mul_4:z:0*
T0*
_output_shapes

:  �
<deepsets_invariant/prune_low_magnitude_phi2/ReadVariableOp_2ReadVariableOpGdeepsets_invariant_prune_low_magnitude_phi2_mul_readvariableop_resource=^deepsets_invariant/prune_low_magnitude_phi2/AssignVariableOp*
_output_shapes

:  *
dtype0�
1deepsets_invariant/prune_low_magnitude_phi2/add_3AddV2Ddeepsets_invariant/prune_low_magnitude_phi2/ReadVariableOp_2:value:0Cdeepsets_invariant/prune_low_magnitude_phi2/StopGradient_1:output:0*
T0*
_output_shapes

:  �
1deepsets_invariant/prune_low_magnitude_phi2/ShapeShape)deepsets_invariant/q_activation/add_3:z:0*
T0*
_output_shapes
::���
3deepsets_invariant/prune_low_magnitude_phi2/unstackUnpack:deepsets_invariant/prune_low_magnitude_phi2/Shape:output:0*
T0*
_output_shapes
: : : *	
num�
3deepsets_invariant/prune_low_magnitude_phi2/Shape_1Const*
_output_shapes
:*
dtype0*
valueB"        �
5deepsets_invariant/prune_low_magnitude_phi2/unstack_1Unpack<deepsets_invariant/prune_low_magnitude_phi2/Shape_1:output:0*
T0*
_output_shapes
: : *	
num�
9deepsets_invariant/prune_low_magnitude_phi2/Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB"����    �
3deepsets_invariant/prune_low_magnitude_phi2/ReshapeReshape)deepsets_invariant/q_activation/add_3:z:0Bdeepsets_invariant/prune_low_magnitude_phi2/Reshape/shape:output:0*
T0*'
_output_shapes
:��������� �
:deepsets_invariant/prune_low_magnitude_phi2/transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       �
5deepsets_invariant/prune_low_magnitude_phi2/transpose	Transpose5deepsets_invariant/prune_low_magnitude_phi2/add_3:z:0Cdeepsets_invariant/prune_low_magnitude_phi2/transpose/perm:output:0*
T0*
_output_shapes

:  �
;deepsets_invariant/prune_low_magnitude_phi2/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"    �����
5deepsets_invariant/prune_low_magnitude_phi2/Reshape_1Reshape9deepsets_invariant/prune_low_magnitude_phi2/transpose:y:0Ddeepsets_invariant/prune_low_magnitude_phi2/Reshape_1/shape:output:0*
T0*
_output_shapes

:  �
2deepsets_invariant/prune_low_magnitude_phi2/MatMulMatMul<deepsets_invariant/prune_low_magnitude_phi2/Reshape:output:0>deepsets_invariant/prune_low_magnitude_phi2/Reshape_1:output:0*
T0*'
_output_shapes
:��������� 
=deepsets_invariant/prune_low_magnitude_phi2/Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B : 
=deepsets_invariant/prune_low_magnitude_phi2/Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : �
;deepsets_invariant/prune_low_magnitude_phi2/Reshape_2/shapePack<deepsets_invariant/prune_low_magnitude_phi2/unstack:output:0Fdeepsets_invariant/prune_low_magnitude_phi2/Reshape_2/shape/1:output:0Fdeepsets_invariant/prune_low_magnitude_phi2/Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:�
5deepsets_invariant/prune_low_magnitude_phi2/Reshape_2Reshape<deepsets_invariant/prune_low_magnitude_phi2/MatMul:product:0Ddeepsets_invariant/prune_low_magnitude_phi2/Reshape_2/shape:output:0*
T0*+
_output_shapes
:���������  u
3deepsets_invariant/prune_low_magnitude_phi2/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :u
3deepsets_invariant/prune_low_magnitude_phi2/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : �
1deepsets_invariant/prune_low_magnitude_phi2/Pow_1Pow<deepsets_invariant/prune_low_magnitude_phi2/Pow_1/x:output:0<deepsets_invariant/prune_low_magnitude_phi2/Pow_1/y:output:0*
T0*
_output_shapes
: �
2deepsets_invariant/prune_low_magnitude_phi2/Cast_1Cast5deepsets_invariant/prune_low_magnitude_phi2/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: �
<deepsets_invariant/prune_low_magnitude_phi2/ReadVariableOp_3ReadVariableOpEdeepsets_invariant_prune_low_magnitude_phi2_readvariableop_3_resource*
_output_shapes
: *
dtype0x
3deepsets_invariant/prune_low_magnitude_phi2/mul_5/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C�
1deepsets_invariant/prune_low_magnitude_phi2/mul_5MulDdeepsets_invariant/prune_low_magnitude_phi2/ReadVariableOp_3:value:0<deepsets_invariant/prune_low_magnitude_phi2/mul_5/y:output:0*
T0*
_output_shapes
: �
5deepsets_invariant/prune_low_magnitude_phi2/truediv_2RealDiv5deepsets_invariant/prune_low_magnitude_phi2/mul_5:z:06deepsets_invariant/prune_low_magnitude_phi2/Cast_1:y:0*
T0*
_output_shapes
: �
1deepsets_invariant/prune_low_magnitude_phi2/Neg_2Neg9deepsets_invariant/prune_low_magnitude_phi2/truediv_2:z:0*
T0*
_output_shapes
: �
3deepsets_invariant/prune_low_magnitude_phi2/Round_1Round9deepsets_invariant/prune_low_magnitude_phi2/truediv_2:z:0*
T0*
_output_shapes
: �
1deepsets_invariant/prune_low_magnitude_phi2/add_4AddV25deepsets_invariant/prune_low_magnitude_phi2/Neg_2:y:07deepsets_invariant/prune_low_magnitude_phi2/Round_1:y:0*
T0*
_output_shapes
: �
:deepsets_invariant/prune_low_magnitude_phi2/StopGradient_2StopGradient5deepsets_invariant/prune_low_magnitude_phi2/add_4:z:0*
T0*
_output_shapes
: �
1deepsets_invariant/prune_low_magnitude_phi2/add_5AddV29deepsets_invariant/prune_low_magnitude_phi2/truediv_2:z:0Cdeepsets_invariant/prune_low_magnitude_phi2/StopGradient_2:output:0*
T0*
_output_shapes
: �
Edeepsets_invariant/prune_low_magnitude_phi2/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  �B�
Cdeepsets_invariant/prune_low_magnitude_phi2/clip_by_value_1/MinimumMinimum5deepsets_invariant/prune_low_magnitude_phi2/add_5:z:0Ndeepsets_invariant/prune_low_magnitude_phi2/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: �
=deepsets_invariant/prune_low_magnitude_phi2/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   ��
;deepsets_invariant/prune_low_magnitude_phi2/clip_by_value_1MaximumGdeepsets_invariant/prune_low_magnitude_phi2/clip_by_value_1/Minimum:z:0Fdeepsets_invariant/prune_low_magnitude_phi2/clip_by_value_1/y:output:0*
T0*
_output_shapes
: �
1deepsets_invariant/prune_low_magnitude_phi2/mul_6Mul6deepsets_invariant/prune_low_magnitude_phi2/Cast_1:y:0?deepsets_invariant/prune_low_magnitude_phi2/clip_by_value_1:z:0*
T0*
_output_shapes
: |
7deepsets_invariant/prune_low_magnitude_phi2/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C�
5deepsets_invariant/prune_low_magnitude_phi2/truediv_3RealDiv5deepsets_invariant/prune_low_magnitude_phi2/mul_6:z:0@deepsets_invariant/prune_low_magnitude_phi2/truediv_3/y:output:0*
T0*
_output_shapes
: x
3deepsets_invariant/prune_low_magnitude_phi2/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
1deepsets_invariant/prune_low_magnitude_phi2/mul_7Mul<deepsets_invariant/prune_low_magnitude_phi2/mul_7/x:output:09deepsets_invariant/prune_low_magnitude_phi2/truediv_3:z:0*
T0*
_output_shapes
: �
<deepsets_invariant/prune_low_magnitude_phi2/ReadVariableOp_4ReadVariableOpEdeepsets_invariant_prune_low_magnitude_phi2_readvariableop_3_resource*
_output_shapes
: *
dtype0�
1deepsets_invariant/prune_low_magnitude_phi2/Neg_3NegDdeepsets_invariant/prune_low_magnitude_phi2/ReadVariableOp_4:value:0*
T0*
_output_shapes
: �
1deepsets_invariant/prune_low_magnitude_phi2/add_6AddV25deepsets_invariant/prune_low_magnitude_phi2/Neg_3:y:05deepsets_invariant/prune_low_magnitude_phi2/mul_7:z:0*
T0*
_output_shapes
: x
3deepsets_invariant/prune_low_magnitude_phi2/mul_8/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
1deepsets_invariant/prune_low_magnitude_phi2/mul_8Mul<deepsets_invariant/prune_low_magnitude_phi2/mul_8/x:output:05deepsets_invariant/prune_low_magnitude_phi2/add_6:z:0*
T0*
_output_shapes
: �
:deepsets_invariant/prune_low_magnitude_phi2/StopGradient_3StopGradient5deepsets_invariant/prune_low_magnitude_phi2/mul_8:z:0*
T0*
_output_shapes
: �
<deepsets_invariant/prune_low_magnitude_phi2/ReadVariableOp_5ReadVariableOpEdeepsets_invariant_prune_low_magnitude_phi2_readvariableop_3_resource*
_output_shapes
: *
dtype0�
1deepsets_invariant/prune_low_magnitude_phi2/add_7AddV2Ddeepsets_invariant/prune_low_magnitude_phi2/ReadVariableOp_5:value:0Cdeepsets_invariant/prune_low_magnitude_phi2/StopGradient_3:output:0*
T0*
_output_shapes
: �
3deepsets_invariant/prune_low_magnitude_phi2/BiasAddBiasAdd>deepsets_invariant/prune_low_magnitude_phi2/Reshape_2:output:05deepsets_invariant/prune_low_magnitude_phi2/add_7:z:0*
T0*+
_output_shapes
:���������  i
'deepsets_invariant/q_activation_1/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :i
'deepsets_invariant/q_activation_1/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :�
%deepsets_invariant/q_activation_1/PowPow0deepsets_invariant/q_activation_1/Pow/x:output:00deepsets_invariant/q_activation_1/Pow/y:output:0*
T0*
_output_shapes
: �
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
value	B : �
'deepsets_invariant/q_activation_1/Pow_1Pow2deepsets_invariant/q_activation_1/Pow_1/x:output:02deepsets_invariant/q_activation_1/Pow_1/y:output:0*
T0*
_output_shapes
: �
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
value	B : �
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
 *   A�
%deepsets_invariant/q_activation_1/subSub,deepsets_invariant/q_activation_1/Cast_2:y:00deepsets_invariant/q_activation_1/sub/y:output:0*
T0*
_output_shapes
: �
'deepsets_invariant/q_activation_1/Pow_2Pow0deepsets_invariant/q_activation_1/Const:output:0)deepsets_invariant/q_activation_1/sub:z:0*
T0*
_output_shapes
: �
'deepsets_invariant/q_activation_1/sub_1Sub,deepsets_invariant/q_activation_1/Cast_1:y:0+deepsets_invariant/q_activation_1/Pow_2:z:0*
T0*
_output_shapes
: �
+deepsets_invariant/q_activation_1/LessEqual	LessEqual<deepsets_invariant/prune_low_magnitude_phi2/BiasAdd:output:0+deepsets_invariant/q_activation_1/sub_1:z:0*
T0*+
_output_shapes
:���������  �
&deepsets_invariant/q_activation_1/ReluRelu<deepsets_invariant/prune_low_magnitude_phi2/BiasAdd:output:0*
T0*+
_output_shapes
:���������  �
+deepsets_invariant/q_activation_1/ones_likeOnesLike<deepsets_invariant/prune_low_magnitude_phi2/BiasAdd:output:0*
T0*+
_output_shapes
:���������  �
'deepsets_invariant/q_activation_1/sub_2Sub,deepsets_invariant/q_activation_1/Cast_1:y:0+deepsets_invariant/q_activation_1/Pow_2:z:0*
T0*
_output_shapes
: �
%deepsets_invariant/q_activation_1/mulMul/deepsets_invariant/q_activation_1/ones_like:y:0+deepsets_invariant/q_activation_1/sub_2:z:0*
T0*+
_output_shapes
:���������  �
*deepsets_invariant/q_activation_1/SelectV2SelectV2/deepsets_invariant/q_activation_1/LessEqual:z:04deepsets_invariant/q_activation_1/Relu:activations:0)deepsets_invariant/q_activation_1/mul:z:0*
T0*+
_output_shapes
:���������  �
'deepsets_invariant/q_activation_1/mul_1Mul<deepsets_invariant/prune_low_magnitude_phi2/BiasAdd:output:0*deepsets_invariant/q_activation_1/Cast:y:0*
T0*+
_output_shapes
:���������  �
)deepsets_invariant/q_activation_1/truedivRealDiv+deepsets_invariant/q_activation_1/mul_1:z:0,deepsets_invariant/q_activation_1/Cast_1:y:0*
T0*+
_output_shapes
:���������  �
%deepsets_invariant/q_activation_1/NegNeg-deepsets_invariant/q_activation_1/truediv:z:0*
T0*+
_output_shapes
:���������  �
'deepsets_invariant/q_activation_1/RoundRound-deepsets_invariant/q_activation_1/truediv:z:0*
T0*+
_output_shapes
:���������  �
%deepsets_invariant/q_activation_1/addAddV2)deepsets_invariant/q_activation_1/Neg:y:0+deepsets_invariant/q_activation_1/Round:y:0*
T0*+
_output_shapes
:���������  �
.deepsets_invariant/q_activation_1/StopGradientStopGradient)deepsets_invariant/q_activation_1/add:z:0*
T0*+
_output_shapes
:���������  �
'deepsets_invariant/q_activation_1/add_1AddV2-deepsets_invariant/q_activation_1/truediv:z:07deepsets_invariant/q_activation_1/StopGradient:output:0*
T0*+
_output_shapes
:���������  �
+deepsets_invariant/q_activation_1/truediv_1RealDiv+deepsets_invariant/q_activation_1/add_1:z:0*deepsets_invariant/q_activation_1/Cast:y:0*
T0*+
_output_shapes
:���������  r
-deepsets_invariant/q_activation_1/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
+deepsets_invariant/q_activation_1/truediv_2RealDiv6deepsets_invariant/q_activation_1/truediv_2/x:output:0*deepsets_invariant/q_activation_1/Cast:y:0*
T0*
_output_shapes
: n
)deepsets_invariant/q_activation_1/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
'deepsets_invariant/q_activation_1/sub_3Sub2deepsets_invariant/q_activation_1/sub_3/x:output:0/deepsets_invariant/q_activation_1/truediv_2:z:0*
T0*
_output_shapes
: �
7deepsets_invariant/q_activation_1/clip_by_value/MinimumMinimum/deepsets_invariant/q_activation_1/truediv_1:z:0+deepsets_invariant/q_activation_1/sub_3:z:0*
T0*+
_output_shapes
:���������  v
1deepsets_invariant/q_activation_1/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    �
/deepsets_invariant/q_activation_1/clip_by_valueMaximum;deepsets_invariant/q_activation_1/clip_by_value/Minimum:z:0:deepsets_invariant/q_activation_1/clip_by_value/y:output:0*
T0*+
_output_shapes
:���������  �
'deepsets_invariant/q_activation_1/mul_2Mul,deepsets_invariant/q_activation_1/Cast_1:y:03deepsets_invariant/q_activation_1/clip_by_value:z:0*
T0*+
_output_shapes
:���������  �
'deepsets_invariant/q_activation_1/Neg_1Neg3deepsets_invariant/q_activation_1/SelectV2:output:0*
T0*+
_output_shapes
:���������  �
'deepsets_invariant/q_activation_1/add_2AddV2+deepsets_invariant/q_activation_1/Neg_1:y:0+deepsets_invariant/q_activation_1/mul_2:z:0*
T0*+
_output_shapes
:���������  n
)deepsets_invariant/q_activation_1/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
'deepsets_invariant/q_activation_1/mul_3Mul2deepsets_invariant/q_activation_1/mul_3/x:output:0+deepsets_invariant/q_activation_1/add_2:z:0*
T0*+
_output_shapes
:���������  �
0deepsets_invariant/q_activation_1/StopGradient_1StopGradient+deepsets_invariant/q_activation_1/mul_3:z:0*
T0*+
_output_shapes
:���������  �
'deepsets_invariant/q_activation_1/add_3AddV23deepsets_invariant/q_activation_1/SelectV2:output:09deepsets_invariant/q_activation_1/StopGradient_1:output:0*
T0*+
_output_shapes
:���������  S
5deepsets_invariant/prune_low_magnitude_phi3/no_updateNoOp*
_output_shapes
 U
7deepsets_invariant/prune_low_magnitude_phi3/no_update_1NoOp*
_output_shapes
 �
>deepsets_invariant/prune_low_magnitude_phi3/Mul/ReadVariableOpReadVariableOpGdeepsets_invariant_prune_low_magnitude_phi3_mul_readvariableop_resource*
_output_shapes

:  *
dtype0�
@deepsets_invariant/prune_low_magnitude_phi3/Mul/ReadVariableOp_1ReadVariableOpIdeepsets_invariant_prune_low_magnitude_phi3_mul_readvariableop_1_resource*
_output_shapes

:  *
dtype0�
/deepsets_invariant/prune_low_magnitude_phi3/MulMulFdeepsets_invariant/prune_low_magnitude_phi3/Mul/ReadVariableOp:value:0Hdeepsets_invariant/prune_low_magnitude_phi3/Mul/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  �
<deepsets_invariant/prune_low_magnitude_phi3/AssignVariableOpAssignVariableOpGdeepsets_invariant_prune_low_magnitude_phi3_mul_readvariableop_resource3deepsets_invariant/prune_low_magnitude_phi3/Mul:z:0?^deepsets_invariant/prune_low_magnitude_phi3/Mul/ReadVariableOp*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�
6deepsets_invariant/prune_low_magnitude_phi3/group_depsNoOp=^deepsets_invariant/prune_low_magnitude_phi3/AssignVariableOp",/job:localhost/replica:0/task:0/device:GPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 �
8deepsets_invariant/prune_low_magnitude_phi3/group_deps_1NoOp7^deepsets_invariant/prune_low_magnitude_phi3/group_deps",/job:localhost/replica:0/task:0/device:GPU:0*
_output_shapes
 s
1deepsets_invariant/prune_low_magnitude_phi3/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :s
1deepsets_invariant/prune_low_magnitude_phi3/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : �
/deepsets_invariant/prune_low_magnitude_phi3/PowPow:deepsets_invariant/prune_low_magnitude_phi3/Pow/x:output:0:deepsets_invariant/prune_low_magnitude_phi3/Pow/y:output:0*
T0*
_output_shapes
: �
0deepsets_invariant/prune_low_magnitude_phi3/CastCast3deepsets_invariant/prune_low_magnitude_phi3/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: �
:deepsets_invariant/prune_low_magnitude_phi3/ReadVariableOpReadVariableOpGdeepsets_invariant_prune_low_magnitude_phi3_mul_readvariableop_resource=^deepsets_invariant/prune_low_magnitude_phi3/AssignVariableOp*
_output_shapes

:  *
dtype0x
3deepsets_invariant/prune_low_magnitude_phi3/mul_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C�
1deepsets_invariant/prune_low_magnitude_phi3/mul_1MulBdeepsets_invariant/prune_low_magnitude_phi3/ReadVariableOp:value:0<deepsets_invariant/prune_low_magnitude_phi3/mul_1/y:output:0*
T0*
_output_shapes

:  �
3deepsets_invariant/prune_low_magnitude_phi3/truedivRealDiv5deepsets_invariant/prune_low_magnitude_phi3/mul_1:z:04deepsets_invariant/prune_low_magnitude_phi3/Cast:y:0*
T0*
_output_shapes

:  �
/deepsets_invariant/prune_low_magnitude_phi3/NegNeg7deepsets_invariant/prune_low_magnitude_phi3/truediv:z:0*
T0*
_output_shapes

:  �
1deepsets_invariant/prune_low_magnitude_phi3/RoundRound7deepsets_invariant/prune_low_magnitude_phi3/truediv:z:0*
T0*
_output_shapes

:  �
/deepsets_invariant/prune_low_magnitude_phi3/addAddV23deepsets_invariant/prune_low_magnitude_phi3/Neg:y:05deepsets_invariant/prune_low_magnitude_phi3/Round:y:0*
T0*
_output_shapes

:  �
8deepsets_invariant/prune_low_magnitude_phi3/StopGradientStopGradient3deepsets_invariant/prune_low_magnitude_phi3/add:z:0*
T0*
_output_shapes

:  �
1deepsets_invariant/prune_low_magnitude_phi3/add_1AddV27deepsets_invariant/prune_low_magnitude_phi3/truediv:z:0Adeepsets_invariant/prune_low_magnitude_phi3/StopGradient:output:0*
T0*
_output_shapes

:  �
Cdeepsets_invariant/prune_low_magnitude_phi3/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  �B�
Adeepsets_invariant/prune_low_magnitude_phi3/clip_by_value/MinimumMinimum5deepsets_invariant/prune_low_magnitude_phi3/add_1:z:0Ldeepsets_invariant/prune_low_magnitude_phi3/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  �
;deepsets_invariant/prune_low_magnitude_phi3/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   ��
9deepsets_invariant/prune_low_magnitude_phi3/clip_by_valueMaximumEdeepsets_invariant/prune_low_magnitude_phi3/clip_by_value/Minimum:z:0Ddeepsets_invariant/prune_low_magnitude_phi3/clip_by_value/y:output:0*
T0*
_output_shapes

:  �
1deepsets_invariant/prune_low_magnitude_phi3/mul_2Mul4deepsets_invariant/prune_low_magnitude_phi3/Cast:y:0=deepsets_invariant/prune_low_magnitude_phi3/clip_by_value:z:0*
T0*
_output_shapes

:  |
7deepsets_invariant/prune_low_magnitude_phi3/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C�
5deepsets_invariant/prune_low_magnitude_phi3/truediv_1RealDiv5deepsets_invariant/prune_low_magnitude_phi3/mul_2:z:0@deepsets_invariant/prune_low_magnitude_phi3/truediv_1/y:output:0*
T0*
_output_shapes

:  x
3deepsets_invariant/prune_low_magnitude_phi3/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
1deepsets_invariant/prune_low_magnitude_phi3/mul_3Mul<deepsets_invariant/prune_low_magnitude_phi3/mul_3/x:output:09deepsets_invariant/prune_low_magnitude_phi3/truediv_1:z:0*
T0*
_output_shapes

:  �
<deepsets_invariant/prune_low_magnitude_phi3/ReadVariableOp_1ReadVariableOpGdeepsets_invariant_prune_low_magnitude_phi3_mul_readvariableop_resource=^deepsets_invariant/prune_low_magnitude_phi3/AssignVariableOp*
_output_shapes

:  *
dtype0�
1deepsets_invariant/prune_low_magnitude_phi3/Neg_1NegDdeepsets_invariant/prune_low_magnitude_phi3/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  �
1deepsets_invariant/prune_low_magnitude_phi3/add_2AddV25deepsets_invariant/prune_low_magnitude_phi3/Neg_1:y:05deepsets_invariant/prune_low_magnitude_phi3/mul_3:z:0*
T0*
_output_shapes

:  x
3deepsets_invariant/prune_low_magnitude_phi3/mul_4/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
1deepsets_invariant/prune_low_magnitude_phi3/mul_4Mul<deepsets_invariant/prune_low_magnitude_phi3/mul_4/x:output:05deepsets_invariant/prune_low_magnitude_phi3/add_2:z:0*
T0*
_output_shapes

:  �
:deepsets_invariant/prune_low_magnitude_phi3/StopGradient_1StopGradient5deepsets_invariant/prune_low_magnitude_phi3/mul_4:z:0*
T0*
_output_shapes

:  �
<deepsets_invariant/prune_low_magnitude_phi3/ReadVariableOp_2ReadVariableOpGdeepsets_invariant_prune_low_magnitude_phi3_mul_readvariableop_resource=^deepsets_invariant/prune_low_magnitude_phi3/AssignVariableOp*
_output_shapes

:  *
dtype0�
1deepsets_invariant/prune_low_magnitude_phi3/add_3AddV2Ddeepsets_invariant/prune_low_magnitude_phi3/ReadVariableOp_2:value:0Cdeepsets_invariant/prune_low_magnitude_phi3/StopGradient_1:output:0*
T0*
_output_shapes

:  �
1deepsets_invariant/prune_low_magnitude_phi3/ShapeShape+deepsets_invariant/q_activation_1/add_3:z:0*
T0*
_output_shapes
::���
3deepsets_invariant/prune_low_magnitude_phi3/unstackUnpack:deepsets_invariant/prune_low_magnitude_phi3/Shape:output:0*
T0*
_output_shapes
: : : *	
num�
3deepsets_invariant/prune_low_magnitude_phi3/Shape_1Const*
_output_shapes
:*
dtype0*
valueB"        �
5deepsets_invariant/prune_low_magnitude_phi3/unstack_1Unpack<deepsets_invariant/prune_low_magnitude_phi3/Shape_1:output:0*
T0*
_output_shapes
: : *	
num�
9deepsets_invariant/prune_low_magnitude_phi3/Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB"����    �
3deepsets_invariant/prune_low_magnitude_phi3/ReshapeReshape+deepsets_invariant/q_activation_1/add_3:z:0Bdeepsets_invariant/prune_low_magnitude_phi3/Reshape/shape:output:0*
T0*'
_output_shapes
:��������� �
:deepsets_invariant/prune_low_magnitude_phi3/transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       �
5deepsets_invariant/prune_low_magnitude_phi3/transpose	Transpose5deepsets_invariant/prune_low_magnitude_phi3/add_3:z:0Cdeepsets_invariant/prune_low_magnitude_phi3/transpose/perm:output:0*
T0*
_output_shapes

:  �
;deepsets_invariant/prune_low_magnitude_phi3/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"    �����
5deepsets_invariant/prune_low_magnitude_phi3/Reshape_1Reshape9deepsets_invariant/prune_low_magnitude_phi3/transpose:y:0Ddeepsets_invariant/prune_low_magnitude_phi3/Reshape_1/shape:output:0*
T0*
_output_shapes

:  �
2deepsets_invariant/prune_low_magnitude_phi3/MatMulMatMul<deepsets_invariant/prune_low_magnitude_phi3/Reshape:output:0>deepsets_invariant/prune_low_magnitude_phi3/Reshape_1:output:0*
T0*'
_output_shapes
:��������� 
=deepsets_invariant/prune_low_magnitude_phi3/Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B : 
=deepsets_invariant/prune_low_magnitude_phi3/Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : �
;deepsets_invariant/prune_low_magnitude_phi3/Reshape_2/shapePack<deepsets_invariant/prune_low_magnitude_phi3/unstack:output:0Fdeepsets_invariant/prune_low_magnitude_phi3/Reshape_2/shape/1:output:0Fdeepsets_invariant/prune_low_magnitude_phi3/Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:�
5deepsets_invariant/prune_low_magnitude_phi3/Reshape_2Reshape<deepsets_invariant/prune_low_magnitude_phi3/MatMul:product:0Ddeepsets_invariant/prune_low_magnitude_phi3/Reshape_2/shape:output:0*
T0*+
_output_shapes
:���������  u
3deepsets_invariant/prune_low_magnitude_phi3/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :u
3deepsets_invariant/prune_low_magnitude_phi3/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : �
1deepsets_invariant/prune_low_magnitude_phi3/Pow_1Pow<deepsets_invariant/prune_low_magnitude_phi3/Pow_1/x:output:0<deepsets_invariant/prune_low_magnitude_phi3/Pow_1/y:output:0*
T0*
_output_shapes
: �
2deepsets_invariant/prune_low_magnitude_phi3/Cast_1Cast5deepsets_invariant/prune_low_magnitude_phi3/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: �
<deepsets_invariant/prune_low_magnitude_phi3/ReadVariableOp_3ReadVariableOpEdeepsets_invariant_prune_low_magnitude_phi3_readvariableop_3_resource*
_output_shapes
: *
dtype0x
3deepsets_invariant/prune_low_magnitude_phi3/mul_5/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C�
1deepsets_invariant/prune_low_magnitude_phi3/mul_5MulDdeepsets_invariant/prune_low_magnitude_phi3/ReadVariableOp_3:value:0<deepsets_invariant/prune_low_magnitude_phi3/mul_5/y:output:0*
T0*
_output_shapes
: �
5deepsets_invariant/prune_low_magnitude_phi3/truediv_2RealDiv5deepsets_invariant/prune_low_magnitude_phi3/mul_5:z:06deepsets_invariant/prune_low_magnitude_phi3/Cast_1:y:0*
T0*
_output_shapes
: �
1deepsets_invariant/prune_low_magnitude_phi3/Neg_2Neg9deepsets_invariant/prune_low_magnitude_phi3/truediv_2:z:0*
T0*
_output_shapes
: �
3deepsets_invariant/prune_low_magnitude_phi3/Round_1Round9deepsets_invariant/prune_low_magnitude_phi3/truediv_2:z:0*
T0*
_output_shapes
: �
1deepsets_invariant/prune_low_magnitude_phi3/add_4AddV25deepsets_invariant/prune_low_magnitude_phi3/Neg_2:y:07deepsets_invariant/prune_low_magnitude_phi3/Round_1:y:0*
T0*
_output_shapes
: �
:deepsets_invariant/prune_low_magnitude_phi3/StopGradient_2StopGradient5deepsets_invariant/prune_low_magnitude_phi3/add_4:z:0*
T0*
_output_shapes
: �
1deepsets_invariant/prune_low_magnitude_phi3/add_5AddV29deepsets_invariant/prune_low_magnitude_phi3/truediv_2:z:0Cdeepsets_invariant/prune_low_magnitude_phi3/StopGradient_2:output:0*
T0*
_output_shapes
: �
Edeepsets_invariant/prune_low_magnitude_phi3/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  �B�
Cdeepsets_invariant/prune_low_magnitude_phi3/clip_by_value_1/MinimumMinimum5deepsets_invariant/prune_low_magnitude_phi3/add_5:z:0Ndeepsets_invariant/prune_low_magnitude_phi3/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: �
=deepsets_invariant/prune_low_magnitude_phi3/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   ��
;deepsets_invariant/prune_low_magnitude_phi3/clip_by_value_1MaximumGdeepsets_invariant/prune_low_magnitude_phi3/clip_by_value_1/Minimum:z:0Fdeepsets_invariant/prune_low_magnitude_phi3/clip_by_value_1/y:output:0*
T0*
_output_shapes
: �
1deepsets_invariant/prune_low_magnitude_phi3/mul_6Mul6deepsets_invariant/prune_low_magnitude_phi3/Cast_1:y:0?deepsets_invariant/prune_low_magnitude_phi3/clip_by_value_1:z:0*
T0*
_output_shapes
: |
7deepsets_invariant/prune_low_magnitude_phi3/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C�
5deepsets_invariant/prune_low_magnitude_phi3/truediv_3RealDiv5deepsets_invariant/prune_low_magnitude_phi3/mul_6:z:0@deepsets_invariant/prune_low_magnitude_phi3/truediv_3/y:output:0*
T0*
_output_shapes
: x
3deepsets_invariant/prune_low_magnitude_phi3/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
1deepsets_invariant/prune_low_magnitude_phi3/mul_7Mul<deepsets_invariant/prune_low_magnitude_phi3/mul_7/x:output:09deepsets_invariant/prune_low_magnitude_phi3/truediv_3:z:0*
T0*
_output_shapes
: �
<deepsets_invariant/prune_low_magnitude_phi3/ReadVariableOp_4ReadVariableOpEdeepsets_invariant_prune_low_magnitude_phi3_readvariableop_3_resource*
_output_shapes
: *
dtype0�
1deepsets_invariant/prune_low_magnitude_phi3/Neg_3NegDdeepsets_invariant/prune_low_magnitude_phi3/ReadVariableOp_4:value:0*
T0*
_output_shapes
: �
1deepsets_invariant/prune_low_magnitude_phi3/add_6AddV25deepsets_invariant/prune_low_magnitude_phi3/Neg_3:y:05deepsets_invariant/prune_low_magnitude_phi3/mul_7:z:0*
T0*
_output_shapes
: x
3deepsets_invariant/prune_low_magnitude_phi3/mul_8/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
1deepsets_invariant/prune_low_magnitude_phi3/mul_8Mul<deepsets_invariant/prune_low_magnitude_phi3/mul_8/x:output:05deepsets_invariant/prune_low_magnitude_phi3/add_6:z:0*
T0*
_output_shapes
: �
:deepsets_invariant/prune_low_magnitude_phi3/StopGradient_3StopGradient5deepsets_invariant/prune_low_magnitude_phi3/mul_8:z:0*
T0*
_output_shapes
: �
<deepsets_invariant/prune_low_magnitude_phi3/ReadVariableOp_5ReadVariableOpEdeepsets_invariant_prune_low_magnitude_phi3_readvariableop_3_resource*
_output_shapes
: *
dtype0�
1deepsets_invariant/prune_low_magnitude_phi3/add_7AddV2Ddeepsets_invariant/prune_low_magnitude_phi3/ReadVariableOp_5:value:0Cdeepsets_invariant/prune_low_magnitude_phi3/StopGradient_3:output:0*
T0*
_output_shapes
: �
3deepsets_invariant/prune_low_magnitude_phi3/BiasAddBiasAdd>deepsets_invariant/prune_low_magnitude_phi3/Reshape_2:output:05deepsets_invariant/prune_low_magnitude_phi3/add_7:z:0*
T0*+
_output_shapes
:���������  i
'deepsets_invariant/q_activation_2/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :i
'deepsets_invariant/q_activation_2/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :�
%deepsets_invariant/q_activation_2/PowPow0deepsets_invariant/q_activation_2/Pow/x:output:00deepsets_invariant/q_activation_2/Pow/y:output:0*
T0*
_output_shapes
: �
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
value	B : �
'deepsets_invariant/q_activation_2/Pow_1Pow2deepsets_invariant/q_activation_2/Pow_1/x:output:02deepsets_invariant/q_activation_2/Pow_1/y:output:0*
T0*
_output_shapes
: �
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
value	B : �
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
 *   A�
%deepsets_invariant/q_activation_2/subSub,deepsets_invariant/q_activation_2/Cast_2:y:00deepsets_invariant/q_activation_2/sub/y:output:0*
T0*
_output_shapes
: �
'deepsets_invariant/q_activation_2/Pow_2Pow0deepsets_invariant/q_activation_2/Const:output:0)deepsets_invariant/q_activation_2/sub:z:0*
T0*
_output_shapes
: �
'deepsets_invariant/q_activation_2/sub_1Sub,deepsets_invariant/q_activation_2/Cast_1:y:0+deepsets_invariant/q_activation_2/Pow_2:z:0*
T0*
_output_shapes
: �
+deepsets_invariant/q_activation_2/LessEqual	LessEqual<deepsets_invariant/prune_low_magnitude_phi3/BiasAdd:output:0+deepsets_invariant/q_activation_2/sub_1:z:0*
T0*+
_output_shapes
:���������  �
&deepsets_invariant/q_activation_2/ReluRelu<deepsets_invariant/prune_low_magnitude_phi3/BiasAdd:output:0*
T0*+
_output_shapes
:���������  �
+deepsets_invariant/q_activation_2/ones_likeOnesLike<deepsets_invariant/prune_low_magnitude_phi3/BiasAdd:output:0*
T0*+
_output_shapes
:���������  �
'deepsets_invariant/q_activation_2/sub_2Sub,deepsets_invariant/q_activation_2/Cast_1:y:0+deepsets_invariant/q_activation_2/Pow_2:z:0*
T0*
_output_shapes
: �
%deepsets_invariant/q_activation_2/mulMul/deepsets_invariant/q_activation_2/ones_like:y:0+deepsets_invariant/q_activation_2/sub_2:z:0*
T0*+
_output_shapes
:���������  �
*deepsets_invariant/q_activation_2/SelectV2SelectV2/deepsets_invariant/q_activation_2/LessEqual:z:04deepsets_invariant/q_activation_2/Relu:activations:0)deepsets_invariant/q_activation_2/mul:z:0*
T0*+
_output_shapes
:���������  �
'deepsets_invariant/q_activation_2/mul_1Mul<deepsets_invariant/prune_low_magnitude_phi3/BiasAdd:output:0*deepsets_invariant/q_activation_2/Cast:y:0*
T0*+
_output_shapes
:���������  �
)deepsets_invariant/q_activation_2/truedivRealDiv+deepsets_invariant/q_activation_2/mul_1:z:0,deepsets_invariant/q_activation_2/Cast_1:y:0*
T0*+
_output_shapes
:���������  �
%deepsets_invariant/q_activation_2/NegNeg-deepsets_invariant/q_activation_2/truediv:z:0*
T0*+
_output_shapes
:���������  �
'deepsets_invariant/q_activation_2/RoundRound-deepsets_invariant/q_activation_2/truediv:z:0*
T0*+
_output_shapes
:���������  �
%deepsets_invariant/q_activation_2/addAddV2)deepsets_invariant/q_activation_2/Neg:y:0+deepsets_invariant/q_activation_2/Round:y:0*
T0*+
_output_shapes
:���������  �
.deepsets_invariant/q_activation_2/StopGradientStopGradient)deepsets_invariant/q_activation_2/add:z:0*
T0*+
_output_shapes
:���������  �
'deepsets_invariant/q_activation_2/add_1AddV2-deepsets_invariant/q_activation_2/truediv:z:07deepsets_invariant/q_activation_2/StopGradient:output:0*
T0*+
_output_shapes
:���������  �
+deepsets_invariant/q_activation_2/truediv_1RealDiv+deepsets_invariant/q_activation_2/add_1:z:0*deepsets_invariant/q_activation_2/Cast:y:0*
T0*+
_output_shapes
:���������  r
-deepsets_invariant/q_activation_2/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
+deepsets_invariant/q_activation_2/truediv_2RealDiv6deepsets_invariant/q_activation_2/truediv_2/x:output:0*deepsets_invariant/q_activation_2/Cast:y:0*
T0*
_output_shapes
: n
)deepsets_invariant/q_activation_2/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
'deepsets_invariant/q_activation_2/sub_3Sub2deepsets_invariant/q_activation_2/sub_3/x:output:0/deepsets_invariant/q_activation_2/truediv_2:z:0*
T0*
_output_shapes
: �
7deepsets_invariant/q_activation_2/clip_by_value/MinimumMinimum/deepsets_invariant/q_activation_2/truediv_1:z:0+deepsets_invariant/q_activation_2/sub_3:z:0*
T0*+
_output_shapes
:���������  v
1deepsets_invariant/q_activation_2/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    �
/deepsets_invariant/q_activation_2/clip_by_valueMaximum;deepsets_invariant/q_activation_2/clip_by_value/Minimum:z:0:deepsets_invariant/q_activation_2/clip_by_value/y:output:0*
T0*+
_output_shapes
:���������  �
'deepsets_invariant/q_activation_2/mul_2Mul,deepsets_invariant/q_activation_2/Cast_1:y:03deepsets_invariant/q_activation_2/clip_by_value:z:0*
T0*+
_output_shapes
:���������  �
'deepsets_invariant/q_activation_2/Neg_1Neg3deepsets_invariant/q_activation_2/SelectV2:output:0*
T0*+
_output_shapes
:���������  �
'deepsets_invariant/q_activation_2/add_2AddV2+deepsets_invariant/q_activation_2/Neg_1:y:0+deepsets_invariant/q_activation_2/mul_2:z:0*
T0*+
_output_shapes
:���������  n
)deepsets_invariant/q_activation_2/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
'deepsets_invariant/q_activation_2/mul_3Mul2deepsets_invariant/q_activation_2/mul_3/x:output:0+deepsets_invariant/q_activation_2/add_2:z:0*
T0*+
_output_shapes
:���������  �
0deepsets_invariant/q_activation_2/StopGradient_1StopGradient+deepsets_invariant/q_activation_2/mul_3:z:0*
T0*+
_output_shapes
:���������  �
'deepsets_invariant/q_activation_2/add_3AddV23deepsets_invariant/q_activation_2/SelectV2:output:09deepsets_invariant/q_activation_2/StopGradient_1:output:0*
T0*+
_output_shapes
:���������  i
'deepsets_invariant/q_activation_3/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :i
'deepsets_invariant/q_activation_3/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :�
%deepsets_invariant/q_activation_3/PowPow0deepsets_invariant/q_activation_3/Pow/x:output:00deepsets_invariant/q_activation_3/Pow/y:output:0*
T0*
_output_shapes
: �
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
 *   E�
%deepsets_invariant/q_activation_3/mulMul+deepsets_invariant/q_activation_2/add_3:z:00deepsets_invariant/q_activation_3/mul/y:output:0*
T0*+
_output_shapes
:���������  �
)deepsets_invariant/q_activation_3/truedivRealDiv)deepsets_invariant/q_activation_3/mul:z:0*deepsets_invariant/q_activation_3/Cast:y:0*
T0*+
_output_shapes
:���������  �
%deepsets_invariant/q_activation_3/NegNeg-deepsets_invariant/q_activation_3/truediv:z:0*
T0*+
_output_shapes
:���������  �
'deepsets_invariant/q_activation_3/RoundRound-deepsets_invariant/q_activation_3/truediv:z:0*
T0*+
_output_shapes
:���������  �
%deepsets_invariant/q_activation_3/addAddV2)deepsets_invariant/q_activation_3/Neg:y:0+deepsets_invariant/q_activation_3/Round:y:0*
T0*+
_output_shapes
:���������  �
.deepsets_invariant/q_activation_3/StopGradientStopGradient)deepsets_invariant/q_activation_3/add:z:0*
T0*+
_output_shapes
:���������  �
'deepsets_invariant/q_activation_3/add_1AddV2-deepsets_invariant/q_activation_3/truediv:z:07deepsets_invariant/q_activation_3/StopGradient:output:0*
T0*+
_output_shapes
:���������  ~
9deepsets_invariant/q_activation_3/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 * ��D�
7deepsets_invariant/q_activation_3/clip_by_value/MinimumMinimum+deepsets_invariant/q_activation_3/add_1:z:0Bdeepsets_invariant/q_activation_3/clip_by_value/Minimum/y:output:0*
T0*+
_output_shapes
:���������  v
1deepsets_invariant/q_activation_3/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   ��
/deepsets_invariant/q_activation_3/clip_by_valueMaximum;deepsets_invariant/q_activation_3/clip_by_value/Minimum:z:0:deepsets_invariant/q_activation_3/clip_by_value/y:output:0*
T0*+
_output_shapes
:���������  �
'deepsets_invariant/q_activation_3/mul_1Mul*deepsets_invariant/q_activation_3/Cast:y:03deepsets_invariant/q_activation_3/clip_by_value:z:0*
T0*+
_output_shapes
:���������  r
-deepsets_invariant/q_activation_3/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   E�
+deepsets_invariant/q_activation_3/truediv_1RealDiv+deepsets_invariant/q_activation_3/mul_1:z:06deepsets_invariant/q_activation_3/truediv_1/y:output:0*
T0*+
_output_shapes
:���������  n
)deepsets_invariant/q_activation_3/mul_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
'deepsets_invariant/q_activation_3/mul_2Mul2deepsets_invariant/q_activation_3/mul_2/x:output:0/deepsets_invariant/q_activation_3/truediv_1:z:0*
T0*+
_output_shapes
:���������  �
'deepsets_invariant/q_activation_3/Neg_1Neg+deepsets_invariant/q_activation_2/add_3:z:0*
T0*+
_output_shapes
:���������  �
'deepsets_invariant/q_activation_3/add_2AddV2+deepsets_invariant/q_activation_3/Neg_1:y:0+deepsets_invariant/q_activation_3/mul_2:z:0*
T0*+
_output_shapes
:���������  n
)deepsets_invariant/q_activation_3/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
'deepsets_invariant/q_activation_3/mul_3Mul2deepsets_invariant/q_activation_3/mul_3/x:output:0+deepsets_invariant/q_activation_3/add_2:z:0*
T0*+
_output_shapes
:���������  �
0deepsets_invariant/q_activation_3/StopGradient_1StopGradient+deepsets_invariant/q_activation_3/mul_3:z:0*
T0*+
_output_shapes
:���������  �
'deepsets_invariant/q_activation_3/add_3AddV2+deepsets_invariant/q_activation_2/add_3:z:09deepsets_invariant/q_activation_3/StopGradient_1:output:0*
T0*+
_output_shapes
:���������  �
Bdeepsets_invariant/global_average_pooling1d/Mean/reduction_indicesConst*
_output_shapes
: *
dtype0*
value	B :�
0deepsets_invariant/global_average_pooling1d/MeanMean+deepsets_invariant/q_activation_3/add_3:z:0Kdeepsets_invariant/global_average_pooling1d/Mean/reduction_indices:output:0*
T0*'
_output_shapes
:��������� R
4deepsets_invariant/prune_low_magnitude_rho/no_updateNoOp*
_output_shapes
 T
6deepsets_invariant/prune_low_magnitude_rho/no_update_1NoOp*
_output_shapes
 �
=deepsets_invariant/prune_low_magnitude_rho/Mul/ReadVariableOpReadVariableOpFdeepsets_invariant_prune_low_magnitude_rho_mul_readvariableop_resource*
_output_shapes

:  *
dtype0�
?deepsets_invariant/prune_low_magnitude_rho/Mul/ReadVariableOp_1ReadVariableOpHdeepsets_invariant_prune_low_magnitude_rho_mul_readvariableop_1_resource*
_output_shapes

:  *
dtype0�
.deepsets_invariant/prune_low_magnitude_rho/MulMulEdeepsets_invariant/prune_low_magnitude_rho/Mul/ReadVariableOp:value:0Gdeepsets_invariant/prune_low_magnitude_rho/Mul/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  �
;deepsets_invariant/prune_low_magnitude_rho/AssignVariableOpAssignVariableOpFdeepsets_invariant_prune_low_magnitude_rho_mul_readvariableop_resource2deepsets_invariant/prune_low_magnitude_rho/Mul:z:0>^deepsets_invariant/prune_low_magnitude_rho/Mul/ReadVariableOp*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�
5deepsets_invariant/prune_low_magnitude_rho/group_depsNoOp<^deepsets_invariant/prune_low_magnitude_rho/AssignVariableOp",/job:localhost/replica:0/task:0/device:GPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 �
7deepsets_invariant/prune_low_magnitude_rho/group_deps_1NoOp6^deepsets_invariant/prune_low_magnitude_rho/group_deps",/job:localhost/replica:0/task:0/device:GPU:0*
_output_shapes
 r
0deepsets_invariant/prune_low_magnitude_rho/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :r
0deepsets_invariant/prune_low_magnitude_rho/Pow/yConst*
_output_shapes
: *
dtype0*
value	B : �
.deepsets_invariant/prune_low_magnitude_rho/PowPow9deepsets_invariant/prune_low_magnitude_rho/Pow/x:output:09deepsets_invariant/prune_low_magnitude_rho/Pow/y:output:0*
T0*
_output_shapes
: �
/deepsets_invariant/prune_low_magnitude_rho/CastCast2deepsets_invariant/prune_low_magnitude_rho/Pow:z:0*

DstT0*

SrcT0*
_output_shapes
: �
9deepsets_invariant/prune_low_magnitude_rho/ReadVariableOpReadVariableOpFdeepsets_invariant_prune_low_magnitude_rho_mul_readvariableop_resource<^deepsets_invariant/prune_low_magnitude_rho/AssignVariableOp*
_output_shapes

:  *
dtype0w
2deepsets_invariant/prune_low_magnitude_rho/mul_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C�
0deepsets_invariant/prune_low_magnitude_rho/mul_1MulAdeepsets_invariant/prune_low_magnitude_rho/ReadVariableOp:value:0;deepsets_invariant/prune_low_magnitude_rho/mul_1/y:output:0*
T0*
_output_shapes

:  �
2deepsets_invariant/prune_low_magnitude_rho/truedivRealDiv4deepsets_invariant/prune_low_magnitude_rho/mul_1:z:03deepsets_invariant/prune_low_magnitude_rho/Cast:y:0*
T0*
_output_shapes

:  �
.deepsets_invariant/prune_low_magnitude_rho/NegNeg6deepsets_invariant/prune_low_magnitude_rho/truediv:z:0*
T0*
_output_shapes

:  �
0deepsets_invariant/prune_low_magnitude_rho/RoundRound6deepsets_invariant/prune_low_magnitude_rho/truediv:z:0*
T0*
_output_shapes

:  �
.deepsets_invariant/prune_low_magnitude_rho/addAddV22deepsets_invariant/prune_low_magnitude_rho/Neg:y:04deepsets_invariant/prune_low_magnitude_rho/Round:y:0*
T0*
_output_shapes

:  �
7deepsets_invariant/prune_low_magnitude_rho/StopGradientStopGradient2deepsets_invariant/prune_low_magnitude_rho/add:z:0*
T0*
_output_shapes

:  �
0deepsets_invariant/prune_low_magnitude_rho/add_1AddV26deepsets_invariant/prune_low_magnitude_rho/truediv:z:0@deepsets_invariant/prune_low_magnitude_rho/StopGradient:output:0*
T0*
_output_shapes

:  �
Bdeepsets_invariant/prune_low_magnitude_rho/clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  �B�
@deepsets_invariant/prune_low_magnitude_rho/clip_by_value/MinimumMinimum4deepsets_invariant/prune_low_magnitude_rho/add_1:z:0Kdeepsets_invariant/prune_low_magnitude_rho/clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  
:deepsets_invariant/prune_low_magnitude_rho/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   ��
8deepsets_invariant/prune_low_magnitude_rho/clip_by_valueMaximumDdeepsets_invariant/prune_low_magnitude_rho/clip_by_value/Minimum:z:0Cdeepsets_invariant/prune_low_magnitude_rho/clip_by_value/y:output:0*
T0*
_output_shapes

:  �
0deepsets_invariant/prune_low_magnitude_rho/mul_2Mul3deepsets_invariant/prune_low_magnitude_rho/Cast:y:0<deepsets_invariant/prune_low_magnitude_rho/clip_by_value:z:0*
T0*
_output_shapes

:  {
6deepsets_invariant/prune_low_magnitude_rho/truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C�
4deepsets_invariant/prune_low_magnitude_rho/truediv_1RealDiv4deepsets_invariant/prune_low_magnitude_rho/mul_2:z:0?deepsets_invariant/prune_low_magnitude_rho/truediv_1/y:output:0*
T0*
_output_shapes

:  w
2deepsets_invariant/prune_low_magnitude_rho/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
0deepsets_invariant/prune_low_magnitude_rho/mul_3Mul;deepsets_invariant/prune_low_magnitude_rho/mul_3/x:output:08deepsets_invariant/prune_low_magnitude_rho/truediv_1:z:0*
T0*
_output_shapes

:  �
;deepsets_invariant/prune_low_magnitude_rho/ReadVariableOp_1ReadVariableOpFdeepsets_invariant_prune_low_magnitude_rho_mul_readvariableop_resource<^deepsets_invariant/prune_low_magnitude_rho/AssignVariableOp*
_output_shapes

:  *
dtype0�
0deepsets_invariant/prune_low_magnitude_rho/Neg_1NegCdeepsets_invariant/prune_low_magnitude_rho/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  �
0deepsets_invariant/prune_low_magnitude_rho/add_2AddV24deepsets_invariant/prune_low_magnitude_rho/Neg_1:y:04deepsets_invariant/prune_low_magnitude_rho/mul_3:z:0*
T0*
_output_shapes

:  w
2deepsets_invariant/prune_low_magnitude_rho/mul_4/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
0deepsets_invariant/prune_low_magnitude_rho/mul_4Mul;deepsets_invariant/prune_low_magnitude_rho/mul_4/x:output:04deepsets_invariant/prune_low_magnitude_rho/add_2:z:0*
T0*
_output_shapes

:  �
9deepsets_invariant/prune_low_magnitude_rho/StopGradient_1StopGradient4deepsets_invariant/prune_low_magnitude_rho/mul_4:z:0*
T0*
_output_shapes

:  �
;deepsets_invariant/prune_low_magnitude_rho/ReadVariableOp_2ReadVariableOpFdeepsets_invariant_prune_low_magnitude_rho_mul_readvariableop_resource<^deepsets_invariant/prune_low_magnitude_rho/AssignVariableOp*
_output_shapes

:  *
dtype0�
0deepsets_invariant/prune_low_magnitude_rho/add_3AddV2Cdeepsets_invariant/prune_low_magnitude_rho/ReadVariableOp_2:value:0Bdeepsets_invariant/prune_low_magnitude_rho/StopGradient_1:output:0*
T0*
_output_shapes

:  �
1deepsets_invariant/prune_low_magnitude_rho/MatMulMatMul9deepsets_invariant/global_average_pooling1d/Mean:output:04deepsets_invariant/prune_low_magnitude_rho/add_3:z:0*
T0*'
_output_shapes
:��������� t
2deepsets_invariant/prune_low_magnitude_rho/Pow_1/xConst*
_output_shapes
: *
dtype0*
value	B :t
2deepsets_invariant/prune_low_magnitude_rho/Pow_1/yConst*
_output_shapes
: *
dtype0*
value	B : �
0deepsets_invariant/prune_low_magnitude_rho/Pow_1Pow;deepsets_invariant/prune_low_magnitude_rho/Pow_1/x:output:0;deepsets_invariant/prune_low_magnitude_rho/Pow_1/y:output:0*
T0*
_output_shapes
: �
1deepsets_invariant/prune_low_magnitude_rho/Cast_1Cast4deepsets_invariant/prune_low_magnitude_rho/Pow_1:z:0*

DstT0*

SrcT0*
_output_shapes
: �
;deepsets_invariant/prune_low_magnitude_rho/ReadVariableOp_3ReadVariableOpDdeepsets_invariant_prune_low_magnitude_rho_readvariableop_3_resource*
_output_shapes
: *
dtype0w
2deepsets_invariant/prune_low_magnitude_rho/mul_5/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C�
0deepsets_invariant/prune_low_magnitude_rho/mul_5MulCdeepsets_invariant/prune_low_magnitude_rho/ReadVariableOp_3:value:0;deepsets_invariant/prune_low_magnitude_rho/mul_5/y:output:0*
T0*
_output_shapes
: �
4deepsets_invariant/prune_low_magnitude_rho/truediv_2RealDiv4deepsets_invariant/prune_low_magnitude_rho/mul_5:z:05deepsets_invariant/prune_low_magnitude_rho/Cast_1:y:0*
T0*
_output_shapes
: �
0deepsets_invariant/prune_low_magnitude_rho/Neg_2Neg8deepsets_invariant/prune_low_magnitude_rho/truediv_2:z:0*
T0*
_output_shapes
: �
2deepsets_invariant/prune_low_magnitude_rho/Round_1Round8deepsets_invariant/prune_low_magnitude_rho/truediv_2:z:0*
T0*
_output_shapes
: �
0deepsets_invariant/prune_low_magnitude_rho/add_4AddV24deepsets_invariant/prune_low_magnitude_rho/Neg_2:y:06deepsets_invariant/prune_low_magnitude_rho/Round_1:y:0*
T0*
_output_shapes
: �
9deepsets_invariant/prune_low_magnitude_rho/StopGradient_2StopGradient4deepsets_invariant/prune_low_magnitude_rho/add_4:z:0*
T0*
_output_shapes
: �
0deepsets_invariant/prune_low_magnitude_rho/add_5AddV28deepsets_invariant/prune_low_magnitude_rho/truediv_2:z:0Bdeepsets_invariant/prune_low_magnitude_rho/StopGradient_2:output:0*
T0*
_output_shapes
: �
Ddeepsets_invariant/prune_low_magnitude_rho/clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  �B�
Bdeepsets_invariant/prune_low_magnitude_rho/clip_by_value_1/MinimumMinimum4deepsets_invariant/prune_low_magnitude_rho/add_5:z:0Mdeepsets_invariant/prune_low_magnitude_rho/clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: �
<deepsets_invariant/prune_low_magnitude_rho/clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   ��
:deepsets_invariant/prune_low_magnitude_rho/clip_by_value_1MaximumFdeepsets_invariant/prune_low_magnitude_rho/clip_by_value_1/Minimum:z:0Edeepsets_invariant/prune_low_magnitude_rho/clip_by_value_1/y:output:0*
T0*
_output_shapes
: �
0deepsets_invariant/prune_low_magnitude_rho/mul_6Mul5deepsets_invariant/prune_low_magnitude_rho/Cast_1:y:0>deepsets_invariant/prune_low_magnitude_rho/clip_by_value_1:z:0*
T0*
_output_shapes
: {
6deepsets_invariant/prune_low_magnitude_rho/truediv_3/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C�
4deepsets_invariant/prune_low_magnitude_rho/truediv_3RealDiv4deepsets_invariant/prune_low_magnitude_rho/mul_6:z:0?deepsets_invariant/prune_low_magnitude_rho/truediv_3/y:output:0*
T0*
_output_shapes
: w
2deepsets_invariant/prune_low_magnitude_rho/mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
0deepsets_invariant/prune_low_magnitude_rho/mul_7Mul;deepsets_invariant/prune_low_magnitude_rho/mul_7/x:output:08deepsets_invariant/prune_low_magnitude_rho/truediv_3:z:0*
T0*
_output_shapes
: �
;deepsets_invariant/prune_low_magnitude_rho/ReadVariableOp_4ReadVariableOpDdeepsets_invariant_prune_low_magnitude_rho_readvariableop_3_resource*
_output_shapes
: *
dtype0�
0deepsets_invariant/prune_low_magnitude_rho/Neg_3NegCdeepsets_invariant/prune_low_magnitude_rho/ReadVariableOp_4:value:0*
T0*
_output_shapes
: �
0deepsets_invariant/prune_low_magnitude_rho/add_6AddV24deepsets_invariant/prune_low_magnitude_rho/Neg_3:y:04deepsets_invariant/prune_low_magnitude_rho/mul_7:z:0*
T0*
_output_shapes
: w
2deepsets_invariant/prune_low_magnitude_rho/mul_8/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
0deepsets_invariant/prune_low_magnitude_rho/mul_8Mul;deepsets_invariant/prune_low_magnitude_rho/mul_8/x:output:04deepsets_invariant/prune_low_magnitude_rho/add_6:z:0*
T0*
_output_shapes
: �
9deepsets_invariant/prune_low_magnitude_rho/StopGradient_3StopGradient4deepsets_invariant/prune_low_magnitude_rho/mul_8:z:0*
T0*
_output_shapes
: �
;deepsets_invariant/prune_low_magnitude_rho/ReadVariableOp_5ReadVariableOpDdeepsets_invariant_prune_low_magnitude_rho_readvariableop_3_resource*
_output_shapes
: *
dtype0�
0deepsets_invariant/prune_low_magnitude_rho/add_7AddV2Cdeepsets_invariant/prune_low_magnitude_rho/ReadVariableOp_5:value:0Bdeepsets_invariant/prune_low_magnitude_rho/StopGradient_3:output:0*
T0*
_output_shapes
: �
2deepsets_invariant/prune_low_magnitude_rho/BiasAddBiasAdd;deepsets_invariant/prune_low_magnitude_rho/MatMul:product:04deepsets_invariant/prune_low_magnitude_rho/add_7:z:0*
T0*'
_output_shapes
:��������� i
'deepsets_invariant/q_activation_4/Pow/xConst*
_output_shapes
: *
dtype0*
value	B :i
'deepsets_invariant/q_activation_4/Pow/yConst*
_output_shapes
: *
dtype0*
value	B :�
%deepsets_invariant/q_activation_4/PowPow0deepsets_invariant/q_activation_4/Pow/x:output:00deepsets_invariant/q_activation_4/Pow/y:output:0*
T0*
_output_shapes
: �
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
value	B : �
'deepsets_invariant/q_activation_4/Pow_1Pow2deepsets_invariant/q_activation_4/Pow_1/x:output:02deepsets_invariant/q_activation_4/Pow_1/y:output:0*
T0*
_output_shapes
: �
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
value	B : �
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
 *   A�
%deepsets_invariant/q_activation_4/subSub,deepsets_invariant/q_activation_4/Cast_2:y:00deepsets_invariant/q_activation_4/sub/y:output:0*
T0*
_output_shapes
: �
'deepsets_invariant/q_activation_4/Pow_2Pow0deepsets_invariant/q_activation_4/Const:output:0)deepsets_invariant/q_activation_4/sub:z:0*
T0*
_output_shapes
: �
'deepsets_invariant/q_activation_4/sub_1Sub,deepsets_invariant/q_activation_4/Cast_1:y:0+deepsets_invariant/q_activation_4/Pow_2:z:0*
T0*
_output_shapes
: �
+deepsets_invariant/q_activation_4/LessEqual	LessEqual;deepsets_invariant/prune_low_magnitude_rho/BiasAdd:output:0+deepsets_invariant/q_activation_4/sub_1:z:0*
T0*'
_output_shapes
:��������� �
&deepsets_invariant/q_activation_4/ReluRelu;deepsets_invariant/prune_low_magnitude_rho/BiasAdd:output:0*
T0*'
_output_shapes
:��������� �
+deepsets_invariant/q_activation_4/ones_likeOnesLike;deepsets_invariant/prune_low_magnitude_rho/BiasAdd:output:0*
T0*'
_output_shapes
:��������� �
'deepsets_invariant/q_activation_4/sub_2Sub,deepsets_invariant/q_activation_4/Cast_1:y:0+deepsets_invariant/q_activation_4/Pow_2:z:0*
T0*
_output_shapes
: �
%deepsets_invariant/q_activation_4/mulMul/deepsets_invariant/q_activation_4/ones_like:y:0+deepsets_invariant/q_activation_4/sub_2:z:0*
T0*'
_output_shapes
:��������� �
*deepsets_invariant/q_activation_4/SelectV2SelectV2/deepsets_invariant/q_activation_4/LessEqual:z:04deepsets_invariant/q_activation_4/Relu:activations:0)deepsets_invariant/q_activation_4/mul:z:0*
T0*'
_output_shapes
:��������� �
'deepsets_invariant/q_activation_4/mul_1Mul;deepsets_invariant/prune_low_magnitude_rho/BiasAdd:output:0*deepsets_invariant/q_activation_4/Cast:y:0*
T0*'
_output_shapes
:��������� �
)deepsets_invariant/q_activation_4/truedivRealDiv+deepsets_invariant/q_activation_4/mul_1:z:0,deepsets_invariant/q_activation_4/Cast_1:y:0*
T0*'
_output_shapes
:��������� �
%deepsets_invariant/q_activation_4/NegNeg-deepsets_invariant/q_activation_4/truediv:z:0*
T0*'
_output_shapes
:��������� �
'deepsets_invariant/q_activation_4/RoundRound-deepsets_invariant/q_activation_4/truediv:z:0*
T0*'
_output_shapes
:��������� �
%deepsets_invariant/q_activation_4/addAddV2)deepsets_invariant/q_activation_4/Neg:y:0+deepsets_invariant/q_activation_4/Round:y:0*
T0*'
_output_shapes
:��������� �
.deepsets_invariant/q_activation_4/StopGradientStopGradient)deepsets_invariant/q_activation_4/add:z:0*
T0*'
_output_shapes
:��������� �
'deepsets_invariant/q_activation_4/add_1AddV2-deepsets_invariant/q_activation_4/truediv:z:07deepsets_invariant/q_activation_4/StopGradient:output:0*
T0*'
_output_shapes
:��������� �
+deepsets_invariant/q_activation_4/truediv_1RealDiv+deepsets_invariant/q_activation_4/add_1:z:0*deepsets_invariant/q_activation_4/Cast:y:0*
T0*'
_output_shapes
:��������� r
-deepsets_invariant/q_activation_4/truediv_2/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
+deepsets_invariant/q_activation_4/truediv_2RealDiv6deepsets_invariant/q_activation_4/truediv_2/x:output:0*deepsets_invariant/q_activation_4/Cast:y:0*
T0*
_output_shapes
: n
)deepsets_invariant/q_activation_4/sub_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
'deepsets_invariant/q_activation_4/sub_3Sub2deepsets_invariant/q_activation_4/sub_3/x:output:0/deepsets_invariant/q_activation_4/truediv_2:z:0*
T0*
_output_shapes
: �
7deepsets_invariant/q_activation_4/clip_by_value/MinimumMinimum/deepsets_invariant/q_activation_4/truediv_1:z:0+deepsets_invariant/q_activation_4/sub_3:z:0*
T0*'
_output_shapes
:��������� v
1deepsets_invariant/q_activation_4/clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *    �
/deepsets_invariant/q_activation_4/clip_by_valueMaximum;deepsets_invariant/q_activation_4/clip_by_value/Minimum:z:0:deepsets_invariant/q_activation_4/clip_by_value/y:output:0*
T0*'
_output_shapes
:��������� �
'deepsets_invariant/q_activation_4/mul_2Mul,deepsets_invariant/q_activation_4/Cast_1:y:03deepsets_invariant/q_activation_4/clip_by_value:z:0*
T0*'
_output_shapes
:��������� �
'deepsets_invariant/q_activation_4/Neg_1Neg3deepsets_invariant/q_activation_4/SelectV2:output:0*
T0*'
_output_shapes
:��������� �
'deepsets_invariant/q_activation_4/add_2AddV2+deepsets_invariant/q_activation_4/Neg_1:y:0+deepsets_invariant/q_activation_4/mul_2:z:0*
T0*'
_output_shapes
:��������� n
)deepsets_invariant/q_activation_4/mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
'deepsets_invariant/q_activation_4/mul_3Mul2deepsets_invariant/q_activation_4/mul_3/x:output:0+deepsets_invariant/q_activation_4/add_2:z:0*
T0*'
_output_shapes
:��������� �
0deepsets_invariant/q_activation_4/StopGradient_1StopGradient+deepsets_invariant/q_activation_4/mul_3:z:0*
T0*'
_output_shapes
:��������� �
'deepsets_invariant/q_activation_4/add_3AddV23deepsets_invariant/q_activation_4/SelectV2:output:09deepsets_invariant/q_activation_4/StopGradient_1:output:0*
T0*'
_output_shapes
:��������� T
6deepsets_invariant/prune_low_magnitude_dense/no_updateNoOp*
_output_shapes
 V
8deepsets_invariant/prune_low_magnitude_dense/no_update_1NoOp*
_output_shapes
 �
?deepsets_invariant/prune_low_magnitude_dense/Mul/ReadVariableOpReadVariableOpHdeepsets_invariant_prune_low_magnitude_dense_mul_readvariableop_resource*
_output_shapes

: *
dtype0�
Adeepsets_invariant/prune_low_magnitude_dense/Mul/ReadVariableOp_1ReadVariableOpJdeepsets_invariant_prune_low_magnitude_dense_mul_readvariableop_1_resource*
_output_shapes

: *
dtype0�
0deepsets_invariant/prune_low_magnitude_dense/MulMulGdeepsets_invariant/prune_low_magnitude_dense/Mul/ReadVariableOp:value:0Ideepsets_invariant/prune_low_magnitude_dense/Mul/ReadVariableOp_1:value:0*
T0*
_output_shapes

: �
=deepsets_invariant/prune_low_magnitude_dense/AssignVariableOpAssignVariableOpHdeepsets_invariant_prune_low_magnitude_dense_mul_readvariableop_resource4deepsets_invariant/prune_low_magnitude_dense/Mul:z:0@^deepsets_invariant/prune_low_magnitude_dense/Mul/ReadVariableOp*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�
7deepsets_invariant/prune_low_magnitude_dense/group_depsNoOp>^deepsets_invariant/prune_low_magnitude_dense/AssignVariableOp",/job:localhost/replica:0/task:0/device:GPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 �
9deepsets_invariant/prune_low_magnitude_dense/group_deps_1NoOp8^deepsets_invariant/prune_low_magnitude_dense/group_deps",/job:localhost/replica:0/task:0/device:GPU:0*
_output_shapes
 �
Bdeepsets_invariant/prune_low_magnitude_dense/MatMul/ReadVariableOpReadVariableOpHdeepsets_invariant_prune_low_magnitude_dense_mul_readvariableop_resource>^deepsets_invariant/prune_low_magnitude_dense/AssignVariableOp*
_output_shapes

: *
dtype0�
3deepsets_invariant/prune_low_magnitude_dense/MatMulMatMul+deepsets_invariant/q_activation_4/add_3:z:0Jdeepsets_invariant/prune_low_magnitude_dense/MatMul/ReadVariableOp:value:0*
T0*'
_output_shapes
:����������
Cdeepsets_invariant/prune_low_magnitude_dense/BiasAdd/ReadVariableOpReadVariableOpLdeepsets_invariant_prune_low_magnitude_dense_biasadd_readvariableop_resource*
_output_shapes
:*
dtype0�
4deepsets_invariant/prune_low_magnitude_dense/BiasAddBiasAdd=deepsets_invariant/prune_low_magnitude_dense/MatMul:product:0Kdeepsets_invariant/prune_low_magnitude_dense/BiasAdd/ReadVariableOp:value:0*
T0*'
_output_shapes
:����������
"deepsets_invariant/softmax/SoftmaxSoftmax=deepsets_invariant/prune_low_magnitude_dense/BiasAdd:output:0*
T0*'
_output_shapes
:���������{
IdentityIdentity,deepsets_invariant/softmax/Softmax:softmax:0^NoOp*
T0*'
_output_shapes
:����������
NoOpNoOp>^deepsets_invariant/prune_low_magnitude_dense/AssignVariableOpD^deepsets_invariant/prune_low_magnitude_dense/BiasAdd/ReadVariableOpC^deepsets_invariant/prune_low_magnitude_dense/MatMul/ReadVariableOp@^deepsets_invariant/prune_low_magnitude_dense/Mul/ReadVariableOpB^deepsets_invariant/prune_low_magnitude_dense/Mul/ReadVariableOp_1=^deepsets_invariant/prune_low_magnitude_phi1/AssignVariableOp?^deepsets_invariant/prune_low_magnitude_phi1/Mul/ReadVariableOpA^deepsets_invariant/prune_low_magnitude_phi1/Mul/ReadVariableOp_1;^deepsets_invariant/prune_low_magnitude_phi1/ReadVariableOp=^deepsets_invariant/prune_low_magnitude_phi1/ReadVariableOp_1=^deepsets_invariant/prune_low_magnitude_phi1/ReadVariableOp_2=^deepsets_invariant/prune_low_magnitude_phi1/ReadVariableOp_3=^deepsets_invariant/prune_low_magnitude_phi1/ReadVariableOp_4=^deepsets_invariant/prune_low_magnitude_phi1/ReadVariableOp_5=^deepsets_invariant/prune_low_magnitude_phi2/AssignVariableOp?^deepsets_invariant/prune_low_magnitude_phi2/Mul/ReadVariableOpA^deepsets_invariant/prune_low_magnitude_phi2/Mul/ReadVariableOp_1;^deepsets_invariant/prune_low_magnitude_phi2/ReadVariableOp=^deepsets_invariant/prune_low_magnitude_phi2/ReadVariableOp_1=^deepsets_invariant/prune_low_magnitude_phi2/ReadVariableOp_2=^deepsets_invariant/prune_low_magnitude_phi2/ReadVariableOp_3=^deepsets_invariant/prune_low_magnitude_phi2/ReadVariableOp_4=^deepsets_invariant/prune_low_magnitude_phi2/ReadVariableOp_5=^deepsets_invariant/prune_low_magnitude_phi3/AssignVariableOp?^deepsets_invariant/prune_low_magnitude_phi3/Mul/ReadVariableOpA^deepsets_invariant/prune_low_magnitude_phi3/Mul/ReadVariableOp_1;^deepsets_invariant/prune_low_magnitude_phi3/ReadVariableOp=^deepsets_invariant/prune_low_magnitude_phi3/ReadVariableOp_1=^deepsets_invariant/prune_low_magnitude_phi3/ReadVariableOp_2=^deepsets_invariant/prune_low_magnitude_phi3/ReadVariableOp_3=^deepsets_invariant/prune_low_magnitude_phi3/ReadVariableOp_4=^deepsets_invariant/prune_low_magnitude_phi3/ReadVariableOp_5<^deepsets_invariant/prune_low_magnitude_rho/AssignVariableOp>^deepsets_invariant/prune_low_magnitude_rho/Mul/ReadVariableOp@^deepsets_invariant/prune_low_magnitude_rho/Mul/ReadVariableOp_1:^deepsets_invariant/prune_low_magnitude_rho/ReadVariableOp<^deepsets_invariant/prune_low_magnitude_rho/ReadVariableOp_1<^deepsets_invariant/prune_low_magnitude_rho/ReadVariableOp_2<^deepsets_invariant/prune_low_magnitude_rho/ReadVariableOp_3<^deepsets_invariant/prune_low_magnitude_rho/ReadVariableOp_4<^deepsets_invariant/prune_low_magnitude_rho/ReadVariableOp_5*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*H
_input_shapes7
5:��������� : : : : : : : : : : : : : : : 2~
=deepsets_invariant/prune_low_magnitude_dense/AssignVariableOp=deepsets_invariant/prune_low_magnitude_dense/AssignVariableOp2�
Cdeepsets_invariant/prune_low_magnitude_dense/BiasAdd/ReadVariableOpCdeepsets_invariant/prune_low_magnitude_dense/BiasAdd/ReadVariableOp2�
Bdeepsets_invariant/prune_low_magnitude_dense/MatMul/ReadVariableOpBdeepsets_invariant/prune_low_magnitude_dense/MatMul/ReadVariableOp2�
Adeepsets_invariant/prune_low_magnitude_dense/Mul/ReadVariableOp_1Adeepsets_invariant/prune_low_magnitude_dense/Mul/ReadVariableOp_12�
?deepsets_invariant/prune_low_magnitude_dense/Mul/ReadVariableOp?deepsets_invariant/prune_low_magnitude_dense/Mul/ReadVariableOp2|
<deepsets_invariant/prune_low_magnitude_phi1/AssignVariableOp<deepsets_invariant/prune_low_magnitude_phi1/AssignVariableOp2�
@deepsets_invariant/prune_low_magnitude_phi1/Mul/ReadVariableOp_1@deepsets_invariant/prune_low_magnitude_phi1/Mul/ReadVariableOp_12�
>deepsets_invariant/prune_low_magnitude_phi1/Mul/ReadVariableOp>deepsets_invariant/prune_low_magnitude_phi1/Mul/ReadVariableOp2|
<deepsets_invariant/prune_low_magnitude_phi1/ReadVariableOp_1<deepsets_invariant/prune_low_magnitude_phi1/ReadVariableOp_12|
<deepsets_invariant/prune_low_magnitude_phi1/ReadVariableOp_2<deepsets_invariant/prune_low_magnitude_phi1/ReadVariableOp_22|
<deepsets_invariant/prune_low_magnitude_phi1/ReadVariableOp_3<deepsets_invariant/prune_low_magnitude_phi1/ReadVariableOp_32|
<deepsets_invariant/prune_low_magnitude_phi1/ReadVariableOp_4<deepsets_invariant/prune_low_magnitude_phi1/ReadVariableOp_42|
<deepsets_invariant/prune_low_magnitude_phi1/ReadVariableOp_5<deepsets_invariant/prune_low_magnitude_phi1/ReadVariableOp_52x
:deepsets_invariant/prune_low_magnitude_phi1/ReadVariableOp:deepsets_invariant/prune_low_magnitude_phi1/ReadVariableOp2|
<deepsets_invariant/prune_low_magnitude_phi2/AssignVariableOp<deepsets_invariant/prune_low_magnitude_phi2/AssignVariableOp2�
@deepsets_invariant/prune_low_magnitude_phi2/Mul/ReadVariableOp_1@deepsets_invariant/prune_low_magnitude_phi2/Mul/ReadVariableOp_12�
>deepsets_invariant/prune_low_magnitude_phi2/Mul/ReadVariableOp>deepsets_invariant/prune_low_magnitude_phi2/Mul/ReadVariableOp2|
<deepsets_invariant/prune_low_magnitude_phi2/ReadVariableOp_1<deepsets_invariant/prune_low_magnitude_phi2/ReadVariableOp_12|
<deepsets_invariant/prune_low_magnitude_phi2/ReadVariableOp_2<deepsets_invariant/prune_low_magnitude_phi2/ReadVariableOp_22|
<deepsets_invariant/prune_low_magnitude_phi2/ReadVariableOp_3<deepsets_invariant/prune_low_magnitude_phi2/ReadVariableOp_32|
<deepsets_invariant/prune_low_magnitude_phi2/ReadVariableOp_4<deepsets_invariant/prune_low_magnitude_phi2/ReadVariableOp_42|
<deepsets_invariant/prune_low_magnitude_phi2/ReadVariableOp_5<deepsets_invariant/prune_low_magnitude_phi2/ReadVariableOp_52x
:deepsets_invariant/prune_low_magnitude_phi2/ReadVariableOp:deepsets_invariant/prune_low_magnitude_phi2/ReadVariableOp2|
<deepsets_invariant/prune_low_magnitude_phi3/AssignVariableOp<deepsets_invariant/prune_low_magnitude_phi3/AssignVariableOp2�
@deepsets_invariant/prune_low_magnitude_phi3/Mul/ReadVariableOp_1@deepsets_invariant/prune_low_magnitude_phi3/Mul/ReadVariableOp_12�
>deepsets_invariant/prune_low_magnitude_phi3/Mul/ReadVariableOp>deepsets_invariant/prune_low_magnitude_phi3/Mul/ReadVariableOp2|
<deepsets_invariant/prune_low_magnitude_phi3/ReadVariableOp_1<deepsets_invariant/prune_low_magnitude_phi3/ReadVariableOp_12|
<deepsets_invariant/prune_low_magnitude_phi3/ReadVariableOp_2<deepsets_invariant/prune_low_magnitude_phi3/ReadVariableOp_22|
<deepsets_invariant/prune_low_magnitude_phi3/ReadVariableOp_3<deepsets_invariant/prune_low_magnitude_phi3/ReadVariableOp_32|
<deepsets_invariant/prune_low_magnitude_phi3/ReadVariableOp_4<deepsets_invariant/prune_low_magnitude_phi3/ReadVariableOp_42|
<deepsets_invariant/prune_low_magnitude_phi3/ReadVariableOp_5<deepsets_invariant/prune_low_magnitude_phi3/ReadVariableOp_52x
:deepsets_invariant/prune_low_magnitude_phi3/ReadVariableOp:deepsets_invariant/prune_low_magnitude_phi3/ReadVariableOp2z
;deepsets_invariant/prune_low_magnitude_rho/AssignVariableOp;deepsets_invariant/prune_low_magnitude_rho/AssignVariableOp2�
?deepsets_invariant/prune_low_magnitude_rho/Mul/ReadVariableOp_1?deepsets_invariant/prune_low_magnitude_rho/Mul/ReadVariableOp_12~
=deepsets_invariant/prune_low_magnitude_rho/Mul/ReadVariableOp=deepsets_invariant/prune_low_magnitude_rho/Mul/ReadVariableOp2z
;deepsets_invariant/prune_low_magnitude_rho/ReadVariableOp_1;deepsets_invariant/prune_low_magnitude_rho/ReadVariableOp_12z
;deepsets_invariant/prune_low_magnitude_rho/ReadVariableOp_2;deepsets_invariant/prune_low_magnitude_rho/ReadVariableOp_22z
;deepsets_invariant/prune_low_magnitude_rho/ReadVariableOp_3;deepsets_invariant/prune_low_magnitude_rho/ReadVariableOp_32z
;deepsets_invariant/prune_low_magnitude_rho/ReadVariableOp_4;deepsets_invariant/prune_low_magnitude_rho/ReadVariableOp_42z
;deepsets_invariant/prune_low_magnitude_rho/ReadVariableOp_5;deepsets_invariant/prune_low_magnitude_rho/ReadVariableOp_52v
9deepsets_invariant/prune_low_magnitude_rho/ReadVariableOp9deepsets_invariant/prune_low_magnitude_rho/ReadVariableOp:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:(
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
:��������� 
%
_user_specified_nameinput_layer
�
K
/__inference_q_activation_1_layer_call_fn_566907

inputs
identity�
PartitionedCallPartitionedCallinputs*
Tin
2*
Tout
2*
_collective_manager_ids
 *+
_output_shapes
:���������  * 
_read_only_resource_inputs
 *2
config_proto" 

CPU

GPU2 *0J 8� *S
fNRL
J__inference_q_activation_1_layer_call_and_return_conditional_losses_564539d
IdentityIdentityPartitionedCall:output:0*
T0*+
_output_shapes
:���������  "
identityIdentity:output:0*(
_construction_contextkEagerRuntime**
_input_shapes
:���������  :S O
+
_output_shapes
:���������  
 
_user_specified_nameinputs
�	
�
8__inference_prune_low_magnitude_rho_layer_call_fn_567436

inputs
unknown:	 
	unknown_0:  
	unknown_1:  
	unknown_2: 
	unknown_3: 
identity��StatefulPartitionedCall�
StatefulPartitionedCallStatefulPartitionedCallinputsunknown	unknown_0	unknown_1	unknown_2	unknown_3*
Tin

2*
Tout
2*
_collective_manager_ids
 *'
_output_shapes
:��������� *#
_read_only_resource_inputs
*2
config_proto" 

CPU

GPU2 *0J 8� *\
fWRU
S__inference_prune_low_magnitude_rho_layer_call_and_return_conditional_losses_565121o
IdentityIdentity StatefulPartitionedCall:output:0^NoOp*
T0*'
_output_shapes
:��������� <
NoOpNoOp^StatefulPartitionedCall*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*0
_input_shapes
:��������� : : : : : 22
StatefulPartitionedCallStatefulPartitionedCall:&"
 
_user_specified_name567432:&"
 
_user_specified_name567430:&"
 
_user_specified_name567428:&"
 
_user_specified_name567426:&"
 
_user_specified_name567424:O K
'
_output_shapes
:��������� 
 
_user_specified_nameinputs
�
�
4assert_greater_equal_Assert_AssertGuard_false_567000K
Gassert_greater_equal_assert_assertguard_assert_assert_greater_equal_all
V
Rassert_greater_equal_assert_assertguard_assert_assert_greater_equal_readvariableop	I
Eassert_greater_equal_assert_assertguard_assert_assert_greater_equal_y	6
2assert_greater_equal_assert_assertguard_identity_1
��.assert_greater_equal/Assert/AssertGuard/Assert�
5assert_greater_equal/Assert/AssertGuard/Assert/data_0Const*
_output_shapes
: *
dtype0*�
value�B� B�Prune() wrapper requires the UpdatePruningStep callback to be provided during training. Please add it as a callback to your model.fit call.�
5assert_greater_equal/Assert/AssertGuard/Assert/data_1Const*
_output_shapes
: *
dtype0*<
value3B1 B+Condition x >= y did not hold element-wise:�
5assert_greater_equal/Assert/AssertGuard/Assert/data_2Const*
_output_shapes
: *
dtype0*=
value4B2 B,x (assert_greater_equal/ReadVariableOp:0) = �
5assert_greater_equal/Assert/AssertGuard/Assert/data_4Const*
_output_shapes
: *
dtype0*0
value'B% By (assert_greater_equal/y:0) = �
.assert_greater_equal/Assert/AssertGuard/AssertAssertGassert_greater_equal_assert_assertguard_assert_assert_greater_equal_all>assert_greater_equal/Assert/AssertGuard/Assert/data_0:output:0>assert_greater_equal/Assert/AssertGuard/Assert/data_1:output:0>assert_greater_equal/Assert/AssertGuard/Assert/data_2:output:0Rassert_greater_equal_assert_assertguard_assert_assert_greater_equal_readvariableop>assert_greater_equal/Assert/AssertGuard/Assert/data_4:output:0Eassert_greater_equal_assert_assertguard_assert_assert_greater_equal_y*
T

2		*&
 _has_manual_control_dependencies(*
_output_shapes
 �
0assert_greater_equal/Assert/AssertGuard/IdentityIdentityGassert_greater_equal_assert_assertguard_assert_assert_greater_equal_all/^assert_greater_equal/Assert/AssertGuard/Assert*
T0
*
_output_shapes
: �
2assert_greater_equal/Assert/AssertGuard/Identity_1Identity9assert_greater_equal/Assert/AssertGuard/Identity:output:0-^assert_greater_equal/Assert/AssertGuard/NoOp*
T0
*
_output_shapes
: {
,assert_greater_equal/Assert/AssertGuard/NoOpNoOp/^assert_greater_equal/Assert/AssertGuard/Assert*
_output_shapes
 "q
2assert_greater_equal_assert_assertguard_identity_1;assert_greater_equal/Assert/AssertGuard/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes
: : : 2`
.assert_greater_equal/Assert/AssertGuard/Assert.assert_greater_equal/Assert/AssertGuard/Assert:NJ

_output_shapes
: 
0
_user_specified_nameassert_greater_equal/y:[W

_output_shapes
: 
=
_user_specified_name%#assert_greater_equal/ReadVariableOp:P L

_output_shapes
: 
2
_user_specified_nameassert_greater_equal/All
�X
�
cond_true_567056H
>cond_polynomial_decay_pruning_schedule_readvariableop_resource:	 >
,cond_pruning_ops_abs_readvariableop_resource:  0
cond_assignvariableop_resource:  *
 cond_assignvariableop_1_resource: 
cond_identity_logicaland_1

cond_identity_1
��cond/AssignVariableOp�cond/AssignVariableOp_1� cond/GreaterEqual/ReadVariableOp�cond/LessEqual/ReadVariableOp�cond/Sub/ReadVariableOp�5cond/polynomial_decay_pruning_schedule/ReadVariableOp�#cond/pruning_ops/Abs/ReadVariableOp�
5cond/polynomial_decay_pruning_schedule/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	o
,cond/polynomial_decay_pruning_schedule/sub/yConst*
_output_shapes
: *
dtype0	*
value
B	 R��
*cond/polynomial_decay_pruning_schedule/subSub=cond/polynomial_decay_pruning_schedule/ReadVariableOp:value:05cond/polynomial_decay_pruning_schedule/sub/y:output:0*
T0	*
_output_shapes
: �
+cond/polynomial_decay_pruning_schedule/CastCast.cond/polynomial_decay_pruning_schedule/sub:z:0*

DstT0*

SrcT0	*
_output_shapes
: u
0cond/polynomial_decay_pruning_schedule/truediv/yConst*
_output_shapes
: *
dtype0*
valueB
 * �jF�
.cond/polynomial_decay_pruning_schedule/truedivRealDiv/cond/polynomial_decay_pruning_schedule/Cast:y:09cond/polynomial_decay_pruning_schedule/truediv/y:output:0*
T0*
_output_shapes
: u
0cond/polynomial_decay_pruning_schedule/Maximum/xConst*
_output_shapes
: *
dtype0*
valueB
 *    �
.cond/polynomial_decay_pruning_schedule/MaximumMaximum9cond/polynomial_decay_pruning_schedule/Maximum/x:output:02cond/polynomial_decay_pruning_schedule/truediv:z:0*
T0*
_output_shapes
: u
0cond/polynomial_decay_pruning_schedule/Minimum/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
.cond/polynomial_decay_pruning_schedule/MinimumMinimum9cond/polynomial_decay_pruning_schedule/Minimum/x:output:02cond/polynomial_decay_pruning_schedule/Maximum:z:0*
T0*
_output_shapes
: s
.cond/polynomial_decay_pruning_schedule/sub_1/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
,cond/polynomial_decay_pruning_schedule/sub_1Sub7cond/polynomial_decay_pruning_schedule/sub_1/x:output:02cond/polynomial_decay_pruning_schedule/Minimum:z:0*
T0*
_output_shapes
: q
,cond/polynomial_decay_pruning_schedule/Pow/yConst*
_output_shapes
: *
dtype0*
valueB
 *  @@�
*cond/polynomial_decay_pruning_schedule/PowPow0cond/polynomial_decay_pruning_schedule/sub_1:z:05cond/polynomial_decay_pruning_schedule/Pow/y:output:0*
T0*
_output_shapes
: q
,cond/polynomial_decay_pruning_schedule/Mul/xConst*
_output_shapes
: *
dtype0*
valueB
 *   ��
*cond/polynomial_decay_pruning_schedule/MulMul5cond/polynomial_decay_pruning_schedule/Mul/x:output:0.cond/polynomial_decay_pruning_schedule/Pow:z:0*
T0*
_output_shapes
: v
1cond/polynomial_decay_pruning_schedule/sparsity/yConst*
_output_shapes
: *
dtype0*
valueB
 *   ?�
/cond/polynomial_decay_pruning_schedule/sparsityAddV2.cond/polynomial_decay_pruning_schedule/Mul:z:0:cond/polynomial_decay_pruning_schedule/sparsity/y:output:0*
T0*
_output_shapes
: �
 cond/GreaterEqual/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	V
cond/GreaterEqual/yConst*
_output_shapes
: *
dtype0	*
value
B	 R��
cond/GreaterEqualGreaterEqual(cond/GreaterEqual/ReadVariableOp:value:0cond/GreaterEqual/y:output:0*
T0	*
_output_shapes
: �
cond/LessEqual/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	T
cond/LessEqual/yConst*
_output_shapes
: *
dtype0	*
valueB		 Rܒ~
cond/LessEqual	LessEqual%cond/LessEqual/ReadVariableOp:value:0cond/LessEqual/y:output:0*
T0	*
_output_shapes
: O
cond/Less/xConst*
_output_shapes
: *
dtype0*
valueB	 :ܒM
cond/Less/yConst*
_output_shapes
: *
dtype0*
value	B : ^
	cond/LessLesscond/Less/x:output:0cond/Less/y:output:0*
T0*
_output_shapes
: V
cond/LogicalOr	LogicalOrcond/LessEqual:z:0cond/Less:z:0*
_output_shapes
: `
cond/LogicalAnd
LogicalAndcond/GreaterEqual:z:0cond/LogicalOr:z:0*
_output_shapes
: �
cond/Sub/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	M

cond/Sub/yConst*
_output_shapes
: *
dtype0	*
value
B	 R�f
cond/SubSubcond/Sub/ReadVariableOp:value:0cond/Sub/y:output:0*
T0	*
_output_shapes
: R
cond/FloorMod/yConst*
_output_shapes
: *
dtype0	*
value
B	 R�b
cond/FloorModFloorModcond/Sub:z:0cond/FloorMod/y:output:0*
T0	*
_output_shapes
: N
cond/Equal/yConst*
_output_shapes
: *
dtype0	*
value	B	 R ^

cond/EqualEqualcond/FloorMod:z:0cond/Equal/y:output:0*
T0	*
_output_shapes
: \
cond/LogicalAnd_1
LogicalAndcond/LogicalAnd:z:0cond/Equal:z:0*
_output_shapes
: �
#cond/pruning_ops/Abs/ReadVariableOpReadVariableOp,cond_pruning_ops_abs_readvariableop_resource*
_output_shapes

:  *
dtype0q
cond/pruning_ops/AbsAbs+cond/pruning_ops/Abs/ReadVariableOp:value:0*
T0*
_output_shapes

:  X
cond/pruning_ops/SizeConst*
_output_shapes
: *
dtype0*
value
B :�m
cond/pruning_ops/CastCastcond/pruning_ops/Size:output:0*

DstT0*

SrcT0*
_output_shapes
: [
cond/pruning_ops/sub/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
cond/pruning_ops/subSubcond/pruning_ops/sub/x:output:03cond/polynomial_decay_pruning_schedule/sparsity:z:0*
T0*
_output_shapes
: q
cond/pruning_ops/mulMulcond/pruning_ops/Cast:y:0cond/pruning_ops/sub:z:0*
T0*
_output_shapes
: Z
cond/pruning_ops/RoundRoundcond/pruning_ops/mul:z:0*
T0*
_output_shapes
: _
cond/pruning_ops/Maximum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
cond/pruning_ops/MaximumMaximumcond/pruning_ops/Round:y:0#cond/pruning_ops/Maximum/y:output:0*
T0*
_output_shapes
: m
cond/pruning_ops/Cast_1Castcond/pruning_ops/Maximum:z:0*

DstT0*

SrcT0*
_output_shapes
: q
cond/pruning_ops/Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB:
����������
cond/pruning_ops/ReshapeReshapecond/pruning_ops/Abs:y:0'cond/pruning_ops/Reshape/shape:output:0*
T0*
_output_shapes	
:�Z
cond/pruning_ops/Size_1Const*
_output_shapes
: *
dtype0*
value
B :��
cond/pruning_ops/TopKV2TopKV2!cond/pruning_ops/Reshape:output:0 cond/pruning_ops/Size_1:output:0*
T0*"
_output_shapes
:�:�Z
cond/pruning_ops/sub_1/yConst*
_output_shapes
: *
dtype0*
value	B :~
cond/pruning_ops/sub_1Subcond/pruning_ops/Cast_1:y:0!cond/pruning_ops/sub_1/y:output:0*
T0*
_output_shapes
: `
cond/pruning_ops/GatherV2/axisConst*
_output_shapes
: *
dtype0*
value	B : �
cond/pruning_ops/GatherV2GatherV2 cond/pruning_ops/TopKV2:values:0cond/pruning_ops/sub_1:z:0'cond/pruning_ops/GatherV2/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
: Z
cond/pruning_ops/sub_2/yConst*
_output_shapes
: *
dtype0*
value	B :~
cond/pruning_ops/sub_2Subcond/pruning_ops/Cast_1:y:0!cond/pruning_ops/sub_2/y:output:0*
T0*
_output_shapes
: b
 cond/pruning_ops/GatherV2_1/axisConst*
_output_shapes
: *
dtype0*
value	B : �
cond/pruning_ops/GatherV2_1GatherV2!cond/pruning_ops/TopKV2:indices:0cond/pruning_ops/sub_2:z:0)cond/pruning_ops/GatherV2_1/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
: �
cond/pruning_ops/GreaterEqualGreaterEqualcond/pruning_ops/Abs:y:0"cond/pruning_ops/GatherV2:output:0*
T0*
_output_shapes

:  Z
cond/pruning_ops/Size_2Const*
_output_shapes
: *
dtype0*
value
B :�`
cond/pruning_ops/one_hot/ConstConst*
_output_shapes
: *
dtype0
*
value	B
 Zb
 cond/pruning_ops/one_hot/Const_1Const*
_output_shapes
: *
dtype0
*
value	B
 Z �
cond/pruning_ops/one_hotOneHot$cond/pruning_ops/GatherV2_1:output:0 cond/pruning_ops/Size_2:output:0'cond/pruning_ops/one_hot/Const:output:0)cond/pruning_ops/one_hot/Const_1:output:0*
TI0*
T0
*
_output_shapes	
:�q
 cond/pruning_ops/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"        �
cond/pruning_ops/Reshape_1Reshape!cond/pruning_ops/one_hot:output:0)cond/pruning_ops/Reshape_1/shape:output:0*
T0
*
_output_shapes

:  �
cond/pruning_ops/LogicalOr	LogicalOr!cond/pruning_ops/GreaterEqual:z:0#cond/pruning_ops/Reshape_1:output:0*
_output_shapes

:  i
	cond/CastCastcond/pruning_ops/LogicalOr:z:0*

DstT0*

SrcT0
*
_output_shapes

:  �
cond/AssignVariableOpAssignVariableOpcond_assignvariableop_resourcecond/Cast:y:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�
cond/AssignVariableOp_1AssignVariableOp cond_assignvariableop_1_resource"cond/pruning_ops/GatherV2:output:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�
cond/group_depsNoOp^cond/AssignVariableOp^cond/AssignVariableOp_1",/job:localhost/replica:0/task:0/device:GPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 h
cond/IdentityIdentitycond_identity_logicaland_1^cond/group_deps*
T0
*
_output_shapes
: `
cond/Identity_1Identitycond/Identity:output:0
^cond/NoOp*
T0
*
_output_shapes
: �
	cond/NoOpNoOp^cond/AssignVariableOp^cond/AssignVariableOp_1!^cond/GreaterEqual/ReadVariableOp^cond/LessEqual/ReadVariableOp^cond/Sub/ReadVariableOp6^cond/polynomial_decay_pruning_schedule/ReadVariableOp$^cond/pruning_ops/Abs/ReadVariableOp*
_output_shapes
 "+
cond_identity_1cond/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes

: : : : : 22
cond/AssignVariableOp_1cond/AssignVariableOp_12.
cond/AssignVariableOpcond/AssignVariableOp2D
 cond/GreaterEqual/ReadVariableOp cond/GreaterEqual/ReadVariableOp2>
cond/LessEqual/ReadVariableOpcond/LessEqual/ReadVariableOp22
cond/Sub/ReadVariableOpcond/Sub/ReadVariableOp2n
5cond/polynomial_decay_pruning_schedule/ReadVariableOp5cond/polynomial_decay_pruning_schedule/ReadVariableOp2J
#cond/pruning_ops/Abs/ReadVariableOp#cond/pruning_ops/Abs/ReadVariableOp:D@

_output_shapes
: 
&
_user_specified_nameLogicalAnd_1:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:( $
"
_user_specified_name
resource
��
�
"__inference__traced_restore_568525
file_prefix@
.assignvariableop_prune_low_magnitude_phi1_mask: ?
5assignvariableop_1_prune_low_magnitude_phi1_threshold: B
8assignvariableop_2_prune_low_magnitude_phi1_pruning_step:	 B
0assignvariableop_3_prune_low_magnitude_phi2_mask:  ?
5assignvariableop_4_prune_low_magnitude_phi2_threshold: B
8assignvariableop_5_prune_low_magnitude_phi2_pruning_step:	 B
0assignvariableop_6_prune_low_magnitude_phi3_mask:  ?
5assignvariableop_7_prune_low_magnitude_phi3_threshold: B
8assignvariableop_8_prune_low_magnitude_phi3_pruning_step:	 A
/assignvariableop_9_prune_low_magnitude_rho_mask:  ?
5assignvariableop_10_prune_low_magnitude_rho_threshold: B
8assignvariableop_11_prune_low_magnitude_rho_pruning_step:	 D
2assignvariableop_12_prune_low_magnitude_dense_mask: A
7assignvariableop_13_prune_low_magnitude_dense_threshold: D
:assignvariableop_14_prune_low_magnitude_dense_pruning_step:	 1
assignvariableop_15_phi1_kernel: +
assignvariableop_16_phi1_bias: 1
assignvariableop_17_phi2_kernel:  +
assignvariableop_18_phi2_bias: 1
assignvariableop_19_phi3_kernel:  +
assignvariableop_20_phi3_bias: 0
assignvariableop_21_rho_kernel:  *
assignvariableop_22_rho_bias: 2
 assignvariableop_23_dense_kernel: ,
assignvariableop_24_dense_bias:'
assignvariableop_25_iteration:	 +
!assignvariableop_26_learning_rate: 8
&assignvariableop_27_adam_m_phi1_kernel: 8
&assignvariableop_28_adam_v_phi1_kernel: 2
$assignvariableop_29_adam_m_phi1_bias: 2
$assignvariableop_30_adam_v_phi1_bias: 8
&assignvariableop_31_adam_m_phi2_kernel:  8
&assignvariableop_32_adam_v_phi2_kernel:  2
$assignvariableop_33_adam_m_phi2_bias: 2
$assignvariableop_34_adam_v_phi2_bias: 8
&assignvariableop_35_adam_m_phi3_kernel:  8
&assignvariableop_36_adam_v_phi3_kernel:  2
$assignvariableop_37_adam_m_phi3_bias: 2
$assignvariableop_38_adam_v_phi3_bias: 7
%assignvariableop_39_adam_m_rho_kernel:  7
%assignvariableop_40_adam_v_rho_kernel:  1
#assignvariableop_41_adam_m_rho_bias: 1
#assignvariableop_42_adam_v_rho_bias: 9
'assignvariableop_43_adam_m_dense_kernel: 9
'assignvariableop_44_adam_v_dense_kernel: 3
%assignvariableop_45_adam_m_dense_bias:3
%assignvariableop_46_adam_v_dense_bias:%
assignvariableop_47_total_1: %
assignvariableop_48_count_1: #
assignvariableop_49_total: #
assignvariableop_50_count: 
identity_52��AssignVariableOp�AssignVariableOp_1�AssignVariableOp_10�AssignVariableOp_11�AssignVariableOp_12�AssignVariableOp_13�AssignVariableOp_14�AssignVariableOp_15�AssignVariableOp_16�AssignVariableOp_17�AssignVariableOp_18�AssignVariableOp_19�AssignVariableOp_2�AssignVariableOp_20�AssignVariableOp_21�AssignVariableOp_22�AssignVariableOp_23�AssignVariableOp_24�AssignVariableOp_25�AssignVariableOp_26�AssignVariableOp_27�AssignVariableOp_28�AssignVariableOp_29�AssignVariableOp_3�AssignVariableOp_30�AssignVariableOp_31�AssignVariableOp_32�AssignVariableOp_33�AssignVariableOp_34�AssignVariableOp_35�AssignVariableOp_36�AssignVariableOp_37�AssignVariableOp_38�AssignVariableOp_39�AssignVariableOp_4�AssignVariableOp_40�AssignVariableOp_41�AssignVariableOp_42�AssignVariableOp_43�AssignVariableOp_44�AssignVariableOp_45�AssignVariableOp_46�AssignVariableOp_47�AssignVariableOp_48�AssignVariableOp_49�AssignVariableOp_5�AssignVariableOp_50�AssignVariableOp_6�AssignVariableOp_7�AssignVariableOp_8�AssignVariableOp_9�
RestoreV2/tensor_namesConst"/device:CPU:0*
_output_shapes
:4*
dtype0*�
value�B�4B4layer_with_weights-0/mask/.ATTRIBUTES/VARIABLE_VALUEB9layer_with_weights-0/threshold/.ATTRIBUTES/VARIABLE_VALUEB<layer_with_weights-0/pruning_step/.ATTRIBUTES/VARIABLE_VALUEB4layer_with_weights-1/mask/.ATTRIBUTES/VARIABLE_VALUEB9layer_with_weights-1/threshold/.ATTRIBUTES/VARIABLE_VALUEB<layer_with_weights-1/pruning_step/.ATTRIBUTES/VARIABLE_VALUEB4layer_with_weights-2/mask/.ATTRIBUTES/VARIABLE_VALUEB9layer_with_weights-2/threshold/.ATTRIBUTES/VARIABLE_VALUEB<layer_with_weights-2/pruning_step/.ATTRIBUTES/VARIABLE_VALUEB4layer_with_weights-3/mask/.ATTRIBUTES/VARIABLE_VALUEB9layer_with_weights-3/threshold/.ATTRIBUTES/VARIABLE_VALUEB<layer_with_weights-3/pruning_step/.ATTRIBUTES/VARIABLE_VALUEB4layer_with_weights-4/mask/.ATTRIBUTES/VARIABLE_VALUEB9layer_with_weights-4/threshold/.ATTRIBUTES/VARIABLE_VALUEB<layer_with_weights-4/pruning_step/.ATTRIBUTES/VARIABLE_VALUEB&variables/0/.ATTRIBUTES/VARIABLE_VALUEB&variables/1/.ATTRIBUTES/VARIABLE_VALUEB&variables/5/.ATTRIBUTES/VARIABLE_VALUEB&variables/6/.ATTRIBUTES/VARIABLE_VALUEB'variables/10/.ATTRIBUTES/VARIABLE_VALUEB'variables/11/.ATTRIBUTES/VARIABLE_VALUEB'variables/15/.ATTRIBUTES/VARIABLE_VALUEB'variables/16/.ATTRIBUTES/VARIABLE_VALUEB'variables/20/.ATTRIBUTES/VARIABLE_VALUEB'variables/21/.ATTRIBUTES/VARIABLE_VALUEB0optimizer/_iterations/.ATTRIBUTES/VARIABLE_VALUEB3optimizer/_learning_rate/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/1/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/2/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/3/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/4/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/5/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/6/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/7/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/8/.ATTRIBUTES/VARIABLE_VALUEB1optimizer/_variables/9/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/10/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/11/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/12/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/13/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/14/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/15/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/16/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/17/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/18/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/19/.ATTRIBUTES/VARIABLE_VALUEB2optimizer/_variables/20/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/0/total/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/0/count/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/1/total/.ATTRIBUTES/VARIABLE_VALUEB4keras_api/metrics/1/count/.ATTRIBUTES/VARIABLE_VALUEB_CHECKPOINTABLE_OBJECT_GRAPH�
RestoreV2/shape_and_slicesConst"/device:CPU:0*
_output_shapes
:4*
dtype0*{
valuerBp4B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B �
	RestoreV2	RestoreV2file_prefixRestoreV2/tensor_names:output:0#RestoreV2/shape_and_slices:output:0"/device:CPU:0*�
_output_shapes�
�::::::::::::::::::::::::::::::::::::::::::::::::::::*B
dtypes8
624						[
IdentityIdentityRestoreV2:tensors:0"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOpAssignVariableOp.assignvariableop_prune_low_magnitude_phi1_maskIdentity:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_1IdentityRestoreV2:tensors:1"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_1AssignVariableOp5assignvariableop_1_prune_low_magnitude_phi1_thresholdIdentity_1:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_2IdentityRestoreV2:tensors:2"/device:CPU:0*
T0	*
_output_shapes
:�
AssignVariableOp_2AssignVariableOp8assignvariableop_2_prune_low_magnitude_phi1_pruning_stepIdentity_2:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0	]

Identity_3IdentityRestoreV2:tensors:3"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_3AssignVariableOp0assignvariableop_3_prune_low_magnitude_phi2_maskIdentity_3:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_4IdentityRestoreV2:tensors:4"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_4AssignVariableOp5assignvariableop_4_prune_low_magnitude_phi2_thresholdIdentity_4:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_5IdentityRestoreV2:tensors:5"/device:CPU:0*
T0	*
_output_shapes
:�
AssignVariableOp_5AssignVariableOp8assignvariableop_5_prune_low_magnitude_phi2_pruning_stepIdentity_5:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0	]

Identity_6IdentityRestoreV2:tensors:6"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_6AssignVariableOp0assignvariableop_6_prune_low_magnitude_phi3_maskIdentity_6:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_7IdentityRestoreV2:tensors:7"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_7AssignVariableOp5assignvariableop_7_prune_low_magnitude_phi3_thresholdIdentity_7:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0]

Identity_8IdentityRestoreV2:tensors:8"/device:CPU:0*
T0	*
_output_shapes
:�
AssignVariableOp_8AssignVariableOp8assignvariableop_8_prune_low_magnitude_phi3_pruning_stepIdentity_8:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0	]

Identity_9IdentityRestoreV2:tensors:9"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_9AssignVariableOp/assignvariableop_9_prune_low_magnitude_rho_maskIdentity_9:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_10IdentityRestoreV2:tensors:10"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_10AssignVariableOp5assignvariableop_10_prune_low_magnitude_rho_thresholdIdentity_10:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_11IdentityRestoreV2:tensors:11"/device:CPU:0*
T0	*
_output_shapes
:�
AssignVariableOp_11AssignVariableOp8assignvariableop_11_prune_low_magnitude_rho_pruning_stepIdentity_11:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0	_
Identity_12IdentityRestoreV2:tensors:12"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_12AssignVariableOp2assignvariableop_12_prune_low_magnitude_dense_maskIdentity_12:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_13IdentityRestoreV2:tensors:13"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_13AssignVariableOp7assignvariableop_13_prune_low_magnitude_dense_thresholdIdentity_13:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_14IdentityRestoreV2:tensors:14"/device:CPU:0*
T0	*
_output_shapes
:�
AssignVariableOp_14AssignVariableOp:assignvariableop_14_prune_low_magnitude_dense_pruning_stepIdentity_14:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0	_
Identity_15IdentityRestoreV2:tensors:15"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_15AssignVariableOpassignvariableop_15_phi1_kernelIdentity_15:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_16IdentityRestoreV2:tensors:16"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_16AssignVariableOpassignvariableop_16_phi1_biasIdentity_16:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_17IdentityRestoreV2:tensors:17"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_17AssignVariableOpassignvariableop_17_phi2_kernelIdentity_17:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_18IdentityRestoreV2:tensors:18"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_18AssignVariableOpassignvariableop_18_phi2_biasIdentity_18:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_19IdentityRestoreV2:tensors:19"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_19AssignVariableOpassignvariableop_19_phi3_kernelIdentity_19:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_20IdentityRestoreV2:tensors:20"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_20AssignVariableOpassignvariableop_20_phi3_biasIdentity_20:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_21IdentityRestoreV2:tensors:21"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_21AssignVariableOpassignvariableop_21_rho_kernelIdentity_21:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_22IdentityRestoreV2:tensors:22"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_22AssignVariableOpassignvariableop_22_rho_biasIdentity_22:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_23IdentityRestoreV2:tensors:23"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_23AssignVariableOp assignvariableop_23_dense_kernelIdentity_23:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_24IdentityRestoreV2:tensors:24"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_24AssignVariableOpassignvariableop_24_dense_biasIdentity_24:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_25IdentityRestoreV2:tensors:25"/device:CPU:0*
T0	*
_output_shapes
:�
AssignVariableOp_25AssignVariableOpassignvariableop_25_iterationIdentity_25:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0	_
Identity_26IdentityRestoreV2:tensors:26"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_26AssignVariableOp!assignvariableop_26_learning_rateIdentity_26:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_27IdentityRestoreV2:tensors:27"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_27AssignVariableOp&assignvariableop_27_adam_m_phi1_kernelIdentity_27:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_28IdentityRestoreV2:tensors:28"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_28AssignVariableOp&assignvariableop_28_adam_v_phi1_kernelIdentity_28:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_29IdentityRestoreV2:tensors:29"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_29AssignVariableOp$assignvariableop_29_adam_m_phi1_biasIdentity_29:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_30IdentityRestoreV2:tensors:30"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_30AssignVariableOp$assignvariableop_30_adam_v_phi1_biasIdentity_30:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_31IdentityRestoreV2:tensors:31"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_31AssignVariableOp&assignvariableop_31_adam_m_phi2_kernelIdentity_31:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_32IdentityRestoreV2:tensors:32"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_32AssignVariableOp&assignvariableop_32_adam_v_phi2_kernelIdentity_32:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_33IdentityRestoreV2:tensors:33"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_33AssignVariableOp$assignvariableop_33_adam_m_phi2_biasIdentity_33:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_34IdentityRestoreV2:tensors:34"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_34AssignVariableOp$assignvariableop_34_adam_v_phi2_biasIdentity_34:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_35IdentityRestoreV2:tensors:35"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_35AssignVariableOp&assignvariableop_35_adam_m_phi3_kernelIdentity_35:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_36IdentityRestoreV2:tensors:36"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_36AssignVariableOp&assignvariableop_36_adam_v_phi3_kernelIdentity_36:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_37IdentityRestoreV2:tensors:37"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_37AssignVariableOp$assignvariableop_37_adam_m_phi3_biasIdentity_37:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_38IdentityRestoreV2:tensors:38"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_38AssignVariableOp$assignvariableop_38_adam_v_phi3_biasIdentity_38:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_39IdentityRestoreV2:tensors:39"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_39AssignVariableOp%assignvariableop_39_adam_m_rho_kernelIdentity_39:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_40IdentityRestoreV2:tensors:40"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_40AssignVariableOp%assignvariableop_40_adam_v_rho_kernelIdentity_40:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_41IdentityRestoreV2:tensors:41"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_41AssignVariableOp#assignvariableop_41_adam_m_rho_biasIdentity_41:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_42IdentityRestoreV2:tensors:42"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_42AssignVariableOp#assignvariableop_42_adam_v_rho_biasIdentity_42:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_43IdentityRestoreV2:tensors:43"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_43AssignVariableOp'assignvariableop_43_adam_m_dense_kernelIdentity_43:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_44IdentityRestoreV2:tensors:44"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_44AssignVariableOp'assignvariableop_44_adam_v_dense_kernelIdentity_44:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_45IdentityRestoreV2:tensors:45"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_45AssignVariableOp%assignvariableop_45_adam_m_dense_biasIdentity_45:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_46IdentityRestoreV2:tensors:46"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_46AssignVariableOp%assignvariableop_46_adam_v_dense_biasIdentity_46:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_47IdentityRestoreV2:tensors:47"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_47AssignVariableOpassignvariableop_47_total_1Identity_47:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_48IdentityRestoreV2:tensors:48"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_48AssignVariableOpassignvariableop_48_count_1Identity_48:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_49IdentityRestoreV2:tensors:49"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_49AssignVariableOpassignvariableop_49_totalIdentity_49:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0_
Identity_50IdentityRestoreV2:tensors:50"/device:CPU:0*
T0*
_output_shapes
:�
AssignVariableOp_50AssignVariableOpassignvariableop_50_countIdentity_50:output:0"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0Y
NoOpNoOp"/device:CPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 �	
Identity_51Identityfile_prefix^AssignVariableOp^AssignVariableOp_1^AssignVariableOp_10^AssignVariableOp_11^AssignVariableOp_12^AssignVariableOp_13^AssignVariableOp_14^AssignVariableOp_15^AssignVariableOp_16^AssignVariableOp_17^AssignVariableOp_18^AssignVariableOp_19^AssignVariableOp_2^AssignVariableOp_20^AssignVariableOp_21^AssignVariableOp_22^AssignVariableOp_23^AssignVariableOp_24^AssignVariableOp_25^AssignVariableOp_26^AssignVariableOp_27^AssignVariableOp_28^AssignVariableOp_29^AssignVariableOp_3^AssignVariableOp_30^AssignVariableOp_31^AssignVariableOp_32^AssignVariableOp_33^AssignVariableOp_34^AssignVariableOp_35^AssignVariableOp_36^AssignVariableOp_37^AssignVariableOp_38^AssignVariableOp_39^AssignVariableOp_4^AssignVariableOp_40^AssignVariableOp_41^AssignVariableOp_42^AssignVariableOp_43^AssignVariableOp_44^AssignVariableOp_45^AssignVariableOp_46^AssignVariableOp_47^AssignVariableOp_48^AssignVariableOp_49^AssignVariableOp_5^AssignVariableOp_50^AssignVariableOp_6^AssignVariableOp_7^AssignVariableOp_8^AssignVariableOp_9^NoOp"/device:CPU:0*
T0*
_output_shapes
: W
Identity_52IdentityIdentity_51:output:0^NoOp_1*
T0*
_output_shapes
: �
NoOp_1NoOp^AssignVariableOp^AssignVariableOp_1^AssignVariableOp_10^AssignVariableOp_11^AssignVariableOp_12^AssignVariableOp_13^AssignVariableOp_14^AssignVariableOp_15^AssignVariableOp_16^AssignVariableOp_17^AssignVariableOp_18^AssignVariableOp_19^AssignVariableOp_2^AssignVariableOp_20^AssignVariableOp_21^AssignVariableOp_22^AssignVariableOp_23^AssignVariableOp_24^AssignVariableOp_25^AssignVariableOp_26^AssignVariableOp_27^AssignVariableOp_28^AssignVariableOp_29^AssignVariableOp_3^AssignVariableOp_30^AssignVariableOp_31^AssignVariableOp_32^AssignVariableOp_33^AssignVariableOp_34^AssignVariableOp_35^AssignVariableOp_36^AssignVariableOp_37^AssignVariableOp_38^AssignVariableOp_39^AssignVariableOp_4^AssignVariableOp_40^AssignVariableOp_41^AssignVariableOp_42^AssignVariableOp_43^AssignVariableOp_44^AssignVariableOp_45^AssignVariableOp_46^AssignVariableOp_47^AssignVariableOp_48^AssignVariableOp_49^AssignVariableOp_5^AssignVariableOp_50^AssignVariableOp_6^AssignVariableOp_7^AssignVariableOp_8^AssignVariableOp_9*
_output_shapes
 "#
identity_52Identity_52:output:0*(
_construction_contextkEagerRuntime*{
_input_shapesj
h: : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : : 2*
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
AssignVariableOp_35AssignVariableOp_352*
AssignVariableOp_36AssignVariableOp_362*
AssignVariableOp_37AssignVariableOp_372*
AssignVariableOp_38AssignVariableOp_382*
AssignVariableOp_39AssignVariableOp_392(
AssignVariableOp_3AssignVariableOp_32*
AssignVariableOp_40AssignVariableOp_402*
AssignVariableOp_41AssignVariableOp_412*
AssignVariableOp_42AssignVariableOp_422*
AssignVariableOp_43AssignVariableOp_432*
AssignVariableOp_44AssignVariableOp_442*
AssignVariableOp_45AssignVariableOp_452*
AssignVariableOp_46AssignVariableOp_462*
AssignVariableOp_47AssignVariableOp_472*
AssignVariableOp_48AssignVariableOp_482*
AssignVariableOp_49AssignVariableOp_492(
AssignVariableOp_4AssignVariableOp_42*
AssignVariableOp_50AssignVariableOp_502(
AssignVariableOp_5AssignVariableOp_52(
AssignVariableOp_6AssignVariableOp_62(
AssignVariableOp_7AssignVariableOp_72(
AssignVariableOp_8AssignVariableOp_82(
AssignVariableOp_9AssignVariableOp_92$
AssignVariableOpAssignVariableOp:%3!

_user_specified_namecount:%2!

_user_specified_nametotal:'1#
!
_user_specified_name	count_1:'0#
!
_user_specified_name	total_1:1/-
+
_user_specified_nameAdam/v/dense/bias:1.-
+
_user_specified_nameAdam/m/dense/bias:3-/
-
_user_specified_nameAdam/v/dense/kernel:3,/
-
_user_specified_nameAdam/m/dense/kernel:/++
)
_user_specified_nameAdam/v/rho/bias:/*+
)
_user_specified_nameAdam/m/rho/bias:1)-
+
_user_specified_nameAdam/v/rho/kernel:1(-
+
_user_specified_nameAdam/m/rho/kernel:0',
*
_user_specified_nameAdam/v/phi3/bias:0&,
*
_user_specified_nameAdam/m/phi3/bias:2%.
,
_user_specified_nameAdam/v/phi3/kernel:2$.
,
_user_specified_nameAdam/m/phi3/kernel:0#,
*
_user_specified_nameAdam/v/phi2/bias:0",
*
_user_specified_nameAdam/m/phi2/bias:2!.
,
_user_specified_nameAdam/v/phi2/kernel:2 .
,
_user_specified_nameAdam/m/phi2/kernel:0,
*
_user_specified_nameAdam/v/phi1/bias:0,
*
_user_specified_nameAdam/m/phi1/bias:2.
,
_user_specified_nameAdam/v/phi1/kernel:2.
,
_user_specified_nameAdam/m/phi1/kernel:-)
'
_user_specified_namelearning_rate:)%
#
_user_specified_name	iteration:*&
$
_user_specified_name
dense/bias:,(
&
_user_specified_namedense/kernel:($
"
_user_specified_name
rho/bias:*&
$
_user_specified_name
rho/kernel:)%
#
_user_specified_name	phi3/bias:+'
%
_user_specified_namephi3/kernel:)%
#
_user_specified_name	phi2/bias:+'
%
_user_specified_namephi2/kernel:)%
#
_user_specified_name	phi1/bias:+'
%
_user_specified_namephi1/kernel:FB
@
_user_specified_name(&prune_low_magnitude_dense/pruning_step:C?
=
_user_specified_name%#prune_low_magnitude_dense/threshold:>:
8
_user_specified_name prune_low_magnitude_dense/mask:D@
>
_user_specified_name&$prune_low_magnitude_rho/pruning_step:A=
;
_user_specified_name#!prune_low_magnitude_rho/threshold:<
8
6
_user_specified_nameprune_low_magnitude_rho/mask:E	A
?
_user_specified_name'%prune_low_magnitude_phi3/pruning_step:B>
<
_user_specified_name$"prune_low_magnitude_phi3/threshold:=9
7
_user_specified_nameprune_low_magnitude_phi3/mask:EA
?
_user_specified_name'%prune_low_magnitude_phi2/pruning_step:B>
<
_user_specified_name$"prune_low_magnitude_phi2/threshold:=9
7
_user_specified_nameprune_low_magnitude_phi2/mask:EA
?
_user_specified_name'%prune_low_magnitude_phi1/pruning_step:B>
<
_user_specified_name$"prune_low_magnitude_phi1/threshold:=9
7
_user_specified_nameprune_low_magnitude_phi1/mask:C ?

_output_shapes
: 
%
_user_specified_namefile_prefix
�X
�
cond_true_564304H
>cond_polynomial_decay_pruning_schedule_readvariableop_resource:	 >
,cond_pruning_ops_abs_readvariableop_resource:  0
cond_assignvariableop_resource:  *
 cond_assignvariableop_1_resource: 
cond_identity_logicaland_1

cond_identity_1
��cond/AssignVariableOp�cond/AssignVariableOp_1� cond/GreaterEqual/ReadVariableOp�cond/LessEqual/ReadVariableOp�cond/Sub/ReadVariableOp�5cond/polynomial_decay_pruning_schedule/ReadVariableOp�#cond/pruning_ops/Abs/ReadVariableOp�
5cond/polynomial_decay_pruning_schedule/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	o
,cond/polynomial_decay_pruning_schedule/sub/yConst*
_output_shapes
: *
dtype0	*
value
B	 R��
*cond/polynomial_decay_pruning_schedule/subSub=cond/polynomial_decay_pruning_schedule/ReadVariableOp:value:05cond/polynomial_decay_pruning_schedule/sub/y:output:0*
T0	*
_output_shapes
: �
+cond/polynomial_decay_pruning_schedule/CastCast.cond/polynomial_decay_pruning_schedule/sub:z:0*

DstT0*

SrcT0	*
_output_shapes
: u
0cond/polynomial_decay_pruning_schedule/truediv/yConst*
_output_shapes
: *
dtype0*
valueB
 * �jF�
.cond/polynomial_decay_pruning_schedule/truedivRealDiv/cond/polynomial_decay_pruning_schedule/Cast:y:09cond/polynomial_decay_pruning_schedule/truediv/y:output:0*
T0*
_output_shapes
: u
0cond/polynomial_decay_pruning_schedule/Maximum/xConst*
_output_shapes
: *
dtype0*
valueB
 *    �
.cond/polynomial_decay_pruning_schedule/MaximumMaximum9cond/polynomial_decay_pruning_schedule/Maximum/x:output:02cond/polynomial_decay_pruning_schedule/truediv:z:0*
T0*
_output_shapes
: u
0cond/polynomial_decay_pruning_schedule/Minimum/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
.cond/polynomial_decay_pruning_schedule/MinimumMinimum9cond/polynomial_decay_pruning_schedule/Minimum/x:output:02cond/polynomial_decay_pruning_schedule/Maximum:z:0*
T0*
_output_shapes
: s
.cond/polynomial_decay_pruning_schedule/sub_1/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
,cond/polynomial_decay_pruning_schedule/sub_1Sub7cond/polynomial_decay_pruning_schedule/sub_1/x:output:02cond/polynomial_decay_pruning_schedule/Minimum:z:0*
T0*
_output_shapes
: q
,cond/polynomial_decay_pruning_schedule/Pow/yConst*
_output_shapes
: *
dtype0*
valueB
 *  @@�
*cond/polynomial_decay_pruning_schedule/PowPow0cond/polynomial_decay_pruning_schedule/sub_1:z:05cond/polynomial_decay_pruning_schedule/Pow/y:output:0*
T0*
_output_shapes
: q
,cond/polynomial_decay_pruning_schedule/Mul/xConst*
_output_shapes
: *
dtype0*
valueB
 *   ��
*cond/polynomial_decay_pruning_schedule/MulMul5cond/polynomial_decay_pruning_schedule/Mul/x:output:0.cond/polynomial_decay_pruning_schedule/Pow:z:0*
T0*
_output_shapes
: v
1cond/polynomial_decay_pruning_schedule/sparsity/yConst*
_output_shapes
: *
dtype0*
valueB
 *   ?�
/cond/polynomial_decay_pruning_schedule/sparsityAddV2.cond/polynomial_decay_pruning_schedule/Mul:z:0:cond/polynomial_decay_pruning_schedule/sparsity/y:output:0*
T0*
_output_shapes
: �
 cond/GreaterEqual/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	V
cond/GreaterEqual/yConst*
_output_shapes
: *
dtype0	*
value
B	 R��
cond/GreaterEqualGreaterEqual(cond/GreaterEqual/ReadVariableOp:value:0cond/GreaterEqual/y:output:0*
T0	*
_output_shapes
: �
cond/LessEqual/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	T
cond/LessEqual/yConst*
_output_shapes
: *
dtype0	*
valueB		 Rܒ~
cond/LessEqual	LessEqual%cond/LessEqual/ReadVariableOp:value:0cond/LessEqual/y:output:0*
T0	*
_output_shapes
: O
cond/Less/xConst*
_output_shapes
: *
dtype0*
valueB	 :ܒM
cond/Less/yConst*
_output_shapes
: *
dtype0*
value	B : ^
	cond/LessLesscond/Less/x:output:0cond/Less/y:output:0*
T0*
_output_shapes
: V
cond/LogicalOr	LogicalOrcond/LessEqual:z:0cond/Less:z:0*
_output_shapes
: `
cond/LogicalAnd
LogicalAndcond/GreaterEqual:z:0cond/LogicalOr:z:0*
_output_shapes
: �
cond/Sub/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	M

cond/Sub/yConst*
_output_shapes
: *
dtype0	*
value
B	 R�f
cond/SubSubcond/Sub/ReadVariableOp:value:0cond/Sub/y:output:0*
T0	*
_output_shapes
: R
cond/FloorMod/yConst*
_output_shapes
: *
dtype0	*
value
B	 R�b
cond/FloorModFloorModcond/Sub:z:0cond/FloorMod/y:output:0*
T0	*
_output_shapes
: N
cond/Equal/yConst*
_output_shapes
: *
dtype0	*
value	B	 R ^

cond/EqualEqualcond/FloorMod:z:0cond/Equal/y:output:0*
T0	*
_output_shapes
: \
cond/LogicalAnd_1
LogicalAndcond/LogicalAnd:z:0cond/Equal:z:0*
_output_shapes
: �
#cond/pruning_ops/Abs/ReadVariableOpReadVariableOp,cond_pruning_ops_abs_readvariableop_resource*
_output_shapes

:  *
dtype0q
cond/pruning_ops/AbsAbs+cond/pruning_ops/Abs/ReadVariableOp:value:0*
T0*
_output_shapes

:  X
cond/pruning_ops/SizeConst*
_output_shapes
: *
dtype0*
value
B :�m
cond/pruning_ops/CastCastcond/pruning_ops/Size:output:0*

DstT0*

SrcT0*
_output_shapes
: [
cond/pruning_ops/sub/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
cond/pruning_ops/subSubcond/pruning_ops/sub/x:output:03cond/polynomial_decay_pruning_schedule/sparsity:z:0*
T0*
_output_shapes
: q
cond/pruning_ops/mulMulcond/pruning_ops/Cast:y:0cond/pruning_ops/sub:z:0*
T0*
_output_shapes
: Z
cond/pruning_ops/RoundRoundcond/pruning_ops/mul:z:0*
T0*
_output_shapes
: _
cond/pruning_ops/Maximum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
cond/pruning_ops/MaximumMaximumcond/pruning_ops/Round:y:0#cond/pruning_ops/Maximum/y:output:0*
T0*
_output_shapes
: m
cond/pruning_ops/Cast_1Castcond/pruning_ops/Maximum:z:0*

DstT0*

SrcT0*
_output_shapes
: q
cond/pruning_ops/Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB:
����������
cond/pruning_ops/ReshapeReshapecond/pruning_ops/Abs:y:0'cond/pruning_ops/Reshape/shape:output:0*
T0*
_output_shapes	
:�Z
cond/pruning_ops/Size_1Const*
_output_shapes
: *
dtype0*
value
B :��
cond/pruning_ops/TopKV2TopKV2!cond/pruning_ops/Reshape:output:0 cond/pruning_ops/Size_1:output:0*
T0*"
_output_shapes
:�:�Z
cond/pruning_ops/sub_1/yConst*
_output_shapes
: *
dtype0*
value	B :~
cond/pruning_ops/sub_1Subcond/pruning_ops/Cast_1:y:0!cond/pruning_ops/sub_1/y:output:0*
T0*
_output_shapes
: `
cond/pruning_ops/GatherV2/axisConst*
_output_shapes
: *
dtype0*
value	B : �
cond/pruning_ops/GatherV2GatherV2 cond/pruning_ops/TopKV2:values:0cond/pruning_ops/sub_1:z:0'cond/pruning_ops/GatherV2/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
: Z
cond/pruning_ops/sub_2/yConst*
_output_shapes
: *
dtype0*
value	B :~
cond/pruning_ops/sub_2Subcond/pruning_ops/Cast_1:y:0!cond/pruning_ops/sub_2/y:output:0*
T0*
_output_shapes
: b
 cond/pruning_ops/GatherV2_1/axisConst*
_output_shapes
: *
dtype0*
value	B : �
cond/pruning_ops/GatherV2_1GatherV2!cond/pruning_ops/TopKV2:indices:0cond/pruning_ops/sub_2:z:0)cond/pruning_ops/GatherV2_1/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
: �
cond/pruning_ops/GreaterEqualGreaterEqualcond/pruning_ops/Abs:y:0"cond/pruning_ops/GatherV2:output:0*
T0*
_output_shapes

:  Z
cond/pruning_ops/Size_2Const*
_output_shapes
: *
dtype0*
value
B :�`
cond/pruning_ops/one_hot/ConstConst*
_output_shapes
: *
dtype0
*
value	B
 Zb
 cond/pruning_ops/one_hot/Const_1Const*
_output_shapes
: *
dtype0
*
value	B
 Z �
cond/pruning_ops/one_hotOneHot$cond/pruning_ops/GatherV2_1:output:0 cond/pruning_ops/Size_2:output:0'cond/pruning_ops/one_hot/Const:output:0)cond/pruning_ops/one_hot/Const_1:output:0*
TI0*
T0
*
_output_shapes	
:�q
 cond/pruning_ops/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"        �
cond/pruning_ops/Reshape_1Reshape!cond/pruning_ops/one_hot:output:0)cond/pruning_ops/Reshape_1/shape:output:0*
T0
*
_output_shapes

:  �
cond/pruning_ops/LogicalOr	LogicalOr!cond/pruning_ops/GreaterEqual:z:0#cond/pruning_ops/Reshape_1:output:0*
_output_shapes

:  i
	cond/CastCastcond/pruning_ops/LogicalOr:z:0*

DstT0*

SrcT0
*
_output_shapes

:  �
cond/AssignVariableOpAssignVariableOpcond_assignvariableop_resourcecond/Cast:y:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�
cond/AssignVariableOp_1AssignVariableOp cond_assignvariableop_1_resource"cond/pruning_ops/GatherV2:output:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�
cond/group_depsNoOp^cond/AssignVariableOp^cond/AssignVariableOp_1",/job:localhost/replica:0/task:0/device:GPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 h
cond/IdentityIdentitycond_identity_logicaland_1^cond/group_deps*
T0
*
_output_shapes
: `
cond/Identity_1Identitycond/Identity:output:0
^cond/NoOp*
T0
*
_output_shapes
: �
	cond/NoOpNoOp^cond/AssignVariableOp^cond/AssignVariableOp_1!^cond/GreaterEqual/ReadVariableOp^cond/LessEqual/ReadVariableOp^cond/Sub/ReadVariableOp6^cond/polynomial_decay_pruning_schedule/ReadVariableOp$^cond/pruning_ops/Abs/ReadVariableOp*
_output_shapes
 "+
cond_identity_1cond/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes

: : : : : 22
cond/AssignVariableOp_1cond/AssignVariableOp_12.
cond/AssignVariableOpcond/AssignVariableOp2D
 cond/GreaterEqual/ReadVariableOp cond/GreaterEqual/ReadVariableOp2>
cond/LessEqual/ReadVariableOpcond/LessEqual/ReadVariableOp22
cond/Sub/ReadVariableOpcond/Sub/ReadVariableOp2n
5cond/polynomial_decay_pruning_schedule/ReadVariableOp5cond/polynomial_decay_pruning_schedule/ReadVariableOp2J
#cond/pruning_ops/Abs/ReadVariableOp#cond/pruning_ops/Abs/ReadVariableOp:D@

_output_shapes
: 
&
_user_specified_nameLogicalAnd_1:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:( $
"
_user_specified_name
resource
��
�
S__inference_prune_low_magnitude_rho_layer_call_and_return_conditional_losses_565121

inputs!
readvariableop_resource:	 
cond_input_1:  
cond_input_2:  
cond_input_3: '
readvariableop_4_resource: 
identity��AssignVariableOp�AssignVariableOp_1�GreaterEqual/ReadVariableOp�LessEqual/ReadVariableOp�Mul/ReadVariableOp�Mul/ReadVariableOp_1�ReadVariableOp�ReadVariableOp_1�ReadVariableOp_2�ReadVariableOp_3�ReadVariableOp_4�ReadVariableOp_5�ReadVariableOp_6�Sub/ReadVariableOp�'assert_greater_equal/Assert/AssertGuard�#assert_greater_equal/ReadVariableOp�cond�0polynomial_decay_pruning_schedule/ReadVariableOp^
ReadVariableOpReadVariableOpreadvariableop_resource*
_output_shapes
: *
dtype0	G
add/yConst*
_output_shapes
: *
dtype0	*
value	B	 RU
addAddV2ReadVariableOp:value:0add/y:output:0*
T0	*
_output_shapes
: �
AssignVariableOpAssignVariableOpreadvariableop_resourceadd:z:0^ReadVariableOp*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0	*
validate_shape(7
updateNoOp^AssignVariableOp*
_output_shapes
 �
#assert_greater_equal/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp*
_output_shapes
: *
dtype0	X
assert_greater_equal/yConst*
_output_shapes
: *
dtype0	*
value	B	 R�
!assert_greater_equal/GreaterEqualGreaterEqual+assert_greater_equal/ReadVariableOp:value:0assert_greater_equal/y:output:0*
T0	*
_output_shapes
: [
assert_greater_equal/RankConst*
_output_shapes
: *
dtype0*
value	B : b
 assert_greater_equal/range/startConst*
_output_shapes
: *
dtype0*
value	B : b
 assert_greater_equal/range/deltaConst*
_output_shapes
: *
dtype0*
value	B :�
assert_greater_equal/rangeRange)assert_greater_equal/range/start:output:0"assert_greater_equal/Rank:output:0)assert_greater_equal/range/delta:output:0*
_output_shapes
: �
assert_greater_equal/AllAll%assert_greater_equal/GreaterEqual:z:0#assert_greater_equal/range:output:0*
_output_shapes
: �
!assert_greater_equal/Assert/ConstConst*
_output_shapes
: *
dtype0*�
value�B� B�Prune() wrapper requires the UpdatePruningStep callback to be provided during training. Please add it as a callback to your model.fit call.�
#assert_greater_equal/Assert/Const_1Const*
_output_shapes
: *
dtype0*<
value3B1 B+Condition x >= y did not hold element-wise:�
#assert_greater_equal/Assert/Const_2Const*
_output_shapes
: *
dtype0*=
value4B2 B,x (assert_greater_equal/ReadVariableOp:0) = �
#assert_greater_equal/Assert/Const_3Const*
_output_shapes
: *
dtype0*0
value'B% By (assert_greater_equal/y:0) = �
'assert_greater_equal/Assert/AssertGuardIf!assert_greater_equal/All:output:0!assert_greater_equal/All:output:0+assert_greater_equal/ReadVariableOp:value:0assert_greater_equal/y:output:0*
Tcond0
*
Tin
2
		*
Tout
2
*
_lower_using_switch_merge(*
_output_shapes
: * 
_read_only_resource_inputs
 *G
else_branch8R6
4assert_greater_equal_Assert_AssertGuard_false_564905*
output_shapes
: *F
then_branch7R5
3assert_greater_equal_Assert_AssertGuard_true_564904�
0assert_greater_equal/Assert/AssertGuard/IdentityIdentity0assert_greater_equal/Assert/AssertGuard:output:0*
T0
*&
 _has_manual_control_dependencies(*
_output_shapes
: �
0polynomial_decay_pruning_schedule/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	�
'polynomial_decay_pruning_schedule/sub/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R��
%polynomial_decay_pruning_schedule/subSub8polynomial_decay_pruning_schedule/ReadVariableOp:value:00polynomial_decay_pruning_schedule/sub/y:output:0*
T0	*
_output_shapes
: �
&polynomial_decay_pruning_schedule/CastCast)polynomial_decay_pruning_schedule/sub:z:0*

DstT0*

SrcT0	*
_output_shapes
: �
+polynomial_decay_pruning_schedule/truediv/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 * �jF�
)polynomial_decay_pruning_schedule/truedivRealDiv*polynomial_decay_pruning_schedule/Cast:y:04polynomial_decay_pruning_schedule/truediv/y:output:0*
T0*
_output_shapes
: �
+polynomial_decay_pruning_schedule/Maximum/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *    �
)polynomial_decay_pruning_schedule/MaximumMaximum4polynomial_decay_pruning_schedule/Maximum/x:output:0-polynomial_decay_pruning_schedule/truediv:z:0*
T0*
_output_shapes
: �
+polynomial_decay_pruning_schedule/Minimum/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *  �?�
)polynomial_decay_pruning_schedule/MinimumMinimum4polynomial_decay_pruning_schedule/Minimum/x:output:0-polynomial_decay_pruning_schedule/Maximum:z:0*
T0*
_output_shapes
: �
)polynomial_decay_pruning_schedule/sub_1/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *  �?�
'polynomial_decay_pruning_schedule/sub_1Sub2polynomial_decay_pruning_schedule/sub_1/x:output:0-polynomial_decay_pruning_schedule/Minimum:z:0*
T0*
_output_shapes
: �
'polynomial_decay_pruning_schedule/Pow/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *  @@�
%polynomial_decay_pruning_schedule/PowPow+polynomial_decay_pruning_schedule/sub_1:z:00polynomial_decay_pruning_schedule/Pow/y:output:0*
T0*
_output_shapes
: �
'polynomial_decay_pruning_schedule/Mul/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *   ��
%polynomial_decay_pruning_schedule/MulMul0polynomial_decay_pruning_schedule/Mul/x:output:0)polynomial_decay_pruning_schedule/Pow:z:0*
T0*
_output_shapes
: �
,polynomial_decay_pruning_schedule/sparsity/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *   ?�
*polynomial_decay_pruning_schedule/sparsityAddV2)polynomial_decay_pruning_schedule/Mul:z:05polynomial_decay_pruning_schedule/sparsity/y:output:0*
T0*
_output_shapes
: �
GreaterEqual/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	�
GreaterEqual/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R�{
GreaterEqualGreaterEqual#GreaterEqual/ReadVariableOp:value:0GreaterEqual/y:output:0*
T0	*
_output_shapes
: �
LessEqual/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	�
LessEqual/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
valueB		 Rܒo
	LessEqual	LessEqual LessEqual/ReadVariableOp:value:0LessEqual/y:output:0*
T0	*
_output_shapes
: }
Less/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB	 :ܒ{
Less/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
value	B : O
LessLessLess/x:output:0Less/y:output:0*
T0*
_output_shapes
: G
	LogicalOr	LogicalOrLessEqual:z:0Less:z:0*
_output_shapes
: Q

LogicalAnd
LogicalAndGreaterEqual:z:0LogicalOr:z:0*
_output_shapes
: �
Sub/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	{
Sub/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R�W
SubSubSub/ReadVariableOp:value:0Sub/y:output:0*
T0	*
_output_shapes
: �

FloorMod/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R�S
FloorModFloorModSub:z:0FloorMod/y:output:0*
T0	*
_output_shapes
: |
Equal/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value	B	 R O
EqualEqualFloorMod:z:0Equal/y:output:0*
T0	*
_output_shapes
: M
LogicalAnd_1
LogicalAndLogicalAnd:z:0	Equal:z:0*
_output_shapes
: �
condIfLogicalAnd_1:z:0readvariableop_resourcecond_input_1cond_input_2cond_input_3LogicalAnd_1:z:0^AssignVariableOp*
Tcond0
*
Tin	
2
*
Tout
2
*
_lower_using_switch_merge(*
_output_shapes
: *$
_read_only_resource_inputs
*$
else_branchR
cond_false_564962*
output_shapes
: *#
then_branchR
cond_true_564961q
cond/IdentityIdentitycond:output:0*
T0
*&
 _has_manual_control_dependencies(*
_output_shapes
: i
update_1NoOp1^assert_greater_equal/Assert/AssertGuard/Identity^cond/Identity*
_output_shapes
 _
Mul/ReadVariableOpReadVariableOpcond_input_1*
_output_shapes

:  *
dtype0h
Mul/ReadVariableOp_1ReadVariableOpcond_input_2^cond*
_output_shapes

:  *
dtype0m
MulMulMul/ReadVariableOp:value:0Mul/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  �
AssignVariableOp_1AssignVariableOpcond_input_1Mul:z:0^Mul/ReadVariableOp^cond*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�

group_depsNoOp^AssignVariableOp_1",/job:localhost/replica:0/task:0/device:GPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 e
group_deps_1NoOp^group_deps",/job:localhost/replica:0/task:0/device:GPU:0*
_output_shapes
 G
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
: r
ReadVariableOp_1ReadVariableOpcond_input_1^AssignVariableOp_1*
_output_shapes

:  *
dtype0L
mul_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   Ca
mul_1MulReadVariableOp_1:value:0mul_1/y:output:0*
T0*
_output_shapes

:  P
truedivRealDiv	mul_1:z:0Cast:y:0*
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

:  K
add_1AddV2Neg:y:0	Round:y:0*
T0*
_output_shapes

:  P
StopGradientStopGradient	add_1:z:0*
T0*
_output_shapes

:  [
add_2AddV2truediv:z:0StopGradient:output:0*
T0*
_output_shapes

:  \
clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  �Bv
clip_by_value/MinimumMinimum	add_2:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   �v
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*
_output_shapes

:  R
mul_2MulCast:y:0clip_by_value:z:0*
T0*
_output_shapes

:  P
truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C^
	truediv_1RealDiv	mul_2:z:0truediv_1/y:output:0*
T0*
_output_shapes

:  L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?V
mul_3Mulmul_3/x:output:0truediv_1:z:0*
T0*
_output_shapes

:  r
ReadVariableOp_2ReadVariableOpcond_input_1^AssignVariableOp_1*
_output_shapes

:  *
dtype0O
Neg_1NegReadVariableOp_2:value:0*
T0*
_output_shapes

:  M
add_3AddV2	Neg_1:y:0	mul_3:z:0*
T0*
_output_shapes

:  L
mul_4/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?R
mul_4Mulmul_4/x:output:0	add_3:z:0*
T0*
_output_shapes

:  R
StopGradient_1StopGradient	mul_4:z:0*
T0*
_output_shapes

:  r
ReadVariableOp_3ReadVariableOpcond_input_1^AssignVariableOp_1*
_output_shapes

:  *
dtype0j
add_4AddV2ReadVariableOp_3:value:0StopGradient_1:output:0*
T0*
_output_shapes

:  U
MatMulMatMulinputs	add_4:z:0*
T0*'
_output_shapes
:��������� I
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
ReadVariableOp_4ReadVariableOpreadvariableop_4_resource*
_output_shapes
: *
dtype0L
mul_5/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C]
mul_5MulReadVariableOp_4:value:0mul_5/y:output:0*
T0*
_output_shapes
: P
	truediv_2RealDiv	mul_5:z:0
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
add_5AddV2	Neg_2:y:0Round_1:y:0*
T0*
_output_shapes
: N
StopGradient_2StopGradient	add_5:z:0*
T0*
_output_shapes
: [
add_6AddV2truediv_2:z:0StopGradient_2:output:0*
T0*
_output_shapes
: ^
clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  �Bv
clip_by_value_1/MinimumMinimum	add_6:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   �x
clip_by_value_1Maximumclip_by_value_1/Minimum:z:0clip_by_value_1/y:output:0*
T0*
_output_shapes
: R
mul_6Mul
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
	truediv_3RealDiv	mul_6:z:0truediv_3/y:output:0*
T0*
_output_shapes
: L
mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?R
mul_7Mulmul_7/x:output:0truediv_3:z:0*
T0*
_output_shapes
: f
ReadVariableOp_5ReadVariableOpreadvariableop_4_resource*
_output_shapes
: *
dtype0K
Neg_3NegReadVariableOp_5:value:0*
T0*
_output_shapes
: I
add_7AddV2	Neg_3:y:0	mul_7:z:0*
T0*
_output_shapes
: L
mul_8/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?N
mul_8Mulmul_8/x:output:0	add_7:z:0*
T0*
_output_shapes
: N
StopGradient_3StopGradient	mul_8:z:0*
T0*
_output_shapes
: f
ReadVariableOp_6ReadVariableOpreadvariableop_4_resource*
_output_shapes
: *
dtype0f
add_8AddV2ReadVariableOp_6:value:0StopGradient_3:output:0*
T0*
_output_shapes
: a
BiasAddBiasAddMatMul:product:0	add_8:z:0*
T0*'
_output_shapes
:��������� _
IdentityIdentityBiasAdd:output:0^NoOp*
T0*'
_output_shapes
:��������� �
NoOpNoOp^AssignVariableOp^AssignVariableOp_1^GreaterEqual/ReadVariableOp^LessEqual/ReadVariableOp^Mul/ReadVariableOp^Mul/ReadVariableOp_1^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5^ReadVariableOp_6^Sub/ReadVariableOp(^assert_greater_equal/Assert/AssertGuard$^assert_greater_equal/ReadVariableOp^cond1^polynomial_decay_pruning_schedule/ReadVariableOp*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*0
_input_shapes
:��������� : : : : : 2(
AssignVariableOp_1AssignVariableOp_12$
AssignVariableOpAssignVariableOp2:
GreaterEqual/ReadVariableOpGreaterEqual/ReadVariableOp24
LessEqual/ReadVariableOpLessEqual/ReadVariableOp2,
Mul/ReadVariableOp_1Mul/ReadVariableOp_12(
Mul/ReadVariableOpMul/ReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_52$
ReadVariableOp_6ReadVariableOp_62 
ReadVariableOpReadVariableOp2(
Sub/ReadVariableOpSub/ReadVariableOp2R
'assert_greater_equal/Assert/AssertGuard'assert_greater_equal/Assert/AssertGuard2J
#assert_greater_equal/ReadVariableOp#assert_greater_equal/ReadVariableOp2
condcond2d
0polynomial_decay_pruning_schedule/ReadVariableOp0polynomial_decay_pruning_schedule/ReadVariableOp:($
"
_user_specified_name
resource:'#
!
_user_specified_name	input_3:'#
!
_user_specified_name	input_2:'#
!
_user_specified_name	input_1:($
"
_user_specified_name
resource:O K
'
_output_shapes
:��������� 
 
_user_specified_nameinputs
�G
�
T__inference_prune_low_magnitude_phi3_layer_call_and_return_conditional_losses_567322

inputs-
mul_readvariableop_resource:  /
mul_readvariableop_1_resource:  '
readvariableop_3_resource: 
identity��AssignVariableOp�Mul/ReadVariableOp�Mul/ReadVariableOp_1�ReadVariableOp�ReadVariableOp_1�ReadVariableOp_2�ReadVariableOp_3�ReadVariableOp_4�ReadVariableOp_5'
	no_updateNoOp*
_output_shapes
 )
no_update_1NoOp*
_output_shapes
 n
Mul/ReadVariableOpReadVariableOpmul_readvariableop_resource*
_output_shapes

:  *
dtype0r
Mul/ReadVariableOp_1ReadVariableOpmul_readvariableop_1_resource*
_output_shapes

:  *
dtype0m
MulMulMul/ReadVariableOp:value:0Mul/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  �
AssignVariableOpAssignVariableOpmul_readvariableop_resourceMul:z:0^Mul/ReadVariableOp*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�

group_depsNoOp^AssignVariableOp",/job:localhost/replica:0/task:0/device:GPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 e
group_deps_1NoOp^group_deps",/job:localhost/replica:0/task:0/device:GPU:0*
_output_shapes
 G
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
: }
ReadVariableOpReadVariableOpmul_readvariableop_resource^AssignVariableOp*
_output_shapes

:  *
dtype0L
mul_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C_
mul_1MulReadVariableOp:value:0mul_1/y:output:0*
T0*
_output_shapes

:  P
truedivRealDiv	mul_1:z:0Cast:y:0*
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
 *  �Bv
clip_by_value/MinimumMinimum	add_1:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   �v
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*
_output_shapes

:  R
mul_2MulCast:y:0clip_by_value:z:0*
T0*
_output_shapes

:  P
truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C^
	truediv_1RealDiv	mul_2:z:0truediv_1/y:output:0*
T0*
_output_shapes

:  L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?V
mul_3Mulmul_3/x:output:0truediv_1:z:0*
T0*
_output_shapes

:  
ReadVariableOp_1ReadVariableOpmul_readvariableop_resource^AssignVariableOp*
_output_shapes

:  *
dtype0O
Neg_1NegReadVariableOp_1:value:0*
T0*
_output_shapes

:  M
add_2AddV2	Neg_1:y:0	mul_3:z:0*
T0*
_output_shapes

:  L
mul_4/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?R
mul_4Mulmul_4/x:output:0	add_2:z:0*
T0*
_output_shapes

:  R
StopGradient_1StopGradient	mul_4:z:0*
T0*
_output_shapes

:  
ReadVariableOp_2ReadVariableOpmul_readvariableop_resource^AssignVariableOp*
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
::��Q
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
valueB"����    d
ReshapeReshapeinputsReshape/shape:output:0*
T0*'
_output_shapes
:��������� _
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
valueB"    ����f
	Reshape_1Reshapetranspose:y:0Reshape_1/shape:output:0*
T0*
_output_shapes

:  h
MatMulMatMulReshape:output:0Reshape_1:output:0*
T0*'
_output_shapes
:��������� S
Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B : S
Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : �
Reshape_2/shapePackunstack:output:0Reshape_2/shape/1:output:0Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:v
	Reshape_2ReshapeMatMul:product:0Reshape_2/shape:output:0*
T0*+
_output_shapes
:���������  I
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
mul_5/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C]
mul_5MulReadVariableOp_3:value:0mul_5/y:output:0*
T0*
_output_shapes
: P
	truediv_2RealDiv	mul_5:z:0
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
 *  �Bv
clip_by_value_1/MinimumMinimum	add_5:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   �x
clip_by_value_1Maximumclip_by_value_1/Minimum:z:0clip_by_value_1/y:output:0*
T0*
_output_shapes
: R
mul_6Mul
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
	truediv_3RealDiv	mul_6:z:0truediv_3/y:output:0*
T0*
_output_shapes
: L
mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?R
mul_7Mulmul_7/x:output:0truediv_3:z:0*
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
add_6AddV2	Neg_3:y:0	mul_7:z:0*
T0*
_output_shapes
: L
mul_8/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?N
mul_8Mulmul_8/x:output:0	add_6:z:0*
T0*
_output_shapes
: N
StopGradient_3StopGradient	mul_8:z:0*
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
:���������  c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:���������  �
NoOpNoOp^AssignVariableOp^Mul/ReadVariableOp^Mul/ReadVariableOp_1^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*0
_input_shapes
:���������  : : : 2$
AssignVariableOpAssignVariableOp2,
Mul/ReadVariableOp_1Mul/ReadVariableOp_12(
Mul/ReadVariableOpMul/ReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_52 
ReadVariableOpReadVariableOp:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:S O
+
_output_shapes
:���������  
 
_user_specified_nameinputs
�
�
cond_false_563993
cond_placeholder
cond_placeholder_1
cond_placeholder_2
cond_placeholder_3
cond_identity_logicaland_1

cond_identity_1
O
	cond/NoOpNoOp*&
 _has_manual_control_dependencies(*
_output_shapes
 b
cond/IdentityIdentitycond_identity_logicaland_1
^cond/NoOp*
T0
*
_output_shapes
: T
cond/Identity_1Identitycond/Identity:output:0*
T0
*
_output_shapes
: "+
cond_identity_1cond/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes

: : : : : :D@

_output_shapes
: 
&
_user_specified_nameLogicalAnd_1
�X
�
cond_true_567523H
>cond_polynomial_decay_pruning_schedule_readvariableop_resource:	 >
,cond_pruning_ops_abs_readvariableop_resource:  0
cond_assignvariableop_resource:  *
 cond_assignvariableop_1_resource: 
cond_identity_logicaland_1

cond_identity_1
��cond/AssignVariableOp�cond/AssignVariableOp_1� cond/GreaterEqual/ReadVariableOp�cond/LessEqual/ReadVariableOp�cond/Sub/ReadVariableOp�5cond/polynomial_decay_pruning_schedule/ReadVariableOp�#cond/pruning_ops/Abs/ReadVariableOp�
5cond/polynomial_decay_pruning_schedule/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	o
,cond/polynomial_decay_pruning_schedule/sub/yConst*
_output_shapes
: *
dtype0	*
value
B	 R��
*cond/polynomial_decay_pruning_schedule/subSub=cond/polynomial_decay_pruning_schedule/ReadVariableOp:value:05cond/polynomial_decay_pruning_schedule/sub/y:output:0*
T0	*
_output_shapes
: �
+cond/polynomial_decay_pruning_schedule/CastCast.cond/polynomial_decay_pruning_schedule/sub:z:0*

DstT0*

SrcT0	*
_output_shapes
: u
0cond/polynomial_decay_pruning_schedule/truediv/yConst*
_output_shapes
: *
dtype0*
valueB
 * �jF�
.cond/polynomial_decay_pruning_schedule/truedivRealDiv/cond/polynomial_decay_pruning_schedule/Cast:y:09cond/polynomial_decay_pruning_schedule/truediv/y:output:0*
T0*
_output_shapes
: u
0cond/polynomial_decay_pruning_schedule/Maximum/xConst*
_output_shapes
: *
dtype0*
valueB
 *    �
.cond/polynomial_decay_pruning_schedule/MaximumMaximum9cond/polynomial_decay_pruning_schedule/Maximum/x:output:02cond/polynomial_decay_pruning_schedule/truediv:z:0*
T0*
_output_shapes
: u
0cond/polynomial_decay_pruning_schedule/Minimum/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
.cond/polynomial_decay_pruning_schedule/MinimumMinimum9cond/polynomial_decay_pruning_schedule/Minimum/x:output:02cond/polynomial_decay_pruning_schedule/Maximum:z:0*
T0*
_output_shapes
: s
.cond/polynomial_decay_pruning_schedule/sub_1/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
,cond/polynomial_decay_pruning_schedule/sub_1Sub7cond/polynomial_decay_pruning_schedule/sub_1/x:output:02cond/polynomial_decay_pruning_schedule/Minimum:z:0*
T0*
_output_shapes
: q
,cond/polynomial_decay_pruning_schedule/Pow/yConst*
_output_shapes
: *
dtype0*
valueB
 *  @@�
*cond/polynomial_decay_pruning_schedule/PowPow0cond/polynomial_decay_pruning_schedule/sub_1:z:05cond/polynomial_decay_pruning_schedule/Pow/y:output:0*
T0*
_output_shapes
: q
,cond/polynomial_decay_pruning_schedule/Mul/xConst*
_output_shapes
: *
dtype0*
valueB
 *   ��
*cond/polynomial_decay_pruning_schedule/MulMul5cond/polynomial_decay_pruning_schedule/Mul/x:output:0.cond/polynomial_decay_pruning_schedule/Pow:z:0*
T0*
_output_shapes
: v
1cond/polynomial_decay_pruning_schedule/sparsity/yConst*
_output_shapes
: *
dtype0*
valueB
 *   ?�
/cond/polynomial_decay_pruning_schedule/sparsityAddV2.cond/polynomial_decay_pruning_schedule/Mul:z:0:cond/polynomial_decay_pruning_schedule/sparsity/y:output:0*
T0*
_output_shapes
: �
 cond/GreaterEqual/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	V
cond/GreaterEqual/yConst*
_output_shapes
: *
dtype0	*
value
B	 R��
cond/GreaterEqualGreaterEqual(cond/GreaterEqual/ReadVariableOp:value:0cond/GreaterEqual/y:output:0*
T0	*
_output_shapes
: �
cond/LessEqual/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	T
cond/LessEqual/yConst*
_output_shapes
: *
dtype0	*
valueB		 Rܒ~
cond/LessEqual	LessEqual%cond/LessEqual/ReadVariableOp:value:0cond/LessEqual/y:output:0*
T0	*
_output_shapes
: O
cond/Less/xConst*
_output_shapes
: *
dtype0*
valueB	 :ܒM
cond/Less/yConst*
_output_shapes
: *
dtype0*
value	B : ^
	cond/LessLesscond/Less/x:output:0cond/Less/y:output:0*
T0*
_output_shapes
: V
cond/LogicalOr	LogicalOrcond/LessEqual:z:0cond/Less:z:0*
_output_shapes
: `
cond/LogicalAnd
LogicalAndcond/GreaterEqual:z:0cond/LogicalOr:z:0*
_output_shapes
: �
cond/Sub/ReadVariableOpReadVariableOp>cond_polynomial_decay_pruning_schedule_readvariableop_resource*
_output_shapes
: *
dtype0	M

cond/Sub/yConst*
_output_shapes
: *
dtype0	*
value
B	 R�f
cond/SubSubcond/Sub/ReadVariableOp:value:0cond/Sub/y:output:0*
T0	*
_output_shapes
: R
cond/FloorMod/yConst*
_output_shapes
: *
dtype0	*
value
B	 R�b
cond/FloorModFloorModcond/Sub:z:0cond/FloorMod/y:output:0*
T0	*
_output_shapes
: N
cond/Equal/yConst*
_output_shapes
: *
dtype0	*
value	B	 R ^

cond/EqualEqualcond/FloorMod:z:0cond/Equal/y:output:0*
T0	*
_output_shapes
: \
cond/LogicalAnd_1
LogicalAndcond/LogicalAnd:z:0cond/Equal:z:0*
_output_shapes
: �
#cond/pruning_ops/Abs/ReadVariableOpReadVariableOp,cond_pruning_ops_abs_readvariableop_resource*
_output_shapes

:  *
dtype0q
cond/pruning_ops/AbsAbs+cond/pruning_ops/Abs/ReadVariableOp:value:0*
T0*
_output_shapes

:  X
cond/pruning_ops/SizeConst*
_output_shapes
: *
dtype0*
value
B :�m
cond/pruning_ops/CastCastcond/pruning_ops/Size:output:0*

DstT0*

SrcT0*
_output_shapes
: [
cond/pruning_ops/sub/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
cond/pruning_ops/subSubcond/pruning_ops/sub/x:output:03cond/polynomial_decay_pruning_schedule/sparsity:z:0*
T0*
_output_shapes
: q
cond/pruning_ops/mulMulcond/pruning_ops/Cast:y:0cond/pruning_ops/sub:z:0*
T0*
_output_shapes
: Z
cond/pruning_ops/RoundRoundcond/pruning_ops/mul:z:0*
T0*
_output_shapes
: _
cond/pruning_ops/Maximum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  �?�
cond/pruning_ops/MaximumMaximumcond/pruning_ops/Round:y:0#cond/pruning_ops/Maximum/y:output:0*
T0*
_output_shapes
: m
cond/pruning_ops/Cast_1Castcond/pruning_ops/Maximum:z:0*

DstT0*

SrcT0*
_output_shapes
: q
cond/pruning_ops/Reshape/shapeConst*
_output_shapes
:*
dtype0*
valueB:
����������
cond/pruning_ops/ReshapeReshapecond/pruning_ops/Abs:y:0'cond/pruning_ops/Reshape/shape:output:0*
T0*
_output_shapes	
:�Z
cond/pruning_ops/Size_1Const*
_output_shapes
: *
dtype0*
value
B :��
cond/pruning_ops/TopKV2TopKV2!cond/pruning_ops/Reshape:output:0 cond/pruning_ops/Size_1:output:0*
T0*"
_output_shapes
:�:�Z
cond/pruning_ops/sub_1/yConst*
_output_shapes
: *
dtype0*
value	B :~
cond/pruning_ops/sub_1Subcond/pruning_ops/Cast_1:y:0!cond/pruning_ops/sub_1/y:output:0*
T0*
_output_shapes
: `
cond/pruning_ops/GatherV2/axisConst*
_output_shapes
: *
dtype0*
value	B : �
cond/pruning_ops/GatherV2GatherV2 cond/pruning_ops/TopKV2:values:0cond/pruning_ops/sub_1:z:0'cond/pruning_ops/GatherV2/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
: Z
cond/pruning_ops/sub_2/yConst*
_output_shapes
: *
dtype0*
value	B :~
cond/pruning_ops/sub_2Subcond/pruning_ops/Cast_1:y:0!cond/pruning_ops/sub_2/y:output:0*
T0*
_output_shapes
: b
 cond/pruning_ops/GatherV2_1/axisConst*
_output_shapes
: *
dtype0*
value	B : �
cond/pruning_ops/GatherV2_1GatherV2!cond/pruning_ops/TopKV2:indices:0cond/pruning_ops/sub_2:z:0)cond/pruning_ops/GatherV2_1/axis:output:0*
Taxis0*
Tindices0*
Tparams0*
_output_shapes
: �
cond/pruning_ops/GreaterEqualGreaterEqualcond/pruning_ops/Abs:y:0"cond/pruning_ops/GatherV2:output:0*
T0*
_output_shapes

:  Z
cond/pruning_ops/Size_2Const*
_output_shapes
: *
dtype0*
value
B :�`
cond/pruning_ops/one_hot/ConstConst*
_output_shapes
: *
dtype0
*
value	B
 Zb
 cond/pruning_ops/one_hot/Const_1Const*
_output_shapes
: *
dtype0
*
value	B
 Z �
cond/pruning_ops/one_hotOneHot$cond/pruning_ops/GatherV2_1:output:0 cond/pruning_ops/Size_2:output:0'cond/pruning_ops/one_hot/Const:output:0)cond/pruning_ops/one_hot/Const_1:output:0*
TI0*
T0
*
_output_shapes	
:�q
 cond/pruning_ops/Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"        �
cond/pruning_ops/Reshape_1Reshape!cond/pruning_ops/one_hot:output:0)cond/pruning_ops/Reshape_1/shape:output:0*
T0
*
_output_shapes

:  �
cond/pruning_ops/LogicalOr	LogicalOr!cond/pruning_ops/GreaterEqual:z:0#cond/pruning_ops/Reshape_1:output:0*
_output_shapes

:  i
	cond/CastCastcond/pruning_ops/LogicalOr:z:0*

DstT0*

SrcT0
*
_output_shapes

:  �
cond/AssignVariableOpAssignVariableOpcond_assignvariableop_resourcecond/Cast:y:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�
cond/AssignVariableOp_1AssignVariableOp cond_assignvariableop_1_resource"cond/pruning_ops/GatherV2:output:0*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�
cond/group_depsNoOp^cond/AssignVariableOp^cond/AssignVariableOp_1",/job:localhost/replica:0/task:0/device:GPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 h
cond/IdentityIdentitycond_identity_logicaland_1^cond/group_deps*
T0
*
_output_shapes
: `
cond/Identity_1Identitycond/Identity:output:0
^cond/NoOp*
T0
*
_output_shapes
: �
	cond/NoOpNoOp^cond/AssignVariableOp^cond/AssignVariableOp_1!^cond/GreaterEqual/ReadVariableOp^cond/LessEqual/ReadVariableOp^cond/Sub/ReadVariableOp6^cond/polynomial_decay_pruning_schedule/ReadVariableOp$^cond/pruning_ops/Abs/ReadVariableOp*
_output_shapes
 "+
cond_identity_1cond/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes

: : : : : 22
cond/AssignVariableOp_1cond/AssignVariableOp_12.
cond/AssignVariableOpcond/AssignVariableOp2D
 cond/GreaterEqual/ReadVariableOp cond/GreaterEqual/ReadVariableOp2>
cond/LessEqual/ReadVariableOpcond/LessEqual/ReadVariableOp22
cond/Sub/ReadVariableOpcond/Sub/ReadVariableOp2n
5cond/polynomial_decay_pruning_schedule/ReadVariableOp5cond/polynomial_decay_pruning_schedule/ReadVariableOp2J
#cond/pruning_ops/Abs/ReadVariableOp#cond/pruning_ops/Abs/ReadVariableOp:D@

_output_shapes
: 
&
_user_specified_nameLogicalAnd_1:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:($
"
_user_specified_name
resource:( $
"
_user_specified_name
resource
�
O
#__inference__update_step_xla_566069
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
�
O
#__inference__update_step_xla_566109
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
��
�
T__inference_prune_low_magnitude_phi2_layer_call_and_return_conditional_losses_566813

inputs!
readvariableop_resource:	 
cond_input_1:  
cond_input_2:  
cond_input_3: '
readvariableop_4_resource: 
identity��AssignVariableOp�AssignVariableOp_1�GreaterEqual/ReadVariableOp�LessEqual/ReadVariableOp�Mul/ReadVariableOp�Mul/ReadVariableOp_1�ReadVariableOp�ReadVariableOp_1�ReadVariableOp_2�ReadVariableOp_3�ReadVariableOp_4�ReadVariableOp_5�ReadVariableOp_6�Sub/ReadVariableOp�'assert_greater_equal/Assert/AssertGuard�#assert_greater_equal/ReadVariableOp�cond�0polynomial_decay_pruning_schedule/ReadVariableOp^
ReadVariableOpReadVariableOpreadvariableop_resource*
_output_shapes
: *
dtype0	G
add/yConst*
_output_shapes
: *
dtype0	*
value	B	 RU
addAddV2ReadVariableOp:value:0add/y:output:0*
T0	*
_output_shapes
: �
AssignVariableOpAssignVariableOpreadvariableop_resourceadd:z:0^ReadVariableOp*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0	*
validate_shape(7
updateNoOp^AssignVariableOp*
_output_shapes
 �
#assert_greater_equal/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp*
_output_shapes
: *
dtype0	X
assert_greater_equal/yConst*
_output_shapes
: *
dtype0	*
value	B	 R�
!assert_greater_equal/GreaterEqualGreaterEqual+assert_greater_equal/ReadVariableOp:value:0assert_greater_equal/y:output:0*
T0	*
_output_shapes
: [
assert_greater_equal/RankConst*
_output_shapes
: *
dtype0*
value	B : b
 assert_greater_equal/range/startConst*
_output_shapes
: *
dtype0*
value	B : b
 assert_greater_equal/range/deltaConst*
_output_shapes
: *
dtype0*
value	B :�
assert_greater_equal/rangeRange)assert_greater_equal/range/start:output:0"assert_greater_equal/Rank:output:0)assert_greater_equal/range/delta:output:0*
_output_shapes
: �
assert_greater_equal/AllAll%assert_greater_equal/GreaterEqual:z:0#assert_greater_equal/range:output:0*
_output_shapes
: �
!assert_greater_equal/Assert/ConstConst*
_output_shapes
: *
dtype0*�
value�B� B�Prune() wrapper requires the UpdatePruningStep callback to be provided during training. Please add it as a callback to your model.fit call.�
#assert_greater_equal/Assert/Const_1Const*
_output_shapes
: *
dtype0*<
value3B1 B+Condition x >= y did not hold element-wise:�
#assert_greater_equal/Assert/Const_2Const*
_output_shapes
: *
dtype0*=
value4B2 B,x (assert_greater_equal/ReadVariableOp:0) = �
#assert_greater_equal/Assert/Const_3Const*
_output_shapes
: *
dtype0*0
value'B% By (assert_greater_equal/y:0) = �
'assert_greater_equal/Assert/AssertGuardIf!assert_greater_equal/All:output:0!assert_greater_equal/All:output:0+assert_greater_equal/ReadVariableOp:value:0assert_greater_equal/y:output:0*
Tcond0
*
Tin
2
		*
Tout
2
*
_lower_using_switch_merge(*
_output_shapes
: * 
_read_only_resource_inputs
 *G
else_branch8R6
4assert_greater_equal_Assert_AssertGuard_false_566580*
output_shapes
: *F
then_branch7R5
3assert_greater_equal_Assert_AssertGuard_true_566579�
0assert_greater_equal/Assert/AssertGuard/IdentityIdentity0assert_greater_equal/Assert/AssertGuard:output:0*
T0
*&
 _has_manual_control_dependencies(*
_output_shapes
: �
0polynomial_decay_pruning_schedule/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	�
'polynomial_decay_pruning_schedule/sub/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R��
%polynomial_decay_pruning_schedule/subSub8polynomial_decay_pruning_schedule/ReadVariableOp:value:00polynomial_decay_pruning_schedule/sub/y:output:0*
T0	*
_output_shapes
: �
&polynomial_decay_pruning_schedule/CastCast)polynomial_decay_pruning_schedule/sub:z:0*

DstT0*

SrcT0	*
_output_shapes
: �
+polynomial_decay_pruning_schedule/truediv/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 * �jF�
)polynomial_decay_pruning_schedule/truedivRealDiv*polynomial_decay_pruning_schedule/Cast:y:04polynomial_decay_pruning_schedule/truediv/y:output:0*
T0*
_output_shapes
: �
+polynomial_decay_pruning_schedule/Maximum/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *    �
)polynomial_decay_pruning_schedule/MaximumMaximum4polynomial_decay_pruning_schedule/Maximum/x:output:0-polynomial_decay_pruning_schedule/truediv:z:0*
T0*
_output_shapes
: �
+polynomial_decay_pruning_schedule/Minimum/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *  �?�
)polynomial_decay_pruning_schedule/MinimumMinimum4polynomial_decay_pruning_schedule/Minimum/x:output:0-polynomial_decay_pruning_schedule/Maximum:z:0*
T0*
_output_shapes
: �
)polynomial_decay_pruning_schedule/sub_1/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *  �?�
'polynomial_decay_pruning_schedule/sub_1Sub2polynomial_decay_pruning_schedule/sub_1/x:output:0-polynomial_decay_pruning_schedule/Minimum:z:0*
T0*
_output_shapes
: �
'polynomial_decay_pruning_schedule/Pow/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *  @@�
%polynomial_decay_pruning_schedule/PowPow+polynomial_decay_pruning_schedule/sub_1:z:00polynomial_decay_pruning_schedule/Pow/y:output:0*
T0*
_output_shapes
: �
'polynomial_decay_pruning_schedule/Mul/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *   ��
%polynomial_decay_pruning_schedule/MulMul0polynomial_decay_pruning_schedule/Mul/x:output:0)polynomial_decay_pruning_schedule/Pow:z:0*
T0*
_output_shapes
: �
,polynomial_decay_pruning_schedule/sparsity/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB
 *   ?�
*polynomial_decay_pruning_schedule/sparsityAddV2)polynomial_decay_pruning_schedule/Mul:z:05polynomial_decay_pruning_schedule/sparsity/y:output:0*
T0*
_output_shapes
: �
GreaterEqual/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	�
GreaterEqual/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R�{
GreaterEqualGreaterEqual#GreaterEqual/ReadVariableOp:value:0GreaterEqual/y:output:0*
T0	*
_output_shapes
: �
LessEqual/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	�
LessEqual/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
valueB		 Rܒo
	LessEqual	LessEqual LessEqual/ReadVariableOp:value:0LessEqual/y:output:0*
T0	*
_output_shapes
: }
Less/xConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
valueB	 :ܒ{
Less/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0*
value	B : O
LessLessLess/x:output:0Less/y:output:0*
T0*
_output_shapes
: G
	LogicalOr	LogicalOrLessEqual:z:0Less:z:0*
_output_shapes
: Q

LogicalAnd
LogicalAndGreaterEqual:z:0LogicalOr:z:0*
_output_shapes
: �
Sub/ReadVariableOpReadVariableOpreadvariableop_resource^AssignVariableOp1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	{
Sub/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R�W
SubSubSub/ReadVariableOp:value:0Sub/y:output:0*
T0	*
_output_shapes
: �

FloorMod/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value
B	 R�S
FloorModFloorModSub:z:0FloorMod/y:output:0*
T0	*
_output_shapes
: |
Equal/yConst1^assert_greater_equal/Assert/AssertGuard/Identity*
_output_shapes
: *
dtype0	*
value	B	 R O
EqualEqualFloorMod:z:0Equal/y:output:0*
T0	*
_output_shapes
: M
LogicalAnd_1
LogicalAndLogicalAnd:z:0	Equal:z:0*
_output_shapes
: �
condIfLogicalAnd_1:z:0readvariableop_resourcecond_input_1cond_input_2cond_input_3LogicalAnd_1:z:0^AssignVariableOp*
Tcond0
*
Tin	
2
*
Tout
2
*
_lower_using_switch_merge(*
_output_shapes
: *$
_read_only_resource_inputs
*$
else_branchR
cond_false_566637*
output_shapes
: *#
then_branchR
cond_true_566636q
cond/IdentityIdentitycond:output:0*
T0
*&
 _has_manual_control_dependencies(*
_output_shapes
: i
update_1NoOp1^assert_greater_equal/Assert/AssertGuard/Identity^cond/Identity*
_output_shapes
 _
Mul/ReadVariableOpReadVariableOpcond_input_1*
_output_shapes

:  *
dtype0h
Mul/ReadVariableOp_1ReadVariableOpcond_input_2^cond*
_output_shapes

:  *
dtype0m
MulMulMul/ReadVariableOp:value:0Mul/ReadVariableOp_1:value:0*
T0*
_output_shapes

:  �
AssignVariableOp_1AssignVariableOpcond_input_1Mul:z:0^Mul/ReadVariableOp^cond*&
 _has_manual_control_dependencies(*
_output_shapes
 *
dtype0*
validate_shape(�

group_depsNoOp^AssignVariableOp_1",/job:localhost/replica:0/task:0/device:GPU:0*&
 _has_manual_control_dependencies(*
_output_shapes
 e
group_deps_1NoOp^group_deps",/job:localhost/replica:0/task:0/device:GPU:0*
_output_shapes
 G
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
: r
ReadVariableOp_1ReadVariableOpcond_input_1^AssignVariableOp_1*
_output_shapes

:  *
dtype0L
mul_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   Ca
mul_1MulReadVariableOp_1:value:0mul_1/y:output:0*
T0*
_output_shapes

:  P
truedivRealDiv	mul_1:z:0Cast:y:0*
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

:  K
add_1AddV2Neg:y:0	Round:y:0*
T0*
_output_shapes

:  P
StopGradientStopGradient	add_1:z:0*
T0*
_output_shapes

:  [
add_2AddV2truediv:z:0StopGradient:output:0*
T0*
_output_shapes

:  \
clip_by_value/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  �Bv
clip_by_value/MinimumMinimum	add_2:z:0 clip_by_value/Minimum/y:output:0*
T0*
_output_shapes

:  T
clip_by_value/yConst*
_output_shapes
: *
dtype0*
valueB
 *   �v
clip_by_valueMaximumclip_by_value/Minimum:z:0clip_by_value/y:output:0*
T0*
_output_shapes

:  R
mul_2MulCast:y:0clip_by_value:z:0*
T0*
_output_shapes

:  P
truediv_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C^
	truediv_1RealDiv	mul_2:z:0truediv_1/y:output:0*
T0*
_output_shapes

:  L
mul_3/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?V
mul_3Mulmul_3/x:output:0truediv_1:z:0*
T0*
_output_shapes

:  r
ReadVariableOp_2ReadVariableOpcond_input_1^AssignVariableOp_1*
_output_shapes

:  *
dtype0O
Neg_1NegReadVariableOp_2:value:0*
T0*
_output_shapes

:  M
add_3AddV2	Neg_1:y:0	mul_3:z:0*
T0*
_output_shapes

:  L
mul_4/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?R
mul_4Mulmul_4/x:output:0	add_3:z:0*
T0*
_output_shapes

:  R
StopGradient_1StopGradient	mul_4:z:0*
T0*
_output_shapes

:  r
ReadVariableOp_3ReadVariableOpcond_input_1^AssignVariableOp_1*
_output_shapes

:  *
dtype0j
add_4AddV2ReadVariableOp_3:value:0StopGradient_1:output:0*
T0*
_output_shapes

:  I
ShapeShapeinputs*
T0*
_output_shapes
::��Q
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
valueB"����    d
ReshapeReshapeinputsReshape/shape:output:0*
T0*'
_output_shapes
:��������� _
transpose/permConst*
_output_shapes
:*
dtype0*
valueB"       c
	transpose	Transpose	add_4:z:0transpose/perm:output:0*
T0*
_output_shapes

:  `
Reshape_1/shapeConst*
_output_shapes
:*
dtype0*
valueB"    ����f
	Reshape_1Reshapetranspose:y:0Reshape_1/shape:output:0*
T0*
_output_shapes

:  h
MatMulMatMulReshape:output:0Reshape_1:output:0*
T0*'
_output_shapes
:��������� S
Reshape_2/shape/1Const*
_output_shapes
: *
dtype0*
value	B : S
Reshape_2/shape/2Const*
_output_shapes
: *
dtype0*
value	B : �
Reshape_2/shapePackunstack:output:0Reshape_2/shape/1:output:0Reshape_2/shape/2:output:0*
N*
T0*
_output_shapes
:v
	Reshape_2ReshapeMatMul:product:0Reshape_2/shape:output:0*
T0*+
_output_shapes
:���������  I
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
ReadVariableOp_4ReadVariableOpreadvariableop_4_resource*
_output_shapes
: *
dtype0L
mul_5/yConst*
_output_shapes
: *
dtype0*
valueB
 *   C]
mul_5MulReadVariableOp_4:value:0mul_5/y:output:0*
T0*
_output_shapes
: P
	truediv_2RealDiv	mul_5:z:0
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
add_5AddV2	Neg_2:y:0Round_1:y:0*
T0*
_output_shapes
: N
StopGradient_2StopGradient	add_5:z:0*
T0*
_output_shapes
: [
add_6AddV2truediv_2:z:0StopGradient_2:output:0*
T0*
_output_shapes
: ^
clip_by_value_1/Minimum/yConst*
_output_shapes
: *
dtype0*
valueB
 *  �Bv
clip_by_value_1/MinimumMinimum	add_6:z:0"clip_by_value_1/Minimum/y:output:0*
T0*
_output_shapes
: V
clip_by_value_1/yConst*
_output_shapes
: *
dtype0*
valueB
 *   �x
clip_by_value_1Maximumclip_by_value_1/Minimum:z:0clip_by_value_1/y:output:0*
T0*
_output_shapes
: R
mul_6Mul
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
	truediv_3RealDiv	mul_6:z:0truediv_3/y:output:0*
T0*
_output_shapes
: L
mul_7/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?R
mul_7Mulmul_7/x:output:0truediv_3:z:0*
T0*
_output_shapes
: f
ReadVariableOp_5ReadVariableOpreadvariableop_4_resource*
_output_shapes
: *
dtype0K
Neg_3NegReadVariableOp_5:value:0*
T0*
_output_shapes
: I
add_7AddV2	Neg_3:y:0	mul_7:z:0*
T0*
_output_shapes
: L
mul_8/xConst*
_output_shapes
: *
dtype0*
valueB
 *  �?N
mul_8Mulmul_8/x:output:0	add_7:z:0*
T0*
_output_shapes
: N
StopGradient_3StopGradient	mul_8:z:0*
T0*
_output_shapes
: f
ReadVariableOp_6ReadVariableOpreadvariableop_4_resource*
_output_shapes
: *
dtype0f
add_8AddV2ReadVariableOp_6:value:0StopGradient_3:output:0*
T0*
_output_shapes
: g
BiasAddBiasAddReshape_2:output:0	add_8:z:0*
T0*+
_output_shapes
:���������  c
IdentityIdentityBiasAdd:output:0^NoOp*
T0*+
_output_shapes
:���������  �
NoOpNoOp^AssignVariableOp^AssignVariableOp_1^GreaterEqual/ReadVariableOp^LessEqual/ReadVariableOp^Mul/ReadVariableOp^Mul/ReadVariableOp_1^ReadVariableOp^ReadVariableOp_1^ReadVariableOp_2^ReadVariableOp_3^ReadVariableOp_4^ReadVariableOp_5^ReadVariableOp_6^Sub/ReadVariableOp(^assert_greater_equal/Assert/AssertGuard$^assert_greater_equal/ReadVariableOp^cond1^polynomial_decay_pruning_schedule/ReadVariableOp*
_output_shapes
 "
identityIdentity:output:0*(
_construction_contextkEagerRuntime*4
_input_shapes#
!:���������  : : : : : 2(
AssignVariableOp_1AssignVariableOp_12$
AssignVariableOpAssignVariableOp2:
GreaterEqual/ReadVariableOpGreaterEqual/ReadVariableOp24
LessEqual/ReadVariableOpLessEqual/ReadVariableOp2,
Mul/ReadVariableOp_1Mul/ReadVariableOp_12(
Mul/ReadVariableOpMul/ReadVariableOp2$
ReadVariableOp_1ReadVariableOp_12$
ReadVariableOp_2ReadVariableOp_22$
ReadVariableOp_3ReadVariableOp_32$
ReadVariableOp_4ReadVariableOp_42$
ReadVariableOp_5ReadVariableOp_52$
ReadVariableOp_6ReadVariableOp_62 
ReadVariableOpReadVariableOp2(
Sub/ReadVariableOpSub/ReadVariableOp2R
'assert_greater_equal/Assert/AssertGuard'assert_greater_equal/Assert/AssertGuard2J
#assert_greater_equal/ReadVariableOp#assert_greater_equal/ReadVariableOp2
condcond2d
0polynomial_decay_pruning_schedule/ReadVariableOp0polynomial_decay_pruning_schedule/ReadVariableOp:($
"
_user_specified_name
resource:'#
!
_user_specified_name	input_3:'#
!
_user_specified_name	input_2:'#
!
_user_specified_name	input_1:($
"
_user_specified_name
resource:S O
+
_output_shapes
:���������  
 
_user_specified_nameinputs
�
�
3assert_greater_equal_Assert_AssertGuard_true_563935M
Iassert_greater_equal_assert_assertguard_identity_assert_greater_equal_all
7
3assert_greater_equal_assert_assertguard_placeholder	9
5assert_greater_equal_assert_assertguard_placeholder_1	6
2assert_greater_equal_assert_assertguard_identity_1
r
,assert_greater_equal/Assert/AssertGuard/NoOpNoOp*&
 _has_manual_control_dependencies(*
_output_shapes
 �
0assert_greater_equal/Assert/AssertGuard/IdentityIdentityIassert_greater_equal_assert_assertguard_identity_assert_greater_equal_all-^assert_greater_equal/Assert/AssertGuard/NoOp*
T0
*
_output_shapes
: �
2assert_greater_equal/Assert/AssertGuard/Identity_1Identity9assert_greater_equal/Assert/AssertGuard/Identity:output:0*
T0
*
_output_shapes
: "q
2assert_greater_equal_assert_assertguard_identity_1;assert_greater_equal/Assert/AssertGuard/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes
: : : :

_output_shapes
: :

_output_shapes
: :P L

_output_shapes
: 
2
_user_specified_nameassert_greater_equal/All
�
�
4assert_greater_equal_Assert_AssertGuard_false_567467K
Gassert_greater_equal_assert_assertguard_assert_assert_greater_equal_all
V
Rassert_greater_equal_assert_assertguard_assert_assert_greater_equal_readvariableop	I
Eassert_greater_equal_assert_assertguard_assert_assert_greater_equal_y	6
2assert_greater_equal_assert_assertguard_identity_1
��.assert_greater_equal/Assert/AssertGuard/Assert�
5assert_greater_equal/Assert/AssertGuard/Assert/data_0Const*
_output_shapes
: *
dtype0*�
value�B� B�Prune() wrapper requires the UpdatePruningStep callback to be provided during training. Please add it as a callback to your model.fit call.�
5assert_greater_equal/Assert/AssertGuard/Assert/data_1Const*
_output_shapes
: *
dtype0*<
value3B1 B+Condition x >= y did not hold element-wise:�
5assert_greater_equal/Assert/AssertGuard/Assert/data_2Const*
_output_shapes
: *
dtype0*=
value4B2 B,x (assert_greater_equal/ReadVariableOp:0) = �
5assert_greater_equal/Assert/AssertGuard/Assert/data_4Const*
_output_shapes
: *
dtype0*0
value'B% By (assert_greater_equal/y:0) = �
.assert_greater_equal/Assert/AssertGuard/AssertAssertGassert_greater_equal_assert_assertguard_assert_assert_greater_equal_all>assert_greater_equal/Assert/AssertGuard/Assert/data_0:output:0>assert_greater_equal/Assert/AssertGuard/Assert/data_1:output:0>assert_greater_equal/Assert/AssertGuard/Assert/data_2:output:0Rassert_greater_equal_assert_assertguard_assert_assert_greater_equal_readvariableop>assert_greater_equal/Assert/AssertGuard/Assert/data_4:output:0Eassert_greater_equal_assert_assertguard_assert_assert_greater_equal_y*
T

2		*&
 _has_manual_control_dependencies(*
_output_shapes
 �
0assert_greater_equal/Assert/AssertGuard/IdentityIdentityGassert_greater_equal_assert_assertguard_assert_assert_greater_equal_all/^assert_greater_equal/Assert/AssertGuard/Assert*
T0
*
_output_shapes
: �
2assert_greater_equal/Assert/AssertGuard/Identity_1Identity9assert_greater_equal/Assert/AssertGuard/Identity:output:0-^assert_greater_equal/Assert/AssertGuard/NoOp*
T0
*
_output_shapes
: {
,assert_greater_equal/Assert/AssertGuard/NoOpNoOp/^assert_greater_equal/Assert/AssertGuard/Assert*
_output_shapes
 "q
2assert_greater_equal_assert_assertguard_identity_1;assert_greater_equal/Assert/AssertGuard/Identity_1:output:0*(
_construction_contextkEagerRuntime*
_input_shapes
: : : 2`
.assert_greater_equal/Assert/AssertGuard/Assert.assert_greater_equal/Assert/AssertGuard/Assert:NJ

_output_shapes
: 
0
_user_specified_nameassert_greater_equal/y:[W

_output_shapes
: 
=
_user_specified_name%#assert_greater_equal/ReadVariableOp:P L

_output_shapes
: 
2
_user_specified_nameassert_greater_equal/All
�
K
#__inference__update_step_xla_566094
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
gradient"�L
saver_filename:0StatefulPartitionedCall_1:0StatefulPartitionedCall_28"
saved_model_main_op

NoOp*>
__saved_model_init_op%#
__saved_model_init_op

NoOp*�
serving_default�
G
input_layer8
serving_default_input_layer:0��������� ;
softmax0
StatefulPartitionedCall:0���������tensorflow/serving/predict:��
�
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
�
	variables
trainable_variables
regularization_losses
	keras_api
__call__
*&call_and_return_all_conditional_losses
pruning_vars
	layer
prunable_weights
 mask
!	threshold
"pruning_step"
_tf_keras_layer
�
#	variables
$trainable_variables
%regularization_losses
&	keras_api
'__call__
*(&call_and_return_all_conditional_losses
)	quantizer"
_tf_keras_layer
�
*	variables
+trainable_variables
,regularization_losses
-	keras_api
.__call__
*/&call_and_return_all_conditional_losses
0pruning_vars
	1layer
2prunable_weights
3mask
4	threshold
5pruning_step"
_tf_keras_layer
�
6	variables
7trainable_variables
8regularization_losses
9	keras_api
:__call__
*;&call_and_return_all_conditional_losses
<	quantizer"
_tf_keras_layer
�
=	variables
>trainable_variables
?regularization_losses
@	keras_api
A__call__
*B&call_and_return_all_conditional_losses
Cpruning_vars
	Dlayer
Eprunable_weights
Fmask
G	threshold
Hpruning_step"
_tf_keras_layer
�
I	variables
Jtrainable_variables
Kregularization_losses
L	keras_api
M__call__
*N&call_and_return_all_conditional_losses
O	quantizer"
_tf_keras_layer
�
P	variables
Qtrainable_variables
Rregularization_losses
S	keras_api
T__call__
*U&call_and_return_all_conditional_losses
V
activation
V	quantizer"
_tf_keras_layer
�
W	variables
Xtrainable_variables
Yregularization_losses
Z	keras_api
[__call__
*\&call_and_return_all_conditional_losses"
_tf_keras_layer
�
]	variables
^trainable_variables
_regularization_losses
`	keras_api
a__call__
*b&call_and_return_all_conditional_losses
cpruning_vars
	dlayer
eprunable_weights
fmask
g	threshold
hpruning_step"
_tf_keras_layer
�
i	variables
jtrainable_variables
kregularization_losses
l	keras_api
m__call__
*n&call_and_return_all_conditional_losses
o	quantizer"
_tf_keras_layer
�
p	variables
qtrainable_variables
rregularization_losses
s	keras_api
t__call__
*u&call_and_return_all_conditional_losses
vpruning_vars
	wlayer
xprunable_weights
ymask
z	threshold
{pruning_step"
_tf_keras_layer
�
|	variables
}trainable_variables
~regularization_losses
	keras_api
�__call__
+�&call_and_return_all_conditional_losses"
_tf_keras_layer
�
�0
�1
 2
!3
"4
�5
�6
37
48
59
�10
�11
F12
G13
H14
�15
�16
f17
g18
h19
�20
�21
y22
z23
{24"
trackable_list_wrapper
p
�0
�1
�2
�3
�4
�5
�6
�7
�8
�9"
trackable_list_wrapper
 "
trackable_list_wrapper
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
	variables
trainable_variables
regularization_losses
__call__
_default_save_signature
*&call_and_return_all_conditional_losses
&"call_and_return_conditional_losses"
_generic_user_object
�
�trace_0
�trace_12�
3__inference_deepsets_invariant_layer_call_fn_565831
3__inference_deepsets_invariant_layer_call_fn_565866�
���
FullArgSpec)
args!�
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults�
p 

 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 z�trace_0z�trace_1
�
�trace_0
�trace_12�
N__inference_deepsets_invariant_layer_call_and_return_conditional_losses_565377
N__inference_deepsets_invariant_layer_call_and_return_conditional_losses_565776�
���
FullArgSpec)
args!�
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults�
p 

 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 z�trace_0z�trace_1
�B�
!__inference__wrapped_model_563903input_layer"�
���
FullArgSpec
args�

jargs_0
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�
�
_variables
�_iterations
�_learning_rate
�_index_dict
�
_momentums
�_velocities
�_update_step_xla"
experimentalOptimizer
-
�serving_default"
signature_map
E
�0
�1
 2
!3
"4"
trackable_list_wrapper
0
�0
�1"
trackable_list_wrapper
 "
trackable_list_wrapper
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
	variables
trainable_variables
regularization_losses
__call__
*&call_and_return_all_conditional_losses
&"call_and_return_conditional_losses"
_generic_user_object
�
�trace_0
�trace_12�
9__inference_prune_low_magnitude_phi1_layer_call_fn_566129
9__inference_prune_low_magnitude_phi1_layer_call_fn_566140�
���
FullArgSpec!
args�
jinputs

jtraining
varargs
 
varkwjkwargs
defaults�
p 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 z�trace_0z�trace_1
�
�trace_0
�trace_12�
T__inference_prune_low_magnitude_phi1_layer_call_and_return_conditional_losses_566393
T__inference_prune_low_magnitude_phi1_layer_call_and_return_conditional_losses_566482�
���
FullArgSpec!
args�
jinputs

jtraining
varargs
 
varkwjkwargs
defaults�
p 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 z�trace_0z�trace_1
(
�0"
trackable_list_wrapper
�
�	variables
�trainable_variables
�regularization_losses
�	keras_api
�__call__
+�&call_and_return_all_conditional_losses
�kernel_quantizer_internal
�bias_quantizer_internal
�
quantizers
�kernel
	�bias"
_tf_keras_layer
(
�0"
trackable_list_wrapper
/:- (2prune_low_magnitude_phi1/mask
,:* (2"prune_low_magnitude_phi1/threshold
-:+	 2%prune_low_magnitude_phi1/pruning_step
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
#	variables
$trainable_variables
%regularization_losses
'__call__
*(&call_and_return_all_conditional_losses
&("call_and_return_conditional_losses"
_generic_user_object
�
�trace_02�
-__inference_q_activation_layer_call_fn_566487�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 z�trace_0
�
�trace_02�
H__inference_q_activation_layer_call_and_return_conditional_losses_566534�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 z�trace_0
"
_generic_user_object
E
�0
�1
32
43
54"
trackable_list_wrapper
0
�0
�1"
trackable_list_wrapper
 "
trackable_list_wrapper
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
*	variables
+trainable_variables
,regularization_losses
.__call__
*/&call_and_return_all_conditional_losses
&/"call_and_return_conditional_losses"
_generic_user_object
�
�trace_0
�trace_12�
9__inference_prune_low_magnitude_phi2_layer_call_fn_566549
9__inference_prune_low_magnitude_phi2_layer_call_fn_566560�
���
FullArgSpec!
args�
jinputs

jtraining
varargs
 
varkwjkwargs
defaults�
p 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 z�trace_0z�trace_1
�
�trace_0
�trace_12�
T__inference_prune_low_magnitude_phi2_layer_call_and_return_conditional_losses_566813
T__inference_prune_low_magnitude_phi2_layer_call_and_return_conditional_losses_566902�
���
FullArgSpec!
args�
jinputs

jtraining
varargs
 
varkwjkwargs
defaults�
p 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 z�trace_0z�trace_1
(
�0"
trackable_list_wrapper
�
�	variables
�trainable_variables
�regularization_losses
�	keras_api
�__call__
+�&call_and_return_all_conditional_losses
�kernel_quantizer_internal
�bias_quantizer_internal
�
quantizers
�kernel
	�bias"
_tf_keras_layer
(
�0"
trackable_list_wrapper
/:-  (2prune_low_magnitude_phi2/mask
,:* (2"prune_low_magnitude_phi2/threshold
-:+	 2%prune_low_magnitude_phi2/pruning_step
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
6	variables
7trainable_variables
8regularization_losses
:__call__
*;&call_and_return_all_conditional_losses
&;"call_and_return_conditional_losses"
_generic_user_object
�
�trace_02�
/__inference_q_activation_1_layer_call_fn_566907�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 z�trace_0
�
�trace_02�
J__inference_q_activation_1_layer_call_and_return_conditional_losses_566954�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 z�trace_0
"
_generic_user_object
E
�0
�1
F2
G3
H4"
trackable_list_wrapper
0
�0
�1"
trackable_list_wrapper
 "
trackable_list_wrapper
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
=	variables
>trainable_variables
?regularization_losses
A__call__
*B&call_and_return_all_conditional_losses
&B"call_and_return_conditional_losses"
_generic_user_object
�
�trace_0
�trace_12�
9__inference_prune_low_magnitude_phi3_layer_call_fn_566969
9__inference_prune_low_magnitude_phi3_layer_call_fn_566980�
���
FullArgSpec!
args�
jinputs

jtraining
varargs
 
varkwjkwargs
defaults�
p 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 z�trace_0z�trace_1
�
�trace_0
�trace_12�
T__inference_prune_low_magnitude_phi3_layer_call_and_return_conditional_losses_567233
T__inference_prune_low_magnitude_phi3_layer_call_and_return_conditional_losses_567322�
���
FullArgSpec!
args�
jinputs

jtraining
varargs
 
varkwjkwargs
defaults�
p 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 z�trace_0z�trace_1
(
�0"
trackable_list_wrapper
�
�	variables
�trainable_variables
�regularization_losses
�	keras_api
�__call__
+�&call_and_return_all_conditional_losses
�kernel_quantizer_internal
�bias_quantizer_internal
�
quantizers
�kernel
	�bias"
_tf_keras_layer
(
�0"
trackable_list_wrapper
/:-  (2prune_low_magnitude_phi3/mask
,:* (2"prune_low_magnitude_phi3/threshold
-:+	 2%prune_low_magnitude_phi3/pruning_step
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
I	variables
Jtrainable_variables
Kregularization_losses
M__call__
*N&call_and_return_all_conditional_losses
&N"call_and_return_conditional_losses"
_generic_user_object
�
�trace_02�
/__inference_q_activation_2_layer_call_fn_567327�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 z�trace_0
�
�trace_02�
J__inference_q_activation_2_layer_call_and_return_conditional_losses_567374�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 z�trace_0
"
_generic_user_object
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
P	variables
Qtrainable_variables
Rregularization_losses
T__call__
*U&call_and_return_all_conditional_losses
&U"call_and_return_conditional_losses"
_generic_user_object
�
�trace_02�
/__inference_q_activation_3_layer_call_fn_567379�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 z�trace_0
�
�trace_02�
J__inference_q_activation_3_layer_call_and_return_conditional_losses_567410�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 z�trace_0
"
_generic_user_object
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
W	variables
Xtrainable_variables
Yregularization_losses
[__call__
*\&call_and_return_all_conditional_losses
&\"call_and_return_conditional_losses"
_generic_user_object
�
�trace_02�
9__inference_global_average_pooling1d_layer_call_fn_567415�
���
FullArgSpec
args�
jinputs
jmask
varargs
 
varkw
 
defaults�

 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 z�trace_0
�
�trace_02�
T__inference_global_average_pooling1d_layer_call_and_return_conditional_losses_567421�
���
FullArgSpec
args�
jinputs
jmask
varargs
 
varkw
 
defaults�

 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 z�trace_0
E
�0
�1
f2
g3
h4"
trackable_list_wrapper
0
�0
�1"
trackable_list_wrapper
 "
trackable_list_wrapper
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
]	variables
^trainable_variables
_regularization_losses
a__call__
*b&call_and_return_all_conditional_losses
&b"call_and_return_conditional_losses"
_generic_user_object
�
�trace_0
�trace_12�
8__inference_prune_low_magnitude_rho_layer_call_fn_567436
8__inference_prune_low_magnitude_rho_layer_call_fn_567447�
���
FullArgSpec!
args�
jinputs

jtraining
varargs
 
varkwjkwargs
defaults�
p 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 z�trace_0z�trace_1
�
�trace_0
�trace_12�
S__inference_prune_low_magnitude_rho_layer_call_and_return_conditional_losses_567683
S__inference_prune_low_magnitude_rho_layer_call_and_return_conditional_losses_567755�
���
FullArgSpec!
args�
jinputs

jtraining
varargs
 
varkwjkwargs
defaults�
p 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 z�trace_0z�trace_1
(
�0"
trackable_list_wrapper
�
�	variables
�trainable_variables
�regularization_losses
�	keras_api
�__call__
+�&call_and_return_all_conditional_losses
�kernel_quantizer_internal
�bias_quantizer_internal
�
quantizers
�kernel
	�bias"
_tf_keras_layer
(
�0"
trackable_list_wrapper
.:,  (2prune_low_magnitude_rho/mask
+:) (2!prune_low_magnitude_rho/threshold
,:*	 2$prune_low_magnitude_rho/pruning_step
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
i	variables
jtrainable_variables
kregularization_losses
m__call__
*n&call_and_return_all_conditional_losses
&n"call_and_return_conditional_losses"
_generic_user_object
�
�trace_02�
/__inference_q_activation_4_layer_call_fn_567760�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 z�trace_0
�
�trace_02�
J__inference_q_activation_4_layer_call_and_return_conditional_losses_567807�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 z�trace_0
"
_generic_user_object
E
�0
�1
y2
z3
{4"
trackable_list_wrapper
0
�0
�1"
trackable_list_wrapper
 "
trackable_list_wrapper
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
p	variables
qtrainable_variables
rregularization_losses
t__call__
*u&call_and_return_all_conditional_losses
&u"call_and_return_conditional_losses"
_generic_user_object
�
�trace_0
�trace_12�
:__inference_prune_low_magnitude_dense_layer_call_fn_567822
:__inference_prune_low_magnitude_dense_layer_call_fn_567833�
���
FullArgSpec!
args�
jinputs

jtraining
varargs
 
varkwjkwargs
defaults�
p 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 z�trace_0z�trace_1
�
�trace_0
�trace_12�
U__inference_prune_low_magnitude_dense_layer_call_and_return_conditional_losses_568011
U__inference_prune_low_magnitude_dense_layer_call_and_return_conditional_losses_568025�
���
FullArgSpec!
args�
jinputs

jtraining
varargs
 
varkwjkwargs
defaults�
p 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 z�trace_0z�trace_1
(
�0"
trackable_list_wrapper
�
�	variables
�trainable_variables
�regularization_losses
�	keras_api
�__call__
+�&call_and_return_all_conditional_losses
�kernel
	�bias"
_tf_keras_layer
(
�0"
trackable_list_wrapper
0:. (2prune_low_magnitude_dense/mask
-:+ (2#prune_low_magnitude_dense/threshold
.:,	 2&prune_low_magnitude_dense/pruning_step
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
|	variables
}trainable_variables
~regularization_losses
�__call__
+�&call_and_return_all_conditional_losses
'�"call_and_return_conditional_losses"
_generic_user_object
�
�trace_02�
(__inference_softmax_layer_call_fn_568030�
���
FullArgSpec
args�
jinputs
jmask
varargs
 
varkw
 
defaults�

 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 z�trace_0
�
�trace_02�
C__inference_softmax_layer_call_and_return_conditional_losses_568035�
���
FullArgSpec
args�
jinputs
jmask
varargs
 
varkw
 
defaults�

 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 z�trace_0
: 2phi1/kernel
: 2	phi1/bias
:  2phi2/kernel
: 2	phi2/bias
:  2phi3/kernel
: 2	phi3/bias
:  2
rho/kernel
: 2rho/bias
: 2dense/kernel
:2
dense/bias
�
 0
!1
"2
33
44
55
F6
G7
H8
f9
g10
h11
y12
z13
{14"
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
�0
�1"
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_dict_wrapper
�B�
3__inference_deepsets_invariant_layer_call_fn_565831input_layer"�
���
FullArgSpec)
args!�
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
3__inference_deepsets_invariant_layer_call_fn_565866input_layer"�
���
FullArgSpec)
args!�
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
N__inference_deepsets_invariant_layer_call_and_return_conditional_losses_565377input_layer"�
���
FullArgSpec)
args!�
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
N__inference_deepsets_invariant_layer_call_and_return_conditional_losses_565776input_layer"�
���
FullArgSpec)
args!�
jinputs

jtraining
jmask
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�
�0
�1
�2
�3
�4
�5
�6
�7
�8
�9
�10
�11
�12
�13
�14
�15
�16
�17
�18
�19
�20"
trackable_list_wrapper
:	 2	iteration
: 2learning_rate
 "
trackable_dict_wrapper
p
�0
�1
�2
�3
�4
�5
�6
�7
�8
�9"
trackable_list_wrapper
p
�0
�1
�2
�3
�4
�5
�6
�7
�8
�9"
trackable_list_wrapper
�
�trace_0
�trace_1
�trace_2
�trace_3
�trace_4
�trace_5
�trace_6
�trace_7
�trace_8
�trace_92�
#__inference__update_step_xla_566069
#__inference__update_step_xla_566074
#__inference__update_step_xla_566079
#__inference__update_step_xla_566084
#__inference__update_step_xla_566089
#__inference__update_step_xla_566094
#__inference__update_step_xla_566099
#__inference__update_step_xla_566104
#__inference__update_step_xla_566109
#__inference__update_step_xla_566114�
���
FullArgSpec*
args"�

jgradient

jvariable
jkey
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 0z�trace_0z�trace_1z�trace_2z�trace_3z�trace_4z�trace_5z�trace_6z�trace_7z�trace_8z�trace_9
�B�
$__inference_signature_wrapper_566064input_layer"�
���
FullArgSpec
args� 
varargs
 
varkw
 
defaults
  

kwonlyargs�
jinput_layer
kwonlydefaults
 
annotations� *
 
5
 0
!1
"2"
trackable_list_wrapper
'
0"
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_dict_wrapper
�B�
9__inference_prune_low_magnitude_phi1_layer_call_fn_566129inputs"�
���
FullArgSpec!
args�
jinputs

jtraining
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
9__inference_prune_low_magnitude_phi1_layer_call_fn_566140inputs"�
���
FullArgSpec!
args�
jinputs

jtraining
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
T__inference_prune_low_magnitude_phi1_layer_call_and_return_conditional_losses_566393inputs"�
���
FullArgSpec!
args�
jinputs

jtraining
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
T__inference_prune_low_magnitude_phi1_layer_call_and_return_conditional_losses_566482inputs"�
���
FullArgSpec!
args�
jinputs

jtraining
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
7
�0
 1
!2"
trackable_tuple_wrapper
0
�0
�1"
trackable_list_wrapper
0
�0
�1"
trackable_list_wrapper
 "
trackable_list_wrapper
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
�	variables
�trainable_variables
�regularization_losses
�__call__
+�&call_and_return_all_conditional_losses
'�"call_and_return_conditional_losses"
_generic_user_object
�2��
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�2��
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
"
_generic_user_object
"
_generic_user_object
0
�0
�1"
trackable_list_wrapper
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
�B�
-__inference_q_activation_layer_call_fn_566487inputs"�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
H__inference_q_activation_layer_call_and_return_conditional_losses_566534inputs"�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
5
30
41
52"
trackable_list_wrapper
'
10"
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_dict_wrapper
�B�
9__inference_prune_low_magnitude_phi2_layer_call_fn_566549inputs"�
���
FullArgSpec!
args�
jinputs

jtraining
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
9__inference_prune_low_magnitude_phi2_layer_call_fn_566560inputs"�
���
FullArgSpec!
args�
jinputs

jtraining
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
T__inference_prune_low_magnitude_phi2_layer_call_and_return_conditional_losses_566813inputs"�
���
FullArgSpec!
args�
jinputs

jtraining
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
T__inference_prune_low_magnitude_phi2_layer_call_and_return_conditional_losses_566902inputs"�
���
FullArgSpec!
args�
jinputs

jtraining
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
7
�0
31
42"
trackable_tuple_wrapper
0
�0
�1"
trackable_list_wrapper
0
�0
�1"
trackable_list_wrapper
 "
trackable_list_wrapper
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
�	variables
�trainable_variables
�regularization_losses
�__call__
+�&call_and_return_all_conditional_losses
'�"call_and_return_conditional_losses"
_generic_user_object
�2��
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�2��
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
"
_generic_user_object
"
_generic_user_object
0
�0
�1"
trackable_list_wrapper
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
�B�
/__inference_q_activation_1_layer_call_fn_566907inputs"�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
J__inference_q_activation_1_layer_call_and_return_conditional_losses_566954inputs"�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
5
F0
G1
H2"
trackable_list_wrapper
'
D0"
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_dict_wrapper
�B�
9__inference_prune_low_magnitude_phi3_layer_call_fn_566969inputs"�
���
FullArgSpec!
args�
jinputs

jtraining
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
9__inference_prune_low_magnitude_phi3_layer_call_fn_566980inputs"�
���
FullArgSpec!
args�
jinputs

jtraining
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
T__inference_prune_low_magnitude_phi3_layer_call_and_return_conditional_losses_567233inputs"�
���
FullArgSpec!
args�
jinputs

jtraining
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
T__inference_prune_low_magnitude_phi3_layer_call_and_return_conditional_losses_567322inputs"�
���
FullArgSpec!
args�
jinputs

jtraining
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
7
�0
F1
G2"
trackable_tuple_wrapper
0
�0
�1"
trackable_list_wrapper
0
�0
�1"
trackable_list_wrapper
 "
trackable_list_wrapper
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
�	variables
�trainable_variables
�regularization_losses
�__call__
+�&call_and_return_all_conditional_losses
'�"call_and_return_conditional_losses"
_generic_user_object
�2��
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�2��
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
"
_generic_user_object
"
_generic_user_object
0
�0
�1"
trackable_list_wrapper
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
�B�
/__inference_q_activation_2_layer_call_fn_567327inputs"�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
J__inference_q_activation_2_layer_call_and_return_conditional_losses_567374inputs"�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
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
�B�
/__inference_q_activation_3_layer_call_fn_567379inputs"�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
J__inference_q_activation_3_layer_call_and_return_conditional_losses_567410inputs"�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
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
�B�
9__inference_global_average_pooling1d_layer_call_fn_567415inputs"�
���
FullArgSpec
args�
jinputs
jmask
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
T__inference_global_average_pooling1d_layer_call_and_return_conditional_losses_567421inputs"�
���
FullArgSpec
args�
jinputs
jmask
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
5
f0
g1
h2"
trackable_list_wrapper
'
d0"
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_dict_wrapper
�B�
8__inference_prune_low_magnitude_rho_layer_call_fn_567436inputs"�
���
FullArgSpec!
args�
jinputs

jtraining
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
8__inference_prune_low_magnitude_rho_layer_call_fn_567447inputs"�
���
FullArgSpec!
args�
jinputs

jtraining
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
S__inference_prune_low_magnitude_rho_layer_call_and_return_conditional_losses_567683inputs"�
���
FullArgSpec!
args�
jinputs

jtraining
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
S__inference_prune_low_magnitude_rho_layer_call_and_return_conditional_losses_567755inputs"�
���
FullArgSpec!
args�
jinputs

jtraining
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
7
�0
f1
g2"
trackable_tuple_wrapper
0
�0
�1"
trackable_list_wrapper
0
�0
�1"
trackable_list_wrapper
 "
trackable_list_wrapper
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
�	variables
�trainable_variables
�regularization_losses
�__call__
+�&call_and_return_all_conditional_losses
'�"call_and_return_conditional_losses"
_generic_user_object
�2��
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�2��
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
"
_generic_user_object
"
_generic_user_object
0
�0
�1"
trackable_list_wrapper
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
�B�
/__inference_q_activation_4_layer_call_fn_567760inputs"�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
J__inference_q_activation_4_layer_call_and_return_conditional_losses_567807inputs"�
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
5
y0
z1
{2"
trackable_list_wrapper
'
w0"
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_list_wrapper
 "
trackable_dict_wrapper
�B�
:__inference_prune_low_magnitude_dense_layer_call_fn_567822inputs"�
���
FullArgSpec!
args�
jinputs

jtraining
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
:__inference_prune_low_magnitude_dense_layer_call_fn_567833inputs"�
���
FullArgSpec!
args�
jinputs

jtraining
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
U__inference_prune_low_magnitude_dense_layer_call_and_return_conditional_losses_568011inputs"�
���
FullArgSpec!
args�
jinputs

jtraining
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
U__inference_prune_low_magnitude_dense_layer_call_and_return_conditional_losses_568025inputs"�
���
FullArgSpec!
args�
jinputs

jtraining
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
7
�0
y1
z2"
trackable_tuple_wrapper
0
�0
�1"
trackable_list_wrapper
0
�0
�1"
trackable_list_wrapper
 "
trackable_list_wrapper
�
�non_trainable_variables
�layers
�metrics
 �layer_regularization_losses
�layer_metrics
�	variables
�trainable_variables
�regularization_losses
�__call__
+�&call_and_return_all_conditional_losses
'�"call_and_return_conditional_losses"
_generic_user_object
�2��
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�2��
���
FullArgSpec
args�

jinputs
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
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
�B�
(__inference_softmax_layer_call_fn_568030inputs"�
���
FullArgSpec
args�
jinputs
jmask
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
C__inference_softmax_layer_call_and_return_conditional_losses_568035inputs"�
���
FullArgSpec
args�
jinputs
jmask
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
R
�	variables
�	keras_api

�total

�count"
_tf_keras_metric
c
�	variables
�	keras_api

�total

�count
�
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
�B�
#__inference__update_step_xla_566069gradientvariable"�
���
FullArgSpec*
args"�

jgradient

jvariable
jkey
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
#__inference__update_step_xla_566074gradientvariable"�
���
FullArgSpec*
args"�

jgradient

jvariable
jkey
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
#__inference__update_step_xla_566079gradientvariable"�
���
FullArgSpec*
args"�

jgradient

jvariable
jkey
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
#__inference__update_step_xla_566084gradientvariable"�
���
FullArgSpec*
args"�

jgradient

jvariable
jkey
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
#__inference__update_step_xla_566089gradientvariable"�
���
FullArgSpec*
args"�

jgradient

jvariable
jkey
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
#__inference__update_step_xla_566094gradientvariable"�
���
FullArgSpec*
args"�

jgradient

jvariable
jkey
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
#__inference__update_step_xla_566099gradientvariable"�
���
FullArgSpec*
args"�

jgradient

jvariable
jkey
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
#__inference__update_step_xla_566104gradientvariable"�
���
FullArgSpec*
args"�

jgradient

jvariable
jkey
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
#__inference__update_step_xla_566109gradientvariable"�
���
FullArgSpec*
args"�

jgradient

jvariable
jkey
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
 
�B�
#__inference__update_step_xla_566114gradientvariable"�
���
FullArgSpec*
args"�

jgradient

jvariable
jkey
varargs
 
varkw
 
defaults
 

kwonlyargs� 
kwonlydefaults
 
annotations� *
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
0
�0
�1"
trackable_list_wrapper
.
�	variables"
_generic_user_object
:  (2total
:  (2count
0
�0
�1"
trackable_list_wrapper
.
�	variables"
_generic_user_object
:  (2total
:  (2count
 "
trackable_dict_wrapper�
#__inference__update_step_xla_566069nh�e
^�[
�
gradient 
4�1	�
� 
�
p
` VariableSpec 
`෻���?
� "
 �
#__inference__update_step_xla_566074f`�]
V�S
�
gradient 
0�-	�
� 
�
p
` VariableSpec 
`�����?
� "
 �
#__inference__update_step_xla_566079nh�e
^�[
�
gradient  
4�1	�
�  
�
p
` VariableSpec 
`࿙���?
� "
 �
#__inference__update_step_xla_566084f`�]
V�S
�
gradient 
0�-	�
� 
�
p
` VariableSpec 
`������?
� "
 �
#__inference__update_step_xla_566089nh�e
^�[
�
gradient  
4�1	�
�  
�
p
` VariableSpec 
`�����?
� "
 �
#__inference__update_step_xla_566094f`�]
V�S
�
gradient 
0�-	�
� 
�
p
` VariableSpec 
`�����?
� "
 �
#__inference__update_step_xla_566099nh�e
^�[
�
gradient  
4�1	�
�  
�
p
` VariableSpec 
`������?
� "
 �
#__inference__update_step_xla_566104f`�]
V�S
�
gradient 
0�-	�
� 
�
p
` VariableSpec 
`ࡎ���?
� "
 �
#__inference__update_step_xla_566109nh�e
^�[
�
gradient 
4�1	�
� 
�
p
` VariableSpec 
`������?
� "
 �
#__inference__update_step_xla_566114f`�]
V�S
�
gradient
0�-	�
�
�
p
` VariableSpec 
`౅���?
� "
 �
!__inference__wrapped_model_563903�� ��3��F��f��y�8�5
.�+
)�&
input_layer��������� 
� "1�.
,
softmax!�
softmax����������
N__inference_deepsets_invariant_layer_call_and_return_conditional_losses_565377�#"� !�5�34�H�FG�h�fg�{�yz�@�=
6�3
)�&
input_layer��������� 
p

 
� ",�)
"�
tensor_0���������
� �
N__inference_deepsets_invariant_layer_call_and_return_conditional_losses_565776�� ��3��F��f��y�@�=
6�3
)�&
input_layer��������� 
p 

 
� ",�)
"�
tensor_0���������
� �
3__inference_deepsets_invariant_layer_call_fn_565831�#"� !�5�34�H�FG�h�fg�{�yz�@�=
6�3
)�&
input_layer��������� 
p

 
� "!�
unknown����������
3__inference_deepsets_invariant_layer_call_fn_565866�� ��3��F��f��y�@�=
6�3
)�&
input_layer��������� 
p 

 
� "!�
unknown����������
T__inference_global_average_pooling1d_layer_call_and_return_conditional_losses_567421�I�F
?�<
6�3
inputs'���������������������������

 
� "5�2
+�(
tensor_0������������������
� �
9__inference_global_average_pooling1d_layer_call_fn_567415wI�F
?�<
6�3
inputs'���������������������������

 
� "*�'
unknown�������������������
U__inference_prune_low_magnitude_dense_layer_call_and_return_conditional_losses_568011l{�yz�3�0
)�&
 �
inputs��������� 
p
� ",�)
"�
tensor_0���������
� �
U__inference_prune_low_magnitude_dense_layer_call_and_return_conditional_losses_568025j�y�3�0
)�&
 �
inputs��������� 
p 
� ",�)
"�
tensor_0���������
� �
:__inference_prune_low_magnitude_dense_layer_call_fn_567822a{�yz�3�0
)�&
 �
inputs��������� 
p
� "!�
unknown����������
:__inference_prune_low_magnitude_dense_layer_call_fn_567833_�y�3�0
)�&
 �
inputs��������� 
p 
� "!�
unknown����������
T__inference_prune_low_magnitude_phi1_layer_call_and_return_conditional_losses_566393t"� !�7�4
-�*
$�!
inputs��������� 
p
� "0�-
&�#
tensor_0���������  
� �
T__inference_prune_low_magnitude_phi1_layer_call_and_return_conditional_losses_566482r� �7�4
-�*
$�!
inputs��������� 
p 
� "0�-
&�#
tensor_0���������  
� �
9__inference_prune_low_magnitude_phi1_layer_call_fn_566129i"� !�7�4
-�*
$�!
inputs��������� 
p
� "%�"
unknown���������  �
9__inference_prune_low_magnitude_phi1_layer_call_fn_566140g� �7�4
-�*
$�!
inputs��������� 
p 
� "%�"
unknown���������  �
T__inference_prune_low_magnitude_phi2_layer_call_and_return_conditional_losses_566813t5�34�7�4
-�*
$�!
inputs���������  
p
� "0�-
&�#
tensor_0���������  
� �
T__inference_prune_low_magnitude_phi2_layer_call_and_return_conditional_losses_566902r�3�7�4
-�*
$�!
inputs���������  
p 
� "0�-
&�#
tensor_0���������  
� �
9__inference_prune_low_magnitude_phi2_layer_call_fn_566549i5�34�7�4
-�*
$�!
inputs���������  
p
� "%�"
unknown���������  �
9__inference_prune_low_magnitude_phi2_layer_call_fn_566560g�3�7�4
-�*
$�!
inputs���������  
p 
� "%�"
unknown���������  �
T__inference_prune_low_magnitude_phi3_layer_call_and_return_conditional_losses_567233tH�FG�7�4
-�*
$�!
inputs���������  
p
� "0�-
&�#
tensor_0���������  
� �
T__inference_prune_low_magnitude_phi3_layer_call_and_return_conditional_losses_567322r�F�7�4
-�*
$�!
inputs���������  
p 
� "0�-
&�#
tensor_0���������  
� �
9__inference_prune_low_magnitude_phi3_layer_call_fn_566969iH�FG�7�4
-�*
$�!
inputs���������  
p
� "%�"
unknown���������  �
9__inference_prune_low_magnitude_phi3_layer_call_fn_566980g�F�7�4
-�*
$�!
inputs���������  
p 
� "%�"
unknown���������  �
S__inference_prune_low_magnitude_rho_layer_call_and_return_conditional_losses_567683lh�fg�3�0
)�&
 �
inputs��������� 
p
� ",�)
"�
tensor_0��������� 
� �
S__inference_prune_low_magnitude_rho_layer_call_and_return_conditional_losses_567755j�f�3�0
)�&
 �
inputs��������� 
p 
� ",�)
"�
tensor_0��������� 
� �
8__inference_prune_low_magnitude_rho_layer_call_fn_567436ah�fg�3�0
)�&
 �
inputs��������� 
p
� "!�
unknown��������� �
8__inference_prune_low_magnitude_rho_layer_call_fn_567447_�f�3�0
)�&
 �
inputs��������� 
p 
� "!�
unknown��������� �
J__inference_q_activation_1_layer_call_and_return_conditional_losses_566954g3�0
)�&
$�!
inputs���������  
� "0�-
&�#
tensor_0���������  
� �
/__inference_q_activation_1_layer_call_fn_566907\3�0
)�&
$�!
inputs���������  
� "%�"
unknown���������  �
J__inference_q_activation_2_layer_call_and_return_conditional_losses_567374g3�0
)�&
$�!
inputs���������  
� "0�-
&�#
tensor_0���������  
� �
/__inference_q_activation_2_layer_call_fn_567327\3�0
)�&
$�!
inputs���������  
� "%�"
unknown���������  �
J__inference_q_activation_3_layer_call_and_return_conditional_losses_567410g3�0
)�&
$�!
inputs���������  
� "0�-
&�#
tensor_0���������  
� �
/__inference_q_activation_3_layer_call_fn_567379\3�0
)�&
$�!
inputs���������  
� "%�"
unknown���������  �
J__inference_q_activation_4_layer_call_and_return_conditional_losses_567807_/�,
%�"
 �
inputs��������� 
� ",�)
"�
tensor_0��������� 
� �
/__inference_q_activation_4_layer_call_fn_567760T/�,
%�"
 �
inputs��������� 
� "!�
unknown��������� �
H__inference_q_activation_layer_call_and_return_conditional_losses_566534g3�0
)�&
$�!
inputs���������  
� "0�-
&�#
tensor_0���������  
� �
-__inference_q_activation_layer_call_fn_566487\3�0
)�&
$�!
inputs���������  
� "%�"
unknown���������  �
$__inference_signature_wrapper_566064�� ��3��F��f��y�G�D
� 
=�:
8
input_layer)�&
input_layer��������� "1�.
,
softmax!�
softmax����������
C__inference_softmax_layer_call_and_return_conditional_losses_568035c3�0
)�&
 �
inputs���������

 
� ",�)
"�
tensor_0���������
� �
(__inference_softmax_layer_call_fn_568030X3�0
)�&
 �
inputs���������

 
� "!�
unknown���������
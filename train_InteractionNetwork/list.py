import os
import numpy as np

list_dir = os.listdir('./')
#print (list_dir)


b = []

for mname in list_dir:
    if (mname.split("_")[0] is 'nconst32' or 'nconst16' or 'nconst8'):
        if (os.path.isfile('{}/acc.txt'.format(mname))):
            a = np.loadtxt('{}/acc.txt'.format(mname))
            b.append([a[0], mname.split("_"), 'p_rate:{}'.format(a[1])])


b_sorted = sorted ([b[i] for i in range(len(b))], reverse=True)

for b in b_sorted:
    print (b)


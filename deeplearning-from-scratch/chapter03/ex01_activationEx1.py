def step_function(x):
    if x > 0 :
        return 1
    else:
        return 0
  
'''
x가 실수인 경우 받아들여지지만 numpy 배열형인 경우 인수로 넣기 불가능
'''

#print(step_function([0.5, 0.5]))
# TypeError: '>' not supported between instances of 'list' and 'int'

import numpy as np
import matplotlib.pyplot as plt

def step_function(x):
    return np.array(x > 0, dtype=np.int)

x = np.arange(-5.0, 5.0, 0.1)
y = step_function(x)

plt.plot(x,y)
plt.ylim(-0.1, 1.1)
plt.show()
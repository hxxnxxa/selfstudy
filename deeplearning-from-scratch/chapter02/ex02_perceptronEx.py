import numpy as np
x = np.array([0, 1])
w = np.array([0.5, 0.5])
b = -0.7

#print(w*x) # [0 0.5]
#print(np.sum(w*x)) # 0.5
'''
x[0] = 0
x[1] = 1
w[0] = 0.5
w[1] = 0.5

0 1 * 0.5 
      0.5 
w * x = (0 * 0.5) + (1 * 0.5) = 0.5
'''


print(np.sum(w*x)+b) # 0.5 - 0.7 = -0.2
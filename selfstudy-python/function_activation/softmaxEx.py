import numpy as np
import matplotlib.pylab as plt

def softmax(x) : 
    x_exp = np.exp(x)
    x_sum = np.sum(x_exp)
    s = x_exp / x_sum
    
    return s

x = np.arange(-5.0, 5.0, 0.1)
y = softmax(x)

plt.plot(x,y)
plt.ylim(0, 0.1)
plt.savefig("softmax.png")
plt.show()
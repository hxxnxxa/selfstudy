import numpy as np
import matplotlib.pylab as plt

def sigmoid(x) :
    return 1 / (1 + np.exp(-x))

def sigmoid_derivative(x) :
    s = 1 / (1+np.exp(-x))
    ds = sigmoid(x) * (1-sigmoid(x))
    
    return ds

x = np.arange(-5.0, 5.0, 0.1)
y = sigmoid_derivative(x)

plt.plot(x,y)
plt.ylim(-0.1, 1.1)
plt.savefig("sigmoid_derivative.png")
plt.show()
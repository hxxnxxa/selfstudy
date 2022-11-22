'''
            3층 신경망 구현하기
'''

import numpy as np
import matplotlib.pyplot as plt

def sigmoid(x):
    return 1 / (1 + np.exp(-x))

def identity_function(x):
    return x

def init_network():
    network = {}
    network['W1'] = np.array([[0.1, 0.3, 0.5], [0.2, 0.4, 0.6]]) 
    network['b1'] = np.array([0.1, 0.2, 0.3])
    network['W2'] = np.array([[0.1, 0.4], [0.2, 0.5], [0.3, 0.6]])
    network['b2'] = np.array([0.1, 0.2])
    network['W3'] = np.array([[0.1, 0.3], [0.2, 0.4]])
    network['b3'] = np.array([0.1, 0.2])

    return network

def forward(network, x):
    W1, W2, W3 = network['W1'], network['W2'], network['W3']
    b1, b2, b3 = network['b1'], network['b2'], network['b3']

    a1 = np.dot(x, W1) + b1
    #print('a1: ',a1) # a1:  [0.3 0.7 1.1] 
    z1 = sigmoid(a1)
    #print('z1: ',z1) # z1:  [0.57444252 0.66818777 0.75026011]
    a2 = np.dot(z1, W2) + b2
    #print('a2: ',a2) # a2:  [0.51615984 1.21402696]
    z2 = sigmoid(a2)
    #print('z2: ',z2) # z2:  [0.62624937 0.7710107 ]
    a3 = np.dot(z2, W3) + b3
    #print('a3: ',a3) # a3:  [0.31682708 0.69627909]
    y = identity_function(a3)

    return y

network = init_network()
x = np.array([1.0, 0.5])
y = forward(network, x)
print('y: ',y) # [0.31682708 0.69627909]
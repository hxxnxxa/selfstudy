import numpy as np
'''
* AND GATE
----------
x1  x2  y
----------
0   0   0
1   0   0
0   1   0
1   1   0
'''
def AND(x1, x2):
    x = np.array([x1, x2])
    w = np.array([0.5, 0.5])
    b = -0.7
    tmp = np.sum(w*x) + b
    if tmp <= 0:
        return 0
    elif tmp > 0:
        return 1
    
'''
* NAND GATE
------------
x1  x2  y
------------
0   0   1
1   0   1
0   1   1
1   1   0
'''
def NAND(x1, x2 ):
    x = np.array([x1, x2])
    w = np.array([-0.5, -0.5])
    b = 0.7
    tmp = np.sum(w*x) + b
    if tmp <= 0:
        return 0
    else:
        return 1

'''
* OR GATE
----------
x1  x2  y
----------
0   0   0
1   0   1
0   1   1
1   1   1
'''
def OR(x1, x2):
    x = np.array([x1, x2])
    w = np.array([0.5, 0.5])
    b = -0.2
    tmp = np.sum(w*x) + b
    if tmp <= 0:
        return 0
    else:
        return 1

'''
* XOR GATE
- 배타적 논리합이라는 논리 회로
- x1과 x2 중 한 쪽이 1일 때만 1을 출력
- 배타적이란 자기 외에는 거부한다는 의미

x1  x2  y
----------
0   0   0
1   0   1
0   1   1
1   1   1

x1  x2  s1  s2  y
------------------
0   0   1   0   0
1   0   1   1   1
0   1   1   1   1
1   1   0   1   0
'''
def XOR(x1, x2):
    s1 = NAND(x1, x2)
    s2 = OR(x1, x2)
    y = AND(s1, s2)
    return y

print(XOR(0,0)) # 0
print(XOR(1,0)) # 1 
print(XOR(0,1)) # 1
print(XOR(1,1)) # 0
    
#print(AND(0,0)) # 0
#print(AND(0,1)) # 0 
#print(AND(1,0)) # 0 
#print(AND(1,1)) # 1
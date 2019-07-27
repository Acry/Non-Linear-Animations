#!/usr/bin/env python3
"""Impulse Function"""
from math import exp
import matplotlib.pyplot as plt


def impulse(k, x):
    h = k * x
    return h * exp(1.0 - h)


fig = plt.figure()
fig.set_size_inches(18.5, 10.5)

k = 5.0
Y = []
T = []
t = 0
step = 0.0166
done = 0
while not done:
    t = t + step
    print(t)
    y = impulse(k, t)
    Y.append(y)
    T.append(t)
    if t > 5:
        done = 1

label = "k="+str(k)
plt.plot(T, Y, label=label)

k = k * .75
Y = []
T = []
t = 0
step = 0.0166
done = 0
while not done:
    t = t + step
    print(t)
    y = impulse(k, t)
    Y.append(y)
    T.append(t)
    if t > 5:
        done = 1

label = "k="+str(k)
plt.plot(T, Y, label=label)

k = k * .75
Y = []
T = []
t = 0
step = 0.0166
done = 0
while not done:
    t = t + step
    print(t)
    y = impulse(k, t)
    Y.append(y)
    T.append(t)
    if t > 5:
        done = 1

label = "k="+str(k)
plt.plot(T, Y, label=label)

k = k * .75
Y = []
T = []
t = 0
step = 0.0166
done = 0
while not done:
    t = t + step
    print(t)
    y = impulse(k, t)
    Y.append(y)
    T.append(t)
    if t > 5:
        done = 1

label = "k="+str(k)
plt.plot(T, Y, label=label)

k = k * .75
Y = []
T = []
t = 0
step = 0.0166
done = 0
while not done:
    t = t + step
    print(t)
    y = impulse(k, t)
    Y.append(y)
    T.append(t)
    if t > 5:
        done = 1

label = "k="+str(k)
plt.plot(T, Y, label=label)

plt.xlabel('t')
plt.ylabel('y')
plt.title('Impulse')
plt.legend()
fig.savefig("impulse_n.png")
plt.show()

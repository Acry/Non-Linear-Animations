#!/usr/bin/env python3
"""Impulse Function"""
from math import exp
import matplotlib.pyplot as plt


def impulse(k, x):
    h = k * x
    return h * exp(1.0 - h)


fig = plt.figure()
fig.set_size_inches(18.5, 10.5)

Y = []
T = []

t = 0
t_max = 5
step = 0.0166
done = 0
k = 1.5
while not done:
    t = t + step
    y = impulse(k, t)
    Y.append(y)
    T.append(t)
    if t > t_max:
        done = 1

label = "k="+str(k)
plt.plot(T, Y, label=label)

plt.xlabel('t')
plt.ylabel('y')
plt.title('Impulse')
plt.legend()
fig.savefig("impulse.png")
plt.show()

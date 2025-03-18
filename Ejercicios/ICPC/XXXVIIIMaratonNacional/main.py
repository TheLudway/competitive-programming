#!/usr/bin/env python3

import random
import math
import time 

# Define constants
L = 1
W = 1
N = 10**8  # 10^6
time_1 = time.time()
# Generate random numbers
X1 = [random.uniform(0, W) for _ in range(N)]
X2 = [random.uniform(0, W) for _ in range(N)]
Y1 = [random.uniform(0, L) for _ in range(N)]
Y2 = [random.uniform(0, L) for _ in range(N)]

# Compute centroids (Cx, Cy)
Cx = [(X1[i] + X2[i]) / 2.0 for i in range(N)]
Cy = [(Y1[i] + Y2[i]) / 2.0 for i in range(N)]

# Compute radius R
R = [math.sqrt((X1[i] - X2[i])**2 + (Y1[i] - Y2[i])**2) / 2.0 for i in range(N)]

# Compute I (logical condition checking)
I = [(0 <= (Cx[i] - R[i]) and (Cx[i] + R[i]) <= W and 
      0 <= (Cy[i] - R[i]) and (Cy[i] + R[i]) <= L) for i in range(N)]

# Compute mean of I
mean_I = sum(I) / N
time_2 = time.time()

print("Mean of I:", round(mean_I, 4))
print("tiempo tomado: ", time_2 - time_1)

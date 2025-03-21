#!/usr/bin/env python3
import time
arr = [x for x in range (1, 6)]

# Obtener dos numeros que al ser sumados den 6.

# solucion de fuerza bruta

def square_complex(arr, target):
    time_1 = time.time()
    for i in arr:
        for j in arr[i::]:
            if (i + j) == target:
                time_2 = time.time()
                return True, (time_2 - time_1)

    

# Sin embargo, esto da una complejidad computacional de n^2

# Esto se puede redcuir utilizando dos variables
pointer_one = 0
pointer_two = len(arr)-1


def two_sum(arr, target):
    pointer_one = 0
    pointer_two = len(arr) - 1
    time_1 = time.time()
    while pointer_one < pointer_two:
        suma = arr[pointer_one] + arr[pointer_two]

        if suma == target:
            time_2 = time.time()
            return True, (time_2 - time_1)
        elif suma < target:
            pointer_one += 1
        else:
            pointer_two -= 1

    return False

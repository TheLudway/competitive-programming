#!/usr/bin/env python3

n = int(input())

for i in range(n):
    palabra = input()

    if len(palabra) > 10:
        count = len(palabra) - 2
        print(palabra[0], count, palabra[-1], sep='')
    else:
        print(palabra)

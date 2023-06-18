from sys import stdin
import numpy as np

for line in stdin:
    line = line.split()
    rows, cols = int(line[0]), int(line[1])
    matrix = []
    for i in range(rows):
        matrix.append([int(x) for x in input().split()])
    matrix = np.transpose(np.array(matrix)).tolist()
    for i in range(cols):
        print(' '.join(str(num) for num in matrix[i]))
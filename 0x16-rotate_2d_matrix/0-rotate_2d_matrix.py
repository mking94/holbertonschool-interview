#!/usr/bin/python3
"""
Given an n x n 2D matrix, rotate it 90 degrees clockwise.
"""


def rotate_2d_matrix(matrix):
    i = len(matrix) - 1
    aux = {}
    j = 0
    while i >= 0:
        for x in range(0, len(matrix[i])):
            aux["[{}][{}]".format(x, j)] = matrix[i][x]
        j += 1
        i -= 1
    for i in range(0, len(matrix)):
        for j in range(0, len(matrix[i])):
            matrix[i][j] = aux["[{}][{}]".format(i, j)]

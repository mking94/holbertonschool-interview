#!/usr/bin/python3
""" Module for calculating Pascal Triangle """


def pascal_triangle(n):
    if n <= 0:
        return []
    pas_tri = [[1]]
    for i in range(0, n):
        aux = [1]
        for j in range(1, i):
            aux.append(pas_tri[i][j] + pas_tri[i][j - 1])
        aux.append(1)
        pas_tri.append(aux)
    del pas_tri[1]
    return pas_tri

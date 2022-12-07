#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
void heapify(int *arr, size_t size, int i);
void heap_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
#endif

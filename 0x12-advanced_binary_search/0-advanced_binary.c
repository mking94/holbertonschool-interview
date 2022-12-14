#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * advanced_binary - Function that the index where value is located
 * @array: The array input
 * @size: Array size
 * @value: value that want to find index
 *
 * Return: The index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
if (value == NULL)
{
return (-1);
}
int aux = (int)size / 2;
int compteur = 0;
do {
if (array[aux] > value)
{
for (int i = compteur; i < aux; i++)
{
if (array[i] == value)
{
return (i);
}
}
compteur = aux;
aux = compteur + ((int)((int)size - aux) / 2);
}
else
{
compteur = aux;
aux = compteur + ((int)((int)size - aux) / 2) + 1;
}
if (compteur >= size)
{
return (-1);
}
} while (compteur < size);
}

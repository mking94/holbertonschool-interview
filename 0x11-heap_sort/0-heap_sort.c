#include "heap.h"
/**
 * heap_sort - Function that sort an array using heap
 * @array: input array
 * @size: size of array
 *
 * Return: nothing
 */
void heap_sort(int *array, size_t size)
{
	for (int i = (int)(size / 2) - 1; i >= 0; i--)
	{
		heapify(array, size, i);
	}

	for (int i = (int)(size / 2) - 1; i >= 0; i--)
	{
		swap(&array[0], &array[i]);
		heapify(array, i, 0)
	}
}
/**
 * heapify - To heapify a subtree rooted with node i
 * @arr: the input array
 * @N: array size
 * @i: the node
 *
 * Return: nothing
*/
void heapify(int arr[], size_t size, int i)
{
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;

	if (left < (int)size && arr[left] > arr[largest])
		largest = left;
	if (right < (int)size && arr[right] > arr[largest])
		largest = right;
	if (largest != i)
	{
		swap(&arr[i], &arr[largest]);
		heapify(arr, size, largest);
	}
}
/**
 * swap - Function swap
 * @a: first input
 * @b: seconde input
 *
 * Return: nothing
*/
void swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}

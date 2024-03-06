#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * swap - swap 2 element
 * @a: element 1
 * @b: element 2
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * lomuto_partition - divide into pieces
 * @array: my array to divide
 * @low: low one
 * @high: high element
 *
 * Return: return i + 1
 */
int lomuto_partition(int *array, int low, int high)
{
	int pivot = array[high];
	int i = low - 1;
	int j = 0;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
}
/**
 * quick_sort_helper - divide into pieces
 * @array: my array
 * @low: low one
 * @high: high element
 */
void quick_sort_helper(int array[], int low, int high)
{
	int size = high;
	if (low < high)
	{
		int pi = lomuto_partition(array, low, high);

		quick_sort_helper(array, low, pi - 1);
		quick_sort_helper(array, pi + 1, high);
		print_array(array, size + 1);
	}
}

/**
 * quick_sort - divide into pieces
 * @array: my array
 * @size: array size
 */
void quick_sort(int array[], size_t size)
{
	quick_sort_helper(array, 0, size - 1);
}

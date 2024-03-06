#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - sort the array with selection sort algo
 * @array: the array to sort
 * @size: the array size
 *
 */
void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t min_idx = 0;
	size_t n = size;
	size_t j = 0;

	while (j < size - 1)
	{
		min_idx = j;

		for (i = j + 1; i < size; i++)
			if (array[i] < array[min_idx])
				min_idx = i;

		if (min_idx != j)
		{
			int temp = array[min_idx];
			array[min_idx] = array[j];
			array[j] = temp;
			print_array(array, n);
		}
		j++;
	}
}

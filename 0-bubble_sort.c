#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - sort the list array
 * @array: the array
 * @size: size of the array
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t k = 0;
	int i = 1;
	size_t j = 0;
	int temp = 0;
	size_t n = size;

	while (k < size)
	{
		while (j < size - 1)
		{
			if (array[j] > array[i])
			{
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;

				print_array(array, n);
			}
			i++;
			j++;
		}
		j = 0;
		i = 1;
		k++;
	}
}

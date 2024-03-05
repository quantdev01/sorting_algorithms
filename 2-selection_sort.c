#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/*
 * selection_sort - sort the array with selection sort algo
 * @array: the array to sort
 * @size: the array size
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0;
	size_t temp = 0;
	size_t n = size;
	size_t j = 0;

	while (j < size)
	{
		for (i = 0; i < size-1; i++)
		{
			if (array[i] > array[i+1])
			{
				temp = array[i];
				array[i] = array[i+1];
				array[i+1] = temp; 
				print_array(array, n);
			}
		}
		j++;
	}
}

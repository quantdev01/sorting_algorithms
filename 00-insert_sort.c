#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * insert_sort - sorting algo with insertion method
 * @array: the array
 * @size: array lenght
 */
void insert_sort(int *array, size_t size)
{
	size_t i = 0;
	int temp = 0;
	size_t n = size;
	size_t j = 0;

	while (i < size)
	{
		temp = array[i];
		j = i - 1;
		while (j >= 0 && array[j] > temp)
		{
			array[j+1] = array[j];
			j--;
			print_array(array, n);
		}
		array[j+1] = temp;
		i++;
	}
}

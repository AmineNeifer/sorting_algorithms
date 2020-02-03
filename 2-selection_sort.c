#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * selection_sort - sort an array.
 *
 * @array: array to sort.
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	int min, tmp, test = 0;
	size_t i, j, min_index;

	if (size == 0)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min = array[i];
		test = 0;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < min)
			{
				test++;
				min = array[j];
				min_index = j;
			}
		}
		if (test != 0)
		{
			tmp = array[i];
			array[i] = min;
			array[min_index] = tmp;
			print_array(array, size);
		}
	}
}

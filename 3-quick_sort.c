#include <stdlib.h>
#include <stdio.h>
#include "sort.h"
/**
*
*
*
*/
void swap(int *array, int i, int j)
{
int tmp;
tmp = array[i];
array[i] = array[j];
array[j] = tmp;
}
/**
*
*
*
*/
int partition(int *array, int low, int high, size_t size)
{
int pivot, i = low, j = 0;
(void) size;
pivot = array[high];
for (j = low; j < high; j++)
{
if (array[j] < pivot)
{
if (i != j)
{
swap(array, i, j);
print_array(array, size);
}
i++;
}
}
if (array[i] != array[high])
{
swap(array, i , high);
print_array(array, size);
}
return (i);
}
/**
*
*
*
**/
void q_sort(int *array, int low, int high, size_t size)
{
int pivot;
if (low < high)
{
pivot = partition(array, low, high, size);
q_sort(array, low, pivot - 1, size);
q_sort(array, pivot + 1, high, size);
}
}
void quick_sort(int *array, size_t size)
{
q_sort(array, 0, size - 1, size);
}

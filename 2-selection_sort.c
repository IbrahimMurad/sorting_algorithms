#include "sort.h"


/**
 * swap_selection - swaps the values of to int variables
 * @a: a pointer to the first int variable
 * @b: a pointer to the second int variable
 *
 * Return: Nothing
*/

void swap_selection(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}


/**
 * selection_sort - sorts an array of integers
 * by the selection sort algorithm
 * @array: the arrau of integers to be sorted
 * @size: the size of the array
 *
 * Return: Nothing
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, smallest_int_indx;

	for (i = 0; i < size; i++)
	{
		smallest_int_indx = i;
		for (j = i; j < size; j++)
		{
			if (array[smallest_int_indx] > array[j])
			{
				smallest_int_indx = j;
			}
		}
		if (smallest_int_indx != i)
		{
			swap_selection(array + smallest_int_indx, array + i);
			print_array(array, size);
		}
	}
}

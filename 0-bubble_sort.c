#include "sort.h"


/**
 * swap_bubble - swaps the values of to int variables
 * @a: a pointer to the first int variable
 * @b: a pointer to the second int variable
 *
 * Return: Nothing
*/

void swap_bubble(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - sorts an array of integers
 * using bubble sort algorithm
 * @array: an array of integers
 * @size: the size of the array
 *
 * Return: Nothing
*/

void bubble_sort(int *array, size_t size)
{
	int swapped = 1;
	size_t i, v_size = size;

	if (size == 0)
		return;
	while (swapped)
	{
		swapped = 0;
		for (i = 0; i < v_size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_bubble(array + i, array + i  + 1);
				swapped = 1;
				print_array(array, size);
			}
		}
		v_size--;
	}
}

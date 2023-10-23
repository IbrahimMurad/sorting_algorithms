#include "sort.h"

/**
 * swap_quick - swaps the values of two int variables
 * @a: a pointer to the first int variable
 * @b: a pointer to the second int variable
 *
 * Return: Nothing
*/

void swap_quick(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * partition - splits an array of integers around a value as a pivot
 * @array: the array to be sorted
 * @size: the size of the array
 * @lo: the index of the first element in the partition
 * @hi: the index of the last element in the partiction
 *
 * Return: the index of the pivot
*/

int partition(int *array, size_t size, int lo, int hi)
{
	int pivot, i, j;

	pivot = array[hi];
	i = lo - 1;

	for (j = lo; j <= hi; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (i != j)
			{
				swap_quick(array + i, array + j);
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[hi])
	{
		swap_quick(array + i + 1, array + hi);
		print_array(array, size);
	}
	return (i + 1);
}


/**
 * quicksort - sorts a partition of an array of integers
 * @array: the array partion to be sorted
 * @size: the size of the array
 * @lo: the first indix of the partiction
 * @hi: the last index of the partiction
 *
 * Return: Nothing
*/

void quicksort(int *array, size_t size, int lo, int hi)
{
	int pivot_index;

	if (lo < hi)
	{
		pivot_index = partition(array, size, lo, hi);

		quicksort(array, size, lo, pivot_index - 1);
		quicksort(array, size, pivot_index + 1, hi);
	}
}


/**
 * quick_sort - sorts an array of integers
 * using bubble sort algorithm
 * @array: an array of integers
 * @size: the size of the array
 *
 * Return: Nothing
*/

void quick_sort(int *array, size_t size)
{
	int lo, hi;

	lo = 0;
	hi = (int) size - 1;
	quicksort(array, size, lo, hi);
}

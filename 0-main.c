#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {9059, 2525, 1394, 8489, 236, 672, 6010, 935, 347, 9659, 7180, 950, 2945, 444, 3075, 8255, 3865, 7785, 4,};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
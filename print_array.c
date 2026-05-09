#include <stdio.h>
#include "sort.h"

/**
 * print_array - prints an array of integers
 * @array: array to print
 * @size: number of elements
 */

void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;

	while (i < size)
	{
		if (i != 0)
			printf(", ");

		printf("%d", array[i]);

		i++;
	}

	printf("\n");
}

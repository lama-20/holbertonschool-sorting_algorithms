#include <stdio.h>
#include "sort.h"

/**
 * print_list - prints doubly linked list
 * @list: list to print
 */

void print_list(const listint_t *list)
{
	int first = 1;

	while (list)
	{
		if (!first)
			printf(", ");

		printf("%d", list->n);

		first = 0;
		list = list->next;
	}

	printf("\n");
}

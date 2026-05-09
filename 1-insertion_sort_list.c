#include "sort.h"

/**
 * swap_nodes - swaps two adjacent nodes
 * @list: doubly linked list
 * @node1: first node
 * @node2: second node
 */

void swap_nodes(listint_t **list, listint_t *node1,
	listint_t *node2)
{
	node1->next = node2->next;

	if (node2->next)
		node2->next->prev = node1;

	node2->prev = node1->prev;

	if (node1->prev)
		node1->prev->next = node2;
	else
		*list = node2;

	node2->next = node1;
	node1->prev = node2;
}

/**
 * insertion_sort_list - sorts doubly linked list
 * using insertion sort algorithm
 * @list: doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *insert;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current)
	{
		insert = current;

		while (insert->prev && insert->n < insert->prev->n)
		{
			swap_nodes(list, insert->prev, insert);
			print_list(*list);
		}

		current = insert->next;
	}
}

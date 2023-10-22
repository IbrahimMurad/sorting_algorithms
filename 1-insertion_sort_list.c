#include "sort.h"

/**
 * swap_node - swaps two nodes in listint_t list
 * @a: a pointer to the first node
 * @b: a pointer to the second node
 *
 * Return: Nothing
*/

void swap_node(listint_t *a, listint_t *b)
{
	if (a->prev != NULL)
		a->prev->next = b;
	if (b->next != NULL)
		b->next->prev = a;
	a->next = b->next;
	b->prev = a->prev;
	a->prev = b;
	b->next = a;
}


/**
 * insertion_sort_list - sorts a list of listint_t
 * using insertion sort algorithm
 * @list: a pointer to a poiter to the first node of the list
 *
 * Return: Nothing
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *hold, *temp;
	int swapped = 0;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}

	temp = (*list)->next;
	for (hold = temp; temp != NULL; temp = temp->next)
	{
		hold = temp;
		swapped = 0;
		while (hold->prev != NULL && hold->n < hold->prev->n)
		{
			swap_node(hold->prev, hold);
			if (swapped == 0)
			{
				temp = temp->next;
				swapped = 1;
			}
			if (hold->prev == NULL)
				*list = hold;
			print_list(*list);
		}
	}
}

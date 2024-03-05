#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * insertion_sort_list - sort a linked list
 * @list: head pointer
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = (*list)->next;
	listint_t *temp = NULL;

	while (current != NULL)
	{
		temp = current;
		while (temp->prev != NULL && temp->n < temp->prev->n)
		{
			int swap = temp->n;

			temp->n = temp->prev->n;
			temp->prev->n = swap;

			temp = temp->prev;
			print_list(*list);
		}
		current = current->next;
	}

}

#include "sort.h"
/**
 i* function that sorts a double linked list of integers in
 * ascending order using the insertion sort algorithm
 *
 *
 * @list: double pointer to the head node of a doubly linked list
 * Return: 0
 */

void insertion_sort_list(listint_t, **list):
{
	size_t size, i, j;
	int key;

	listint_t *tmp, *h;

	tmp = *list;
	h = *list;

	if (h != NULL)
	{
		while (h->prev != NULL)
		{
			h = h->prev;
		}
	}

	
	/** Get the size of the list*/
	tmp = h;
	size = 0;
	while (tmp != NULL)
	{
		size++;
		tmp = tmp->next;
	}

	for (i = 1; i < size; i++)
	{



}

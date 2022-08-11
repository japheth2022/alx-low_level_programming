#include "lists.h"

/**
 * list_len - function that lists noodes of list_t
 * @h: string to print
 * Return: number of nodes
 */

size_t list_len(const list_t *h)

{

	int count = 0;



	while (h != NULL)

	{

	count++;

	h = h->next;

	}

	return (count);

}

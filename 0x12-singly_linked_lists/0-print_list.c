#include "lists.h"
#include <stdio.h>


/**
 * print_dlistint - prints all the elements of a list
 * @h: head of the list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)

{

	int count;



	count = 0;



	if (h == NULL)

	return (count);


	while (h->prev != NULL)

	h = h->prev;



	while (h != NULL)

	{

	printf("%d\n", h->n);

	count++;

	h = h->next;

	}


	return (count);

}

#include "lists.h"
#include <stdio.h>
/**
 * print_list - function to print elements of list_t
 * @h: string to print
 * Return: number of nodes
 */

size_t print_list(const list_t *h)

{

	unsigned int i = 0;



	while (h != NULL)

	{

	if (h->str == NULL)

	printf("[0] (nil)\n");

	else

	printf("[%d] %s\n", h->len, h->str);

	h = h->next;

	i++;

	}

	return (i);

}

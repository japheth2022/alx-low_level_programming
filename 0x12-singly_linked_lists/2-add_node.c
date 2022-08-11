#include "lists.h"
#include <string.h>
/**
 * add_node - function that adds a new node
 * @head: list to add to
 * @str: string to duplicate
 * Return: address of new element or NULL if fail
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *newNode;

	int length, index = 0;

	char *dupstr;

	dupstr = strdup(str);

	while (*str)

	{

	index++;

	str++;

	}
	length = index;

	if (dupstr == NULL)

	return (NULL);

	newNode = (list_t *)malloc(sizeof(list_t));

	if (newNode == NULL)

	return (NULL);

	newNode->str = dupstr;

	newNode->len = length;

	newNode->next = *head;
	*head = newNode;
	return (newNode);

}

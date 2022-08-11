#include "lists.h"

/**
 * free_list - function that fres list_t
 * @head: ptr to beginning of list
 * Return: 0
 */

void free_list(list_t *head)

{

	list_t *temp = head;



	while (head != NULL)

	{

	temp = head;

	free(temp->str);

	free(temp);

	head = head->next;
	}
}

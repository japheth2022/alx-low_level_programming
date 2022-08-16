#include "lists.h"

#include <stdio.h>
size_t looped_listint_len(const listint_t *head);

size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)

{
	const listint_t *slowP, *fastP;

	size_t nodes = 1;

	if (head == NULL || head->next == NULL)

	return (0);

	slowP = head->next;

	fastP = (head->next)->next;

	while (fastP)
	{
	if (slowP == fastP)
	{

	slowP = head;

	while (slowP != fastP)
	{
	nodes++;

	slowP = slowP->next;

	fastP = fastP->next;

	}
	slowP = slowP->next;

	while (slowP != fastP)

	{

	nodes++;

	slowP = slowP->next;

	}
	return (nodes);

	}
	slowP = slowP->next;

	fastP = (fastP->next)->next;

	}
	return (0);

}


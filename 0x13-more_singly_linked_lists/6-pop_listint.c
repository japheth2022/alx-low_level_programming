 #include "lists.h"

 /**
  * pop_listint - A function to delete the head node
  * @head: double pointer to 1st node in list
  * Return: Head node's data
  */
int pop_listint(listint_t **head)

{
	listint_t *temp;

	int temp2;



	temp = (*head);

	if (temp == NULL || head == NULL)

	return (0);



	if (temp != NULL)

	temp2 = temp->n;



	(*head) = (*head)->next;



	free(temp);

	return (temp2);

}

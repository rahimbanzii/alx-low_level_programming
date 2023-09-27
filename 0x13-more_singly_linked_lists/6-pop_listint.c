#include "lists.h"

/**
 * pop_listint - To deletes the head node of a linked list
 * @head: pointer to the start element of linked list
 * Return:data inside deleteded element otherwise, 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}


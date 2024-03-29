#include "lists.h"

/**
 * free_listint2 -This frees a linked list
 * @head: pointes to listint_t to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}


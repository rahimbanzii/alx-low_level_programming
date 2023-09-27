#include "lists.h"

/**
 * add_nodeint - sad new node to beginning of a linked list
 * @head: pointer to beginning node in the list
 * @n: dataa to be insert in  new node
 * Return: pointere, otherwise NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

#include "lists.h"
/**
 * sum_listint - calculatessum of  data in  listint_t
 * @head: first node
 * Return: result from sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}


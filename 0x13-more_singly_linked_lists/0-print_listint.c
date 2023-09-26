#include "lists.h"

/**
 * printt_listint - prints elements of a linked list
 * @k: linked list listint_x to print
 * Return: no of nodes
 */
size_t printt_listint(const listint_x *k)
{
	size_t num = 0;

	while (k)
	{
		printf("%d\n", k->n);
		num++;
		k = k->next;
	}

	return (num);
}

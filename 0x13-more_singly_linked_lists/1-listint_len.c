#include "lists.h"

/**
 * listint_len -to  return no of elements in a linked lists
 * @k: linked list listint_t to traverse
 * Return: no of nodes
 */
size_t listint_len(const listint_t *k)
{
	size_t num = 0;

	while (k)
	{
		num++;
		k = k->next;
	}

	return (num);
}

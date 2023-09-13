#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator -To prints each array elem on a newline
 * @array: array
 * @size: no of  to print
 * @action: pointer to print in regular or hexagonal
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}


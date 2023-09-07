#include <stdlib.h>
#include "main.h"

/**
 * *_realloc -This reallocates a memory block using malloc and free
 * @ptr: Apointer to the memory previsouly allocated by malloc
 * @old_size:The  size of the allocated memory for ptr
 * @new_size: The new size of the new memory block
 * Return:A  pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int k;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (k = 0; k < new_size; k++)
			ptr1[k] = old_ptr[k];
	}

	if (new_size > old_size)
	{
		for (k = 0; k < old_size; k++)
			ptr1[k] = old_ptr[k];
	}

	free(ptr);
	return (ptr1);
}

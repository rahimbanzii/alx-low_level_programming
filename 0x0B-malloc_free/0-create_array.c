#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of size assigning char c
 * @size: size of the array
 * @c: char tobe  assigned
 * Description: create an  array of size ssigingn char c
 * Return: pointer to array,  if fail NULL
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}

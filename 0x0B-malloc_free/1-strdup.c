#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - replicate to a new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int i, b = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	aaa = malloc(sizeof(char) * (i + 1));

	if (aaa == NULL)
		return (NULL);

	for (b = 0; str[b]; b++)
		aaa[b] = str[b];

	return (aaa);
}

#include <stdlib.h>
#include "main.h"

/**
 * count_word - a function to count number of words in a string
 * @s: The string to assess
 *
 * Return: Thenumber of words
 */
int count_word(char *s)
{
	int flag, c, z;

	flag = 0;
	z = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			z++;
		}
	}

	return (z);
}
/**
 * **strtow - Break a string into words
 * @str: The string to split
 * Return: A pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, x = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[x] = tmp - c;
				x++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[x] = NULL;

	return (matrix);
}


#include "main.h"
#include <stdlib.h>
/**
 * argstostr - The main entry
 * @ac: an integer input
 * @av: A double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int w, n, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (w = 0; w < ac; w++)
	{
		for (n = 0; av[w][n]; n++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (w = 0; w < ac; w++)
	{
	for (n = 0; av[w][n]; n++)
	{
		str[r] = av[w][n];
		r++;
	}
	if (str[r] == '\0')
	{
		str[r++] = '\n';
	}
	}
	return (str);
}

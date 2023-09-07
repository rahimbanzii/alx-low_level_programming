#include "main.h"
/**
 * _memset - block of memoryfilled  with a specific value
 * @s: THestarting address of memory to be filled
 * @b: Desired value
 * @n: no of bytes to be changed
 * Return:THE changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

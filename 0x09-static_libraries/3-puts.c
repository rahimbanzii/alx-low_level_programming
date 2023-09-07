#include "main.h"
/**
 * _puts - prints a string, then a new line, to stdout
 * @str: YThestring tobe  printed
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}

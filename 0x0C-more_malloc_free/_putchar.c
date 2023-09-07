#include "main.h"
#include <unistd.h>
/**
 * _putchar - Thiswrites the character c to stdout
 * @c: The character to print
 * Return:1  On success 
 * On error, return -1, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

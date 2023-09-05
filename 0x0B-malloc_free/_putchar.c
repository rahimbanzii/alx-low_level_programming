#include "main.h"
#include <unistd.h>
/**
 * _putchar - write char c to stdout
 * @c: character tobe  printed
 *
 * Return:1 On success
 * On error, -1 is returned, and errno appropriately 
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

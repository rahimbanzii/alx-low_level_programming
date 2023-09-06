#include <stdio.h>
#include "main.h"

/**
 * _putchar - Writes the charc to stdout
 * @c:Char to print
 *
 * Return:1  On succes
 * On error, -1 returned and errno appropriately set
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

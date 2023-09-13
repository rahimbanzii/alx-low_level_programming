#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints A name using pointer to function
 * @name:The string to add
 * @f: Apointer to function
 * Return: no
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

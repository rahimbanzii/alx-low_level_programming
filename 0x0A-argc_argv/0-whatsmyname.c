#include <stdio.h>
#include "main.h"

/**
 * main - Prints aname of program
 * @argc:The number of arguments
 * @argv: An array of arguments
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments ran through program
 * @argc: number of the arguments
 * @argv: array ofthe  arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}

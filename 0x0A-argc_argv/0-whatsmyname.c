#include <stdio.h>
#include "main.h"

/**
 * main - prints name of the program
 * @argc: number ofthe  arguments
 * @argv: array of the arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

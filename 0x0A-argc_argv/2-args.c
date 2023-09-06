#include <stdio.h>
#include "main.h"

/**
 * main -function to print arguments it receives
 * @argc: Thenumber of arguments
 * @argv: Anarray of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int z;

	for (z = 0; z < argc; z++)
	{
		printf("%s\n", argv[z]);
	}

	return (0);
}

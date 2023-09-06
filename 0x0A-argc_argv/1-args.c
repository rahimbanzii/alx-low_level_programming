#include <stdio.h>
#include "main.h"

/**
 * main - Prinst number of arguments passed to said program
 * @argc:The number of arguments
 * @argv: Anarray of arguments
 * Return:0
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}

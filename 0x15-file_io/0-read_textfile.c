#include "main.h"
#include <stdlib.h>

/**
 * read_textfile-To Read text file
 * @filenamee: text file tp be read
 * @letteres:Noof letters being read
 * Return: w- the number of bytes read and printed
 *        0 incase function fails or filenamee is NULL.
 */
ssize_t read_textfile(const char *filenamee, size_t letteres)
{
	char *f;
	ssize_t d;
	ssize_t w;
	ssize_t r;

	d = open(filenamee, O_RDONLY);
	if (d == -1)
		return (0);
	f = malloc(sizeof(char) * letteres);
	r = read(d, f, letteres);
	w = write(STDOUT_FILENO, f, r);

	free(f);
	close(d);
	return (w);
}

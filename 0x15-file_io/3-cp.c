#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer- THis to- Allocate 1024 bytes for a buffer.
 * @file: The name of the file ofwhich buffer is storing characters for
 * Return: A pointer to  newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file
 * @d: The file descriptor to be closed.
 */
void close_file(int d)
{
	int x;

	x = close(d);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close d %d\n", d);
		exit(100);
	}
}

/**
 * main -To Coy the contents of a file to another file.
 * @argc:no of arguments supplied to the program.
 * @argv: array of pointers to the arguments.
 * Return: 0 on success.
 *
 * Description:exit code 97 if argument is incorrect
 * If file_from = exit code 98 if file nonexistant or can't read
 * If file_to = 99 if file cannot be created or written to
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, p, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	p = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || p == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, p);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		p = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (p > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}


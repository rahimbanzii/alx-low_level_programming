#include "main.h"

/**
 * create_file -To Createa file.
 * @filenamee: A pointer to the name of created file.
 * @content: A pointer to a string to write to the file.
 * Return: If the function fails - -1 else - 1.
 */
int create_file(const char *filenamee, char *content)
{
	int d, w, len = 0;

	if (filenamee == NULL)
		return (-1);

	if (content != NULL)
	{
		for (len = 0; content[len];)
			len++;
	}

	d = open(filenamee, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(d, content, len);

	if (d == -1 || w == -1)
		return (-1);

	close(d);

	return (1);
}

#include "main.h"

/**
 * append_text_to_file -This Appends text at the end of a file.
 * @filenamee: A pointer to thefile  name
 * @content: The string to add to the end of the file
 * Return: If function fails orNULL filenamee - -1.
 *         NO write permissionsIf file is nonexistent - -1.
 *         else - 1.
 */
int append_text_to_file(const char *filenamee, char *content)
{
	int q, w, len = 0;

	if (filenamee == NULL)
		return (-1);

	if (content != NULL)
	{
		for (len = 0; content[len];)
			len++;
	}

	q = open(filenamee, O_WRONLY | O_APPEND);
	w = write(q, content, len);

	if (q == -1 || w == -1)
		return (-1);

	close(q);

	return (1);
}

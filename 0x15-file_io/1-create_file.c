#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: text content
 *
 * Return: 1 or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	char *p;
	ssize_t l;
	int n, fd;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);
	if (fd == -1)
		return (-1);
	if (filename == NULL)
		return (-1);
	p = text_content;
	n = 0;
	while (*p)
	{
		n++;
		p++;
	}
	l = write(fd, text_content, n);
	if (l == -1)
		return (-1);
	close(fd);
	return (1);
}

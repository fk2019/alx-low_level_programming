#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to the POSIX
 * standard output
 * @filename: filename
 * @letters: number of letters to be read and printed
 *
 * Return: numbers of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t l, r;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	r = read(fd, buf, letters);
	if (r == -1)
	{
		free(buf);
		return (0);
	}
	buf[r] = '\0';
	close(fd);
	l = write(STDOUT_FILENO, buf, r);
	if (l == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (l);
}

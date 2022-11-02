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
	ssize_t l;
	char *buf;


	buf = malloc(sizeof(char) * letters + 1);
	if (buf == NULL)
		return (0);

	if (filename == NULL)
		return (0);
	fd = open (filename, O_RDONLY);
	if (fd == -1)
		return (0);
	read (fd, buf, letters);
	buf[letters] = '\0';
	close (fd);
	fd = open (filename, O_CREAT | O_WRONLY, 600);
	if (fd == -1)
		return (0);
	l = write (STDOUT_FILENO, buf, letters);
	free (buf);
	return (l);
}

#include "main.h"
int read_files(int fd_from, int fd_to, char *file_from, char *file_to);
int write_file(char *buf, int fd_to, int r, char *file_to);
int open_files(char *file_from, char *file_to);
/**
 * main - copies content of a file to another file
 * @agc: number of arguments
 * @argv: argument array
 * Return: characters copied
 */
int main(int agc, char *argv[])
{
	char *file_from, *file_to;

	if (agc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = argv[1];
	file_to = argv[2];
	open_files(file_from, file_to);
	exit(0);
	return (0);
}

/**
 * read_files - reads contents of files
 * @fd_from: source file fd
 * @fd_to: destination file fd
 * @file_from: source file
 * @file_to: destination file
 *
 * Return: 0, 98 on failrure
 */
int read_files(int fd_from, int fd_to, char *file_from, char *file_to)
{
	char buf[1024];
	int r;

	r = read(fd_from, buf, 1024);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	write_file(buf, fd_to, r, file_to);
	while (r != 0)
	{
		r = read(fd_from, buf, 1024);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
		}
		if (r == 0)
			return (0);
		write_file(buf, fd_to, r, file_to);
	}
	return (0);
}

/**
 * write_file - writes contents of buffer to a file
 * @buf: buffer
 * @fd_to: file descriptor
 * @r: number of characters
 * @file_to: file to be written
 *
 * Return: 0, 99 on error
 */
int write_file(char *buf, int fd_to, int r, char *file_to)
{
	int i;

	i = 0;
	while (i < r)
	{
		if (write(fd_to, &buf[i], 1) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
		i++;
	}
	return (0);
}

/**
 * open_files - opens files
 * @file_from: source file
 * @file_to: destination file
 *
 * Return: 0, or 98, 99 on failure
 */
int open_files(char *file_from, char *file_to)
{
	int fd_from, fd_to;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd_to = open(file_to, O_CREAT | O_EXCL | O_WRONLY, 0664);
	if (fd_to == -1)
	{
		fd_to = open(file_to, O_WRONLY | O_TRUNC);
		if (fd_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	read_files(fd_from, fd_to, file_from, file_to);
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_to);
		exit(100);
	}
	return (0);
}

#include "main.h"

/**
 * main - copies content of a file to another file
 * @agc: number of arguments
 * @argv: argument array
 * Return: characters copied
 */
int main(int agc, char *argv[])
{
	char *buf;
	int fd1, fd2, r, a, b;

	if (agc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		return (-1);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file argv[1]\n");
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(fd1, buf, 1024)) > 0)
	{
		if (fd2 == -1 || write(fd2, buf, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to argv[2]\n");
			close(fd1);
			exit(99);
		}
	}
	if (r == -1)
	{
		free(buf);
		dprintf(STDERR_FILENO, "Error: Can't read from file argv[1]\n");
		exit(98);
	}
       a = close(fd1);
       b = close(fd2);
       if (a == -1 || b == -1)
       {
	       if (a == -1)
		       dprintf(STDERR_FILENO, "Error: Can't close fd %d", a);
	       if ( b == -1)
		       dprintf(STDERR_FILENO, "Error: Can't close fd %d", b);
	       free(buf);
	       exit(100);
       }
       return (0);
}

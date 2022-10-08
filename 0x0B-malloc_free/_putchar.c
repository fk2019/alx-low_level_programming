#include <unistdio.h>

/**
 * _putchar - prints single character to stdout
 * @c: character to print
 *
 * Return: 1 otherwise -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

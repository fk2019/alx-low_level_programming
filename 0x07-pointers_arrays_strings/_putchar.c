#include <unistd.h>

/**
* _putchar - print single character
* @c: character to print to stdout
*
* Return: 1 else -1 
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

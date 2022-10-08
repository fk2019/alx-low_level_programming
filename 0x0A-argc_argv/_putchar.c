#include <unistd.h>
/**
* _putchar  -print single character to stdout
* @c: character to print
*
* Return: 1 otherwise -1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

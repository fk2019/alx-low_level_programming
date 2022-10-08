#include "main.h"
/**
* _puts - prints string to stdout
* @s: string to print
*
*/
void _puts(char *s)
{
	char *p = s;

	while (*p != '\0')
	{
		_putchar(*p);
		p++;
	}
	_putchar(10);
}

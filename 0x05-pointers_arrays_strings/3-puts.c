#include "main.h"

/**
* _puts - print string tostdout
* @str: pointer operand
*
* Return: void
*/
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		_putchar(str[i]);
	_putchar(10);
}

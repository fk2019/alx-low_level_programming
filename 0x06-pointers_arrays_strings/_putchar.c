#include <unistd.h>

/**
* _putchar - print character to stdout
* @c: character to be printed
*
* Return: return 1 on success or -1 
* approprately
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

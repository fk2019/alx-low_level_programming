#include "function_pointers.h"

/**
 * print_name - funtion pointer to print name
 * @name: name to print
 * @f: call back funtion to print name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

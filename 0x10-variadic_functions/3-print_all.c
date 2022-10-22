#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_string - prints strings
 * @arg: argument
 *
 */
void print_string(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);
	if (s == NULL)
		printf("(nil)");
	printf("%s", s);
}

/**
 * print_float - prints float
 * @arg: argument
 *
 */
void print_float(va_list ap)
{
	float f;

	f = va_arg(ap, double);
	printf("%f", f);
}

/**
 * print_integer - prints integer
  * @arg: argument
 *
 */
void print_integer(va_list ap)
{
	int i;

	i = va_arg(ap, int);
	printf("%d", i);
}

/**
 * print_char - prints character
  * @arg: argument
 *
 */
void print_char(va_list ap)
{
	char c;

	c = va_arg(ap, int);
	printf("%c", c);
}

/**
 * print_all - prints anythig
 * @format: list of types of arguments
 *
 */
void print_all(const char * const format, ...)
{
	prints_t func[] = {
		{"s", print_string},
		{"f", print_float},
		{"i", print_integer},
		{"c", print_char},
		{NULL, NULL}
	};
	va_list ap;
	const char *p;
	char *separator;
	int i, j;

	va_start(ap, format);
	p = format;
	i = 0;
	while (p[i] != '\0')
	{
		j = 0;
		while (func[j].t != NULL)
		{
			if (p[i] == func[j].t[0])
			{
				separator = ", ";
				func[j].f(ap);
				if (p[i + 1] != '\0')
					printf("%s", separator);
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}

#include <stdarg.h>
#ifndef _VARIADIC_FUNCTIONS_
#define _VARIADIC_FUNCTIONS_
typedef struct prints
{
	char *t;
	void (*f)(va_list ap);
} prints_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_string(va_list arg);
void print_float(va_list arg);
void print_integer(va_list arg);
void print_char(va_list arg);
void print_all(const char * const format, ...);
#endif /*_VARIADIC_FUNCTIONS_*/

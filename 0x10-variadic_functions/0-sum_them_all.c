#include <stdarg.h>

/**
 * sum_them_all - returns sum of all parameters
 * @n: first parameter
 *
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	va_start(ap, n);
	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		sum  += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (sum);
}

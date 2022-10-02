#include "main.h"

/**
* is_prime - check if number is prime
* @n: number to check
* @i: iterator
*
* Return: 1 if prime, else 0
*/
int is_prime(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		return (0);
	}
	return (is_prime(n, i + 1));
}
/**
* is_prime_number - check if number is prime
* @n: number to check
*
* Return: 1 if prime, else 0
*/
int is_prime_number(int n)
{
	if (n < 0 || n == 0 || n == 1)
		return (0);
	return (is_prime(n, 2));
}

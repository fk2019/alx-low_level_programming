#include "main.h"
/**
* _strlen_recursion - check length of string
* @s: string to check
*
* Return: length of string
*/
int _strlen_recursion(char *s)
{
	int n = 1;

	if (*s == '\0')
		return (0);
	return (n + _strlen_recursion(s + 1));
}
/**
* comp_recursion - check characters of string
* @s: string
* @start: beginning of string
* @end: from end of string
*
* Return: 1 if palindrome else 0
*/
int comp_recursion(char *s, int start, int end)
{
	if (*(s + start) == *(s + end))
	{
		if (start == end || start == end + 1)
			return (1);
		return (comp_recursion(s, start + 1, end - 1));
	}
	return (0);
}
/**
* is_palindrome - checks if string is palindrome
* @s: string to check
*
* Return: 1 if palindrome else 0
*/
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comp_recursion(s, 0, _strlen_recursion(s) - 1));
}

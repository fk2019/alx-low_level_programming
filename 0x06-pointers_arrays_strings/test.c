#include <stdio.h>

char *_strcpy(char *dest, char *src, int n)
{
	char *p = dest;

	while (n >= 0)
	{
		*p++ = *src++;
		n--;
	}
	return (dest);
}
int main(void)
{
	char s1[6] = "xxxxx";
	char *ptr;

	printf("%s\n", s1);
	ptr = _strcpy(s1, "Fir", 2);
	printf("%s\n", s1);
	printf("%s\n", ptr);
	return (0);
}

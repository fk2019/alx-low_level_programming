#include <stdio.h>

/**
* main - Entry point
*
* Retrun: Always 0 (Success)
*/
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %lu%s\n", sizeof(c),"byte(s)");
	printf("Size of a int: %lu%s\n", sizeof(i),"byte(s)");
	printf("Size of a long int: %lu%s\n", sizeof(li),"byte(s)");
	printf("Size of a long long int: %lu%s\n", sizeof(lli),"byte(s)");
	printf("Size of a float: %lu\%sn", sizeof(f),"byte(s)");
	return (0);
}

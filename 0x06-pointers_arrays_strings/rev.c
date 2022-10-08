#include <stdio.h>

void reverse_array(int *a, int n)
{
	int *p = a;

	while (*p < n && n > 0)
	{

	}
	while (a < p)
	{
		int tmp;
		tmp = *a;
		*a = *p;
		*p = tmp;
		*a++;
		*p--;
	}
}
/**
* main - entry point
*
* return: 0
*/
int main(void)
{
	void print_array(int *a, int n)
	{
		int i = 0;

		while (i < n)
		{
			if (i != 0)
				printf(", ");
			printf("%d", a[i]);
			i++;
		}
		printf("\n");
	}

	int a[] = {0,1,2,3,4,5,98,1024};
	print_array(a, sizeof(a) / sizeof(int));
	reverse_array(a, sizeof(a) / sizeof(int));
	print_array(a, sizeof(a) / sizeof(int));
	return (0);
}

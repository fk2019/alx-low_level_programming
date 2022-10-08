#include "main.h"
#include <stdio.h>

/**
* main - entry point
* 
* Return: 0
*/
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != 0)
			printf(", ");
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}
int main(void)
{
	int a[] = {1,2,3,4,5,6,12,45};
	print_array(a, sizeof(a)/sizeof(int));
	reverse_array(a, sizeof(a)/sizeof(int));
	print_array(a, sizeof(a)/sizeof(int));
	return (0);
	
}

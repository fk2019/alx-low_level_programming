#include <stdio.h>

int main(void)
{
	int len, first, second, temp;

	first = 0;
	second = 1;
	len = 50;
	printf("%d%d, ", first, second);
	len -= 2;
	while (len > 0)
	{
		printf("%d, ", (first + second));
		temp = second;
		second = first + second;
		first = temp;
		len -= 1;
	}

}

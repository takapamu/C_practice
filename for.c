#include <stdio.h>

int main(void)
{
	int i, sum;
	sum = 0;

	for (i = 1; i <= 777; i++)
	{
		sum = sum + i;
	}

	printf("合計=%d", sum);

	return 0;
}
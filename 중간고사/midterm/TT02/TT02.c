#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num, i;
	int total = 0;

	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
			total += i;
	}

	printf("%d\n", total);
}
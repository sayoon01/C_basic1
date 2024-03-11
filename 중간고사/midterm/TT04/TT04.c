#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j;
	int m, n;
	int prime, total = 0;

	scanf("%d %d", &m, &n);

	for (i = m; i <= n; i++)
	{
		prime = 1;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				prime = 0;
				break;
			}
		}

		if (prime)
			total += i;
	}

	printf("%d\n", total);
}
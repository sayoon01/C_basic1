#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num, i;
	int prime;

	printf("Enter a number : ");
	scanf("%d", &num);

	prime = 1;
	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
		{
			prime = 0;
			break;
		}
	}

	if (prime)
		printf("소수이다\n");
	else
		printf("소수가 아니다\n");
}
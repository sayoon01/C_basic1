#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	long long result = 2;

	printf("Enter a number : ");
	scanf("%d", &num);

	for (int i = 2; i <= num; i++)
	{
		result *= 2;
		if (isPrime(result - 1))
			printf("(2 ^ %d - 1) = %lld은 메르센 소수이다\n", i, result - 1);

	}
}
int isPrime(int value)
{
	int i;

	for (i = 2; i < value; i++)
	{
		if (value % i == 0)
			return 0;
	}
	return 1;
}
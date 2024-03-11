#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

isPrimeNum(int num);
int main(void)
{
	int n;

	printf("Enter a number(-1 for exit) : ");
	scanf("%d", &n);

	while(n!=-1)
	{
		if (isPrimeNum(n))
			printf("소수입니다.\n");
		else
			printf("소수가 아닙니다.\n");

		printf("Enter a number(-1 for exit) : ");
		scanf("%d", &n);
	}

	return 0;
}
isPrimeNum(int num)
{

	for (int i = 2; i < num; i++)
		if (num % i == 0)
			return 0;
	
	return 1;
}

//int main(void)
//{
//	int n, prime;
//
//	printf("Enter a number : ");
//	scanf("%d", &n);
//
//	prime = 1;
//	for (int i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			prime = 0;
//			break;
//		}
//	}
//
//	if (prime)
//		printf("소수입니다.\n");
//	else
//		printf("소수가 아닙니다.\n");
//}
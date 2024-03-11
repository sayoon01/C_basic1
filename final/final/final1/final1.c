#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isPrime(int n);

//int main(void)
//{
//	int num;
//	int primeSum = 0;
//	do
//	{
//		scanf("%d", &num);
//		if (isPrime(num))
//			primeSum += num;
//	} while (num != -1);
//
//	primeSum += 1;
//	printf("%d\n", primeSum);
//}

int main(void)
{
	int num;
	int total = 0;

	scanf("%d",&num);
	while (num != -1)
	{
		if (isPrime(num))
			total += num;
		scanf("%d", &num);
	}

	printf("%d\n", total);
}
int isPrime(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}

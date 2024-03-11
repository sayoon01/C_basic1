#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printSum1ToN(int a);
int main(void)
{
	int n;

	printf("Enter a number : ");
	scanf("%d", &n);

	printSum1ToN(n);
}

void printSum1ToN(int a)
{
	int i, total;

	total = 0;
	for (i = 1; i <= a; i++)
		total += i;

	printf("1 ~ %d의 합 : %d\n", a, total);
}
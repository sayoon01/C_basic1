#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printSumMToN(int a, int b);
int main(void)
{
	int m, n;

	printf("Enter two numbers : ");
	scanf("%d %d", &m, &n);

	printSumMToN(m, n);
}
void printSumMToN(int a, int b)
{
	int i;
	int total = 0;
	
	for (i = a; i <= b; i++)
		total += i;

	printf("%d~ %d의 합: %d\n", a, b, total);
}
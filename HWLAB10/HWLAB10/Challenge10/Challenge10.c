#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printFibo(int n);
int main(void)
{
	int num, i;

	printf("몇개의 피보나치 수열값을 출력할까요?(3보다 큰 정수) : ");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
		printFibo(i);

	printf("\n");
}

void printFibo(int n)
{
	int i;
	int x, y, z;
	x = 0, y = 1, z = 1;

	for (i = 0; i <n; i++)
	{
		z = x + y;
		x = y;
		y = z;
	}

	printf("%d ", z);
}
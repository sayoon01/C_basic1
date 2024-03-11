#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num, i;
	long long total = 1;

	printf("Enter a number (>=2) : ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
		total *= i;

	printf("%d! = ", num);
	for (i = num; i > 1; i--)
		printf("%d * ", i);
	printf("%d = %lld\n", i, total);

}
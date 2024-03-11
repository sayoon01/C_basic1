#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	int i, j;

	printf("Enter a number : ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("1");
		}
		printf("\n");
	}
}
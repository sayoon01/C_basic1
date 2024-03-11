#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

int main(void)
{
	int odd[SIZE], even[SIZE];
	int num;
	int i, oddIndex = 0, evenIndex = 0;

	for (i = 0; i < SIZE; i++)
	{
		printf("Enter a number : ");
		scanf("%d", &num);

		if (num % 2 == 0)
			even[evenIndex++] = num;
		else
			odd[oddIndex++] = num;
	}

	printf("홀수 출력 : ");
	for (i = 0; i < oddIndex; i++)
		printf("%d ", odd[i]);
	printf("\n");
	printf("짝수 출력 : ");
	for (i = 0; i < evenIndex; i++)
		printf("%d ", even[i]);
	printf("\n");
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
//{
//	int num;
//	int i, j, h;
//	
//	printf("Enter a number : ");
//	scanf("%d", &num);
//
//	for (i = 0; i < num / 2 + num % 2; i++) //num%2는 홀수 판별 후 홀수면 한 줄 더
//	{
//		for (j = 0; j < i; j++)
//			printf(" ");
//
//		for (h = 0; h < num - 2 * i; h++)
//		//for (h = i; h < num - i; h++)
//			printf("*");
//		printf("\n");
//	}
//}
int main(void)
{
	int num;
	int i, j, h;

	printf("Enter a number : ");
	scanf("%d", &num);

	for (i = 0; i < (num + 1) / 2; i++)
	{
		for (j = 0; j < i; j++)
			printf(" ");
		for (h = 0; h < num - 2 * i; h++)
			printf("*");
		printf("\n");
	}
}
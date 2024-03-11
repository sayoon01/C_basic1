#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
//{
//	int num;
//	int i, j;
//
//	printf("Enter a number : ");
//	scanf("%d", &num);
//
//	for (i = 0; i < num; i++)
//	{
//		for (j = i; j < num; j++)
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

	for (i = 0; i < num; i++)
	{
		for (j = 0; j < i; j++)
			printf(" ");

		for (h = i; h < num; h++)
			printf("*");

		printf("\n");
	}
}
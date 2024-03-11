#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
//{
//	int num, n, i;
//	int count = 0;
//
//	printf("Enter the # of integers : ");
//	scanf("%d", &num);
//
//	for (i = 1; i <= num; i++)
//	{
//		printf("Enter an integer : ");
//		scanf("%d", &n);
//
//		if (n % 2 == 0)
//			count++;
//	}
//
//	printf("The number of even numbers is %d.\n", count);
//}

int main(void)
{
	int row, column;
	int i, j;

	printf("Enter the number of rows : ");
	scanf("%d", &row);
	printf("Enter the number of columns : ");
	scanf("%d", &column);

	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= column; j++)
			printf("%d", i);
		printf("\n");
	}
}
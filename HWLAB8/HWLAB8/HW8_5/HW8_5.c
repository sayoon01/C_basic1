#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
//{
//	int row, column;
//	int i, j;
//
//	printf("Enter the number of rows : ");
//	scanf("%d", &row);
//	printf("Enter the number of columns : ");
//	scanf("%d", &column);
//
//	/*for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < column; j++)
//			printf("*");
//		printf("\n");
//	}*/
//
//	i = 1;
//	while (i <= row)
//	{
//		j = 1;
//		while (j <= column)
//		{
//			printf("*");
//			j++;
//		}
//		printf("\n");
//		i++;
//	}
//}

int main(void)
{
	int num, i;
	int total = 1;

	printf("Enter a number (>=2) : ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
		total *= i;

	printf("%d! = ", num);
	for (i = num; i > 1; i--)
		printf("%d * ", i);
	printf("%d = %d\n", i, total);

}
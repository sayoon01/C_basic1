﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
//{
//	int i, num;
//	int total = 0;
//
//	i = 1;
//	while (i <= 5)
//	{
//		printf("0보다 큰 수를 입력(%d번째): ", i);
//		scanf("%d", &num);
//
//		total += num;
//
//		i++;
//	}
//
//	printf("입력된 값의 총 합 : %d\n", total);
//}

//int main(void)
//{
//	int i, num;
//	int total = 0;
//
//	i = 1;
//	while (i <= 5)
//	{
//		printf("0보다 큰 수를 입력(%d번째) : ", i);
//		scanf("%d", &num);
//
//		while (num <=0)
//		{
//			printf("0보다 큰 수를 입력(%d번째) : ", i);
//			scanf("%d", &num);
//		}
//
//		total += num;
//		i++;
//	}
//
//	printf("입력된 값의 총 합 : %d\n", total);
//}

int main(void)
{
	int i, num;
	int total = 0;

	i = 1;
	while (i <= 5)
	{
		do
		{
			printf("0보다 큰 수를 입력(%d번째) : ", i);
			scanf("%d", &num);
		} while (num <= 0);

		total += num;
		i++;
	}

	printf("입력된 값의 총 합 : %d\n", total);
}
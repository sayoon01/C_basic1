#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//
//int main(void)
//{
//	int i, j;
//	int num, prime;
//
//	i = 1;
//	num = 1;
//	do
//	{
//		prime = 1;
//		num++;
//		for (j = 2; j < num; j++)
//		{
//			if (num % j == 0)
//			{
//				prime = 0;
//				break;
//			}
//		}
//
//		if (prime == 0)
//			continue;
//		else
//		{
//			printf("%d번째 소수는 %d\n", i, num);
//			i++;
//		}
//	} while (i <= 10);
//}

//int main(void)
//{
//	int i;
//	int num = 2, count;
//	int prime;
//
//	count = 1;
//	do
//	{
//		prime = 1;
//		for (i = 2; i < num; i++)
//		{
//			if (num % i == 0)
//			{
//				prime = 0;
//				break;
//			}
//		}
//
//		if (prime)
//		{
//			printf("%d번째 소수는 %d\n", count, num);
//			count++;
//		}	
//		num++;
//	} while (count <= 10);
//}
//int main(void)
//{
//	int count, i;
//	int num = 2, prime;
//
//	count = 1;
//	do
//	{
//		prime = 1;
//		for(i=2;i<num;i++)
//		{
//			if (num % i == 0)
//			{
//				prime = 0;
//				break;
//			}
//		}
//		
//		if (prime)
//		{
//			printf("%d번째 소수는 %d\n", i, num);
//			count++;
//		}
//		num++;
//	} while (count <= 10);
//}
int main(void)
{
	int i, count;
	int num = 2;
	int prime;

	count = 1;
	do
	{
		prime = 1;
		for (i = 2; i < num; i++)
		{
			if (num % i == 0)
			{
				prime = 0;
				break;
			}
		}


		if (prime)
		{
			printf("%d번째 소수는 %d\n", count, num);
			count++;
		}
		num++;
	} while (count <= 10);
}
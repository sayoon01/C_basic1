#define _CRT_SECURE_NO_WARNINGS
#define BREAD 500
#define COOKIE 700
#define COKE 400
#include <stdio.h>

//int main(void)
//{
//	int i, j, k;
//	int money, change;
//
//	printf("Enter 금액 : ");
//	scanf("%d", &money);
//
//	change = money;
//	for (i = 1; i <= money / BREAD; i++)
//	{
//		change -= (BREAD * i);
//		for (j = 1; j <= money / COOKIE; j++)
//		{
//			change -= (COOKIE * j);
//			for (k = 1; k <= money / COKE; k++)
//			{
//				change -= (COKE * k);
//				if (change == 0)
//					printf("빵 : %d 쿠키 : %d 콜라 : %d\n", i, j, k);
//			}
//		}
//	}
//}

int main(void)
{
	int i, j, k;
	int money;

	printf("Enter 금액 : ");
	scanf("%d", &money);

	for (i = 1; i <= money / BREAD; i++)
	{
		for (j = 1; j <= money / COOKIE; j++)
		{
			for (k = 1; k <= money / COKE; k++)
			{
				if (money == BREAD * i + COOKIE * j + COKE * k)
					printf("빵 : %d 쿠키 : %d 콜라 : %d\n", i, j, k);
			}
		}
	}
}
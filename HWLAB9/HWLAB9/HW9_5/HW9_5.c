#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
//{
//	int num, k;
//	printf("Enter a number : ");
//	scanf("%d", &num);
//
//	k = 0;
//	while (num>1)
//	{
//		k++;
//		num /= 2;
//	}
//
//	printf("%d\n", k);
//}
//int main(void)
//{
//	int k = 0;
//	int num;
//
//	printf("Enter a number : ");
//	scanf("%d", &num);
//
//	while (num >= 2)
//	{
//		k++;
//		num /= 2;
//	}
//
//	printf("%d\n", k);
//}
int main(void)
{
	int num;
	int k = 0;

	printf("Enter a number : ");
	scanf("%d", &num);

	while (num >= 2)
	{
		k++;
		num /= 2;
	}

	printf("%d\n", k);
}
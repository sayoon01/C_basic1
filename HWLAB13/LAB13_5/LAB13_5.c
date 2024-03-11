#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
//{
//	int i, bIndex = 0;
//	int binary[8];
//	int num;
//
//	printf("Enter 양수(<256) : ");
//	scanf("%d", &num);
//
//	for (i = 0; num != 0; i++)
//	{
//		binary[bIndex++] = num % 2;
//		num /= 2;
//	}
//
//	for (i = 0; i < bIndex; i++)
//		printf("%d", binary[bIndex - 1 - i]);
//	printf("\n");
//}

int main(void)
{
	int i, bIndex = 0;
	int num;
	int binary[8];

	printf("Enter 양수(< 256) : ");
	scanf("%d", &num);

	while (num != 0)
	{
		binary[bIndex++] = num % 2;
		num /= 2;
	}

	for (i = bIndex - 1; i >= 0; i--)
		printf("%d", binary[i]);
	printf("\n");
}
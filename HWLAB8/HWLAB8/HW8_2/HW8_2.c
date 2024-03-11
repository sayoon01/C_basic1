#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
//{
//	int num, i;
//
//	printf("Enter a number : ");
//	scanf("%d", &num);
//
//	for (i = 1; i <= 9; i++)
//		printf("%d * %d = %d\n", num, i, num * i);
//
//}

int main(void)
{
	int num, score, i;
	int bestScore = -1000, worstScore = 1000;

	printf("Enter the number of scores : ");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		printf("Enter a score : ");
		scanf("%d", &score);

		if (bestScore < score)
			bestScore = score;
		if (worstScore > score)
			worstScore = score;
	}

	if (num)
	{
		printf("The best score is %d\n", bestScore);
		printf("The worst score is %d\n", worstScore);
	}
	else
		printf("no data\n");
}
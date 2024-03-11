#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
//{
//	int score, i;
//	int bestScore = -100;
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("Enter a score : ");
//		scanf("%d", &score);
//
//		if (bestScore < score)
//			bestScore = score;
//	}
//
//	printf("The best score is %d.\n", bestScore);
//}

//int main(void)
//{
//	int i, j;
//
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 2; j <= 8; j += 2)
//			printf("%d * %d = %d\t", i, j, i * j);
//		printf("\n");
//	}
//}

int main(void)
{
	int i, j;

	i = 1;
	while (i <= 9)
	{
		j = 2;
		while (j <= 8)
		{
			printf("%d * %d = %d\t", i, j, i * j);
			j += 2;
		}
		printf("\n");
		i++;
	}
}
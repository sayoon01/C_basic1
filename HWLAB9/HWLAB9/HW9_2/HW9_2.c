#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
//{
//	int score, bestScore = -1000;
//	int total = 0, cnt = 0;
//	double average;
//
//	while (1)
//	{
//		printf("Enter a score(-1 for exit) : ");
//		scanf("%d", &score);
//
//		if (score == -1)
//			break;
//
//		total += score;
//		cnt++;
//		if (bestScore < score)
//			bestScore = score;
//	}
//
//	printf("You've entered %d students.\n", cnt);
//	if (cnt)
//	{
//		average = (double)total / cnt;
//
//		printf("The total is %d.\n", total);
//		printf("The average is %.1f.\n", average);
//		printf("The best score is %d.\n", bestScore);
//	}
//	else
//		printf("Ther is no data.\n");
//}
int main(void)
{
	int score, bestScore = -1000;
	int total = 0, cnt = 0;
	double average;

	printf("Enter a score(-1 for exit) : ");
	scanf("%d", &score);
	while (score != -1)
	{
		total += score;
		cnt++;

		if (bestScore < score)
			bestScore = score;

		printf("Enter a score(-1 for exit) : ");
		scanf("%d", &score);
	}

	printf("You've entered %d students.\n", cnt);
	if (cnt)
	{
		average = (double)total / cnt;

		printf("The total is %d.\n", total);
		printf("The average is %.1f.\n", average);
		printf("The best score is %d.\n", bestScore);
	}
	else
		printf("Ther is no data.\n");
}
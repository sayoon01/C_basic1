#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printManyStars(int starNum);
int main(void)
{
	int score1, score2;
	int i;

	printf("Tom's score? ");
	scanf("%d", &score1);
	printf("Mary's score? ");
	scanf("%d", &score2);

	printf("----------------- Score Histogram -----------------\n");
	printf("Tom     :");
	printManyStars(score1);

	printf("Mary    :");
	printManyStars(score2);
}
void printManyStars(int starNum)
{
	for (int i = 1; i <= starNum; i++)
		printf("*");
	printf("<%02d>\n", starNum);
}
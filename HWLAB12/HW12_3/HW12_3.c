#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	int incomes[7];
	int total;
	int bestIncome, bestIndex;
	double average;

	for (i = 0; i < 7; i++)
	{
		printf("Enter the income of day %d : ", i + 1);
		scanf("%d", &incomes[i]);
	}

	bestIncome = incomes[0];
	for (i = 1; i < 7; i++)
	{
		if (bestIncome < incomes[i])
		{
			bestIncome = incomes[i];
			bestIndex = i;
		}
	}

	printf("------------------------------------------------\n");
	printf("The best income : %d in day %d\n", bestIncome, bestIndex + 1);
	printf("------------------------------------------------\n");

	total = 0;
	for (i = 0; i < 7; i++)
		total += incomes[i];

	average = (double)total / 7;

	printf("The total is %d\n", total);
	printf("The average is %.1f\n", average);

	printf("The good days and their incomes are\n");
	for (i = 0; i < 7; i++)
	{
		if (average < incomes[i])
			printf("day %d: %d\n", i + 1, incomes[i]);
	}
}
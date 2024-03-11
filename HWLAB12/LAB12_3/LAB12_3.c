#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	int incomes[7];
	int bestIncome;

	for (i = 0; i < 7; i++)
	{
		printf("Enter the income : ");
		scanf("%d", &incomes[i]);
	}

	bestIncome = incomes[0];
	for (i = 1; i < 7; i++)
	{
		if (bestIncome < incomes[i])
			bestIncome = incomes[i];
	}

	printf("------------------------------\n");
	printf("The best income is %d\n", bestIncome);

	printf("Incomes are\n");
	for (i = 0; i < 7; i++)
		printf("%d ", incomes[i]);
	printf("\n");
}
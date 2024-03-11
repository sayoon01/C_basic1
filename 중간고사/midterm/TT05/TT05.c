#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int deposit, target;
	int accruedAmount = 0;
	int month = 0;

	scanf("%d %d", &deposit, &target);

	while (accruedAmount < target)
	{
		accruedAmount += deposit;
		accruedAmount *= 1.02;
		month++;
	}

	printf("%d %d %d\n", month / 12, month % 12, accruedAmount);
}
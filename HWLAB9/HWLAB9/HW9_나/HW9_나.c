#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j;
	int total;

	for (i = 1; i <= 30; i += 5)
	{
		total = 0; // total 초기화가 point !
		for (j = 0; j < 5; j++)
			total += (i + j);
		printf("%d - %d 까지 합 = %d\n", i, i + j, total);
	}
}
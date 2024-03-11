#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	int k = 0;

	scanf("%d", &num);
	
	while (num != 0)
	{
		num /= 10;
		k++;
	}

	printf("%d\n", k);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	int num;
	int data[20];

	printf("Enter a number : ");
	scanf("%d", &num);

	for (i = 0; i < 20; i++)
		data[i] = (i + 1) * 7;

	for (i = 0; i < 20; i++)
	{
		printf("%5d", data[i]);

		if (i % 5 == 4)
			printf("\n");
	}
}
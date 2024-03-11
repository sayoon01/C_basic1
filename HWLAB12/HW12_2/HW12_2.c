#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i;
	int num;
	int data[100];
	int total, average;

	printf("Enter the number of random numbers :(<=100) :  ");
	scanf("%d", &num);

	//srand(time(NULL));
	for (i = 0; i < num; i++)
		data[i] = rand() % 100;

	total = 0;
	for (i = 0; i < num; i++)
		total += data[i];
	
	average = total / num;

	printf("난수의 평균은 %d\n", average);

	printf("발생된 난수는\n");
	for (i = 0; i < num; i++)
	{
		printf("%5d", data[i]);

		if (i % 5 == 4)
			printf("\n");
	}
	printf("\n");
}
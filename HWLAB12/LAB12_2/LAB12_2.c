#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int data[10];
	int total, average;

	srand(time(NULL));

	for (int i = 0; i < 10; i++)
		data[i] = rand() % 100;

	total = 0;
	for (int i = 0; i < 10; i++)
		total += data[i];
	average = total / 10;

	printf("평균은 %d\n", average);

	for (int i = 0; i < 10; i++)
		printf("%d ", data[i]);
	printf("\n");


}
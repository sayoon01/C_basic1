﻿#define _CRT_SECURE_NO_WARNINGS
#define SIZE 3
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateArray(int a[], int size);
void printArray(int a[], int size);
int equalArray(int a[], int b[], int size);
int main(void)
{
	int arrayA[SIZE], arrayB[SIZE];
	int count = 0;

	//srand(time(NULL));

	do
	{
		printf("\n%d번째 시도\n", ++count);
		generateArray(arrayA, SIZE);
		generateArray(arrayB, SIZE);

		printf("ArrayA : ");
		printArray(arrayA, SIZE);
		printf("ArrayB : ");
		printArray(arrayB, SIZE);
	} while (!equalArray(arrayA, arrayB, SIZE));
}
void generateArray(int a[], int size)
{
	for (int i = 0; i < size; i++)
		a[i] = rand() % 2;
	return;
}
void printArray(int a[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", a[i]);
	printf("\n");
	return;
}
int equalArray(int a[], int b[], int size)
{
	for (int i = 0; i < size; i++)
		if (a[i] != b[i])
			return 0;
	return 1;
}
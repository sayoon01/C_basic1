#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printArray(int a[], int size);
void reverse(int a[], int size);
int main(void)
{
	int num;
	int list[10];
	int i;

	printf("Enter the number (<=10) ");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		printf("Enter 원소값 : ");
		scanf("%d", &list[i]);
	}

	printArray(list, num);
	reverse(list, num);
	printArray(list, num);
}
void printArray(int a[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", a[i]);
	printf("\n");
}
void reverse(int a[], int size)
{
	int tmp;
	for (int i = 0; i < size / 2; i++)
	{
		tmp = a[size - 1 - i];
		a[size - 1 - i] = a[i];
		a[i] = tmp;
	}
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printArray(int b[], int size);
void reverse(int b[], int size);
int main(void)
{
	int bIndex = 0;
	int binary[8];
	int num;

	printf("Enter 양수(<256) : ");
	scanf("%d", &num);


	while (num != 0)
	{
		binary[bIndex++] = num % 2;
		num /= 2;
	}

	reverse(binary, bIndex);
	printArray(binary, bIndex);
}
void reverse(int b[], int size)
{
	int tmp;
	for (int i = 0; i < size / 2; i++)
	{
		tmp = b[size - 1 - i];
		b[size - 1 - i] = b[i];
		b[i] = tmp;
	}
}
void printArray(int b[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d", b[i]);
	printf("\n");
}
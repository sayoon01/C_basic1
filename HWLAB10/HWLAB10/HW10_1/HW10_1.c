﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printManyChars(char ch, int num);
int main(void)
{
	char c;
	int n;

	printf("Enter a character to print : ");
	scanf("%c", &c);
	printf("Enter the number of characters : ");
	scanf("%d", &n);

	printManyChars(c, n);
}
void printManyChars(char ch, int num)
{
	for (int i = 1; i <= num; i++)
		printf("%c", ch);
	printf("\n");
}
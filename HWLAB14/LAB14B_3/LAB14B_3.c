﻿#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int strLength(char s[]);
void printUpperCase(char s[]);
int main(void)
{
	char str[81];

	printf("Enter a string : ");
	scanf("%s", str);

	printf("길이는 %d\n", strLength(str));

	printf("대문자만 출력하면\n");
	printUpperCase(str);
}
int strLength(char s[])
{
	int len;
	for (len = 0; s[len] != '\0'; len++);
	return len;
}
void printUpperCase(char s[])

{
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			printf("%c", s[i]);
	}
	printf("\n");
}
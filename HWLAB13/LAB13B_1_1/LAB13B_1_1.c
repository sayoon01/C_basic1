#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	int count;
	char s[81];

	printf("Enter a string : ");
	scanf("%s", s);

	for (i = 0; s[i] != '\0'; i++);
	count = i;

	printf("길이는 %d\n", count);

	for (i = 0; s[i] != '\0'; i++)
		printf("%c\n", s[count - 1 - i]);

	printf("\n");

	for (i = count - 1; i >= 0; i--)
		printf("%c\n", s[i]);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	int len;
	char word[81], newWord[81];

	printf("Enter one word : ");
	scanf("%s", word);

	len = 0;
	for (i = 0; word[i] != '\0'; i++)
		len++;

	for (i = 0; word[i]!='\0'; i++)
	{
		newWord[i] = word[len - 1 - i];
	}
	newWord[len] = '\0';

	printf("The reversed word is %s\n", newWord);
}
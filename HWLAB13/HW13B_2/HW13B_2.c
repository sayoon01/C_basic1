#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	int total = 0;
	char word[81];

	printf("Enter one word : ");
	scanf("%s", word);

	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] >= '1' && word[i] <= '9')
			total += (word[i] - 48);
	}

	printf("안에 있는 숫자들의 합은 %d\n", total);
}
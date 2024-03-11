#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char str[20];

	printf("단어를 입력하세요(빈칸없이) ");
	scanf("%s", str);

	printf("점수는 %d\n", calculatePoint(str));
}
int calculatePoint(char s[])
{
	int score = 0;
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			score += (s[i] - 64);
		else if (s[i] >= 'a' && s[i] <= 'z')
			score += (s[i] - 96);
	}

	return score;
}
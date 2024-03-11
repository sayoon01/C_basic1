#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, len1, len2;
	int same;
	char word1[81], word2[81];

	printf("Enter the first word : ");
	scanf("%s", word1);
	printf("Enter the second word : ");
	scanf("%s", word2);

	for (i = 0; word1[i] != '\0'; i++);
	len1 = i;
	for (i = 0; word2[i] != '\0'; i++);
	len2 = i;  // 두 배열의 크기 구하기

	same = 1;
	if (len1 != len2) 
		same = 0;
	else
	{
		for (i = 0; i < len1; i++)
			if (word1[i] != word2[i])
			{
				same = 0;
				break;
			}
	}

	if (same)
		printf("두 단어는 같다\n");
	else
		printf("두 단어는 다르다\n");
}
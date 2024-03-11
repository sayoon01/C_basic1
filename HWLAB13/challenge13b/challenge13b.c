#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	int num = 0, sum = 0;
	char word[81];

	printf("Enter a word : ");
	scanf("%s", word);

	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] >= '0' && word[i] <= '9')
		{
			// 현재 문자가 숫자인 경우
			num = num * 10 + word[i] - 48;
		}
		else
		{
			// 현재 문자가 숫자가 아닌 경우
			sum += num;
			num = 0;// num 변수 초기화 !!!
		}
	}

	//마지막에 나온 숫자가 있으면 더해준다!
	sum += num;

	printf("글자 안의 수의 합은 %d\n", sum);

	//다른 방식도 확인 !
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
//{
//	int num, i;
//
//	printf("Enter a number : ");
//	scanf("%d", &num);
//
//	for (i = 1; i <= num; i++)
//		printf("%d\n", i * i * i);
//}
int main(void)
{
	int num, answer, i;
	int count = 0;

	printf("몇 단을 연습하시겠습니까? : ");
	scanf("%d", &num);

	for (i = 1; i <= 9; i++)
	{
		printf("%d * %d = ", num, i);
		scanf("%d", &answer);

		if (answer == num * i)
			count++;
	}

	printf("%d단의 구구단에서 %d개를 맞았습니다\n", num, count);
}
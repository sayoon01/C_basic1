#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//int main(void)
//{
//	srand(time(NULL));
//
//	for (int i = 0; i < 5; i++)
//	{
//		printf("난수 출력 : %d\n", rand() % 100);
//	}
//}

//int main(void)
//{
//	int n1, n2;
//	int answer, rslt;
//
//	srand(time(NULL));
//
//	n1 = rand() % 100;
//	n2 = rand() % 100;
//	rslt = n1 + n2;
//
//	printf("%d + %d = ", n1, n2);
//	scanf("%d", &answer);
//
//	if (answer == rslt)
//		printf("Your answer is right.\n");
//	else
//	{
//		printf("Your answer is wrong.\n");
//		printf("%d is the right answer.\n", rslt);
//	}
//}

int main(void)
{
	int n1, n2;
	int answer;

	srand(time(NULL));

	n1 = rand() % 100;
	n2 = rand() % 100;

	printf("%d + %d = ", n1, n2);
	scanf("%d", &answer);

	if (answer == n1 + n2)
		printf("Your answer is right\n");
	else
	{
		printf("Your answer is wrong\n");
		printf("%d is the right answer\n", n1 + n2);
	}
}
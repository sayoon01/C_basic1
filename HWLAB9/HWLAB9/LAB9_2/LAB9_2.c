#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n1, n2, answer;
	char ch;

	srand(time(NULL));

	do
	{
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

		while (getchar() != '\n');

		printf("Do you want to play again?(y/n) ");
		scanf("%c", &ch);
	} while (ch == 'y');

}
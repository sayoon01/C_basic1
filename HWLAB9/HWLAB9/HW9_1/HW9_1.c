#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n1,n2;
	int answer = 0, yourAnswer;
	char op, ch;

	srand(time(NULL));
	do
	{
		n1 = rand() % 100;
		n2 = rand() % 100;
		op = rand() % 4;

		switch (op)
		{
			case 0:
				op = '+';
				answer = n1 + n2;
				break;
			case 1:
				op = '-';
				answer = n1 - n2;
				break;
			case 2:
				op = '*';
				answer = n1 * n2;
				break;
			case 3:
				op = '/';
				answer = n1 / n2;
				break;
		}

		printf("%d %c %d = ", n1, op, n2);
		scanf("%d", &yourAnswer);

		if (answer == yourAnswer)
			printf("Your answer is the right\n");
		else
		{
			printf("Your answer is wrong\n");
			printf("%d is the right answer\n", answer);
		}

		while (getchar() != '\n');
		printf("Do you want to play again?(y/n) ");
		scanf("%c", &ch);
	} while (ch == 'y');
}
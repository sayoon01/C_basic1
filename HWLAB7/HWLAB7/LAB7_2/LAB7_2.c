#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
//{
//	char op;
//	int n1, n2;
//	int rslt = 0;
//
//	printf("Enter an operator : ");
//	scanf("%c", &op);
//
//	printf("Enter the first operand : ");
//	scanf("%d", &n1);
//	printf("Enter the second operand : ");
//	scanf("%d", &n2);
//
//	switch (op)
//	{
//		case '+':
//			rslt = n1 + n2;
//			break;
//		case '-':
//			rslt = n1 - n2;
//			break;
//		case '*':
//			rslt = n1 * n2;
//			break;
//		case '/':
//			rslt = n1 / n2;
//			break;
//		}
//
//	printf("%d %c %d = %d\n", n1, op, n2, rslt);
//}
int main(void)
{
	char op;
	int n1, n2, answer;
	int rslt = 0;

	printf("Enter an operator : ");
	scanf("%c", &op);

	printf("Enter the first operand : ");
	scanf("%d", &n1);
	printf("Enter the second operand : ");
	scanf("%d", &n2);

	switch (op)
	{
		case '+':
			rslt = n1 + n2;
			break;
		case '-':
			rslt = n1 - n2;
			break;
		case '*':
			rslt = n1 * n2;
			break;
		case '/':
			rslt = n1 / n2;
			break;
	}

	printf("%d %c %d = ", n1, op, n2);
	scanf("%d", &answer);

	if (rslt == answer)
		printf("Right answer\n");
	else
	{
		printf("Wrong!\n");
		printf("%d is the right answer\n", rslt);
	}

}
//#include <stdio.h>
//
//int main(void)
//{
//	int n1, n2;
//
//	printf("Enter the first number : ");
//	scanf_s("%d", &n1);
//	printf("Enter the second number : ");
//	scanf_s("%d", &n2);
//
//	printf("%d + %d = %d\n", n1, n2, n1 + n2);
//	printf("%d - %d = %d\n", n1, n2, n1 - n2);
//	printf("%d * %d = %d\n", n1, n2, n1 * n2);
//	printf("%d / %d = %d\n", n1, n2, n1 / n2);
//
//	return 0;
//}

#include <stdio.h>

int main(void)
{
	int s1, s2, average;

	printf("Enter two scores : ");
	scanf_s("%d %d", &s1, &s2);

	average = (s1 + s2) / 2;

	printf("The average is %d.\n", average);

	return 0;
}
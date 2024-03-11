#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
//{
//	int num, i;
//
//	printf("Enter a number : ");
//	scanf("%d", &num);
//
//	i = 1;
//	while (i <= num)
//	{
//		if ((i % 3 == 0) || (i % 5 == 0))
//			printf("%d ", i);
//		i++;
//	}
//	printf("\n");
//}
int main(void)
{
	int i, num, score;
	int total = 0;
	double average = 0;

	printf("Enter a student number : ");
	scanf("%d", &num);

	i = 1;
	while (i <= num)
	{
		printf("Enter a score : ");
		scanf("%d", &score);
		
		total += score;
		i++;
	}

	if (num)
		average = (double)total / num;

	printf("The total is %d\n", total);
	printf("The average is %.1f\n", average);
}
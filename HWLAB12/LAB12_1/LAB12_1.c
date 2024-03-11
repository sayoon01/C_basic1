#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
//{
//	int scores[5] = { 71,80,90,85,95 };
//	int total, average;
//
//	/*scores[0] = 71;
//	scores[1] = 80;
//	scores[2] = 90;
//	scores[3] = 85;
//	scores[4] = 95;*/
//
//	total = 0;
//	for (int i = 0; i < 5; i++)
//		total += scores[i];
//
//	average = total / 5;
//
//	printf("Total : %d\n", total);
//	printf("Average : %d\n", average);
//}
int main(void)
{
	int num;
	int scores[40];
	int total, average;

	printf("Enter the number of scores(0 < number <= 40) : ");
	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf("Enter a score : ");
		scanf("%d", &scores[i]);
	}

	total = 0;
	for (int i = 0; i < num; i++)
		total += scores[i];

	average = total / num;

	printf("---------------------------------------------\n");
	printf("Total : %d\n", total);
	printf("Average : %d\n", average);
	for (int i = 0; i < num; i++)
		printf("%d ", scores[i]);
}
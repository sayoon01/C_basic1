//#include <stdio.h>
//
//int main(void)
//{
//	int score;
//
//	printf("Enter a score : ");
//	scanf_s("%d", &score);
//
//	if (score >= 50)
//		printf("The grade is A!\n");
//	else
//		printf("The grade is F!\n");
//
//	return 0;
//}
/*#include <stdio.h>

int main(void)
{
	int score;
	char grade;

	printf("Enter a score : ");
	scanf_s("%d", &score);

	if (score >= 50)
		grade = 'A';
	else
		grade = 'F';
	printf("The grade is %c!\n", grade);

	return 0;
}

*/
//#include <stdio.h>
//
//int main(void)
//{
//	int score;
//	char grade;
//
//	printf("Enter a score : ");
//	scanf_s("%d", &score);
//
//	if (score >= 80)
//		grade = 'A';
//	else if (score >= 50)
//		grade = 'B';
//	else if (score >= 30)
//		grade = 'C';
//	else
//		grade = 'F';
//
//	printf("The grade is %c!\n", grade);
//
//	return 0;
//}
#include <stdio.h>

int main(void)
{
	char sex;
	int height, weight;

	printf("Enter your gender(M/F) : ");
	scanf_s("%c", &sex, sizeof(sex));

	if (sex == 'F')
	{
		printf("Enter your height : ");
		scanf_s("%d", &height);
		printf("Enter you weight : ");
		scanf_s("%d", &weight);

		if (height <= weight + 110)
			printf("You NEED a diet. Try HARDER.\n");
		else
			printf("You do NOT need a diet. Keep exercising.\n");
	}
	else
		printf("Sorry, this fitness center is for women onlt.\n");

	return 0;
}
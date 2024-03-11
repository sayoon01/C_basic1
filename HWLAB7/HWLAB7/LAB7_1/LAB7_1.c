#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
//{
//	int season;
//
//	printf("Enter a number : ");
//	scanf_s("%d", &season);
//
//	switch (season)
//	{
//		case 1:
//			printf("Spring\n");
//			break;
//		case 2:
//			printf("Summer\n");
//			break;
//		case 3:
//			printf("Fall\n");
//			break;
//		case 4:
//			printf("Winter\n");
//			break;
//		default :
//			printf("Invalid number\n");
//			break;
//	}
//
//}
int main(void)
{
	char grade;
	int score;

	printf("Enter your grade : ");
	scanf("%c", &grade);

	switch (grade)
	{
	case 'A':
		printf("Congratulation\n");
		break;
	case 'B':
		printf("Okay, try harder\n");
		break;
	case 'C':
		printf("Enter your score : ");
		scanf("%d", &score);
		printf("Try harder, you need to get %d next time\n", score + 10);
		break;
	case 'D':
	case 'F':
		printf("Sorry, you should take this course again\n");
		break;
	default:
		printf("Wrong grade\n");
		break;
	}
}
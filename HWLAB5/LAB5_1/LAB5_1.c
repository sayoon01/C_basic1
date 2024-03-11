//#include <stdio.h>
//
//int main(void)
//{
//	char gen;
//	int age;
//	double height;
//
//	printf("Enter your gender : ");
//	scanf_s("%c", &gen, sizeof(gen));
//	printf("Enter your age : ");
//	scanf_s("%d", &age);
//	printf("Enter your height : ");
//	scanf_s("%lf", &height);
//
//	printf("성별\t나이\t키\t\n");
//	printf("%c\t%d\t%f\n", gen, age, height);
//
//	return 0;
//}
#include <stdio.h>

int main(void)
{
	char ch;

	printf("Enter an upper letter(A-Y) : ");
	scanf_s("%c", &ch, sizeof(ch));

	printf("Character given is %c(%d)\n", ch, ch);
	printf("The next character is %c(%d)\n", ch + 1, ch + 1);
	printf("The lower case letter is %c(%d)\n", ch + 32, ch + 32);

	return 0;
}
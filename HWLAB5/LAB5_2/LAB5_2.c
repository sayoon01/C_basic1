//#include <stdio.h>
//
//int main(void)
//{
//	char ch;
//	int value;
//
//	printf("Enter an alphabet : ");
//	scanf_s("%c", &ch, sizeof(ch));
//
//	printf("%c %d\n", ch, ch);
//
//	printf("Enter a ascii value : ");
//	scanf_s("%d", &value);
//
//	printf("%d %c\n", value, value);
//
//	return 0;
//}
#include <stdio.h>

int main(void)
{
	const double PI = 3.141592;
	int radius;
	double circumference, area;

	printf("Enter a radius : ");
	scanf_s("%d", &radius);

	circumference = radius * 2 * PI;
	area = radius * radius * PI;
	printf("The area of a circle with %d :\t%f.\n", radius, area);
	printf("The circumference of a circle with %d :\t%f.\n", radius, circumference);

	return 0;
}
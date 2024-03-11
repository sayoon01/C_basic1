//#include <stdio.h>
//
//int main(void)
//{
//	const double PI = 3.141592;
//	int radius;
//	double area;
//
//	printf("Enter a radius : ");
//	scanf_s("%d", &radius);
//
//	area = radius * radius * PI;
//	printf("Ther area of a circle with %d :\t%f.\n", radius, area);
//
//	return 0;
//}
#include <stdio.h>

int main(void)
{
	const int BASE = 32;
	const double CONVERSION_FACTOR = 9.0 / 5.0;
	double celsius, fahrenheit;

	printf("Enter a celsius temperature : ");
	scanf_s("%lf", &celsius);

	printf("Fahrenheit Equivalent : %lf\n", celsius * CONVERSION_FACTOR + BASE);

	return 0;
}
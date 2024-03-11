//#include <stdio.h>
//
//int main(void)
//{
//	int height, weight;
//
//	printf("Enter your height : ");
//	scanf_s("%d", &height);
//	printf("Enter your weight : ");
//	scanf_s("%d", &weight);
//
//	if(height<=weight+110)
//		printf("You need a diet.\n");
//	printf("BYE\n");
//
//	return 0;
//}
#include <stdio.h>

int main(void)
{
	double n1, n2, bigNumber;


	printf("Enter a floating number : ");
	scanf_s("%lf", &n1);
	printf("Enter a floating number : ");
	scanf_s("%lf", &n2);

	if (n1 < n2)
		bigNumber = n2;
	else
		bigNumber = n1;

	printf("The bigger number is %.2f\n", bigNumber);

	return 0;
}
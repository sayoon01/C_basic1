//#include <stdio.h>
//
//int main(void)
//{
//	int totalMin, min, hour;
//
//	printf("Enter the total minutes : ");
//	scanf_s("%d", &totalMin);
//
//	hour = totalMin / 60;
//	min = totalMin % 60;
//
//	printf("%d minutes\n", totalMin);
//	printf("%dh %dm\n", hour, min);
//
//	return 0;
//}
#include <stdio.h>

int main(void)
{
	int totalSeconds, hour, min, second;

	printf("Enter the total seconds : ");
	scanf_s("%d", &totalSeconds);

	hour = totalSeconds / 3600;
	min = totalSeconds % 3600 / 60;
	second = totalSeconds % 3600 % 60;

	printf("---Calculation Result---\n");
	printf("%d seconds\n", totalSeconds);
	printf("%dh %dm %ds\n", hour, min, second);

	return 0;
}
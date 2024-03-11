//#include <stdio.h>
//
//int main(void)
//{
//	int hour, min, totalMin;
//
//	printf("Enter hour : ");
//	scanf_s("%d", &hour);
//	printf("Enter minute : ");
//	scanf_s("%d", &min);
//
//	totalMin = hour * 60 + min;
//
//	printf("Total %d minutes\n", totalMin);
//
//	return 0;
//}
#include <stdio.h>

int main(void)
{
	int totalSeconds, hour, min, second;

	printf("Enter h m s : ");
	scanf_s("%d %d %d", &hour, &min, &second);

	totalSeconds = hour * 3600 + min * 60 + second;

	printf("---Calculation Result---\n");
	printf("Total %d seconds\n", totalSeconds);

	return 0;
}
#include <stdio.h>

int main(void)
{
	int totalSeconds, hour, minute, second;
	totalSeconds = 14000;
	
	hour = totalSeconds / 3600;
	minute = totalSeconds % 3600 / 60;
	second = totalSeconds % 3600 % 60;

	printf("%d seconds : \n", totalSeconds);
	printf("%dh %dm %ds\n", hour, minute, second);

	return 0;
}
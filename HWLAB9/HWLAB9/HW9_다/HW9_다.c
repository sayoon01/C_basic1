#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int cycleNb(int n);
int main(void)
{
	int num;

	printf("Enter a number : ");
	scanf("%d,", &num);

	printf("\n길이는 %d\n", cycleNb(num));
}

int cycleNb(int n)
{
	int cnt = 0;

	while (n != 1)
	{
		printf("%d ", n);
		if (n % 2 == 0)
			n /= 2;
		else
			n = 3 * n + 1;
		cnt++;
	} 
	
	if (n == 1)
	{
		printf("%d ", n);
		cnt++;
	}
	return cnt;
}
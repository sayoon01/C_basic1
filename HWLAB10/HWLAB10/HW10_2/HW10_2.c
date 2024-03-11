#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void findNPrintBiggest(int a, int b, int c);
int main(void)
{
	int n1, n2, n3;

	printf("Enter three numbers : ");
	scanf("%d %d %d", &n1, &n2, &n3);

	findNPrintBiggest(n1, n2, n3);
}
void findNPrintBiggest(int a, int b, int c)
{
	int big;

	/*big = a;
	if (big < b)
	{
		big = b;
		if (big < c)
			big = c;
	}
	else
	{
		if (big < c)
			big = c;
	}*/

	if (a < b)
		big = b;
	else
		big = a;

	if (big < c)
		big = c;

	printf("The Biggest number is %d.\n", big);
}
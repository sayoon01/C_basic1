#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int pow(int a, int b);
int main(void)
{
	int i, n;
	
	n = 5;
	for (i = 0; i <= 10; i++)
		printf("%d ^ %d == %d\n", n, i, pow(n, i));

}
int pow(int a, int b)
{
	int value = 1;

	for (int i = 1; i <= b; i++)
		value *= a;

	return value;
}
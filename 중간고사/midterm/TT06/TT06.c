#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
//{
//	int key, keyIndex = 0;
//	int num, i;
//
//	scanf("%d", &key);
//
//	i = 0;
//	while (1)
//	{
//		scanf("%d", &num);
//		if (num == -1)
//			break;
//	
//		i++;
//		if (num == key && keyIndex == 0)
//			keyIndex = i;
//	}
//
//	if (keyIndex)
//		printf("%d\n", keyIndex);
//	else
//		printf("not found\n");
//}

int main(void)
{
	int key, keyIndex = 0;
	int num, i;

	scanf("%d", &key);
	scanf("%d", &num);

	i = 0;
	while (num != -1)
	{
		i++;
		if (num == key && keyIndex == 0)
			keyIndex = i;

		scanf("%d", &num);
	}

	if (keyIndex)
		printf("%d\n", keyIndex);
	else
		printf("not found\n");
}

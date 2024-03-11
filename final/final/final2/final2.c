#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
//{
//	int i, flag = 0;
//	char s[20];
//	char key;
//
//	scanf("%s %c", s, &key);
//
//	for (i = 0; s[i] != '\0'; i++)
//	{
//		if (s[i] == key)
//		{
//			flag = 1;
//			break;
//		}
//	}
//
//	if (flag)
//		printf("%d\n", i + 1);
//	else
//		printf("-1\n");
//}
//int main(void)
//{
//	int i;
//	char s[20];
//	char key;
//
//	scanf("%s %c", s, &key);
//
//	for (i = 0; s[i] != '\0'; i++)
//		if (s[i] == key)
//			break;
//	
//	if (s[i] == '\0')
//		printf("%d\n", -1);
//	else
//		printf("%d\n", i + 1);
//}
int searchKeyIndex(char str[], char k);
int main(void)
{
	char s[20];
	char key;

	scanf("%s %c", s, &key);

	printf("%d\n", searchKeyIndex(s, key));
}
int searchKeyIndex(char str[], char k)
{
	for (int i = 0; str[i] != '\0'; i++)
		if (str[i] == k)
			return i + 1;
	return -1;
}
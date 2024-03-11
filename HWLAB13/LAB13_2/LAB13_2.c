#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
//{
//	int incomes[12] = { 11,22,33,44,55,66,11,22,33,44,55,66 };
//	int searchIncome;
//	int i, searchKey;
//
//	printf("탐색할 수입은? ");
//	scanf("%d", &searchIncome);
//
//	searchKey = -1;
//	for (i = 0; i < 12; i++)
//	{
//		if (searchIncome == incomes[i])
//		{
//			searchKey = i;
//			break;
//		}
//	}
//
//	if (searchKey == -1)
//		printf("수입 %d를 갖는 달은 없습니다.\n", searchIncome);
//	else
//		printf("수입 %d를 갖는 첫번째 달은 %d월입니다.\n", searchIncome, searchKey + 1);
//}

//int main(void)
//{
//	int incomes[12] = { 11,22,33,44,55,66,11,22,33,44,55,66 };
//	int searchIncome;
//	int i, found;
//
//	printf("탐색할 수입은? ");
//	scanf("%d", &searchIncome);
//
//	found = 0;
//	for (i = 0; i < 12; i++)
//	{
//		if (searchIncome == incomes[i])
//		{
//			found = 1;
//			break;
//		}
//	}
//
//	if (found == 0)
//		printf("수입 %d를 갖는 달은 없습니다.\n", searchIncome);
//	else
//		printf("수입 %d를 갖는 첫번째 달은 %d월입니다.\n", searchIncome, i + 1);
//}

int main(void)
{
	int incomes[12] = { 11,22,33,44,55,66,11,22,33,44,55,66 };
	int searchIncome;
	int i;

	printf("탐색할 수입은? ");
	scanf("%d", &searchIncome);

	for (i = 0; i < 12; i++)
	{
		if (searchIncome == incomes[i])
			break;
	}

	if (i==12)
		printf("수입 %d를 갖는 달은 없습니다.\n", searchIncome);
	else
		printf("수입 %d를 갖는 첫번째 달은 %d월입니다.\n", searchIncome, i + 1);
}
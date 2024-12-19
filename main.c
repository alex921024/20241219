#include <stdio.h>
#include <stdlib.h>
#define PEO 3
#define MACH 5
 
int main()
{
	int coin[MACH] = { 0 };
	printf("請輸入%d個金額\n", MACH);
	for (int i = 0; i < MACH; i++)
	{
		scanf_s("%d",&coin[i]);
	}

	printf("輸入%d個金額是\n", MACH);
	for (int i = 0; i < MACH; i++)
	{
		printf("%d\t", coin[i]);
	}
	printf("\n\n");


	/*============================================================*/


	int arr[PEO][MACH] = { 0 };
	printf_s("請輸入%d個人各銷售%d個商品\n", PEO,MACH);
	for (int i = 0; i < PEO; i++)
	{
		printf("第%d位銷售員\n", i+1);
		for (int j = 0; j < MACH; j++)
		{
			scanf_s("%d", &arr[i][j]);
		}
		printf("\n");
	}

	printf("您輸入%d個人各銷售%d個商品\n", PEO, MACH);
	for (int i = 0; i < PEO; i++)
	{
		printf("第%d位銷售員", i+1);
		for (int j = 0; j < MACH; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");


	/*============================================================*/

	int total_momey[PEO] = { 0 };
	for (int i = 0; i < PEO; i++)
	{
		for (int j = 0; j < MACH; j++)
		{
			total_momey[i] = total_momey[i] + arr[i][j]*coin[j];
		}
		printf("第%d人銷售總額%d\n", i + 1, total_momey[i]);
	}
	printf("\n");

	/*============================================================*/

	int total_tal[MACH] = { 0 };
	for (int i = 0; i < MACH; i++)
	{
		for (int j = 0; j < PEO; j++)
		{
				total_tal[i] = total_tal[i] + arr[j][i] * coin[i];
		}
		printf("第%d商品銷售總額%d\n", i + 1, total_tal[i]);
	}
	printf("\n");

	/*============================================================*/

	int ind = 0;
	int total_sale[1] = { ind };
	int val = total_sale[ind];


	system("pause");
}
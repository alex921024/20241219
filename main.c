#include <stdio.h>
#include <stdlib.h>
#define PEO 3
#define MACH 5
 
int main()
{
	int coin[MACH] = { 0 };
	printf("�п�J%d�Ӫ��B\n", MACH);
	for (int i = 0; i < MACH; i++)
	{
		scanf_s("%d",&coin[i]);
	}

	printf("��J%d�Ӫ��B�O\n", MACH);
	for (int i = 0; i < MACH; i++)
	{
		printf("%d\t", coin[i]);
	}
	printf("\n\n");


	/*============================================================*/


	int arr[PEO][MACH] = { 0 };
	printf_s("�п�J%d�ӤH�U�P��%d�Ӱӫ~\n", PEO,MACH);
	for (int i = 0; i < PEO; i++)
	{
		printf("��%d��P���\n", i+1);
		for (int j = 0; j < MACH; j++)
		{
			scanf_s("%d", &arr[i][j]);
		}
		printf("\n");
	}

	printf("�z��J%d�ӤH�U�P��%d�Ӱӫ~\n", PEO, MACH);
	for (int i = 0; i < PEO; i++)
	{
		printf("��%d��P���", i+1);
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
		printf("��%d�H�P���`�B%d\n", i + 1, total_momey[i]);
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
		printf("��%d�ӫ~�P���`�B%d\n", i + 1, total_tal[i]);
	}
	printf("\n");

	/*============================================================*/

	int ind = 0;
	int total_sale[1] = { ind };
	int val = total_sale[ind];


	system("pause");
}
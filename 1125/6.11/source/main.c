#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{/*
	int a[5] = { 26,5,81,7,63 };
	int i, j,tmp;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4-i; j++)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
		printf("Loop %d :", i);
		for (j = 0; j < 5; j++)
		{
			printf("%4d", a[j]);
		}
		printf("\n");
	}
	return 0;
	*/


	int a[5] = { 26,5,81,7,63 };
	int i, j, tmp;
	bool change = true;
	for (i = 0; i < 4; i++)
	{
		change = false;
		for (j = 0; j < 4 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
				change = true;
			}
		}
		if (change == false)
			break;
		printf("Loop %d :", i);
		for (j = 0; j < 5; j++)
		{
			printf("%4d", a[j]);
		}
		printf("\n");
	}
	return 0;
}
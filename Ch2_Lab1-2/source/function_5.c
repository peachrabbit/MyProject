#include<stdio.h>
#include<stdlib.h>

int han_xin_5()
{
	char sign1 = 'X';
	char sign2 = '-';
	int i, j, temp1, temp2;
	//---------------------------------------------
	temp1 = 9;
	printf("(5)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == j)
			{
				printf("%c", sign1);
			}
			else if (j == temp1)
			{
				printf("%c", sign1);
				temp1--;
			}
			else
			{
				printf("%c", sign2);
			}
		}
		printf("\n");
	}
	return 0;
}
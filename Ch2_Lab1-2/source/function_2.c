#include<stdio.h>
#include<stdlib.h>

int han_xin_2()
{
	char sign1 = 'X';
	char sign2 = '-';
	int i, j, temp1, temp2;
	//---------------------------------------------
	printf("(2)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i == 0 || i == 1 || i == 2 || i == 7 || i == 8 || i == 9 || j == 0 || j == 1 || j == 2 || j == 7 || j == 8 || j == 9)
				printf("%c", sign1);
			else
				printf("%c", sign2);
		}
		printf("\n");
	}
	return 0;
}
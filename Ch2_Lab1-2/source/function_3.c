#include<stdio.h>
#include<stdlib.h>

int han_xin_3()
{
	char sign1 = 'X';
	char sign2 = '-';
	int i, j, temp1, temp2;
	//---------------------------------------------
	temp1 = 4;
	temp2 = 5;
	printf("(3)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i < 5) && (j == temp1))
			{
				printf("%c", sign1);
				temp1--;
			}
			else if ((i < 5) && (j == temp2))
			{
				printf("%c", sign1);
			}
			else if ((i == 4))
			{
				printf("%c", sign1);
			}
			else
			{
				printf("%c", sign2);
			}
		}
		temp2++;
		printf("\n");
	}
	return 0;
}
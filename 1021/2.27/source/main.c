#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*
	printf("    *    \n");
	printf("   ***   \n");
	printf("  *****  \n");
	printf(" ******* \n");
	printf("*********\n");
	*/
	int i,j;
	for (i = 1; i < 6; i++)//�P�P���
	{
		for (j = 0; j < 5 - i; j++)//�ťռ�
			printf(" ");
		for (j = 0; j < i * 2 - 1; j++)//�P�P��
			printf("*");
		printf("\n");
	}
	return 0;
}
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
	for (i = 1; i < 6; i++)//星星行數
	{
		for (j = 0; j < 5 - i; j++)//空白數
			printf(" ");
		for (j = 0; j < i * 2 - 1; j++)//星星數
			printf("*");
		printf("\n");
	}
	return 0;
}
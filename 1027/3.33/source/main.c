#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, i, j;
	printf("Enter a number:");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n*4; j++)
		{
			if (i == 0 || i == n-1)
				printf("*");
			else if (j == 0 || j == n * 4-1)
				printf("*");
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
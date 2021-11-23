#include<stdio.h>
#include<stdlib.h>

void printarray(const int a[][3]);

int main()
{
	int a1[2][3] = { {1,2,3},{4,5,6} };
	int a2[2][3] = { 1,2,3,4,5 };
	int a3[2][3] = { {1,2},{4} };
	printf("Vaule in a1 by row are:\n");
	printarray(a1);
	printf("Vaule in a2 by row are:\n");
	printarray(a2);
	printf("Vaule in a3 by row are:\n");
	printarray(a3);
	system("pause");
	return 0;
}
void printarray(const int a[][3])
{
	int i, j;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%d", a[i][j]);
		printf("\n");
	}
}

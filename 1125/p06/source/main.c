#include<stdio.h>
#include<stdlib.h>
#define size 10

int main()
{
	int n[size];
	int j;
	printf("%s%13s\n", "Element", "Value");

	for (j = 0; j < size; j++)
	{
		n[j] = 2 + 2 * j;
		printf("%7d%13d\n", j, n[j]);
	}
	system("pause");
	return 0;

}

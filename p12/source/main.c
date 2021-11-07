#include<stdio.h>
#include<stdlib.h>

int square(y);

int main()
{
	int x;
	for (x = 1; x <= 10; x++)
	{
		printf("%5d", square(x));
	}
	printf("\n");
	system("pause");
	return 0;
}
int square(y)
{
	return y * y;
}

#include<stdio.h>
#include<stdlib.h>

long factorial(n);

int main()
{
	for (int n = 0; n <= 10; n++)
	{
		printf("%2d!=%1d\n", n, factorial(n));
	}
	system("pause");
	return 0;
}
long factorial(n)
{
	if (n <= 1)
	{
		return 1;
	}
	else
	{
		return(n * factorial(n - 1));
	}
}
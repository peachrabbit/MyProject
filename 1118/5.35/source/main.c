#include<stdio.h>
#include<stdlib.h>

long long int F(n);

int main()
{
	long n;
	scanf_s("%ld", &n);
	printf("%ld", F(n));
	system("pause");
}
long long int F(long n)
{
	long a1 = 0,a2=1,a3=1,i;
	if (n <= 2)
		return 1;
	for (i = 3; i <= n; i++)
	{
		a1 = a2;
		a2 = a3;
		a3 = a1 + a2;
	}
	return a3;
}
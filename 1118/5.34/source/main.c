#include<stdio.h>
#include<stdlib.h>

int power(int, int);

int main()
{
	int n,k,ans;
	printf("計算k的n次方,k=");
	scanf_s("%d", &k);
	printf("n=");
	scanf_s("%d", &n);
	ans = power(k, n);
	printf("%d的%d次方=%d\n", k, n,ans);
	system("pause");
	return 0;
}

int power(k, n)
{
	int i,X = 1;
	if (n == 1)
		return k;
	for (i = 1; i <= n; i++)
	{
		X = X * k;
	}
	return X;
}
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,n[10];
	printf("%s%13s\n", "Element","Vaule");
	for (i = 0; i < 10; i++)
	{
		n[i] = 0;
		printf("%7d%13d\n", i, n[i]);
	}
	system("pause");
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c;
	printf("Enter three integers:");
	scanf_s("%d%d%d", &a, &b, &c);
	if (a > b && b > c)
	{
		printf("The largest number is:%d\n", a);
		printf("The smallest number is:%d", c);
	}
	if (a > c && c > b)
	{
		printf("The largest number is:%d\n", a);
		printf("The smallest number is:%d", b);
	}
	if (b > a && a > c)
	{
		printf("The largest number is:%d\n", b);
		printf("The smallest number is:%d", c);
	}
	if (b > c && c > a)
	{
		printf("The largest number is:%d\n", b);
		printf("The smallest number is:%d", a);
	}
	if (c > a && a > b)
	{
		printf("The largest number is:%d\n", c);
		printf("The smallest number is:%d", b);
	}
	if (c > b && b > a)
	{
		printf("The largest number is:%d\n", c);
		printf("The smallest number is:%d", a);
	}
	return 0;
}
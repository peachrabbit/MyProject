#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{

	double p = 5000.0;
	double r = .1;
	double r1 = .105;
	double r2 = .11;
	double r3=.115;
	double r4 = .12;
	double a;
	int y;
	printf("(1)\n");
	printf("Year    Amount on deposit\n");
	for (y = 1; y <= 15; y++)
	{
		a = p * pow(1.0 + r, y);
		printf("%4d%21.2f\n", y, a);
	}
	printf("(2)\n");
	printf("Year    Amount on deposit\n");
	for (y = 1; y <= 15; y++)
	{
		a = p * pow(1.0 + r1, y);
		printf("%4d%21.2f\n", y, a);
	}
	printf("(3)\n");
	printf("Year    Amount on deposit\n");
	for (y = 1; y <= 15; y++)
	{
		a = p * pow(1.0 + r2, y);
		printf("%4d%21.2f\n", y, a);
	}
	printf("(4)\n");
	printf("Year    Amount on deposit\n");
	for (y = 1; y <= 15; y++)
	{
		a = p * pow(1.0 + r3, y);
		printf("%4d%21.2f\n", y, a);
	}
	printf("(5)\n");
	printf("Year    Amount on deposit\n");
	for (y = 1; y <= 15; y++)
	{
		a = p * pow(1.0 + r4, y);
		printf("%4d%21.2f\n", y, a);
	}
}
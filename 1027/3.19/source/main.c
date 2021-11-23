#include<stdio.h>
#include<stdlib.h>

int main()
{
	float p = 0;
	float i,r;
	int d;
	while (p!=-1)
	{
		printf("Enter loan principal (-1 to end):");
		scanf_s("%f", &p);
		if (p == -1)
		{
			break;
		}
		printf("Enter interest rate:");
		scanf_s("%f", &r);
		printf("Enter term of the loan days:");
		scanf_s("%d", &d);
		i = p * r * d/365;
		printf("The interest charge is $%.2f\n",i);
		printf("\n");
	}
	return 0;
}
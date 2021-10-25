#include<stdio.h>
#include<stdlib.h>

int main()
{
	int h = 0;
	float r,s,s1;
	while (h!=-1)
	{
		printf("Enter # of hours worked (-1 to end):");
		scanf_s("%d", &h);
		if (h == -1)
		{
			break;
		}
		printf("Enter hourly rate of the worker ($00.00):");
		scanf_s("%f", &r);
		s = h * r;
		s1 = 40 * r + r*(h-40) * 1.5;
		if (h <= 40)
		{
			printf("Salary is $%.2f\n", s);
		}
		else if(h>40)
		{
			printf("Salary is $%.2f\n", s1);
		}
		printf("\n");
	}
	return 0;

}
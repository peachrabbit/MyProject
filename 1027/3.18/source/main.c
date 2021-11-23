#include<stdio.h>
#include<stdlib.h>

int main()
{
	float i=0;
	while (i!=-1)
	{
		printf("Enter sale in dollar:");
		scanf_s("%f", &i);
		if (i == -1) 
		{
			break;
		}
		printf("Salary is:$%.2f\n",  i * 0.09+200);
		printf("\n");
	}
	return 0;
}
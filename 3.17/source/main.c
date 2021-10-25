#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n=0;
	float b, charges, credits, limit,new;
	while (n != -1)
	{
		printf("Enter account number(-1 to end):");
		scanf_s("%d", &n);
		if (n == -1)
		{
			break;
		}
		printf("Enter begining balance:");
		scanf_s("%f", &b);
		printf("Enter total charges:");
		scanf_s("%f", &charges);
		printf("Enter total credits:");
		scanf_s("%f", &credits);
		printf("Enter credit limit:");
		scanf_s("%f", &limit);
		printf("\n");
		new = b + charges - credits;
		if (b + charges - credits > limit)
		{
			printf("Account:%d\n", n);
			printf("Credit limit:%.2f\n", limit);
			printf("Balance:%.2f\n", new);
			printf("Credit limit exceeded.\n");
		}
		printf("\n");
	}
	return 0;
}
	
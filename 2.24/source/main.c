#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	printf("Enter one integer:");
	scanf_s("%d", &a);
	if (a % 2 == 0)
		printf("%d is even.",a);
	else
		printf("%d is odd.",a);
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	printf("Enter two integers:");
	scanf_s("%d%d", &a, &b);
	if (a % b == 0)
		printf("%d is a multiple of %d", a, b);
	else
		printf("%d is not a multiple of %d", a, b);
	return 0;
}
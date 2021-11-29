#include<stdio.h>
#include<stdlib.h>

int callbyvalue(n);

int main()
{
	int n = 5;
	printf("The original value of number is %d", n);

	n = callbyvalue(n);

	printf("\nThe new value of number is %d\n", n);

}
int callbyvalue(n)
{
	return n * n * n;
}
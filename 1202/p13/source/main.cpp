#include<stdio.h>
#include<stdlib.h>

void callbyreference(int& nptr);

int main()
{
	int n = 5;
	printf("The original value of number is %d", n);

	callbyreference(n);

	printf("\nThe new value of number is %d\n", n);
}
void callbyreference(int& nptr)
{
	nptr = nptr * nptr * nptr;
}
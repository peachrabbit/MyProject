#include<stdio.h>
#include<stdlib.h>

void callbyadress(int *nptr);

int main()
{
	int n = 5;
	printf("The original value of number is %d", n);

	callbyadress(&n);

	printf("\nThe new value of number is %d\n", n);
}
void callbyadress(int* nptr)
{
	*nptr = *nptr * *nptr * *nptr;
}
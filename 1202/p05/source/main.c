#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a=7;
	int *aptr;

	aptr = &a;

	printf("The address of a is %p\nThe value of aptr is %p", &a, aptr);
	printf("\n\nThe value of a is %d\nThe value of *aptr is %d", a, *aptr);
	printf("\n\nShowing that * and & are complements of each other\n&*aptr=%p\n*&aptr=%p\n", &*aptr, *&aptr);
}
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int b[] = {10,20,30,40};
	int* bptr = b;
	int i;
	int offset;

	printf("Array subscript notation\n");
	for (i = 0; i < 4; i++)
	{
		printf("b[%d]=%d\n", i, b[i]);
	}

	printf("\nPoniter/offset notation where\nthe pointer is the array name\n");
	for (offset = 0; offset < 4; offset++)
	{
		printf("*(b+%d)=%d\n", offset, *(b + offset));
	}

	printf("\nPoniter subscrip notation\n");
	for (i = 0; i < 4; i++)
	{
		printf("bptr[%d]=%d\n", i, bptr[i]);
	}

	printf("\nPoniter/offset notation\n");
	for (offset = 0; offset < 4; offset++)
	{
		printf("*(bptr+%d)=%d\n", offset, *(bptr + offset));
	}
}
#include<stdio.h>
#include<stdlib.h>
#define size 10

void buublesort(int* const a, const int s);

int main()
{
	int a[size] = { 2,6,4,8,10,12,89,68,45,37 };
	int i;

	printf("Data items in original order\n");
	for (i = 0; i < size; i++)
	{
		printf("%4d", a[i]);
	}

	buublesort(a, size);

	printf("\nData items in ascending order\n");

	for (i = 0; i < size; i++)
	{
		printf("%4d", a[i]);
	}
	printf("\n");
}
void buublesort(int* const a, const int s)
{
	void swap(int *element1ptr, int *element2ptr);
	int p, j;

	for(p=0;p<size-1;p++)
		for (j = 0; j < size - 1; j++)
		{
			if (a[j] > a[j + 1])
				swap(&a[j], &a[j + 1]);
		}
}
void swap(int *element1ptr, int *element2ptr)
{
	int h = *element1ptr;
	*element1ptr = *element2ptr;
	*element2ptr = h;
}

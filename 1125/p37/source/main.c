#include<stdio.h>
#include<stdlib.h>
#define size 100

int linersreach(const int a[], int key, int s);

int main()
{
	int a[size], x, sreachkey;
	int element;

	for (x = 0; x < size; x++)
		a[x] = 2 * x;
	printf("enter integer sreachkey:");
	scanf_s("%d", &sreachkey);

	element = linersreach(a, sreachkey, size);

	if (element != -1)
		printf("find value in element %d\n", element);
	else
		printf("value not found.");
	system("pause");
	return 0;
}
int linersreach(const int a[], int key, int s)
{
	int n;
	for (n = 0; n < size; ++n)
		if (a[n] == key)
			return n;
	return -1;
}
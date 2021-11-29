#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define size 10
#define maximum 1000
//function prototype
int recursivemax(int a[], int low, int high);

int main()
{
	int a[size];//array to be searched
	int i,max;

	srand(time(NULL));

	//initialize elements of array to random numbers
	for (i = 0; i < size; i++)
	{
		a[i] = 1 + rand() % maximum;
	}

	printf("array numbers are :\n");

	//display array
	for (i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}

	//find and display min array element
	puts(" ");
	max = recursivemax(a, 0, size - 1);
	printf("\nmax element is : %d", max);	
}
//function to recursively fin max array element
int recursivemax(int a[], int low, int high)
{
	int max;//int to store current maximum value

	//if the array has only one element,
	//the value of that element is the array's max value
	if (low == high)
		return a[high];
	else
	{
		max = recursivemax(a, low + 1, high);
		return(a[low] > max) ? a[low] : max;
	}
}
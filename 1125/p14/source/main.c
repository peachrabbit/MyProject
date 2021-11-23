#include<stdio.h>
#include<stdlib.h>
#define student 3
#define exam 4

int minimum(const  int grade[][exam], int pupils, int tests);
int maximum(const  int grade[][exam], int pupils, int tests);
double average(const  int grade[][exam], int pupils, int tests);
void printarray(const  int grade[][exam], int pupils, int tests);

int n;

int main()
{
	const int studentgrade[student][exam] = { {77,68,86,73},{96,87,89,78},{70,90,86,81} };
	printf("The array is:\n");
	printarray(studentgrade,student,exam);

	printf("\n\nLowest grade :%d\nHigh grade :%d\n", minimum(studentgrade, student, exam), maximum(studentgrade, student, exam));

	for (n = 0; n < student; n++)
	{
		printf("The average grade of student %d is %.2f\n", n, average(studentgrade,student,exam));
	}
	system("pause");
	return 0;
}
int minimum(const  int grade[][exam], int pupils, int tests)
{
	int min=100,i,j;
	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
			if (grade[i][j] < min)
				min = grade[i][j];
	}
	return min;
}
int maximum(const  int grade[][exam], int pupils, int tests)
{
	int max = 0, i, j;
	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
			if (grade[i][j] > max)
				max = grade[i][j];
	}
	return max;
}
double average(const  int grade[][exam], int pupils, int tests)
{
	int i,j,total = 0;
	for (i = n; i <pupils; i++)
	{
		for(j=0;j<tests;j++)
			total += grade[i][j];
		return(double) total / tests;
	}	
}
void printarray(const  int grade[][exam], int pupils, int tests)
{
	int i, j;
	printf("              [0]  [1]  [2]  [3]");
	for (i = 0; i < pupils; i++)
	{
		printf("\nstudntgrade[%d] ", i);
		for (j = 0; j < tests; j++)
			printf("%-5d", grade[i][j]);
	}
}
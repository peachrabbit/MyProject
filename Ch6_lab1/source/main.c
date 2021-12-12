#include<stdio.h>
#include<stdlib.h>
#include "informatin.h"

int main()
{
	person p;
	printf("please input your name :");
	scanf_s("%s", &p.name,8);
	printf("please input your gender(woman=0,man=1) :");
	scanf_s("%d", &p.gender);
	printf("please input your age :");
	scanf_s("%d", &p.age);
	printf("\nHi!%s\n", p.name);
	if (p.gender == 0)
		printf("you are %d-years-old woman.\n", p.age);
	else
		printf("you are %d-years-old man.\n", p.age);
	system("pause");
}
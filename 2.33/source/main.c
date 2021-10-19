#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b, c,i,j;
	printf("Enter total kilomerers driven per day:");
	scanf_s("%f", &a);
	printf("Enter cost per liter of gasoline:");
	scanf_s("%f", &b);
	printf("Enter average kilometers per liter:");
	scanf_s("%f", &c);
	printf("Enter parking fee per day:"); 
	scanf_s("%f", &i);
	printf("Enter tolls per day:");
	scanf_s("%f", &j);
	printf("\n");
	printf("The user cost per day of driving to work:%f", b * (a / c) + i+ j);


}
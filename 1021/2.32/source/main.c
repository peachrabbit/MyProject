#include<stdio.h>
#include<stdlib.h>

int main()
{
	float h, w;
	printf("Enter your height(m) and weight(kg):");
	scanf_s("%f%f", &h, &w);
	printf("Your BMI is :%f\n", w / h / h);
	if (w / h / h < 18.5)
		printf("You are underweight.");
	if (w / h / h >= 18.5 && w / h / h < 25)
		printf("You are normal.");
	if (w / h / h >= 25 && w / h / h < 30)
		printf("You are overweight.");
	if(w/h/h >=30)
		printf("You are obese.");
	return 0;
}
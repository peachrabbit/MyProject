#include<stdio.h>
#include<stdlib.h>

int lcm(x, y);

int main()
{
	int x, y;
	printf("Enter two numbers=");
	scanf_s("%d%d", &x, &y);
	printf("The lcm is=%d\n", lcm(x,y));
	system("pause");
	return 0;
}

int lcm(x, y)
{
	int temp,lcm;
	if (x < y)
	{
		temp = x;
		x = y;
		y = temp;
	}
	for (lcm = 1; lcm > 0; lcm++)
	{
		if (lcm % x == 0 && lcm % y == 0)
		break;
	}
	return lcm;
}
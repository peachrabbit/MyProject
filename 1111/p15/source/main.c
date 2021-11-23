#include<stdio.h>
#include<stdlib.h>

int maxium(x,y,z);
int main(void)
{
	int x, y, z;
	printf("Enter three integers:");
	scanf_s("%d%d%d", &x, &y, &z);
	printf("Maxiun is %d\n", maxium(x, y, z));
	system("pause");
	return 0;
}
int maxium(x, y, z)
{
	int max = x;
	if (y > max)
	{
		max = y;
	}	
	if (z > max)
	{
		max = z;
	}
	return max;
}
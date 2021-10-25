#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int a, b, c;
	for (a = 1; a <=500; a++)
	{
		for (b =a+1; b <=500; b++) //保證a是最小的
		{
			c = sqrt(a * a + b * b);
			{
				if (c*c==a*a+b*b&&a+b>c&&a+c>b&&b+c>a&&c<=500)
				{
					printf("%4d%4d%4d\n", a, b, c);
				}
			}
		}
			
	}
	return 0;
}
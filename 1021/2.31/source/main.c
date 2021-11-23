#include <stdio.h>
#include<stdlib.h>

int main()
{
	printf("number  square  cure\n");
	int i, j;
	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j == 0)
				printf("%d\t", i);
			if (j == 1)
				printf("%d\t", i * i);
			if (j == 2)
				printf("%d\n", i * i * i);
		}
	}
	return 0;
}
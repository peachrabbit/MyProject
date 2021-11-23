#include<stdio.h>
#include<stdlib.h>

void staticarrayinit(void);
void automaticarrayinit(void);

int main(void)
{
	printf("first call to each function :\n");
	staticarrayinit();
	automaticarrayinit();

	printf("\n\nsecond call to each function :\n");
	staticarrayinit();
	automaticarrayinit();
	printf("\n");
	system("pause");
	return 0;
}
void staticarrayinit()
{
	static int a1[3];
	int i;

	printf("\nValue on entering staticarrayinit:\n");

	for (i = 0; i <= 2; i++)
		printf("a1[%d]=%d  ", i, a1[i]);

	printf("\nValue on exiting staticarrayinit:\n");

	for (i = 0; i <= 2; i++)
		printf("a1[%d]=%d  ", i, a1[i] += 5);
}
void  automaticarrayinit()
{
	int a2[3] = { 1,2,3 };
	int i;

	printf("\n\nValue on entering  automaticarrayinit:\n");

	for (i = 0; i <= 2; i++)
		printf("a2[%d]=%d  ", i, a2[i]);

	printf("\n\nValue on exiting  automaticarrayinit:\n");

	for (i = 0; i <= 2; i++)
		printf("a2[%d]=%d  ", i, a2[i] += 5);
}
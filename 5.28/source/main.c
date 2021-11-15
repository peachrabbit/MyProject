#include<stdio.h>
#include<stdlib.h>

 char CHARACTER(a);

int main()
{
	char a;
	printf("Enter the Capital letter=");
	scanf("%c",&a);
	printf("lower-case letter is=%c", CHARACTER(a));
	system("pause");
}

char CHARACTER(a)
{
	if (a >= 'A' && a <= 'Z')
		a = a + 32;
	return a;
}
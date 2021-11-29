#include<stdio.h>
#include<stdlib.h>

void reverse(char *str);

int main()
{
	char a[] = "Hello welcome c!";
	reverse(a);
}
void reverse(char* str)
{
	if (*str)
	{
		reverse(str + 1);
		printf("%c", *str);
	}
}
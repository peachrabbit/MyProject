#include<stdio.h>
#include<stdlib.h>
#define max 80

int main()
{
	FILE* fptr;
	char str[max];
	int b;
	fptr = fopen("C://Users/Yue Chiau/Desktop/�Ȧs���/hw upload/110360220_��ή�/p17/output.txt","r");
	while (!feof(fptr))
	{
		b = fread(str, sizeof(char), max - 1, fptr);
		str[b] = '\0';
		printf("%s\n",str);
	} 
	fclose(fptr);
	system("pause");
	return 0;
}
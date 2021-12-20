#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	FILE* fptr;
	char ch;
	int count = 0;

	fptr = fopen("C://Users/Yue Chiau/Desktop/暫存文件/hw upload/110360220_鍾佳殷/p14/welcome.txt","r");
	if (fptr != NULL)
	{
		while ((ch =getc(fptr)) != EOF)
		{
			printf("%c", ch);
			count++;
		}
		fclose(fptr);
		printf("\n總共有%d個字元\n", count);
	}
	else
		printf("檔案開啟失敗!\n");
	system("pause");
	return 0;
}
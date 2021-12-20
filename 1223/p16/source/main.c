#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define enter 13
#define max 80

int main()
{
	FILE* fptr;
	char  str[max], ch;
	int i = 0;
	fptr = fopen("C://Users/Yue Chiau/Desktop/暫存文件/hw upload/110360220_鍾佳殷/p16/output.txt","a");
	printf("請輸入字串，按enter結束輸入!\n");
	while ((ch = getche()) != enter && i < max)
		str[i++] = ch;
	putc('\n', fptr);
	fwrite(str,sizeof(char), i, fptr);
	fclose(fptr);
	printf("\n檔案附加完成!\n");
	system("pause");
	return 0;
}
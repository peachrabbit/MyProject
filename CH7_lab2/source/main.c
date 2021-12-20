#include<stdio.h>
#include<stdlib.h>

struct clientdata
{
	int acctnum;
	char lastname[15];
	char firstname[10];
	double balence;
};
int main()
{
	FILE*pread, *pwrite;
	FILE*cfptr;
	int cnt = 0;
	struct clientdata client = { 0,"","",0.0 };

	pread = fopen("C://c_code/CH7_lab2/credit.txt", "r");
	if (NULL == pread)
	{
		return 0;
	}
	pwrite = fopen("C://c_code/CH7_lab2/credit_bin.txt", "wb");
	if (NULL == pwrite)
	{
		fclose(pread);
		return 0;
	}

	while (!feof(pread))
	{
		fscanf(pread, "%d %s %s %lf", &client.acctnum, client.lastname, client.firstname, &client.balence);
		fwrite(&client, sizeof(struct clientdata), 1, pwrite);
		printf("%-6d%-16s%-11s%10.2f\n", client.acctnum, client.lastname, client.firstname, client.balence);
	}
	fclose(pread);
	fclose(pwrite);
	printf("已讀取文字檔的ASCII資料，並轉存為二進位資料檔案\n\n");
	system("pause");

	printf("\n讀取二進位資料檔案，並格式化輸出如下:\n");
	if ((cfptr = fopen("C://c_code/CH7_lab2/credit_bin.txt", "rb")) == NULL)
	{
		printf("File could not be opened.\n");
	}
	else
	{
		printf("%-6s%-16s%-11s%10s\n", "Acct", "last name", "first name", "balence");
		cnt = fread(&client, sizeof(struct clientdata), 1, cfptr);
		while (cnt > 0)
		{
			printf("%-6d%-16s%-11s%10.2f\n", client.acctnum, client.lastname, client.firstname, client.balence);
			cnt = fread(&client, sizeof(struct clientdata), 1, cfptr);
		}
		fclose(cfptr);
	}
	system("pause");
	return 0;
}
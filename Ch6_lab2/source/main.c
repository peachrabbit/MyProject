#include<stdio.h>
#include<stdlib.h>

int main()
{
	typedef struct _dates
	{
		int year, month, day;
	}dates;

	typedef struct _order
	{
		char n[11];
		dates date;
		int amount;
	}order;

	order o1 = { "AHK08A1024",{1994,3,8},1487 };
	order o2 = { "USA08A1025",{2015,5,20},54530 };
	order o3 = { "UNK08A1028",{2020,8,7},6638613 };

	printf("     **********************\n");
	printf("     *      訂單資料      *\n");
	printf("     **********************\n");

	printf("========================================\n");
	printf(" 訂單編號    訂貨日期    訂貨金額 \n");
	printf("========================================\n");

	printf("%-10s %8d/%02d/%02d  NT$%10d\n", o1.n, o1.date.year, o1.date.month, o1.date.day, o1.amount);
	printf("%-10s %8d/%02d/%02d  NT$%10d\n", o2.n, o2.date.year, o2.date.month, o2.date.day, o2.amount);
	printf("%-10s %8d/%02d/%02d  NT$%10d\n", o3.n, o3.date.year, o3.date.month, o3.date.day, o3.amount);

	system("pause");
	return 0;
}
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int paycode=0;
	double pay, WeeklySales;
	int h;
    int pieces;
	while (paycode!=-1)
	{
		printf("Enter paycode(-1 to end):");
		scanf_s("%d", &paycode);
		if (paycode == -1)
		{
			break;
		}
		switch (paycode)
		{
		case 1:
			printf("The manager's pay is$%.2f", 5000.00);
			printf("\n");
			break;
		case 2:
			printf("Enter the hourly salary:");
			scanf_s("%d", &h);
			if (h <= 40)
			{
				pay = h * 10.00;
			}
			else
				pay = 400.00 + (h - 40) * 10.00 * 1.5;
			printf("worker's pay is $%.2f", pay);
			printf("\n");
			break;
		case 3:
			printf("Enter weekly sales:");
			scanf("%lf", &WeeklySales);
			pay = WeeklySales * .057 + 250;
			printf("Commission worker's pay is $%.2f", pay);
			printf("\n");
			break;
		case 4:
			printf("Enter number of piece:");
			scanf_s("%d", &pieces);
			pay = pieces * 5.00;
			printf("piecework's pay is $%.2f", pay);
			printf("\n");
			break;
		}
		printf("\n");
	}
	return 0;
}
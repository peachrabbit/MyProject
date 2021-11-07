#include<stdio.h>
#include<stdlib.h>
#include<time.h>
enum status { Continue, won, lost };
int rollDice();

int main(void)
{
	int sum, point;
	enum status gamestatus;
	srand(time(NULL));
	sum = rollDice();
	switch (sum)
	{
		case 7:
		case 11:
			gamestatus = won;
			break;

		case 2:
		case 3:
		case 12:
			gamestatus = lost;
			break;
		default:
			gamestatus = Continue;
			point = sum;
			printf("point is %d\n", point);
			break;
	}
	while (gamestatus == Continue)
	{
		sum = rollDice();

		if (sum == point)
		{
			gamestatus = won;
		}
		else
		{
			if (sum == 7)
			{
				gamestatus = lost;
			}
		}
	}
	if (gamestatus == won)
		printf("player wins\n");
	else
		printf("player loses\n");
	system("pause");
	return 0;
}
int rollDice()
{
	int d1, d2,sum;
	d1 = 1 + rand() % 6;
	d2 = 1 + rand() % 6;
	sum = d1 + d2;
	printf("player rolled %d + %d = %d\n", d1, d2, sum);
	return sum;
}
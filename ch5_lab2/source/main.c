#include<stdio.h>
#include<stdlib.h>

#define issues 5
#define ratings 10

void recordresponse(int issue, int rating);
void highestrating();
void lowestrating();
double averagerating(int issue);
void displayresults();

int response[issues][ratings];

const char *topic[issues] = { "global warming","the economy","war","health care","education" };

int main()
{
	int response, i;
	do
	{
		printf("please rate the following topics on a scale from 1-10\n1=least important,10=most impostant\n");

		for (i = 0; i < issues; i++)
		{
			do
			{
				printf("%s?",topic[i]);
				scanf_s("%d",&response);
			} while (response < 1 || response>10);
			recordresponse(i, response);
		}
		printf("enter 1 to stop. enter 0, to rate the issues again.");
		scanf_s("%d", &response);
	} while (response != 1);
	displayresults();
	system("pause");
	return 0;
}
void recordresponse(int issue, int rating)
{
	response[issue][rating - 1]++;
}

void highestrating()
{
	int highrating = 0;
	int hightopic = 0;
	int i, j;

	for (i = 0; i < issues; i++)
	{
		int topicrating = 0;
		for (j = 0; j < ratings; j++)
		{
			topicrating = topicrating + response[i][j]*(j+1);
		}
		if (highrating < topicrating)
		{
			highrating = topicrating;
			hightopic = i;
		}
	}
	printf("the highest rated topic was");
	printf("%s", topic[hightopic]);
	printf("with a total rating of %d\n", highrating);
 }
void lowestrating()
{
	int lowrating = 0;
	int lowtopic = 0;
	int i, j;

	for (i = 0; i < issues; i++)
	{
		int topicrating = 0;
		for (j = 0; j < ratings; j++)
		{
			topicrating = topicrating + response[i][j] * (j + 1);
		}
		if (i == 0)
			lowrating = topicrating;
		if (lowrating > topicrating)
		{
			lowrating = topicrating;
			lowrating = i;
		}
	}
	printf("the lowest rated topic was");
	printf("%s", topic[lowtopic]);
	printf("with a total rating of %d\n", lowrating);
}
double averagerating(int issue)
{
	float total = 0;
	int counter = 0;
	int i;

	for (i = 0; i < ratings; i++)
	{
		if (response[issue][i] != 0)
		{
			total += response[issue][i] * (i + 1);
			counter += response[issue][i];
		}
	}
	return total / counter;
}

void displayresults()
{
	int i, j;
	printf("%20s", "topic");

	for (i = 1; i <= ratings; i++)
	{
		printf("%4d", i);
	}
	printf("%20s\n", "average rating");

	for (i = 0; i < issues; i++)
	{
		printf("%20s", topic[i]);

		for (j = 0; j < ratings; j++)
			printf("%4d", response[i][j]);
		printf("%20.2f\n", averagerating(i));
	}
	highestrating();
	lowestrating();
}
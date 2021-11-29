#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	const int arraysize = 13;
    int counter[13], sum = 0;
    // init counter
    for (int i = 0; i < 13; i++)
        counter[i] = 0;

    int die1;
    int die2;

    for (int roll1 = 0; roll1 <= 36000; roll1++) 
    {
        die1 = 1 + rand() % 6;
        die2 = 1 + rand() % 6;
        counter[die1 + die2]++;
    }
    printf("sum of faces        frequency\n");

    for (int face = 2; face < arraysize; face++)
    {
        printf("       %-13d%d\n",face,counter[face]);
        sum += counter[face];
    }
}


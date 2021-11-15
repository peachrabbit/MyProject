#include<stdio.h>
#include<stdlib.h>
void hanoi(int n, char A, char B, char C);

int main()
{
	int n;
	printf("請輸入盤數:");
	scanf_s("%d", &n);
	hanoi(n, 'A', 'B', 'C');
	return 0;
}
void hanoi(int n, char A, char B, char C)
{
	if (n == 1)
		printf("Move sheet from %c to %c\n", A, C);
	else
	{
		hanoi(n - 1, A, C, B);//將較小的移動到輔助棒
		hanoi(1, A, B, C);//移動最大的到目的地
		hanoi(n - 1, B, A, C);//將較小的盤子移動到目的地
	}
}
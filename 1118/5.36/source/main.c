#include<stdio.h>
#include<stdlib.h>
void hanoi(int n, char A, char B, char C);

int main()
{
	int n;
	printf("�п�J�L��:");
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
		hanoi(n - 1, A, C, B);//�N���p�����ʨ컲�U��
		hanoi(1, A, B, C);//���ʳ̤j����ت��a
		hanoi(n - 1, B, A, C);//�N���p���L�l���ʨ�ت��a
	}
}
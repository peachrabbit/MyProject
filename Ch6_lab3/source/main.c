#include<stdio.h>
#include<stdlib.h>

typedef struct _student
{
	char n[7];
	char class[20];
	char name[20];
	int sorce[3];
}student;

void sub(student *p);

int main()
{
	int i;
	student stud[3] = { {"970101","�|�l�@��","���p��",61,71,81},{"970102","�|�l�@��","������",92,82,72},{"970103","�|�l�@��","�i�j��",73,63,83} };
	student *ps;
	ps = stud;
	printf("\n");
	printf("=================================================\n");
	printf("  �Ǹ�  �Z��\t�m�W\t  ���  �^��  �ƾ�\n");
	printf("=================================================\n");

	for (i = 0; i <3; i++)
	{
		printf("%6s %-10s %-8s %4d %4d %4d\n", (ps + i)->n, (ps + i)->class, (ps + i)->name, (ps + i)->sorce[0], (ps + i)->sorce[1], (ps + i)->sorce[2]);
	}

	printf("\t�I�s�禡�e\n\n");
	sub(ps);
	printf("\n\t�I�s�禡��\n");

	for (i = 0; i < 3; i++)
	{
		printf("%6s %-10s %-8s %4d %4d %4d\n", (ps + i)->n, (ps + i)->class, (ps + i)->name, (ps + i)->sorce[0], (ps + i)->sorce[1], (ps + i)->sorce[2]);
	}

	printf("\n");
	system("pause");
	return 0;
}

void sub(student *p)
{
	for (int i = 0; i < 3; i++)
	{
		(p + i)->sorce[0]+=10;
		(p + i)->sorce[1] += 10;
		(p + i)->sorce[2] += 10;
	}
}
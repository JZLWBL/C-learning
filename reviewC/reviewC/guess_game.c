#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu() {
	printf("***********************\n");
	printf("******��0������Ϸ******\n");
	printf("******��1��ʼ��Ϸ******\n");
	printf("***********************\n");
}

void game() {
	int r = rand()%100+1;
	int guess = 0;
	int count = 5;
	while (count)
	{
		printf("\n�㻹��%d�λ���\n", count);
		printf("��������Ĵ𰸣�");
		scanf("%d", &guess);
		if (guess > r)
		{
			printf("�´���\n");
		}
		else if (guess < r)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶��ˣ�\n");
			break;
		}
		count--;
	}
	if (count == 0)
	{
		printf("��ʧ���ˣ���ȷ����%d\n",r);

	}
}

int main() 
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do {
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input) 
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("���������룺\n");
			break;
		}
	} while (input);


		return 0;
}
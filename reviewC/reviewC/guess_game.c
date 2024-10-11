#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu() {
	printf("***********************\n");
	printf("******按0结束游戏******\n");
	printf("******按1开始游戏******\n");
	printf("***********************\n");
}

void game() {
	int r = rand()%100+1;
	int guess = 0;
	int count = 5;
	while (count)
	{
		printf("\n你还有%d次机会\n", count);
		printf("请数入你的答案：");
		scanf("%d", &guess);
		if (guess > r)
		{
			printf("猜大了\n");
		}
		else if (guess < r)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了！\n");
			break;
		}
		count--;
	}
	if (count == 0)
	{
		printf("你失败了，正确答案是%d\n",r);

	}
}

int main() 
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do {
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input) 
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("请重新输入：\n");
			break;
		}
	} while (input);


		return 0;
}
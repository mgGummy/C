#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("*******************************");
	printf("******  1.play  0.exit  *******");
	printf("*******************************");
}

void game()
{
	//生成随机数
	int ret = 0;
	int guess = 0;
	ret = rand()%100+1;
	while (1) {
		printf("猜数字\n");
		scanf_s("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}

}
int main() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择》：");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("******猜数字游戏*******\n");
	printf("*** 1.paly  0.exit ***\n");
	printf("**********************\n");
}
void game()
{
	int guess = 0;
	//时间戳(当前计算时间-计算机起始时间1970.1.1.0:0:0=（xxx秒）
	int ret = rand() % 100 + 1;//生成随机数1-100 rand函数范围是0-32767
	//printf("%d\n",ret);
	//2.猜数字
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
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
			printf("恭喜你，猜对了!\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
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
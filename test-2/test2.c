#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);//%-2d 左对齐 不够用0补位
//		}
//		printf("\n");
//	}
//		return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz-1;
//	int left = 0;
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid+ 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d", mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("找不到");
//		}
//	}
//	return 0;
//}

//猜数字游戏
//1.电脑会生成一个随机数
//2.猜数字
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
	int ret = rand()%100+1;//生成随机数1-100 rand函数范围是0-32767
	//printf("%d\n",ret);
	//2.猜数字
	while(1)
	{
		printf("请猜数字:>");
		scanf_s("%d", &guess);
		if(guess>ret)
		{
			printf("猜大了\n");
		}
		else if(guess<ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了！");
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
		switch(input)
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
	} while(input);

	return 0;
}
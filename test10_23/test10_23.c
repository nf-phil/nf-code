#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//打印菱形
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//上
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//打印一行
//		//空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下
//	for(i=0;i<line-1;i++)
//	{
//		//打印一行
//		//空格
//		int j = 0;
//		for (j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//c喝汽水，1瓶水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水（编程实现）
//int main()
//{
//
//	int money = 0;
//	int total = 0;
//	scanf("%d", &money);
//	if(money>0)
//	total = 2 * money - 1;
//	
//	//int total = money;
//	//int empty = money;
//	////开始置换
//	//while (empty >= 2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//	printf("%d\n", total);
//	return 0;
//}

//输入一个整数数组，实现一个函数
//来调整该数组中的数字的顺序，使得奇数在前半部分，偶数在后半部分
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//从前往后找一个偶数
//		while (left<right && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		//从后往前找一个奇数
//		while (left<right && arr[right] % 2 == 0)//要注意奇数数组时，可能越界访问，所以需要满足left<right条件
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = 0;
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//	
//}
//
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//	return 0;
//}


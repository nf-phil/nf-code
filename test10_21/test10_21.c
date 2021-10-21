#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//
//	double* d[5];
//
//	double* (*pd)[5]=&d;//ok pd就是一个数组指针
//	int arr[10] = { 1,2,3,4,5 };
//	int (*parr)[10] = &arr;//parr就是一个数组指针-其中存放的就是数组的地址
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	/*int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//	return 0;*/
//
//	int (*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *((*pa)+i));
//	}
//
//}


//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//			printf("%d ", arr[i][j]);
//	}
//
//}

//p是一个数组指针
//void print2(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//    //int a[5];&a
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	/*print1(arr,3,5);*/
//	print2(arr, 3, 5);//arr数组名-表示数组首元素的地址，二维数组首元素是第一行，所以arr数组名表示的是第一行的地址
//
//	return 0;
//}


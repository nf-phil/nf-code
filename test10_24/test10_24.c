#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//unsigned char 0-255
//
//	unsigned char a = 200;
//	
//	unsigned char b = 100;
//	
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d",a+b, c);//300 44
//	return 0;
//}

//杨辉三角
//1
//1 1
//1 2 1
//1 3 3 1
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <=i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2&&j>=1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		int k = 0;
//		for (k = 0; k < 10 - i-1; k++)
//		{
//			printf(" ");                //奇怪的杨辉三角
//		}
//		for (j = 0; j <=i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//分析杀手
//A:不是我
//B:是C
//C:是D
//D:C在胡说
//3人说真话 一人说假话


//int main()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//			printf("%c\n", killer);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <=5; a++)
//	{
//		for (b =1; b <=5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <=5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1)
//							&& ((b == 2) + (e == 4) == 1)
//							&& ((c == 1) + (d == 2) == 1)
//							&& ((c == 5) + (d == 3) == 1)
//							&& ((e == 4) + (a == 1) == 1)
//							)
//						{
//							if(a*b*c*e*d==120)
//							printf("a=%d b=%d c=%d d=%d e=%d\n", a,b,c,d,e);
//						}
//					}
//				}
//			}
//		}
//}
//
//	return 0;
//}

//int main()
//{
//	enum weekday { mon=1, tue, wed, thu, fri, sat, sun } day;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("Today is Monday!");
//		break;
//	case 2:
//		printf("Today is Tuesday!");
//		break;
//	case 3:
//		printf("Today is Wednesday!");
//		break;
//	case 4:
//		printf("Today is Thursday!");
//		break;
//	case 5:
//		printf("Today is Friay!");
//		break;
//	case 6:
//		printf("Today is Saturday!");
//		break;
//	case 7:
//		printf("Today is Sunday!");
//		break;
//	default:
//		printf("ERRO");
//	}
//	return 0;
//}


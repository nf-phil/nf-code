#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	return *p;//返回1为小端 返回0为大端
//	/*if (*p == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}*/
//
//}
//int main()
//{
//
//	
//	int ret=check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//
//	return 0;
//}
//10000000000000000000000000001010-原码
//11111111111111111111111111110101-反码
//11111111111111111111111111110110-补码
//   ff      ff     ff        f6

//#include<stdio.h>
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;//截断 整型提升 
//	printf("a=%d,b=%d,c=%d", a, b, c);//-1 -1 255
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char a = -128;
//	printf("%u\n", a);//4294967168
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}
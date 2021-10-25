#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int* pa=&a;
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	int arr[10] = { 0 };
//	int (*parr)[10] = &arr;//取出数组的地址
//	//parr 是指向数组的指针-存放的是数组的地址
//
//	//函数指针-存放函数地址的指针
//	//&函数名-取到的就是函数的地址
//    //pf就是一个函数指针变量
//	int (*pf)(int,int) = &Add;
//	printf("%p\n", &Add);//008710B4 
//
//	return 0;
//}

//void test(char* str)
//{
//
//}
//int main()
//{
//	void(*pt)(char*) = &test;
//
//
//	return 0;
//}
//
// 
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	
//	//int (*pf)(int,int) = &Add;
//	int (*pf)(int, int) = Add;//Add==&Add==pf
//	int ret=(*pf)(3, 5);// 1 //*无实际意义，只是便于理解
//	int ret = pf(3, 5);//2
//	int ret = Add(3, 5);//3
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	//代码1
//	(*(void(*)())0)();
//	//调用0地址处的函数-该函数无参，返回类型是void
//	// 	   1.void(*)()-函数指针类型
//	// 	   2.（void(*)()）0-对0进行强制类型转换，被解释为一个函数地址
//	// 	   3.*(void(*)()）0-对0地址进行了解引用操作
//	// 	   4.(*(void(*)()）0)()-调用0地址处的函数
//	
//	//《c陷阱和缺陷》
//	//代码2
//	void (*signal(int, void(*)(int)))(int);
//	//typedef-对类型进行重定义
//
//	typedef void(*pfun_t)(int) ;//对void（*)（int）的函数指针类型重命名为pfun_t
//	//typedef unsigned int uint;
//
//	void(*)(int) signal(int, void(*)(int));//这样写方便理解，但语法不允许
//	pfun_t signal(int, void(*)(int));
//	
//	//1.signal和()结合，说明signal是函数名
//	//2.signal函数的第一个参数的类型是int，第二个参数的类型是函数指针
//	// 该函数指针，指向一个参数为int，返回类型是void的函数
//	//3.signal函数的返回类型也是一个指针
//	//该函数指针，指向一个参数为int，返回类型是void的函数 
//	//signal是一个函数的声明
//	//
//	return 0;
//}
//


//函数指针数组-存放函数指针的数组
// 
// 整型指针 int*
// 整型指针数组 int* arr[5];
//

//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//	int (*pfArr[2])(int, int) = { Add,Sub };//pfArr就是函数指针数组
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int menu()
//{
//	printf("**************************\n");
//	printf("*****1.add     2.sub******\n");
//	printf("*****3.mul     4.div******\n");
//	printf("*****     0.exit    ******\n");
//	printf("**************************\n");
//}
//int main()
//{
//	int input = 0;
//	//计算器-计算整型变量的加、减、乘、除
//	do
//	{
//		menu();
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		printf("请选择：>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数：>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("ret= %d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个操作数：>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret= %d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作数：>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret= %d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个操作数：>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret= %d\n", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误，请重新选择！\n");
//			break;
//		}
//		
//	} while (input);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int menu()
//{
//	printf("**************************\n");
//	printf("*****1.add     2.sub******\n");
//	printf("*****3.mul     4.div******\n");
//	printf("*****     0.exit    ******\n");
//	printf("**************************\n");
//}
//int main()
//{
//	int input = 0;
//	计算器-计算整型变量的加、减、乘、除
//	do
//	{
//		menu();
//		pfArr就是函数指针数组
//		转移表-《C和指针》
//		int(*pfArr[5])(int, int) = { NULL,Add,Sub,Mul,Div };
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		printf("请选择：>");
//		scanf("%d", &input);
//		if (1 <= input && input <= 4)
//		{
//			printf("请输入两个操作数：>");
//			scanf("%d %d", &x, &y);
//			ret = (*pfArr[input])(x, y);
//			printf("ret=%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出程序\n");
//			break;
//		}
//		else
//		{
//			printf("选择错误！\n");
//		}
//	} while (input);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int menu()
//{
//	printf("**************************\n");
//	printf("*****1.add     2.sub******\n");
//	printf("*****3.mul     4.div******\n");
//	printf("*****     0.exit    ******\n");
//	printf("**************************\n");
//}
//int Calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数>:");
//	scanf("%d %d", &x, &y);
//	return pf(x, y);
//}
//int main()
//{
//	int input = 0;
//	//计算器-计算整型变量的加、减、乘、除
//	do
//	{
//		menu();
//		
//		int ret = 0;
//		printf("请选择：>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			ret=Calc(Add);
//			printf("ret=%d", ret);
//			break;
//		case 2:
//			ret = Calc(Sub);
//			printf("ret=%d", ret);
//			break;
//		case 3:
//			ret = Calc(Mul);
//			printf("ret=%d", ret);
//			break;
//		case 4:
//			ret = Calc(Div);
//			printf("ret=%d", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误，请重新选择！\n");
//			break;
//		}
//		
//	} while (input);
//	return 0;
//}//回调函数机制

#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
	//const-常属性
	//const int n = 10;//n是变量，但是又有常属性，所以我们说n是常变量
	//int arr[n] = { 0 };

	//2.const-修饰的常变量
	/*const int num = 4;
	printf("%d\n", num);
	num = 8;
	printf("%d\n", num);*/

	//3，100,3.14-字面常量

//	return 0;
//}

//#include<stdio.h>

//4.枚举常量
//枚举-一一列举
// 
//性别：男，女，保密
//三原色：红、黄、蓝
//星期:1、2、3、4、5、6、7

//枚举关键词-enum

//enum Sex
//{
//
//	MALE,
//	FEMALE,
//	SECRET
//};
////MALE,FEMALE,SECRET-枚举常量
//int main()
//{
//	//enum Sex s =FEMALE
//	printf("%d\n", MALE);//0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//
//	return 0;
//}

//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//
//int main()
//{
//	enum Color color = BLUE;
//	color = YELLOW;
//	//BLUE=6;
//
//	return 0;
//}


//3.#define-定义的标识符常量
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 10 };
//	printf("%d\n", MAX);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	//printf("%d\n", strlen("c:\test\32\test.c"));
//	//\32--32是2个8进制数字
//	//32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
//	//32-->10进制26-->作为ASCII码值代表的字符
//	//\xdd表示两个十六进制数字，如:\xdd
//	printf("%c\n", '\x61');
//	return 0;
//
//
//}
//


//int main()
//{
//	///*printf("c:\\test\\32\\test.c");*///\\ 用于表示一个反斜杠，防止它被解释为一个转义序列符
//	////\t-水平制表符
//	//printf("%c\n", '\'');
//	//printf("%s\n", "\"");
//
//	return 0;
//}
//int main()
//{
//	printf("abc\n");
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";//3
//	char arr2[] = { 'a','b','c','\0'};//15(随机值）-abc。。。直到遇到\0
//	printf("%d\n", strlen(arr1));//strlen-string length-计算字符串长度的
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//
//}


//int main()
//{
//	//数据在计算机上存储的时候，存储的是2进制
//	//#av$
//	//a-97
//	//A-65
//	//....
//	//ASCII 编码
//	//ASCII 码值
//	char arr1[]="abc";//数组
//	//"abc"--'a','b','c','\0'   --'\0'字符串的结束标志
//	char arr2[] = { 'a','b','c' ,0};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//
//}


//字符串类型
//int main()
//{
//	"abcde"; "hello bit"; ""空字符串
//    return 0；
//}

//#include<stdio.h>
//
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗?(1/0):");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int coding = 0;
//	printf("你会去敲代码吗？（选择1 or 0）：>");
//	scanf("%d", &coding);
//	if(coding == 1)
//	{
//		printf("坚持，你会有好offer\n");
//	}
//	else
//	{
//		printf("放弃，回家卖红薯\n");
//	}
//		return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while (line < 20000)
//	{
//		printf("敲一行代码:%d\n",line);
//	    line++;
//	}
//	if(line>=20000)
//	printf("好offer\n");
//
//	return 0;
//
//}
//#include<stdio.h>
//int Add(int x, int y) //Add- 函数名,x、y-函数参数,int-返回类型
//{
//	int z = x + y;//大括号里是函数体
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("输入两个操作数：>");
//
//	scanf("%d %d", &num1, &num2);
//	sum = Add(num1, num2);
//	printf("sum=%d\n", sum);
//
//	return 0;
//
//	////sum = num1 + num2;
//	//sum = Add(num1, num2);
//	////sum = a + b;
//	//sum = Add(a, b);
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个存放10个整数数字的数组 下标是0-9
//	int i = 0;
//	while (i<10)
//
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//
//	arr[下标]
//	char ch[20]:
//	float arr[5]：
//	printf("%d\n", arr[4]);//用下标的方式访问元素
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	//移（2进制）位操作符
//	//<<左移
//	//>>右移
//	int a = 1;
//	//整型1占4个字节=32bit位
//	//00000000000000000000000000000001
//	int b=a<<2;
//	printf("%d\n", b);
//	printf("%d\n", a);
//
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	//(2进制)位操作
//	//&按位与
//	//|按位或
//	//^按位异或
//	int a = 3;
//	int b = 5;             
//	int c = a^b;//不是次方-是异或
//	//异或的计算规律：
//	// 	   对应的二进制位相同，则为0
//	// 	   对应的二进制位不同，则为1
//	//011 (异或）      011 （或）       011  （与）
//	//101             101              101
//	//110=6           111=7            001=1
//	printf("%d\n", c);
//	return 0;
//
//}
//
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	int arr[10] = { 0 };//（10个整型元素的数组）
//	//10*sizeof(int)=40
//	int sz = 0;
//	printf("%d\n", sizeof(arr));
//	/*计算数组的元素个数
//    个数=数组元素的大小/每个元素的大小*/
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz=%d\n", sz);
//
//
//
//
//
//	//int a = 10;
//	////sizeof 计算的是变量/类型所占空间的大小，单位是字节
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof a);
//	//printf("%d\n", sizeof int);//int 不能省略（）
//	//
//	return 0;
//
//}

//{
//	//单目操作符
//	//双目操作符
//	//三目操作符
//
//	//int a = 10;
//	//int b = 20;
//	//a + b;//+双目操作符
//	//c语言中真假 0-假 1-真
//	//int a = 10;
//	//printf("%d\n", a);
//	//printf("%d\n", !a);//！逻辑反操作 假变真 真变假
//
//
//	//int a = 10;
//	//a = 20;//=赋值  ==判断相等
//	//a = a + 10;//a加上10赋值给a
//	//a += 10;//给a加上10
//	//a = a - 10;
//	//a -= 10;
//	//a = a & 2;
//	//a &= 2;
//	//符合赋值符
//	//+=  -=  *= /=  %=  >>=  <<=  &=  |=  ^=
//
//
//
//}
//#include<stdio.h>
//#include<string.h>
//
//int Max(int x, int y)
//
//{
//	if (x > y)
//	    return x; 
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1, num2);
//	printf("较大值=%d\n", max);
//
//	return 0;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("较大值=%d\n", num1);
//	else
//		printf("较大值=%d\n", num2);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	int a = (int)3.14;//double-->int
//
//	printf("%d\n",a);
//
//	return 0;
//
//}
//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++,先使用，再++
//	//int b = ++a;//前置++。先++，后使用
//	//int b = a--;//后置--，先使用，再--
//	//int b = --a;//前置--。先--，再使用
//	printf("a=%d b=%d\n", a, b);//11 10  11 11 9 10 9 9
//	return 0;
//
//}

//int main()
//{
//	int a = 0;//1一个字节，32bit位
//	int b = ~a;//b是有符号的整型
//	//~ —— 按(2进制）位取反
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//原码、反码、补码
//	//负数在内存中存储的时候，存储的是二进制的补码
//	//原码 符号位不变，其它位按位取反得到反码 反码+1得到补码
//	//11111111111111111111111111111111-补码
//	//11111111111111111111111111111110-反码
//	//10000000000000000000000000000001-原码  第一位为符号位 1为负 0为+
//
//	printf("%d\n", b);//使用的，打印的是这个数的原码
//	return 0;
//
//}



//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//	//printf("%d\n", sizeof int);错误
//	
//	printf("%d\n", sizeof(arr));//计算数组大小，单位字节
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//6
//	return 0;
//
//}

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char ch = 'l';
//	char* pc = &ch;
//
//	printf("%d\n", sizeof(pc));
//	/**pc = 'f';
//	printf("%c\n", ch);*/
//
//	return 0;
//
//}
//
//

//int main()
//{
//	int a = 10;//4个字节
//	int*p=&a;//取地址
//	*p=20;//*-解引用操作符
//	printf("a=%d\n", a);
//	/*printf("%p\n", &a);
//	printf("%p\n",p);*/
//	//有一种变量是用来存放地址的-指针变量
//	/*printf("%p\n", &a);*/
//
//	return 0;
//}






//int ADD(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int sum = ADD(2, 3);
//	printf("sum=%d\n", sum);
//	sum = 10 * ADD(2, 3);
//	printf("sum=%d\n", sum);
//	return 0;
//}

//#define 定义标识符常量
//#define Max 100
//#define 可以定义宏-带参数

//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////宏的定义方式
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	//int a = Max;
//
//	int a = 10;
//	int b = 20;
//	//函数
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	//宏的方式
//	max = Max(a, b);
//	//max=(a>b?a:b);
//	printf("max=%d\n", max);
//
//	return 0;
//}

//extern int Add(int, int);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);
//	printf("sum=%d\n", sum);
//	return 0;
//
//}

//int main()
//{
//	//extern -声明外部符号的
//	extern int g_val;
//	printf("g_val=%d\n",g_val);
//
//	return 0;
//}
//static 修饰局部变量 局部变量的生命周期变长 
//static 修饰全局变量 改变了变量的作用域 
//       让静态的全局变量只能在自己所在的源文件内部使用，
//       出了原文件就没法再使用了
// static修饰函数改变了函数的链接属性
// 外部链接属性-> 内部链接属性

//void test()
//{
//	static int a = 1;//static --- a是一个静态的局部变量
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()
//
//{
//	//typedef-类型定义-类型重定义
//	typedef unsigned int u_int;
//	unsigned int num = 20;
//	u_int num2 = 20;
//	
//	return 0;
//}

//{
//	register int a = 10;//建议把a定义成寄存器变量
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	/*int arr[10] = { 0 };
//	arr[4]; [] - 下标引用操作符*/
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//（）-函数调用操作符
//
//	printf("%d\n", sum);
//	return 0;
//}
//{
//	//真-非0  假-0  &&逻辑与  ||逻辑或
//	int a = 0;
//	int b = 5;
//	int c = a && b;
//
//	printf("%d\n", c);
//
//	return 0;
//
//}
//#include<stdio.h>

//
//#include<stdio.h>
//
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//
//	return 0;
//}


//复杂对象-结构体-我们创造出来的一种类型
//#include<string.h>
//struct Book
//{
//	char name[20];//c语言程序设计
//	short price;//55
//};
//#include<stdio.h>
//int main()
//{
//	//利用结构体类型-创建一个该类型的结构体变量
//	struct Book b1 = {"C语言程序设计",55};
//
//	strcpy(b1.name,"C++"); //strcpy--string copy-字符串拷贝-库函数-string.h
//
//	printf("书名：%s\n", b1.name);
//	//struct Book* pb = &b1;
//	//利用pb打印我们的书名和价格
//	//.  结构体变量.成员
//	//-> 结构体指针->成员
//
////	printf("%s\n", pb->name);
////	printf("%d\n", pb->price);
////
////	/*printf("书名：%s\n", (*pb).name);
////	printf("价格：%d\n", (*pb).price);*/
////
////	//printf("书名：%hS\n", b1.name);
////	//printf("价格：%d元\n", b1.price);
////	//b1.price = 15;
////	//printf("修改后的价格：%d\n", b1.price);
////
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int age = 100;
//
//
//	if (age < 18)
//		printf("未成年\n");
//	{
//		if (age >= 18 && age < 28)
//			printf("青年\n");
//		else if (age >= 28 && age < 50)
//			printf("壮年\n");
//		else if (age >= 50 && age < 90)
//			printf("老年\n");
//		else
//			printf("老不死");
//	}
	//else if (age>=18 && age < 28)
	//	printf("青年\n");
	//else if (age>=28 && age < 50)
	//	printf("壮年\n");
	//else if (age>=50 && age < 90)
	//	printf("老年\n");
	//else
	//	printf("老不死");


	/*if (age < 18)
		printf("未成年\n");
	else
		printf("成年\n");*/

	//if (age < 18)
	//printf("未成年\n");
//
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else
//			printf("haha\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while(i <= 100);
//	{
//		if(i%2 != 0)
//			printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int day = 0;
//
//	scanf_s("%d", &day);
//	switch (day)//switch表达式必须是整型
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期七\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}

	/*if (1 == day)
		printf("星期一\n");
	else if (2 == day)
		printf("星期二\n");
	else if (3 == day)
		printf("星期三\n");
	else if (4 == day)
		printf("星期四");*/
//		return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)//switch允许嵌套使用
//		{
//		case 1:n++;
//		case 2:m++, n++; break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d, n=%d\n", m, n);//5,3
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	while(1)
//	printf("hehe");
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	//ctrl + z
//	//EOF-end pf file->-1文件结束标志
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	printf("%c\n", ch);
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	/*int ch = 0;
//	while ((ch = getchar())!= EOF)
//	{
//		putchar(ch);
//	}*/
//	char password[20] = { 0 };
//	int ret = 0;
//	int ch = 0;
//
//	printf("请输入密码：>");
//	scanf("%s", password);//输入密码，并存入password数据中
////缓冲区还剩一个'\n',  读取一下'\n'
//	while ((ch = getchar()) != '\n')//Y/N
//	{
//		;
//	}
//	printf("请确认(Y:N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar())!=EOF)
//	{
//		if (ch < '0' || ch>'9')
//		    continue;
//		putchar(ch);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 0;
////初始化 判断 调整
//	for (i = 1; i <= 10; i++)
//
//	{
//		if (i == 5)
//			//break;//跳出循环，终止程序
//			continue;
//		printf("%d\n", i);
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		if (i = 5)//不可在for循环体内改变循环变量，防止for循环失去控制。
//			printf("haha\n");
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//10次循环
//	//10次打印
//	//10个元素
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n",arr[i]);
//
//
//	}

//#include<stdio.h>
//int main()
//{
//
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//
//		printf("hehe\n");
//	}
    /*int i = 0;
	int j = 0;
	for (; i < 10; i++)
	{
		
		for (; j < 10; j++)
		{
			printf("hehe\n");
		}
	}*/
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for(i = 0, k = 0; k = 1; i++, k++)
//		k++;
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//1-10
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//		i++;
//	} 
//	while(i <= 10);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		int ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	
//		printf("sum=%d\n", sum);
//	    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 10;
//	//写一个代码，在arr数组（有序的）中找到7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;
//	int right = sz-1;
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;
//
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;          //二分法查找某个数
//		}
//		else
//		{
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//		if (left > right)
//			printf("找不到\n");
//	}
//	/*int mid = (left + right) / 2;
//	
//	if (mid[] > k)
//	{
//		right = mid - 1;
//	}
//	else if (mid[] < k)
//	{
//		left = mid + 1;
//	}
//	else
//	{
//		printf("找到了，下标是%d\n", mid);
//	}*/
//
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>//函数strlen的头文件
//#include<Windows.h>//休息函数Sleep的头文件
//#include<stdlib.h>//系统命令的头文件
//int main()
//{
//	//welocom to bit !!!!!!
//	//#####################
//	//w###################!
//	//wl#################!!
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr[0]) - 2;//减二是因为字符串后面有\n
//	int right = strlen(arr1)-1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//休息一秒
//		Sleep(1000);
//		system("cls");//执行系统命令的一个函数-cls-清空屏幕
//		left++;
//		right--;
//	}
//	return 0;
//}
//
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<Windows.h>
//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	for (i = 0; i < 3; i++)
//	{
//
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//==等号不能判断两个字符串是否相等，应该使用一个库函数-strcmp
//		{
//			printf("登录成功\n");
//			break;
//		}
//
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	
//		if (i == 3)
//			printf("三次密码均错误，退出程序\n");
//		return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//
//	scanf("%d%d%d", &a, &b, &c);
//	//算法实现  a中放最大值 b次之 c中放最大值
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b= c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100;i++)
//	{
//		if (0 == i % 3)
//			printf("%d\n", i);
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n); //求两个数的最小公约数 《辗转相除法》
//	while (r=m%n)
//	{
//		//r = m%n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//#include<stdio.h> //打印1000-2000间的闰年
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
		//判断year是否为闰年
		//1.能被4整除并且不能被100整除的是闰年
	    //2.能被400整除的是闰年
	/*	
		if (year % 4 == 0 && year % 100 != 0)
		{
			printf("%d ", year);
			count++;
		}
		else if (year % 400 == 0)
		{
			printf("%d ", year);
			count++;
		}*/
		/*if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
		{
			printf("%d ", year);
			count++;
		}

	}
	    printf("\ncount=%d\n", count);
		return 0;
}*/
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数-只能被1和它自己本身整除
//        //素数判断的规则
//		//1.试除法
//		//例如13：产生2->12（i-1）
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)     //素数求解的n种境界
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//
//	}
//	printf("\ncount=%d\n", count);
//		return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//			printf("%d ", i);
//
//		}
//		if (i / 10 == 9)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}
//计算1/1-1/2+1/3-。。。。。-1/100的和
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	double sum1 = 0.0;
//	double sum2 = 0.0;
//	for (i = 1; i <= 100; i += 2)
//	{
//		sum1+=1.0/i;
//	}
//	for (i = 2; i <= 100; i += 2)
//	{
//		sum2-=1.0/i;
//	}
//	sum = sum1 + sum2;
//	printf("sum=%lf", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*1.0 / i;
//		flag = -flag;
//	}
//	printf("sum=%lf", sum);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//}

//猜数字游戏
//1.电脑会生成一个随机数
//2.猜数字
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("******猜数字游戏*******\n");
//	printf("*** 1.paly  0.exit ***\n");
//	printf("**********************\n");
//}
//void game()
//{
//	int guess = 0;
//	//时间戳(当前计算时间-计算机起始时间1970.1.1.0:0:0=（xxx秒）
//	int ret = rand() % 100 + 1;//生成随机数1-100 rand函数范围是0-32767
//	//printf("%d\n",ret);
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了!\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	again:
//	printf("hello bit\n");
//	goto again;
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//
//	char input[20] = { 0 };
//	//shutdown-s-t 60
//	//system()-执行系统命令的
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("请注意，你的电脑在一分钟内关机，如果输入：我是猪，就取消关机\n请输入>：");
//		scanf("%s", input);
//		if(strcmp(input,"我是猪")==0)
//		{
//		  system("shutdown -a");
//		  break;
//		}
//	}
////again:
////	printf("请注意，你的电脑在一分钟内关机，如果输入：我是猪，就取消关机\n请输入>：");
////	scanf("%s", input);
////	if(strcmp(input,"我是猪")==0)
////	{
////		system("shutdown -a");
////	}
////	else
////	{
////		goto again;
////	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "##########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	//strcpy-string copy
//    //strlen-string length
//	return 0;
//}
//#include<stdio.h>
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("%d\n", max);
//	return 0;
//}
//#include<stdio.h>
// 不能完成任务
// 
// 当实参传给形参的时候
// 形参其实是实参的一份临时拷贝
// 对形参的修改是不会改变实参的
//void swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp =x;
//	x = y;
//	y = tmp;
//}
//void swap2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	/*int tem = 0;*/
//	printf("a=%d,b=%d,\n", a, b);
//	//Swap1(a, b);
//	swap2(&a, &b);
//	/*tem = a;
//	a = b;
//	b = tem;*/
//	printf("a=%d,b=%d,\n", a,b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d", a);
//
//	return 0;
//}
//#include<stdio.h>
////是素数返回1，不是素数反回0
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;	
//	}
//	return 1;
//}
//int main()
//{
//	//打印100-200间的素数
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断是否为素数
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d ", count);
//	return 0;
//}
//#include<stdio.h>
//int is_leap_year(int x)
//{
//	if ((x%4==0&&x%100!=0)||(x%400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	int count =0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}
//#include<stdio.h>
//                //本质上arr是一个指针
//int binary_search(int arr[], int k, int sz)
//{
//	//算法实现
//	int left = 0;
//	int right = sz-1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{ 
//	//二分查找
//	//在一个有序数组里查找具体的某个数
//	//如果找到了返回，这个数的下标，找不到的返回-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到指定数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d", ret);
//	}
//	return 0;
//}
//#include<stdio.h>
//void Add(int* p)
//{
//	(*p)++;//*p++ ++的优先级高一些，作用于p，而不是*p这个整体，需用括号（*p）
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);//1
//	Add(&num);
//	printf("num=%d\n", num);//2
//	Add(&num);
//	printf("num=%d\n", num);//3
//	return 0;
//}

//函数嵌套
//#include<stdio.h>
//void new_line()
//{
//	printf("你好，武科大！\n");
//}
//void three_line()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		new_line();
//	}
//
//}
//int main()
//{
//	three_line();
//	return 0;
//}
//链式访问
//
//#include<stdio.h>
//int main()
//{
//	int len = 0;
//	//1.
//	len = strlen("abc");
//	printf("%d", len);
//	//2.
//	printf("%d", strlen("abc"));
//	return 0;
//}
// 
//#include<stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));//int printf("%d", 43)=2   printf("%d",2)=1  
//
//	return 0;
//}

//函数声明
//#include<stdio.h>
//
//int Add(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//函数调用
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
////函数定义
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//递归
//#include<stdio.h>
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//递归：输入1234 输出1 2 3 4
//#include<stdio.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	print(num);
//	//print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//}
//#include<stdio.h>
////int my_strlen(char* str)
////{
////	int count = 0;
////	while (*str != '\0')
////	{
////		count++;
////		str++;
////	}
////
////递归方法
////把大事化小
//	//my_strlen("bit")
//	//1+my_strlen("it")
//	// 1+1+my_strlen("t"）
//	//1+1+1+my_strlen("")
//	//1+1+1+0
//	//3
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	/*int len = strlen(arr);
//		printf("%d\n",len);*/
//
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//	printf("len=%d\n", len);
//	return 0;
//}
//#include<stdio.h>
//int Fac1(int n)
//{
//
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Fac2(int n)
//{
//	if (n > 1)
//	{
//		return n* Fac2(n - 1);
//	}
//	return 1;
//}
//int main()
//{
//	//求n的阶乘
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);//循环的方式
//	ret = Fac2(n);
//	printf("%d\n", ret);
//
//	return 0;
//}

//斐波那契数列
//1 1 2 3 5 8 13 21 34 55
#include<stdio.h>
//int count = 0;
//int Fib(int n)
//{
//	if (n == 38)//测试第三个斐波那契数的计算个数
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD-测试驱动开发
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	/*printf("count=%d\n", count);*/
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	//创建一个数组-存放整型-10个
//	int arr[10] = { 1,2,3 };//不完全初始化，剩下的元素默认初始化为0
//	char arr2[5] = { 'a','b' };
//	char arr3[5] = "ab" ;
//	char arr4[] = "abcdef" ;
//	printf("%d\n",sizeof(arr4));
//	//sizeof-计算arr4所占空间的大小
//	//七个元素-char  7*1=7
//
//	printf("%d\n", strlen(arr4));
//	//strlen-求字符串的长度-‘\0’之前的字符个数
//	//【a，b，c，d，e，f，\0】
//	//6
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char arr[] = "abcdef";
//	int i = 0;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < len; i++)
//	{
//		printf("%c\n", arr[i]);
//	}
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int  arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			/*printf("%d ",arr[i][j]);*/
//			printf("arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//void bubble_sort(int arr[],int sz)
//{
//	//确定冒泡排序趟数
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int flag = 1;//假设这一趟排序的数据已经有序
//		//每一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据其实不完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//	    }
//	}
//
//}

//int main()
//{
//	
//	int arr[] = {10, 9,8,6,7,5,4,2,3,1, };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对arr进行排序，排成升序
//	bubble_sort(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//	printf("%d\n", *arr);
//	return 0;
//}


//交换两个数 不创建第三变量
//#include<stdio.h>
//#include<limits.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("交换前：a=%d,b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	//^按(二进制）位异或 相同为0 相异为1
//	printf("交换后：a=%d,b=%d\n", a, b);
//	/*INT_MAX; 2147483647*/
//	//printf("交换前：a=%d,b=%d\n", a, b);
//	////溢出问题
//	////int -4字节-32bit位-最大值
//	//a = a + b;//a-和 b-还是原来的b
//	//b=a - b;//b得到的是原来的a
//	//a=a - b;//a得到的是原来的b
//	//printf("交换后：a=%d,b=%d\n", a, b);
//	
//	return 0;
//}
// 
//找出频率低的数
// (暴力求解)
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,5,7,1,2,3,4 };
//	//找出单身狗
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		//统计arr[i]在arr数组中出现了几次；
//		int count = 0;
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if(arr[i]==arr[j])
//			{ 
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("单身狗:%d\n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("单身狗：%d\n", ret);
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>//system的头文件
//#include<string.h>//strcmp的头文件
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");//执行关机命令
//again:
//	printf("请注意，你的电脑将在一分钟内关机！如果输入我是猪，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input,"我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//统计num的补码中有几个1
//	while (num)
//	{
//		if (num%2==1)//缺点：负数不行
//		{
//			count++;
//			num=num/2;
//		}
//	}
//	printf("二进制中1的个数=%d\n", count);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//按位与求二进制1中的个数
//	//32bit
//	//num&1==1
//	//000000000000000000000011
//	//000000000000000000000001
//	//000000000000000000000001
//	int i = 0;
//	for(i=0;i<32;i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n",count);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	a = a + 2;
//	a += 2;
//
//	a = a >> 1;
//	a >>= 1;  //复合赋值符
//
//	a = a & 1;
//	a &= 1;
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);
//	a = a & (~(1 << 2));
//	printf("%d\n", a);
//	//00000000000000000000000000001011
//	//00000000000000000000000000000100
//	//00000000000000000000000000001111
//	//  1<<2
//	//00000000000000000000000000000001
//	// 
//	//00000000000000000000000000001111
//	//11111111111111111111111111111011
//	//00000000000000000000000000000100
//	//00000000000000000000000000001011
//	// 
//	//int a = 0;
//	////~按（二进制）位取反
//	////00000000000000000000000000000000
//	////11111111111111111111111111111111-补码
//	////11111111111111111111111111111110-反码
//	////10000000000000000000000000000001-原码
//	//printf("%d\n", ~a);
//
//
//	return 0;
//}
//#include<stdio.h>
//
//void test1(int arr[])//传的地址 4或8字节 
//{
//	printf("%d\n", sizeof(arr));//4
//}
//void test2(int ch[])
//{
//	printf("%d\n", sizeof(ch));//4
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40
//	printf("%d\n", sizeof(ch));//10
//	test1(arr);
//	test2(ch);
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;//1234
//	i=a++||++b||d++;//1334
//	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 6;
//	int b = 0;
//	b = (a > 5 ? 3 : -3);
//	printf("b=%d\n", b);
//	return 0;
//}
//#include<stdio.h>
//int mainO()
//{
//	int a[10] = { 0 };//数组操作符的操作数为 数组名+数组下标                                         
//	a[4] = 10;
//	return 0; 
//}
//#include<stdio.h>
//创建了一个结构体类型-struct Stu
//struct Stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	//使用struct Stu 这个类型创建了一个学生对象s1，并初始化
//	struct Stu s1 = {"张三",20,"20210909"};
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);*/
//	struct Stu *ps=&s1;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	/*printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);*/
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char a = 3;
//	//000000000000000000000011
//	//00000011-a
//	//
//	char b = 127;
//	//000000000000000001111111
//	//011111111-b
//
//	//a和b如何相加
//	//000000000000000000000011
//	//000000000000000001111111
//	//000000000000000010000010
//	//
//	char c = a + b;
//	//10000010-c
//	//111111111111111110000010-补码
//	//111111111111111110000001-反码
//	//100000000000000001111110-原码
//	printf("%d\n", c);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4-整型提升
//	printf("%u\n", sizeof(!c));//1
//	
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	/*int* pa = &a;
//	*pa = 0;*/
//	char* pc = &a;
//	*pc = 0;
//	 //指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
//	 //int*p;*p能够访问4个字节
//	 //char*p;*p能够访问1个字节
//	 //double*p;*p能够访问8个字节
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	return 0;
//	//指针类型决定了：指针走一步走多远（指针的步长）
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	//int* p=arr;//数组名-首元素地址
//	char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a;//局部变量不初始化，默认随机值
//	int * p;//局部的指针变量，就被初始化随机值
//	*p = 20;
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	//指针越界
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//   //当指针指向的范围超出数组arr的范围时，p就是野指针
//       *(p++)=i;
//	}
//	return 0;
//}

//#include<stdio.h>
//int* test()
//{
//	int a = 10;
//	return &a;//局部变量 函数一结束，内存立即返回给系统
//	//随返回地址，但来不及保存，因为函数已结束
//}
//int main()
//{
//	//指针指向的空间被释放
//	int *p=test();
//	*p = 20;
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	//int a = 10;
//	//int* pa = &a;//初始化
//	//int* p = NULL;//NULL-用来初始化指针，给指针赋值
//
//	int a = 10;
//	int *pa = &a;
//	*pa = 20;
//	//
//	pa = NULL;
//	*pa=10;
//	/*if (pa!= NULL)
//	{
//
//	}*/
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}*/
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p -= 2;
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);//指针减指针，得到的是中间元素的个数
//	return 0;
//}
//
//#include<stdio.h>
//my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//
//	//strlen-求字符串长度
//	//递归-模拟实现了strlen-计数器的方式1，递归的方式2；
//	//
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//
//
//	return 0;
//}
//#define N_VALUES 5
//#include<stdio.h>
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	for (vp = &values[N_VALUES - 1]; vp >= &values[0]; vp--)
//	{
//		*vp = 0;
//		printf("%f ", *vp);
//	}
//	
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	/*{
//		printf("%p  ======  %p\n", p + i, &arr[i]);
//	}*/
//	return 0;
//}
//二级指针
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int * pa = &a;
//	int* * ppa=&pa;//ppa就是二级指针
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//
//
//	//int*** pppa = &ppa;//pppa就是三级指针
//	return 0;
//}

//指针数组-数组
//数组指针-指针
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	/*int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;*/
//	//整型数组-存放整型
//	//字符数组-存放字符
//	//指针数组-存放指针
//	//int arr[10];
//	int* arr2[3] = {&a,&b,&c};//指针数组
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d === %p\n",*(arr2[i]) ,arr2[i]);
//	}
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//struct B
//{
//	char a;
//	short b;
//	double c;
//};
//
//struct stu
//{
//	//成员变量
//	struct B sb;//结构体中可以有结构体
//	char name[20];
//	int age;
//	char id[20];
//}s1,s2;//s1和s2是结构体变量，也是全局变量
//int main()
//{
//
//	struct stu s = { {'w',20,3.14},"张三",20,"20210909"};//对象
//	//结构体成员访问 . ->
//	printf("%c\n", s.sb.a);
//	printf("%s\n", s.id);
//
//	struct stu* ps=&s;
//	printf("%c\n", (*ps).sb.a);
//	printd("%c\n", ps->sb.a);//sb.a之所以用.是因为其不是指针而是结构体
//	return 0;
//}


//#include<stdio.h>
//struct B
//{
//	char a;
//	short b;
//	double c;
//};
//	
//struct stu
//{
//	//成员变量
//	struct B sb;//结构体中可以有结构体
//	char name[20];
//	int age;
//	char id[20];
//};
//void print1(struct stu t)
//{
//	printf("%c %d %lf %s %d %s\n", t.sb.a, t.sb.b, t.sb.c, t.name, t.age, t.id);
//
//}
//void print2(struct stu* ps)
//{
//	printf("%c %d %lf %s %d %s\n", ps->sb.a, ps->sb.b, ps->sb.c, ps->name, ps->age, ps->id);
//}
//int main()
//{
//	struct stu s = { {'w',20,3.14},"张三",20,"20210909" };
//	//写一个函数打印s的内容
//	print1(s);//传值调用
//	print2(&s);//传址调用
//	return 0;
//}

//#include<stdio.h>
//int Add(int x,int y )
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
////每一个函数调用都会在内存的栈区上开辟一块空间 参数传参-参数压栈
// 函数栈帧的创建和销毁
//int main()
//{
//	int a = 3;
//	int b = 4;
//	int c = 0;
//	c = Add(a, b);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
// 

//#include<stdio.h>
//void test2()
//{
//	printf("hehe\n");
//}
//void test1()
//{
//	test2();//调用堆栈
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	int j = 0;
//	for (j = 1; j <= n; j++)
//	{
//		int ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	
//	printf("%d ", sum);
//	return 0;
//}
 
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
// 		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}
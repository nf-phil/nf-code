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
//	//��Ա����
//	struct B sb;//�ṹ���п����нṹ��
//	char name[20];
//	int age;
//	char id[20];
//}s1,s2;//s1��s2�ǽṹ�������Ҳ��ȫ�ֱ���
//int main()
//{
//
//	struct stu s = { {'w',20,3.14},"����",20,"20210909"};//����
//	//�ṹ���Ա���� . ->
//	printf("%c\n", s.sb.a);
//	printf("%s\n", s.id);
//
//	struct stu* ps=&s;
//	printf("%c\n", (*ps).sb.a);
//	printd("%c\n", ps->sb.a);//sb.a֮������.����Ϊ�䲻��ָ����ǽṹ��
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
//	//��Ա����
//	struct B sb;//�ṹ���п����нṹ��
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
//	struct stu s = { {'w',20,3.14},"����",20,"20210909" };
//	//дһ��������ӡs������
//	print1(s);//��ֵ����
//	print2(&s);//��ַ����
//	return 0;
//}

//#include<stdio.h>
//int Add(int x,int y )
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
////ÿһ���������ö������ڴ��ջ���Ͽ���һ��ռ� ��������-����ѹջ
// ����ջ֡�Ĵ���������
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
//	test2();//���ö�ջ
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
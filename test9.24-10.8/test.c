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
	//const-������
	//const int n = 10;//n�Ǳ������������г����ԣ���������˵n�ǳ�����
	//int arr[n] = { 0 };

	//2.const-���εĳ�����
	/*const int num = 4;
	printf("%d\n", num);
	num = 8;
	printf("%d\n", num);*/

	//3��100,3.14-���泣��

//	return 0;
//}

//#include<stdio.h>

//4.ö�ٳ���
//ö��-һһ�о�
// 
//�Ա��У�Ů������
//��ԭɫ���졢�ơ���
//����:1��2��3��4��5��6��7

//ö�ٹؼ���-enum

//enum Sex
//{
//
//	MALE,
//	FEMALE,
//	SECRET
//};
////MALE,FEMALE,SECRET-ö�ٳ���
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


//3.#define-����ı�ʶ������
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
//	//\32--32��2��8��������
//	//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
//	//32-->10����26-->��ΪASCII��ֵ������ַ�
//	//\xdd��ʾ����ʮ���������֣���:\xdd
//	printf("%c\n", '\x61');
//	return 0;
//
//
//}
//


//int main()
//{
//	///*printf("c:\\test\\32\\test.c");*///\\ ���ڱ�ʾһ����б�ܣ���ֹ��������Ϊһ��ת�����з�
//	////\t-ˮƽ�Ʊ��
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
//	char arr2[] = { 'a','b','c','\0'};//15(���ֵ��-abc������ֱ������\0
//	printf("%d\n", strlen(arr1));//strlen-string length-�����ַ������ȵ�
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//
//}


//int main()
//{
//	//�����ڼ�����ϴ洢��ʱ�򣬴洢����2����
//	//#av$
//	//a-97
//	//A-65
//	//....
//	//ASCII ����
//	//ASCII ��ֵ
//	char arr1[]="abc";//����
//	//"abc"--'a','b','c','\0'   --'\0'�ַ����Ľ�����־
//	char arr2[] = { 'a','b','c' ,0};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//
//}


//�ַ�������
//int main()
//{
//	"abcde"; "hello bit"; ""���ַ���
//    return 0��
//}

//#include<stdio.h>
//
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��?(1/0):");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������");
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int coding = 0;
//	printf("���ȥ�ô����𣿣�ѡ��1 or 0����>");
//	scanf("%d", &coding);
//	if(coding == 1)
//	{
//		printf("��֣�����к�offer\n");
//	}
//	else
//	{
//		printf("�������ؼ�������\n");
//	}
//		return 0;
//
//}
//#include <stdio.h>
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//
//	while (line < 20000)
//	{
//		printf("��һ�д���:%d\n",line);
//	    line++;
//	}
//	if(line>=20000)
//	printf("��offer\n");
//
//	return 0;
//
//}
//#include<stdio.h>
//int Add(int x, int y) //Add- ������,x��y-��������,int-��������
//{
//	int z = x + y;//���������Ǻ�����
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("����������������>");
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
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//����һ�����10���������ֵ����� �±���0-9
//	int i = 0;
//	while (i<10)
//
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//
//	arr[�±�]
//	char ch[20]:
//	float arr[5]��
//	printf("%d\n", arr[4]);//���±�ķ�ʽ����Ԫ��
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	//�ƣ�2���ƣ�λ������
//	//<<����
//	//>>����
//	int a = 1;
//	//����1ռ4���ֽ�=32bitλ
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
//	//(2����)λ����
//	//&��λ��
//	//|��λ��
//	//^��λ���
//	int a = 3;
//	int b = 5;             
//	int c = a^b;//���Ǵη�-�����
//	//���ļ�����ɣ�
//	// 	   ��Ӧ�Ķ�����λ��ͬ����Ϊ0
//	// 	   ��Ӧ�Ķ�����λ��ͬ����Ϊ1
//	//011 (���      011 ����       011  ���룩
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
//	int arr[10] = { 0 };//��10������Ԫ�ص����飩
//	//10*sizeof(int)=40
//	int sz = 0;
//	printf("%d\n", sizeof(arr));
//	/*���������Ԫ�ظ���
//    ����=����Ԫ�صĴ�С/ÿ��Ԫ�صĴ�С*/
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("sz=%d\n", sz);
//
//
//
//
//
//	//int a = 10;
//	////sizeof ������Ǳ���/������ռ�ռ�Ĵ�С����λ���ֽ�
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof a);
//	//printf("%d\n", sizeof int);//int ����ʡ�ԣ���
//	//
//	return 0;
//
//}

//{
//	//��Ŀ������
//	//˫Ŀ������
//	//��Ŀ������
//
//	//int a = 10;
//	//int b = 20;
//	//a + b;//+˫Ŀ������
//	//c��������� 0-�� 1-��
//	//int a = 10;
//	//printf("%d\n", a);
//	//printf("%d\n", !a);//���߼������� �ٱ��� ����
//
//
//	//int a = 10;
//	//a = 20;//=��ֵ  ==�ж����
//	//a = a + 10;//a����10��ֵ��a
//	//a += 10;//��a����10
//	//a = a - 10;
//	//a -= 10;
//	//a = a & 2;
//	//a &= 2;
//	//���ϸ�ֵ��
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
//	printf("�ϴ�ֵ=%d\n", max);
//
//	return 0;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	if (num1 > num2)
//		printf("�ϴ�ֵ=%d\n", num1);
//	else
//		printf("�ϴ�ֵ=%d\n", num2);
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
//	//int b = a++;//����++,��ʹ�ã���++
//	//int b = ++a;//ǰ��++����++����ʹ��
//	//int b = a--;//����--����ʹ�ã���--
//	//int b = --a;//ǰ��--����--����ʹ��
//	printf("a=%d b=%d\n", a, b);//11 10  11 11 9 10 9 9
//	return 0;
//
//}

//int main()
//{
//	int a = 0;//1һ���ֽڣ�32bitλ
//	int b = ~a;//b���з��ŵ�����
//	//~ ���� ��(2���ƣ�λȡ��
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//ԭ�롢���롢����
//	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//	//ԭ�� ����λ���䣬����λ��λȡ���õ����� ����+1�õ�����
//	//11111111111111111111111111111111-����
//	//11111111111111111111111111111110-����
//	//10000000000000000000000000000001-ԭ��  ��һλΪ����λ 1Ϊ�� 0Ϊ+
//
//	printf("%d\n", b);//ʹ�õģ���ӡ�����������ԭ��
//	return 0;
//
//}



//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6 };
//	printf("%d\n", sizeof(a));//4
//	printf("%d\n", sizeof(int));//4
//	//printf("%d\n", sizeof int);����
//	
//	printf("%d\n", sizeof(arr));//���������С����λ�ֽ�
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
//	int a = 10;//4���ֽ�
//	int*p=&a;//ȡ��ַ
//	*p=20;//*-�����ò�����
//	printf("a=%d\n", a);
//	/*printf("%p\n", &a);
//	printf("%p\n",p);*/
//	//��һ�ֱ�����������ŵ�ַ��-ָ�����
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

//#define �����ʶ������
//#define Max 100
//#define ���Զ����-������

//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
////��Ķ��巽ʽ
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	//int a = Max;
//
//	int a = 10;
//	int b = 20;
//	//����
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	//��ķ�ʽ
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
//	//extern -�����ⲿ���ŵ�
//	extern int g_val;
//	printf("g_val=%d\n",g_val);
//
//	return 0;
//}
//static ���ξֲ����� �ֲ��������������ڱ䳤 
//static ����ȫ�ֱ��� �ı��˱����������� 
//       �þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�
//       ����ԭ�ļ���û����ʹ����
// static���κ����ı��˺�������������
// �ⲿ��������-> �ڲ���������

//void test()
//{
//	static int a = 1;//static --- a��һ����̬�ľֲ�����
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
//	//typedef-���Ͷ���-�����ض���
//	typedef unsigned int u_int;
//	unsigned int num = 20;
//	u_int num2 = 20;
//	
//	return 0;
//}

//{
//	register int a = 10;//�����a����ɼĴ�������
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
//	arr[4]; [] - �±����ò�����*/
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);//����-�������ò�����
//
//	printf("%d\n", sum);
//	return 0;
//}
//{
//	//��-��0  ��-0  &&�߼���  ||�߼���
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


//���Ӷ���-�ṹ��-���Ǵ��������һ������
//#include<string.h>
//struct Book
//{
//	char name[20];//c���Գ������
//	short price;//55
//};
//#include<stdio.h>
//int main()
//{
//	//���ýṹ������-����һ�������͵Ľṹ�����
//	struct Book b1 = {"C���Գ������",55};
//
//	strcpy(b1.name,"C++"); //strcpy--string copy-�ַ�������-�⺯��-string.h
//
//	printf("������%s\n", b1.name);
//	//struct Book* pb = &b1;
//	//����pb��ӡ���ǵ������ͼ۸�
//	//.  �ṹ�����.��Ա
//	//-> �ṹ��ָ��->��Ա
//
////	printf("%s\n", pb->name);
////	printf("%d\n", pb->price);
////
////	/*printf("������%s\n", (*pb).name);
////	printf("�۸�%d\n", (*pb).price);*/
////
////	//printf("������%hS\n", b1.name);
////	//printf("�۸�%dԪ\n", b1.price);
////	//b1.price = 15;
////	//printf("�޸ĺ�ļ۸�%d\n", b1.price);
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
//		printf("δ����\n");
//	{
//		if (age >= 18 && age < 28)
//			printf("����\n");
//		else if (age >= 28 && age < 50)
//			printf("׳��\n");
//		else if (age >= 50 && age < 90)
//			printf("����\n");
//		else
//			printf("�ϲ���");
//	}
	//else if (age>=18 && age < 28)
	//	printf("����\n");
	//else if (age>=28 && age < 50)
	//	printf("׳��\n");
	//else if (age>=50 && age < 90)
	//	printf("����\n");
	//else
	//	printf("�ϲ���");


	/*if (age < 18)
		printf("δ����\n");
	else
		printf("����\n");*/

	//if (age < 18)
	//printf("δ����\n");
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
//	switch (day)//switch���ʽ����������
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}

	/*if (1 == day)
		printf("����һ\n");
	else if (2 == day)
		printf("���ڶ�\n");
	else if (3 == day)
		printf("������\n");
	else if (4 == day)
		printf("������");*/
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
//		switch (n)//switch����Ƕ��ʹ��
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
//	//EOF-end pf file->-1�ļ�������־
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
//	printf("���������룺>");
//	scanf("%s", password);//�������룬������password������
////��������ʣһ��'\n',  ��ȡһ��'\n'
//	while ((ch = getchar()) != '\n')//Y/N
//	{
//		;
//	}
//	printf("��ȷ��(Y:N):>");
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
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
////��ʼ�� �ж� ����
//	for (i = 1; i <= 10; i++)
//
//	{
//		if (i == 5)
//			//break;//����ѭ������ֹ����
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
//		if (i = 5)//������forѭ�����ڸı�ѭ����������ֹforѭ��ʧȥ���ơ�
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
//	//10��ѭ��
//	//10�δ�ӡ
//	//10��Ԫ��
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
//	//дһ�����룬��arr���飨����ģ����ҵ�7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
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
//			left = mid + 1;          //���ַ�����ĳ����
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//		if (left > right)
//			printf("�Ҳ���\n");
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
//		printf("�ҵ��ˣ��±���%d\n", mid);
//	}*/
//
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>//����strlen��ͷ�ļ�
//#include<Windows.h>//��Ϣ����Sleep��ͷ�ļ�
//#include<stdlib.h>//ϵͳ�����ͷ�ļ�
//int main()
//{
//	//welocom to bit !!!!!!
//	//#####################
//	//w###################!
//	//wl#################!!
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr[0]) - 2;//��������Ϊ�ַ���������\n
//	int right = strlen(arr1)-1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣһ��
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļ
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
//		printf("����������:>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)//==�ȺŲ����ж������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	
//		if (i == 3)
//			printf("��������������˳�����\n");
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
//	//�㷨ʵ��  a�з����ֵ b��֮ c�з����ֵ
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
//	scanf("%d%d", &m, &n); //������������С��Լ�� ��շת�������
//	while (r=m%n)
//	{
//		//r = m%n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//#include<stdio.h> //��ӡ1000-2000�������
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
		//�ж�year�Ƿ�Ϊ����
		//1.�ܱ�4�������Ҳ��ܱ�100������������
	    //2.�ܱ�400������������
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
//		//�ж�i�Ƿ�Ϊ����-ֻ�ܱ�1�����Լ���������
//        //�����жϵĹ���
//		//1.�Գ���
//		//����13������2->12��i-1��
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
//		for (j = 2; j <= sqrt(i); j++)     //��������n�־���
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
//����1/1-1/2+1/3-����������-1/100�ĺ�
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

//��������Ϸ
//1.���Ի�����һ�������
//2.������
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("******��������Ϸ*******\n");
//	printf("*** 1.paly  0.exit ***\n");
//	printf("**********************\n");
//}
//void game()
//{
//	int guess = 0;
//	//ʱ���(��ǰ����ʱ��-�������ʼʱ��1970.1.1.0:0:0=��xxx�룩
//	int ret = rand() % 100 + 1;//���������1-100 rand������Χ��0-32767
//	//printf("%d\n",ret);
//	//2.������
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���!\n");
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
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
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
//	//system()-ִ��ϵͳ�����
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("��ע�⣬��ĵ�����һ�����ڹػ���������룺��������ȡ���ػ�\n������>��");
//		scanf("%s", input);
//		if(strcmp(input,"������")==0)
//		{
//		  system("shutdown -a");
//		  break;
//		}
//	}
////again:
////	printf("��ע�⣬��ĵ�����һ�����ڹػ���������룺��������ȡ���ػ�\n������>��");
////	scanf("%s", input);
////	if(strcmp(input,"������")==0)
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
// �����������
// 
// ��ʵ�δ����βε�ʱ��
// �β���ʵ��ʵ�ε�һ����ʱ����
// ���βε��޸��ǲ���ı�ʵ�ε�
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
////����������1��������������0
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
//	//��ӡ100-200�������
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж��Ƿ�Ϊ����
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
//		//�ж�year�Ƿ�Ϊ����
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
//                //������arr��һ��ָ��
//int binary_search(int arr[], int k, int sz)
//{
//	//�㷨ʵ��
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
//	//���ֲ���
//	//��һ��������������Ҿ����ĳ����
//	//����ҵ��˷��أ���������±꣬�Ҳ����ķ���-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d", ret);
//	}
//	return 0;
//}
//#include<stdio.h>
//void Add(int* p)
//{
//	(*p)++;//*p++ ++�����ȼ���һЩ��������p��������*p������壬�������ţ�*p��
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

//����Ƕ��
//#include<stdio.h>
//void new_line()
//{
//	printf("��ã���ƴ�\n");
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
//��ʽ����
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

//��������
//#include<stdio.h>
//
//int Add(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	//��������
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
////��������
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//�ݹ�
//#include<stdio.h>
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//�ݹ飺����1234 ���1 2 3 4
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
////�ݹ鷽��
////�Ѵ��»�С
//	//my_strlen("bit")
//	//1+my_strlen("it")
//	// 1+1+my_strlen("t"��
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
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
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
//	//��n�Ľ׳�
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);//ѭ���ķ�ʽ
//	ret = Fac2(n);
//	printf("%d\n", ret);
//
//	return 0;
//}

//쳲���������
//1 1 2 3 5 8 13 21 34 55
#include<stdio.h>
//int count = 0;
//int Fib(int n)
//{
//	if (n == 38)//���Ե�����쳲��������ļ������
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
//	//TDD-������������
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	/*printf("count=%d\n", count);*/
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	//����һ������-�������-10��
//	int arr[10] = { 1,2,3 };//����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	char arr2[5] = { 'a','b' };
//	char arr3[5] = "ab" ;
//	char arr4[] = "abcdef" ;
//	printf("%d\n",sizeof(arr4));
//	//sizeof-����arr4��ռ�ռ�Ĵ�С
//	//�߸�Ԫ��-char  7*1=7
//
//	printf("%d\n", strlen(arr4));
//	//strlen-���ַ����ĳ���-��\0��֮ǰ���ַ�����
//	//��a��b��c��d��e��f��\0��
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
//	//ȷ��ð����������
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int flag = 1;//������һ������������Ѿ�����
//		//ÿһ��ð������
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//���������������ʵ����ȫ����
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
//	//��arr���������ų�����
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


//���������� ��������������
//#include<stdio.h>
//#include<limits.h>
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("����ǰ��a=%d,b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	//^��(�����ƣ�λ��� ��ͬΪ0 ����Ϊ1
//	printf("������a=%d,b=%d\n", a, b);
//	/*INT_MAX; 2147483647*/
//	//printf("����ǰ��a=%d,b=%d\n", a, b);
//	////�������
//	////int -4�ֽ�-32bitλ-���ֵ
//	//a = a + b;//a-�� b-����ԭ����b
//	//b=a - b;//b�õ�����ԭ����a
//	//a=a - b;//a�õ�����ԭ����b
//	//printf("������a=%d,b=%d\n", a, b);
//	
//	return 0;
//}
// 
//�ҳ�Ƶ�ʵ͵���
// (�������)
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,5,7,1,2,3,4 };
//	//�ҳ�����
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		//ͳ��arr[i]��arr�����г����˼��Σ�
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
//			printf("����:%d\n", arr[i]);
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
//	printf("������%d\n", ret);
//	return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>//system��ͷ�ļ�
//#include<string.h>//strcmp��ͷ�ļ�
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");//ִ�йػ�����
//again:
//	printf("��ע�⣬��ĵ��Խ���һ�����ڹػ������������������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input,"������") == 0)
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
//	//ͳ��num�Ĳ������м���1
//	while (num)
//	{
//		if (num%2==1)//ȱ�㣺��������
//		{
//			count++;
//			num=num/2;
//		}
//	}
//	printf("��������1�ĸ���=%d\n", count);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//��λ���������1�еĸ���
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
//	a >>= 1;  //���ϸ�ֵ��
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
//	////~���������ƣ�λȡ��
//	////00000000000000000000000000000000
//	////11111111111111111111111111111111-����
//	////11111111111111111111111111111110-����
//	////10000000000000000000000000000001-ԭ��
//	//printf("%d\n", ~a);
//
//
//	return 0;
//}
//#include<stdio.h>
//
//void test1(int arr[])//���ĵ�ַ 4��8�ֽ� 
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
//	int a[10] = { 0 };//����������Ĳ�����Ϊ ������+�����±�                                         
//	a[4] = 10;
//	return 0; 
//}
//#include<stdio.h>
//������һ���ṹ������-struct Stu
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	//ʹ��struct Stu ������ʹ�����һ��ѧ������s1������ʼ��
//	struct Stu s1 = {"����",20,"20210909"};
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
//	//a��b������
//	//000000000000000000000011
//	//000000000000000001111111
//	//000000000000000010000010
//	//
//	char c = a + b;
//	//10000010-c
//	//111111111111111110000010-����
//	//111111111111111110000001-����
//	//100000000000000001111110-ԭ��
//	printf("%d\n", c);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));//1
//	printf("%u\n", sizeof(+c));//4-��������
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
//	 //ָ�����;�����ָ����н����ò�����ʱ���ܹ����ʿռ�Ĵ�С
//	 //int*p;*p�ܹ�����4���ֽ�
//	 //char*p;*p�ܹ�����1���ֽ�
//	 //double*p;*p�ܹ�����8���ֽ�
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
//	//ָ�����;����ˣ�ָ����һ���߶�Զ��ָ��Ĳ�����
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	//int* p=arr;//������-��Ԫ�ص�ַ
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
//	int a;//�ֲ���������ʼ����Ĭ�����ֵ
//	int * p;//�ֲ���ָ��������ͱ���ʼ�����ֵ
//	*p = 20;
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	//ָ��Խ��
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//   //��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
//       *(p++)=i;
//	}
//	return 0;
//}

//#include<stdio.h>
//int* test()
//{
//	int a = 10;
//	return &a;//�ֲ����� ����һ�������ڴ��������ظ�ϵͳ
//	//�淵�ص�ַ�������������棬��Ϊ�����ѽ���
//}
//int main()
//{
//	//ָ��ָ��Ŀռ䱻�ͷ�
//	int *p=test();
//	*p = 20;
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	//int a = 10;
//	//int* pa = &a;//��ʼ��
//	//int* p = NULL;//NULL-������ʼ��ָ�룬��ָ�븳ֵ
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
//	printf("%d\n", &arr[9] - &arr[0]);//ָ���ָ�룬�õ������м�Ԫ�صĸ���
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
//	//strlen-���ַ�������
//	//�ݹ�-ģ��ʵ����strlen-�������ķ�ʽ1���ݹ�ķ�ʽ2��
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
//����ָ��
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int * pa = &a;
//	int* * ppa=&pa;//ppa���Ƕ���ָ��
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//
//
//	//int*** pppa = &ppa;//pppa��������ָ��
//	return 0;
//}

//ָ������-����
//����ָ��-ָ��
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	/*int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;*/
//	//��������-�������
//	//�ַ�����-����ַ�
//	//ָ������-���ָ��
//	//int arr[10];
//	int* arr2[3] = {&a,&b,&c};//ָ������
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d === %p\n",*(arr2[i]) ,arr2[i]);
//	}
//	return 0;
//}
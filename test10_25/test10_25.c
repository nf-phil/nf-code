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
//	int (*parr)[10] = &arr;//ȡ������ĵ�ַ
//	//parr ��ָ�������ָ��-��ŵ�������ĵ�ַ
//
//	//����ָ��-��ź�����ַ��ָ��
//	//&������-ȡ���ľ��Ǻ����ĵ�ַ
//    //pf����һ������ָ�����
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
//	int ret=(*pf)(3, 5);// 1 //*��ʵ�����壬ֻ�Ǳ������
//	int ret = pf(3, 5);//2
//	int ret = Add(3, 5);//3
//	printf("%d\n", ret);
//	return 0;
//}

//int main()
//{
//	//����1
//	(*(void(*)())0)();
//	//����0��ַ���ĺ���-�ú����޲Σ�����������void
//	// 	   1.void(*)()-����ָ������
//	// 	   2.��void(*)()��0-��0����ǿ������ת����������Ϊһ��������ַ
//	// 	   3.*(void(*)()��0-��0��ַ�����˽����ò���
//	// 	   4.(*(void(*)()��0)()-����0��ַ���ĺ���
//	
//	//��c�����ȱ�ݡ�
//	//����2
//	void (*signal(int, void(*)(int)))(int);
//	//typedef-�����ͽ����ض���
//
//	typedef void(*pfun_t)(int) ;//��void��*)��int���ĺ���ָ������������Ϊpfun_t
//	//typedef unsigned int uint;
//
//	void(*)(int) signal(int, void(*)(int));//����д������⣬���﷨������
//	pfun_t signal(int, void(*)(int));
//	
//	//1.signal��()��ϣ�˵��signal�Ǻ�����
//	//2.signal�����ĵ�һ��������������int���ڶ��������������Ǻ���ָ��
//	// �ú���ָ�룬ָ��һ������Ϊint������������void�ĺ���
//	//3.signal�����ķ�������Ҳ��һ��ָ��
//	//�ú���ָ�룬ָ��һ������Ϊint������������void�ĺ��� 
//	//signal��һ������������
//	//
//	return 0;
//}
//


//����ָ������-��ź���ָ�������
// 
// ����ָ�� int*
// ����ָ������ int* arr[5];
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
//	int (*pfArr[2])(int, int) = { Add,Sub };//pfArr���Ǻ���ָ������
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
//	//������-�������ͱ����ļӡ������ˡ���
//	do
//	{
//		menu();
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			printf("������������������>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("ret= %d\n", ret);
//			break;
//		case 2:
//			printf("������������������>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("ret= %d\n", ret);
//			break;
//		case 3:
//			printf("������������������>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("ret= %d\n", ret);
//			break;
//		case 4:
//			printf("������������������>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("ret= %d\n", ret);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
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
//	������-�������ͱ����ļӡ������ˡ���
//	do
//	{
//		menu();
//		pfArr���Ǻ���ָ������
//		ת�Ʊ�-��C��ָ�롷
//		int(*pfArr[5])(int, int) = { NULL,Add,Sub,Mul,Div };
//		int x = 0;
//		int y = 0;
//		int ret = 0;
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		if (1 <= input && input <= 4)
//		{
//			printf("������������������>");
//			scanf("%d %d", &x, &y);
//			ret = (*pfArr[input])(x, y);
//			printf("ret=%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�����\n");
//			break;
//		}
//		else
//		{
//			printf("ѡ�����\n");
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
//	printf("����������������>:");
//	scanf("%d %d", &x, &y);
//	return pf(x, y);
//}
//int main()
//{
//	int input = 0;
//	//������-�������ͱ����ļӡ������ˡ���
//	do
//	{
//		menu();
//		
//		int ret = 0;
//		printf("��ѡ��>");
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
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//		
//	} while (input);
//	return 0;
//}//�ص���������

#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//a=6 c=6
//	b = ++c, c++, ++a, a++;//c=8 a=8 b=7
//	b += a++ + c;//b=23 a=9 c=8
//	printf("a=%d b=%d c=%d \n", a, b, c);//9 23 8
//
//	retuUrn 0;
//}

//������������Ʋ�����1�ĸ���
//15-00001111
//15%2=1
//15/2=7-00000111
//7%2=1
//7/2=3--00000011
//3%2=1--00000001
//3/2=1--00000001
//1%2=1--00000001
//1/2=0--00000000
#include<stdio.h>   
//int NumberOf1(int n) //����1
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;      //���ڸ������е� ������int n ��Ϊ unsigned int n
//		}
//		n /= 2;
//	}
//	return count;
//}

//int NumberOf1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n & 1) == 1)      //����2
//		{
//			count++;
//		}
//	}
//	return count;
//}

//int NumberOf1(int n)
//{
//	int i = 0;
//	int count = 0;
//	while (n)               //����3
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 15;
//	int ret = NumberOf1(n);
//	printf("ret =%d\n", ret);
//	return 0;
//}

//����int��32λ�������Ķ����Ʊ��ʽ�У��ж���λ��ͬ
//
//int NumberOf1(int ret)
//{
//	int count = 0;
//	int i = 0;
//	while (ret)
//	{
//		ret = ret & (ret - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d %d", &m, &n);
//
// 	int ret = m ^ n;//��ͬΪ0����Ϊ1   ����2
//	//ͳ��һ��ret�Ķ��������м���1����˵��m��n���м���λ��ͬ
//	count = NumberOf1(ret); 
//zzzzzzzxZXZXZzzxxxxxZZZZXXXXXXXXXXXxZXxxxxxXxxxxxxzzzzzzzzzzzzzzzzzzzZZZZZZZZZZZZZZZZZXXXX
//	/*for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1)!=((n >> i) & 1))     ����1
//		{
//			count++;
//		}
//	}*/
//	
//	printf("%d\n", count);
//	return 0;
//}

//��ӡ����������������λ��ż��λ
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//��ȡn�Ķ����Ƶ�����λ��ż��λ
//	//00000000000000000000000000001010
//	int i = 0;
//	//��ӡż��λ
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	//��ӡ����λ
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	return 0;
//}

//
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
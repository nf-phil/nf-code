#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��ӡ����
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡһ��
//		//�ո�
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��
//	for(i=0;i<line-1;i++)
//	{
//		//��ӡһ��
//		//�ո�
//		int j = 0;
//		for (j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//c����ˮ��1ƿˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ�����ʵ�֣�
//int main()
//{
//
//	int money = 0;
//	int total = 0;
//	scanf("%d", &money);
//	if(money>0)
//	total = 2 * money - 1;
//	
//	//int total = money;
//	//int empty = money;
//	////��ʼ�û�
//	//while (empty >= 2)
//	//{
//	//	total += empty / 2;
//	//	empty = empty / 2 + empty % 2;
//	//}
//	printf("%d\n", total);
//	return 0;
//}

//����һ���������飬ʵ��һ������
//�������������е����ֵ�˳��ʹ��������ǰ�벿�֣�ż���ں�벿��
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//��ǰ������һ��ż��
//		while (left<right && arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		//�Ӻ���ǰ��һ������
//		while (left<right && arr[right] % 2 == 0)//Ҫע����������ʱ������Խ����ʣ�������Ҫ����left<right����
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = 0;
//			tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//	
//}
//
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//	return 0;
//}


#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n = 9;//
//	float* pFloat = (float*)&n;
//	printf("n��ֵΪ��%d\n", n);//9
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);//0.000000
//
//	*pFloat = 9.0;
//	printf("num��ֵΪ��%d\n", n);//1091567616
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);//9.000000
//	return 0;
//}
// 
//{
//	float f= 5.5f;
//	//101.1->1.011*2^2
//	//S=0 M=1.011 E=2
//	//S=0 M=011 E=2+127=129
//	// 
//	//0100 0000 1011 0000 0000 0000 0000 0000
//	//40 b0 00 00
//}

//int main()
//{
////�������ǰѡ�hello bit������ַ��������ַ��ĵ�ַ�洢����ps��
//	char* ps = "hello bit";
//	char arr[] = "hello bit";
//	printf("%c\n", *ps);
//
//	printf("%s\n", ps);
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello bit";
//	char str2[] = "hello bit";
//	const char* str3 = "hello bit";//�����ַ��������ݸı䣡
//	const char* str4 = "hello bit";
//
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");//arr1 and arr2 are not same
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");//arr3 and arr4 are same
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}

//int main()
//{
//
//	return 0;
//}

//int main()
//{
//	//ָ������
//	//����-�����д�ŵ���ָ�루��ַ��
//	//int* arr[3];//�������ָ�������
//	int a[5] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//
//	int* arr[3] = { a,b,c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", *(arr[i] + j));
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


#define _CRT_SECURE_NO_WARNINGS 1
//strcpy-�ַ�������
//ģ��⺯��strcpy��ʵ��
#include<stdio.h>
#include<string.h>
#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//		//dest++;
//		//src++;
//	}
//	*dest = *src;
//}
//void my_strcpy(char* dest, const char* src)
//{
//	
//	assert(src!= NULL);//����
//	assert(dest!= NULL);//����
//	while (*dest++ = *src++)//�ȿ�����\0����ʹ��ѭ��ֹͣ��
//	{
//		;
//	}
//}
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxx";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);
//	//strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//
//	const int num = 10;//const ���α�������������ͱ���Ϊ�����������ܱ��޸ģ������ʻ��Ǳ���
//	//num=20;//err
//
//	int n = 100;
//	int* const p = &num;
//	//const ����ָ�������ʱ��
//	//const �������*���ұߣ����ε�ָ�����p����ʾָ��������ܱ��ı䣬
//	//      ����ָ������ݣ����Ա��ı�
//	
//	//const int* p = &num;
//	//const ����ָ�������ʱ��
//	//const �������*����ߣ����ε���*p����ʾָ��ָ������ݣ��ǲ���ͨ��ָ�����ı��
//	//      ����ָ����������ǿ��Ըı��
//	*p = 20;
//	p = &n;
//	printf("%d\n", num);
//
//	return 0;
//}

//ģ��ʵ�ֿ⺯��strlen��ʵ��
//strlen�����ַ������ȵ�
//my_strlen
//1.const
//2.assert

//��׳��
//³����
//size_t-unsigned int �޷�������
size_t my_strlen(const char* str)
{
	//assert(str != NULL);
	assert(str);
	size_t count = 0;
	while (*str++ != '\0')
	{
	  count++;
	}
	return count;
}
int main()
{
	char arr[20] = "abcdefg";

	int len=my_strlen(arr);

	printf("%d\n", len);

	return 0;
}
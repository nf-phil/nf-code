#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����������1��������������0
int is_prime(int n)
{
	int j = 0;
	for (j = 2; j < n; j++)
	{
		if (n % j == 0)
			return 0;
	}
	return 1;
}
int main()
{
	//��ӡ100-200�������
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		//�ж��Ƿ�Ϊ����
		if (is_prime(i) == 1)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount=%d ", count);
	return 0;
}

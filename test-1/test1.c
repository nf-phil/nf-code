#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		//�ж�i�Ƿ�Ϊ����-ֻ�ܱ�1�����Լ���������
        //�����жϵĹ���
		//1.�Գ���
		//����13������2->12��i-1��
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j == i)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\ncount=%d", count);
	return 0;
}
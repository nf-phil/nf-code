#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Fac1(int n)
{

	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}
int Fac2(int n)
{
	if (n > 1)
	{
		return n * Fac2(n - 1);
	}
	return 1;
}
int main()
{
	//��n�Ľ׳�
	int n = 0;
	int ret = 0;
	scanf("%d", &n);//ѭ���ķ�ʽ
	ret = Fac2(n);
	printf("%d\n", ret);

	return 0;
}
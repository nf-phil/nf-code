#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{

	char input[20] = { 0 };
	//shutdown-s-t 60
	//system()-ִ��ϵͳ�����
	system("shutdown -s -t 60");
	while (1)
	{
		printf("��ע�⣬��ĵ�����һ�����ڹػ���������룺����������ȡ���ػ�\n������>��");
		scanf("%s", input);
		if (strcmp(input, "������") == 0)
		{
			system("shutdown -a");
			break;
		}
	}
	//again:
	//	printf("��ע�⣬��ĵ�����һ�����ڹػ���������룺����������ȡ���ػ�\n������>��");
	//	scanf("%s", input);
	//	if(strcmp(input,"������")==0)
	//	{
	//		system("shutdown -a");
	//	}
	//	else
	//	{
	//		goto again;
	//	}
	return 0;
}
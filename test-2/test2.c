#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i * j);//%-2d ����� ������0��λ
//		}
//		printf("\n");
//	}
//		return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz-1;
//	int left = 0;
//	while(left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid+ 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d", mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("�Ҳ���");
//		}
//	}
//	return 0;
//}

//��������Ϸ
//1.���Ի�����һ�������
//2.������
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("******��������Ϸ*******\n");
	printf("*** 1.paly  0.exit ***\n");
	printf("**********************\n");
}
void game()
{
	int guess = 0;
	//ʱ���(��ǰ����ʱ��-�������ʼʱ��1970.1.1.0:0:0=��xxx�룩
	int ret = rand()%100+1;//���������1-100 rand������Χ��0-32767
	//printf("%d\n",ret);
	//2.������
	while(1)
	{
		printf("�������:>");
		scanf_s("%d", &guess);
		if(guess>ret)
		{
			printf("�´���\n");
		}
		else if(guess<ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while(input);

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<assert.h>
//int i;//i��ȫ�ֱ�����δ��ʼ����Ĭ��Ϊ0
//int main()
//{
//	i--;//-1
//	//sizeof���������������Ľ����������unsigned int
//	if (i > sizeof(i))//-1��4�Ƚ�ʱ���Ὣ-1����ת����unsigned int
//	{
//		printf(">\n");//>
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//��sn=a+aa+aaa+aaaa+aaaaaa��ǰ����֮��
//���磺2+22+222+2222+22222
//int main()
//{
//	//��a���ǰn��֮��-���������
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		//���һ��
//		ret = ret * 10 + a;
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}


//дһ��������ӡarr��������ݣ���ʹ��������±꣬ʹ��ָ�롣
//arr��һ������һά����

//void print(int* parr)
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(parr + i));
//	}
//}
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	print(arr);
//
//	return 0;
//}
//


//���0-100000֮������С�ˮ�ɻ����������
//"ˮ�ɻ���"��ָһ��nλ�������λ���ֵ�λ��n�η�֮��ȷ�õ��ڸ�������
//���� 153=1^3+5^3+3^3����153�Ǵ�һ����ˮ�ɻ�������
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//�ж�i�Ƿ�Ϊ������
//		//1.����i��λ��-n
//		int n = 1;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp= tmp/ 10;
//		}
//		//2.����i��ÿһλ��λ��n�η�֮��
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//		sum+=pow(tmp % 10,n);
//		tmp = tmp / 10;
//		}
//		//3.�ж�
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//		
//
//	}
//
//	return 0;
//}

//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3));//6 12
//
//	return 0;
//}

//struct stu {
//	int num;
//	char name[10];
//	int age;
//};
//
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);
//}
//
//int main()
//{
//	struct stu students[3] = { {9801,"zhang",20},{9802,"wang",19},{9803,"zhao",18} };
//	fun(students + 1);//wang
//	return 0;
//}

//дһ����������������һ���ַ���������

void reverse(char* str)
{
	assert(str != NULL);

	int len = strlen(str);
	char* left = str;
	char* right = str + len - 1;
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
	
}

int main()
{
	char arr[] = "abcdef";
	reverse(arr);
	printf("%s\n", arr);
	return 0;
}
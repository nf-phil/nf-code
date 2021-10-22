#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<assert.h>
//int i;//i是全局变量，未初始化，默认为0
//int main()
//{
//	i--;//-1
//	//sizeof这个操作符，算出的结果的类型是unsigned int
//	if (i > sizeof(i))//-1与4比较时，会将-1算术转换成unsigned int
//	{
//		printf(">\n");//>
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//求sn=a+aa+aaa+aaaa+aaaaaa的前五项之和
//例如：2+22+222+2222+22222
//int main()
//{
//	//由a组成前n项之和-不考虑溢出
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		//算出一项
//		ret = ret * 10 + a;
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}


//写一个函数打印arr数组的内容，不使用数组的下标，使用指针。
//arr是一个整型一维数组

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


//求出0-100000之间的所有“水仙花”并输出。
//"水仙花数"是指一个n位数，其各位数字的位数n次方之和确好等于该数本身
//例如 153=1^3+5^3+3^3，则153是打一个“水仙花数”。
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//判断i是否为自幂数
//		//1.计算i的位数-n
//		int n = 1;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp= tmp/ 10;
//		}
//		//2.计算i的每一位的位数n次方之和
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//		sum+=pow(tmp % 10,n);
//		tmp = tmp / 10;
//		}
//		//3.判断
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

//写一个函数，可以逆序一个字符串的内容

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
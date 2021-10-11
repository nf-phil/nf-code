#define _CRT_SECURE_NO_WARNINGS 1
//strcpy-字符串拷贝
//模拟库函数strcpy的实现
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
//	assert(src!= NULL);//断言
//	assert(dest!= NULL);//断言
//	while (*dest++ = *src++)//既拷贝了\0，又使得循环停止！
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
//	const int num = 10;//const 修饰变量，这个变量就被称为常变量，不能被修改，但本质还是变量
//	//num=20;//err
//
//	int n = 100;
//	int* const p = &num;
//	//const 修饰指针变量的时候
//	//const 如果放在*的右边，修饰的指针变量p，表示指针变量不能被改变，
//	//      但是指针的内容，可以被改变
//	
//	//const int* p = &num;
//	//const 修饰指针变量的时候，
//	//const 如果放在*的左边，修饰的是*p，表示指针指向的内容，是不能通过指针来改变的
//	//      但是指针变量本身是可以改变的
//	*p = 20;
//	p = &n;
//	printf("%d\n", num);
//
//	return 0;
//}

//模拟实现库函数strlen的实现
//strlen是求字符串长度的
//my_strlen
//1.const
//2.assert

//健壮性
//鲁棒性
//size_t-unsigned int 无符号整型
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
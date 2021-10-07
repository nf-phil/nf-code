#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int num = 0;
	int count = 0;
	scanf("%d", &num);
	//统计num的补码中有几个1
	while (num)
	{
		if (num%2==1)//缺点：负数不行
		{
			count++;
			num=num/2;
		}
	}
	printf("二进制中1的个数=%d\n", count);
	return 0;
}

#include<stdio.h>
int main()
{
	int num = 0;
	int count = 0;
	scanf("%d", &num);
	//按位与求二进制1中的个数
	//32bit
	//num&1==1
	//000000000000000000000011
	//000000000000000000000001
	//000000000000000000000001
	int i = 0;
	for(i=0;i<32;i++)
	{
		if (1 == ((num >> i) & 1))
			count++;
	}
	printf("%d\n",count);
	return 0;
}
#include<stdio.h>
int main()
{
	int a = 10;
	a = a + 2;
	a += 2;

	a = a >> 1;
	a >>= 1;  //复合赋值符

	a = a & 1;
	a &= 1;
	return 0;
}
#include<stdio.h>
int main()
{
	short s = 0;
	int a = 10;
	printf("%d\n", sizeof(s = a + 5));
	printf("%d\n", s);
	return 0;
}
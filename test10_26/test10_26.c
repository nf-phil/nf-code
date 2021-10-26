#define _CRT_SECURE_NO_WARNINGS 1
//用循环链表实现约瑟夫环
#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node* next;
};
int main()
{
	int n, m;//n-人的个数，m-报数报到m退出
	int i;
	int ret=0;//ret-返回链表中所剩最后一个元素
	struct node* head, * last, * p, * q;//指针p指向当前处理节点，指针q总是指向指针p的前一个节点
	//创建一个头结点 数据域可任意赋值
	head = (struct node*)malloc(sizeof(struct node));
	head->data = 0;
	head->next = NULL;

	while(1)
	{
		scanf("%d %d", &n, &m);
		if (n == 0 || m == 0)
		{
			free(head);
			break;
		}
		else
		{
			last = head;
			for (i = 0; i < n; i++)
			{
				//采用尾插法构建一个循环链表，指针last指向最后一个节点
				p = (struct node*)malloc(sizeof(struct node));//函数malloc创建新的节点
				p->data = i + 1;//填写人的编号
				last->next = p;//插到尾部
				p->next = head->next;//最后节点的next域指向第一个有效节点，形成循环链表
				last = p;//指针last移到最后一个节点，为下一次插入做准备
			}
			p = head->next;
			q = last;//指针p在最前面，最后一个节点是它的前驱节点
			i = 1;
			while (p != q)//指针p、q总是一前一后，一旦他们相遇，说明只剩一个节点了
			{
				if (i == m)
				{
					//把当前节点从链表中删除
					q->next = q->next->next;
					free(p);//释放已经删除的节点
					p = q->next;//将指针p移动到下一个有效节点上，i=1重新报数
					i = 1;
				}
				else
				{
					//指针p、q各自向后移动一个节点，其中q总是在p前面
					q = p;
					p = p->next;
					i++;//报数+1
				}
			}
			ret = p->data;//最后一个节点的数据用ret接收
			printf("%d\n", ret);//打印结果
			free(p);
			head->next = NULL;
		}
	}
	return 0;
}
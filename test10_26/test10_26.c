#define _CRT_SECURE_NO_WARNINGS 1
//��ѭ������ʵ��Լɪ��
#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node* next;
};
int main()
{
	int n, m;//n-�˵ĸ�����m-��������m�˳�
	int i;
	int ret=0;//ret-������������ʣ���һ��Ԫ��
	struct node* head, * last, * p, * q;//ָ��pָ��ǰ����ڵ㣬ָ��q����ָ��ָ��p��ǰһ���ڵ�
	//����һ��ͷ��� ����������⸳ֵ
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
				//����β�巨����һ��ѭ������ָ��lastָ�����һ���ڵ�
				p = (struct node*)malloc(sizeof(struct node));//����malloc�����µĽڵ�
				p->data = i + 1;//��д�˵ı��
				last->next = p;//�嵽β��
				p->next = head->next;//���ڵ��next��ָ���һ����Ч�ڵ㣬�γ�ѭ������
				last = p;//ָ��last�Ƶ����һ���ڵ㣬Ϊ��һ�β�����׼��
			}
			p = head->next;
			q = last;//ָ��p����ǰ�棬���һ���ڵ�������ǰ���ڵ�
			i = 1;
			while (p != q)//ָ��p��q����һǰһ��һ������������˵��ֻʣһ���ڵ���
			{
				if (i == m)
				{
					//�ѵ�ǰ�ڵ��������ɾ��
					q->next = q->next->next;
					free(p);//�ͷ��Ѿ�ɾ���Ľڵ�
					p = q->next;//��ָ��p�ƶ�����һ����Ч�ڵ��ϣ�i=1���±���
					i = 1;
				}
				else
				{
					//ָ��p��q��������ƶ�һ���ڵ㣬����q������pǰ��
					q = p;
					p = p->next;
					i++;//����+1
				}
			}
			ret = p->data;//���һ���ڵ��������ret����
			printf("%d\n", ret);//��ӡ���
			free(p);
			head->next = NULL;
		}
	}
	return 0;
}
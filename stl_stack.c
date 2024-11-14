#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

typedef struct stack
{
	int id;
	struct stack* next;
}st;

st* head, * p, * tail;

int n;

void stack_creat(void);

void stack_push(int n);

void stack_pop(void);

int stack_top(void);

void print_stack(void);

bool stack_empty(void);

int stack_size(void);

int main(void)
{
	printf("请输入入栈数:");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		int add;
		printf("请输入第%d个入栈的id:",i);
		scanf("%d", &add);
		stack_push(add);
		if (i != n)
		{
			printf("当前的栈有:");
			print_stack();
		}
		else if (i == n)
		{
			printf("输入完成,栈中元素有:");
			print_stack();
		}
	}
	printf("是否调出栈中元素,是输入1;否输入0:");
	int op;
	scanf("%d", &op);
	if (op == 1)
	{
		printf("请输入出栈数:");
		scanf("%d", &n);
		for (int i = 1; i <= n; i++)
		{
			int op1;
			stack_pop();
			printf("第%d次出栈后的栈还剩:",i);
			print_stack();
			printf("输入1继续,0退出:");
			scanf("%d", &op1);
			if (op1 == 0)break;
		}
		printf("当前栈中还剩:");
		print_stack();
	}
	int stack_end[100] = {};
	int i = 0;
	while (!stack_empty())
	{
		stack_end[i] = stack_top();
		i++;
		stack_pop();
	}
	printf("已将stack存入stack_pop数组.");
	printf("程序结束");
}

void stack_creat(void)
{
	head = (st*)malloc(sizeof(st));
	if (head == NULL)printf("head内存分配失败!");
	else
	{
		head->id = 10086;
		head->next = NULL;
		tail = head;
	}
}

void stack_push(int n)
{
	p = (st*)malloc(sizeof(st));
	if (p == NULL)printf("p的内存分配失败!");
	else
	{
		p->id = n;
		p->next = tail;
		tail = p;
	}
}

void stack_pop(void)
{
	if (tail == head)printf("已经为空栈,无法去除栈顶!");
	else
	{
		p = tail;
		tail = tail->next;
		free(p);
	}
}

int stack_top(void)
{
	if (tail == head)printf("已经为空栈,无法输出栈顶!");
	else
	{
		return tail->id;
	}
}

void print_stack(void)
{
	p = tail;
	while (p != head)
	{
		printf("%d ", p->id);
		p = p->next;
	}
	printf("\n");
}

bool stack_empty(void)
{
	if (tail == head)return true;
	else return false;
}

int stack_size(void)
{
	int len = 0;
	p = tail;
	while (p != head)
	{
		len++;
		p = p->next;
	}
	return len;
}
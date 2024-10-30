#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stu
{
	char name[21];
	int id;
	struct stu* next;
};
int main()
{
	stu* p, * head, * tail;
	p = (struct stu*)malloc(sizeof(struct stu));
	head = p;
	tail = p;
	head->next = NULL;
	int n = 3;
	for (int i = 0; i < n; i++)
	{
		p = (struct stu*)malloc(sizeof(struct stu));
		printf("please intput name\n");
		scanf("%s", p->name);
		p->id = i + 1;
		tail->next = p;
		tail = p;
		tail->next = NULL;
	}
	p = head->next;
	while (p != NULL)
	{
		printf("name:%s  id:%d\n", p->name, p->id);
		p = p->next;
	}
	return 0;
}
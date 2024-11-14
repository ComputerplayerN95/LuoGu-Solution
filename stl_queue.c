#include<stdio.h>
#include<stdlib.h>

typedef struct queue
{
    int id;
    struct queue*next;
}que;
que*head,*tail,*p;

void creat_queue(void);

void queue_push(int id);

int queue_front(void);

int queue_back(void);

void queue_pop(void);

int queue_empty(void);

int queue_size(void);

int main()
{
    creat_queue();
    int n;//n为入队数
    printf("please input the number of people in the queue");
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        int id;
        printf("please input the id of the person");
        scanf("%d",&id);//输入要站在队尾的学号
        queue_push(id);
    }
    printf("the first person%d\n",queue_front());//输出站在最前面的人的学号
    printf("the last person%d\n",queue_back());//输出站在最后面的人的学号
    printf("the number of people in the queue%d\n",queue_size());//输出人数
    while(queue_empty() != 0)
    {
        queue_pop();//排头出队
        printf("the first person%d\n",queue_front());//输出出队后的排头学号
        printf("the number of people in the queue%d\n",queue_size());//输出出队后的人数
    }
    return 0;
}
void creat_queue()
{
    head = (struct queue*)malloc(sizeof(struct queue));
    head->next = NULL;
    head->id = 10086;
    tail = head;
}
void queue_push(int id)
{
    p = (struct queue*)malloc(sizeof(struct queue));
    p->next =NULL;
    p->id = id;
    tail->next = p;
    tail = p;
}
int queue_front(void)
{
    if(head->next == NULL)return 0;
    return head->next->id;
}
int queue_back(void)
{
    if(head->next == NULL)return 0;
    return tail->id;
}
void queue_pop(void)
{
    que*load;
    load = head->next;
    head->next = load->next;
    free(load);
}
int queue_empty(void)
{
    if(head->next == NULL)
    {
        return 0;
    }
    else return 1;
}
int queue_size(void)
{   
    que*p = head->next;
    int len = 0;
    while(p != NULL)
    {
        p = p->next;
        len++;
    }
    return len;
}
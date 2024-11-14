#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

typedef struct deque
{
    int id;
    struct deque* next;
    struct deque* last;
} dq;//定义整形dq

dq* p, * head, * tail;

void deque_creat(void);

void deque_push_back(int a);

void deque_push_front(int a);

int deque_front(void);

int deque_back(void);

void deque_pop_back(void);

void deque_pop_front(void);

bool deque_empty(void);

int deque_size(void);

void print_deque(void);

int n;

int main(void)
{
    deque_creat();
    printf("请输入待排队人数:");
    scanf("%d", &n);
    for (int i = 1;i <= n; i++)
    {
        printf("请输入第%d个人:",i);
        int add;
        scanf("%d", &add);
        printf("站在排尾输1,站在排头输入0:");
        int op;
        scanf("%d", &op);
        if (op == 1)deque_push_back(add);
        else if (op == 0)deque_push_front(add); 
    }
    printf("队列如下:");
    print_deque();//输出队列;
    printf("请输入是否有序离队是输入1,否输入0:");
    int op1;
    scanf("%d", &op1);
    if (op1 == 1)
    {
        printf("请输入离队人数:");
        scanf("%d", &n);
        printf("从排头离开输入0,排尾离开输入1:");
        int op;
        scanf("%d", &op);
        if (op == 0)
        {
            for (int i = 1; i <= n; i++)
            {
                deque_pop_front();
            }
        }
        else if (op == 1)
        {
            for (int i = 1; i <= n; i++)
            {
                deque_pop_back();
            }
        }
        printf("出队后的队列:");
        print_deque();
    }
    else if (op1 == 0)
    {
        printf("暂不支持!");
    }
    return 0;
}

void deque_creat(void)
{
    head = (struct deque*)malloc(sizeof(struct deque));
    if (head == NULL)printf("malloc false");
    else
    {
        head->last = NULL;
        head->next = NULL;
        head->id = 10086;
        tail = head;
    }
}

void deque_push_back(int a)
{
    p = (struct deque*)malloc(sizeof(struct deque));
    if (p == NULL)printf("mallocfalse");
    else
    {
        p->id = a;
        p->next = NULL;
        p->last = tail;
        tail->next = p;
        tail = p;
    }
}

void deque_push_front(int a)
{
    if (tail == head)deque_push_back(a);
    else
    {
        p = (struct deque*)malloc(sizeof(struct deque));
        p->id = a;
        p->next = head->next;
        p->last = head;
        head->next = p;
    }
}

int deque_front(void)
{
    if (head->next == NULL)return NULL;
    return head->next->id;
}

int deque_back(void)
{
    if (tail == head)return NULL;
    return tail->id;
}

void deque_pop_front(void)
{
    dq* del;
    del = head->next;
    head->next = del->next;
    del->next->last = head;
    free(del);
}

void deque_pop_back(void)
{
    dq* del;
    del = tail;
    tail = del->last;
    tail->next = NULL;
    free(del);
}
 
bool deque_empty(void)
{
    if (head == tail)return true;
    else return false;
}

int deque_size(void)
{
    int len = 0;
    p = head->next;
    while (p != NULL)
    {
        p = p->next;
        len++;
    }
    return len;
}

void print_deque(void)
{
    p = head->next;
    while (p != NULL)
    {
        printf("%d ", p->id);
        p = p->next;
    }
}
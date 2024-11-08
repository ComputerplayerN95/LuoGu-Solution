#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct queue
{
    int id;
    struct queue* next;
} que;
struct hash
{
    que* last;
    que* next;
    int ju;
}ha[100005];

que* head;
que* p;
int n;
int m;
int k;
int j;

que* creat_que(void);
void insert(int x, que* head, int j, int i);
void print(que* head);
int move(int x, que* head);

int main()
{
    head = creat_que();
    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        scanf("%d %d", &k, &j);
        insert(k, head, j, i);
    }

    scanf("%d", &m);

    for (int i = 0; i < m; i++)
    {
        scanf("%d", &k);
        move(k, head);
    }

    print(head);

    return 0;
}

que* creat_que(void)
{
    que* head = (que*)malloc(sizeof(que));
    head->next = NULL;
    p = (que*)malloc(sizeof(que));
    p->id = 1;
    p->next = NULL;
    head->next = p;
    ha[1].last = head;
    ha[1].next = NULL;
    return head;
}

void insert(int x, que* head, int j, int i)
{
    que* p = (que*)malloc(sizeof(que));
    p->id = i;
    p->next = NULL;
    que* X = ha[x].last->next;

    if (j == 0)
    {
        p->next = X;
        ha[x].last->next = p;
        if (ha[x].last != head)
        {
            ha[ha[x].last->id].next = p;
        }
        ha[i].last = ha[x].last;
        ha[x].last = p;
        ha[i].next = X;
        
    }
    else
    {
        p->next = ha[i].next =  ha[x].next;
        X->next = p;
        ha[i].last = X;
        if (ha[x].next != NULL)
        {
            ha[ha[x].next->id].last = p;
        }
        ha[x].next = p;
    }
}

void print(que* head)
{
    que* cur = head->next;
    while (cur != NULL)
    {
        printf("%d ", cur->id);
        cur = cur->next;
    }
}

int move(int x, que* head)
{
    if (ha[x].ju != 1)
    {
        if (ha[x].last != head && ha[x].next != NULL)
        {
            ha[ha[x].last->id].next = ha[x].next;
            ha[ha[x].next->id].last = ha[x].last;
        }
        else if (ha[x].last == head)
        {
            ha[ha[x].next->id].last = head;
        }
        else if (ha[x].next == NULL)
        {
            ha[ha[x].last->id].next = NULL;
        }
        ha[x].last->next = ha[x].next;
        ha[x].ju = 1;
    }
    
    return 0;
}

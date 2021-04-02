#include <stdio.h>//约瑟夫环（约瑟夫问题）是一个数学的应用问题：
//已知n个人（以编号1，2，3…n分别表示）围坐在一张圆桌周围。
//从编号为k的人开始报数，数到m的那个人出列；他的下一个人又从1开始报数，数到m的那个人又出列
//；依此规律重复下去，直到圆桌周围的人全部出列。通常解决这类问题时我们把编号从0~n-1，最后 [1] 结果+1即为原问题的解。
#include <stdlib.h>
typedef struct node//创建结构体node
{
    int local;
    struct node* next;//创建链表
}LNode, * LinkList;

void CreateLinkList_L(LinkList L, int n);//声明链表
void Josephus(LinkList L, int n, int m, int k);//声明函数josephhus

void main()
{
    //创建循环单链表 结点个数是 n
    //报数 报到m的出去  也就是 删除该结点
    LinkList L = (LinkList)malloc(sizeof(LNode));
    L->local = 1;
    CreateLinkList_L(L, 10);
    Josephus(L, 10, 4, 3);
}

void CreateLinkList_L(LinkList L, int n)//链表实现
{
    int i;
    LinkList s, r;
    r = L;

    for (i = 2; i <= n; i++)
    {
        s = (LinkList)malloc(sizeof(LNode));//使用malloc函数分配空间内存
        s->local = i;
        r->next = s;
        r = r->next;
    }
    r->next = L;
}

void Josephus(LinkList L, int n, int m, int k) //m = 3 , k = 2,函数定义
{
    int i = 1, j = 1;

    LinkList p, q, s;
    p = L;
    //确定第一个喊话的同学
    while (i < k)
    {
        q = p;
        p = p->next;
        i++;
    }
    while (p->next != p)
    {

        //一个循环用来喊话，一直喊m次
        while (j < m)
        {
            q = p;
            p = p->next;
            j++;
        }
        s = p;
        p = p->next;
        q->next = p;
        printf("%d号淘汰！\n", s->local);
        free(s);
        j = 1;
    }

    printf("%d胜出！", p->local);
}












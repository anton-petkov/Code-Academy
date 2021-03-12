#include "ll.h"
#include <stdio.h>
#include <stdlib.h>
typedef struct t_node
{
    int m_nValue;
    t_node *m_pNext;
} t_node;
t_node *start;
void init()
{
    start = NULL;
};
int addAfter(int n, int k)
{
    t_node *q;
    t_node *p = start;
    while (p->m_nValue != k)
        p = p->m_pNext;
    q = (t_node *)malloc(sizeof(t_node));
    q->m_nValue = n;
    q->m_pNext = p->m_pNext;
    p->m_pNext = q;
    return 0;
}
void del(t_node *start, int value)
{
    t_node *p, *q;
    p = q = start;

    if ((start)->m_nValue == value)
    {
        start = (start)->m_pNext;
        free(p);
        return;
    }
    else
    {
        while (p->m_pNext != NULL)
        {
            if (p->m_nValue == value)
            {
                q->m_pNext = p->m_pNext;
                free(p);
                return;
            }
            else
            {
                q = p;
                p = p->m_pNext;
            }
        }
    }
}
void printNode()
{
    t_node *p = start;
    while (p != NULL)
    {
        printf("%d, ", p->m_nValue);
        p = p->m_pNext;
    }
}
int add(int data)
{
    t_node *p = start;
    start = (t_node *)malloc(sizeof(t_node));
    if (!start)
        return -1;
    start->m_nValue = data;
    start->m_pNext = p;
    return 0;
}

#include<iostream>
#include<cstring>
#include<iomanip>
#include<math.h>
#include<algorithm>
using namespace std;
struct node
{
    int data;
    node *next;
};
void createlist(node *phead)
{
    node*p=phead;
    for(int i=0;i<10;i++)
    {
        node *newnode=new node;
        p->next=newnode;
        p=newnode;
        p->data=i+1;
    }
    p->next=phead;//删除为单链表
}
void printlist(node *phead)
{
    node *p=phead;
    cout << p->data << endl;
    for(int i=0;i<110;i++)
    {
        p=p->next;
        cout << p->data << endl;
    }
}
void deletenode(node *phead)
{
    node *p=phead;
    delete phead;
    for(int i=0;i<10;i++)
    {
        p=p->next;delete p->next;
    }
}
int main()
{
    node *head=new node;
    head->data=0;
    createlist(head);
    printlist(head);deletenode(head);
}
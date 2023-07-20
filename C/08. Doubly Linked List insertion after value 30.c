#include <stdio.h>
#include <stdlib.h>
struct node
{
  struct node *prev;
  int data;
  struct node *next;
};
int main()
{
  struct node *start, *n, *p, *temp;
  int d=20,i;
  n=(struct node *)malloc(sizeof(struct node));
  n->data=10;
  n->prev=NULL;
  n->next=NULL;
  start=n;
  for(i=1;i<=4;i++)
  {
    p=(struct node *)malloc(sizeof(struct node));
    p->data=d;
    d+=10;
    p->prev=n;
    p->next=NULL;
    n->next=p;
    n=n->next;
  }
  p=start;
  while(p!=NULL)
  {
    printf("%d ",p->data);
    p=p->next;
  }
  p=temp=start;
  while(p->data!=30)
  {
    p=p->next;
    temp=p->next;
  }
  n=(struct node *)malloc(sizeof(struct node));
  n->prev=p;
  n->next=temp;
  n->data=100;
  temp->prev=n;
  p->next=n;
  temp=start;
  printf("\n");
  while(temp!=NULL)
  {
    printf("%d ",temp->data);
    temp=temp->next;
  }
}

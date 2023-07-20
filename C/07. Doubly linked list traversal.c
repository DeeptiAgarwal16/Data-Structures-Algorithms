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
  struct node *start, *n, *p;
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
}

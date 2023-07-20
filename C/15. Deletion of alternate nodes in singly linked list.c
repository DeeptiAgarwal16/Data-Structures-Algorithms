#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *link;
};
int main()
{
  struct node *start, *p, *n;
  int i,d=20;
  n=(struct node *)malloc(sizeof(struct node));
  n->data=10;
  n->link=NULL;
  start=n;
  p=start;
  for(i=1;i<=8;i++)
  {
    n=(struct node *)malloc(sizeof(struct node));
    n->data=d;
    d+=10;
    n->link=NULL;
    p->link=n;
    p=p->link;
  }
  p=start;
  while(p!=NULL)
  {
    printf("%d ",p->data);
    p=p->link;
  }
  n=start;
  p=start->link;
  while(n!=NULL && p!=NULL)
  {
    n->link=p->link;
    free(p);
    n=n->link;
    if(p!=NULL)
    p=n->link;
  }
  printf("\n");
  p=start;
  while(p!=NULL)
  {
    printf("%d ",p->data);
    p=p->link;
  }
}

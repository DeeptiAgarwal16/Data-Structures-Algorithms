#include <stdio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node * link;
};
int main()
{
  struct node *start, *p, *temp, *n, *d;
  int i,dat;
  start=(struct node *)malloc(sizeof(struct node));
  start->data=10;
  start->link=NULL;
  p=(struct node *)malloc(sizeof(struct node));
  p->data=20;
  start->link=p;
  for(i=0;i<3;i++)
  {
    n=(struct node *)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d",&dat);
    n->data=dat;
    p->link=n;
    n->link=NULL;
    p=p->link;
  }
  temp=start;
  while(temp!=NULL)
  {
    printf("%d ",temp->data);
    temp=temp->link;
  }
  temp=start;
  if(temp==start)
  {
    d=start;
    temp=temp->link;
    start->link=NULL;
    start=temp;
    free(d);
  }
  printf("\n");
  temp=start;
  while(temp!=NULL)
  {
    printf("%d ",temp->data);
    temp=temp->link;
  }
}

#include <stdio.h>
struct node
{
  int data;
  struct node * link;
};
int main()
{
  struct node *start, *p, *temp, *n;
  int i,d;
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
    scanf("%d",&d);
    n->data=d;
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
}

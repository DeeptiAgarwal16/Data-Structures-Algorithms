struct node
{
  struct node *prev;
  int data;
  struct node *next;
};
int main()
{
  struct node *start, *p, *n;
  int i,d=20;
  p=(struct node *)malloc(sizeof(struct node));
  start=p;
  p->data=10;
  p->prev=start;
  p->next=start;
  for(i=1;i<=4;i++)
  {
    n=(struct node *)malloc(sizeof(struct node));
    n->data=d;
    d+=10;
    n->prev=p;
    n->next=start;
    p->next=n;
    start->prev=n;
    p=p->next;
  }
  p=start;
  while(1)
  {
    printf("%d ",p->data);
    if(p->next==start)
    break;
    p=p->next;
  }
  p=start;
  while(p->data!=30)
  {
    p=p->next;
  }
  p->prev->next=p->next;
  p->next->prev=p->prev;
  free(p);
  printf("\n");
  p=start;
  while(1)
  {
    printf("%d ",p->data);
    if(p->next==start)
    break;
    p=p->next;
  }
}

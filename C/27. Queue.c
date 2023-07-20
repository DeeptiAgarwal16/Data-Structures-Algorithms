#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node * next;
} *front=NULL,*rear=NULL,*n;
void EnQueue(int d)
{
	if(front==NULL)
	{
		front=(struct node *)malloc(sizeof(struct node));
		front->data=d;
		front->next=NULL;
		rear=front;
	}
	else
	{
		n=(struct node *)malloc(sizeof(struct node));
		n->data=d;
		n->next=NULL;
		rear->next=n;
		rear=rear->next;
	}
}
void DeQueue()
{
	n=front;
	if(n==NULL)
	{
		printf("Queue is Empty!");
	}
	else
	{
		front=front->next;
		free(n);
	}
}
void display()
{
	struct node *p;
	p=front;
	while(p!=NULL)
	{
		printf("%d->",p->data);
		p=p->next;
	}
	printf("\n");
}
int main()
{
	EnQueue(10);
	EnQueue(20);
	EnQueue(30);
	EnQueue(40);
	EnQueue(50);
	display();
	DeQueue();
	DeQueue();
	display();
}

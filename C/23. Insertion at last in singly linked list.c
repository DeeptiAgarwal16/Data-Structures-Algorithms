#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *link;
} *start=NULL, *p, *q;
void insertlast()
{
	q=(struct node *)malloc(sizeof(struct node));
	printf("Enter the data of new node : ");
	scanf("%d",&q->data);
	q->link=NULL;
	if(start==NULL)
	{
		start=q;
	}
	else
	{
		p=start;
		while(p->link!=NULL)
		{
			p=p->link;
		}
		p->link=q;
	}
}
void display()
{
	p=start;
	if(start==NULL)
	printf("Empty Linked List!");
	else
	{
		while(p!=NULL)
		{
			printf("%d->",p->data);
			p=p->link;
		}
	}
}
int main()
{
	insertlast();
	insertlast();
	insertlast();
	display();
	printf("\n");
	start=NULL;
	insertlast();
	insertlast();
	insertlast();
	display();
}

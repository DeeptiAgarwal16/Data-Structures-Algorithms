#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *link;
} *start=NULL, *p, *q, *head1=NULL, *head2=NULL, *t,*p1,*p2,*q1,*q2;
void insertlast(int data)
{
	q=(struct node *)malloc(sizeof(struct node));
	q->data=data;
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
	struct node *p;
	p=start;
	while(p!=NULL)
	{
		printf("%d->",p->data);
		p=p->link;
	}
	printf("\n");
}
void display1()
{
	struct node *p1;
	p1=head1;
	while(p1!=NULL)
	{
		printf("%d->",p1->data);
		p1=p1->link;
	}
	printf("\n");
}
void display2()
{
	struct node *p2;
	p2=head2;
	while(p2!=NULL)
	{
		printf("%d->",p2->data);
		p2=p2->link;
	}
	printf("\n");
}

void insertL1(int data)
{
	q1=(struct node *)malloc(sizeof(struct node));
	q1->data=data;
	q1->link=NULL;
	if(head1==NULL)
	{
		head1=q1;
	}
	else
	{
		p1=head1;
		while(p1->link!=NULL)
		{
			p1=p1->link;
		}
		p1->link=q1;
	}
}
void insertL2(int data)
{
	q2=(struct node *)malloc(sizeof(struct node));
	q2->data=data;
	q2->link=NULL;
	if(head2==NULL)
	{
		head2=q2;
	}
	else
	{
		p2=head2;
		while(p2->link!=NULL)
		{
			p2=p2->link;
		}
		p2->link=q2;
	}
}
int main()
{
	insertlast(10);
	insertlast(20);
	insertlast(30);
	insertlast(40);
	insertlast(50);
	insertlast(60);
	insertlast(70);
	insertlast(80);
	insertlast(90);
	insertlast(100);
	display();
	printf("\n");
	t=start;
	while(t!=NULL)
	{
		insertL1(t->data);
		t=t->link->link;
	}
	t=start->link;
	while(t!=NULL)
	{
		insertL2(t->data);
		t=t->link->link;
	}
	display1();
	display2();
}

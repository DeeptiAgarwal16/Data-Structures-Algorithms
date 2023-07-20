#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node * next;
}*start=NULL,*top,*n;
void push(int d)
{
	n=(struct node *)malloc(sizeof(struct node));
	if(start==NULL)
	{
		n->data=d;
		n->next=NULL;
		start=top=n;
	}
	else
	{
		n->data=d;
		n->next=NULL;
		top->next=n;
		top=n;
	}
}
void display()
{
	n=start;
	while(n!=NULL)
	{
		printf("%d->",n->data);
		n=n->next;
	}
	printf("\n");
}
void pop()
{
	struct node *p;
	p=start;
	if(p==NULL)
	{
		printf("Stack is Empty!");
	}
	else
	{
		while(p->next->next!=NULL)
		{
			p=p->next;
		}
		p->next=NULL;
		free(top);
		top=p;
	}
}
int main()
{
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	display();
	pop();
	display();
	push(100);
	push(200);
	display();
}

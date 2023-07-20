#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *link;
} *start=NULL, *p, *q;
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
void insertatbegin(int d)
{
	p=(struct node *)malloc(sizeof(struct node));
	p->data=d;
	p->link=start;
	start=p;
}
int main()
{
	insertatbegin(10);
	insertatbegin(20);
	insertatbegin(30);
	insertatbegin(40);
	display();
	return 0;	
}

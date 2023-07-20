#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *link;
} *start=NULL, *p, *q;
void insertatbegin(int d)
{
	p=(struct node *)malloc(sizeof(struct node));
	p->data=d;
	p->link=start;
	start=p;
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
void insertpos(int d, int pos)
{
	int c=0;
	p=start;
	c++;
	while(c!=pos)
	{
		p=p->link;
		c++;
	}
	q=(struct node *)malloc(sizeof(struct node));
	q->data=d;
	q->link=p->link;
	p->link=q;
}
int main()
{
	insertatbegin(10);
	insertatbegin(20);
	insertatbegin(30);
	insertatbegin(40);
	display();
	printf("\nAfter inserting 100 at index 3\n");
	insertpos(100,3);
	insertpos(200,1);
	display();
	return 0;
}

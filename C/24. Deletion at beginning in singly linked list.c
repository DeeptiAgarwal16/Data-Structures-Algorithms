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
void deleteatbegin()
{
	p=start;
	start=start->link;
	free(p);
}
int main()
{
	insertatbegin(10);
	insertatbegin(20);
	insertatbegin(30);
	insertatbegin(40);
	display();
	printf("\nAfter deletion from beginning\n");
	deleteatbegin();
	display();
	return 0;
}

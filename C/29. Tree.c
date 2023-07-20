#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *left, *right;
}*root=NULL, *p, *q, *t;
void insert(int d)
{
	t=(struct node*)malloc(sizeof(struct node));
	t->data=d;
	t->left=t->right=NULL;
	if(root==NULL)
	root=t;
	else
	{
		p=root;
		while(1)
		{
			if(d<p->data)
			{
				q=p;
				p=p->left;
				if(p==NULL)
				{
					if(d<q->data)
					{
						q->left=t;
						return;
					}
					else
					{
						q->right=t;
						return;
					}
				}
			}
			else
			{
				q=p;
				p=p->right;
				if(p==NULL)
				{
					if(d<q->data)
					{	
						q->left=t;
						return;
					}
					else
					{
						q->right=t;
						return;
					}
				}
			}
		}
	}
}
void inorder(struct node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d  ",root->data);
		inorder(root->right);
	}
}

int main()
{
	insert(100);
	insert(80);
	insert(110);
	insert(30);
	insert(145);
	insert(103);
	insert(95);
	inorder(root);
}

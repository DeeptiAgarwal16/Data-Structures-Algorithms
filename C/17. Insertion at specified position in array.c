#include<stdio.h>
int main()
{
	int n,i,ele,pos;
	printf("Enter size of array : ");
	scanf("%d",&n);
	int A[n];
	printf("Enter elements if array : ");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	printf("Enter element and position to insert : ");
	scanf("%d%d",&ele,&pos);
	for(i=n-1;i>=pos-1;i--)
	{
		A[i+1]=A[i];
	}
	A[pos-1]=ele;
	printf("New Array : ");
	for(i=0;i<=n;i++)
	printf("%d ",A[i]);
}

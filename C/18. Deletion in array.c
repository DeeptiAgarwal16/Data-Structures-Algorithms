#include<stdio.h>
int main()
{
	int n,i,ele,f=0;
	printf("Enter size of array : ");
	scanf("%d",&n);
	int A[n];
	printf("Enter elements of array : ");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	printf("Enter element to delete : ");
	scanf("%d",&ele);
	for(i=0;i<n;i++)
	{
		if(A[i]==ele)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
		for(i;i<n;i++)
		A[i]=A[i+1];
		printf("New Array : ");
		for(i=0;i<n-1;i++)
		printf("%d ",A[i]);
	}
	else
	printf("Element not found");
}

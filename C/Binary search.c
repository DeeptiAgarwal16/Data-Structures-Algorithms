#include<stdio.h>
int main()
{
	int i,n,l,u,m,k;
	printf("Enter size of array : ");
	scanf("%d",&n);
	int A[n];
	printf("Enter elements of array : ");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	printf("Enter element to search : ");
	scanf("%d",&k);
	l=0;
	u=n-1;
	while(l<=u)
	{
		m=(l+u)/2;	
		if(k==A[m])
		{
			printf("Search Successful!");
			break;
		}
		else if(k>A[m])
		l=m+1;
		else
		u=m-1;
	}
	if(l>u)
	printf("Element not found!")
}

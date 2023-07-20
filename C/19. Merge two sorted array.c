#include<stdio.h>
int main()
{
	int n1,n2,i,j,k=0;
	printf("Enter size of first array : ");
	scanf("%d",&n1);
	int A1[n1];
	printf("Enter elements of first array : ");
	for(i=0;i<n1;i++)
	scanf("%d",&A1[i]);
	printf("Enter size of second array : ");
	scanf("%d",&n2);
	int A2[n2];
	printf("Enter elements of second array : ");
	for(i=0;i<n2;i++)
	scanf("%d",&A2[i]);
	int M[n1+n2];
	if(n1<n2)
	{
		for(i=0;i<n1;i++)
		{
			if(A1[i]<A2[i])
			M[k++]=A1[i];
			else
			M[k++]=A2[i];
		}
		for(i=n2-n1;i<n2;i++)
		M[k++]=A2[i];
	}
	printf("Merged Array : ");
	for(i=0;i<n1+n2;i++)
	printf("%d ",M[i]);
}

#include <stdio.h>
int * insertionsort(int *A, int n)
{
	int i,j,t;
	for(i=0;i<n;i++)
	{
		j=i+1;
		while(j>0 && A[j]<A[j-1])
		{
			t=A[j];
			A[j]=A[j+1];
			A[j+1]=t;
			j--;
		}
	}
	return A;
}
int main()
{
	int n,i, *res;
	printf("Enter size of array : ");
	scanf("%d",&n);
	int A[n];
	printf("Enter elements of array : ");
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	res=insertionsort(A,n);
	printf("Sorted Array : ");
	for(i=0;i<n;i++)
	printf("%d ",A[i]);
}

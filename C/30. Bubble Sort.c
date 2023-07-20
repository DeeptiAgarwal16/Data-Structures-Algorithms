#include <stdio.h>
int * bubblesort(int* A, int n)
{
	int i,j,t;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(A[j]>A[j+1])
			{
				t=A[j];
				A[j]=A[j+1];
				A[j+1]=t;
			}
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
	res=bubblesort(A,n);
	printf("Sorted Array : ");
	for(i=0;i<n;i++)
	printf("%d ",A[i]);
}

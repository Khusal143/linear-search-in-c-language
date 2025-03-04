#include<stdio.h>
void ls(int a[],int n, int k)
{
	int f=0;
	if(k==a[n])
	{ 
		printf("the element is %d is found at the location is %d ",k,n+1);
		f=1;
	}else
	{
		if(n==0 && f==0)
		printf("the element is not found");
		else
		ls(a,n-1,k);
	}
}
int main()
{
	int n,k;
	printf("size of the array %d ",n);
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	printf("enter the elements to be search");
	scanf("%d ",&k);
	ls(a,n,k);
} 
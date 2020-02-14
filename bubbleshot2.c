#include<stdio.h>
int swap( int a[], int b)
{
	int i,j,temp;
	for(i=0;i<b-1;i++)
	{
		for(j=0;j<b-i-1;j++)
		{
			if(a[j]>a[j+1])
	{
			temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;}	
		}
	}
}




int main()
{
	int n,a[n],i;
	printf("enter the no. of rows");
	scanf("%d",&n);
	printf("enter %d value ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	swap(a,n);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}

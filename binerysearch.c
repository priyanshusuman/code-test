#include<stdio.h>
int main()
{
	int n,a[n],i,first,last,middle,search;
	printf("enter the no. of rows");
	scanf("%d",&n);
	printf("enter %d values",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	first= 0;
	last= n-1;
	middle=(first+last)/2;
	printf("enter the value which is to be sarched");
	scanf("%d",&search);
while(first<=last){
		if(search==a[middle])
		{
			printf("the No. found");
			break;
		}
		else if(search<a[middle])
		{
			last=middle-1;
			
		}
		else if (search>a[middle])	
			first=middle+1;
			
			middle=(last+first)/2;
	}
if(first>last){
printf("not found");

}
	
	
}

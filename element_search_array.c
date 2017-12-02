#include<stdio.h>
void main()
{
int i,n,l,mid,a[8]={11,22,32,42,52,62,72,82};
//printf("enter the sorted arry elements\n");
/*for(i=0;i<8;i++)
{
scanf("%d ",&a[i]);
}*/
l=8;
mid=l/2;
printf("mid=%d\n",mid);
printf("mid element is=%d\n",a[mid-1]);
printf("enter the element that you want to search\n");
scanf("%d",&n);

if(n==a[mid-1])
{
printf("position of elemrnt =%d\n",mid);
}
if(n!=a[mid-1]&&n<a[mid-1])
{
	for(i=0;i<mid;i++)
	{
		if(n==a[i])
		printf(" the element position is %d ",i+1);
	}
}
if(n!=a[mid-1]&&n>a[mid-1])
{
	for(i=mid;i<8;i++)
	{
		if(n==a[i])
	    printf(" the element position is %d ",i+1);
	}
}
}

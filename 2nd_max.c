#include<stdio.h>
#include<conio.h>

int main()
{
  int i,max1,max2,max3;
  int a[6];
  printf("enter your array element\n");
  for(i=0;i<6;i++)
  {
  	scanf("%d",&a[i]);
  }
  max1=a[0];
  for(i=0;i<6;i++)
  {
  	if(max1<a[i])
  	{
  		max1=a[i];
    }
  }
  printf("max1= %d \n",max1);
  max2=a[0];
  for(i=0;i<6;i++)
  {
  	if(max1!=a[i]&&max1>a[i]&&max2<a[i])
  	{
  		max2=a[i];
	}
  }
  printf("max2= %d \n",max2);
  max3=a[0];
  for(i=0;i<6;i++)
  {
  	if(max2!=a[i]&&max2>a[i]&&max3<a[i])
  	{
  		max3=a[i];
	}
  }
  printf("max3=%d\n",max3);
}

#include<stdio.h>
#include<conio.h>
int count (int);
void main()
{
	int x,y,z,p,i,d,e,f,g,u,o,h,diff,sum,a[100],b[100],c[100],t[100];
	printf("enter the two number that you want to add\n");
	scanf("%d%d",&x,&y);
	z=count(x);
	printf("z=%d\n",z);
	p=count(y);
	printf("p=%d\n",p);
	e=x;
	for(i=z-1;i>=0;i--)
	{
		d=e%10;
		a[i]=d;
		e=e/10;
		printf("%d\n",d);
	}
	for(i=0;i<z;i++)
	{
	printf("%d",a[i]);
    }
    printf("\n");
    f=y;
	for(i=p-1;i>=0;i--)
	{
		g=f%10;
		b[i]=g;
		f=f/10;
		printf("%d\n",g);
	}
	for(i=0;i<p;i++)
	{
	printf("%d",b[i]);
    }
    printf("\n");
    if(z!=p)
    {
    if(z>p)
    {
    	diff=z-p;
    	sum=diff+p;	
	f=y;
	for(i=sum-1;i>=0;i--)
	{
		
		g=f%10;
		b[i]=g;
		f=f/10;
		printf("%d\n",g);
	}
	for(i=0;i<sum;i++)
	{
	printf("sum=%d\n",b[i]);
    }
    }
    else
    {
    diff=p-z;
    sum=diff+z;
    	e=x;
	for(i=sum-1;i>=0;i--)
	{
		d=e%10;
		a[i]=d;
		e=e/10;
		printf("%d\n",d);
	}
		for(i=0;i<sum;i++)
	{
	printf("sum=%d\n",a[i]);
    }
    }
    }
    else
    {
    	sum=p+1;
    	 	e=x;
	for(i=sum-1;i>=0;i--)
	{
		d=e%10;
		a[i]=d;
		e=e/10;
		printf("%d\n",d);
	}
		for(i=0;i<sum;i++)
	{
	printf("sum=%d\n",a[i]);
    }
    f=y;
	for(i=sum-1;i>=0;i--)
	{
		
		g=f%10;
		b[i]=g;
		f=f/10;
		printf("%d\n",g);
	}
	for(i=0;i<sum;i++)
	{
	printf("sum=%d\n",b[i]);
    }
	}
    t[sum-1]=0;
    for(i=sum-1;i>=0;i--)
    {
    	printf("a[i]=%d b[i]=%d t[i]=%d ",a[i],b[i],t[i]);
    	c[i]=t[i]+a[i]+b[i];
    	printf("c[i]=%d ",c[i]);
    	
    	o=c[i];
    	h=c[i];
		
		u=count(c[i]);
		printf("u=%d ",u);
    	if(u==2)
    	{
		   t[i]=o/10;
		   printf("t[i]=%d ",t[i]);
		}
		else
		t[i]=0;
	       t[i-1]=t[i];
		c[i]=h%10;
		printf("c[i]=%d ",c[i]);
		printf("\n");
	}
	printf("your addition is\n");
	if(z==p)
	{
	for(i=1;i<sum;i++)
	{
		printf("%d\t",c[i]);
	}
    }
    else
    for(i=0;i<sum;i++)
	{
		printf("%d\t",c[i]);
	}
    }
int count (int a)
{
	int m=0,x;
	x=a;
	while(x!=0)
	{
		x=x/10;
		m++;
	}
	return m; 
}

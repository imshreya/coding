#include<stdio.h>
void swap(int*,int*);
void swap_double(double*,double*);
void main()
{
	int x=10,y=20;
	double a=5.3,b=8.8;
	printf("swap the number\n");
	swap(&x,&y);
	printf("x=%d y=%d",x,y);
	swap_double(&a,&b);
	printf("a=%lf b=%lf",a,b);
}
void swap(int*x,int*y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void swap_double(double*a,double*b)
{
    double temp;
     temp=*a;
	*a=*b;
	*b=temp;
}

#include<stdio.h>
void main()
{
	int arr[5]={4,2,5,3,4};
	int i,j,max;
	max=arr[0];
	for(i=0;i<5;i++)
	{
		if(arr[i]>max)
		max=arr[i];
		else 
		continue;
	}
	printf("max=%d\n",max);
	for(i=0;i<5;i++)
	{
		for(j=0;j<max;j++)
		{
			if(arr[j]==max)
			printf("*");
			else
			printf(" ");
		}
		//printf("\n");
		max=max-1;
		for(j=0;j<max;j++)
		{
			if(arr[j]==max)
			printf("*");
			else
			printf(" ");
	    }
		max=max-2;
		for(j=0;j<max;j++)
		{
			if(arr[j]==max)
			printf("*");
			else
			printf(" ");
		}
		max=max-3;
		for(j=0;j<max;j++)
		{
			if(arr[j]==max)
			printf("*");
			else
			printf(" ");
		}
		max=max-4;
		for(j=0;j<max;j++)
		{
			if(arr[j]==max)
			printf("*");
			else
			printf(" ");	
		}
	}
}

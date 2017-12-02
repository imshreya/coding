#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIDES 6
#define R_SIDE (rand()%SIDES+1)
void main()
{
	int trials,j,d1,d2,n_dice=2,outcomes[10];
	srand(clock());
	printf("\n enter number of trials:\n");
	printf("srand=%d\n",srand);
	printf("clock=%d\n",clock);
	printf("rand=%d\n",rand());
	scanf("%d",&trials);
	for(j=0;j<trials;j++)
	{
	outcomes[(d1=R_SIDE)+(d2=R_SIDE)]++;
	printf("d1=%d\n",d1);
	printf("d2=%d\n",d2);
	printf("outcomes=%u\n",outcomes);
} 
	printf("probability for dice posibilites\n");
	for(j=2;j<n_dice*SIDES+1;++j)
	printf("j=%d outcones=%d p=%lf\n",j,outcomes[j],(double)(outcomes[j]/trials));
}

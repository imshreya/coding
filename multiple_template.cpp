#include<iostream>
using namespace std;
template <class T1,class T2>
void copy(const T1 source[],T2 destination[],int size)
{
	for(int i=0;i<size;++i)
    destination[i]=static_cast<T2>(source[i]);
}
int main()
{
	double source[10]={12,12,34,56,76,5,8,4,65,10};
	int destination[20];
	copy(source,destination,20);
	for(int i=0;i<10;++i)
	printf ("%d\n",destination[i]);
	return 0;
}

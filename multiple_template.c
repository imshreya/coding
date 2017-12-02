#include<iostream>
using namespace std;
templete<class T1,class T2>
void copy(const T1 source[],T2 destination,int size)
{
	for(int i=0;i<size;++i)
    destination[i]=static_cast<T2>(source[i]);
}
void main()
{
	int source[10]={12,12,34,56,76,5,8,4,65,10};
	double destination[20];
	copy(source,destination,20);
}

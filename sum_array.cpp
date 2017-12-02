#include<iostream>
using namespace std;
template<class summable> //summerable is the generic type
summable sum(summable data[],int size,summable s=0)
{
	for(int i=0;i<size;i++)
	s+=data[i];
	//+=must work for summable
	return s;
}
int main(void)
{
	int arr[10]={1,2,3,4,4,6,7,8,9,10};
	int s;
	s=sum(arr,10);
	cout<<s;
}

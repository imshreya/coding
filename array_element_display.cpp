#include<iostream>
using namespace std;
template<class element>
void display(const element data[],int size)
{
	for(int i=0;i<size;++i)
	cout<<data[i]<<endl;
}
int main()
{
	int arr[5]={1,2,3,4,5};
	display(arr,5);
	return 0;
}

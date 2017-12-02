#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
const int sides=6;
inline int r_sides(){return (rand()%sides+1);
}
int main(void)
{
	const int n_dice=2;
	int d1,d2;
	int outcomes[10];
	srand(clock());
	cout<<"\enter the number of trials\n:";
	int trials;
	cin>>trials;
	int*outcome=new int[n_dice*sides+1];
	cout<<*outcome<<endl;
	for(int j=0;j<trials;++j)
	{
	outcomes[(d1=r_sides())+(d2=r_sides())]++;
	cout<<d1<<endl;
	cout<<d2<<endl;
	cout<<outcomes<<endl;;
    }
	cout<<"probability\n";
	for(int j=2;j<n_dice*sides+1;++j)
	cout<<"j="<< j <<"p="<<static_cast<double>(outcomes[j]/trials)<<endl;
}

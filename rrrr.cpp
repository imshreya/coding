#include <iostream>
#include <vector>

using namespace std;
const int Num = 40;

inline void sum(int &p, int n, vector <int> d)
{
	p = 0;
	for(int i = 0; i < n; ++i)
		p = p + d[i];
}

int main()
{
	int accum = 0;
	vector <int> data;
	for(int i = 0; i < Num; ++i)
		data.push_back(i);
	sum(accum, Num, data);
	cout<< "sum is " << accum << endl;
	return 0;
}

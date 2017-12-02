#include<iostream> //headerfile for IO
using namespace std;
template<class T> //using template new keyword
inline void sum(T&p,T n, const T d[]){         //funcation defination
p = 0;
for(int i = 0; i < n; ++i)
p = p + d[i];
}
int main()
{
const int N=40; //in place of micros 
int accum=0;
int data[N];
for(int i = 0; i < N; ++i)
data[i] = i;
sum(accum, N, data);
printf("sum is %d\n", accum);
return 0;
}

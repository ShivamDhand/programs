#include<iostream>
using namespace std;
int square(int num)
{
int sq=num*num;
return sq;
}
int main()
{
int n,res=0;
cout<<"Enter the number to be squared";
cin>>n;
res=square(n);
cout<<"The square is "<<res<<"\n";
return 0;
}
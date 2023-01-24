#include<iostream>
using namespace std;
int main()
{
int n1=0,n2=1,n3,n,i;
cout<<"enter n value:";
cin>>n;
cout<<"fibonacci series";
for(i=0;i<n;i++)
{
n3=n1+n2;
cout<<n1;
n1=n2;
n2=n3;
}
return 0;
}

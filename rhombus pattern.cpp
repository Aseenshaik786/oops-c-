#include<iostream>
using namespace std;
int main()
{
	int i,j,k,num;
	cout<<"enter the no.of rows:";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		for(k=1;k<=num-i;k++)
		{
			cout<<" ";
		}
		for(j=1;j<=2*i-1;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	for(i=num-1;i>=1;i--)
	{
		for(k=1;k<=num-i;k++)
		{
			cout<<" ";
		}
		for(j=1;j<=2*i-1;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}

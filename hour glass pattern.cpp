#include<iostream>
using namespace std;
int main()
{
	int i,j,k,num;
	cout<<"enter the no.of rows";
	cin>>num;
	for(i=num;i>=1;i--)
	{
		for(k=1;k<=num-i;k++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
	for(i=1;i<=num;i++)
	{
	    for(k=1;k<=num-i;k++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
	}
}

#include<iostream>
using namespace std;

int main()
{
	int x,y;
	cout<<"enter x value:";
	cin>>x;
	cout<<"enter y value:";
	cin>>y;
	x=x+y;
	y=x-y;
	x=x-y;
	cout<<"after swapping:x="<<x<<"y="<<y;
	}

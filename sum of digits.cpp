#include<iostream>
using namespace std;
int main()
{
	int sum=0,rem,n;
	cout<<"enter n value:";
	cin>>n;
	while(n>0)
	{
	rem=n%10;
	sum=sum+rem;
	n/=10;
}
cout<<"sum of digits"<<sum;
return 0;
}


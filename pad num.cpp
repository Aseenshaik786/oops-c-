#include<iostream>
using namespace std;
int main()
{
	int n,num,rem,rev=0;
	cout<<"enter the number";
	cin>>num;
	n=num;
	while(num!=0)
	{
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;
	}
	cout<<"reverse number:"<<rev;
	if(n==rev)
	{
		cout<<"palindrome";
	}
	else
	{
		cout<<"not a palindrome";
	}
}

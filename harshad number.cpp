#include<iostream>
using namespace std;
int main()
{
	int num,sum=0,temp;
	cout<<"enter the nummber";
	cin>>num;
	temp=num;
	while(num!=0){
	sum=sum+num%10;
	num/=10;

}
	if(temp%sum==0)
	{
		cout<<"harshad number";
	}
	else
	{
		cout<<"not harshad number";
	}
}

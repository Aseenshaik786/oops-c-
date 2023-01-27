 #include<iostream>
using namespace std;
int main()
{
	int year,dd,mm,i;
	cout<<"enter the date";
	cin>>dd;
	cout<<"enter the month";
	cin>>mm;
	cout<<"enter the year";
	cin>>year;
	cout<<dd<<"-"<<mm<<"-"<<year;
	if(dd<=31|| mm<=12)
	{
	if(year%4==0 &&  year%100!=0 || year%400==0)
	{
		cout<<"\n"<<"leap year";
	}
	else
	{
		cout<<"not a leap year";
	}
    }
}

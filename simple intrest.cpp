#include<iostream>
using namespace std;
int main()
{
int p,y,c,i,a;
cout<<"enter the principle amount => ";
cin>>p;
cout<<"\nenter the no of years =>";
cin>>y;
cout<<"\n1.senior citizen\n2.not senior citizen";
cout<<"\n enter the choise =>";
cin>>c;
switch(c)
{
case 1:
a=p*y*12/100;
cout<<"\n the simple interest for senior citizen is => "<<a;
break;
case 2:
i=p*y*10/100;
cout<<"\nthe simple interest for normal citizen is => "<<i;
}
}



#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
int i,a[10],n,min,max;
cout<<"ENTER NUMBER OF ENTRIES =>";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"ENTER THE ENTRY "<<i+1<<" =>";
cin>>a[i];
}
sort(a,a+i);
cout<<"\nSORTED ARRAY\n";
for(i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
cout<<"\nenter the nth min =>";
cin>>min;
cout<<"\nenter the mth max =>";
cin>>max;
cout<<"\nthe "<<min<<"th minimum number is => "<<a[min-1];
cout<<"\nthe "<<max<<"th maximum number is => "<<a[n-max];
cout<<"\nthe sum of min and max numbers is => "<<a[min-1] + a[n-max];
cout<<"\nthe diffrence of min and max numbers is => "<<a[n-max] - a[min-1];
}


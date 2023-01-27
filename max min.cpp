#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maain()
{
	int i,a[10],n,min,max;
	cout<<"enternumbers";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter the entry"<<i+1<<"=>";
		cin>>a[i];
	}
	sort(a,a+i);
	cout<<"\nSORTED ARRAY\n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";//src
	}
		cout<<"\nenter thenth min";
		cin>>min;
		cout<<"\nenter themthmax";
		cin>>max;
		cout<<"\nthe"<<min<<"minimum number is"<<a[min];
		cout<<"\nth"<<max<<"maximum number is"<<a[n-max];
	}
		

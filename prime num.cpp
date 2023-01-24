#include<iostream>
using namespace std;
int  main()
{
	int i,c=0,n;
	cout<<"enter the n value:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	if(n%i==0)
	{
		c++;
	}
}
	  if(c==2)
	  {
	        cout<<"is prime number";
      }
      else
      {
    	    cout<<"is not a prime number";
	   }
	return 0;
}

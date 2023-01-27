#include<iostream> 
using namespace std; 
int main() 
{ 
	int i,j,k,n;  	
	cout<<"enter the number of rows => "; 
	cin>>n;
	for(i=1;i<=n;i++) 
	{ 
	for(j=1;j<=i;j++) 
	{ 	
	cout<<char(j+65-1)<<" ";
}
		for(k=i-1;k>=i;k--) 
		{ 
		cout<<char(k+65)<<" ";  		
		} 
	
	} 
	return 0;
} 


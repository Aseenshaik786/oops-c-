#include <iostream>  
using namespace std;  

class reverse
{
	public:
		   int n, reverse=0, rem;    
		   void rev();
};

void reverse::rev()
{
cout<<"Enter a number: ";    
cin>>n;    
  while(n!=0)    
  {    
     rem=n%10;      
     reverse=reverse*10+rem;    
     n/=10;    
  }    
 cout<<"Reversed Number: "<<reverse<<endl;     
}
int main()  
{  
 reverse r1;
 r1.rev();
return 0;  
}

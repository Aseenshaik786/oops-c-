#include<iostream>
using namespace std;
int main()
{
int age,N;
cout<<"\nenter your age : ";
cin>>age;
if(age=N){
   if(age>=18) 
{
    cout<<"\nyou are eligible to vote!!!";
}
   else if(age<18){

	cout<<"\nyou are allowed to vote after "<<18-age<<"year";
}
}
else{
	cout<<"enter valid age";

}
}



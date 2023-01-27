#include<iostream>
using namespace std;
class student
{
	public:
	int rollno;
	int total;
	string name;
	void readdetails();
	void displaydetails();
	void grade();
};
void student::readdetails()
{
	cout<<"enter rollno:";
	cin>>rollno;
	cout<<"enter name";
	cin>>name;
	cout<<"enter total marks";
	cin>>total;
}
void student::grade()
{
	float percentage;
	percentage=(float)total/500*100;
	cout<<percentage<<"%\n";
	if(percentage<=75)
	{
	cout<<"grade A\n";}
	else{
	if((percentage>=70)&&(percentage>75)){
	cout<<"grade B\n";}
	else{
	if((percentage>=65)&&(percentage>70)){
	cout<<"grade C\n";}
	else{
	cout<<"grade D\n";}
}
}
}
void student::displaydetails()
{
	cout<<"rollno\n"<<rollno;
	cout<<"name\n"<<name;
	cout<<"total\n"<<total;
}
int main()
{
	student std[10];
	int i,n;

		cout<<"enter no of students:";
		cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"enter student details"<<i+1<<"\n";
		std[i].readdetails();
	}
	for(i=0;i<n;i++)
	{
		cout<<"details of studnts"<<i+1<<"\n";
		std[i].displaydetails();
		std[i].grade();	
			}
			return 0;
}

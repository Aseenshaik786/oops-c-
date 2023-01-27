#include<iostream>
using namespace std;
class celsius
{
	public:
		int f,c;
		void fahrenhit();
};
void celsius::fahrenhit()
{
	cout<<"enter fahrenhit value";
	cin>>f;
	c=(f-32)*5/9;
	cout<<"celsius value"<<c;
}
int main()
{
	celsius c1;
	c1.fahrenhit();
	return 0;
}

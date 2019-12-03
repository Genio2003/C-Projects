#include <iostream>
using namespace std;
int main()
{
	float n1,n2,r;
	cout<<"Inserire il primo numero: ";
	cin>>n1;
	cout<<"Inserire il secondo numero: ";
	cin>>n2;
	if (n1>n2)
	{
		r=(n1+10);
		cout<<r;
	}
	else
	{
		r=(n2+10);
		cout<<r;
	}
}

#include <iostream>
using namespace std;
int main()
{
	float l1,l2,l3;
	cout<<"Inserire Primo Lato:";
	cin>>l1;
	cout<<"Inserire Secondo Lato:";
	cin>>l2;
	cout<<"Inserire Terzo Lato:";
	cin>>l3;
	if (l1==l2&&l1==l3)
	{
		cout<<"Il Triangolo e' Equilatero";
	}
	else
	{
		cout<<"Il Triangolo non e' Equilatero";
	}
}

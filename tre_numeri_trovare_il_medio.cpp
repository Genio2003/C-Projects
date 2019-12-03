#include <iostream>
using namespace std;
int main()
{
	float n1,n2,n3,M;
	cout<<"Inserire il Primo Numero: ";
	cin>>n1;
	cout<<"Inserire il Secondo Numero: ";
	cin>>n2;
	cout<<"Inserire il Terzo Numero: ";
	cin>>n3;
	if (n1>n2)
	{
		M=n1;
	}
	else
	{
		M=n2;
	}
	if (M>n3)
	{
		M=n2;
		cout<<"Numero Medio: "<<M;
	}
	else
	{
		M=n3;
		cout<<"Numero Medio: "<<M;
	}
}

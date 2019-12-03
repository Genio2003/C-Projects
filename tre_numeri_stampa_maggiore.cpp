//Dati Tre Numeri Stampare il Maggiore!
#include <iostream>
using namespace std;
int main()
{
	int n1,n2,n3;
	cout<<"Inserire il Primo Numero Intero: ";
	cin>>n1;
	cout<<"Inserire il Secondo Numero Intero: ";
	cin>>n2;
	cout<<"Inserire il Terzo Numero Intero: ";
	cin>>n3;
	if (n1>n2)
	{
			if (n1>n3)
			{
				cout<<n1;
			}
			else
			{
				cout<<n3;
			}
	}
	else
	{
		if (n2>n3)
		{
			cout<<n2;
			}
		else
		{
			cout<<n3;
		}
	}
}

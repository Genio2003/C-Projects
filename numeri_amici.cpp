//Dati due Numeri A e B verificare se sono amici
//Due Numeri sono amici se la somma dei divisori di A sia uguale a B e viceversa!
#include <iostream>
using namespace std;
int main()
{
	int a,b,sA=0,sB=0,i=1;
	cout<<"Inserire il Primo Numero: ";
	cin>>a;
	cout<<"Inserire il Secondo Numero: ";
	cin>>b;
	while (i<a)
	{
		if (a%i==0)
		{
			sA=sA+i;
		}
		i++;
	}
	if (sA==b)
	{
		i=1;
		while (i<b)
		{
			if (b%i==0)
			{
				sB=sB+i;
			}
			i++;
		}
	}
		if (sB==sA)
		{
			cout<<"I Numeri Sono Amici!";
		}
		else
		cout<<"I Numeri NON Sono Amici!";
}

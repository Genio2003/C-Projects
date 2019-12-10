//Dato un numero intero verificare se è compreso nell'intervallo!
#include <iostream>
using namespace std;
int main()
{
	int m,n,n1;
	cout<<"Inserire il Numero Maggiore dell'Intervallo: ";
	cin>>m;
	cout<<"Inserire il Numero Minore dell'Intervallo: ";
	cin>>n;
	cout<<"Inserire il Numero Da Verificare: ";
	cin>>n1;
	if (n>m)
	{
		cout<<"Il Numero minore dell' intervallo inserito e' Maggiore del Numero Maggiore dell'Intervallo! :-(";
	}
	else 
	{
		if (n1>n)
		{
                     if (n1<m)
			cout<<"Il Numero e'' Compreso nell'Intervallo! ;-)";
                     else
                        cout<<"Il Numero NON e compreso nell'i.....";
		}
		else
		{
			cout<<"Il Numero NON e' Compreso nell'Intervallo! :-(";
		}
	}
}

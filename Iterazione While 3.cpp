//Dati 5 numeri stampare solo i pari (Ripetere l'azione 5 volte)
#include <iostream>
using namespace std;
int main()
{
	int n,i=0,s=0;
	while (i<5)
	{
		cout<<"Inserisci Numero: ";
		cin>>n;
		s=s+n;
		i++;
	}
	cout<<s;
}
	

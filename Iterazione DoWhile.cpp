//Dati 5 numeri stampare il doppio (Ripetere l'azione 5 volte)
#include <iostream>
using namespace std;
int main()
{
	int n,i=0,r;
	while (i<5)
	{
		cout<<"Inserisci Numero: ";
		cin>>n;
		r=(n*2);
		cout<<r<<endl;
		i++;
	}
}

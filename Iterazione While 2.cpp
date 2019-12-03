//Dati 5 numeri stampare solo i pari (Ripetere l'azione 5 volte)
#include <iostream>
using namespace std;
int main()
{
	int n,i=0;
	while (i<5)
	{
		cout<<"Inserire Numero: ";
		cin>>n;
		if (n%2==0)
		{
			cout<<n<<endl;
		}
		else
		{
			cout<<"Il Numero e' Dispari!"<<endl;
		}
		i++;
	}
}

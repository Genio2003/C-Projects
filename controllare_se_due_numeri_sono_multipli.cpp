//Controllare se un numero è multiplo di un altro numero!
//Per calcolare il resto di una divisione si una il simblo della "%".
//Es. r=(n1%n2)
#include <iostream>
using namespace std;
int main ()
{
	int n1,n2;
	cout<<"Inserier Primo Numero: ";
	cin>>n1;
	cout<<"Inseriere il Secondo Numero: ";
	cin>>n2;
	if (n1%n2==0)
	{
		cout<<"Il Primo Numero e' Multiplo del Secondo";
	}
	else
	{
		cout<<"Il Primo Numero non e' Multiplo del Secondo";
	}
}

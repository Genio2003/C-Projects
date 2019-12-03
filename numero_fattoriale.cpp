//Dato un numero Intero N Stampare fattoriale!
#include <iostream>
using namespace std;
int main()
{
	int n,i=1,m=1;
	cout<<"Inserire il Numero: ";
	cin>>n;
	while (i<=n)
	{
		m=m*i;
		i++;
	}
	cout<<"Numero in Fattoriale: "<<m;
}

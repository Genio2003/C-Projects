//Inserire numeri interi fino a che la somma dei dispari supera 100!
#include <iostream>
using namespace std;
int main()
{
	int n,s=0;
	do 
	{
		cout<<"Inserire Numero: ";
		cin>>n;
		if (n%2!=0)
		{
			s=s+n;
		}
	}
		while (s<100);
		cout<<"Somma Numeri Dispari: "<<s;
}

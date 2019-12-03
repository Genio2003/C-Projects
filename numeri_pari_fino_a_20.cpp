#include <iostream>
using namespace std;
int main()
{
	int n,p=0,s=0;
	do
	{
		cout<<"Inserire Numero: ";
		cin>>n;
		if (n%2==0)
		{
			p++;
			s=s+n;
		}
	}
	while (p<=20);
	cout<<"Somma Dei Pari: "<<s;
}

#include <iostream>
using namespace std;
int main()
{
	int x=0,y,s=0,p=0;
	do 
	{
	cout<<"Inserire il Primo Numero: ";
	cin>>x;
	cout<<"Inserire il Secondo Numero: ";
	cin>>y;
	cout<<"Il Primo Numero deve essere Minore del Secondo!"<<endl;
	}
	while (x>y);
		while (x<=y)
		{
			if (x%2==0)
			{
				s=s+x;
				p++;
			}	
			x++;
			}
		cout<<"Somma Dei Numeri Pari: "<<s<<endl;
		cout<<"I Numeri Pari sono: "<<p;
}

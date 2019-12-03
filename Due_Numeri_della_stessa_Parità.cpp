//Dati due nuemri verificare se sono della stassa parità!
#include <iostream>
using namespace std;
int main()
{
	int n1,n2;
	cout<<"Inserire Il Primo Numero: ";
	cin>>n1;
	cout<<"Inserire Il Secondo Numero: ";
	cin>>n2;
	if (n1%2==0)
	{
		if (n2%2==0)
		{
			cout<<"I Due Numeri Hanno la Stessa Parita'!";
		}
		else
		{
			if (n1%3==0)
			{
				if (n2%3==0)
				{
					cout<<"I Due Numeri Hanno la Stessa Parita'!";
				}
				else
				{
					cout<<"I Due Numeri NON Hanno la Stessa Parita'!";
				}
	  }	
			else
			{
				cout<<"I Due Numeri NON Hanno la Stessa Parita'!";
			}
		}
	}
	else
	{
		cout<<"I Due Numeri NON Hanno la Stessa Parita'!";
	}
}

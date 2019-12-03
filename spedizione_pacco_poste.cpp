#include <iostream>
using namespace std;
int main()
{
	float g,C;
	cout<<"Inserire il Peso Del Pacco: ";
	cin>>g;
	if (g<=50)
	{
		C=2+1;
		cout<<"Costo Spedizione: "<<C<<" Euro";
	}
	else
	{
		if (g<=100)
		{
			C=3.5+1;
			cout<<"Costo Spedizione: "<<C<<" Euro";
		}
		else
		{
			C=4.5+1;
			cout<<"Costo Spedizione: "<<C<<" Euro";
		}
	}
}

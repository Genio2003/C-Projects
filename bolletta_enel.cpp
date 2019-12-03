//Sapendo che la corrente costa 0,10Euro al Kwh se si consuma 2000Kwh, se si supera si pagano 0,20Euro la quantità eccedente! 
#include <iostream>
using namespace std;
int main()
{
	float E,C,Vl,Vl3;
	cout<<"Inserire il Consumo di Corrente del Mese Corrente: ";
	cin>>E;
	if (E<=2000)
	{
		C=(E*0.10);
		cout<<"Ammontare Bolletta: "<<C<<" Euro";
	}
	else
	{
		Vl=(E-2000)*0.20;
		Vl3=2000*0.10;
		C=(Vl3+Vl);
		cout<<"Ammontare Bolletta: "<<C<<" Euro";
	}
}

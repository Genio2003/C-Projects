#include <iostream>
using namespace std;
int main()
{
	float eta,year,vl;
	cout<<"Inserire Anno Attuale: ";
	cin>>year;
	cout<<"Inserire Anno di Nascita: ";
	cin>>eta;
	vl=(year-eta);
	if (vl>17)
	{
		cout<<"Scelga il Prossimo Premier! :-) ";
	}
	else 
	{
		cout<<"Rilevato Umano Minorenne!!! :-("<<endl;
		cout<<"Esito: Vai a Giocare Con La Palla Bambino!";
	}
	
}

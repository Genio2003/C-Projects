//Dati due cateti calcolare l'ipotenusa!
//SQRT(X)=Radice Quadrata;Pow(b,2)=Potenza
//Formula del Ipotenusa= Radice Quadrata di c1*c1 e di c2*c2
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float c1,c2;
	double ipo;
	cout<<"Inserire Primo Cateto: ";
	cin>>c1;
	cout<<"Inserire Secondo Cateto: ";
	cin>>c2;
	ipo=sqrt((c1*c1)+(c2*c2));
	cout<<"L'Ipotenusa e': ";
	cout<<ipo;
}


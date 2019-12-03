#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	float ipo,ipo2,c1,c12,c2,P,A;
	cout<<"Inserire il Primo Cateto del Triangolo: ";
	cin>>c1;
	cout<<"Inserire l'Ipotenusa: ";
	cin>>ipo;
	ipo2=ipo*ipo;
	c12=c1*c1;
	c2=sqrt(ipo2-c12);
	cout<<c2;
}

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float b1,b2,h,A,P,v1,v2;
	cout<<"Inserire la Base Maggiore: ";
	cin>>b1;
	cout<<"Inserire la Base Minore: ";
	cin>>b2;
	cout<<"Inserire l'Altezza: ";
	cin>>h;
	A=(b1+b2)*h/2;
	v1=(b1-b2)/2;
	cout<<v1<<endl;
	v2=sqrt(v1*v1)+(h*h);
	cout<<v2;
	
}

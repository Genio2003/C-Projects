//Data l'area del cerchio trovare il perimetro!
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float a,r,p;
	cout<<"Inserire l'Area del Cerchio: ";
	cin>>a;
	r=sqrt((a/3.14));
	p=(2*3.14*r);
	cout<<"Il Perimetro del Cerchio e': ";
	cout<<p;
}

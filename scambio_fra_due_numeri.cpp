#include <iostream>
using namespace std;
int main()
{
	float n1,n2,vl;
	cout<<"Inserire Il Primo Numero: ";
	cin>>n1;
	cout<<"Inserire Il Secondo Numero: ";
	cin>>n2;
	vl=n1;
	n1=n2;
	n2=vl;
	cout<<"Ecco I Numeri Invertiti: ";
	cout<<n1<<"-"<<n2;
}

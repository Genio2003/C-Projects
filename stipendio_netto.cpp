#include <iostream>
using namespace std;
int main ()
{
	float sl,sn,IRPEF,INPS;
	cout<<"Inserire lo Stipendio Lordo:";
	cin>>sl;
	IRPEF=(sl*20/100);
	INPS=(sl*10/100);
	sn=(sl-IRPEF-INPS);
	cout<<"Lo Stipendio Netto e':"<<endl;
	cout<<sn;
}
	
	
	

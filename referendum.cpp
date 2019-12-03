#include <iostream>
using namespace std;
int main()
{
	int Ni,Nv,Ns,Nn;
	float Pv,Ps,Pn;
	cout<<"Inserire il Numero Di Persone Iscritte al Voto: ";
	cin>>Ni;
	cout<<"Inserire il Numero Di Persone Votanti: ";
	cin>>Nv;
	cout<<"Inserire il Numero Di SI: ";
	cin>>Ns;
	cout<<"Inserire il Numero Di NO: ";
	cin>>Nn;
	Pv=(Nv*100)/Ni;
	Ps=(Ns*100)/Nv;
	Pn=(Nn*100)/Nv;
	cout<<"Percentuale Votanti: "<<Pv<<"%"<<endl;
	cout<<"Percentuale SI: "<<Ps<<"%"<<endl;
	cout<<"Percentuale No: "<<Pn<<"%";
}

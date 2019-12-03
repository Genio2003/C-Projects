#include <iostream>
using namespace std;
int main()
{
	float N,Ns,Ps;
	cout<<"Inserire Il Prezzo Articolo: ";
	cin>>N;
	if (N>10)
	{
		Ns=(N*20)/100;
		Ps=(N-Ns);
		cout<<"Prezzo Scontato: "<<Ps<<endl;
		cout<<"Sconto Applicato: 20%";
	}
	else 
	{
		Ns=(N*10)/100;
		Ps=(N-Ns);
		cout<<"Prezzo Scontato: "<<Ps<<endl;
		cout<<"Sconto Applicato: 10%";
	}
}

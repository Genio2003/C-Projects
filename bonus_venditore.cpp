//Se vende meno di 1000Euro di merce non danno bonus, se vende tra 1000 e i 3000 ha in 10%, se supera i 3000 il bonus è di 5% sul eccesso!
#include <iostream>
using namespace std;
int main()
{
	float V,T,C,Vl,Vl2;
	cout<<"Inserire Totale Vendite: ";
	cin>>V;
	if (V<=1000)
	{
		cout<<"Niente Bonus!";
	}
	else
	{
		if (V<=3000)
		{
			cout<<"Bonus del 10%"<<endl;
			Vl=(V*10)/100;
			cout<<Vl;
		}
		else
		{
			cout<<"Bonus del 5% sull'Eccesso!"<<endl;
			Vl=(V-3000);
			Vl2=(Vl*5)/100;
			cout<<Vl2;
		}
	}
}

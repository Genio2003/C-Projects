#include <iostream>
using namespace std;
int main()
{
	int m;
	cout<<"Inserire il Numero del Mese: ";
	cin>>m;
	switch(m)
	{
		case 4:
		case 6:
		case 9:
		case 11:
		cout<<"I Giorni sono 30!";
		break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		cout<<"I Gioni sono 31!";
		break;
		case 2:
		cout<<"I Gioni sono 28/29!";
		break;
		default:
		cout<<"Tu non sai ufficialmente quanti sono Mesi!";
		break;
	}
}

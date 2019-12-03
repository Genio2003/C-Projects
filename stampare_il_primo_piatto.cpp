//Stampare il piatto del giorno in base al'corrente giorno della settimana!
#include <iostream>
using namespace std;
int main()
{
	int g;
	cout<<"Inserire il Giono della Settimana: ";
	cin>>g;
	switch (g)
	{
		case 1:
			cout<<"Pasta alla Matriciana!";
		break;
		case 2:
			cout<<"Spaghetti allo scoglio!";
		break;
		case 3:
			cout<<"Pasta Rossa!";
		break;
		case 4:
			cout<<"Cannelloni!";
		break;
		case 5:
			cout<<"Lasagna!";
		break;
		case 6:
			cout<<"Carbonara!";
		break;
		case 7:
			cout<<"Pasta al Pomodoro!";
		break;
		default:
			cout<<"Impara i Giorni Della Settimana! NiGGa!";
		break;
	}
}

#include <iostream>
using namespace std;
int main()
{
	int g;
	do
	{
		cout<<"Inserire il Giorni: ";
		cin>>g;
	}
	while (g<1 || g>7);
}

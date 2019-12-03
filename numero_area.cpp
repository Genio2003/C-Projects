#include <iostream>
using namespace std;
int main()
{
	float n1,A,Pi;
	Pi=(3.14);
	cout<<"Inserire Numero:";
	cin>>n1;
	if (n1>12)
	{
		cout<<"L'area del Cerchio e':"<<endl;
		A=(Pi*n1*n1);
		cout<<A;
	}
	else 
	{
		cout<<"L'area del Quadrato e':"<<endl;
		A=(n1*2);
		cout<<A;
	}
}

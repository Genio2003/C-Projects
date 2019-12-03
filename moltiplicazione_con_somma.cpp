#include <iostream>
using namespace std;
int main()
{
	int n1,n2,s=0,i=0;
	cout<<"Inserire il Primo Numero: ";
	cin>>n1;
	cout<<"Inserire il Secondo Numero: ";
	cin>>n2;
	while (i<n2)
	{
		s=s+n1;
		i++;
	}
	cout<<s;
}

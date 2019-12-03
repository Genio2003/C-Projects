#include <iostream>
using namespace std;
int main()
{
    float n1,n2;
    cout<<"Inserire Primo Numero:";
    cin>>n1;
    cout<<"Inserire Secondo Numero:";
    cin>>n2;
    if(n1>n2)
    {
        cout<<"I Numeri In Ordine Crescente Sono:";
		cout<<" "<<n2<<" ";
        cout<<n1;
        cout<<endl;
    }
    else 
    {
        cout<<"I Numeri In Ordine Crescente Sono:";
		cout<<" "<<n1<<" ";
        cout<<n2;
        cout<<endl;
    }
    system("pause");
}
    
 
    

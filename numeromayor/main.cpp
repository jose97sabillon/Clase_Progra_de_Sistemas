//ingresar tres numero y escribir el numero mayor
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
int n1, n2, n3;


int main()
{
    cout<<"ingresar numero 1...";
    cin>>n1;

    cout<<"Ingresar numeor2...";
    cin>>n2;

    cout <<"Ingresar numeor 3...";
    cin>>n3;

    if((n1> n2) and (n1>n3))
    {
        cout<< "Numero mayor es..."<<n1;
    }
    else if (n2>n3)
    {
        cout<<"Numero mayor es..."<<n2;
    }
    else
    {
        cout<<"Numero mayor es..."<<n3;
    }
    cout<<"\n";
     system ("Pause");

     if ((n1<n2) and (n2<n3))
     {
         cout<< "Los numeros son crecientes";
     }
     else if ((n1>n2) and (n2>n3))
     {
         cout<<"Los numeros son decrecientes";
     }

     else
     {
         cout<<"Los numeor estan en desorden";
     }
}

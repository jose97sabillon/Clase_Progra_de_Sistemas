#include <iostream>
#include <stdlib.h>

using namespace std;
int numero;

int main()
{
    cout << "Ingresar un numero";
    cin>> numero;

    if (numero>0)
    {
        cout<<"Es positivo";
    }
    else if (numero<0)
    {
        cout<<"Es negativo";
    }
    else
    {
        cout<<"es cero";
    }
    cout<<"\n";
    system("Pause");
}

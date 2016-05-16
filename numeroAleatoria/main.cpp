#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
    srand(time(0));
    int i;
    int n, numero;

    numero = 50 + rand() % (100-50);
    //%  mod
    //rango inicial + numeor generado
    cout <<"Valor de numero"<<numero<<"\n";

    system("Pause");
     return 0;

}

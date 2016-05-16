#include <iostream>

using namespace std;
int n;
int numero= 345;
int main()
{
    n= numero % 10;
        cout<<n;
        numero = numero/10;
        n= numero % 10;

        cout<<n;
        numero = numero/10;
        n= numero % 10;
}


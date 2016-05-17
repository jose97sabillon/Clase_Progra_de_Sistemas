#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main()
{
int numero,pmayor,pmenor,contador,suma;
float promedio;
contador=0;
pmayor=0;
pmenor=0;
suma=0;
char s='x';
char letra;

do{
do{
cout<<"Ingrese un numero...";
cin>>numero;}
while (numero%2!=0);

{
if
  (numero>pmayor)
  pmayor=numero;

if (numero<pmenor)
    pmenor=numero;}

suma=suma+numero;
contador++;
promedio=suma/contador;

cout<<"Desea continuar";
cin>>letra;}
while (letra=='s');
cout<<"Mayor :" <<pmayor<<"\n";
cout<<"Menor:"<<pmenor<<"\n";
cout <<"Promedio:"<<promedio<<"\n";

}

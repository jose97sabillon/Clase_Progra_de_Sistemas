#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int contador;
int numero;
int menor, suma, mayor, mayor50, suma50, promedio50;

int main()
{ srand(time(0));
   contador=0;
   suma=0;
   mayor=0;
   menor=100;
   mayor50=0;
   suma50=0;
   while (contador<10)
   {  numero =1 + rand() % (100-1);
      contador++;
      suma=suma+numero;
         if (mayor<numero)
         {
            mayor=numero;
         }
         if (menor>numero)
         {
            menor=numero;
         }
         if (numero>50)
         {
            mayor50++;
            suma50+=numero;
         }

      cout<<contador<<"Numero"<<numero<<"\n";
   }
   promedio50= suma50/mayor50;
   cout<<"promedio mayores a 50...."<<promedio50<<"\n";
   cout<<"numeros mayores a 50...."<<mayor50<<"\n";
   cout<<"Numero menor..."<<menor<<"\n";
   cout<<"Numero mayor..."<<mayor<<"\n";
   cout<<"suma de los numeros es..."<<suma<<"\n";
   cout<<"Final del programa"<<"\n";

}

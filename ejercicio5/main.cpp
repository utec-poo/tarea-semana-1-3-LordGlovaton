#include <iostream>
#include "Tipos.h"
using namespace std;

int main() {

#include <iostream>

using namespace std;

int main(){
  int numero;
  int contenedor;
  int contadorA=0;
  int contadorB=0;

  int numeros;
  int suma=0;

    do{ 
   cout<<"ingrese números"; 
   cin>>numeros; 
    
   if(numeros%2==0){
     contadorA++;
     if(numeros==0)
      contadorA--;
     }
   else
    contadorB++;
    }
    while(numeros!=0);
  
 int total=contadorA+contadorB;
 cout<<"números totales"<<total<<endl;
 cout<<"números pares"<<contadorA<<endl; 
 cout<<"números impares"<<contadorB<<endl;
 return 0;
    
}

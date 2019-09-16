#include <iostream>
#include "Tipos.h"
using namespace std;

int main(){
  int numero;
  int numero2;
  int digito;
  int contadorpar=0;
  int contadorimpar=0;
  int total=0;
  
  cout<<"ingrese un número de almenos 3 dígitos";
  cin>>numero;
  if (numero/100!=0){
    do{
      digito=numero%10;
      if(digito%2==0)
        contadorpar++;
      if(digito%2!=0)
        contadorimpar++;
      numero=numero/10;
      cout<<digito<<endl;
      
    }while(numero!=0);
    
    total=contadorpar + contadorimpar;
    
      cout<<"hay"<<contadorpar<<"par"<<endl;
      cout<<"hay"<<contadorimpar<<"impar"<<endl;
      cout<<"hay"<<total<<"digitos"<<endl;}
  else
    cout<<"el número que inserto no tiene 3 dígitos";

  return 0;
}

#include <iostream>
#include "Tipos.h"
using namespace std;


int main(){
  int numero;
  
 cout<<"número:";
 cin>>numero;

 if(numero>=10 and  numero<=30){
   for(int i=1;i<=numero;++i)
    cout<<(char(42));
 }
 else
  cout<<"esta fuera del rango";
  return 0;
}

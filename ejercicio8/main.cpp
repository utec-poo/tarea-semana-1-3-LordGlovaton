#include <iostream>
#include "Tipos.h"
using namespace std;

int main() {
  int filas=0;
cout<<"diga cantidad de filas del triangulo";
cin>>filas;

for(int i=0;i<filas;i++){
  for(int k=0;k<(i*2)+1;k++){
    cout<<"*";}
  cout<<endl;}
  
 return 0;
}



#include <iostream>
using namespace std;
entero main() {
  entero num,aux,resto, numinv=0;
  cout<<"ingre un número";
  cin>>num;

  aux=num;

  while(aux>0){

    resto=aux%10;
    aux=aux/10;
    numinv=numinv*10+resto;
    cout<<numinv<<endl;

  }

  if(numinv==num)
    cout<<"el número es capicúa";
  else
    cout<<"el número no es capicúa";

  return 0;
}

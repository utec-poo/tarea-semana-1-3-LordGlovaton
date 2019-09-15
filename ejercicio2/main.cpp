#include <iostream>
#include "Tipos.h"
using namespace std;

int main(){
int zona=0;
char dato;
cout<<"diga zona:";
cin>>zona;

cout<<"el  cliente es claro (responder V(verdadero) o F(falso):";
cin>>dato;
if (char(102)==dato){
    switch(zona){
    case 1: cout<<"Super Vip:"<<212<<" soles";
        break;
    case 2:cout<<"Vip:"<<170<<" soles";
        break;
    case 3:cout<<"Preferencial:"<<136<<" soles";
        break;
    case 4:cout<<"General: "<<59<<" soles";
        break;
    default:cout<<"No existe esa zona";
        break;
    }
}
if (char(118)==dato){
    switch(zona){
    case 1: cout<<"Super Vip:"<<212-(212*0.2)<<" soles";
        break;
    case 2:cout<<"Vip:"<<170-(212*0.2)<<" soles";
        break;
    case 3:cout<<"Preferencial:"<<136-(212*0.2)<<" soles";
        break;
    case 4:cout<<"General:"<<59-(212*0.2)<<" soles";  
        break;
    default:cout<<"No existe esa zona";
        break;
    }
}
}


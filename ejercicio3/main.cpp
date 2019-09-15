#include <iostream>
#include "Tipos.h"
using namespace std;

int main(){
    char letra;
    int numero;
    int x;    
    cout<<"diga letra:";
    cin>>letra;
    cout<<"diga numero:";
    cin>>numero;
    x=numero%2;
   
    if (letra== (char(97)) or (char(99)) or (char(101)) or (char(103))){
        
        if (x==0)  
            cout<<"es negro1";
        else
            cout<<"es blanco1";}
    else{
    if (letra== (char(98)) or (char(100)) or (char(102)) or (char(104))){
        if (x==0)
            cout<<"es blanco2";
        else
           cout<<"es negro2";}}
    
    return 0;
    
}


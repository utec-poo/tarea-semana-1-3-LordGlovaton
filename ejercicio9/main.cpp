#include <iostream>
#include "tipos.h"
#include "MyFunc.h"
using namespace std;
int main() {
    l_enteros segundos;
    enteros horas, min, seg;

    do {
        cout << "Segundos: ";
        cin >> segundos;
    } while (segundos <1);

     min=segundos/60;
    cout<<"minutos"<<min;
    seg=segundos%60;
    cout<<"segundos"<<seg;
    horas=min/60;
    cout<<"horas"<<horas;
cout<<"El resultado es"<<Convertir(segundos, horas, min, seg);
    return 0;
}

    return 0;
}

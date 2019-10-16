#include <iostream>
#include "triangulo.h"
using namespace std;

void ejemplo1(){
    longitud_t a;
    longitud_t b;
    longitud_t c;
    cout<<"Ingrese datos"<<endl;
    cin>>a>>b>>c;

    triangulo_t t1(a,b,c);

    cout<<"El area es "<<t1.calcular_area()<<endl;
    cout<<"El perimetro es "<<t1.perimetro()<<endl;
}


int main() {
    ejemplo1();


    return 0;
}
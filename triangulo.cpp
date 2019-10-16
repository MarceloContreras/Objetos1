//
// Created by utec on 16/10/19.
//
#include <math.h>
#include "triangulo.h"


triangulo_t::triangulo_t() {
    lado1=0;
    lado2=0;
    lado3=0;
}

triangulo_t::triangulo_t(longitud_t l1, longitud_t l2, longitud_t l3) {
    lado1=l1;
    lado2=l2;
    lado3=l3;
}

longitud_t triangulo_t::perimetro() {
    return (lado1+lado2+lado3);
}

longitud_t triangulo_t::semiperimetro() {
    return perimetro()/2;
}
area_t triangulo_t::calcular_area() {
    auto s= semiperimetro();
    auto& a=lado1;
    auto& b= lado2;
    auto& c= lado3;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}






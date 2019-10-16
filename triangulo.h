//
// Created by utec on 16/10/19.
//

#ifndef OBJETOS_TRIANGULO_H
#define OBJETOS_TRIANGULO_H

using longitud_t= double;
using area_t= double;


class triangulo_t{
    private:
        longitud_t lado1;
        longitud_t lado2;
        longitud_t lado3;
    public:
        triangulo_t();
        triangulo_t(longitud_t l1,longitud_t l2,longitud_t l3);
        //metodos gets;
        area_t calcular_area();
        longitud_t perimetro();
        longitud_t semiperimetro();



};


#endif //OBJETOS_TRIANGULO_H

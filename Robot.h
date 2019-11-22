//
// Created by Intel on 22/11/2019.
//

#ifndef UNTITLED3_ROBOT_H
#define UNTITLED3_ROBOT_H

#include "tipos.h"
#include "Coordenada.h"

class Robot {
private:
    Coordenada m_Posicion;
    Texto m_Producto;
public:
    Robot();
    Robot(Entero x, Entero y);
    Robot(Coordenada origen);

    void setProducto(Texto producto);       Texto getProducto();
    void setPosicion(Coordenada posicion);  Coordenada getPosicion();

    void ir_a(Coordenada pFinal);
    // void ejecutar(Orden orden);
    void recoger(Coordenada posicion, string producto);
};

#endif //UNTITLED3_ROBOT_H

//
// Created by Intel on 22/11/2019.
//

#ifndef UNTITLED3_SLOT_H
#define UNTITLED3_SLOT_H

#include "Coordenada.h"

class Slot{

private:

    Coordenada m_Posicion;
    Texto m_Producto = "";
public:
Slot(Coordenada m_Posicion);

void set_Producto(Texto m_Producto);    Texto get_Producto();
};
#endif //UNTITLED3_SLOT_H

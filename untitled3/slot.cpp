//
// Created by Intel on 22/11/2019.
//

#include "slot.h"
#include "tipos.h"
#include "Coordenada.h"

Slot::Slot(Coordenada m_Posicion) : m_Posicion(m_Posicion) {




}

void Slot::set_Producto(Texto m_Producto) {

    this-> m_Producto= m_Producto;
}

Texto Slot::get_Producto() {
    return Texto();
}

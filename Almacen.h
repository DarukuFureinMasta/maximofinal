//
// Created by Intel on 22/11/2019.
//

#ifndef UNTITLED3_ALMACEN_H
#define UNTITLED3_ALMACEN_H

#include "slot.h"
#include <vector>
#include "Robot.h"

class Almacen{
private:

    size_t x;
    size_t y;
    vector < vector<Slot*>> slots;
    Slot casa;
public:
    Almacen(size_t x , size_t y);
    void add_robot();

};
#endif //UNTITLED3_ALMACEN_H

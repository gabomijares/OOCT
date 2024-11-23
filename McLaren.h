#ifndef MCLAREN_H
#define MCLAREN_H

#include "Car.h"

class McLaren : public Car {
public:
    McLaren();
    void advance() override; 
};

#endif

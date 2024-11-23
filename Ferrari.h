#ifndef FERRARI_H
#define FERRARI_H

#include "Car.h"

class Ferrari : public Car {
public:
    Ferrari(); 
    void advance() override; 
};

#endif

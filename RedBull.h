#ifndef REDBULL_H
#define REDBULL_H

#include "Car.h"

class RedBull : public Car {
public:
    RedBull();
    void advance() override; 
};

#endif


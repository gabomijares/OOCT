#include "McLaren.h"
#include <cstdlib> 

McLaren::McLaren() : Car("McLaren", rand() % 2 + 1) {}

void McLaren::advance() {
    position += rand() % 7 + 1;
}


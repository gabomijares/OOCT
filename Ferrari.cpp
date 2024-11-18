#include "Ferrari.h"
#include <cstdlib> 

Ferrari::Ferrari() : Car("Ferrari", rand() % 2 + 2) {}

void Ferrari::advance() {
    if (pit_stop_time <= 0) {
        position += rand() % 5 + 2; 
    } else {
        pitStop();
    }
}

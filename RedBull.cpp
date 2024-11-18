#include "RedBull.h"
#include <cstdlib> 

RedBull::RedBull() : Car("RedBull", rand() % 3 + 1) {}

void RedBull::advance() {
    if (pit_stop_time <= 0) {
        position += rand() % 3 + 3; 
    } else {
        pitStop();
    }
}

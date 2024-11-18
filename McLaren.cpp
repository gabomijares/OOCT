#include "McLaren.h"
#include <cstdlib> 

McLaren::McLaren() : Car("McLaren", rand() % 2 + 1) {}

void McLaren::advance() {
    if (pit_stop_time <= 0) {
        position += rand() % 7 + 1;
    } else {
        pitStop();
    }
}

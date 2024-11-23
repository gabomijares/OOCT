#include "RedBull.h"
#include <cstdlib> 

RedBull::RedBull() : Car("RedBull", rand() % 3 + 1) {}

void RedBull::advance() {
    position += rand() % 3 + 3;
}


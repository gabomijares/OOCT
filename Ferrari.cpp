#include "Ferrari.h"
#include <cstdlib>

Ferrari::Ferrari() : Car("Ferrari", rand() % 2 + 2) {}

void Ferrari::advance() {
    position += rand() % 5 + 2;
}

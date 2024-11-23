#include "Motorcycle.h"

void Motorcycle::drive() {
    for (int i = 0; i <= this->max_speed / 2; i++) {
        std::cout << i << "\t"; 
    }
    std::cout << std::endl;
}
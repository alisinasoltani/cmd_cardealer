#include "Car.h"

void Car::drive() {
    for (int i = 0; i <= this->max_speed; i++) {
        std::cout << i << "\t"; 
    }
    std::cout << std::endl;
}
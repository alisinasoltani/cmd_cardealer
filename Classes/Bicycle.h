#include "Rent.h"
#include "Vehicle.h"
#include <iostream>
#include <chrono>

#ifndef __BICYCLE__
    #define __BICYCLE__
    class Bicycle: public Rent, Vehicle {
        public:
            Bicycle(std::string name, std::string model, std::string manufacturer, double rent_price, int max_speed):
            Rent(name, model, manufacturer, rent_price, true), Vehicle(max_speed) {}

            void drive() override;
    };
#endif
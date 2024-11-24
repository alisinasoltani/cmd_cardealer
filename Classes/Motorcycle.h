#include "Sell.h"
#include "Rent.h"
#include "Vehicle.h"
#include <iostream>
#include <chrono>

#ifndef __MOTORCYCLE__
    #define __MOTORCYCLE__
    class Motorcycle: public Sell, Rent, Vehicle {
        public:
            Motorcycle(std::string name, std::string model, std::string manufacturer, double sell_price, double rent_price, int max_speed):
            Sell(name, model, manufacturer, sell_price, true), Rent(name, model, manufacturer, rent_price, true), Vehicle(max_speed) {}

            void drive() override;
    };
#endif
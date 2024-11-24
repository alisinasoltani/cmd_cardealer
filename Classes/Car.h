#include "Sell.h"
#include "Vehicle.h"
#include <iostream>
#include <chrono>

#ifndef __CAR__
    #define __CAR__
    class Car: public Sell, Vehicle {
        public:
            Car(std::string name, std::string model, std::string manufacturer, double price, int max_speed):
            Sell(name, model, manufacturer, price, true), Vehicle(max_speed) {};

            void drive() override;
    };
#endif
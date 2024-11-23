#include "Sell.h"
#include "Vehicle.h"
#include <iostream>
#include <chrono>

#ifndef __CAR__
    #define __CAR__
    class Car: public Sell, Vehicle {
        public:
            Car(std::string name, std::string model, std::string manufacturer, std::time_t date_of_creation, double price, int max_speed):
            Sell(name, model, manufacturer, date_of_creation, price, true), Vehicle(max_speed) {};

            void drive() override;
    };
#endif
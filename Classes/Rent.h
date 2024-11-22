#include <iostream>
#include <chrono>
#include "Item.h"

#ifndef __RENT__
    #define __RENT__
    class Rent: public Item {
        protected:
            double price_per_day;
            bool is_available_for_rent;
        
        public:
            Rent(): Item("", "", "", std::chrono::system_clock::to_time_t(std::chrono::system_clock::now())) {}
            Rent(std::string name, std::string model, std::string manufacturer, std::time_t dateOfCreation, double price_per_day, bool is_available_for_rent): 
            Item(name, model, manufacturer, date_of_creation), price_per_day(price_per_day), is_available_for_rent(is_available_for_rent) {}
            Rent(const Rent &obj);
            void show_info() const override;
            double getPricePerDay() const;
            bool is_rent_available() const;
    };
#endif
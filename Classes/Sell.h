#include <iostream>
#include "Item.h"
#include <chrono>

#ifndef __SELL__
    #define __SELL__
    class Sell: public Item {
        protected:
            double price;
            bool is_available_for_sale;
        
        public:
            Sell(): Item("", "", "", std::chrono::system_clock::to_time_t(std::chrono::system_clock::now())) {}
            Sell(std::string name, std::string model, std::string manufacturer, std::time_t dateOfCreation, double price, bool is_available_for_sale): 
            Item(name, model, manufacturer, date_of_creation), price(price), is_available_for_sale(is_available_for_sale) {}
            Sell(const Sell &obj);
            void show_info() const override;
            double getPrice();
            bool is_available_sale();
    };
#endif
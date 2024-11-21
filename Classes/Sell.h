#include <iostream>
#include "Item.h"

#ifndef __SELL__
    #define __SELL__
    class Sell: public Item {
        protected:
            double price;
            bool is_available_for_sale;
        
        public:
            Sell(std::string name, std::string model, std::string manufacturer, std::time_t dateOfCreation, double price, bool is_available_for_sale): Item(name, model, manufacturer, date_of_creation) {}
            Sell(const Sell &obj);
            void show_info() const override;
            std::string getPrice();
            bool is_available();
    };
#endif
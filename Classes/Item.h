#include <iostream>

#ifndef __Item__
    #define __Item__
    class Item {
        protected:
            std::string name;
            std::string model;
            std::string manufacturer;
            std::time_t date_of_creation;

        public:
            Item(std::string name, std::string model, std::string manufacturer, std::time_t date_of_creation): name(name), model(model), manufacturer(manufacturer), date_of_creation(date_of_creation) {}
            Item(const Item& item);
            std::string getName() const;
            std::string getModel() const;
            std::string getManufacturer() const;
            std::time_t getDateOfCreation() const;
            void virtual show_info() const = 0;
    };
#endif
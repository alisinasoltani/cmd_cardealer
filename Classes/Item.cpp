#include <iostream>
#include <chrono>
#include "Item.h"

Item::Item(const Item& item) {
    this->name = item.name;
    this->model = item.model;
    this->manufacturer = item.manufacturer;
    this->date_of_creation = item.date_of_creation;
}

std::string Item::getName() const {
    return this->name;
}
std::string Item::getModel() const {
    return this->model;
}
std::string Item::getManufacturer() const {
    return this->manufacturer;
}
std::time_t Item::getDateOfCreation() const {
    return this->date_of_creation;
}
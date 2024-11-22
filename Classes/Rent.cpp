#include "Rent.h"
#include <iostream>

void Rent::show_info() const {
    std::string creation_date = std::ctime(&this->date_of_creation);
    std::cout << this->name << "(" << this->model << ") made at " << creation_date 
    << "\nby " << this->manufacturer << "\nprice: " << this->price_per_day
    << this->is_available_for_rent ? " [in stock for rent]" : " [out of stock for rent]";
}

double Rent::getPricePerDay() const {
    return this->price_per_day;
}

bool Rent::is_rent_available() const {
    return this->is_available_for_rent;
}

Rent::Rent(const Rent &obj): Item(obj.name, obj.model, obj.manufacturer, obj.date_of_creation) {
    this->price_per_day = obj.price_per_day;
    this->is_available_for_rent = obj.is_available_for_rent;
}
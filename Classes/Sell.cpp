#include "Sell.h"
#include <iostream>

void Sell::show_info() const {
    std::string creation_date = std::ctime(&this->date_of_creation);
    std::cout << this->name << "(" << this->model << ") made at " << creation_date 
    << "\nby " << this->manufacturer << "\nprice: " << this->price
    << this->is_available_for_sale ? " [in stock]" : " [out of stock]";
}

double Sell::getPrice() {
    return this->price;
}

bool Sell::is_available() {
    return this->is_available_for_sale;
}

Sell::Sell(const Sell &obj): Item(obj.name, obj.model, obj.manufacturer, obj.date_of_creation) {
    this->price = obj.price;
    this->is_available_for_sale = obj.is_available_for_sale;
}
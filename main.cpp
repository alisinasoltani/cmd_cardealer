#include <iostream>
#include "allheaders.h"

int main() {
    Auth auth;
    Linkedlist items_list;
    std::string username, password, message_text, image_path;
    while (1) {
        std::cout << MAGENTA "Username: " RESET << std::endl;
        std::cin >> username;
        std::cout << MAGENTA "Password: " RESET << std::endl;
        std::cin >> password;
        int id = auth.is_authenticated(username, password);
        if (id != 0) {
            system("cls");
            int choice;
            std::cout << BOLDRED "Welcome!" RESET << std::endl;
            if (username == "admin") {
                std::cout << "choose an option:\n1. add a vehicle\n2. remove a vehicle\n3. all rents\n4. all sells\n5. show all items" << std::endl;
                std::cin >> choice;
                std::string name, model, manufacturer;
                double sell_price, rent_price;
                int max_speed;
                switch (choice) {
                    case 1:
                        std::cout << "which vehicle are you going to add?\n1. Car\n2. Motorcycle\n3. Bicycle\n0. back" << std::endl;
                        std::cin >> choice;
                        switch (choice) {
                            case 1:
                                {
                                    std::cout << "Enter car name:\t";
                                    std::cin >> name;
                                    std::cout << std::endl;
                                    std::cout << "Enter car model:\t";
                                    std::cin >> model;
                                    std::cout << std::endl;
                                    std::cout << "Enter the manufacturer:\t";
                                    std::cin >> manufacturer;
                                    std::cout << std::endl;
                                    std::cout << "sell price:\t";
                                    std::cin >> sell_price;
                                    std::cout << std::endl;
                                    std::cout << "max speed:\t";
                                    std::cin >> max_speed;
                                    std::cout << std::endl;
                                    Car car(name, model, manufacturer, sell_price, max_speed);
                                    items_list.appendNode(&car);
                                }
                                break;
                            
                            case 2:
                                {
                                    std::cout << "Enter motorcycle name:\t";
                                    std::cin >> name;
                                    std::cout << std::endl;
                                    std::cout << "Enter motorcycle model:\t";
                                    std::cin >> model;
                                    std::cout << std::endl;
                                    std::cout << "Enter the manufacturer:\t";
                                    std::cin >> manufacturer;
                                    std::cout << std::endl;
                                    std::cout << "sell price:\t";
                                    std::cin >> sell_price;
                                    std::cout << "rent price:\t";
                                    std::cin >> rent_price;
                                    std::cout << std::endl;
                                    std::cout << "max speed:\t";
                                    std::cin >> max_speed;
                                    std::cout << std::endl;
                                    // Motorcycle motor(name, model, manufacturer, sell_price, rent_price, max_speed);
                                    // items_list.appendNode(&motor);
                                }
                                break;
                            
                            case 3:
                                {
                                    std::cout << "Enter bicycle name:\t";
                                    std::cin >> name;
                                    std::cout << std::endl;
                                    std::cout << "Enter bicycle model:\t";
                                    std::cin >> model;
                                    std::cout << std::endl;
                                    std::cout << "Enter the manufacturer:\t";
                                    std::cin >> manufacturer;
                                    std::cout << std::endl;
                                    std::cout << "rent price:\t";
                                    std::cin >> rent_price;
                                    std::cout << std::endl;
                                    std::cout << "max speed:\t";
                                    std::cin >> max_speed;
                                    std::cout << std::endl;
                                    Bicycle bike(name, model, manufacturer, rent_price, max_speed);
                                    items_list.appendNode(&bike);
                                }
                                break;
                            
                            case 0:
                                std::cout << CYAN "back..." RESET << std::endl;
                                break;

                            default:
                                std::cout << BOLDRED "command not found!" RESET << std::endl;
                                break;
                        }
                        break;
                    
                    default:
                        break;
                }
            }
        }
    }
    return 0;
}
#include "linkedlist.h"
#include <iostream>

void Linkedlist::appendNode(Item *new_item) {
    Node* new_node = new Node;
    new_node->next = nullptr;
    Node *temp = this->head;
    new_node->data = new_item;
    if (this->head == nullptr) {
        this->head = new_node;
    } else {
        while (temp->next != nullptr) {
            temp = temp->next;    
        }
        temp->next = new_node;
    }
}

void Linkedlist::deleteNode(std::string name, std::string model) {
    if (this->head == nullptr) {
        std::cout << "no node found!" << std::endl;
        return;
    }
    Node *temp = this->head;
    if (this->head->data->getName() == name && this->head->data->getModel() == model) {
        temp = this->head->next;
        delete head;
        this->head = temp;
    }
    while (temp->next != nullptr) {
        if (temp->data->getName() == name && temp->data->getModel() == model) {
            Node *deleted_node = temp->next;
            temp->next = temp->next->next;
            delete deleted_node;
        }
    }
    std::cout << "node deleted successfully" << std::endl;
}

void Linkedlist::printList() {
    Node *temp = this->head;
    while (temp->next != nullptr) {
        temp->data->show_info();
        temp = temp->next;
    }
}

Node *Linkedlist::findNode(Item *new_item) {
    Node *temp = this->head;
    while (temp->next != nullptr) {
        if (temp->data->getName() == new_item->getName() && temp->data->getModel() == new_item->getModel()) {
            return temp;
        }
        temp = temp->next;
    }
    std::cout << "Node Not Found!" << std::endl;
    return nullptr;
}

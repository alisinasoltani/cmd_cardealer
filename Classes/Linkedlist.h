#include "Item.h"

#ifndef __LINKEDLIST__
    #define __LINKEDLIST__
    struct Node {
        Node *next;
        Item *data;
        Node() {
            next = nullptr;
            data = nullptr;
        }
    };
    
    class Linkedlist {
        private:
            Node *head;
            
        public:
            void appendNode(Item *new_item);
            void deleteNode(std::string name, std::string model);
            void printList();
            Node *findNode(Item *new_item);
    };
#endif
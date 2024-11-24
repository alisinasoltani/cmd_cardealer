#include "Item.h"

#ifndef __LINKEDLIST__
    #define __LINKEDLIST__
    struct Node {
        Item *next;
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
            void appendNode(const Item &new_Item);
            void deleteNode(const Item &new_Item);
            void printList();
            Node *findNode(const Item &new_item);
    };
#endif
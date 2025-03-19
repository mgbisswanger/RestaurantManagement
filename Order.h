#ifndef ORDER_H
#define ORDER_H

#include <vector>
    using std::vector;
#include "Item.h"

class Order {
    public:
        Order() = default;
        void addItem(Item item);
    private:
        vector<Item> itemsInOrder;
};

#endif
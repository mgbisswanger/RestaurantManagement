#ifndef MENU_H
#define MENU_H

#include "Item.h"

class Menu {
    public:
        Menu(Item items[], int size);
        ~Menu();
    private:
        Item* menuItems;
        int size;
};

#endif
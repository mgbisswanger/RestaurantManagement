#ifndef ITEM_H
#define ITEM_H

#include "Ingredient.h"
#include <string>
    using std::string;

class Item {
public:
    Item(string name, double price, Ingredient ingredients[], int size);
    Item();
    ~Item();
private:
    string name;
    double price;
    //Ingredient* ingredients; // make you a dynamic / elastic array in the future
};

#endif
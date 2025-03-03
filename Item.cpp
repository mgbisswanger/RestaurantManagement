#include "Item.h"

Item::Item(string name, double price, Ingredient ingredients[], int size)
{
    this->name = name;
    this->price = price;

    this->ingredients = new Ingredient[size];
    for (int i = 0; i < size; i++) {
        this->ingredients[i] = ingredients[i];
    }
}

Item::~Item()
{
    delete [] ingredients;
}

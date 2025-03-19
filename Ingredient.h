#ifndef INGREDIENT_H
#define INGREDIENT_H

#include <string>
    using std::string;

class Ingredient {
    public:
        Ingredient(string name, double quantity) : name{name}, quantity{quantity} {};
        Ingredient() = default;
    private:
        string name;
        double quantity;
};

#endif
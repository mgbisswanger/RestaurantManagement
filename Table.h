#ifndef TABLE_H
#define TABLE_H

#include <vector>
#include <string>

class Table {
private:
    int tableNumber;
    std::vector<std::string> orders;

public:
    Table(int number);
    void addOrder(const std::string&    itemName);
    void removeOrder(const std::string& itemName);
    void displayOrders() const;
    int getTableNumber() const;
};

#endif // TABLE_H


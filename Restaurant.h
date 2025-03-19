#ifndef RESTAURANT_H
#define RESTAURANT_H

#include "Table.h"
#include <vector>
    using std::vector;

class Restaurant {
    public:
        Restaurant() = default;
        void printTables() const;
        void printWaitlist() const;
        void seatCustomers();
    private:
        const static int NUM_TABLES = 5; //have 25 tables
        //Tables need to be in order from least to greatest.
        //This ensures the smallest tables get seated at first before the
        //bigger ones.
        //Most tables will hold 4 people and we'll have 2 tables of 10 people, and 3 of 6 people
        //if more than 4 show up, combine tables
        //Bar that can seat up to 7 (each seat is a table of 1)
        Table tables[NUM_TABLES] = {Table(4), Table(4), Table(4), Table(4), Table(4)};

        vector<int> waitlist; // keep as vector be sure to wait if only party table is available
};  

#endif
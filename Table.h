#ifndef TABLE_H
#define TABLE_H

#include <string>

class Table {
    public: 
        Table(int max_capacity) : max_capacity{max_capacity} {};
        int get_max_capacity() const { return max_capacity; };
        std::string get_status() const { return status; };
        void seat_people(int num);

    private:
        int max_capacity;
        int num_of_people = 0;
        // status will be open, occupied, or dirty
        std::string status = "open";
        //Order orders[max_capacity]; //maybe make dynamic????

        void set_status_to_open() { status = "open"; };
        void set_status_to_occupied() { status = "occupied"; };
        void set_status_to_dirty() { status = "dirty"; };
};

#endif
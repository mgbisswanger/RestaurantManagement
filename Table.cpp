#include "Table.h"
#include <stdexcept>

void Table::seat_people(int num)
{
    if (num > max_capacity || num < 0)
        throw std::out_of_range("Invalid number of people.");

    num_of_people = num;

    set_status_to_occupied();
}

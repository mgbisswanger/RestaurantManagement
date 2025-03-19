
#include <iostream>
#include <limits>
#include "Restaurant.h"

void Restaurant::printTables() const
{
    for (int i = 0; i < NUM_TABLES; i++) {
        std::cout << "Table " << i << ": " << tables[i].get_status() << std::endl;
    }
}

void Restaurant::printWaitlist() const
{
    for (int group : waitlist) {
        std::cout << group << std::endl;
    }
}

void Restaurant::seatCustomers()
{
    //TODO add a feature that lets you know if you're party is too big and needs to be split up
    //For now, just have a sign that says only parties of # and below
    //maybe figure out a system for seating people at bigger tables sometimes and other times waiting for a smaller table to open up
    int numOfGuests;
    std::cout << "How many guests in group: ";
    std::cin >> numOfGuests;
    if (!(numOfGuests < 1 || numOfGuests > 4)) {
        int can_seat = false;
        for (int i = 0; i < NUM_TABLES; i++) {
            if (tables[i].get_status() == "open" && numOfGuests <= tables[i].get_max_capacity()) {
                can_seat = true;
                tables[i].seat_people(numOfGuests);
                i = NUM_TABLES;
            }
        }
        if (!can_seat) {
            std::cout << "Added to waitlist." << std::endl;
            waitlist.push_back(numOfGuests);
        }
    } else {
        std::cin.ignore( std::numeric_limits<std::streamsize>::max( ), '\n' );
        std::cout << "Invalid number. Party sizes must be between 1 and 4." << std::endl;
    }
}
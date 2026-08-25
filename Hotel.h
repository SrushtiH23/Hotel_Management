#ifndef HOTEL_H
#define HOTEL_H

#include <vector>
#include <string>
#include "Room.h"

class Hotel
{
private:
    std::vector<Room> rooms;

    int availableFood;
    int availableWater;
    int availableDrinks;

    int soldFood;
    int soldWater;
    int soldDrinks;

    int roomRevenue;
    int foodRevenue;
    int waterRevenue;
    int drinksRevenue;

public:
    Hotel();

    // Room management
    void addRoom(int roomNumber, std::string type, double price);
    void showAvailableRooms();
    void showAllRooms();
    void bookRoom(int roomNumber);
    void checkoutRoom(int roomNumber);

    // Owner / inventory functions
    void addFood(int quantity);
    void addWater(int quantity);
    void addDrinks(int quantity);

    void showInventory();
    void showSales();

    // Customer functions
    void orderFood(int quantity);
    void orderWater(int quantity);
    void orderDrinks(int quantity);
};

#endif
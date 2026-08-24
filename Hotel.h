#ifndef HOTEL_H
#define HOTEL_H

class Hotel
{
private:
    int availableRooms;
    int availableFood;
    int availableWater;
    int availableDrinks;

    int soldRooms;
    int soldFood;
    int soldWater;
    int soldDrinks;

    int roomRevenue;
    int foodRevenue;
    int waterRevenue;
    int drinksRevenue;

public:

    Hotel();

    // Owner functions
    void addRooms(int quantity);
    void addFood(int quantity);
    void addWater(int quantity);
    void addDrinks(int quantity);

    void showInventory();
    void showSales();

    // Customer functions
    void orderRooms(int quantity);
    void orderFood(int quantity);
    void orderWater(int quantity);
    void orderDrinks(int quantity);
};

#endif
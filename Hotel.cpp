#include <iostream>
#include "Hotel.h"

using namespace std;

Hotel::Hotel()
{
    
    availableFood = 0;
    availableWater = 0;
    availableDrinks = 0;

   
    soldFood = 0;
    soldWater = 0;
    soldDrinks = 0;

    roomRevenue = 0;
    foodRevenue = 0;
    waterRevenue = 0;
    drinksRevenue = 0;
}


// OWNER FUNCTIONS

void Hotel::addRoom(int roomNumber, std::string type, double price)
{
    for (const Room &room : rooms)
    {
        if (room.getRoomNumber() == roomNumber)
        {
            cout << "Room " << roomNumber << " already exists.\n";
            return;
        }
    }

    rooms.push_back(Room(roomNumber, type, price));

    cout << "Room " << roomNumber << " added successfully.\n";
}


void Hotel::addFood(int quantity)
{
    availableFood += quantity;
}

void Hotel::addWater(int quantity)
{
    availableWater += quantity;
}

void Hotel::addDrinks(int quantity)
{
    availableDrinks += quantity;
}


void Hotel::showInventory()
{
    cout << "\n----- CURRENT INVENTORY -----\n";
    cout << "Available Food Items: " << availableFood << endl;
    cout << "Available Water Bottles: " << availableWater << endl;
    cout << "Available Drinks: " << availableDrinks << endl;
}


void Hotel::showSales()
{
    cout << "\n----- SALES REPORT -----\n";

    cout << "Food Sold: " << soldFood
         << " | Revenue: Rs." << foodRevenue << endl;

    cout << "Water Sold: " << soldWater
         << " | Revenue: Rs." << waterRevenue << endl;

    cout << "Drinks Sold: " << soldDrinks
         << " | Revenue: Rs." << drinksRevenue << endl;

    int totalRevenue =
        roomRevenue +
        foodRevenue +
        waterRevenue +
        drinksRevenue;

    cout << "\nTOTAL REVENUE: Rs." << totalRevenue << endl;
}


// ---------------- CUSTOMER FUNCTIONS ----------------

void Hotel::bookRoom(int roomNumber)
{
    for (Room &room : rooms)
    {
        if (room.getRoomNumber() == roomNumber)
        {
            if (room.getAvailability())
            {
                room.bookRoom();
                roomRevenue += room.getPrice();
            }
            else
            {
                cout << "Room " << roomNumber << " is already booked.\n";
            }

            return;
        }
    }

    cout << "Room not found.\n";
}
void Hotel::checkoutRoom(int roomNumber)
{
    for (Room &room : rooms)
    {
        if (room.getRoomNumber() == roomNumber)
        {
            room.checkoutRoom();
            return;
        }
    }

    std::cout << "Room not found.\n";
}
void Hotel::showAvailableRooms()
{
    std::cout << "\n--- AVAILABLE ROOMS ---\n";

    for (const Room &room : rooms)
    {
        if (room.getAvailability())
        {
            room.displayRoom();
            std::cout << std::endl;
        }
    }
}
void Hotel::showAllRooms()
{
    std::cout << "\n--- ALL ROOMS ---\n";

    for (const Room &room : rooms)
    {
        room.displayRoom();
        std::cout << std::endl;
    }
}


void Hotel::orderFood(int quantity)
{
    if (quantity <= availableFood)
    {
        availableFood -= quantity;

        soldFood += quantity;

        int cost = quantity * 500;

        foodRevenue += cost;

        cout << "\nFood ordered successfully!";
        cout << "\nTotal cost: Rs." << cost << endl;
    }
    else
    {
        cout << "\nNot enough food items available.\n";
    }
}


void Hotel::orderWater(int quantity)
{
    if (quantity <= availableWater)
    {
        availableWater -= quantity;

        soldWater += quantity;

        int cost = quantity * 50;

        waterRevenue += cost;

        cout << "\nWater ordered successfully!";
        cout << "\nTotal cost: Rs." << cost << endl;
    }
    else
    {
        cout << "\nNot enough water bottles available.\n";
    }
}


void Hotel::orderDrinks(int quantity)
{
    if (quantity <= availableDrinks)
    {
        availableDrinks -= quantity;

        soldDrinks += quantity;

        int cost = quantity * 100;

        drinksRevenue += cost;

        cout << "\nDrinks ordered successfully!";
        cout << "\nTotal cost: Rs." << cost << endl;
    }
    else
    {
        cout << "\nNot enough drinks available.\n";
    }
}
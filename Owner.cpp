#include <iostream>
#include "Hotel.h"

using namespace std;

void ownerMenu(Hotel &hotel)
{
    int choice;
    int quantity;

    do
    {
        cout << "\n\n----- OWNER MENU -----\n";

        cout << "1. Add Rooms\n";
        cout << "2. Add Food Items\n";
        cout << "3. Add Water Bottles\n";
        cout << "4. Add Drinks\n";
        cout << "5. Show Inventory\n";
        cout << "6. Show Sales Report\n";
        cout << "7. Back\n";

        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter number of rooms to add: ";
                cin >> quantity;

                hotel.addRooms(quantity);
                break;

            case 2:
                cout << "Enter number of food items to add: ";
                cin >> quantity;

                hotel.addFood(quantity);
                break;

            case 3:
                cout << "Enter number of water bottles to add: ";
                cin >> quantity;

                hotel.addWater(quantity);
                break;

            case 4:
                cout << "Enter number of drinks to add: ";
                cin >> quantity;

                hotel.addDrinks(quantity);
                break;

            case 5:
                hotel.showInventory();
                break;

            case 6:
                hotel.showSales();
                break;
        }

    } while(choice != 7);
}
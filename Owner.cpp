#include <iostream>
#include <string>
#include "Hotel.h"

using namespace std;

void ownerMenu(Hotel &hotel)
{
    int choice;
    int quantity;

    int roomNumber;
    string roomType;
    double roomPrice;

    do
    {
        cout << "\n\n----- OWNER MENU -----\n";

        cout << "1. Add Room\n";
        cout << "2. View All Rooms\n";
        cout << "3. Add Food Items\n";
        cout << "4. Add Water Bottles\n";
        cout << "5. Add Drinks\n";
        cout << "6. Show Inventory\n";
        cout << "7. Show Sales Report\n";
        cout << "8. Back\n";

        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "\nEnter room number: ";
                cin >> roomNumber;

                cout << "Enter room type: ";
                cin >> roomType;

                cout << "Enter room price: ";
                cin >> roomPrice;

                hotel.addRoom(roomNumber, roomType, roomPrice);
                break;

            case 2:
                hotel.showAllRooms();
                break;

            case 3:
                cout << "Enter number of food items to add: ";
                cin >> quantity;

                hotel.addFood(quantity);
                break;

            case 4:
                cout << "Enter number of water bottles to add: ";
                cin >> quantity;

                hotel.addWater(quantity);
                break;

            case 5:
                cout << "Enter number of drinks to add: ";
                cin >> quantity;

                hotel.addDrinks(quantity);
                break;

            case 6:
                hotel.showInventory();
                break;

            case 7:
                hotel.showSales();
                break;

            case 8:
                cout << "\nReturning to main menu...\n";
                break;

            default:
                cout << "\nInvalid choice.\n";
        }

    } while(choice != 8);
}
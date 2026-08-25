#include <iostream>
#include "Hotel.h"

using namespace std;

void customerMenu(Hotel &hotel)
{
    int choice;
    int quantity;
    int roomNumber;

    do
    {
        cout << "\n\n----- CUSTOMER MENU -----\n";

        cout << "1. View Available Rooms\n";
        cout << "2. Book a Room\n";
        cout << "3. Checkout a Room\n";
        cout << "4. Order Food\n";
        cout << "5. Order Water\n";
        cout << "6. Order Drinks\n";
        cout << "7. Back\n";

        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                hotel.showAvailableRooms();
                break;

            case 2:
                cout << "Enter room number to book: ";
                cin >> roomNumber;

                hotel.bookRoom(roomNumber);
                break;

            case 3:
                cout << "Enter room number to checkout: ";
                cin >> roomNumber;

                hotel.checkoutRoom(roomNumber);
                break;

            case 4:
                cout << "Enter number of food items: ";
                cin >> quantity;

                hotel.orderFood(quantity);
                break;

            case 5:
                cout << "Enter number of water bottles: ";
                cin >> quantity;

                hotel.orderWater(quantity);
                break;

            case 6:
                cout << "Enter number of drinks: ";
                cin >> quantity;

                hotel.orderDrinks(quantity);
                break;

            case 7:
                cout << "\nReturning to main menu...\n";
                break;

            default:
                cout << "\nInvalid choice.\n";
        }

    } while(choice != 7);
}
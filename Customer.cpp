#include <iostream>
#include "Hotel.h"

using namespace std;

void customerMenu(Hotel &hotel)
{
    int choice;
    int quantity;

    do
    {
        cout << "\n\n----- CUSTOMER MENU -----\n";

        cout << "1. Book Rooms\n";
        cout << "2. Order Food\n";
        cout << "3. Order Water\n";
        cout << "4. Order Drinks\n";
        cout << "5. Back\n";

        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter number of rooms: ";
                cin >> quantity;

                hotel.orderRooms(quantity);
                break;

            case 2:
                cout << "Enter number of food items: ";
                cin >> quantity;

                hotel.orderFood(quantity);
                break;

            case 3:
                cout << "Enter number of water bottles: ";
                cin >> quantity;

                hotel.orderWater(quantity);
                break;

            case 4:
                cout << "Enter number of drinks: ";
                cin >> quantity;

                hotel.orderDrinks(quantity);
                break;
        }

    } while(choice != 5);
}
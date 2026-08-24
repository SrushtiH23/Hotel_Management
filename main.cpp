#include <iostream>
#include "Hotel.h"

using namespace std;

void ownerMenu(Hotel &hotel);
void customerMenu(Hotel &hotel);

int main()
{
    Hotel hotel;

    int choice;

    do
    {
        cout << "\n\n===== HOTEL MANAGEMENT SYSTEM =====\n";

        cout << "1. Customer\n";
        cout << "2. Owner\n";
        cout << "3. Exit\n";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                customerMenu(hotel);
                break;

            case 2:
                ownerMenu(hotel);
                break;

            case 3:
                cout << "\nThank you!\n";
                break;

            default:
                cout << "\nInvalid choice!\n";
        }

    } while(choice != 3);

    return 0;
}
#pragma once
#include <string>

class Room
{
private:
    int roomNumber;
    std::string roomType;
    double price;
    bool isAvailable;

public:
    Room(int number, std::string type, double roomPrice);

    int getRoomNumber() const;
    std::string getRoomType() const;
    double getPrice() const;
    bool getAvailability() const;

    void bookRoom();
    void checkoutRoom();

    void displayRoom() const;
};
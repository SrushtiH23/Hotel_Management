#include<iostream>
#include "Room.h"

Room::Room(int number, std::string type, double roomPrice)
{
    roomNumber = number;
    roomType = type;
    price = roomPrice;
    isAvailable = true;
}
 
int Room::getRoomNumber() const
{
    return roomNumber;
}
std::string Room::getRoomType() const
{
    return roomType;
}
double Room::getPrice() const
{
    return price;
}
bool Room::getAvailability() const
{
    return isAvailable;
}
void Room::bookRoom()
{
    if (isAvailable)
    {
        isAvailable = false;
        std::cout << "Room " << roomNumber << " booked successfully!" << std::endl;
    }
    else
    {
        std::cout << "Room " << roomNumber << " is already booked." << std::endl;
    }
}
void Room::checkoutRoom()
{
    if (!isAvailable)
    {
        isAvailable = true;
        std::cout << "Room " << roomNumber << " checked out successfully!" << std::endl;
    }
    else
    {
        std::cout << "Room " << roomNumber << " is not currently booked." << std::endl;
    }
}

void Room::displayRoom() const
{
    std::cout << "Room Number: " << roomNumber << std::endl;
    std::cout << "Room Type: " << roomType << std::endl;
    std::cout << "Price: Rs." << price << std::endl;
    std::cout << "Availability: " << (isAvailable ? "Available" : "Booked") << std::endl;
}
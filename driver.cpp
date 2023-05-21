#include "driver.h"

int Driver::defaultDriverCounter = 1;

Driver::Driver()
{
    // Default constructor implementation
    this->username = "driver-" + this->defaultDriverCounter;
    this->password = "password-" + this->defaultDriverCounter;
    this->name = generateName();
    this->phoneNum = generatePhoneNumber(4);
    this->balance = 0;
    this->defaultDriverCounter++;
}

Driver::Driver(string username, string password, string name, string phoneNum, double balance)
{
    this->username = username;
    this->password = password;
    this->name = name;
    this->phoneNum = phoneNum;
    this->balance = balance;
    // Constructor with required data implementation
}

void Driver::setOrderDelivered(Order* order)
{
    // Function implementation
}

void Driver::deliverOrder(Order* order)
{
    // Function implementation
}

void Driver::returnCashToShop()
{
    // Function implementation
}

Driver::~Driver()
{
    // Destructor implementation
}

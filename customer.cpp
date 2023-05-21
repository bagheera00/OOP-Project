#include "customer.h"
#include "order.h"
#include "app.h"

Customer::Customer(App* app, string username, string password, string name, string phoneNum, double balance)
{
    // Constructor implementation
}

Order* Customer::createOrder()
{
    // Function implementation
    return nullptr; // Placeholder return statement
}

void Customer::addToOrder(Order* order, string FlowerName, int amount)
{
    // Function implementation
}

void Customer::submitOrder(Order* order)
{
    // Function implementation
}

bool Customer::checkOrder(Order* order)
{
    // Function implementation
    return false; // Placeholder return statement
}

void Customer::printPendingOrders()
{
    // Function implementation
}

Customer::~Customer()
{
    // Destructor implementation
}
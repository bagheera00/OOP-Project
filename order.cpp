#include "order.h"
#include "shop.h"
#include "driver.h"

int Order::getOrderID() 
{
    return orderID;
}

void Order::setOrderID(int orderID)
{
    orderID = orderID;
}

Shop *Order::getShop() 
{
    return shop;
}

void Order::setShop(Shop *shop)
{
    shop = shop;
}

Driver *Order::getDriver() 
{
    return driver;
}

void Order::setDriver(Driver *driver)
{
    driver = driver;
}

Customer *Order::getCustomer() 
{
    return customer;
}

void Order::setCustomer(Customer *customer)
{
    customer = customer;
}

vector<OrderDetail *> Order::getDetails() 
{
    return details;
}

void Order::setDetails(vector<OrderDetail *> details)
{
    details = details;
}

double Order::getBalance() 
{
    return totalPrice;
}

void Order::setBalance(double balance)
{
    totalPrice = totalPrice;
}

void Order::print()
{
    cout << "Order ID:" << this->orderID << endl;
    cout << "Shop::" << this->shop << endl;
    cout << "Customer::" << this->customer << endl;
    cout << "Driver::" << this->driver << endl;
    cout << "Total Price:" << this->totalPrice << endl;
}
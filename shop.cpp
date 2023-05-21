#include "shop.h"

int Shop::defaultShopsCounter = 1;

Shop::Shop()
{
    // Default constructor implementation
    this->name = "shop-" + this->defaultShopsCounter;
    this->balance = DEFAULT_SHOP_BALANCE;
    this->defaultShopsCounter++;
}

Shop::Shop(string name, double initialBalance)
{
    // Constructor implementation
}

void Shop::setBalance(double amount)
{
    // Function implementation
}

void Shop::hireDriver(Driver& driver)
{
    // Function implementation
}

void Shop::resignDriver(Driver& driver)
{
    // Function implementation
}

Stock Shop::getStock()
{
    // Function implementation
}

bool Shop::isShopAvailable()
{
    // Function implementation
}

bool Shop::stockFlowers(Flower* flower, int quantity)
{
    // Function implementation
}

void Shop::processOrder(Order* order)
{
    // Function implementation
}

void Shop::updateStocks(Order* order)
{
    // Function implementation
}

void Shop::assignDeliveryToDriver(Order& order)
{
    // Function implementation
}

void Shop::takeawayDeliveriesFromDriver(Driver& driver)
{
    // Function implementation
}

Shop::~Shop()
{
    // Destructor implementation
}

#include "flower.h"

Flower::Flower(string name)
{
    // Constructor implementation
}

Flower::Flower(string name, string description)
{
    // Constructor with description implementation
}

Flower::~Flower()
{
    // Destructor implementation
}

string Flower::getName()
{
    return name;
}

string Flower::getDescription()
{
    return description;
}

double Flower::getStockingPrice()
{
    return stockingPrice;
}

void Flower::setName(string name)
{
    this->name = name;
}

void Flower::setDescription(string description)
{
    this->description = description;
}

void Flower::setStockingPrice(double stockingPrice)
{
    this->stockingPrice = stockingPrice;
}
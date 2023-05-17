#include "shop.h"

Shop::Shop(string name_, double StartingAmount){
    name = name_;
    balance = StartingAmount;
}

Shop::~Shop(){

}

void Shop::setBalance(double amount){
    this->balance = amount;
}

bool Shop::checkDriver(Driver &Driver){

}

bool Shop::hireDriver(Driver &Driver){
    
}

bool Shop::buyFlowers(string name, int quantity){

}

bool Shop::isFlowerAvailable(Flower &Flower, int amount){

}

bool Shop::sellFlowers(string name, int quantity){

}
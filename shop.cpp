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

void Shop::hireDriver(Driver &Driver){
    
}

bool Shop::isFlowerAvailable(Flower &Flower, int amount){

}

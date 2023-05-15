#include "shop.h"

Shop::Shop(string name_, double StartingAmount){
    name = name_;
    vault = StartingAmount;
}

Shop::~Shop(){

}

void Shop::setBalance(double amount){
    vault =+ amount;
}

bool Shop::checkDriver(Driver &Driver){

}

bool Shop::hireDriver(Driver &Driver){
    
}

bool Shop::buyFlowers(int amount_, string name_){

}

bool Shop::isFlowerAvailable(Flower &Flower, int amount){

}

bool Shop::sellFlowers(int amount_, string name_){

}
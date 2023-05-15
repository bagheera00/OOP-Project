#include "lib.h"


Shop::Shop(string name_, double StartingAmount){
    name = name_;
    vault = StartingAmount;
}

Shop::~Shop(){

}

void Shop::Set_Balance(double amount){
    vault =+ amount;
}

bool Shop::CheckDriver(Driver &Driver){

}

bool Shop::Hire_Driver(Driver &Driver){
    
}

bool Shop::Buy_Flowers(int amount_, string name_){

}

bool Shop::Search_Flower(Flower &Flower, int amount){

}

bool Shop::Sell_Flowers(int amount_, string name_){

}

Flower::Flower(string name_){
    name = name_;
}

Flower::~Flower(){
    
}

customer::customer(string name_, int phoneNum_, double balance){
    name = name_;
    phoneNum = phoneNum_;
    Balance = balance;
}

customer::~customer(){

}


Driver::Driver(string name_, int id_, double PayRate, int phone){
    name = name_;
    id = id_;
    paymentRate = PayRate;
    phoneNum = phone;
}

Driver::~Driver(){

}


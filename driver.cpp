#include "driver.h"

Driver::Driver(string name_, int id_, double PayRate, int phone){
    name = name_;
    id = id_;
    paymentRate = PayRate;
    phoneNum = phone;
}

Driver::~Driver(){

}
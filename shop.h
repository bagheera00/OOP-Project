#ifndef SHOP_DEF
#define SHOP_DEF

#include <string>
#include <vector>
#include "driver.h"
#include "flower.h"

using namespace std;

class Shop
{
private:

    string name;
    double vault;
    vector <Driver*> Hired_Drivers;
    vector <Flower*> stock;

public:
    Shop(string name_, double StartingAmount); // Construtor

    Shop();

    void Set_Balance(double amount);

    /**
    
        @brief 
        This function is to set the starting balance of the shop
        in order for it to buy flowers and to hire drivers

        @param amount is the amount passed in the function for 
        the balance
    
    */
    
    bool Hire_Driver(Driver &Driver);

    /**
    
        @brief
        This function is to hire a driver and it will add it to the Vector
        in the Shop object

        @param Driver is the driver object passed in the function 
    
    */

    bool Search_Flower(Flower &Flower, int amount);

    /**
    
        @brief
        This function is to search for the type of the flower that the customer
        wants to buy and it checks if it's in the stock which is repersented as 
        a vector and if the number of the flowers ordered is in the stock

        @param Flower is the Flower object passed in the funcion

        @param amount is the Flowers number the user requested 
        
        @return true if the flower exist in the stock and false if not

    */

    bool Buy_Flowers(int amount_, string name_);

    /**
    
        @brief
        This function is to Buy the Type of the Flower that the shop wants after
        it checks if it exist in the wearhouse or not

        @see Search_Flower()

        @param Flower is the Flower object passed in the funcion 

        @return True if the Flower is availabe to buy from the wearhouse and false if not

    */

    bool Sell_Flowers(int amount_, string name_);

    /**
    
        @brief
        This function is to Sell for the type of the flower that the customer
        wants to buy and it checks if it's in the stock which is repersented as 
        a vector

        @param Flower is the Flower object passed in the funcion 
        
        @see Search_Flower()

        @return True if the Flower is availabe to buy from the wearhouse and false if not


    */

    bool CheckDriver(Driver &Driver);
    
    ~Shop(); // destructor 
};

#endif
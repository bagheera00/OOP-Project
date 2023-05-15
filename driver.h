#ifndef DRIVER_DEF
#define DRIVER_DEF
#include <string>
#include <vector>
#include "shop.h"
#include "customer.h"

using namespace std;

class Driver : public Customer{
private:

    int id; // uniqe ID for the driver
    bool isBusy; // a Bool var to know if the driver is available 
    double paymentRate; // the payment rate for the driver
    Shop employer; // the Shop which the Driver works at

public:

    Driver(string name_, int id_, double PayRate, int phone); // Construtor

    void getBalance(); 

    /**

       @return the balance of the driver
    
    */

    bool set_Rate(double rate);

    /**
     * 
     * @brief
     * Set the Rate which the driver is paid apon
     * 
     * @param rate 
     * 
    */

    void GetJob(Customer &OrderOwner);

    /**
     * 
     * @brief
     * GetJob is a function that takes the Object Customer and it switches the IsBusy 
     * var into true
     * 
     * @param OrderOwner is the Object of the Customer
     * 
    */

    void ShowBalance(); 

    ~Driver(); // destuctor
};

#endif
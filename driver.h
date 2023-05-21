#ifndef DRIVER_DEF
#define DRIVER_DEF
#include <string>
#include <vector>
#include "order.h"
#include "shop.h"
#include "user.h"

using namespace std;

class Driver : public User
{
private:
    int id;                         // uniqe ID for the driver
    Shop* employer;                  // the Shop which the Driver works at
    vector<Order*> assignedOrders; // Orders assigned to this driver

    void setOrderDelivered(Order *order);
    /**
     *
     * @brief
     * Sets an assigned Order as delivered
     *
     * @param order - order to set a delivered
     */

public:
    Driver();                                                                            // default constructor
    Driver(string username, string password, string name, int phoneNum, double balance); // Constructor with the required data
    /**
     *
     * @brief
     * param constrcutor is the constructor for the class that
     * has parameters to assign user-wanted specific values
     * to the instance variables of different objects
     *
     * @param username - username of the Driver (Base Class Attribute)
     * @param password - password of the Driver (Base Class Attribute)
     * @param name - name of the Driver (Base Class Attribute)
     * @param phoneNum - phone number of the Driver (Base Class Attribute)
     * @param balance - amount of cash collected by Driver from a Client (Base Class Attribute)
     *
     */

    void deliverOrder(Order *order);
    /**
     *
     * @brief
     * Delivers order and sets it as delivered,
     * if and only if Order wasn't cancelled
     *
     * @param order - order to deliver
     *
     */

    void returnCashToShop();
    /**
     *
     * @brief
     * Returns the collected cash (balance) from Customers
     * and sets Driver balance to 0
     *
     */

    ~Driver();
    /**
     *
     * @brief
     * Destructs the Driver when Driver is deleted or cleaned up
     *
     */
};

#endif
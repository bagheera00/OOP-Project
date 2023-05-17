#ifndef CUSTOMER_DEF
#define CUSTOMER_DEF

#include <string>
#include <vector>
#include "flower.h"
#include "order.h"
#include "user.h"
#include "app.h"

using namespace std;

class Customer : public User
{
private:
    vector<Order *> orders; // List of all the pending Orders

public:
    Customer(App app, string username, string password, string name, int phoneNum, double balance);
    /**
     *
     * @brief
     * param constrcutor is the constructor for the class that
     * has parameters to assign user-wanted specific values
     * to the instance variables of different objects
     *
     * @param App - application instance to allow the placement of new Orders
     * @param username - username of the Customer (Base Class Attribute)
     * @param password - password of the Customer (Base Class Attribute)
     * @param name - name of the Customer (Base Class Attribute)
     * @param phoneNum - phone number of the Customer (Base Class Attribute)
     * @param balance - balance available for the Customer to buy with (Base Class Attribute)
     *
     */


    void createOrder();
    /**
     *
     * @brief
     * Creates an empty order that needs to be filled with details
     *
     */

    void addToOrder(Order order, string FlowerName, int amount);
    /**
     *
     * @brief
     * Adds flowers to an Order from a specific Shop
     *
     * @param Order - order to which Customer adds more flowers to
     * @param FlowerName - name of the flower that the customer wants
     * @param amount - amount of the flower that this user wants to buy
     */

    bool checkOrder(Order *order);
    /**
     *
     * @brief
     * Checks if an Order was delivered or not using Order ID
     *
     * @param order - the Order to check
     */

    void printPendingOrders();
    /**
     *
     * @brief
     * Prints all the pending Orders (Orders not yet delivered & Confirmed)
     *
     */

    ~Customer();
    /**
     *
     * @brief
     * Destructs the Customer when Customer is deleted or cleaned up
     *
     */
};

#endif



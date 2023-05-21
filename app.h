#ifndef LIB_DEF
#define LIB_DEF

#define SHOPS_COUNT 5
#define DRIVERS_COUNT 5
#define CUSTOMERS_COUNT 5
#define SAMPLE_ORDERS_COUNT 5

#include <string>
#include <vector>
#include "utils.h"
#include "flower.h"
#include "shop.h"
#include "customer.h"
#include "driver.h"
#include "order.h"

using namespace std;

enum RUN_MODE
{
    RUN_SHOP = 0,     // The Application runs as a Shop
    RUN_CUSTOMER = 1, // The Application runs as a Customer
    RUN_DRIVER = 2    // The Application runs as a Driver
};

class App
{
private:
    vector<Shop *> shopsList;         // Tracks all Shops available in the Application
    vector<Customer *> customersList; // Tracks all Customers using the Application
    vector<Order *> ordersList;       // Tracks all unfinished Orders in the Application
    vector<Flower *> flowersList;       // Tracks all unfinished Orders in the Application
    bool appRunning;

    bool setupFlowers();
    /**
     *      @brief - Setups up a number of initial Shops in the Application
     *                  and adds them to the "shopsList" Vector
     *
     *      @see - SHOPS_COUNT for the amount of shops to initiate
     *
     */

    bool setupShops();
    /**
     *      @brief - Setups up a number of initial Shops in the Application
     *                  and adds them to the "shopsList" Vector
     *
     *      @see - SHOPS_COUNT for the amount of shops to initiate
     *
     */

    bool setupCustomers();
    /**
     *      @brief - Setups up a number of initial Customers in the Application
     *                  and adds them to the "customersList" Vector
     *
     *      @see - CUSTOMERS_COUNT for the amount of customers to initiate
     *
     */

    bool setupDrivers();
    /**
     *      @brief - Setups up a number of initial drivers in the Application,
     *                  and assigns each to a different Shop
     *
     *      @see - DRIVERS_COUNT for the amount of drivers to initiate
     *
     */

    bool setupSampleOrders();
    /**
     *      @brief - Setups up a number of initial Sample (Example) Orders in the Application
     *                  and adds them to the "ordersList" Vector
     *
     *      @see - ORDERS_COUNT for the amount of orders to initiate
     *
     */

    void login();
    /**
     *      @brief - Does the Login Process to access Shop, Customer or Driver
     *
     */

    void logout();
    /**
     *      @brief - Setups up a number of initial Shops in the Application
     *                  and adds them to the "shopsList" Vector
     *
     *      @see - SHOPS_COUNT for the amount of shops to initiate
     *
     */

    void runShop(Shop *shop);
    /**
     *      @brief - Run by "login()" functions to access and work with a specific Shop
     *
     *      @param - shop is the Shop the Application should run
     *
     */

    void runCustomer(Customer *customer);
    /**
     *      @brief - Run by "login()" functions to access and work with a specific Customer
     *
     *      @param - customer is the customer the Application should run
     *
     */

    void runDriver(Driver *driver);
    /**
     *      @brief - Run by "login()" functions to access and work with a specific Driver
     *
     *      @param - driver is the Driver the Application should run
     *
     */

public:
    App();
    ~App();

    bool initApp();
    /**
     *      @brief - Initiates the Application
     *
     *      @see - setupShops for Shops Initialization
     *      @see - setupCustomers for Customers Initialization
     *      @see - setupDrivers for Drivers Initialization
     *      @see - setupSampleOrders for example Order Initialization
     *      @see - setupFlowers for Flowers Initialization
     *      @see - login for Application Mode (Shop Mode, Driver Mode, Customer Mode)
     *
     */

    vector<Shop*> getAvailableShops();
    /**
    @brief
    Returns a Vector list with all the Shops

    @param order - Order to accept

    @see processOrder(Order*) to see how an Order is processed

    @return True if Order was placed Sucessfully, False otherwise
    */

   void addNewFlower(Flower* flower);


   void removeFlower();



    bool placeOrder(Order *order);
    /**
    @brief
    Checks if:
        -> Order content is available in Stock
        -> There is at least 1 Driver hired to deliver the Order
    Then:
        -> Order Status is updated to IN_PROGRESS
        -> Order is processed using "processOrder(Order*)"
    Else:
        -> Order Status is updated to CANCELLED
        -> Order totalPrice is refunded to the Customer

    @param order - Order to accept

    @see processOrder(Order*) to see how an Order is processed

    @return True if Order was placed Sucessfully, False otherwise
    */
};

#endif
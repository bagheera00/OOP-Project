#ifndef LIB_DEF
#define LIB_DEF

#define SHOPS_COUNT 5
#define DRIVERS_COUNT 5
#define CUSTOMERS_COUNT 5
#define SAMPLE_ORDERS_COUNT 5

#include <string>
#include <vector>
#include "shop.h"
#include "customer.h"
#include "driver.h"
#include "flower.h"
#include "order.h"
using namespace std;

enum RUN_MODE {
    RUN_SHOP = 0,
    RUN_CUSTOMER = 1,
    RUN_DRIVER = 2
};

class App{
    private:
        vector<Shop*> shopsList;
        vector<Order*> ordersList;
        vector<Customer*> customersList;
        bool App::setupShops();
        bool App::setupCustomers();
        bool App::setupDrivers();
        bool App::setupSampleOrders();
        void App::login();
        void App::logout();
        void App::runShop();
        void App::runCustomer();
        void App::runDriver();


    public:
        App();
        ~App();
        bool App::initApp();

};

    // void App::processOrders();
    // /**
    //  *
    //  * @brief
    //  * It is a function that goes through the orders list and
    //  * it processes the order and sleeps for 1 second and
    //  * then it goes for the next order in the list
    //  *
    //  */

// bool fullfilOrder();

#endif
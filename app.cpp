#include "app.h"
#include "time.h"

App::App()
{
    // Intializes a random seed to make sure randomly generated numbers different
    srand(time(0));

    // Initiate any special params
}

bool App::setupShops()
{
    Shop *currentShop;
    for (int i = 0; i < SHOPS_COUNT; i++)
    {
        currentShop = new Shop();
        this->shopsList.push_back(currentShop);
    }

    return true;
}

bool App::setupCustomers()
{
    Customer *currentCustomer;
    for (int i = 0; i < CUSTOMERS_COUNT; i++)
    {
        // currentCustomer = new Customer();
        this->customersList.push_back(currentCustomer);
    }
    return true;
}

bool App::setupDrivers()
{
    int nextShopIndex = 0;
    Driver *driver;
    for (int i = 0; i < DRIVERS_COUNT; i++)
    {
        driver = new Driver();
        nextShopIndex = (nextShopIndex + 1) % SHOPS_COUNT;
        shopsList[nextShopIndex]->hireDriver(*driver);
    }

    return true;
}

bool App::setupSampleOrders()
{
    int nextShopIndex = 0;
    int nextCustomerIndex = 0;
    Order *order;

    for (int i = 1; i <= SAMPLE_ORDERS_COUNT; i++)
    {
        order = new Order();

        nextShopIndex = (nextShopIndex + 1) % SHOPS_COUNT;
        nextCustomerIndex = (nextCustomerIndex + 1) % CUSTOMERS_COUNT;
    }
        return true;
}

void App::login()
{
    // string username = requestInput<string>("Insert username:");
    // string password = requestInput<string>("Insert password:");

    // cout << "Username:" << username << endl;
    // cout << "Password:" << password << endl;

    RUN_MODE runMode;
    switch (runMode)
    {
    case RUN_SHOP:
        // runShop();
        break;
    case RUN_CUSTOMER:
        // runCustomer();
        break;
    case RUN_DRIVER:
        // runDriver();
        break;
    }
}

void App::logout()
{
}

void App::runShop(Shop *shop)
{
}

void App::runCustomer(Customer *customer)
{
}

void App::runDriver(Driver *driver)
{
}



App::~App()
{
}

bool App::initApp()
{
    if (!this->setupShops())
    {
        cout << "Setup shops failed!" << endl;
        return false;
    }
    if (!this->setupDrivers())
    {
        cout << "Setup drivers failed!" << endl;
        return false;
    }

    if (!this->setupCustomers())
    {
        cout << "Setup customers failed!" << endl;
        return false;
    }

    if (!this->setupSampleOrders())
    {
        cout << "Setup sample orders failed!" << endl;
        return false;
    }


    while(this->appRunning){
        login();
    }

    return true;
}

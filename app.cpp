#include "app.h"

bool App::setupShops()
{
    Shop *currentShop;
    double defaultBalance = 500;
    for (int i = 1; i <= SHOPS_COUNT; i++)
    {
        string shopName = "Shop #";
        shopName.append(to_string(i));
        currentShop = new Shop(shopName, defaultBalance);

        this->shopsList.push_back(currentShop);
    }
}

bool App::setupCustomers()
{
    Customer *currentCustomer;
    for (int i = 1; i <= CUSTOMERS_COUNT; i++){
        // currentCustomer = new Customer();
        this->customersList.push_back(currentCustomer);
    }
}

bool App::setupDrivers()
{
    int nextShopIndex = 0;
    Driver *driver;
    for (int i = 1; i <= DRIVERS_COUNT; i++)
    {
        driver = new Driver();

        nextShopIndex = (nextShopIndex + 1) % SHOPS_COUNT;
        shopsList[nextShopIndex]->hireDriver(*driver);
    }
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
}

void App::login()
{
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

void App::runShop(Shop* shop)
{
}

void App::runCustomer(Customer* customer)
{
}

void App::runDriver(Driver* driver)
{
}

App::App()
{
    this->initApp();
}

App::~App()
{   
}

bool App::initApp()
{
    if(!this->setupShops()){
        cout << "Setup shops failed!" << endl;
        return false;
    }
    if(this->setupDrivers()){
        cout << "Setup drivers failed!" << endl;
        return false;
    }

    if(this->setupCustomers()){
        cout << "Setup customers failed!" << endl;
        return false;
    }

    if(this->setupSampleOrders()){
        cout << "Setup sample orders failed!" << endl;
        return false;
    }
}

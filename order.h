#ifndef ORDER_DEF
#define ORDER_DEF

#include <string>
#include <vector>
#include "shop.h"
#include "customer.h"
#include "driver.h"
#include "flower.h"
#include "utils.h"

using namespace std;

enum OrderType
{
    SEPERATED = 0,
    BOUQUET = 1
};

typedef struct _orderDetail
{
    vector<Flower *> flowers;
    vector<int> quantities;
    OrderType type;
    double subtotalPrice;
} OrderDetail;

class Order
{
private:
    int orderID;
    Shop *shop;
    Driver *driver;
    Customer *customer;
    vector<OrderDetail *> details;
    double totalPrice;
    Order *nextOrder;

public:
    int Order::getOrderID() const;
    void Order::setOrderID(int orderID);

    Shop* Order::getShop() const;
    void Order::setShop(Shop *shop);

    Driver* Order::getDriver() const;
    void Order::setDriver(Driver *driver);

    Customer* Order::getCustomer() const;
    void Order::setCustomer(Customer *customer);

    vector<OrderDetail *> Order::getDetails() const;
    void Order::addDetail(OrderDetail* orderDetail);
    void Order::setDetails(vector<OrderDetail *> details);

    double Order::getBalance() const;
    void Order::setBalance(double balance);
    
    virtual void Order::print();

};

string getOrderTypeAsString(OrderType orderType);

#endif
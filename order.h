#ifndef ORDER_DEF
#define ORDER_DEF

#include <string>
#include <vector>
#include "flower.h"
#include "utils.h"
#include "customer.h"

using namespace std;


/* 
    Forward Declerations - To avoid Circular Dependencies
    Actual Includes are done in order.cpp
*/
class Shop;
class Driver;

enum OrderType
{
    SEPERATED = 0,
    BOUQUET = 1
};

enum OrderStatus
{
    PENDING = 0,
    IN_PROGRESS = 1,
    DELIVERED = 2,
    CANCELLED = 3
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
    OrderStatus orderStatus;
    Shop *shop;
    Driver *driver;
    Customer *customer;
    vector<OrderDetail *> details;
    double totalPrice;
    Order *nextOrder;

public:
    int getOrderID();
    void setOrderID(int orderID);

    Shop *getShop();
    void setShop(Shop *shop);

    Driver *getDriver();
    void setDriver(Driver *driver);

    Customer *getCustomer();
    void setCustomer(Customer *customer);

    vector<OrderDetail *> getDetails();
    void addDetail(OrderDetail *orderDetail);
    void setDetails(vector<OrderDetail *> details);

    double getBalance();
    void setBalance(double balance);

    virtual void print();
};

string getOrderTypeAsString(OrderType orderType);

#endif
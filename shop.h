#ifndef SHOP_DEF
#define SHOP_DEF

#include <string>
#include <vector>
#include "flower.h"
#include "stock.h"
#include "driver.h"
#include "order.h"

using namespace std;

class Shop
{
private:
    string name;
    double balance;
    vector<Driver *> hiredDrivers;
    Stock stock;
    bool isAvailable;

    bool isFlowerAvailable(Flower &Flower, int amount);
    /**
        @brief
        This function is to search for the type of the flower that the customer
        wants to buy and it checks if it's in the stock which is repersented as
        a vector and if the number of the flowers ordered is in the stock

        @param Flower - Flower to check if available

        @param amount - amount of Flowers vailable

        @return true if the flower exist in the stock and false if not

    */

    void updateStocks(Order *order);
    /**
        @brief
        Updates the stocks by:
        -> Reducing Order content from stock, if Order Content is In Stock
            and the Order Status is IN_PROGRESS
        -> Adding Order content to stock, if the Order Status is CANCELLED

        @param Order - A valid order to which Stock is updated

        @see isFlowerAvailable() to see how a Shop checks if a flower is In Stock
        @see Order Status to see possible Order Statuses
    */

    void assignDeliveryToDriver(Order &order);
    /**
        @brief
        Assigns an order to a Driver to deliver it

        @param order - Order to assign to a driver
    */

   void takeawayDeliveriesFromDriver(Driver& driver);
    /**
        @brief
        Unassigns all orders from a Driver and
        reassigns them sequentially to all other Drivers, if:
            -> At least another Driver is hired.
        Else:
            -> Orders are CANCELLED and refunded 
        
        @param driver - Driver to unassigns deliveries from
    */


public:
    Shop(string name, double initialBalance); // Construtor
    Shop();

    void setBalance(double amount);
    /**
        @brief
        This function is to set the starting balance of the shop
        in order for it to buy flowers and to hire drivers

        @param amount - new balance amount

    */

    void hireDriver(Driver &Driver);
    /**
        @brief
        Hire a driver and add them to the driversList

        @param Driver - Driver to hire

    */

    void resignDriver(Driver &driver);
    /**
        @brief
        Resigns a driver by:
            -> Takes away Orders from Driver and assigns them to other drivers using "takeawayDeliveriesFromDriver(Driver)"
            -> Removes driver from the driversList
            -> Deletes driver object

        @param driver - Driver to resign
    */

    Stock getStock();
    /**
        @brief
        Assigns an order to a Driver to deliver it

        @param order - Order to assign to a driver

    */

    bool isShopAvailable();
    /**
     @brief
    Tells if a shop has:
    -> At least 1 Flower in Stock
    -> At least 1 Driver hired

    @return True if Shop is available, False otherwise
    */

    bool stockFlowers(Flower *flower, int quantity);
    /**
        @brief
        Buy flowers into stock,
        if the Shop has enough balance to buy the requested flowers

        @param flower - Flower to buy
        @param quantity - amount of flowers to buy

        @return True if the Flower stocking succeded, False otherwise
    */

    void processOrder(Order *order);
    /**
        @brief
        Processes a new valid Order by:
        -> Updating the Stock using "updateStock(Order)"
        -> Assigning the Order to a Driver

        @param order - Order to be processed
    */

    ~Shop(); // destructor
};

#endif
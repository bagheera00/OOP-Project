#ifndef STOCK_DEF
#define STOCK_DEF

#include <string>
#include <vector>
#include "flower.h"

using namespace std;

class StockInfo
{
private:
    Flower *flower; // type of Flower
    int quantity; // amount of Flowers available
    double sellingPrice; // price of a Flower at which Customer can buy

public:
    StockInfo(Flower &flower, const int quantity, const double sellingPrice);

    int getQuantity();
    
    void setQuantity();
    
    double getSellingPrice();
    
    void setSellingPrice();
    
    ~StockInfo();

};

class Stock
{
private:
    vector<StockInfo *> stockEntries; // List of all the Stick Info for each Flower

public:
    bool isFlowerInStock(Flower &flower);

    void addToStock(Flower* flower, int amount, double sellingPrice);
    
    void addToStock(Flower* flower, int amount);

    StockInfo *getStockInfo(Flower &flower);
};

#endif
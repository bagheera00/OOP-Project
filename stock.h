#ifndef STOCK_DEF
#define STOCK_DEF

#include <string>
#include <vector>
#include "flower.h"

using namespace std;

class StockInfo
{
private:
    Flower *flower;
    int quantity;
    double sellingPrice;

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
    vector<StockInfo *> stockEntries;

public:
    bool isFlowerInStock(Flower &flower);
    StockInfo *getStockInfo(Flower &flower);
};

#endif
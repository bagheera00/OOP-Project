#ifndef LISTS_DEF
#define LISTS_DEF

#include <string>
#include <vector>
#include "shop.h"
#include "customer.h"
#include "driver.h"
#include "flower.h"
#include "order.h"
using namespace std;

typedef struct _orderEntry{
    Order order;
    struct _orderEntry *nextOrderEntry;
} OrderEntry;

typedef struct _ordersList
{
    OrderEntry orderEntry;
} OrdersList;

typedef struct _shopEntry
{
    Shop *shop;
    struct _shopEntry *nextShopEntry;
} ShopEntry;

typedef struct _shopsList
{
    ShopEntry shopEntry;
} ShopsList;

OrdersList *ordersList;
ShopsList *shopsList;
#endif
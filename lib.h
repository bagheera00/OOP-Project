#ifndef LIB_DEF
#define LIB_DEF

#include <string>
#include <vector>

using namespace std;

struct OrdersList
{
    Shop *shop;
    Driver *driver;
    customer *OrderOwner;
    Flower *flower;
};

struct Node
{
    OrdersList Order;
    int orderID;
    Node *next;
};

Node *Head = nullptr;

void OrderProcessing(Node *Head);
/**
 *
 * @brief
 * It is a function that takes the head of the linked list
 * and it processes the order and sleeps for 1 second and
 * then it goes for the next order in the list
 *
 * @param Head is a pointer to the head of the linked list
 *
 */
#endif
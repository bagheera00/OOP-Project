#ifndef FLOWER_DEF
#define FLOWER_DEF

#define DEFAULT_FLOWER_PRICE 5

#include <string>
#include <vector>

using namespace std;

class Flower
{
private:
    string name;          // Flower Name
    string description;   // Flower Description
    double stockingPrice; // Price at which Shops can buy a flower to add to their Stock

public:
    Flower(string name);
    /**
     *
     * @brief
     * Constructor
     *
     * @param name - flower name
     *
     */

    Flower(string name, string description);
    /**
     *
     * @brief
     * Constructor
     *
     * @param name - flower name
     * @param description - flower description
     *
     */

    Flower(string name, string description, double stockingPrice);
    /**
     *
     * @brief
     * Constructor
     *
     * @param name - flower name
     * @param description - flower description
     * @param stockingPrice - flower price at which shops restock new stocks
     *
     */

    ~Flower(); // Destructor


    /* Getters & Setters */
    string getName();
    void setName(string name);

    string getDescription();
    void setDescription(string description);

    double getStockingPrice();
    void setStockingPrice(double stockingPrice);
};

#endif
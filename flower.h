#ifndef FLOWER_DEF
#define FLOWER_DEF

#define DEFAULT_FLOWER_STOCKING_PRICE 5

#include <string>
#include <vector>


using namespace std;

class Flower
{
private:
    string name; // Flower Name
    string description; // Flower Description
    double stockingPrice; // Price at which Shops can buy a flower to add to their Stock

public:
    Flower(string name); // Constructor
    /**
     *
     * @brief
     * Constructor 
     *
     * @param username - username of the Driver (Base Class Attribute)
     * @param password - password of the Driver (Base Class Attribute)
     * @param name - name of the Driver (Base Class Attribute)
     * @param phoneNum - phone number of the Driver (Base Class Attribute)
     * @param balance - amount of cash collected by Driver from a Client (Base Class Attribute)
     *
     */
    
    Flower(string name,string description); // Constructor with Description
    
    string getName();
    
    string getDescription();

    ~Flower(); // Destructor
};

#endif
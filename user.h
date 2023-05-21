#ifndef USER_DEF
#define USER_DEF

#include <string>
#include <vector>
#include "flower.h"

using namespace std;

class User
{
protected:
    string username;
    string password;
    string name;
    string phoneNum;
    double balance;
 
public:
    User(); // default constructor

    User(string username, string password, string name, string phoneNum, double balance);
    /**
     *
     * @brief
     * param constrcutor is the constructor for the class that
     * has parameters to assign user-wanted specific values
     * to the instance variables of different objects
     *
     * @param name is the name of the customer
     *
     * @param phoneNum is the phone number of the customer
     *
     * @param balance is the balance the user has to buy flowers
     *
     */

    double getBalance(); // Getter for the User Balance
    void setBalance(); // Setter for the User Balance

    ~User(); // Destructs the User in case a User Account is deleted or removed by Clean Up
};

#endif
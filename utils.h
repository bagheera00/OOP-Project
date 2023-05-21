#ifndef UTILS_DEF
#define UTILS_DEF

#include <string>
#include <iostream>
#include <vector>

using namespace std;

string generatePhoneNumber(int prefix);
/**
*    @brief
*    Generates a phone number
*
*    @param prefix - first digit of the phone number
*
*    @return T - Generic type depends on the value provided in std::cin
*/ 

string generateName();

/* Template Functions - Defined in Header File to avoid unreferenced function error*/
template <typename T>
void printVectorList(string listTitle, vector<T> listOfItems)
{
    for (int i = 0; i < listOfItems.size(); i++)
    {
        cout << "(" << i + 1 << ") ";
        cout << listOfItems[i] << endl;
    }
}
/**
*    @brief
*    Prints a vector list using the OStream operator on
*        (Used with a Vector of primitive data)
*
*    @param listTitle - Title to print before printing the Vector List
*    @param listOfItems - Vector List to print 
*/


template <class T>
void printPrintableVectorList(string listTitle, vector<T> listOfItems)
{
    for (int i = 0; i < listOfItems.size(); i++)
    {
        cout << "(" << i + 1 << ") ";
        cout << listOfItems[i].print() << endl;
    }
}
/**
*    @brief
*    Prints a vector list using "print()" function inside the Vector element classes
*        (Used with Vector of classes that have "print()" function)
*
*    @param listTitle - Title to print before printing the Vector List
*    @param listOfItems - Vector List to print 
*/


template <typename T>
T requestInput(string question)
{
    cout << endl << question << endl;
    T data;
    cout << "Input:>";
    cin >> data;
    return data;
}
/**
*    @brief
*    Prints a Question and returns the provided Input using Generic T
*
*    @param question - input question to display before taking an Input
*
*    @return T - Generic type depends on the value provided in std::cin
*/ 


#endif
#ifndef UTILS_DEF
#define UTILS_DEF

#include <string>
#include <iostream>

using namespace std;

template <typename T>
void printVectorList(const string listTitle, vector<T> listOfItems);
/**
*    @brief
*    Prints a vector list using the OStream operator on
*        (Used with a Vector of primitive data)
*
*    @param listTitle - Title to print before printing the Vector List
*    @param listOfItems - Vector List to print 
*/


template <class T>
void printPrintableVectorList(const string listTitle, vector<T> listOfItems);
/**
*    @brief
*    Prints a vector list using "print()" function inside the Vector element classes
*        (Used with Vector of classes that have "print()" function)
*
*    @param listTitle - Title to print before printing the Vector List
*    @param listOfItems - Vector List to print 
*/

template <typename T>
T requestInput(const string question);
/**
*    @brief
*    Prints a Question and returns the provided Input using Generic T
*
*    @param question - input question to display before taking an Input
*
*    @return T - Generic type depends on the value provided in std::cin
*/

#endif
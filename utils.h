#ifndef UTILS_DEF
#define UTILS_DEF

#include <string>
#include <iostream>

using namespace std;

template <typename T>
void printVectorList(const string listTitle, vector<T> listOfItems);

template <class T>
void printPrintableVectorList(const string listTitle, vector<T> listOfItems);

template <typename T>
T requestInput(const string question);

#endif
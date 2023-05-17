#include "utils.h"

template <typename T>
void printVectorList(const string listTitle, vector<T> listOfItems)
{
    for (int i = 0; i < listOfItems.size(); i++) {
        cout << "(" << i + 1 << ") ";
        cout << listOfItems[i] << endl;
    }
}

template <class T>
void printPrintableVectorList(const string listTitle, vector<T> listOfItems){
        for (int i = 0; i < listOfItems.size(); i++) {
        cout << "(" << i + 1 << ") ";
        cout << listOfItems[i].print() << endl;
   }
}

template <typename T>
T requestInput(const string question){
    cout << endl << question << endl;
    T data;
    cout << "Input:>";
    cin >> data;
    return data;
}

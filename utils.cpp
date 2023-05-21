#include "utils.h"
#include "vector"

template <typename T>
void printVectorList(string listTitle, vector<T> listOfItems)
{
    for (int i = 0; i < listOfItems.size(); i++) {
        cout << "(" << i + 1 << ") ";
        cout << listOfItems[i] << endl;
    }
}

template <class T>
void printPrintableVectorList(string listTitle, vector<T> listOfItems){
        for (int i = 0; i < listOfItems.size(); i++) {
        cout << "(" << i + 1 << ") ";
        cout << listOfItems[i].print() << endl;
   }
}

template <typename T>
T requestInput(string question){
    cout << endl << question << endl;
    T data;
    cout << "Input:>";
    cin >> data;
    return data;
}

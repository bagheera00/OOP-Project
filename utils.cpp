#include "utils.h"
#include "vector"

string generatePhoneNumber(int prefix)
{
    string phoneNumber = to_string(prefix);
    for (int i = 0; i < 9; ++i)
    {
        phoneNumber += to_string(rand() % 10);
    }
    return phoneNumber;
}

string generateName()
{
    int namesCount = 15; //Number of First Names & Last Names

    string firstNames[] = {
        "John", "Emma", "Michael", "Olivia", "William",
        "Sophia", "James", "Ava", "Benjamin", "Isabella",
        "Mark", "Dave", "Joe", "Maria", "Sarah"
    };

    string lastNames[] = {
        "Smith", "Johnson", "Williams", "Brown", "Jones",
        "Miller", "Davis", "Garcia", "Wilson", "Anderson",
        "Davidson", "Alberts", "Jackson", "Maxwell", "Phoenix"
    };

    int firstNameIndex = rand() % namesCount;
    int lastNameIndex = rand() % namesCount;

    return firstNames[firstNameIndex] + " " + lastNames[lastNameIndex];
}
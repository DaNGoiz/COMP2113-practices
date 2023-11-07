#include <iostream>
using namespace std;

int main () {
    struct Date {
        int day;
        int month;
        int year;
    };

    // Date today;

    // Date * dPtr = &today;

    // today.year = 2023;
    // dPtr->year = 2015;

    // cout << (*dPtr).year;

    Date today;
    Date * dPtr = 0;
    if (dPtr != 0)
        cout << dPtr->month;

    return 0;
}
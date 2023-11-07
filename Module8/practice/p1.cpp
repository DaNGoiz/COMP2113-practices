#include <iostream>
using namespace std;

int main () {
    int i = 10;
    int j = 20;
    int * iPtr = &i;
    // * iPtr = j;
    iPtr = &j;

    cout << i << endl << &i << endl << ++(*iPtr);
    return 0;
}
#include <iostream>
using namespace std;

int main () {
    int * i = new int (42);
    delete i;
    i = 0;
    cout << *i << endl << i << endl;
    return 0;
}
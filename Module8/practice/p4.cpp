#include <iostream>
using namespace std;

void changeValue(int * p){
    ++ *p;
}

int main () {
    int i = 10;
    int * p = &i;
    changeValue(p);
    cout << p << endl << *p << endl;
    
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int input;
    cin >> input;

    int d4, d3, d2, d1, d0;
    for(int i = 0; i < 5; ++i)
    {
        if (i == 0) d0 = input % 10;
        if (i == 1) d1 = input % 10;
        if (i == 2) d2 = input % 10;
        if (i == 3) d3 = input % 10;
        if (i == 4) d4 = input % 10;
        
        input /= 10;
    }

    cout << d4 << "," << d3 << "," << d2 << "," << d1 << "," << d0;
    
    return 0;
}
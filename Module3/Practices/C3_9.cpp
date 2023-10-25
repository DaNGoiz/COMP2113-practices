#include <iostream>
using namespace std;

int main(){
    int count = 0;
    int total = 0;

    int input = 0;

    while(true)
    {
        cin >> input;
        if (input == -1) break;
        count ++;
        total += input;
    }

    int avg = total/count;
    cout << avg;

    return 0;
}
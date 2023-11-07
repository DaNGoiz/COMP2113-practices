#include <iostream>
using namespace std;

int main () {
    int SIZE;
    cin >> SIZE;
    int *set = new int[SIZE];

    for (int i = 0; i < SIZE; ++i) {
        cin >> set[i];
    }

    for (int i = 0; i < SIZE; ++i) {
        for (int j = i; j < SIZE; ++j) {
            if (set[i] > set[j]) {
                int temp = set[i];
                set[i] = set[j];
                set[j] = temp;
            }
        }
    }

    int count = 0;
    int countPrev = 0;
    int num = 0;

    for (int i = 0; i < SIZE - 1; ++i) {
        if (set[i] == set[i+1]){
            count ++;
        }
        else {
            countPrev = count;
            count = 0;
        }

        if (count > countPrev){
            num = set[i];
        }
    }

    if (num == 0)
        cout << "The mode of the set is " << set[SIZE - 1];
    else
        cout << "The mode of the set is " << num;

    delete[] set;

    return 0;
}
#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    int num;
    cin >> num;

    double oneOverR = 0;

    for (int i = 0; i < num; i++) {
        double r;
        cin >> r;
        if (r != 0) {
            oneOverR += 1 / r;
        }
    }

    double R = 1 / oneOverR;

    cout << setprecision(5);
    cout << R << endl;

    return 0;
}
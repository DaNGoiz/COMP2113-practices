#include <iostream>
using namespace std;

int lcm(int n1, int n2) {
    int max = (n1 > n2)? n1 : n2;
    int product = n1 * n2;
    while (max < product) {
        if (max % n1 == 0 && max % n2 == 0) {
            return max;
        }
        ++max;
    }
    return product;
}

int main() {
    int n1, n2, max;
    cin >> n1 >> n2;
    cout << lcm(n1, n2) << endl;
    return 0;
}

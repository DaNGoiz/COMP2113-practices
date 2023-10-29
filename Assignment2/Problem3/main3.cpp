#include <iostream>
#include <iomanip> 
#include "quadratic.h"
using namespace std;

int main () 
{
    double a, b, c;
    cin >> a >> b >> c;

    cout << "Discriminant: " << discriminant(a, b, c) << endl;

    int numroots = numRoots(a, b, c);
    cout << "Number of roots: " << numroots << endl;

    cout << setprecision(3);

    if (numroots > 1) {
        cout << "The roots are " << root1(a, b, c) << " and " << root2(a, b, c) << endl;
    }
    else if (numroots == 1) {
        cout << "The root is " << root1(a, b, c) << endl;
    }
    else {
        cout << "No real root" << endl;
    }
    return 0;
}
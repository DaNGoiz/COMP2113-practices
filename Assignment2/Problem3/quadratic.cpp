// quadratic.cpp

#include <iostream>
#include <cmath>
#include "quadratic.h"
using namespace std;

double discriminant(double a, double b, double c) {
    return b * b - 4 * a * c;
}

int numRoots(double a, double b, double c) {
    int num = discriminant(a, b, c);

    if (num > 0) return 2;
    else if (num == 0) return 1;
    else return 0;
}

double root1(double a, double b, double c) {
    return (-b + sqrt(discriminant(a, b, c))) / (2 * a);
}

double root2(double a, double b, double c) {
    return (-b - sqrt(discriminant(a, b, c))) / (2 * a);
}

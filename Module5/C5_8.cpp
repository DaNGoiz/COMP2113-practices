#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void mean(double x1, double x2, double x3, double x4, double x5, double& mean)
{
    mean = (x1+x2+x3+x4+x5)/5;
}

void standardDeviation(double x1, double x2, double x3, double x4, double x5, double mean, double& standardDeviation)
{
    standardDeviation = sqrt(((x1-mean) * (x1-mean) 
                            + (x2-mean) * (x2-mean)
                            + (x3-mean) * (x3-mean)
                            + (x4-mean) * (x4-mean)
                            + (x5-mean) * (x5-mean))/5);
}

int main()
{
    double x1, x2, x3, x4, x5;
    double meanNum, standardDeviationNum;

    cin >> x1 >> x2 >> x3 >> x4 >> x5;

    mean(x1, x2, x3, x4, x5, meanNum);
    standardDeviation(x1, x2, x3, x4, x5, meanNum, standardDeviationNum);
    
    cout << fixed << setprecision(2);
    cout << "Mean = " << meanNum << endl;
    cout << "Standard deviation = " << standardDeviationNum;
    
    return 0;
}
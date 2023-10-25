#include <iostream>
#include <iomanip>
using namespace std;

double variance(double point[], int size)
{
    if (size == 1)
        return 0;
    double variance;
    double mean;

    for (int i = 0; i < size; ++i)
        mean += point[i];
    mean /= size;

    for (int i = 0; i < size; ++i)
        variance += (point[i] - mean) * (point[i] - mean);
    variance /= size;

    return variance; 
}

int main()
{
    int num;
    cin >> num;

    if (num > 20)
        num = 20;

    double point[20];

    for (int i = 0; i < num; ++i)
    {
        cin >> point[i];
    }

    double var = variance(point, num);

    cout << "Variance = " << var;
}
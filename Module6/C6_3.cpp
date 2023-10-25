#include <iostream>
using namespace std;

int main()
{
    double x[2][2][3] 
        = { { {3, 4, 2}, {0, -3, 9} }, { {13, 4, 56}, {5, 9, 3}}};

    double min = 100;
    double max = -100;

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            for (int k = 0; k < 3; ++k)
            {
                if (x[i][j][k] < min)
                    min = x[i][j][k];
                if (x[i][j][k] > max)
                    max = x[i][j][k];
            }
        }
    }

    cout << "max: " << max << endl;
    cout << "min: " << min << endl;
}
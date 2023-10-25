#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int i;
    cin >> i;

    int arr[15];

    int total = 0;

    for (int j = 0; j < i && j < 15; ++j)
    {
        arr[j] = j*j;
        total ++;
    }

    if (i <= 15 && i >= 0)
    {
        int count = 0;
        for (int j = i; j < 15; ++j)
        {
            arr[j] = 0;
            count ++;
            total ++;
            if (count >= 5)
                break;
        }

        for (int j = total; j < 15; ++j)
        {   
            arr[j] = 3;
            for (int k = 1; k < j; ++k)
            {
                arr[j] *= 3;
            }
        }
    }

    

    for (int j = 0; j < 15; ++j)
        cout << arr[j] << " ";
    return 0;
}
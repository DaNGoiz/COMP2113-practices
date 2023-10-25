#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;

    if (num <= 0)
    {
        return 0;
    }
    
    if (num%2 == 0)
    {
        num -= 1;
    }

    int space = num/2;
    int count = 1;

    while (count <= num)
    {
        for (int i = 0; i < space; i++)
        {
            cout << " ";
        }
        
        for (int i = 1; i <= count; i++)
        {
            cout << "*";
        }

        space -= 1;
        count += 2;

        cout << "\n";
    }

    return 0;
}

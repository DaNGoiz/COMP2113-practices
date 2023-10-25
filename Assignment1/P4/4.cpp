#include <iostream>
#include <iomanip> 
using namespace std;

int main(){
    int n;
    float x, total;
    cin >> x >> n >> total;

    if(n < 0) {return 0;}

    for (int i = 1; i <= n; i++)
    {
        float a;
        cin >> a;
        total = a + total * x;
    }

    cout << fixed << setprecision(6);
    cout << total << endl;
    return 0;
}
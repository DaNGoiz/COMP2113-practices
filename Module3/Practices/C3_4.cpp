#include <iostream>
using namespace std;

int main(){
 int x = 5;
 int y = 6;
 int z = 7;

 cout << (x+z)%y << ", " << (x%y)%z << ", " << (x*z)%y;
 return 0;
}
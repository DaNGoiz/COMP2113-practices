#include <iostream>
using namespace std;

double larger(double, double);

int main()
{
  double a, b;
  cin >> a >> b;
  cout << larger(a,b);
  return 0;
}

double larger(double x, double y)
{
  return (x >= y)? x:y;
}
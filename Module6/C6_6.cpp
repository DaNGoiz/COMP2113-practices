#include <iostream>
#include <string>
using namespace std;

int main()
{
    string first, second, third;
    getline(cin, first);
    cin >> second >> third;

    if (second.length() > first.length())
    {
    }
    else
    {
        int startIndex = 0;
        while ((startIndex = first.find(second, startIndex)) != string::npos)
        {
            first.replace(startIndex, second.length(), third);
            startIndex += third.length();
        }
    }

    cout << first << endl;
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;
    getline(cin, input);

    for (int i = 0; i < input.length(); ++i)
    {
        if (input[i] >= 65 && input[i] <= 90)
        {
            input[i] -= 'A' - 'a';
        }
        else if (input[i] < 65 || input[i] > 90 && input[i] < 97 || input[i] >122)
        {
            input.erase(i,1);
            --i;
        }
    }

    bool isPalidrome = true;
    for (int i = 0; i < input.length()/2; ++i)
    {
        if(input[i] != input[input.length()-i-1])
            isPalidrome = false;
    }

    if(isPalidrome == true)
        cout << "The input string is a palindrome.";
    else
        cout << "The input string is not a palindrome.";
}
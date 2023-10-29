#include <iostream>
#include <vector>
using namespace std;

int main () {
    int num;
    cin >> num;

    if (num <= 0) return 0;

    vector<int> pairs(num, 0);

    int numOfPairs = 0;
    int sum = 0;

    for (int i = 0; i < num; ++i) {
        string input;
        int cardNum;

        cin >> input;
        cardNum = stoi(input.substr(1));

        sum += cardNum;

        bool needToAdd = false;
        for (int j = 0; j < num; ++j) {
            if (pairs[j] == cardNum) {
                numOfPairs ++;
                pairs[j] = 0;
                needToAdd = false;
                break;
            }
            needToAdd = true;
        }

        if (needToAdd) {
            for (int j = 0; j < num; ++j) {
                if (pairs[j] == 0) {
                    pairs[j] = cardNum;
                    break;
                }
            }
        }
    }

    cout << numOfPairs << endl << sum << endl;

    return 0;
}

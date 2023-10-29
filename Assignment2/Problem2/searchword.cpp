#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

string toLowerCase(const string &str) {
    string lowercased = str;
    for (int i = 0; i < lowercased.length(); ++i) {
        if (lowercased[i] >= 'A' && lowercased[i] <= 'Z') {
            lowercased[i] = lowercased[i] - 'A' + 'a';
        }
    }
    return lowercased;
}

int SearchWord(string word, string fileName, int &nLines, int &total) {
    ifstream fin;
    fin.open(fileName);

    if (!fin.is_open()) {
        return 1;
    }

    string line;
    while (getline(fin,line)) {
        istringstream line_in(line);

        string inputWord;
        bool hasWord = false;
        while (line_in >> inputWord) {
            if (toLowerCase(inputWord) == toLowerCase(word)) {
                total ++;
                if (!hasWord) {
                    hasWord = true;
                    nLines ++;
                }
            }
        }
    }

    fin.close();


    return 0;
}
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

int main() {

    ifstream fin;
    fin.open("temperature.txt");

    ofstream fout;
    fout.open("average.txt");

    
    string line;
    while (getline(fin,line)) {
        istringstream line_in(line);
        string obj;
        int count = -1;
        double sum = 0;

        while (line_in >> obj) {
            if (count == -1) {
                fout << obj << " ";
                count ++;
                continue;
            }
            sum += stod(obj);
            count ++;
        }
        sum /= count;

        fout << fixed << setprecision(1) << sum << endl;
    }
        

    fin.close();
    fout.close();
    
    return 0;
}
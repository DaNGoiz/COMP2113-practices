#include <iostream>
#include <string>
#include <list>
using namespace std;

class Student {
public:
    string name;
    string major;
    int studentNumber;
};

int main () {
    list<Student> stuList;
    list<Student>::iterator stuItr;
    string input;
    cin >> input;
    while (input != "Quit") {
        if (input == "Add") {
            Student newStu;
            cin >> newStu.name >> newStu.major >> newStu.studentNumber;
            stuList.push_back(newStu);
            cout << "Added Successfully" << endl;
        }
        else if (input == "Search") {
            string name;
            string major;
            cin >> name >> major;

            bool found = false;
            for (stuItr = stuList.begin(); stuItr != stuList.end(); stuItr++) {
                Student finding = *stuItr;
                if (finding.name == name && finding.major == major) {
                    cout << "Student Number:" << finding.studentNumber << endl;
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "No Record found" << endl;
            }

        }

        cin >> input;
    }
    cout << "bye" << endl;
    return 0;
}
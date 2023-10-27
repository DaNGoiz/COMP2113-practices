// Handling user commands

#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {
	string input;
	cin >> input;
    vector<string> inputList;
	while (input != "exit") {
		if (input == "add") {
			// handle add command
            string courseCode, courseName, lecturer;
            cin >> courseCode >> courseName >> lecturer;
            inputList.push_back(courseCode);
            inputList.push_back(courseName);
            inputList.push_back(lecturer);
		}
		if (input == "show") {
			// handle show command
            string courseCode;
            cin >> courseCode;
            for (int i = 0; i < inputList.size(); ++i)
            {
                if (inputList[i] == courseCode) {
                    cout << "Name: " << inputList[i+1] << ", Lecturer: " << inputList[i+2] << endl;
                }
            }
		}
		cin >> input;
	}
	return 0;
}
#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<vector>
#include <algorithm>

using namespace std;


struct Student {
    int id;
    string name;
    Student() {
        id = 0;
        name = "invalid";
    };
    Student(int inputid, string inputname) {
        id = inputid;
        name = inputname;
    };
}; 

class Table { 
    public:       
        void InsertStudent(Student x, int y);       
        void SearchbyID(int x);         
        void SearchbyGrade(int y);         
        void Statistics();         
        void PrintAll();       
        // You can add more functions if you want. 
    private:       
        map<Student, int> records; 
};  

bool operator<(const Student& a, const Student& b) {  
    return a.id < b.id; 
} 

//insert one record in to the map 
void Table::InsertStudent(Student x, int y) {
    if (records.find(x) == records.end()) {
        records[x] = y;
    } else {
        cout << "Student exists." << endl;
    }
    
}

//return the name and grade of the student with id x
void Table::SearchbyID(int x) {
    // To be implemented
    bool found = false;
    for (const auto& pair : records) {
        if (pair.first.id == x) {
            cout << pair.first.name << endl << pair.second << endl;
            found = true;
            break;
        }
    }
    if (!found) cout << "No such student." << endl;
}

//return the id and name of the student with grade y
void Table::SearchbyGrade(int y) {
    // To be implemented
    bool found = false;
    for (const auto& pair : records) {
        if (pair.second == y) {
            cout << pair.first.id << " " << pair.first.name << endl;
            found = true;
        }
    }
    if (!found) cout << "No such record." << endl;
}

void Table::Statistics() {
    // To be implemented
    vector<pair<Student, float>> sortedRecords;
    sortedRecords.reserve(records.size());

    for (const auto& pair : records) {
        sortedRecords.push_back(pair);
    }

    sort(sortedRecords.begin(), sortedRecords.end(),
            [](const pair<Student, float>& a, const pair<Student, float>& b) {
                return a.second < b.second;
            });

    float max = sortedRecords.back().second;
    float min = sortedRecords.front().second;

    float median = 0;
    int size = sortedRecords.size();
    if (size % 2 != 0) {
        median = sortedRecords[size / 2].second;
    } else {
        median = (sortedRecords[size / 2 - 1].second + sortedRecords[size / 2].second) / 2;
    }

    cout << "Maximum " << max << endl << "Median " << median << endl << "Minimum " << min << endl;
}

//Print all records in the accending order of id
void Table::PrintAll() {
    // To be implemented
    std::vector<Student> students;
    students.reserve(records.size());

    for (const auto& pair : records) {
        students.push_back(pair.first);
    }

    std::sort(students.begin(), students.end(), [](const Student& a, const Student& b) {
        return a.id < b.id;
    });

    for (int i = 0; i < students.size(); i++) {
        cout << students[i].id << " " << students[i].name << " " << records[students[i]] << endl;
    }

}

int main() {
    Table t;
    string command;
    int id;
    string name;
    int grade;

    while (cin >> command) {
        if (command == "InsertStudent") {
            cin >> id >> name >> grade;
            Student s = {id, name};
            t.InsertStudent(s, grade);
        }
        
        else if (command == "SearchbyID") {
            cin >> id;
            t.SearchbyID(id);
        }
        
        else if (command == "SearchbyGrade") {
            cin >> grade;
            t.SearchbyGrade(grade);
        }
        
        else if (command == "PrintAll") {
            t.PrintAll();
        }
        
        else if (command == "Statistics") {
            t.Statistics();
        }
        
        else if (command == "exit") {
            break;
        }
    }
    return 0;
} 
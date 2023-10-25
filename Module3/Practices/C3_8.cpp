#include <iostream>
using namespace std;

int main(){
    float weight, height;
    cin >> weight >> height;

    float BMI = weight / (height * height);

    cout << "Your BMI = " << BMI << endl;
    cout << "BMI VALUES" << endl;
    cout << "Underweight: less than 18.5" << endl;
    cout << "Normal: between 18.5 and 24.9" << endl;
    cout << "Overweight: between 25 and 29.9" << endl;
    cout << "Obese: 30 or greater" << endl;
    return 0;
}
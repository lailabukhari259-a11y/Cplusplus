#include <iostream>
using namespace std;
int main() {
    string name1, name2, name3;
    int roll1, roll2, roll3;
    float gpa1, gpa2, gpa3;
    cout << "Enter name of Student 1: ";
    cin >> name1;
    cout << "Enter roll number of Student 1: ";
    cin >> roll1;
    cout << "Enter GPA of Student 1: ";
    cin >> gpa1;

    cout << endl;
    cout << "Enter name of Student 2: ";
    cin >> name2;
    cout << "Enter roll number of Student 2: ";
    cin >> roll2;
    cout << "Enter GPA of Student 2: ";
    cin >> gpa2;

    cout << endl;
    cout << "Enter name of Student 3: ";
    cin >> name3;
    cout << "Enter roll number of Student 3: ";
    cin >> roll3;
    cout << "Enter GPA of Student 3: ";
    cin >> gpa3;

    cout << endl;
    cout << "----- Student Records -----" << endl;
    cout << name1 << "\t" << roll1 << "\t" << gpa1 << endl;
    cout << name2 << "\t" << roll2 << "\t" << gpa2 << endl;
    cout << name3 << "\t" << roll3 << "\t" << gpa3 << endl;

    return 0;
}


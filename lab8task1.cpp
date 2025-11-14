#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll;
    float gpa;
};

int main() {
    Student s;
    cout << "Enter student name: ";
    getline(cin, s.name);

    cout << "Enter roll number: ";
    cin >> s.roll;

    cout << "Enter GPA: ";
    cin >> s.gpa;
    cout << "\n--- Student Information ---\n";
    cout << "Name: " << s.name << endl;
    cout << "Roll Number: " << s.roll << endl;
    cout << "GPA: " << s.gpa << endl;

    return 0;
}


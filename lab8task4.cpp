#include <iostream>
using namespace std;
struct Student {
    string name;
    int roll;
    float gpa;
};
int main() {
    Student s1, s2;
    cout << "Enter name, roll, GPA for Student 1: ";
    cin >> s1.name >> s1.roll >> s1.gpa;
    cout << "Enter name, roll, GPA for Student 2: ";
    cin >> s2.name >> s2.roll >> s2.gpa;
    cout << "\n--- Result ---\n";
    if (s1.gpa > s2.gpa) {
        cout << "Higher GPA: " << s1.name << " (GPA = " << s1.gpa << ")" << endl;
    }
    else if (s2.gpa > s1.gpa) {
        cout << "Higher GPA: " << s2.name << " (GPA = " << s2.gpa << ")" << endl;
    }
    else {
        cout << "Both students have equal GPA" << endl;
    }

    return 0;
}


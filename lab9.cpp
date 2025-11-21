#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream outFile("data.txt");
    if (!outFile) {
        cout << "Error creating file!" << endl;
        return 0;
    }
    string name;
    int age;
    float gpa;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter GPA: ";
    cin >> gpa;
    outFile << name << " " << age << " " << gpa << endl;
    outFile.close();
    cout << "\nData written to file successfully!\n\n";

    ifstream inFile("data.txt");
    if (!inFile) {
        cout << "Error opening file!" << endl;
        return 0;
    }
    string readName;
    int readAge;
    float readGpa;

    inFile >> readName >> readAge >> readGpa;
    inFile.close();
    cout << "------- Student Record From File -------" << endl;
    cout << "Name: " << readName << endl;
    cout << "Age: " << readAge << endl;
    cout << "GPA: " << readGpa << endl;

    return 0;
}


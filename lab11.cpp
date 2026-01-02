#include <iostream>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string n, int a)
    {
        name = n;
        age = a;
    }
};

// Derived class Student (Task 1, Task 2, Task 4)
class Student : public Person
{
public:
    int roll;
    float gpa;
    Student(string n, int a, int r, float g)
        : Person(n, a)
    {
        roll = r;
        gpa = g;
    }
    void display()
    {
        cout << "Student Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << roll << endl;
        cout << "GPA: " << gpa << endl;
        cout << "------------------" << endl;
    }
};
class Teacher : public Person
{
public:
    string subject;
    float salary;

    Teacher(string n, int a, string s, float sal)
        : Person(n, a)
    {
        subject = s;
        salary = sal;
    }

    void display()
    {
        cout << "Teacher Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
        cout << "------------------" << endl;
    }
};

int main()
{
    Student s1("Ali", 20, 1, 3.4);
    Student s2("Sara", 21, 2, 3.8);

    s1.display();
    s2.display();
    Teacher t1("Ahmad", 35, "Computer Science", 85000);
    t1.display();

    return 0;
}


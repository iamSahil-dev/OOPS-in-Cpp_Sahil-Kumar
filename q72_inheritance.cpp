// WAP to demonstrate inheritance

#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
    
public:
    void setPersonData(string n, int a) {
        name = n;
        age = a;
    }
    
    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int roll;
    string course;
    
public:
    void setStudentData(int r, string c) {
        roll = r;
        course = c;
    }
    
    void displayStudent() {
        displayPerson();
        cout << "Roll: " << roll << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    Student s;
    
    s.setPersonData("John", 20);
    s.setStudentData(101, "Computer Science");
    s.displayStudent();
    
    return 0;
}

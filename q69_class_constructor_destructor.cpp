// Class - private, public, constructor, destructor, member data, member function, inline function, static member and reference, inheritance, class hierarchy

#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;
    
public:
    Student() {
        roll = 0;
        name = "";
    }
    
    Student(int r, string n) {
        roll = r;
        name = n;
    }
    
    void display() {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
    }
    
    ~Student() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    int roll;
    string name;
    
    cout << "Enter roll number: ";
    cin >> roll;
    cout << "Enter name: ";
    cin >> name;
    
    Student s(roll, name);
    s.display();
    
    return 0;
}

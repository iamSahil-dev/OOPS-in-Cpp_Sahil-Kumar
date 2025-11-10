// WAP using this pointer with all the types of pointer

#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;
    
public:
    void setData(int roll, string name) {
        this->roll = roll;
        this->name = name;
    }
    
    void display() {
        cout << "Roll: " << this->roll << endl;
        cout << "Name: " << this->name << endl;
    }
};

int main() {
    Student s;
    int roll;
    string name;
    
    cout << "Enter roll number: ";
    cin >> roll;
    cout << "Enter name: ";
    cin >> name;
    
    s.setData(roll, name);
    s.display();
    
    return 0;
}

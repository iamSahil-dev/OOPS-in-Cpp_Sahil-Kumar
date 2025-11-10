// WAP to demonstrate static member

#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;
    static int count;
    
public:
    Student(int r, string n) {
        roll = r;
        name = n;
        count++;
    }
    
    void display() {
        cout << "Roll: " << roll << endl;
        cout << "Name: " << name << endl;
    }
    
    static void showCount() {
        cout << "Total students: " << count << endl;
    }
};

int Student::count = 0;

int main() {
    Student s1(1, "John");
    Student s2(2, "Alice");
    Student s3(3, "Bob");
    
    s1.display();
    s2.display();
    s3.display();
    
    Student::showCount();
    
    return 0;
}

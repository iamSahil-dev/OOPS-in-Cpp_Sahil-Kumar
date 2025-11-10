// WAP to demonstrate hierarchical inheritance

#include <iostream>
using namespace std;

class Parent {
protected:
    string name;
    
public:
    void setName(string n) {
        name = n;
    }
    
    void display() {
        cout << "Name: " << name << endl;
    }
};

class Child1 : public Parent {
public:
    void showChild1() {
        cout << "Child 1: ";
        display();
    }
};

class Child2 : public Parent {
public:
    void showChild2() {
        cout << "Child 2: ";
        display();
    }
};

int main() {
    Child1 c1;
    Child2 c2;
    
    c1.setName("Rahul");
    c2.setName("Priya");
    
    c1.showChild1();
    c2.showChild2();
    
    return 0;
}

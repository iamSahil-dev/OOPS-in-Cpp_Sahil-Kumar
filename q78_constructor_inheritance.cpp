// WAP to demonstrate constructor in inheritance

#include <iostream>
using namespace std;

class Base {
protected:
    int x;
    
public:
    Base(int a) {
        x = a;
        cout << "Base constructor called" << endl;
    }
    
    void displayBase() {
        cout << "Base x: " << x << endl;
    }
};

class Derived : public Base {
private:
    int y;
    
public:
    Derived(int a, int b) : Base(a) {
        y = b;
        cout << "Derived constructor called" << endl;
    }
    
    void displayDerived() {
        displayBase();
        cout << "Derived y: " << y << endl;
    }
};

int main() {
    Derived d(10, 20);
    d.displayDerived();
    
    return 0;
}

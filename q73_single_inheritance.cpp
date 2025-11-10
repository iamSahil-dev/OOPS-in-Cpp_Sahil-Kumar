// WAP to demonstrate single inheritance

#include <iostream>
using namespace std;

class Animal {
protected:
    string name;
    
public:
    void setName(string n) {
        name = n;
    }
    
    void eat() {
        cout << name << " is eating" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << name << " is barking" << endl;
    }
};

int main() {
    Dog d;
    
    d.setName("Tommy");
    d.eat();
    d.bark();
    
    return 0;
}

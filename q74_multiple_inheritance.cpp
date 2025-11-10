// WAP to demonstrate multiple inheritance

#include <iostream>
using namespace std;

class Father {
protected:
    string fatherName;
    
public:
    void setFatherName(string name) {
        fatherName = name;
    }
    
    void displayFather() {
        cout << "Father Name: " << fatherName << endl;
    }
};

class Mother {
protected:
    string motherName;
    
public:
    void setMotherName(string name) {
        motherName = name;
    }
    
    void displayMother() {
        cout << "Mother Name: " << motherName << endl;
    }
};

class Child : public Father, public Mother {
private:
    string childName;
    
public:
    void setChildName(string name) {
        childName = name;
    }
    
    void displayChild() {
        cout << "Child Name: " << childName << endl;
        displayFather();
        displayMother();
    }
};

int main() {
    Child c;
    
    c.setChildName("Rahul");
    c.setFatherName("Ramesh");
    c.setMotherName("Sita");
    c.displayChild();
    
    return 0;
}

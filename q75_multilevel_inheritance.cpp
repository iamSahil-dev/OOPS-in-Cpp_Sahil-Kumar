// WAP to demonstrate multilevel inheritance

#include <iostream>
using namespace std;

class GrandFather {
protected:
    string gfName;
    
public:
    void setGFName(string name) {
        gfName = name;
    }
    
    void displayGF() {
        cout << "GrandFather: " << gfName << endl;
    }
};

class Father : public GrandFather {
protected:
    string fName;
    
public:
    void setFName(string name) {
        fName = name;
    }
    
    void displayF() {
        cout << "Father: " << fName << endl;
    }
};

class Son : public Father {
private:
    string sName;
    
public:
    void setSName(string name) {
        sName = name;
    }
    
    void displayS() {
        cout << "Son: " << sName << endl;
        displayF();
        displayGF();
    }
};

int main() {
    Son s;
    
    s.setSName("Rahul");
    s.setFName("Ramesh");
    s.setGFName("Raghav");
    s.displayS();
    
    return 0;
}

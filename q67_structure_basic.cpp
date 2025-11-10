// Introduction to OOPS - User defined types, structure, union, polymorphism, encapsulation

#include <iostream>
using namespace std;

struct Rectangle {
    int length;
    int width;
    
    int area() {
        return length * width;
    }
};

int main() {
    Rectangle r;
    
    cout << "Enter length: ";
    cin >> r.length;
    cout << "Enter width: ";
    cin >> r.width;
    
    cout << "Area: " << r.area() << endl;
    
    return 0;
}

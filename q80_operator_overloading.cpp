// WAP to demonstrate operator overloading

#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;
    
public:
    Complex() {
        real = 0;
        imag = 0;
    }
    
    Complex(int r, int i) {
        real = r;
        imag = i;
    }
    
    Complex operator + (Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(5, 6);
    Complex c3;
    
    c3 = c1 + c2;
    
    cout << "First complex number: ";
    c1.display();
    cout << "Second complex number: ";
    c2.display();
    cout << "Sum: ";
    c3.display();
    
    return 0;
}

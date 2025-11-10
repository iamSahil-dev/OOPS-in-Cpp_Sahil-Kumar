// WAP to demonstrate inline function

#include <iostream>
using namespace std;

class Calculator {
public:
    inline int add(int a, int b) {
        return a + b;
    }
    
    inline int multiply(int a, int b) {
        return a * b;
    }
};

int main() {
    Calculator c;
    int num1, num2;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    cout << "Addition: " << c.add(num1, num2) << endl;
    cout << "Multiplication: " << c.multiply(num1, num2) << endl;
    
    return 0;
}

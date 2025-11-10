// WAP to create a function for Compare numbers

#include <iostream>
using namespace std;

void compareNumbers(int a, int b) {
    if (a > b) {
        cout << a << " is greater than " << b << endl;
    } else if (a < b) {
        cout << a << " is less than " << b << endl;
    } else {
        cout << a << " is equal to " << b << endl;
    }
}

int main() {
    int num1, num2;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    compareNumbers(num1, num2);
    
    return 0;
}

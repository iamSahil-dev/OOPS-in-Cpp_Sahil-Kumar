// Write a program to accept two numbers from the user and display maximum number

#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    if (num1 > num2) {
        cout << "Maximum number is: " << num1 << endl;
    } else {
        cout << "Maximum number is: " << num2 << endl;
    }
    
    return 0;
}

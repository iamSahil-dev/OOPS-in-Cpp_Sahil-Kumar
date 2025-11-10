// WAP to accept 3 numbers from user and display the maximum number using nested if

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;
    
    if (num1 > num2) {
        if (num1 > num3) {
            cout << "Maximum number is: " << num1 << endl;
        } else {
            cout << "Maximum number is: " << num3 << endl;
        }
    } else {
        if (num2 > num3) {
            cout << "Maximum number is: " << num2 << endl;
        } else {
            cout << "Maximum number is: " << num3 << endl;
        }
    }
    
    return 0;
}

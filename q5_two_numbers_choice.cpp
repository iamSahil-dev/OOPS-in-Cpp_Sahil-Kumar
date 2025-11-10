// WAP to accept two numbers and choose one choice

#include <iostream>
using namespace std;

int main() {
    int num1, num2, choice;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    cout << "Choose an option:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    
    if (choice == 1) {
        cout << "Result: " << num1 + num2 << endl;
    } else if (choice == 2) {
        cout << "Result: " << num1 - num2 << endl;
    } else if (choice == 3) {
        cout << "Result: " << num1 * num2 << endl;
    } else if (choice == 4) {
        if (num2 != 0) {
            cout << "Result: " << num1 / num2 << endl;
        } else {
            cout << "Cannot divide by zero" << endl;
        }
    } else {
        cout << "Invalid choice" << endl;
    }
    
    return 0;
}

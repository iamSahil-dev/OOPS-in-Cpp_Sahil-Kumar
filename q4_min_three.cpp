// Write a program to accept three numbers from the user and display minimum number

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, min;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;
    
    min = num1;
    
    if (num2 < min) {
        min = num2;
    }
    if (num3 < min) {
        min = num3;
    }
    
    cout << "Minimum number is: " << min << endl;
    
    return 0;
}

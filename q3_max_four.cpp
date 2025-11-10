// WAP to accept four numbers from the user and display maximum number

#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3, num4, max;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;
    cout << "Enter fourth number: ";
    cin >> num4;
    
    max = num1;
    
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }
    if (num4 > max) {
        max = num4;
    }
    
    cout << "Maximum number is: " << max << endl;
    
    return 0;
}

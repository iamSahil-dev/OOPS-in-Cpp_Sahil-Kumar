// WAP to create a function for Maximum number

#include <iostream>
using namespace std;

int findMax(int a, int b, int c) {
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}

int main() {
    int num1, num2, num3;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;
    
    cout << "Maximum number is: " << findMax(num1, num2, num3) << endl;
    
    return 0;
}

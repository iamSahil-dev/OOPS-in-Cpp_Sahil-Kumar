// WAP to create a function for Minimum and Maximum

#include <iostream>
using namespace std;

void findMinMax(int a, int b, int c) {
    int min = a, max = a;
    
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    
    cout << "Minimum number is: " << min << endl;
    cout << "Maximum number is: " << max << endl;
}

int main() {
    int num1, num2, num3;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;
    
    findMinMax(num1, num2, num3);
    
    return 0;
}

// WAP to reverse a number

#include <iostream>
using namespace std;

int main() {
    int num, remainder, reverse = 0;
    
    cout << "Enter a number: ";
    cin >> num;
    
    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }
    
    cout << "Reversed number: " << reverse << endl;
    
    return 0;
}

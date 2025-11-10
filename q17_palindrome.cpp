// WAP to check Palindrome number

#include <iostream>
using namespace std;

int main() {
    int num, original, remainder, reverse = 0;
    
    cout << "Enter a number: ";
    cin >> num;
    
    original = num;
    
    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }
    
    if (original == reverse) {
        cout << original << " is a Palindrome number" << endl;
    } else {
        cout << original << " is not a Palindrome number" << endl;
    }
    
    return 0;
}

// WAP to create a function for Palindrome

#include <iostream>
using namespace std;

int checkPalindrome(int num) {
    int original = num, reverse = 0, remainder;
    
    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }
    
    if (original == reverse) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    if (checkPalindrome(num)) {
        cout << num << " is a Palindrome number" << endl;
    } else {
        cout << num << " is not a Palindrome number" << endl;
    }
    
    return 0;
}

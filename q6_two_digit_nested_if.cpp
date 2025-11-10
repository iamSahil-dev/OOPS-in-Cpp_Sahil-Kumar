// Write a program to accept a no. from a user and check if it is 2 digit using nested if

#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    if (num >= 10) {
        if (num <= 99) {
            cout << num << " is a 2 digit number" << endl;
        } else {
            cout << num << " is not a 2 digit number" << endl;
        }
    } else {
        cout << num << " is not a 2 digit number" << endl;
    }
    
    return 0;
}

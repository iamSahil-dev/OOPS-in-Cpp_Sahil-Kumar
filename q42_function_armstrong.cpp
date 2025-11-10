// WAP to create a function for Armstrong number

#include <iostream>
using namespace std;

int checkArmstrong(int num) {
    int original = num, sum = 0, remainder;
    
    while (num != 0) {
        remainder = num % 10;
        sum = sum + (remainder * remainder * remainder);
        num = num / 10;
    }
    
    if (sum == original) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    if (checkArmstrong(num)) {
        cout << num << " is an Armstrong number" << endl;
    } else {
        cout << num << " is not an Armstrong number" << endl;
    }
    
    return 0;
}

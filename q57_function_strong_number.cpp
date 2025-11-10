// WAP to check strong number using function

#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int checkStrong(int num) {
    int original = num, sum = 0;
    while (num != 0) {
        int digit = num % 10;
        sum = sum + factorial(digit);
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
    
    if (checkStrong(num)) {
        cout << num << " is a Strong number" << endl;
    } else {
        cout << num << " is not a Strong number" << endl;
    }
    
    return 0;
}

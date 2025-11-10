// WAP to create a function for Prime number

#include <iostream>
using namespace std;

int checkPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    if (checkPrime(num)) {
        cout << num << " is a Prime number" << endl;
    } else {
        cout << num << " is not a Prime number" << endl;
    }
    
    return 0;
}

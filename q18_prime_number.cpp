// WAP to check Prime number

#include <iostream>
using namespace std;

int main() {
    int num, i, isPrime = 1;
    
    cout << "Enter a number: ";
    cin >> num;
    
    if (num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    
    if (isPrime == 1) {
        cout << num << " is a Prime number" << endl;
    } else {
        cout << num << " is not a Prime number" << endl;
    }
    
    return 0;
}

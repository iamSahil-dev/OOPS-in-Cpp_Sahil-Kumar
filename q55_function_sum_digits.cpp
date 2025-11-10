// WAP to find sum of digits using function

#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum = sum + (num % 10);
        num = num / 10;
    }
    return sum;
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Sum of digits: " << sumOfDigits(num) << endl;
    
    return 0;
}

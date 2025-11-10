// WAP to count digits in a number using function

#include <iostream>
using namespace std;

int countDigits(int num) {
    int count = 0;
    if (num == 0) {
        return 1;
    }
    while (num != 0) {
        count++;
        num = num / 10;
    }
    return count;
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Number of digits: " << countDigits(num) << endl;
    
    return 0;
}

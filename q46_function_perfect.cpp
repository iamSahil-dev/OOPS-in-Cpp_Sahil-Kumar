// WAP to create a function for Perfect number

#include <iostream>
using namespace std;

int checkPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum = sum + i;
        }
    }
    if (sum == num && num > 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    if (checkPerfect(num)) {
        cout << num << " is a Perfect number" << endl;
    } else {
        cout << num << " is not a Perfect number" << endl;
    }
    
    return 0;
}

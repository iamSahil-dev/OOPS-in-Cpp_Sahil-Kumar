// Count all prime numbers

#include <iostream>
using namespace std;

int main() {
    int matrix[3][3], count = 0;
    
    cout << "Enter elements of 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int num = matrix[i][j];
            int isPrime = 1;
            if (num <= 1) {
                isPrime = 0;
            } else {
                for (int k = 2; k < num; k++) {
                    if (num % k == 0) {
                        isPrime = 0;
                        break;
                    }
                }
            }
            if (isPrime == 1) {
                count++;
            }
        }
    }
    
    cout << "Count of prime numbers: " << count << endl;
    
    return 0;
}
